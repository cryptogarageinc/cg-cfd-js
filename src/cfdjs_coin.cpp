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
  if (!fee_info.GetIsElements()) {
    // Bitcoin
    TransactionController txc(fee_info.GetTransaction());
    option.InitializeTxSize(txc);
  } else {
    // Elements
#ifndef CFD_DISABLE_ELEMENTS
    ConfidentialTransactionController ctxc(fee_info.GetTransaction());
    option.InitializeConfidentialTxSize(ctxc);
    option.SetFeeAsset(ConfidentialAssetId(req->GetTargetAsset()));
    filter.target_asset = ConfidentialAssetId(req->GetTargetAsset());
#else
    warn(CFD_LOG_SOURCE, "Not Support Elements.");
    throw CfdException(
        CfdError::kCfdIllegalStateError, "Not Support Elements.");
#endif  //  CFD_DISABLE_ELEMENTS
  }
  option.SetEffectiveFeeBaserate(fee_info.GetFeeRate());

  // out parameter
  Amount select_value;
  Amount fee;

  CoinSelection coin_selection;
  std::vector<Utxo> ret_utxos = coin_selection.SelectCoinsMinConf(
      target_amount, utxos, filter, option, &select_value, &fee);

  res->SetTargetUtxoList(ret_utxos);
  res->SetFeeAmount(fee.GetSatoshiValue());
  res->SetSelectedAmount(select_value.GetSatoshiValue());
}

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd
