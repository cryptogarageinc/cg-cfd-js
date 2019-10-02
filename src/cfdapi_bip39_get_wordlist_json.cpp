// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_bip39_get_wordlist_json.cpp
 *
 * @brief JSONマッピングファイル (自動生成)
 */
#include <set>
#include <string>
#include <vector>

#include "cfdapi_bip39_get_wordlist_json.h"  // NOLINT

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
cfdcore::JsonTableMap<Bip39GetWordlistRequest>
  Bip39GetWordlistRequest::json_mapper;
std::vector<std::string> Bip39GetWordlistRequest::item_list;

void Bip39GetWordlistRequest::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfdcore::CLASS_FUNCTION_TABLE<Bip39GetWordlistRequest> func_table;  // NOLINT

  func_table = {
    Bip39GetWordlistRequest::GetLanguageString,
    Bip39GetWordlistRequest::SetLanguageString,
    Bip39GetWordlistRequest::GetLanguageFieldType,
  };
  json_mapper.emplace("language", func_table);
  item_list.push_back("language");
}

void Bip39GetWordlistRequest::ConvertFromStruct(
    const Bip39GetWordlistRequestStruct& data) {
  language_ = data.language;
  ignore_items = data.ignore_items;
}

Bip39GetWordlistRequestStruct Bip39GetWordlistRequest::ConvertToStruct() const {  // NOLINT
  Bip39GetWordlistRequestStruct result;
  result.language = language_;
  result.ignore_items = ignore_items;
  return result;
}

// ------------------------------------------------------------------------
// Bip39GetWordlistResponse
// ------------------------------------------------------------------------
cfdcore::JsonTableMap<Bip39GetWordlistResponse>
  Bip39GetWordlistResponse::json_mapper;
std::vector<std::string> Bip39GetWordlistResponse::item_list;

void Bip39GetWordlistResponse::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfdcore::CLASS_FUNCTION_TABLE<Bip39GetWordlistResponse> func_table;  // NOLINT

  func_table = {
    Bip39GetWordlistResponse::GetWordlistString,
    Bip39GetWordlistResponse::SetWordlistString,
    Bip39GetWordlistResponse::GetWordlistFieldType,
  };
  json_mapper.emplace("wordlist", func_table);
  item_list.push_back("wordlist");
}

void Bip39GetWordlistResponse::ConvertFromStruct(
    const Bip39GetWordlistResponseStruct& data) {
  wordlist_.ConvertFromStruct(data.wordlist);
  ignore_items = data.ignore_items;
}

Bip39GetWordlistResponseStruct Bip39GetWordlistResponse::ConvertToStruct() const {  // NOLINT
  Bip39GetWordlistResponseStruct result;
  result.wordlist = wordlist_.ConvertToStruct();
  result.ignore_items = ignore_items;
  return result;
}

// @formatter:on
// clang-format on

}  // namespace api
}  // namespace cfd
