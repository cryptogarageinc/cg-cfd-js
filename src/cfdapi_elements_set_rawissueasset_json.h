// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_elements_set_rawissueasset_json.h
 *
 * @brief JSONマッピングファイル (自動生成)
 */
#ifndef CFD_JS_SRC_CFDAPI_ELEMENTS_SET_RAWISSUEASSET_JSON_H_
#define CFD_JS_SRC_CFDAPI_ELEMENTS_SET_RAWISSUEASSET_JSON_H_

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
// IssuanceDataRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API（IssuanceDataRequest）クラス
 */
class IssuanceDataRequest
  : public cfdcore::JsonClassBase<IssuanceDataRequest> {
 public:
  IssuanceDataRequest() {
    CollectFieldName();
  }
  virtual ~IssuanceDataRequest() {
    // do nothing
  }
  /**
   * @brief フィールド名を収集する.
   */
  static void CollectFieldName();

  /**
   * @brief txinTxid 取得処理
   * @return txinTxid
   */
  std::string GetTxinTxid() {
    return txin_txid_;
  }
  /**
   * @brief txinTxid 設定処理
   * @param[in] txin_txid    設定値
   */
  void SetTxinTxid(  // line separate
    const std::string& txin_txid) {  // NOLINT
    this->txin_txid_ = txin_txid;
  }
  /**
   * @brief txinTxid データ型の取得処理
   * @return txinTxidのデータ型
   */
  static std::string GetTxinTxidFieldType() {
    return "std::string";
  }
  /**
   * @brief txinTxid フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetTxinTxidString(  // line separate
      const IssuanceDataRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.txin_txid_);
  }
  /**
   * @brief txinTxid フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetTxinTxidString(  // line separate
      IssuanceDataRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.txin_txid_, json_value);
  }

  /**
   * @brief txinVout 取得処理
   * @return txinVout
   */
  uint32_t GetTxinVout() {
    return txin_vout_;
  }
  /**
   * @brief txinVout 設定処理
   * @param[in] txin_vout    設定値
   */
  void SetTxinVout(  // line separate
    const uint32_t& txin_vout) {  // NOLINT
    this->txin_vout_ = txin_vout;
  }
  /**
   * @brief txinVout データ型の取得処理
   * @return txinVoutのデータ型
   */
  static std::string GetTxinVoutFieldType() {
    return "uint32_t";
  }
  /**
   * @brief txinVout フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetTxinVoutString(  // line separate
      const IssuanceDataRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.txin_vout_);
  }
  /**
   * @brief txinVout フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetTxinVoutString(  // line separate
      IssuanceDataRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.txin_vout_, json_value);
  }

  /**
   * @brief assetAmount 取得処理
   * @return assetAmount
   */
  int64_t GetAssetAmount() {
    return asset_amount_;
  }
  /**
   * @brief assetAmount 設定処理
   * @param[in] asset_amount    設定値
   */
  void SetAssetAmount(  // line separate
    const int64_t& asset_amount) {  // NOLINT
    this->asset_amount_ = asset_amount;
  }
  /**
   * @brief assetAmount データ型の取得処理
   * @return assetAmountのデータ型
   */
  static std::string GetAssetAmountFieldType() {
    return "int64_t";
  }
  /**
   * @brief assetAmount フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetAssetAmountString(  // line separate
      const IssuanceDataRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.asset_amount_);
  }
  /**
   * @brief assetAmount フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetAssetAmountString(  // line separate
      IssuanceDataRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.asset_amount_, json_value);
  }

  /**
   * @brief assetAddress 取得処理
   * @return assetAddress
   */
  std::string GetAssetAddress() {
    return asset_address_;
  }
  /**
   * @brief assetAddress 設定処理
   * @param[in] asset_address    設定値
   */
  void SetAssetAddress(  // line separate
    const std::string& asset_address) {  // NOLINT
    this->asset_address_ = asset_address;
  }
  /**
   * @brief assetAddress データ型の取得処理
   * @return assetAddressのデータ型
   */
  static std::string GetAssetAddressFieldType() {
    return "std::string";
  }
  /**
   * @brief assetAddress フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetAssetAddressString(  // line separate
      const IssuanceDataRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.asset_address_);
  }
  /**
   * @brief assetAddress フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetAssetAddressString(  // line separate
      IssuanceDataRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.asset_address_, json_value);
  }

  /**
   * @brief tokenAmount 取得処理
   * @return tokenAmount
   */
  int64_t GetTokenAmount() {
    return token_amount_;
  }
  /**
   * @brief tokenAmount 設定処理
   * @param[in] token_amount    設定値
   */
  void SetTokenAmount(  // line separate
    const int64_t& token_amount) {  // NOLINT
    this->token_amount_ = token_amount;
  }
  /**
   * @brief tokenAmount データ型の取得処理
   * @return tokenAmountのデータ型
   */
  static std::string GetTokenAmountFieldType() {
    return "int64_t";
  }
  /**
   * @brief tokenAmount フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetTokenAmountString(  // line separate
      const IssuanceDataRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.token_amount_);
  }
  /**
   * @brief tokenAmount フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetTokenAmountString(  // line separate
      IssuanceDataRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.token_amount_, json_value);
  }

  /**
   * @brief tokenAddress 取得処理
   * @return tokenAddress
   */
  std::string GetTokenAddress() {
    return token_address_;
  }
  /**
   * @brief tokenAddress 設定処理
   * @param[in] token_address    設定値
   */
  void SetTokenAddress(  // line separate
    const std::string& token_address) {  // NOLINT
    this->token_address_ = token_address;
  }
  /**
   * @brief tokenAddress データ型の取得処理
   * @return tokenAddressのデータ型
   */
  static std::string GetTokenAddressFieldType() {
    return "std::string";
  }
  /**
   * @brief tokenAddress フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetTokenAddressString(  // line separate
      const IssuanceDataRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.token_address_);
  }
  /**
   * @brief tokenAddress フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetTokenAddressString(  // line separate
      IssuanceDataRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.token_address_, json_value);
  }

  /**
   * @brief isBlind 取得処理
   * @return isBlind
   */
  bool GetIsBlind() {
    return is_blind_;
  }
  /**
   * @brief isBlind 設定処理
   * @param[in] is_blind    設定値
   */
  void SetIsBlind(  // line separate
    const bool& is_blind) {  // NOLINT
    this->is_blind_ = is_blind;
  }
  /**
   * @brief isBlind データ型の取得処理
   * @return isBlindのデータ型
   */
  static std::string GetIsBlindFieldType() {
    return "bool";
  }
  /**
   * @brief isBlind フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetIsBlindString(  // line separate
      const IssuanceDataRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.is_blind_);
  }
  /**
   * @brief isBlind フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetIsBlindString(  // line separate
      IssuanceDataRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.is_blind_, json_value);
  }

  /**
   * @brief contractHash 取得処理
   * @return contractHash
   */
  std::string GetContractHash() {
    return contract_hash_;
  }
  /**
   * @brief contractHash 設定処理
   * @param[in] contract_hash    設定値
   */
  void SetContractHash(  // line separate
    const std::string& contract_hash) {  // NOLINT
    this->contract_hash_ = contract_hash;
  }
  /**
   * @brief contractHash データ型の取得処理
   * @return contractHashのデータ型
   */
  static std::string GetContractHashFieldType() {
    return "std::string";
  }
  /**
   * @brief contractHash フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetContractHashString(  // line separate
      const IssuanceDataRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.contract_hash_);
  }
  /**
   * @brief contractHash フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetContractHashString(  // line separate
      IssuanceDataRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.contract_hash_, json_value);
  }

  /**
   * @brief isRemoveNonce 取得処理
   * @return isRemoveNonce
   */
  bool GetIsRemoveNonce() {
    return is_remove_nonce_;
  }
  /**
   * @brief isRemoveNonce 設定処理
   * @param[in] is_remove_nonce    設定値
   */
  void SetIsRemoveNonce(  // line separate
    const bool& is_remove_nonce) {  // NOLINT
    this->is_remove_nonce_ = is_remove_nonce;
  }
  /**
   * @brief isRemoveNonce データ型の取得処理
   * @return isRemoveNonceのデータ型
   */
  static std::string GetIsRemoveNonceFieldType() {
    return "bool";
  }
  /**
   * @brief isRemoveNonce フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetIsRemoveNonceString(  // line separate
      const IssuanceDataRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.is_remove_nonce_);
  }
  /**
   * @brief isRemoveNonce フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetIsRemoveNonceString(  // line separate
      IssuanceDataRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.is_remove_nonce_, json_value);
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
      const IssuanceDataRequestStruct& data);

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  IssuanceDataRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief Mapテーブルの型名定義
   */
  using IssuanceDataRequestMapTable =
    cfdcore::JsonTableMap<IssuanceDataRequest>;

  /**
   * @brief JSONマッピングオブジェクトを取得する。
   * @return JSONマッピングオブジェクト
   * @see cfdcore::JsonClassBase::GetJsonMapper()
   */
  virtual const IssuanceDataRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static IssuanceDataRequestMapTable json_mapper;
  /**
   * @brief フィールド名リスト
   */
  static std::vector<std::string> item_list;
  /**
   * @brief 無視リスト
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(txinTxid) のvalue
   */
  std::string txin_txid_ = "";
  /**
   * @brief JsonAPI(txinVout) のvalue
   */
  uint32_t txin_vout_ = 0;
  /**
   * @brief JsonAPI(assetAmount) のvalue
   */
  int64_t asset_amount_ = 0;
  /**
   * @brief JsonAPI(assetAddress) のvalue
   */
  std::string asset_address_ = "";
  /**
   * @brief JsonAPI(tokenAmount) のvalue
   */
  int64_t token_amount_ = 0;
  /**
   * @brief JsonAPI(tokenAddress) のvalue
   */
  std::string token_address_ = "";
  /**
   * @brief JsonAPI(isBlind) のvalue
   */
  bool is_blind_ = true;
  /**
   * @brief JsonAPI(contractHash) のvalue
   */
  std::string contract_hash_ = "";
  /**
   * @brief JsonAPI(isRemoveNonce) のvalue
   */
  bool is_remove_nonce_ = false;
};

// ------------------------------------------------------------------------
// SetRawIssueAssetRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API（SetRawIssueAssetRequest）クラス
 */
class SetRawIssueAssetRequest
  : public cfdcore::JsonClassBase<SetRawIssueAssetRequest> {
 public:
  SetRawIssueAssetRequest() {
    CollectFieldName();
  }
  virtual ~SetRawIssueAssetRequest() {
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
      const SetRawIssueAssetRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.tx_hex_);
  }
  /**
   * @brief txHex フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetTxHexString(  // line separate
      SetRawIssueAssetRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.tx_hex_, json_value);
  }

  /**
   * @brief isRandomize 取得処理
   * @return isRandomize
   */
  bool GetIsRandomize() {
    return is_randomize_;
  }
  /**
   * @brief isRandomize 設定処理
   * @param[in] is_randomize    設定値
   */
  void SetIsRandomize(  // line separate
    const bool& is_randomize) {  // NOLINT
    this->is_randomize_ = is_randomize;
  }
  /**
   * @brief isRandomize データ型の取得処理
   * @return isRandomizeのデータ型
   */
  static std::string GetIsRandomizeFieldType() {
    return "bool";
  }
  /**
   * @brief isRandomize フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetIsRandomizeString(  // line separate
      const SetRawIssueAssetRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.is_randomize_);
  }
  /**
   * @brief isRandomize フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetIsRandomizeString(  // line separate
      SetRawIssueAssetRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.is_randomize_, json_value);
  }

  /**
   * @brief issuances 取得処理
   * @return issuances
   */
  JsonObjectVector<IssuanceDataRequest, IssuanceDataRequestStruct>& GetIssuances() {  // NOLINT
    return issuances_;
  }
  /**
   * @brief issuances 設定処理
   * @param[in] issuances    設定値
   */
  void SetIssuances(  // line separate
      const JsonObjectVector<IssuanceDataRequest, IssuanceDataRequestStruct>& issuances) {  // NOLINT
    this->issuances_ = issuances;
  }
  /**
   * @brief issuances データ型の取得処理
   * @return issuancesのデータ型
   */
  static std::string GetIssuancesFieldType() {
    return "JsonObjectVector<IssuanceDataRequest, IssuanceDataRequestStruct>";  // NOLINT
  }
  /**
   * @brief issuances フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetIssuancesString(  // line separate
      const SetRawIssueAssetRequest& obj) {  // NOLINT
    // Serialize内部のpre/post処理でメンバ変数の置換が起こり得るためconstにしない
    return obj.issuances_.Serialize();
  }
  /**
   * @brief issuances フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetIssuancesString(  // line separate
      SetRawIssueAssetRequest& obj,  // NOLINT
      const UniValue& json_value) {
    obj.issuances_.DeserializeUniValue(json_value);
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
      const SetRawIssueAssetRequestStruct& data);

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  SetRawIssueAssetRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief Mapテーブルの型名定義
   */
  using SetRawIssueAssetRequestMapTable =
    cfdcore::JsonTableMap<SetRawIssueAssetRequest>;

  /**
   * @brief JSONマッピングオブジェクトを取得する。
   * @return JSONマッピングオブジェクト
   * @see cfdcore::JsonClassBase::GetJsonMapper()
   */
  virtual const SetRawIssueAssetRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static SetRawIssueAssetRequestMapTable json_mapper;
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
   * @brief JsonAPI(isRandomize) のvalue
   */
  bool is_randomize_ = false;
  /**
   * @brief JsonAPI(issuances) のvalue
   */
  JsonObjectVector<IssuanceDataRequest, IssuanceDataRequestStruct> issuances_;  // NOLINT
};

// ------------------------------------------------------------------------
// IssuanceDataResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API（IssuanceDataResponse）クラス
 */
class IssuanceDataResponse
  : public cfdcore::JsonClassBase<IssuanceDataResponse> {
 public:
  IssuanceDataResponse() {
    CollectFieldName();
  }
  virtual ~IssuanceDataResponse() {
    // do nothing
  }
  /**
   * @brief フィールド名を収集する.
   */
  static void CollectFieldName();

  /**
   * @brief txinTxid 取得処理
   * @return txinTxid
   */
  std::string GetTxinTxid() {
    return txin_txid_;
  }
  /**
   * @brief txinTxid 設定処理
   * @param[in] txin_txid    設定値
   */
  void SetTxinTxid(  // line separate
    const std::string& txin_txid) {  // NOLINT
    this->txin_txid_ = txin_txid;
  }
  /**
   * @brief txinTxid データ型の取得処理
   * @return txinTxidのデータ型
   */
  static std::string GetTxinTxidFieldType() {
    return "std::string";
  }
  /**
   * @brief txinTxid フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetTxinTxidString(  // line separate
      const IssuanceDataResponse& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.txin_txid_);
  }
  /**
   * @brief txinTxid フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetTxinTxidString(  // line separate
      IssuanceDataResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.txin_txid_, json_value);
  }

  /**
   * @brief txinVout 取得処理
   * @return txinVout
   */
  uint32_t GetTxinVout() {
    return txin_vout_;
  }
  /**
   * @brief txinVout 設定処理
   * @param[in] txin_vout    設定値
   */
  void SetTxinVout(  // line separate
    const uint32_t& txin_vout) {  // NOLINT
    this->txin_vout_ = txin_vout;
  }
  /**
   * @brief txinVout データ型の取得処理
   * @return txinVoutのデータ型
   */
  static std::string GetTxinVoutFieldType() {
    return "uint32_t";
  }
  /**
   * @brief txinVout フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetTxinVoutString(  // line separate
      const IssuanceDataResponse& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.txin_vout_);
  }
  /**
   * @brief txinVout フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetTxinVoutString(  // line separate
      IssuanceDataResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.txin_vout_, json_value);
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
      const IssuanceDataResponse& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.asset_);
  }
  /**
   * @brief asset フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetAssetString(  // line separate
      IssuanceDataResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.asset_, json_value);
  }

  /**
   * @brief entropy 取得処理
   * @return entropy
   */
  std::string GetEntropy() {
    return entropy_;
  }
  /**
   * @brief entropy 設定処理
   * @param[in] entropy    設定値
   */
  void SetEntropy(  // line separate
    const std::string& entropy) {  // NOLINT
    this->entropy_ = entropy;
  }
  /**
   * @brief entropy データ型の取得処理
   * @return entropyのデータ型
   */
  static std::string GetEntropyFieldType() {
    return "std::string";
  }
  /**
   * @brief entropy フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetEntropyString(  // line separate
      const IssuanceDataResponse& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.entropy_);
  }
  /**
   * @brief entropy フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetEntropyString(  // line separate
      IssuanceDataResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.entropy_, json_value);
  }

  /**
   * @brief token 取得処理
   * @return token
   */
  std::string GetToken() {
    return token_;
  }
  /**
   * @brief token 設定処理
   * @param[in] token    設定値
   */
  void SetToken(  // line separate
    const std::string& token) {  // NOLINT
    this->token_ = token;
  }
  /**
   * @brief token データ型の取得処理
   * @return tokenのデータ型
   */
  static std::string GetTokenFieldType() {
    return "std::string";
  }
  /**
   * @brief token フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetTokenString(  // line separate
      const IssuanceDataResponse& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.token_);
  }
  /**
   * @brief token フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetTokenString(  // line separate
      IssuanceDataResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.token_, json_value);
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
      const IssuanceDataResponseStruct& data);

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  IssuanceDataResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief Mapテーブルの型名定義
   */
  using IssuanceDataResponseMapTable =
    cfdcore::JsonTableMap<IssuanceDataResponse>;

  /**
   * @brief JSONマッピングオブジェクトを取得する。
   * @return JSONマッピングオブジェクト
   * @see cfdcore::JsonClassBase::GetJsonMapper()
   */
  virtual const IssuanceDataResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static IssuanceDataResponseMapTable json_mapper;
  /**
   * @brief フィールド名リスト
   */
  static std::vector<std::string> item_list;
  /**
   * @brief 無視リスト
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(txinTxid) のvalue
   */
  std::string txin_txid_ = "";
  /**
   * @brief JsonAPI(txinVout) のvalue
   */
  uint32_t txin_vout_ = 0;
  /**
   * @brief JsonAPI(asset) のvalue
   */
  std::string asset_ = "";
  /**
   * @brief JsonAPI(entropy) のvalue
   */
  std::string entropy_ = "";
  /**
   * @brief JsonAPI(token) のvalue
   */
  std::string token_ = "";
};

// ------------------------------------------------------------------------
// SetRawIssueAssetResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API（SetRawIssueAssetResponse）クラス
 */
class SetRawIssueAssetResponse
  : public cfdcore::JsonClassBase<SetRawIssueAssetResponse> {
 public:
  SetRawIssueAssetResponse() {
    CollectFieldName();
  }
  virtual ~SetRawIssueAssetResponse() {
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
      const SetRawIssueAssetResponse& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.hex_);
  }
  /**
   * @brief hex フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetHexString(  // line separate
      SetRawIssueAssetResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.hex_, json_value);
  }

  /**
   * @brief issuances 取得処理
   * @return issuances
   */
  JsonObjectVector<IssuanceDataResponse, IssuanceDataResponseStruct>& GetIssuances() {  // NOLINT
    return issuances_;
  }
  /**
   * @brief issuances 設定処理
   * @param[in] issuances    設定値
   */
  void SetIssuances(  // line separate
      const JsonObjectVector<IssuanceDataResponse, IssuanceDataResponseStruct>& issuances) {  // NOLINT
    this->issuances_ = issuances;
  }
  /**
   * @brief issuances データ型の取得処理
   * @return issuancesのデータ型
   */
  static std::string GetIssuancesFieldType() {
    return "JsonObjectVector<IssuanceDataResponse, IssuanceDataResponseStruct>";  // NOLINT
  }
  /**
   * @brief issuances フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetIssuancesString(  // line separate
      const SetRawIssueAssetResponse& obj) {  // NOLINT
    // Serialize内部のpre/post処理でメンバ変数の置換が起こり得るためconstにしない
    return obj.issuances_.Serialize();
  }
  /**
   * @brief issuances フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetIssuancesString(  // line separate
      SetRawIssueAssetResponse& obj,  // NOLINT
      const UniValue& json_value) {
    obj.issuances_.DeserializeUniValue(json_value);
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
      const SetRawIssueAssetResponseStruct& data);

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  SetRawIssueAssetResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief Mapテーブルの型名定義
   */
  using SetRawIssueAssetResponseMapTable =
    cfdcore::JsonTableMap<SetRawIssueAssetResponse>;

  /**
   * @brief JSONマッピングオブジェクトを取得する。
   * @return JSONマッピングオブジェクト
   * @see cfdcore::JsonClassBase::GetJsonMapper()
   */
  virtual const SetRawIssueAssetResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static SetRawIssueAssetResponseMapTable json_mapper;
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
   * @brief JsonAPI(issuances) のvalue
   */
  JsonObjectVector<IssuanceDataResponse, IssuanceDataResponseStruct> issuances_;  // NOLINT
};

// @formatter:on
// clang-format on

}  // namespace api
}  // namespace cfd

#endif  // CFD_JS_SRC_CFDAPI_ELEMENTS_SET_RAWISSUEASSET_JSON_H_
