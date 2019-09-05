// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_update_witness_json.h
 *
 * @brief JSONマッピングファイル (自動生成)
 */
#ifndef CFD_JS_SRC_CFDAPI_UPDATE_WITNESS_JSON_H_
#define CFD_JS_SRC_CFDAPI_UPDATE_WITNESS_JSON_H_

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
// WitnessStackData
// ------------------------------------------------------------------------
/**
 * @brief JSON-API（WitnessStackData）クラス
 */
class WitnessStackData
  : public cfdcore::JsonClassBase<WitnessStackData> {
 public:
  WitnessStackData() {
    CollectFieldName();
  }
  virtual ~WitnessStackData() {
    // do nothing
  }
  /**
   * @brief フィールド名を収集する.
   */
  static void CollectFieldName();

  /**
   * @brief index 取得処理
   * @return index
   */
  uint64_t GetIndex() {
    return index_;
  }
  /**
   * @brief index 設定処理
   * @param[in] index    設定値
   */
  void SetIndex(  // line separate
    const uint64_t& index) {  // NOLINT
    this->index_ = index;
  }
  /**
   * @brief index データ型の取得処理
   * @return indexのデータ型
   */
  static std::string GetIndexFieldType() {
    return "uint64_t";
  }
  /**
   * @brief index フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetIndexString(  // line separate
      const WitnessStackData& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.index_);
  }
  /**
   * @brief index フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetIndexString(  // line separate
      WitnessStackData& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.index_, json_value);
  }

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
      const WitnessStackData& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.hex_);
  }
  /**
   * @brief hex フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetHexString(  // line separate
      WitnessStackData& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.hex_, json_value);
  }

  /**
   * @brief type 取得処理
   * @return type
   */
  std::string GetType() {
    return type_;
  }
  /**
   * @brief type 設定処理
   * @param[in] type    設定値
   */
  void SetType(  // line separate
    const std::string& type) {  // NOLINT
    this->type_ = type;
  }
  /**
   * @brief type データ型の取得処理
   * @return typeのデータ型
   */
  static std::string GetTypeFieldType() {
    return "std::string";
  }
  /**
   * @brief type フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetTypeString(  // line separate
      const WitnessStackData& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.type_);
  }
  /**
   * @brief type フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetTypeString(  // line separate
      WitnessStackData& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.type_, json_value);
  }

  /**
   * @brief derEncode 取得処理
   * @return derEncode
   */
  bool GetDerEncode() {
    return der_encode_;
  }
  /**
   * @brief derEncode 設定処理
   * @param[in] der_encode    設定値
   */
  void SetDerEncode(  // line separate
    const bool& der_encode) {  // NOLINT
    this->der_encode_ = der_encode;
  }
  /**
   * @brief derEncode データ型の取得処理
   * @return derEncodeのデータ型
   */
  static std::string GetDerEncodeFieldType() {
    return "bool";
  }
  /**
   * @brief derEncode フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetDerEncodeString(  // line separate
      const WitnessStackData& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.der_encode_);
  }
  /**
   * @brief derEncode フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetDerEncodeString(  // line separate
      WitnessStackData& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.der_encode_, json_value);
  }

  /**
   * @brief sighashType 取得処理
   * @return sighashType
   */
  std::string GetSighashType() {
    return sighash_type_;
  }
  /**
   * @brief sighashType 設定処理
   * @param[in] sighash_type    設定値
   */
  void SetSighashType(  // line separate
    const std::string& sighash_type) {  // NOLINT
    this->sighash_type_ = sighash_type;
  }
  /**
   * @brief sighashType データ型の取得処理
   * @return sighashTypeのデータ型
   */
  static std::string GetSighashTypeFieldType() {
    return "std::string";
  }
  /**
   * @brief sighashType フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetSighashTypeString(  // line separate
      const WitnessStackData& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.sighash_type_);
  }
  /**
   * @brief sighashType フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetSighashTypeString(  // line separate
      WitnessStackData& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.sighash_type_, json_value);
  }

  /**
   * @brief sighashAnyoneCanPay 取得処理
   * @return sighashAnyoneCanPay
   */
  bool GetSighashAnyoneCanPay() {
    return sighash_anyone_can_pay_;
  }
  /**
   * @brief sighashAnyoneCanPay 設定処理
   * @param[in] sighash_anyone_can_pay    設定値
   */
  void SetSighashAnyoneCanPay(  // line separate
    const bool& sighash_anyone_can_pay) {  // NOLINT
    this->sighash_anyone_can_pay_ = sighash_anyone_can_pay;
  }
  /**
   * @brief sighashAnyoneCanPay データ型の取得処理
   * @return sighashAnyoneCanPayのデータ型
   */
  static std::string GetSighashAnyoneCanPayFieldType() {
    return "bool";
  }
  /**
   * @brief sighashAnyoneCanPay フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetSighashAnyoneCanPayString(  // line separate
      const WitnessStackData& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.sighash_anyone_can_pay_);
  }
  /**
   * @brief sighashAnyoneCanPay フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetSighashAnyoneCanPayString(  // line separate
      WitnessStackData& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.sighash_anyone_can_pay_, json_value);
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
      const WitnessStackDataStruct& data);

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  WitnessStackDataStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief Mapテーブルの型名定義
   */
  using WitnessStackDataMapTable =
    cfdcore::JsonTableMap<WitnessStackData>;

  /**
   * @brief JSONマッピングオブジェクトを取得する。
   * @return JSONマッピングオブジェクト
   * @see cfdcore::JsonClassBase::GetJsonMapper()
   */
  virtual const WitnessStackDataMapTable& GetJsonMapper() const {  // NOLINT
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
  static WitnessStackDataMapTable json_mapper;
  /**
   * @brief フィールド名リスト
   */
  static std::vector<std::string> item_list;
  /**
   * @brief 無視リスト
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(index) のvalue
   */
  uint64_t index_ = 0;
  /**
   * @brief JsonAPI(hex) のvalue
   */
  std::string hex_ = "";
  /**
   * @brief JsonAPI(type) のvalue
   */
  std::string type_ = "binary";
  /**
   * @brief JsonAPI(derEncode) のvalue
   */
  bool der_encode_ = false;
  /**
   * @brief JsonAPI(sighashType) のvalue
   */
  std::string sighash_type_ = "all";
  /**
   * @brief JsonAPI(sighashAnyoneCanPay) のvalue
   */
  bool sighash_anyone_can_pay_ = false;
};

// ------------------------------------------------------------------------
// UpdateWitnessStackRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API（UpdateWitnessStackRequest）クラス
 */
class UpdateWitnessStackRequest
  : public cfdcore::JsonClassBase<UpdateWitnessStackRequest> {
 public:
  UpdateWitnessStackRequest() {
    CollectFieldName();
  }
  virtual ~UpdateWitnessStackRequest() {
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
      const UpdateWitnessStackRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.tx_hex_);
  }
  /**
   * @brief txHex フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetTxHexString(  // line separate
      UpdateWitnessStackRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.tx_hex_, json_value);
  }

  /**
   * @brief isElements 取得処理
   * @return isElements
   */
  bool GetIsElements() {
    return is_elements_;
  }
  /**
   * @brief isElements 設定処理
   * @param[in] is_elements    設定値
   */
  void SetIsElements(  // line separate
    const bool& is_elements) {  // NOLINT
    this->is_elements_ = is_elements;
  }
  /**
   * @brief isElements データ型の取得処理
   * @return isElementsのデータ型
   */
  static std::string GetIsElementsFieldType() {
    return "bool";
  }
  /**
   * @brief isElements フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetIsElementsString(  // line separate
      const UpdateWitnessStackRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.is_elements_);
  }
  /**
   * @brief isElements フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetIsElementsString(  // line separate
      UpdateWitnessStackRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.is_elements_, json_value);
  }

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
      const UpdateWitnessStackRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.txin_txid_);
  }
  /**
   * @brief txinTxid フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetTxinTxidString(  // line separate
      UpdateWitnessStackRequest& obj,  // NOLINT
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
      const UpdateWitnessStackRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.txin_vout_);
  }
  /**
   * @brief txinVout フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetTxinVoutString(  // line separate
      UpdateWitnessStackRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.txin_vout_, json_value);
  }

  /**
   * @brief witnessStack 取得処理
   * @return witnessStack
   */
  WitnessStackData& GetWitnessStack() {  // NOLINT
    return witness_stack_;
  }
  /**
   * @brief witnessStack 設定処理
   * @param[in] witness_stack    設定値
   */
  void SetWitnessStack(  // line separate
      const WitnessStackData& witness_stack) {  // NOLINT
    this->witness_stack_ = witness_stack;
  }
  /**
   * @brief witnessStack データ型の取得処理
   * @return witnessStackのデータ型
   */
  static std::string GetWitnessStackFieldType() {
    return "WitnessStackData";  // NOLINT
  }
  /**
   * @brief witnessStack フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetWitnessStackString(  // line separate
      const UpdateWitnessStackRequest& obj) {  // NOLINT
    // Serialize内部のpre/post処理でメンバ変数の置換が起こり得るためconstにしない
    return obj.witness_stack_.Serialize();
  }
  /**
   * @brief witnessStack フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetWitnessStackString(  // line separate
      UpdateWitnessStackRequest& obj,  // NOLINT
      const UniValue& json_value) {
    obj.witness_stack_.DeserializeUniValue(json_value);
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
      const UpdateWitnessStackRequestStruct& data);

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  UpdateWitnessStackRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief Mapテーブルの型名定義
   */
  using UpdateWitnessStackRequestMapTable =
    cfdcore::JsonTableMap<UpdateWitnessStackRequest>;

  /**
   * @brief JSONマッピングオブジェクトを取得する。
   * @return JSONマッピングオブジェクト
   * @see cfdcore::JsonClassBase::GetJsonMapper()
   */
  virtual const UpdateWitnessStackRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static UpdateWitnessStackRequestMapTable json_mapper;
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
   * @brief JsonAPI(isElements) のvalue
   */
  bool is_elements_ = false;
  /**
   * @brief JsonAPI(txinTxid) のvalue
   */
  std::string txin_txid_ = "";
  /**
   * @brief JsonAPI(txinVout) のvalue
   */
  uint32_t txin_vout_ = 0;
  /**
   * @brief JsonAPI(witnessStack) のvalue
   */
  WitnessStackData witness_stack_;  // NOLINT
};

// ------------------------------------------------------------------------
// UpdateWitnessStackResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API（UpdateWitnessStackResponse）クラス
 */
class UpdateWitnessStackResponse
  : public cfdcore::JsonClassBase<UpdateWitnessStackResponse> {
 public:
  UpdateWitnessStackResponse() {
    CollectFieldName();
  }
  virtual ~UpdateWitnessStackResponse() {
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
      const UpdateWitnessStackResponse& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.hex_);
  }
  /**
   * @brief hex フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetHexString(  // line separate
      UpdateWitnessStackResponse& obj,  // NOLINT
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
      const UpdateWitnessStackResponseStruct& data);

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  UpdateWitnessStackResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief Mapテーブルの型名定義
   */
  using UpdateWitnessStackResponseMapTable =
    cfdcore::JsonTableMap<UpdateWitnessStackResponse>;

  /**
   * @brief JSONマッピングオブジェクトを取得する。
   * @return JSONマッピングオブジェクト
   * @see cfdcore::JsonClassBase::GetJsonMapper()
   */
  virtual const UpdateWitnessStackResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static UpdateWitnessStackResponseMapTable json_mapper;
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

#endif  // CFD_JS_SRC_CFDAPI_UPDATE_WITNESS_JSON_H_
