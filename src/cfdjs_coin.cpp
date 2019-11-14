// Copyright 2019 CryptoGarage
/**
 * @file cfdjs_coin.cpp
 *
 * @brief cfd-apiで利用するCoin操作の実装ファイル
 */
#include <algorithm>
#include <string>
#include <vector>

#include "cfd/cfd_utxo.h"
#include "cfdjs_coin.h"      // NOLINT
#include "cfdjs_internal.h"  // NOLINT

namespace cfd {
namespace js {
namespace api {
namespace json {

using cfd::Utxo;
using cfd::core::CfdError;
using cfd::core::CfdException;
using cfd::AmountMap;

//! Defaultとして設定するBitcoin の Asset Id
static constexpr const char* kDefaultBitCoinAsset = "";

void CoinJsonApi::SelectUtxos(
    SelectUtxosWrapRequest* req, SelectUtxosWrapResponse* res) {
  const std::vector<Utxo>& utxos = req->GetUtxoList();
  CoinSelectionFeeInfomationField fee_info = req->GetFeeInfo();
  AmountMap map_target_amount;
  bool use_targets = false;

  // in parameter
  CoinSelectionOption option;
  UtxoFilter filter;
  if (!req->GetIsElements()) {
    // Bitcoin
    map_target_amount[kDefaultBitCoinAsset] = Amount::CreateBySatoshiAmount(req->GetTargetAmount());
    option.InitializeTxSizeInfo();
  } else {
    // Elements
#ifndef CFD_DISABLE_ELEMENTS
    option.InitializeConfidentialTxSizeInfo();
    if (!req->GetTargetAmountMap().empty()) {
      const AmountMap& targets = req->GetTargetAmountMap();
      map_target_amount.insert(targets.begin(), targets.end());
      use_targets = true;
    } else {
      warn(
          CFD_LOG_SOURCE,
          "Failed to SelectUtxos. targets is required.");
      throw CfdException(
          CfdError::kCfdIllegalArgumentError,
          "Failed to SelectUtxos. targets is required.");
    }

    // set fee asset
    if (!fee_info.GetFeeAsset().empty()) {
      std::string fee_asset = fee_info.GetFeeAsset();
      option.SetFeeAsset(ConfidentialAssetId(fee_asset));
    } else if (fee_info.GetFeeRate() == 0 || fee_info.GetLongTermFeeRate() == 0) {
      // fall through
    } else {
      warn(
          CFD_LOG_SOURCE,
          "Failed to SelectUtxos. feeAsset is required.");
      throw CfdException(
          CfdError::kCfdIllegalArgumentError,
          "Failed to SelectUtxos. feeAsset is required.");
    }
#else
    warn(CFD_LOG_SOURCE, "Not Support Elements.");
    throw CfdException(
        CfdError::kCfdIllegalStateError, "Not Support Elements.");
#endif  //  CFD_DISABLE_ELEMENTS
  }
  option.SetEffectiveFeeBaserate(fee_info.GetFeeRate());
  option.SetLongTermFeeBaserate(fee_info.GetLongTermFeeRate());
  option.SetKnapsackMinimumChange(fee_info.GetKnapsackMinChange());

  // out parameter
  AmountMap map_select_amount;
  Amount utxo_fee;
  Amount tx_fee = Amount::CreateBySatoshiAmount(fee_info.GetTxFeeAmount());
  std::map<std::string, bool> map_use_bnb;

  CoinSelection coin_selection;
  std::vector<Utxo> ret_utxos = coin_selection.SelectCoins(
      map_target_amount, utxos, filter, option, tx_fee, &map_select_amount, &utxo_fee,
      &map_use_bnb);

  res->SetTargetUtxoList(ret_utxos);
  if (use_targets) {
    res->SetSelectedAmountMap(map_select_amount);
    res->SetIgnoreItem("selectedAmount");
  } else {
    if (map_select_amount.size() != 1) {
      // FIXME: Exception?
    }
    res->SetSelectedAmount(map_select_amount.begin()->second.GetSatoshiValue());
    res->SetIgnoreItem("selectedAmounts");
  }
  if (utxo_fee == 0) {
    res->SetIgnoreItem("utxoFeeAmount");
  }
  res->SetUtxoFeeAmount(utxo_fee.GetSatoshiValue());
  Amount fee = tx_fee;
  fee += utxo_fee;
  res->SetFeeAmount(fee.GetSatoshiValue());
  if (fee == 0) {
    res->SetIgnoreItem("feeAmount");
  }
}

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd
