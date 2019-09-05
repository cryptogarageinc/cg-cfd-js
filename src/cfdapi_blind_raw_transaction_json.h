// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_blind_raw_transaction_json.h
 *
 * @brief JSONマッピングファイル (自動生成)
 */
#ifndef CFD_JS_SRC_CFDAPI_BLIND_RAW_TRANSACTION_JSON_H_
#define CFD_JS_SRC_CFDAPI_BLIND_RAW_TRANSACTION_JSON_H_

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
// BlindTxInRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API（BlindTxInRequest）クラス
 */
class BlindTxInRequest
  : public cfdcore::JsonClassBase<BlindTxInRequest> {
 public:
  BlindTxInRequest() {
    CollectFieldName();
  }
  virtual ~BlindTxInRequest() {
    // do nothing
  }
  /**
   * @brief フィールド名を収集する.
   */
  static void CollectFieldName();

  /**
   * @brief txid 取得処理
   * @return txid
   */
  std::string GetTxid() {
    return txid_;
  }
  /**
   * @brief txid 設定処理
   * @param[in] txid    設定値
   */
  void SetTxid(  // line separate
    const std::string& txid) {  // NOLINT
    this->txid_ = txid;
  }
  /**
   * @brief txid データ型の取得処理
   * @return txidのデータ型
   */
  static std::string GetTxidFieldType() {
    return "std::string";
  }
  /**
   * @brief txid フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetTxidString(  // line separate
      const BlindTxInRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.txid_);
  }
  /**
   * @brief txid フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetTxidString(  // line separate
      BlindTxInRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.txid_, json_value);
  }

  /**
   * @brief vout 取得処理
   * @return vout
   */
  int64_t GetVout() {
    return vout_;
  }
  /**
   * @brief vout 設定処理
   * @param[in] vout    設定値
   */
  void SetVout(  // line separate
    const int64_t& vout) {  // NOLINT
    this->vout_ = vout;
  }
  /**
   * @brief vout データ型の取得処理
   * @return voutのデータ型
   */
  static std::string GetVoutFieldType() {
    return "int64_t";
  }
  /**
   * @brief vout フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetVoutString(  // line separate
      const BlindTxInRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.vout_);
  }
  /**
   * @brief vout フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetVoutString(  // line separate
      BlindTxInRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.vout_, json_value);
  }

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
      const BlindTxInRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.asset_);
  }
  /**
   * @brief asset フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetAssetString(  // line separate
      BlindTxInRequest& obj,  // NOLINT
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
      const BlindTxInRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.blind_factor_);
  }
  /**
   * @brief blindFactor フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetBlindFactorString(  // line separate
      BlindTxInRequest& obj,  // NOLINT
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
      const BlindTxInRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.asset_blind_factor_);
  }
  /**
   * @brief assetBlindFactor フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetAssetBlindFactorString(  // line separate
      BlindTxInRequest& obj,  // NOLINT
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
      const BlindTxInRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.amount_);
  }
  /**
   * @brief amount フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetAmountString(  // line separate
      BlindTxInRequest& obj,  // NOLINT
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
      const BlindTxInRequestStruct& data);

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  BlindTxInRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief Mapテーブルの型名定義
   */
  using BlindTxInRequestMapTable =
    cfdcore::JsonTableMap<BlindTxInRequest>;

  /**
   * @brief JSONマッピングオブジェクトを取得する。
   * @return JSONマッピングオブジェクト
   * @see cfdcore::JsonClassBase::GetJsonMapper()
   */
  virtual const BlindTxInRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static BlindTxInRequestMapTable json_mapper;
  /**
   * @brief フィールド名リスト
   */
  static std::vector<std::string> item_list;
  /**
   * @brief 無視リスト
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(txid) のvalue
   */
  std::string txid_ = "";
  /**
   * @brief JsonAPI(vout) のvalue
   */
  int64_t vout_ = 0;
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
// BlindRawTransactionRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API（BlindRawTransactionRequest）クラス
 */
class BlindRawTransactionRequest
  : public cfdcore::JsonClassBase<BlindRawTransactionRequest> {
 public:
  BlindRawTransactionRequest() {
    CollectFieldName();
  }
  virtual ~BlindRawTransactionRequest() {
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
      const BlindRawTransactionRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.tx_hex_);
  }
  /**
   * @brief txHex フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetTxHexString(  // line separate
      BlindRawTransactionRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.tx_hex_, json_value);
  }

  /**
   * @brief txins 取得処理
   * @return txins
   */
  JsonObjectVector<BlindTxInRequest, BlindTxInRequestStruct>& GetTxins() {  // NOLINT
    return txins_;
  }
  /**
   * @brief txins 設定処理
   * @param[in] txins    設定値
   */
  void SetTxins(  // line separate
      const JsonObjectVector<BlindTxInRequest, BlindTxInRequestStruct>& txins) {  // NOLINT
    this->txins_ = txins;
  }
  /**
   * @brief txins データ型の取得処理
   * @return txinsのデータ型
   */
  static std::string GetTxinsFieldType() {
    return "JsonObjectVector<BlindTxInRequest, BlindTxInRequestStruct>";  // NOLINT
  }
  /**
   * @brief txins フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetTxinsString(  // line separate
      const BlindRawTransactionRequest& obj) {  // NOLINT
    // Serialize内部のpre/post処理でメンバ変数の置換が起こり得るためconstにしない
    return obj.txins_.Serialize();
  }
  /**
   * @brief txins フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetTxinsString(  // line separate
      BlindRawTransactionRequest& obj,  // NOLINT
      const UniValue& json_value) {
    obj.txins_.DeserializeUniValue(json_value);
  }

  /**
   * @brief blindPubkeys 取得処理
   * @return blindPubkeys
   */
  JsonValueVector<std::string>& GetBlindPubkeys() {  // NOLINT
    return blind_pubkeys_;
  }
  /**
   * @brief blindPubkeys 設定処理
   * @param[in] blind_pubkeys    設定値
   */
  void SetBlindPubkeys(  // line separate
      const JsonValueVector<std::string>& blind_pubkeys) {  // NOLINT
    this->blind_pubkeys_ = blind_pubkeys;
  }
  /**
   * @brief blindPubkeys データ型の取得処理
   * @return blindPubkeysのデータ型
   */
  static std::string GetBlindPubkeysFieldType() {
    return "JsonValueVector<std::string>";  // NOLINT
  }
  /**
   * @brief blindPubkeys フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetBlindPubkeysString(  // line separate
      const BlindRawTransactionRequest& obj) {  // NOLINT
    // Serialize内部のpre/post処理でメンバ変数の置換が起こり得るためconstにしない
    return obj.blind_pubkeys_.Serialize();
  }
  /**
   * @brief blindPubkeys フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetBlindPubkeysString(  // line separate
      BlindRawTransactionRequest& obj,  // NOLINT
      const UniValue& json_value) {
    obj.blind_pubkeys_.DeserializeUniValue(json_value);
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
      const BlindRawTransactionRequestStruct& data);

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  BlindRawTransactionRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief Mapテーブルの型名定義
   */
  using BlindRawTransactionRequestMapTable =
    cfdcore::JsonTableMap<BlindRawTransactionRequest>;

  /**
   * @brief JSONマッピングオブジェクトを取得する。
   * @return JSONマッピングオブジェクト
   * @see cfdcore::JsonClassBase::GetJsonMapper()
   */
  virtual const BlindRawTransactionRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static BlindRawTransactionRequestMapTable json_mapper;
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
   * @brief JsonAPI(txins) のvalue
   */
  JsonObjectVector<BlindTxInRequest, BlindTxInRequestStruct> txins_;  // NOLINT
  /**
   * @brief JsonAPI(blindPubkeys) のvalue
   */
  JsonValueVector<std::string> blind_pubkeys_;  // NOLINT
};

// ------------------------------------------------------------------------
// BlindRawTransactionResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API（BlindRawTransactionResponse）クラス
 */
class BlindRawTransactionResponse
  : public cfdcore::JsonClassBase<BlindRawTransactionResponse> {
 public:
  BlindRawTransactionResponse() {
    CollectFieldName();
  }
  virtual ~BlindRawTransactionResponse() {
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
      const BlindRawTransactionResponse& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.hex_);
  }
  /**
   * @brief hex フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetHexString(  // line separate
      BlindRawTransactionResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.hex_, json_value);
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
      const BlindRawTransactionResponseStruct& data);

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  BlindRawTransactionResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief Mapテーブルの型名定義
   */
  using BlindRawTransactionResponseMapTable =
    cfdcore::JsonTableMap<BlindRawTransactionResponse>;

  /**
   * @brief JSONマッピングオブジェクトを取得する。
   * @return JSONマッピングオブジェクト
   * @see cfdcore::JsonClassBase::GetJsonMapper()
   */
  virtual const BlindRawTransactionResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static BlindRawTransactionResponseMapTable json_mapper;
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
};

// @formatter:on
// clang-format on

}  // namespace api
}  // namespace cfd

#endif  // CFD_JS_SRC_CFDAPI_BLIND_RAW_TRANSACTION_JSON_H_
