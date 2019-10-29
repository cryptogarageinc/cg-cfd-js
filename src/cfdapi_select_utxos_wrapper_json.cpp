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
// clang-format off
// @formatter:off

// ------------------------------------------------------------------------
// UtxoJsonWrapData
// ------------------------------------------------------------------------
void UtxoJsonWrapData::ConvertFromUtxoModel(const Utxo& data) {
  if (data.binary_data != nullptr) {
    this = static_cast<UtxoJsonData*>(data.binary_data);
  }
}

Utxo UtxoJsonWrapData::ConvertToUtxo() const {
  const Utxo result;
  result.txid = Txid(txid_).GetData().GetBytes().data();
  result.vout = vout_;
  result.amount = static_cast<uint64_t>(amount_);
  result.asset = ConfidentialAssetId(asset_).GetData().GetBytes().data();
  // FIXME(fujita-cg): descriptor をUTXOモデルに追加したい?
  result.binary_data = this;
  return result;
}

void UtxoJsonWrapData::PostDeserialize() {
  SetUtxo(ConvertToUtxo());
}

// ------------------------------------------------------------------------
// CoinSelectionFeeInfomationWrapField(不要?)
// ------------------------------------------------------------------------

// ------------------------------------------------------------------------
// SelectUtxosWrapRequest
// ------------------------------------------------------------------------

// TODO: Deserialize時に、Requestを UtxoJsonWrapData に変換する処理
//   UtxoJsonWrapDataではなく、Requestにメンバーとしてstd::vector<Utxo>を
//   持たせても良いかもしれない

// ------------------------------------------------------------------------
// SelectUtxosWrapResponse
// ------------------------------------------------------------------------

// TODO: Serialize時に、 UtxoJsonWrapData からResponseに変換する処理

// @formatter:on
// clang-format on

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd
