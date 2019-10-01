// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_create_address_json.h
 *
 * @brief JSONマッピングファイル (自動生成)
 */
#ifndef CFD_JS_SRC_CFDAPI_CREATE_ADDRESS_JSON_H_
#define CFD_JS_SRC_CFDAPI_CREATE_ADDRESS_JSON_H_

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
// CreateAddressRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API（CreateAddressRequest）クラス
 */
class CreateAddressRequest
  : public cfdcore::JsonClassBase<CreateAddressRequest> {
 public:
  CreateAddressRequest() {
    CollectFieldName();
  }
  virtual ~CreateAddressRequest() {
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
      const CreateAddressRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.is_elements_);
  }
  /**
   * @brief isElements フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetIsElementsString(  // line separate
      CreateAddressRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.is_elements_, json_value);
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
      const CreateAddressRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.script_hex_);
  }
  /**
   * @brief scriptHex フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetScriptHexString(  // line separate
      CreateAddressRequest& obj,  // NOLINT
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
      const CreateAddressRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.pubkey_hex_);
  }
  /**
   * @brief pubkeyHex フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetPubkeyHexString(  // line separate
      CreateAddressRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.pubkey_hex_, json_value);
  }

  /**
   * @brief network 取得処理
   * @return network
   */
  std::string GetNetwork() {
    return network_;
  }
  /**
   * @brief network 設定処理
   * @param[in] network    設定値
   */
  void SetNetwork(  // line separate
    const std::string& network) {  // NOLINT
    this->network_ = network;
  }
  /**
   * @brief network データ型の取得処理
   * @return networkのデータ型
   */
  static std::string GetNetworkFieldType() {
    return "std::string";
  }
  /**
   * @brief network フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetNetworkString(  // line separate
      const CreateAddressRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.network_);
  }
  /**
   * @brief network フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetNetworkString(  // line separate
      CreateAddressRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.network_, json_value);
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
      const CreateAddressRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.hash_type_);
  }
  /**
   * @brief hashType フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetHashTypeString(  // line separate
      CreateAddressRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.hash_type_, json_value);
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
      const CreateAddressRequestStruct& data);

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  CreateAddressRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief Mapテーブルの型名定義
   */
  using CreateAddressRequestMapTable =
    cfdcore::JsonTableMap<CreateAddressRequest>;

  /**
   * @brief JSONマッピングオブジェクトを取得する。
   * @return JSONマッピングオブジェクト
   * @see cfdcore::JsonClassBase::GetJsonMapper()
   */
  virtual const CreateAddressRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static CreateAddressRequestMapTable json_mapper;
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
   * @brief JsonAPI(scriptHex) のvalue
   */
  std::string script_hex_ = "";
  /**
   * @brief JsonAPI(pubkeyHex) のvalue
   */
  std::string pubkey_hex_ = "";
  /**
   * @brief JsonAPI(network) のvalue
   */
  std::string network_ = "mainnet";
  /**
   * @brief JsonAPI(hashType) のvalue
   */
  std::string hash_type_ = "p2wpkh";
};

// ------------------------------------------------------------------------
// CreateAddressResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API（CreateAddressResponse）クラス
 */
class CreateAddressResponse
  : public cfdcore::JsonClassBase<CreateAddressResponse> {
 public:
  CreateAddressResponse() {
    CollectFieldName();
  }
  virtual ~CreateAddressResponse() {
    // do nothing
  }
  /**
   * @brief フィールド名を収集する.
   */
  static void CollectFieldName();

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
      const CreateAddressResponse& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.address_);
  }
  /**
   * @brief address フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetAddressString(  // line separate
      CreateAddressResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.address_, json_value);
  }

  /**
   * @brief lockingScript 取得処理
   * @return lockingScript
   */
  std::string GetLockingScript() {
    return locking_script_;
  }
  /**
   * @brief lockingScript 設定処理
   * @param[in] locking_script    設定値
   */
  void SetLockingScript(  // line separate
    const std::string& locking_script) {  // NOLINT
    this->locking_script_ = locking_script;
  }
  /**
   * @brief lockingScript データ型の取得処理
   * @return lockingScriptのデータ型
   */
  static std::string GetLockingScriptFieldType() {
    return "std::string";
  }
  /**
   * @brief lockingScript フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetLockingScriptString(  // line separate
      const CreateAddressResponse& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.locking_script_);
  }
  /**
   * @brief lockingScript フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetLockingScriptString(  // line separate
      CreateAddressResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.locking_script_, json_value);
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
      const CreateAddressResponse& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.redeem_script_);
  }
  /**
   * @brief redeemScript フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetRedeemScriptString(  // line separate
      CreateAddressResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.redeem_script_, json_value);
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
      const CreateAddressResponseStruct& data);

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  CreateAddressResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief Mapテーブルの型名定義
   */
  using CreateAddressResponseMapTable =
    cfdcore::JsonTableMap<CreateAddressResponse>;

  /**
   * @brief JSONマッピングオブジェクトを取得する。
   * @return JSONマッピングオブジェクト
   * @see cfdcore::JsonClassBase::GetJsonMapper()
   */
  virtual const CreateAddressResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static CreateAddressResponseMapTable json_mapper;
  /**
   * @brief フィールド名リスト
   */
  static std::vector<std::string> item_list;
  /**
   * @brief 無視リスト
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(address) のvalue
   */
  std::string address_ = "";
  /**
   * @brief JsonAPI(lockingScript) のvalue
   */
  std::string locking_script_ = "";
  /**
   * @brief JsonAPI(redeemScript) のvalue
   */
  std::string redeem_script_ = "";
};

// @formatter:on
// clang-format on

}  // namespace api
}  // namespace cfd

#endif  // CFD_JS_SRC_CFDAPI_CREATE_ADDRESS_JSON_H_
