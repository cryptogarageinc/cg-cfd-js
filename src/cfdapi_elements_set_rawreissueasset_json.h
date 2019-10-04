// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_elements_set_rawreissueasset_json.h
 *
 * @brief JSONマッピングファイル (自動生成)
 */
#ifndef CFD_JS_SRC_CFDAPI_ELEMENTS_SET_RAWREISSUEASSET_JSON_H_
#define CFD_JS_SRC_CFDAPI_ELEMENTS_SET_RAWREISSUEASSET_JSON_H_

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
// ReissuanceDataRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API（ReissuanceDataRequest）クラス
 */
class ReissuanceDataRequest
  : public cfdcore::JsonClassBase<ReissuanceDataRequest> {
 public:
  ReissuanceDataRequest() {
    CollectFieldName();
  }
  virtual ~ReissuanceDataRequest() {
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
      const ReissuanceDataRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.txin_txid_);
  }
  /**
   * @brief txinTxid フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetTxinTxidString(  // line separate
      ReissuanceDataRequest& obj,  // NOLINT
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
      const ReissuanceDataRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.txin_vout_);
  }
  /**
   * @brief txinVout フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetTxinVoutString(  // line separate
      ReissuanceDataRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.txin_vout_, json_value);
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
      const ReissuanceDataRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.amount_);
  }
  /**
   * @brief amount フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetAmountString(  // line separate
      ReissuanceDataRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.amount_, json_value);
  }

  /**
   * @brief address 取得処理
   * @return address
   */
  std::string GetAddress() {
    return address_;
  }
  /**
   * @brief address 設定処理
   * @param[in] address    設定値
   */
  void SetAddress(  // line separate
    const std::string& address) {  // NOLINT
    this->address_ = address;
  }
  /**
   * @brief address データ型の取得処理
   * @return addressのデータ型
   */
  static std::string GetAddressFieldType() {
    return "std::string";
  }
  /**
   * @brief address フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetAddressString(  // line separate
      const ReissuanceDataRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.address_);
  }
  /**
   * @brief address フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetAddressString(  // line separate
      ReissuanceDataRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.address_, json_value);
  }

  /**
   * @brief assetBlindingNonce 取得処理
   * @return assetBlindingNonce
   */
  std::string GetAssetBlindingNonce() {
    return asset_blinding_nonce_;
  }
  /**
   * @brief assetBlindingNonce 設定処理
   * @param[in] asset_blinding_nonce    設定値
   */
  void SetAssetBlindingNonce(  // line separate
    const std::string& asset_blinding_nonce) {  // NOLINT
    this->asset_blinding_nonce_ = asset_blinding_nonce;
  }
  /**
   * @brief assetBlindingNonce データ型の取得処理
   * @return assetBlindingNonceのデータ型
   */
  static std::string GetAssetBlindingNonceFieldType() {
    return "std::string";
  }
  /**
   * @brief assetBlindingNonce フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetAssetBlindingNonceString(  // line separate
      const ReissuanceDataRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.asset_blinding_nonce_);
  }
  /**
   * @brief assetBlindingNonce フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetAssetBlindingNonceString(  // line separate
      ReissuanceDataRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.asset_blinding_nonce_, json_value);
  }

  /**
   * @brief assetEntropy 取得処理
   * @return assetEntropy
   */
  std::string GetAssetEntropy() {
    return asset_entropy_;
  }
  /**
   * @brief assetEntropy 設定処理
   * @param[in] asset_entropy    設定値
   */
  void SetAssetEntropy(  // line separate
    const std::string& asset_entropy) {  // NOLINT
    this->asset_entropy_ = asset_entropy;
  }
  /**
   * @brief assetEntropy データ型の取得処理
   * @return assetEntropyのデータ型
   */
  static std::string GetAssetEntropyFieldType() {
    return "std::string";
  }
  /**
   * @brief assetEntropy フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetAssetEntropyString(  // line separate
      const ReissuanceDataRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.asset_entropy_);
  }
  /**
   * @brief assetEntropy フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetAssetEntropyString(  // line separate
      ReissuanceDataRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.asset_entropy_, json_value);
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
      const ReissuanceDataRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.is_remove_nonce_);
  }
  /**
   * @brief isRemoveNonce フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetIsRemoveNonceString(  // line separate
      ReissuanceDataRequest& obj,  // NOLINT
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
      const ReissuanceDataRequestStruct& data);

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  ReissuanceDataRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief Mapテーブルの型名定義
   */
  using ReissuanceDataRequestMapTable =
    cfdcore::JsonTableMap<ReissuanceDataRequest>;

  /**
   * @brief JSONマッピングオブジェクトを取得する。
   * @return JSONマッピングオブジェクト
   * @see cfdcore::JsonClassBase::GetJsonMapper()
   */
  virtual const ReissuanceDataRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static ReissuanceDataRequestMapTable json_mapper;
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
   * @brief JsonAPI(amount) のvalue
   */
  int64_t amount_ = 0;
  /**
   * @brief JsonAPI(address) のvalue
   */
  std::string address_ = "";
  /**
   * @brief JsonAPI(assetBlindingNonce) のvalue
   */
  std::string asset_blinding_nonce_ = "";
  /**
   * @brief JsonAPI(assetEntropy) のvalue
   */
  std::string asset_entropy_ = "";
  /**
   * @brief JsonAPI(isRemoveNonce) のvalue
   */
  bool is_remove_nonce_ = false;
};

// ------------------------------------------------------------------------
// SetRawReissueAssetRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API（SetRawReissueAssetRequest）クラス
 */
class SetRawReissueAssetRequest
  : public cfdcore::JsonClassBase<SetRawReissueAssetRequest> {
 public:
  SetRawReissueAssetRequest() {
    CollectFieldName();
  }
  virtual ~SetRawReissueAssetRequest() {
    // do nothing
  }
  /**
   * @brief フィールド名を収集する.
   */
  static void CollectFieldName();

  /**
   * @brief tx 取得処理
   * @return tx
   */
  std::string GetTx() {
    return tx_;
  }
  /**
   * @brief tx 設定処理
   * @param[in] tx    設定値
   */
  void SetTx(  // line separate
    const std::string& tx) {  // NOLINT
    this->tx_ = tx;
  }
  /**
   * @brief tx データ型の取得処理
   * @return txのデータ型
   */
  static std::string GetTxFieldType() {
    return "std::string";
  }
  /**
   * @brief tx フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetTxString(  // line separate
      const SetRawReissueAssetRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.tx_);
  }
  /**
   * @brief tx フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetTxString(  // line separate
      SetRawReissueAssetRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.tx_, json_value);
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
      const SetRawReissueAssetRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.is_randomize_);
  }
  /**
   * @brief isRandomize フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetIsRandomizeString(  // line separate
      SetRawReissueAssetRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.is_randomize_, json_value);
  }

  /**
   * @brief issuances 取得処理
   * @return issuances
   */
  JsonObjectVector<ReissuanceDataRequest, ReissuanceDataRequestStruct>& GetIssuances() {  // NOLINT
    return issuances_;
  }
  /**
   * @brief issuances 設定処理
   * @param[in] issuances    設定値
   */
  void SetIssuances(  // line separate
      const JsonObjectVector<ReissuanceDataRequest, ReissuanceDataRequestStruct>& issuances) {  // NOLINT
    this->issuances_ = issuances;
  }
  /**
   * @brief issuances データ型の取得処理
   * @return issuancesのデータ型
   */
  static std::string GetIssuancesFieldType() {
    return "JsonObjectVector<ReissuanceDataRequest, ReissuanceDataRequestStruct>";  // NOLINT
  }
  /**
   * @brief issuances フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetIssuancesString(  // line separate
      const SetRawReissueAssetRequest& obj) {  // NOLINT
    // Serialize内部のpre/post処理でメンバ変数の置換が起こり得るためconstにしない
    return obj.issuances_.Serialize();
  }
  /**
   * @brief issuances フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetIssuancesString(  // line separate
      SetRawReissueAssetRequest& obj,  // NOLINT
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
      const SetRawReissueAssetRequestStruct& data);

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  SetRawReissueAssetRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief Mapテーブルの型名定義
   */
  using SetRawReissueAssetRequestMapTable =
    cfdcore::JsonTableMap<SetRawReissueAssetRequest>;

  /**
   * @brief JSONマッピングオブジェクトを取得する。
   * @return JSONマッピングオブジェクト
   * @see cfdcore::JsonClassBase::GetJsonMapper()
   */
  virtual const SetRawReissueAssetRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static SetRawReissueAssetRequestMapTable json_mapper;
  /**
   * @brief フィールド名リスト
   */
  static std::vector<std::string> item_list;
  /**
   * @brief 無視リスト
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(tx) のvalue
   */
  std::string tx_ = "";
  /**
   * @brief JsonAPI(isRandomize) のvalue
   */
  bool is_randomize_ = false;
  /**
   * @brief JsonAPI(issuances) のvalue
   */
  JsonObjectVector<ReissuanceDataRequest, ReissuanceDataRequestStruct> issuances_;  // NOLINT
};

// ------------------------------------------------------------------------
// ReissuanceDataResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API（ReissuanceDataResponse）クラス
 */
class ReissuanceDataResponse
  : public cfdcore::JsonClassBase<ReissuanceDataResponse> {
 public:
  ReissuanceDataResponse() {
    CollectFieldName();
  }
  virtual ~ReissuanceDataResponse() {
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
      const ReissuanceDataResponse& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.txin_txid_);
  }
  /**
   * @brief txinTxid フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetTxinTxidString(  // line separate
      ReissuanceDataResponse& obj,  // NOLINT
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
      const ReissuanceDataResponse& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.txin_vout_);
  }
  /**
   * @brief txinVout フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetTxinVoutString(  // line separate
      ReissuanceDataResponse& obj,  // NOLINT
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
      const ReissuanceDataResponse& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.asset_);
  }
  /**
   * @brief asset フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetAssetString(  // line separate
      ReissuanceDataResponse& obj,  // NOLINT
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
      const ReissuanceDataResponse& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.entropy_);
  }
  /**
   * @brief entropy フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetEntropyString(  // line separate
      ReissuanceDataResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.entropy_, json_value);
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
      const ReissuanceDataResponseStruct& data);

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  ReissuanceDataResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief Mapテーブルの型名定義
   */
  using ReissuanceDataResponseMapTable =
    cfdcore::JsonTableMap<ReissuanceDataResponse>;

  /**
   * @brief JSONマッピングオブジェクトを取得する。
   * @return JSONマッピングオブジェクト
   * @see cfdcore::JsonClassBase::GetJsonMapper()
   */
  virtual const ReissuanceDataResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static ReissuanceDataResponseMapTable json_mapper;
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
};

// ------------------------------------------------------------------------
// SetRawReissueAssetResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API（SetRawReissueAssetResponse）クラス
 */
class SetRawReissueAssetResponse
  : public cfdcore::JsonClassBase<SetRawReissueAssetResponse> {
 public:
  SetRawReissueAssetResponse() {
    CollectFieldName();
  }
  virtual ~SetRawReissueAssetResponse() {
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
      const SetRawReissueAssetResponse& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.hex_);
  }
  /**
   * @brief hex フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetHexString(  // line separate
      SetRawReissueAssetResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.hex_, json_value);
  }

  /**
   * @brief issuances 取得処理
   * @return issuances
   */
  JsonObjectVector<ReissuanceDataResponse, ReissuanceDataResponseStruct>& GetIssuances() {  // NOLINT
    return issuances_;
  }
  /**
   * @brief issuances 設定処理
   * @param[in] issuances    設定値
   */
  void SetIssuances(  // line separate
      const JsonObjectVector<ReissuanceDataResponse, ReissuanceDataResponseStruct>& issuances) {  // NOLINT
    this->issuances_ = issuances;
  }
  /**
   * @brief issuances データ型の取得処理
   * @return issuancesのデータ型
   */
  static std::string GetIssuancesFieldType() {
    return "JsonObjectVector<ReissuanceDataResponse, ReissuanceDataResponseStruct>";  // NOLINT
  }
  /**
   * @brief issuances フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetIssuancesString(  // line separate
      const SetRawReissueAssetResponse& obj) {  // NOLINT
    // Serialize内部のpre/post処理でメンバ変数の置換が起こり得るためconstにしない
    return obj.issuances_.Serialize();
  }
  /**
   * @brief issuances フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetIssuancesString(  // line separate
      SetRawReissueAssetResponse& obj,  // NOLINT
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
      const SetRawReissueAssetResponseStruct& data);

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  SetRawReissueAssetResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief Mapテーブルの型名定義
   */
  using SetRawReissueAssetResponseMapTable =
    cfdcore::JsonTableMap<SetRawReissueAssetResponse>;

  /**
   * @brief JSONマッピングオブジェクトを取得する。
   * @return JSONマッピングオブジェクト
   * @see cfdcore::JsonClassBase::GetJsonMapper()
   */
  virtual const SetRawReissueAssetResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static SetRawReissueAssetResponseMapTable json_mapper;
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
  JsonObjectVector<ReissuanceDataResponse, ReissuanceDataResponseStruct> issuances_;  // NOLINT
};

// @formatter:on
// clang-format on

}  // namespace api
}  // namespace cfd

#endif  // CFD_JS_SRC_CFDAPI_ELEMENTS_SET_RAWREISSUEASSET_JSON_H_
