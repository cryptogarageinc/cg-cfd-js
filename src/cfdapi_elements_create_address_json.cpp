// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_elements_create_address_json.cpp
 *
 * @brief JSONマッピングファイル (自動生成)
 */
#include <set>
#include <string>
#include <vector>

#include "cfdapi_elements_create_address_json.h"  // NOLINT

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
cfdcore::JsonTableMap<CreateUnblindedAddressRequest>
  CreateUnblindedAddressRequest::json_mapper;
std::vector<std::string> CreateUnblindedAddressRequest::item_list;

void CreateUnblindedAddressRequest::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfdcore::CLASS_FUNCTION_TABLE<CreateUnblindedAddressRequest> func_table;  // NOLINT

  func_table = {
    CreateUnblindedAddressRequest::GetScriptHexString,
    CreateUnblindedAddressRequest::SetScriptHexString,
    CreateUnblindedAddressRequest::GetScriptHexFieldType,
  };
  json_mapper.emplace("scriptHex", func_table);
  item_list.push_back("scriptHex");
  func_table = {
    CreateUnblindedAddressRequest::GetPubkeyHexString,
    CreateUnblindedAddressRequest::SetPubkeyHexString,
    CreateUnblindedAddressRequest::GetPubkeyHexFieldType,
  };
  json_mapper.emplace("pubkeyHex", func_table);
  item_list.push_back("pubkeyHex");
  func_table = {
    CreateUnblindedAddressRequest::GetElementsNetworkString,
    CreateUnblindedAddressRequest::SetElementsNetworkString,
    CreateUnblindedAddressRequest::GetElementsNetworkFieldType,
  };
  json_mapper.emplace("elementsNetwork", func_table);
  item_list.push_back("elementsNetwork");
}

void CreateUnblindedAddressRequest::ConvertFromStruct(
    const CreateUnblindedAddressRequestStruct& data) {
  script_hex_ = data.script_hex;
  pubkey_hex_ = data.pubkey_hex;
  elements_network_ = data.elements_network;
  ignore_items = data.ignore_items;
}

CreateUnblindedAddressRequestStruct CreateUnblindedAddressRequest::ConvertToStruct() const {  // NOLINT
  CreateUnblindedAddressRequestStruct result;
  result.script_hex = script_hex_;
  result.pubkey_hex = pubkey_hex_;
  result.elements_network = elements_network_;
  result.ignore_items = ignore_items;
  return result;
}

// ------------------------------------------------------------------------
// CreateUnblindedAddressResponse
// ------------------------------------------------------------------------
cfdcore::JsonTableMap<CreateUnblindedAddressResponse>
  CreateUnblindedAddressResponse::json_mapper;
std::vector<std::string> CreateUnblindedAddressResponse::item_list;

void CreateUnblindedAddressResponse::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfdcore::CLASS_FUNCTION_TABLE<CreateUnblindedAddressResponse> func_table;  // NOLINT

  func_table = {
    CreateUnblindedAddressResponse::GetUnblindedAddressString,
    CreateUnblindedAddressResponse::SetUnblindedAddressString,
    CreateUnblindedAddressResponse::GetUnblindedAddressFieldType,
  };
  json_mapper.emplace("unblindedAddress", func_table);
  item_list.push_back("unblindedAddress");
}

void CreateUnblindedAddressResponse::ConvertFromStruct(
    const CreateUnblindedAddressResponseStruct& data) {
  unblinded_address_ = data.unblinded_address;
  ignore_items = data.ignore_items;
}

CreateUnblindedAddressResponseStruct CreateUnblindedAddressResponse::ConvertToStruct() const {  // NOLINT
  CreateUnblindedAddressResponseStruct result;
  result.unblinded_address = unblinded_address_;
  result.ignore_items = ignore_items;
  return result;
}

// @formatter:on
// clang-format on

}  // namespace api
}  // namespace cfd
