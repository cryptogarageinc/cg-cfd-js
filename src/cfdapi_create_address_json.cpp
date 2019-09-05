// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_create_address_json.cpp
 *
 * @brief JSONマッピングファイル (自動生成)
 */
#include <set>
#include <string>
#include <vector>

#include "cfdapi_create_address_json.h"  // NOLINT

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
cfdcore::JsonTableMap<CreateAddressRequest>
  CreateAddressRequest::json_mapper;
std::vector<std::string> CreateAddressRequest::item_list;

void CreateAddressRequest::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfdcore::CLASS_FUNCTION_TABLE<CreateAddressRequest> func_table;  // NOLINT

  func_table = {
    CreateAddressRequest::GetScriptHexString,
    CreateAddressRequest::SetScriptHexString,
    CreateAddressRequest::GetScriptHexFieldType,
  };
  json_mapper.emplace("scriptHex", func_table);
  item_list.push_back("scriptHex");
  func_table = {
    CreateAddressRequest::GetPubkeyHexString,
    CreateAddressRequest::SetPubkeyHexString,
    CreateAddressRequest::GetPubkeyHexFieldType,
  };
  json_mapper.emplace("pubkeyHex", func_table);
  item_list.push_back("pubkeyHex");
  func_table = {
    CreateAddressRequest::GetNetworkString,
    CreateAddressRequest::SetNetworkString,
    CreateAddressRequest::GetNetworkFieldType,
  };
  json_mapper.emplace("network", func_table);
  item_list.push_back("network");
  func_table = {
    CreateAddressRequest::GetHashTypeString,
    CreateAddressRequest::SetHashTypeString,
    CreateAddressRequest::GetHashTypeFieldType,
  };
  json_mapper.emplace("hashType", func_table);
  item_list.push_back("hashType");
}

void CreateAddressRequest::ConvertFromStruct(
    const CreateAddressRequestStruct& data) {
  script_hex_ = data.script_hex;
  pubkey_hex_ = data.pubkey_hex;
  network_ = data.network;
  hash_type_ = data.hash_type;
  ignore_items = data.ignore_items;
}

CreateAddressRequestStruct CreateAddressRequest::ConvertToStruct() const {  // NOLINT
  CreateAddressRequestStruct result;
  result.script_hex = script_hex_;
  result.pubkey_hex = pubkey_hex_;
  result.network = network_;
  result.hash_type = hash_type_;
  result.ignore_items = ignore_items;
  return result;
}

// ------------------------------------------------------------------------
// CreateAddressResponse
// ------------------------------------------------------------------------
cfdcore::JsonTableMap<CreateAddressResponse>
  CreateAddressResponse::json_mapper;
std::vector<std::string> CreateAddressResponse::item_list;

void CreateAddressResponse::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfdcore::CLASS_FUNCTION_TABLE<CreateAddressResponse> func_table;  // NOLINT

  func_table = {
    CreateAddressResponse::GetAddressString,
    CreateAddressResponse::SetAddressString,
    CreateAddressResponse::GetAddressFieldType,
  };
  json_mapper.emplace("address", func_table);
  item_list.push_back("address");
  func_table = {
    CreateAddressResponse::GetLockingScriptString,
    CreateAddressResponse::SetLockingScriptString,
    CreateAddressResponse::GetLockingScriptFieldType,
  };
  json_mapper.emplace("lockingScript", func_table);
  item_list.push_back("lockingScript");
}

void CreateAddressResponse::ConvertFromStruct(
    const CreateAddressResponseStruct& data) {
  address_ = data.address;
  locking_script_ = data.locking_script;
  ignore_items = data.ignore_items;
}

CreateAddressResponseStruct CreateAddressResponse::ConvertToStruct() const {  // NOLINT
  CreateAddressResponseStruct result;
  result.address = address_;
  result.locking_script = locking_script_;
  result.ignore_items = ignore_items;
  return result;
}

// @formatter:on
// clang-format on

}  // namespace api
}  // namespace cfd
