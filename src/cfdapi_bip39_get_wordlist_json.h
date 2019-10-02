// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_bip39_get_wordlist_json.h
 *
 * @brief JSONマッピングファイル (自動生成)
 */
#ifndef CFD_JS_SRC_CFDAPI_BIP39_GET_WORDLIST_JSON_H_
#define CFD_JS_SRC_CFDAPI_BIP39_GET_WORDLIST_JSON_H_

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
// Bip39GetWordlistRequest
// ------------------------------------------------------------------------
/**
 * @brief JSON-API（Bip39GetWordlistRequest）クラス
 */
class Bip39GetWordlistRequest
  : public cfdcore::JsonClassBase<Bip39GetWordlistRequest> {
 public:
  Bip39GetWordlistRequest() {
    CollectFieldName();
  }
  virtual ~Bip39GetWordlistRequest() {
    // do nothing
  }
  /**
   * @brief フィールド名を収集する.
   */
  static void CollectFieldName();

  /**
   * @brief language 取得処理
   * @return language
   */
  std::string GetLanguage() {
    return language_;
  }
  /**
   * @brief language 設定処理
   * @param[in] language    設定値
   */
  void SetLanguage(  // line separate
    const std::string& language) {  // NOLINT
    this->language_ = language;
  }
  /**
   * @brief language データ型の取得処理
   * @return languageのデータ型
   */
  static std::string GetLanguageFieldType() {
    return "std::string";
  }
  /**
   * @brief language フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetLanguageString(  // line separate
      const Bip39GetWordlistRequest& obj) {  // NOLINT
    return cfdcore::ConvertToString(obj.language_);
  }
  /**
   * @brief language フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetLanguageString(  // line separate
      Bip39GetWordlistRequest& obj,  // NOLINT
      const UniValue& json_value) {
    cfdcore::ConvertFromUniValue(  // line separate
      obj.language_, json_value);
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
      const Bip39GetWordlistRequestStruct& data);

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  Bip39GetWordlistRequestStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief Mapテーブルの型名定義
   */
  using Bip39GetWordlistRequestMapTable =
    cfdcore::JsonTableMap<Bip39GetWordlistRequest>;

  /**
   * @brief JSONマッピングオブジェクトを取得する。
   * @return JSONマッピングオブジェクト
   * @see cfdcore::JsonClassBase::GetJsonMapper()
   */
  virtual const Bip39GetWordlistRequestMapTable& GetJsonMapper() const {  // NOLINT
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
  static Bip39GetWordlistRequestMapTable json_mapper;
  /**
   * @brief フィールド名リスト
   */
  static std::vector<std::string> item_list;
  /**
   * @brief 無視リスト
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(language) のvalue
   */
  std::string language_ = "en";
};

// ------------------------------------------------------------------------
// Bip39GetWordlistResponse
// ------------------------------------------------------------------------
/**
 * @brief JSON-API（Bip39GetWordlistResponse）クラス
 */
class Bip39GetWordlistResponse
  : public cfdcore::JsonClassBase<Bip39GetWordlistResponse> {
 public:
  Bip39GetWordlistResponse() {
    CollectFieldName();
  }
  virtual ~Bip39GetWordlistResponse() {
    // do nothing
  }
  /**
   * @brief フィールド名を収集する.
   */
  static void CollectFieldName();

  /**
   * @brief wordlist 取得処理
   * @return wordlist
   */
  JsonValueVector<std::string>& GetWordlist() {  // NOLINT
    return wordlist_;
  }
  /**
   * @brief wordlist 設定処理
   * @param[in] wordlist    設定値
   */
  void SetWordlist(  // line separate
      const JsonValueVector<std::string>& wordlist) {  // NOLINT
    this->wordlist_ = wordlist;
  }
  /**
   * @brief wordlist データ型の取得処理
   * @return wordlistのデータ型
   */
  static std::string GetWordlistFieldType() {
    return "JsonValueVector<std::string>";  // NOLINT
  }
  /**
   * @brief wordlist フィールドのJSON文字列取得処理
   * @param[in,out] obj     クラスオブジェクト
   * @return JSON文字列
   */
  static std::string GetWordlistString(  // line separate
      const Bip39GetWordlistResponse& obj) {  // NOLINT
    // Serialize内部のpre/post処理でメンバ変数の置換が起こり得るためconstにしない
    return obj.wordlist_.Serialize();
  }
  /**
   * @brief wordlist フィールドへのJSON情報設定処理
   * @param[in,out] obj     クラスオブジェクト
   * @param[in] json_value  JSON情報
   */
  static void SetWordlistString(  // line separate
      Bip39GetWordlistResponse& obj,  // NOLINT
      const UniValue& json_value) {
    obj.wordlist_.DeserializeUniValue(json_value);
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
      const Bip39GetWordlistResponseStruct& data);

  /**
   * @brief 無視対象アイテムを設定する。
   * @param[in] key   無視対象アイテムのキー名称
   */
  Bip39GetWordlistResponseStruct ConvertToStruct()  const;

 protected:
  /**
   * @brief Mapテーブルの型名定義
   */
  using Bip39GetWordlistResponseMapTable =
    cfdcore::JsonTableMap<Bip39GetWordlistResponse>;

  /**
   * @brief JSONマッピングオブジェクトを取得する。
   * @return JSONマッピングオブジェクト
   * @see cfdcore::JsonClassBase::GetJsonMapper()
   */
  virtual const Bip39GetWordlistResponseMapTable& GetJsonMapper() const {  // NOLINT
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
  static Bip39GetWordlistResponseMapTable json_mapper;
  /**
   * @brief フィールド名リスト
   */
  static std::vector<std::string> item_list;
  /**
   * @brief 無視リスト
   */
  std::set<std::string> ignore_items;

  /**
   * @brief JsonAPI(wordlist) のvalue
   */
  JsonValueVector<std::string> wordlist_;  // NOLINT
};

// @formatter:on
// clang-format on

}  // namespace api
}  // namespace cfd

#endif  // CFD_JS_SRC_CFDAPI_BIP39_GET_WORDLIST_JSON_H_
