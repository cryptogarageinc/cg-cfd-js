// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_sighash_json.h
 *
 * @brief JSONマッピングファイル (自動生成)
 */
#ifndef CFD_JS_SRC_CFDAPI_SIGHASH_JSON_H_
#define CFD_JS_SRC_CFDAPI_SIGHASH_JSON_H_

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
// CreateSignatureHashRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API（CreateSignatureHashRequest）クラス
 */
class CreateSignatureHashRequest
  : public cfdcore::JsonClassBase<CreateSignatureHashRequest> {
 public:
  CreateSignatureHashRequest() {
    CollectFieldName();
  }
  virtual ~CreateSignatureHashRequest() {
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
      const CreateSignatureHashRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.tx_hex_);
  }
  /**
   * @brief txHex フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetTxHexString(  // line separate
      CreateSignatureHashRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.tx_hex_, json_value);
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
      const CreateSignatureHashRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.txin_txid_);
  }
  /**
   * @brief txinTxid フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetTxinTxidString(  // line separate
      CreateSignatureHashRequest& obj,  // NOLINT
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
      const CreateSignatureHashRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.txin_vout_);
  }
  /**
   * @brief txinVout フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetTxinVoutString(  // line separate
      CreateSignatureHashRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.txin_vout_, json_value);
  }

  /**
   * @brief scriptHex 取得処理
   * @return scriptHex
   */
  std::string GetScriptHex() {
    return script_hex_;
  }
  /**
   * @brief scriptHex 設定処理
   * @param[in] script_hex    設定値
   */
  void SetScriptHex(  // line separate
    const std::string& script_hex) {  // NOLINT
    this->script_hex_ = script_hex;
  }
  /**
   * @brief scriptHex データ型の取得処理
   * @return scriptHexのデータ型
   */
  static std::string GetScriptHexFieldType() {
    return "std::string";
  }
  /**
   * @brief scriptHex フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetScriptHexString(  // line separate
      const CreateSignatureHashRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.script_hex_);
  }
  /**
   * @brief scriptHex フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetScriptHexString(  // line separate
      CreateSignatureHashRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.script_hex_, json_value);
  }

  /**
   * @brief pubkeyHex 取得処理
   * @return pubkeyHex
   */
  std::string GetPubkeyHex() {
    return pubkey_hex_;
  }
  /**
   * @brief pubkeyHex 設定処理
   * @param[in] pubkey_hex    設定値
   */
  void SetPubkeyHex(  // line separate
    const std::string& pubkey_hex) {  // NOLINT
    this->pubkey_hex_ = pubkey_hex;
  }
  /**
   * @brief pubkeyHex データ型の取得処理
   * @return pubkeyHexのデータ型
   */
  static std::string GetPubkeyHexFieldType() {
    return "std::string";
  }
  /**
   * @brief pubkeyHex フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetPubkeyHexString(  // line separate
      const CreateSignatureHashRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.pubkey_hex_);
  }
  /**
   * @brief pubkeyHex フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetPubkeyHexString(  // line separate
      CreateSignatureHashRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.pubkey_hex_, json_value);
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
      const CreateSignatureHashRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.amount_);
  }
  /**
   * @brief amount フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetAmountString(  // line separate
      CreateSignatureHashRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.amount_, json_value);
  }

  /**
   * @brief hashType 取得処理
   * @return hashType
   */
  std::string GetHashType() {
    return hash_type_;
  }
  /**
   * @brief hashType 設定処理
   * @param[in] hash_type    設定値
   */
  void SetHashType(  // line separate
    const std::string& hash_type) {  // NOLINT
    this->hash_type_ = hash_type;
  }
  /**
   * @brief hashType データ型の取得処理
   * @return hashTypeのデータ型
   */
  static std::string GetHashTypeFieldType() {
    return "std::string";
  }
  /**
   * @brief hashType フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetHashTypeString(  // line separate
      const CreateSignatureHashRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.hash_type_);
  }
  /**
   * @brief hashType フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetHashTypeString(  // line separate
      CreateSignatureHashRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.hash_type_, json_value);
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
      const CreateSignatureHashRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.sighash_type_);
  }
  /**
   * @brief sighashType フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetSighashTypeString(  // line separate
      CreateSignatureHashRequest& obj,  // NOLINT
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
      const CreateSignatureHashRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.sighash_anyone_can_pay_);
  }
  /**
   * @brief sighashAnyoneCanPay フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetSighashAnyoneCanPayString(  // line separate
      CreateSignatureHashRequest& obj,  // NOLINT
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
      const CreateSignatureHashRequestStruct& data);

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  CreateSignatureHashRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief Mapテーブルの型名定義
   */
  using CreateSignatureHashRequestMapTable =
    cfdcore::JsonTableMap<CreateSignatureHashRequest>;

  /**
   * @brief JSONマッピングオブジェクトを取得する。
   * @return JSONマッピングオブジェクト
   * @see cfdcore::JsonClassBase::GetJsonMapper()
   */
  virtual const CreateSignatureHashRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static CreateSignatureHashRequestMapTable json_mapper;
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
   * @brief JsonAPI(txinTxid) のvalue
   */
  std::string txin_txid_ = "";
  /**
   * @brief JsonAPI(txinVout) のvalue
   */
  uint32_t txin_vout_ = 0;
  /**
   * @brief JsonAPI(scriptHex) のvalue
   */
  std::string script_hex_ = "";
  /**
   * @brief JsonAPI(pubkeyHex) のvalue
   */
  std::string pubkey_hex_ = "";
  /**
   * @brief JsonAPI(amount) のvalue
   */
  int64_t amount_ = 0;
  /**
   * @brief JsonAPI(hashType) のvalue
   */
  std::string hash_type_ = "p2wsh";
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
// CreateSignatureHashResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API（CreateSignatureHashResponse）クラス
 */
class CreateSignatureHashResponse
  : public cfdcore::JsonClassBase<CreateSignatureHashResponse> {
 public:
  CreateSignatureHashResponse() {
    CollectFieldName();
  }
  virtual ~CreateSignatureHashResponse() {
    // do nothing
  }
  /**
   * @brief フィールド名を収集する.
   */
  static void CollectFieldName();

  /**
   * @brief sighash 取得処理
   * @return sighash
   */
  std::string GetSighash() {
    return sighash_;
  }
  /**
   * @brief sighash 設定処理
   * @param[in] sighash    設定値
   */
  void SetSighash(  // line separate
    const std::string& sighash) {  // NOLINT
    this->sighash_ = sighash;
  }
  /**
   * @brief sighash データ型の取得処理
   * @return sighashのデータ型
   */
  static std::string GetSighashFieldType() {
    return "std::string";
  }
  /**
   * @brief sighash フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetSighashString(  // line separate
      const CreateSignatureHashResponse& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.sighash_);
  }
  /**
   * @brief sighash フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetSighashString(  // line separate
      CreateSignatureHashResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.sighash_, json_value);
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
      const CreateSignatureHashResponseStruct& data);

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  CreateSignatureHashResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief Mapテーブルの型名定義
   */
  using CreateSignatureHashResponseMapTable =
    cfdcore::JsonTableMap<CreateSignatureHashResponse>;

  /**
   * @brief JSONマッピングオブジェクトを取得する。
   * @return JSONマッピングオブジェクト
   * @see cfdcore::JsonClassBase::GetJsonMapper()
   */
  virtual const CreateSignatureHashResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static CreateSignatureHashResponseMapTable json_mapper;
  /**
   * @brief フィールド名リスト
   */
  static std::vector<std::string> item_list;
  /**
   * @brief 無視リスト
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(sighash) のvalue
   */
  std::string sighash_ = "";
};

// @formatter:on
// clang-format on

}  // namespace api
}  // namespace cfd

#endif  // CFD_JS_SRC_CFDAPI_SIGHASH_JSON_H_
