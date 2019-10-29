// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_select_utxos_wrapper_json.h
 *
 * @brief JSONマッピングファイル
 */
#ifndef CFD_JS_SRC_CFDAPI_SELECT_UTXOS_WRAPPER_JSON_H_
#define CFD_JS_SRC_CFDAPI_SELECT_UTXOS_WRAPPER_JSON_H_

#include "cfdapi_select_utxos_json.h"  // NOLINT
#include "cfd/cfd_utxo.h"
#include "cfdjs/cfdjs_struct.h"

namespace cfd {
namespace js {
namespace api {
namespace json {

using cfd::core::JsonClassBase;
using cfd::core::JsonObjectVector;
using cfd::core::JsonValueVector;
using cfd::core::JsonVector;
// clang-format off
// @formatter:off

// ------------------------------------------------------------------------
// UtxoJsonWrapData
// ------------------------------------------------------------------------
/**
 * @brief UtxoJsonWrapDataクラス
 */
class UtxoJsonWrapData
  : public UtxoJsonData {
 public:
  /**
   * @brief 構造体からクラスへ変換する.
   * @param[in] data   構造体データ
   */
  void ConvertFromUtxoDataStruct(
      const UtxoDataStruct& data);

  /**
   * @brief クラスから内部モデルへ変換する.
   * @return  Utxoデータ
   */
  Utxo ConvertToUtxo() const;

  /**
   * @brief Utxoデータを返却する.
   * @return Utxoインスタンス
   */
  Utxo GetUtxo() const { return utxo_; };

  /**
   * @brief Utxoデータを設定する
   * @param[in] 設定するUtxoインスタンス
   */
  void SetUtxo(const Utxo& utxo) {
    utxo_ = utxo;
  };
  
  /**
   * @brief デシリアライズ終了時にコールされる関数。
   *
   * 必要に応じて継承クラス側でオーバーライドする。
   */
  virtual void PostDeserialize();

 private:
  Utxo utxo_;
};

// ------------------------------------------------------------------------
// CoinSelectionFeeInfomationWrapField(不要?)
// ------------------------------------------------------------------------

// ------------------------------------------------------------------------
// SelectUtxosWrapRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API（SelectUtxosWrapRequest）クラス
 */
class SelectUtxosWrapRequest
  : public SelectUtxosRequest {
 public:

 // TODO: Deserialize時の変換処理

 protected:
 
 private:
};

// ------------------------------------------------------------------------
// SelectUtxosWrapResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API（SelectUtxosWrapResponse）クラス
 */
class SelectUtxosWrapResponse
  : public SelectUtxosResponse {
 public:

 // TODO: Serialize時の変換処理

 protected:
 
 private:
};

// @formatter:on
// clang-format on

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_SRC_CFDAPI_SELECT_UTXOS_JSON_H_
