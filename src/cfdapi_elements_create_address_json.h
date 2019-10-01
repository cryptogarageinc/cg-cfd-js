// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_elements_create_address_json.h
 *
 * @brief JSONマッピングファイル (自動生成)
 */
#ifndef CFD_JS_SRC_CFDAPI_ELEMENTS_CREATE_ADDRESS_JSON_H_
#define CFD_JS_SRC_CFDAPI_ELEMENTS_CREATE_ADDRESS_JSON_H_

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
// CreateUnblindedAddressRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API（CreateUnblindedAddressRequest）クラス
 */
class CreateUnblindedAddressRequest
  : public cfdcore::JsonClassBase<CreateUnblindedAddressRequest> {
 public:
  CreateUnblindedAddressRequest() {
    CollectFieldName();
  }
  virtual ~CreateUnblindedAddressRequest() {
    // do nothing
  }
  /**
   * @brief フィールド名を収集する.
   */
  static void CollectFieldName();

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
      const CreateUnblindedAddressRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.script_hex_);
  }
  /**
   * @brief scriptHex フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetScriptHexString(  // line separate
      CreateUnblindedAddressRequest& obj,  // NOLINT
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
      const CreateUnblindedAddressRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.pubkey_hex_);
  }
  /**
   * @brief pubkeyHex フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetPubkeyHexString(  // line separate
      CreateUnblindedAddressRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.pubkey_hex_, json_value);
  }

  /**
   * @brief elementsNetwork 取得処理
   * @return elementsNetwork
   */
  std::string GetElementsNetwork() {
    return elements_network_;
  }
  /**
   * @brief elementsNetwork 設定処理
   * @param[in] elements_network    設定値
   */
  void SetElementsNetwork(  // line separate
    const std::string& elements_network) {  // NOLINT
    this->elements_network_ = elements_network;
  }
  /**
   * @brief elementsNetwork データ型の取得処理
   * @return elementsNetworkのデータ型
   */
  static std::string GetElementsNetworkFieldType() {
    return "std::string";
  }
  /**
   * @brief elementsNetwork フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetElementsNetworkString(  // line separate
      const CreateUnblindedAddressRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.elements_network_);
  }
  /**
   * @brief elementsNetwork フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetElementsNetworkString(  // line separate
      CreateUnblindedAddressRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.elements_network_, json_value);
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
      const CreateUnblindedAddressRequestStruct& data);

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  CreateUnblindedAddressRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief Mapテーブルの型名定義
   */
  using CreateUnblindedAddressRequestMapTable =
    cfdcore::JsonTableMap<CreateUnblindedAddressRequest>;

  /**
   * @brief JSONマッピングオブジェクトを取得する。
   * @return JSONマッピングオブジェクト
   * @see cfdcore::JsonClassBase::GetJsonMapper()
   */
  virtual const CreateUnblindedAddressRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static CreateUnblindedAddressRequestMapTable json_mapper;
  /**
   * @brief フィールド名リスト
   */
  static std::vector<std::string> item_list;
  /**
   * @brief 無視リスト
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(scriptHex) のvalue
   */
  std::string script_hex_ = "";
  /**
   * @brief JsonAPI(pubkeyHex) のvalue
   */
  std::string pubkey_hex_ = "";
  /**
   * @brief JsonAPI(elementsNetwork) のvalue
   */
  std::string elements_network_ = "liquidv1";
};

// ------------------------------------------------------------------------
// CreateUnblindedAddressResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API（CreateUnblindedAddressResponse）クラス
 */
class CreateUnblindedAddressResponse
  : public cfdcore::JsonClassBase<CreateUnblindedAddressResponse> {
 public:
  CreateUnblindedAddressResponse() {
    CollectFieldName();
  }
  virtual ~CreateUnblindedAddressResponse() {
    // do nothing
  }
  /**
   * @brief フィールド名を収集する.
   */
  static void CollectFieldName();

  /**
   * @brief unblindedAddress 取得処理
   * @return unblindedAddress
   */
  std::string GetUnblindedAddress() {
    return unblinded_address_;
  }
  /**
   * @brief unblindedAddress 設定処理
   * @param[in] unblinded_address    設定値
   */
  void SetUnblindedAddress(  // line separate
    const std::string& unblinded_address) {  // NOLINT
    this->unblinded_address_ = unblinded_address;
  }
  /**
   * @brief unblindedAddress データ型の取得処理
   * @return unblindedAddressのデータ型
   */
  static std::string GetUnblindedAddressFieldType() {
    return "std::string";
  }
  /**
   * @brief unblindedAddress フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetUnblindedAddressString(  // line separate
      const CreateUnblindedAddressResponse& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.unblinded_address_);
  }
  /**
   * @brief unblindedAddress フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetUnblindedAddressString(  // line separate
      CreateUnblindedAddressResponse& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.unblinded_address_, json_value);
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
      const CreateUnblindedAddressResponseStruct& data);

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  CreateUnblindedAddressResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief Mapテーブルの型名定義
   */
  using CreateUnblindedAddressResponseMapTable =
    cfdcore::JsonTableMap<CreateUnblindedAddressResponse>;

  /**
   * @brief JSONマッピングオブジェクトを取得する。
   * @return JSONマッピングオブジェクト
   * @see cfdcore::JsonClassBase::GetJsonMapper()
   */
  virtual const CreateUnblindedAddressResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static CreateUnblindedAddressResponseMapTable json_mapper;
  /**
   * @brief フィールド名リスト
   */
  static std::vector<std::string> item_list;
  /**
   * @brief 無視リスト
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(unblindedAddress) のvalue
   */
  std::string unblinded_address_ = "";
};

// @formatter:on
// clang-format on

}  // namespace api
}  // namespace cfd

#endif  // CFD_JS_SRC_CFDAPI_ELEMENTS_CREATE_ADDRESS_JSON_H_
