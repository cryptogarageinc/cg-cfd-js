// Copyright 2019 CryptoGarage
/**
 * @file cfdjs_coin.cpp
 *
 * @brief cfd-apiで利用するCoin操作の実装ファイル
 */
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

void CoinJsonApi::SelectUtxos(
    SelectUtxosWrapRequest* req, SelectUtxosWrapResponse* res) {
  const std::vector<Utxo>& utxos = req->GetUtxoList();
  CoinSelectionFeeInfomationField fee_info = req->GetFeeInfo();
  Amount target_amount = Amount::CreateBySatoshiAmount(req->GetTargetAmount());
  std::string target_asset = req->GetTargetAsset();

  // in parameter
  CoinSelectionOption option;
  UtxoFilter filter;
  if (!req->GetIsElements()) {
    // Bitcoin
    option.InitializeTxSizeInfo();
  } else {
    // Elements
#ifndef CFD_DISABLE_ELEMENTS
    option.InitializeConfidentialTxSizeInfo();
    if (!req->GetTargetAsset().empty()) {
      filter.target_asset = ConfidentialAssetId(req->GetTargetAsset());
    }
    if (!fee_info.GetFeeAsset().empty()) {
      option.SetFeeAsset(ConfidentialAssetId(fee_info.GetFeeAsset()));
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
  Amount select_value;
  Amount utxo_fee;
  Amount tx_fee = Amount::CreateBySatoshiAmount(fee_info.GetTxFeeAmount());
  bool use_bnb = false;

  CoinSelection coin_selection;
  std::vector<Utxo> ret_utxos = coin_selection.SelectCoinsMinConf(
      target_amount, utxos, filter, option, tx_fee, &select_value, &utxo_fee,
      &use_bnb);

  res->SetTargetUtxoList(ret_utxos);
  res->SetSelectedAmount(select_value.GetSatoshiValue());
  res->SetUtxoFeeAmount(utxo_fee.GetSatoshiValue());
  if (!use_bnb) {
    res->SetIgnoreItem("feeAmount");
  } else {
    Amount fee = tx_fee;
    fee += utxo_fee;
    res->SetFeeAmount(fee.GetSatoshiValue());
  }
}

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd
