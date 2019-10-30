// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_select_utxos_json.cpp
 *
 * @brief JSONマッピングファイル (自動生成)
 */
#include <set>
#include <string>
#include <vector>

#include "cfdapi_select_utxos_wrapper_json.h"  // NOLINT

#include "cfdcore/cfdcore_elements_transaction.h"

namespace cfd {
namespace js {
namespace api {
namespace json {

using cfd::core::ConfidentialAssetId;
using cfd::core::JsonClassBase;
using cfd::core::JsonObjectVector;
using cfd::core::JsonValueVector;
using cfd::core::JsonVector;

// ------------------------------------------------------------------------
// CoinSelectionFeeInfomationWrapField(不要?)
// ------------------------------------------------------------------------

// ------------------------------------------------------------------------
// SelectUtxosWrapRequest
// ------------------------------------------------------------------------
void SelectUtxosWrapRequest::PostDeserialize() {
  JsonObjectVector<UtxoJsonData, UtxoJsonDataStruct>& json_list = GetUtxos();
  utxo_list_.resize(json_list.size());
  const auto& ite = json_list.cbegin();
  const auto& ite_end = json_list.cend();
  auto& utxo_ite = utxo_list_.begin();
  while (ite != ite_end) {
    ConvertToUtxo(*ite, utxo_ite);
    ++ite;
    ++utxo_ite;
  }
}

const std::vector<Utxo>& SelectUtxosWrapRequest::GetUtxoList() const {
  return utxo_list_;
}

void SelectUtxosWrapRequest::ConvertToUtxo(const UtxoJsonData& data, Utxo* utxo) {
#ifndef CFD_DISABLE_ELEMENTS
  CoinSelection::ConvertToUtxo(
    0, BlockHash(), Txid(data.GetTxid()), data.GetVout(), Script(),
    data.GetDescriptor(), Amount::CreateBySatoshiAmount(data.GetAmount()),
    ConfidentialAssetId(data.GetAsset()), reinterpret_cast<const void*>(&data), utxo);
#else
  CoinSelection::ConvertToUtxo(
    0, BlockHash(), Txid(data.GetTxid()), data.GetVout(), Script(),
    data.GetDescriptor(), Amount::CreateBySatoshiAmount(data.GetAmount()),
    reinterpret_cast<const void*>(&data), utxo);
#endif  // CFD_DISABLE_ELEMENTS
}

// ------------------------------------------------------------------------
// SelectUtxosWrapResponse
// ------------------------------------------------------------------------
void SelectUtxosWrapResponse::SetTargetUtxoList(const std::vector<Utxo>& utxo_list) {
  JsonObjectVector<UtxoJsonData, UtxoJsonDataStruct>& json_list = GetUtxos();
  json_list.clear();
  Utxo temp;
  for (const auto& utxo : utxo_list) {
    if (utxo.binary_data != nullptr) {
      const UtxoJsonData* json_data = static_cast<const UtxoJsonData*>(utxo.binary_data);
      // 整合性チェック(末尾の作業領域は除外)
      SelectUtxosWrapRequest::ConvertToUtxo(*json_data, &temp);
      if (memcmp(&utxo, &temp, sizeof(Utxo) - 24) == 0) {
        json_list.push_back(*json_data);
      }
    }
  }
}

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd
