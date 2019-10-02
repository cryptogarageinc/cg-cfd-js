// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_add_multisig_sign_json.h
 *
 * @brief JSONマッピングファイル (自動生成)
 */
#ifndef CFD_JS_SRC_CFDAPI_ADD_MULTISIG_SIGN_JSON_H_
#define CFD_JS_SRC_CFDAPI_ADD_MULTISIG_SIGN_JSON_H_

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
// MultisigSignData
// ------------------------------------------------------------------------
/**
 * @brief JSON-API（MultisigSignData）クラス
 */
class MultisigSignData
  : public cfdcore::JsonClassBase<MultisigSignData> {
 public:
  MultisigSignData() {
    CollectFieldName();
  }
  virtual ~MultisigSignData() {
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
      const MultisigSignData& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.hex_);
  }
  /**
   * @brief hex フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetHexString(  // line separate
      MultisigSignData& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.hex_, json_value);
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
      const MultisigSignData& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.der_encode_);
  }
  /**
   * @brief derEncode フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetDerEncodeString(  // line separate
      MultisigSignData& obj,  // NOLINT
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
      const MultisigSignData& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.sighash_type_);
  }
  /**
   * @brief sighashType フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetSighashTypeString(  // line separate
      MultisigSignData& obj,  // NOLINT
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
      const MultisigSignData& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.sighash_anyone_can_pay_);
  }
  /**
   * @brief sighashAnyoneCanPay フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetSighashAnyoneCanPayString(  // line separate
      MultisigSignData& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.sighash_anyone_can_pay_, json_value);
  }

  /**
   * @brief relatedPubkey 取得処理
   * @return relatedPubkey
   */
  std::string GetRelatedPubkey() {
    return related_pubkey_;
  }
  /**
   * @brief relatedPubkey 設定処理
   * @param[in] related_pubkey    設定値
   */
  void SetRelatedPubkey(  // line separate
    const std::string& related_pubkey) {  // NOLINT
    this->related_pubkey_ = related_pubkey;
  }
  /**
   * @brief relatedPubkey データ型の取得処理
   * @return relatedPubkeyのデータ型
   */
  static std::string GetRelatedPubkeyFieldType() {
    return "std::string";
  }
  /**
   * @brief relatedPubkey フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetRelatedPubkeyString(  // line separate
      const MultisigSignData& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.related_pubkey_);
  }
  /**
   * @brief relatedPubkey フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetRelatedPubkeyString(  // line separate
      MultisigSignData& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.related_pubkey_, json_value);
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
      const MultisigSignDataStruct& data);

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  MultisigSignDataStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief Mapテーブルの型名定義
   */
  using MultisigSignDataMapTable =
    cfdcore::JsonTableMap<MultisigSignData>;

  /**
   * @brief JSONマッピングオブジェクトを取得する。
   * @return JSONマッピングオブジェクト
   * @see cfdcore::JsonClassBase::GetJsonMapper()
   */
  virtual const MultisigSignDataMapTable& GetJsonMapper() const {  // NOLINT
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
  static MultisigSignDataMapTable json_mapper;
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
   * @brief JsonAPI(derEncode) のvalue
   */
  bool der_encode_ = true;
  /**
   * @brief JsonAPI(sighashType) のvalue
   */
  std::string sighash_type_ = "all";
  /**
   * @brief JsonAPI(sighashAnyoneCanPay) のvalue
   */
  bool sighash_anyone_can_pay_ = false;
  /**
   * @brief JsonAPI(relatedPubkey) のvalue
   */
  std::string related_pubkey_ = "";
};

// ------------------------------------------------------------------------
// AddMultisigSignRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API（AddMultisigSignRequest）クラス
 */
class AddMultisigSignRequest
  : public cfdcore::JsonClassBase<AddMultisigSignRequest> {
 public:
  AddMultisigSignRequest() {
    CollectFieldName();
  }
  virtual ~AddMultisigSignRequest() {
    // do nothing
  }
  /**
   * @brief フィールド名を収集する.
   */
  static void CollectFieldName();

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
      const AddMultisigSignRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.is_elements_);
  }
  /**
   * @brief isElements フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetIsElementsString(  // line separate
      AddMultisigSignRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.is_elements_, json_value);
  }

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
      const AddMultisigSignRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.tx_);
  }
  /**
   * @brief tx フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetTxString(  // line separate
      AddMultisigSignRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.tx_, json_value);
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
      const AddMultisigSignRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.txin_txid_);
  }
  /**
   * @brief txinTxid フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetTxinTxidString(  // line separate
      AddMultisigSignRequest& obj,  // NOLINT
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
      const AddMultisigSignRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.txin_vout_);
  }
  /**
   * @brief txinVout フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetTxinVoutString(  // line separate
      AddMultisigSignRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.txin_vout_, json_value);
  }

  /**
   * @brief signParams 取得処理
   * @return signParams
   */
  JsonObjectVector<MultisigSignData, MultisigSignDataStruct>& GetSignParams() {  // NOLINT
    return sign_params_;
  }
  /**
   * @brief signParams 設定処理
   * @param[in] sign_params    設定値
   */
  void SetSignParams(  // line separate
      const JsonObjectVector<MultisigSignData, MultisigSignDataStruct>& sign_params) {  // NOLINT
    this->sign_params_ = sign_params;
  }
  /**
   * @brief signParams データ型の取得処理
   * @return signParamsのデータ型
   */
  static std::string GetSignParamsFieldType() {
    return "JsonObjectVector<MultisigSignData, MultisigSignDataStruct>";  // NOLINT
  }
  /**
   * @brief signParams フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetSignParamsString(  // line separate
      const AddMultisigSignRequest& obj) {  // NOLINT
    // Serialize内部のpre/post処理でメンバ変数の置換が起こり得るためconstにしない
    return obj.sign_params_.Serialize();
  }
  /**
   * @brief signParams フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetSignParamsString(  // line separate
      AddMultisigSignRequest& obj,  // NOLINT
      const UniValue& json_value) {
    obj.sign_params_.DeserializeUniValue(json_value);
  }

  /**
   * @brief redeemScript 取得処理
   * @return redeemScript
   */
  std::string GetRedeemScript() {
    return redeem_script_;
  }
  /**
   * @brief redeemScript 設定処理
   * @param[in] redeem_script    設定値
   */
  void SetRedeemScript(  // line separate
    const std::string& redeem_script) {  // NOLINT
    this->redeem_script_ = redeem_script;
  }
  /**
   * @brief redeemScript データ型の取得処理
   * @return redeemScriptのデータ型
   */
  static std::string GetRedeemScriptFieldType() {
    return "std::string";
  }
  /**
   * @brief redeemScript フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetRedeemScriptString(  // line separate
      const AddMultisigSignRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.redeem_script_);
  }
  /**
   * @brief redeemScript フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetRedeemScriptString(  // line separate
      AddMultisigSignRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.redeem_script_, json_value);
  }

  /**
   * @brief witnessScript 取得処理
   * @return witnessScript
   */
  std::string GetWitnessScript() {
    return witness_script_;
  }
  /**
   * @brief witnessScript 設定処理
   * @param[in] witness_script    設定値
   */
  void SetWitnessScript(  // line separate
    const std::string& witness_script) {  // NOLINT
    this->witness_script_ = witness_script;
  }
  /**
   * @brief witnessScript データ型の取得処理
   * @return witnessScriptのデータ型
   */
  static std::string GetWitnessScriptFieldType() {
    return "std::string";
  }
  /**
   * @brief witnessScript フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetWitnessScriptString(  // line separate
      const AddMultisigSignRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.witness_script_);
  }
  /**
   * @brief witnessScript フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetWitnessScriptString(  // line separate
      AddMultisigSignRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.witness_script_, json_value);
  }

  /**
   * @brief txinType 取得処理
   * @return txinType
   */
  std::string GetTxinType() {
    return txin_type_;
  }
  /**
   * @brief txinType 設定処理
   * @param[in] txin_type    設定値
   */
  void SetTxinType(  // line separate
    const std::string& txin_type) {  // NOLINT
    this->txin_type_ = txin_type;
  }
  /**
   * @brief txinType データ型の取得処理
   * @return txinTypeのデータ型
   */
  static std::string GetTxinTypeFieldType() {
    return "std::string";
  }
  /**
   * @brief txinType フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetTxinTypeString(  // line separate
      const AddMultisigSignRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.txin_type_);
  }
  /**
   * @brief txinType フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetTxinTypeString(  // line separate
      AddMultisigSignRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.txin_type_, json_value);
  }

  /**
   * @brief clearStack 取得処理
   * @return clearStack
   */
  bool GetClearStack() {
    return clear_stack_;
  }
  /**
   * @brief clearStack 設定処理
   * @param[in] clear_stack    設定値
   */
  void SetClearStack(  // line separate
    const bool& clear_stack) {  // NOLINT
    this->clear_stack_ = clear_stack;
  }
  /**
   * @brief clearStack データ型の取得処理
   * @return clearStackのデータ型
   */
  static std::string GetClearStackFieldType() {
    return "bool";
  }
  /**
   * @brief clearStack フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetClearStackString(  // line separate
      const AddMultisigSignRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.clear_stack_);
  }
  /**
   * @brief clearStack フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetClearStackString(  // line separate
      AddMultisigSignRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.clear_stack_, json_value);
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
      const AddMultisigSignRequestStruct& data);

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  AddMultisigSignRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief Mapテーブルの型名定義
   */
  using AddMultisigSignRequestMapTable =
    cfdcore::JsonTableMap<AddMultisigSignRequest>;

  /**
   * @brief JSONマッピングオブジェクトを取得する。
   * @return JSONマッピングオブジェクト
   * @see cfdcore::JsonClassBase::GetJsonMapper()
   */
  virtual const AddMultisigSignRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static AddMultisigSignRequestMapTable json_mapper;
  /**
   * @brief フィールド名リスト
   */
  static std::vector<std::string> item_list;
  /**
   * @brief 無視リスト
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(isElements) のvalue
   */
  bool is_elements_ = false;
  /**
   * @brief JsonAPI(tx) のvalue
   */
  std::string tx_ = "";
  /**
   * @brief JsonAPI(txinTxid) のvalue
   */
  std::string txin_txid_ = "";
  /**
   * @brief JsonAPI(txinVout) のvalue
   */
  uint32_t txin_vout_ = 0;
  /**
   * @brief JsonAPI(signParams) のvalue
   */
  JsonObjectVector<MultisigSignData, MultisigSignDataStruct> sign_params_;  // NOLINT
  /**
   * @brief JsonAPI(redeemScript) のvalue
   */
  std::string redeem_script_ = "";
  /**
   * @brief JsonAPI(witnessScript) のvalue
   */
  std::string witness_script_ = "";
  /**
   * @brief JsonAPI(txinType) のvalue
   */
  std::string txin_type_ = "";
  /**
   * @brief JsonAPI(clearStack) のvalue
   */
  bool clear_stack_ = true;
};

// ------------------------------------------------------------------------
// AddMultisigSignResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API（AddMultisigSignResponse）クラス
 */
class AddMultisigSignResponse
  : public cfdcore::JsonClassBase<AddMultisigSignResponse> {
 public:
  AddMultisigSignResponse() {
    CollectFieldName();
  }
  virtual ~AddMultisigSignResponse() {
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
      const AddMultisigSignResponse& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.hex_);
  }
  /**
   * @brief hex フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetHexString(  // line separate
      AddMultisigSignResponse& obj,  // NOLINT
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
      const AddMultisigSignResponseStruct& data);

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  AddMultisigSignResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief Mapテーブルの型名定義
   */
  using AddMultisigSignResponseMapTable =
    cfdcore::JsonTableMap<AddMultisigSignResponse>;

  /**
   * @brief JSONマッピングオブジェクトを取得する。
   * @return JSONマッピングオブジェクト
   * @see cfdcore::JsonClassBase::GetJsonMapper()
   */
  virtual const AddMultisigSignResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static AddMultisigSignResponseMapTable json_mapper;
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

#endif  // CFD_JS_SRC_CFDAPI_ADD_MULTISIG_SIGN_JSON_H_
