// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_elements_get_unblinded_address_json.cpp
 *
 * @brief JSONマッピングファイル (自動生成)
 */
#include <set>
#include <string>
#include <vector>

#include "cfdapi_elements_get_unblinded_address_json.h"  // NOLINT

namespace cfd {
namespace api {

using cfdcore::JsonClassBase;
using cfdcore::JsonObjectVector;
using cfdcore::JsonValueVector;
using cfdcore::JsonVector;
// clang-format off
// @formatter:off

// ------------------------------------------------------------------------
// GetUnblindedAddressRequest
// ------------------------------------------------------------------------
cfdcore::JsonTableMap<GetUnblindedAddressRequest>
  GetUnblindedAddressRequest::json_mapper;
std::vector<std::string> GetUnblindedAddressRequest::item_list;

void GetUnblindedAddressRequest::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfdcore::CLASS_FUNCTION_TABLE<GetUnblindedAddressRequest> func_table;  // NOLINT

  func_table = {
    GetUnblindedAddressRequest::GetConfidentialAddressString,
    GetUnblindedAddressRequest::SetConfidentialAddressString,
    GetUnblindedAddressRequest::GetConfidentialAddressFieldType,
  };
  json_mapper.emplace("confidentialAddress", func_table);
  item_list.push_back("confidentialAddress");
}

void GetUnblindedAddressRequest::ConvertFromStruct(
    const GetUnblindedAddressRequestStruct& data) {
  confidential_address_ = data.confidential_address;
  ignore_items = data.ignore_items;
}

GetUnblindedAddressRequestStruct GetUnblindedAddressRequest::ConvertToStruct() const {  // NOLINT
  GetUnblindedAddressRequestStruct result;
  result.confidential_address = confidential_address_;
  result.ignore_items = ignore_items;
  return result;
}

// ------------------------------------------------------------------------
// GetUnblindedAddressResponse
// ------------------------------------------------------------------------
cfdcore::JsonTableMap<GetUnblindedAddressResponse>
  GetUnblindedAddressResponse::json_mapper;
std::vector<std::string> GetUnblindedAddressResponse::item_list;

void GetUnblindedAddressResponse::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfdcore::CLASS_FUNCTION_TABLE<GetUnblindedAddressResponse> func_table;  // NOLINT

  func_table = {
    GetUnblindedAddressResponse::GetUnblindedAddressString,
    GetUnblindedAddressResponse::SetUnblindedAddressString,
    GetUnblindedAddressResponse::GetUnblindedAddressFieldType,
  };
  json_mapper.emplace("unblindedAddress", func_table);
  item_list.push_back("unblindedAddress");
}

void GetUnblindedAddressResponse::ConvertFromStruct(
    const GetUnblindedAddressResponseStruct& data) {
  unblinded_address_ = data.unblinded_address;
  ignore_items = data.ignore_items;
}

GetUnblindedAddressResponseStruct GetUnblindedAddressResponse::ConvertToStruct() const {  // NOLINT
  GetUnblindedAddressResponseStruct result;
  result.unblinded_address = unblinded_address_;
  result.ignore_items = ignore_items;
  return result;
}

// @formatter:on
// clang-format on

}  // namespace api
}  // namespace cfd
