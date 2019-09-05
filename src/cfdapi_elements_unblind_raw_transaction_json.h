// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_elements_unblind_raw_transaction_json.h
 *
 * @brief JSONマッピングファイル (自動生成)
 */
#ifndef CFD_JS_SRC_CFDAPI_ELEMENTS_UNBLIND_RAW_TRANSACTION_JSON_H_
#define CFD_JS_SRC_CFDAPI_ELEMENTS_UNBLIND_RAW_TRANSACTION_JSON_H_

#include <set>
#include <string>
#include <vector>

#include "cfdcore/cfdcore_json_mapping_base.h"

#include "cfd/cfdapi_struct.h"

namespace cfd {
namespace api {

using cfdcore::JsonClassBase;
using cfdcore::JsonObjectVector;
using cfdcore::JsonValueVector;
using cfdcore::JsonVector;
// clang-format off
// @formatter:off

// ------------------------------------------------------------------------
// UnblindRawTransactionRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API（UnblindRawTransactionRequest）クラス
 */
class UnblindRawTransactionRequest
  : public cfdcore::JsonClassBase<UnblindRawTransactionRequest> {
 public:
  UnblindRawTransactionRequest() {
    CollectFieldName();
  }
  virtual ~UnblindRawTransactionRequest() {
    // do nothing
  }
  /**
   * @brief フィールド名を収集する.
   */
  static void CollectFieldName();

  /**
   * @brief txHex 取得処理
   * @return txHex
   */
  std::string GetTxHex() {
    return tx_hex_;
  }
  /**
   * @brief txHex 設定処理
   * @param[in] tx_hex    設定値
   */
  void SetTxHex(  // line separate
    const std::string& tx_hex) {  // NOLINT
    this->tx_hex_ = tx_hex;
  }
  /**
   * @brief txHex データ型の取得処理
   * @return txHexのデータ型
   */
  static std::string GetTxHexFieldType() {
    return "std::string";
  }
  /**
   * @brief txHex フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetTxHexString(  // line separate
      const UnblindRawTransactionRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.tx_hex_);
  }
  /**
   * @brief txHex フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetTxHexString(  // line separate
      UnblindRawTransactionRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.tx_hex_, json_value);
  }

  /**
   * @brief targetOutputIndex 取得処理
   * @return targetOutputIndex
   */
  int64_t GetTargetOutputIndex() {
    return target_output_index_;
  }
  /**
   * @brief targetOutputIndex 設定処理
   * @param[in] target_output_index    設定値
   */
  void SetTargetOutputIndex(  // line separate
    const int64_t& target_output_index) {  // NOLINT
    this->target_output_index_ = target_output_index;
  }
  /**
   * @brief targetOutputIndex データ型の取得処理
   * @return targetOutputIndexのデータ型
   */
  static std::string GetTargetOutputIndexFieldType() {
    return "int64_t";
  }
  /**
   * @brief targetOutputIndex フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetTargetOutputIndexString(  // line separate
      const UnblindRawTransactionRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.target_output_index_);
  }
  /**
   * @brief targetOutputIndex フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetTargetOutputIndexString(  // line separate
      UnblindRawTransactionRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.target_output_index_, json_value);
  }

  /**
   * @brief blindingKeys 取得処理
   * @return blindingKeys
   */
  JsonValueVector<std::string>& GetBlindingKeys() {  // NOLINT
    return blinding_keys_;
  }
  /**
   * @brief blindingKeys 設定処理
   * @param[in] blinding_keys    設定値
   */
  void SetBlindingKeys(  // line separate
      const JsonValueVector<std::string>& blinding_keys) {  // NOLINT
    this->blinding_keys_ = blinding_keys;
  }
  /**
   * @brief blindingKeys データ型の取得処理
   * @return blindingKeysのデータ型
   */
  static std::string GetBlindingKeysFieldType() {
    return "JsonValueVector<std::string>";  // NOLINT
  }
  /**
   * @brief blindingKeys フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetBlindingKeysString(  // line separate
      const UnblindRawTransactionRequest& obj) {  // NOLINT
    // Serialize内部のpre/post処理でメンバ変数の置換が起こり得るためconstにしない
    return obj.blinding_keys_.Serialize();
  }
  /**
   * @brief blindingKeys フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetBlindingKeysString(  // line separate
      UnblindRawTransactionRequest& obj,  // NOLINT
      const UniValue& json_value) {
    obj.blinding_keys_.DeserializeUniValue(json_value);
  }

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  void SetIgnoreItem(const std::string& key) {
    ignore_items.insert(key);
  }

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  void ConvertFromStruct(
      const UnblindRawTransactionRequestStruct& data);

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  UnblindRawTransactionRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief Mapテーブルの型名定義
   */
  using UnblindRawTransactionRequestMapTable =
    cfdcore::JsonTableMap<UnblindRawTransactionRequest>;

  /**
   * @brief JSONマッピングオブジェクトを取得する。
   * @return JSONマッピングオブジェクト
   * @see cfdcore::JsonClassBase::GetJsonMapper()
   */
  virtual const UnblindRawTransactionRequestMapTable& GetJsonMapper() const {  // NOLINT
    return json_mapper;
  }
  /**
   * @brief JSONマッピングのアイテム一覧を取得する。
   * 対象の変数名を、定義順序に従い一覧取得する。
   * @return JSONマッピングのアイテム一覧
   * @see cfdcore::JsonClassBase::GetJsonItemList()
   */
  virtual const std::vector<std::string>& GetJsonItemList() const {
    return item_list;
  }
  /**
   * @brief JSONマッピング時に無視するアイテム一覧を取得する。
   * Serialize時に対象の変数を無視する。
   * @return JSONマッピング時に無視するアイテム一覧
   * @see cfdcore::JsonClassBase::GetIgnoreItem()
   */
  virtual const std::set<std::string>& GetIgnoreItem() const {
    return ignore_items;
  }

 private:
 /**
  * @brief JsonFunctionMapテーブル
  */
  static UnblindRawTransactionRequestMapTable json_mapper;
  /**
   * @brief フィールド名リスト
   */
  static std::vector<std::string> item_list;
  /**
   * @brief 無視リスト
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(txHex) のvalue
   */
  std::string tx_hex_ = "";
  /**
   * @brief JsonAPI(targetOutputIndex) のvalue
   */
  int64_t target_output_index_ = -1;
  /**
   * @brief JsonAPI(blindingKeys) のvalue
   */
  JsonValueVector<std::string> blinding_keys_;  // NOLINT
};

// ------------------------------------------------------------------------
// UnblindOutput
// ------------------------------------------------------------------------
/**
 * @brief JSON-API（UnblindOutput）クラス
 */
class UnblindOutput
  : public cfdcore::JsonClassBase<UnblindOutput> {
 public:
  UnblindOutput() {
    CollectFieldName();
  }
  virtual ~UnblindOutput() {
    // do nothing
  }
  /**
   * @brief フィールド名を収集する.
   */
  static void CollectFieldName();

  /**
   * @brief asset 取得処理
   * @return asset
   */
  std::string GetAsset() {
    return asset_;
  }
  /**
   * @brief asset 設定処理
   * @param[in] asset    設定値
   */
  void SetAsset(  // line separate
    const std::string& asset) {  // NOLINT
    this->asset_ = asset;
  }
  /**
   * @brief asset データ型の取得処理
   * @return assetのデータ型
   */
  static std::string GetAssetFieldType() {
    return "std::string";
  }
  /**
   * @brief asset フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetAssetString(  // line separate
      const UnblindOutput& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.asset_);
  }
  /**
   * @brief asset フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetAssetString(  // line separate
      UnblindOutput& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.asset_, json_value);
  }

  /**
   * @brief blindFactor 取得処理
   * @return blindFactor
   */
  std::string GetBlindFactor() {
    return blind_factor_;
  }
  /**
   * @brief blindFactor 設定処理
   * @param[in] blind_factor    設定値
   */
  void SetBlindFactor(  // line separate
    const std::string& blind_factor) {  // NOLINT
    this->blind_factor_ = blind_factor;
  }
  /**
   * @brief blindFactor データ型の取得処理
   * @return blindFactorのデータ型
   */
  static std::string GetBlindFactorFieldType() {
    return "std::string";
  }
  /**
   * @brief blindFactor フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetBlindFactorString(  // line separate
      const UnblindOutput& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.blind_factor_);
  }
  /**
   * @brief blindFactor フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetBlindFactorString(  // line separate
      UnblindOutput& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.blind_factor_, json_value);
  }

  /**
   * @brief assetBlindFactor 取得処理
   * @return assetBlindFactor
   */
  std::string GetAssetBlindFactor() {
    return asset_blind_factor_;
  }
  /**
   * @brief assetBlindFactor 設定処理
   * @param[in] asset_blind_factor    設定値
   */
  void SetAssetBlindFactor(  // line separate
    const std::string& asset_blind_factor) {  // NOLINT
    this->asset_blind_factor_ = asset_blind_factor;
  }
  /**
   * @brief assetBlindFactor データ型の取得処理
   * @return assetBlindFactorのデータ型
   */
  static std::string GetAssetBlindFactorFieldType() {
    return "std::string";
  }
  /**
   * @brief assetBlindFactor フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetAssetBlindFactorString(  // line separate
      const UnblindOutput& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.asset_blind_factor_);
  }
  /**
   * @brief assetBlindFactor フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetAssetBlindFactorString(  // line separate
      UnblindOutput& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.asset_blind_factor_, json_value);
  }

  /**
   * @brief amount 取得処理
   * @return amount
   */
  int64_t GetAmount() {
    return amount_;
  }
  /**
   * @brief amount 設定処理
   * @param[in] amount    設定値
   */
  void SetAmount(  // line separate
    const int64_t& amount) {  // NOLINT
    this->amount_ = amount;
  }
  /**
   * @brief amount データ型の取得処理
   * @return amountのデータ型
   */
  static std::string GetAmountFieldType() {
    return "int64_t";
  }
  /**
   * @brief amount フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetAmountString(  // line separate
      const UnblindOutput& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.amount_);
  }
  /**
   * @brief amount フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetAmountString(  // line separate
      UnblindOutput& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.amount_, json_value);
  }

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  void SetIgnoreItem(const std::string& key) {
    ignore_items.insert(key);
  }

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  void ConvertFromStruct(
      const UnblindOutputStruct& data);

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  UnblindOutputStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief Mapテーブルの型名定義
   */
  using UnblindOutputMapTable =
    cfdcore::JsonTableMap<UnblindOutput>;

  /**
   * @brief JSONマッピングオブジェクトを取得する。
   * @return JSONマッピングオブジェクト
   * @see cfdcore::JsonClassBase::GetJsonMapper()
   */
  virtual const UnblindOutputMapTable& GetJsonMapper() const {  // NOLINT
    return json_mapper;
  }
  /**
   * @brief JSONマッピングのアイテム一覧を取得する。
   * 対象の変数名を、定義順序に従い一覧取得する。
   * @return JSONマッピングのアイテム一覧
   * @see cfdcore::JsonClassBase::GetJsonItemList()
   */
  virtual const std::vector<std::string>& GetJsonItemList() const {
    return item_list;
  }
  /**
   * @brief JSONマッピング時に無視するアイテム一覧を取得する。
   * Serialize時に対象の変数を無視する。
   * @return JSONマッピング時に無視するアイテム一覧
   * @see cfdcore::JsonClassBase::GetIgnoreItem()
   */
  virtual const std::set<std::string>& GetIgnoreItem() const {
    return ignore_items;
  }

 private:
 /**
  * @brief JsonFunctionMapテーブル
  */
  static UnblindOutputMapTable json_mapper;
  /**
   * @brief フィールド名リスト
   */
  static std::vector<std::string> item_list;
  /**
   * @brief 無視リスト
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(asset) のvalue
   */
  std::string asset_ = "";
  /**
   * @brief JsonAPI(blindFactor) のvalue
   */
  std::string blind_factor_ = "";
  /**
   * @brief JsonAPI(assetBlindFactor) のvalue
   */
  std::string asset_blind_factor_ = "";
  /**
   * @brief JsonAPI(amount) のvalue
   */
  int64_t amount_ = 0;
};

// ------------------------------------------------------------------------
// UnblindRawTransactionResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API（UnblindRawTransactionResponse）クラス
 */
class UnblindRawTransactionResponse
  : public cfdcore::JsonClassBase<UnblindRawTransactionResponse> {
 public:
  UnblindRawTransactionResponse() {
    CollectFieldName();
  }
  virtual ~UnblindRawTransactionResponse() {
    // do nothing
  }
  /**
   * @brief フィールド名を収集する.
   */
  static void CollectFieldName();

  /**
   * @brief hex 取得処理
   * @return hex
   */
  std::string GetHex() {
    return hex_;
  }
  /**
   * @brief hex 設定処理
   * @param[in] hex    設定値
   */
  void SetHex(  // line separate
    const std::string& hex) {  // NOLINT
    this->hex_ = hex;
  }
  /**
   * @brief hex データ型の取得処理
   * @return hexのデータ型
   */
  static std::string GetHexFieldType() {
    return "std::string";
  }
  /**
   * @brief hex フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetHexString(  // line separate
      const UnblindRawTransactionResponse& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.hex_);
  }
  /**
   * @brief hex フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetHexString(  // line separate
      UnblindRawTransactionResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.hex_, json_value);
  }

  /**
   * @brief outputs 取得処理
   * @return outputs
   */
  JsonObjectVector<UnblindOutput, UnblindOutputStruct>& GetOutputs() {  // NOLINT
    return outputs_;
  }
  /**
   * @brief outputs 設定処理
   * @param[in] outputs    設定値
   */
  void SetOutputs(  // line separate
      const JsonObjectVector<UnblindOutput, UnblindOutputStruct>& outputs) {  // NOLINT
    this->outputs_ = outputs;
  }
  /**
   * @brief outputs データ型の取得処理
   * @return outputsのデータ型
   */
  static std::string GetOutputsFieldType() {
    return "JsonObjectVector<UnblindOutput, UnblindOutputStruct>";  // NOLINT
  }
  /**
   * @brief outputs フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetOutputsString(  // line separate
      const UnblindRawTransactionResponse& obj) {  // NOLINT
    // Serialize内部のpre/post処理でメンバ変数の置換が起こり得るためconstにしない
    return obj.outputs_.Serialize();
  }
  /**
   * @brief outputs フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetOutputsString(  // line separate
      UnblindRawTransactionResponse& obj,  // NOLINT
      const UniValue& json_value) {
    obj.outputs_.DeserializeUniValue(json_value);
  }

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  void SetIgnoreItem(const std::string& key) {
    ignore_items.insert(key);
  }

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  void ConvertFromStruct(
      const UnblindRawTransactionResponseStruct& data);

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  UnblindRawTransactionResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief Mapテーブルの型名定義
   */
  using UnblindRawTransactionResponseMapTable =
    cfdcore::JsonTableMap<UnblindRawTransactionResponse>;

  /**
   * @brief JSONマッピングオブジェクトを取得する。
   * @return JSONマッピングオブジェクト
   * @see cfdcore::JsonClassBase::GetJsonMapper()
   */
  virtual const UnblindRawTransactionResponseMapTable& GetJsonMapper() const {  // NOLINT
    return json_mapper;
  }
  /**
   * @brief JSONマッピングのアイテム一覧を取得する。
   * 対象の変数名を、定義順序に従い一覧取得する。
   * @return JSONマッピングのアイテム一覧
   * @see cfdcore::JsonClassBase::GetJsonItemList()
   */
  virtual const std::vector<std::string>& GetJsonItemList() const {
    return item_list;
  }
  /**
   * @brief JSONマッピング時に無視するアイテム一覧を取得する。
   * Serialize時に対象の変数を無視する。
   * @return JSONマッピング時に無視するアイテム一覧
   * @see cfdcore::JsonClassBase::GetIgnoreItem()
   */
  virtual const std::set<std::string>& GetIgnoreItem() const {
    return ignore_items;
  }

 private:
 /**
  * @brief JsonFunctionMapテーブル
  */
  static UnblindRawTransactionResponseMapTable json_mapper;
  /**
   * @brief フィールド名リスト
   */
  static std::vector<std::string> item_list;
  /**
   * @brief 無視リスト
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(hex) のvalue
   */
  std::string hex_ = "";
  /**
   * @brief JsonAPI(outputs) のvalue
   */
  JsonObjectVector<UnblindOutput, UnblindOutputStruct> outputs_;  // NOLINT
};

// @formatter:on
// clang-format on

}  // namespace api
}  // namespace cfd

#endif  // CFD_JS_SRC_CFDAPI_ELEMENTS_UNBLIND_RAW_TRANSACTION_JSON_H_
