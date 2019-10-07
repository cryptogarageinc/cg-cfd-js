// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_sighash_elements_json.cpp
 *
 * @brief JSONマッピングファイル (自動生成)
 */
#include <set>
#include <string>
#include <vector>

#include "cfdapi_sighash_elements_json.h"  // NOLINT

namespace cfd {
namespace api {

using cfd::core::JsonClassBase;
using cfd::core::JsonObjectVector;
using cfd::core::JsonValueVector;
using cfd::core::JsonVector;
// clang-format off
// @formatter:off

// ------------------------------------------------------------------------
// ElementsSignatureHashKeyData
// ------------------------------------------------------------------------
cfd::core::JsonTableMap<ElementsSignatureHashKeyData>
  ElementsSignatureHashKeyData::json_mapper;
std::vector<std::string> ElementsSignatureHashKeyData::item_list;

void ElementsSignatureHashKeyData::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfd::core::CLASS_FUNCTION_TABLE<ElementsSignatureHashKeyData> func_table;  // NOLINT

  func_table = {
    ElementsSignatureHashKeyData::GetHexString,
    ElementsSignatureHashKeyData::SetHexString,
    ElementsSignatureHashKeyData::GetHexFieldType,
  };
  json_mapper.emplace("hex", func_table);
  item_list.push_back("hex");
  func_table = {
    ElementsSignatureHashKeyData::GetTypeString,
    ElementsSignatureHashKeyData::SetTypeString,
    ElementsSignatureHashKeyData::GetTypeFieldType,
  };
  json_mapper.emplace("type", func_table);
  item_list.push_back("type");
}

void ElementsSignatureHashKeyData::ConvertFromStruct(
    const ElementsSignatureHashKeyDataStruct& data) {
  hex_ = data.hex;
  type_ = data.type;
  ignore_items = data.ignore_items;
}

ElementsSignatureHashKeyDataStruct ElementsSignatureHashKeyData::ConvertToStruct() const {  // NOLINT
  ElementsSignatureHashKeyDataStruct result;
  result.hex = hex_;
  result.type = type_;
  result.ignore_items = ignore_items;
  return result;
}

// ------------------------------------------------------------------------
// CreateElementsSignatureHashTxInRequest
// ------------------------------------------------------------------------
cfd::core::JsonTableMap<CreateElementsSignatureHashTxInRequest>
  CreateElementsSignatureHashTxInRequest::json_mapper;
std::vector<std::string> CreateElementsSignatureHashTxInRequest::item_list;

void CreateElementsSignatureHashTxInRequest::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfd::core::CLASS_FUNCTION_TABLE<CreateElementsSignatureHashTxInRequest> func_table;  // NOLINT

  func_table = {
    CreateElementsSignatureHashTxInRequest::GetTxidString,
    CreateElementsSignatureHashTxInRequest::SetTxidString,
    CreateElementsSignatureHashTxInRequest::GetTxidFieldType,
  };
  json_mapper.emplace("txid", func_table);
  item_list.push_back("txid");
  func_table = {
    CreateElementsSignatureHashTxInRequest::GetVoutString,
    CreateElementsSignatureHashTxInRequest::SetVoutString,
    CreateElementsSignatureHashTxInRequest::GetVoutFieldType,
  };
  json_mapper.emplace("vout", func_table);
  item_list.push_back("vout");
  func_table = {
    CreateElementsSignatureHashTxInRequest::GetKeyDataString,
    CreateElementsSignatureHashTxInRequest::SetKeyDataString,
    CreateElementsSignatureHashTxInRequest::GetKeyDataFieldType,
  };
  json_mapper.emplace("keyData", func_table);
  item_list.push_back("keyData");
  func_table = {
    CreateElementsSignatureHashTxInRequest::GetAmountString,
    CreateElementsSignatureHashTxInRequest::SetAmountString,
    CreateElementsSignatureHashTxInRequest::GetAmountFieldType,
  };
  json_mapper.emplace("amount", func_table);
  item_list.push_back("amount");
  func_table = {
    CreateElementsSignatureHashTxInRequest::GetConfidentialValueCommitmentString,
    CreateElementsSignatureHashTxInRequest::SetConfidentialValueCommitmentString,
    CreateElementsSignatureHashTxInRequest::GetConfidentialValueCommitmentFieldType,
  };
  json_mapper.emplace("confidentialValueCommitment", func_table);
  item_list.push_back("confidentialValueCommitment");
  func_table = {
    CreateElementsSignatureHashTxInRequest::GetHashTypeString,
    CreateElementsSignatureHashTxInRequest::SetHashTypeString,
    CreateElementsSignatureHashTxInRequest::GetHashTypeFieldType,
  };
  json_mapper.emplace("hashType", func_table);
  item_list.push_back("hashType");
  func_table = {
    CreateElementsSignatureHashTxInRequest::GetSighashTypeString,
    CreateElementsSignatureHashTxInRequest::SetSighashTypeString,
    CreateElementsSignatureHashTxInRequest::GetSighashTypeFieldType,
  };
  json_mapper.emplace("sighashType", func_table);
  item_list.push_back("sighashType");
  func_table = {
    CreateElementsSignatureHashTxInRequest::GetSighashAnyoneCanPayString,
    CreateElementsSignatureHashTxInRequest::SetSighashAnyoneCanPayString,
    CreateElementsSignatureHashTxInRequest::GetSighashAnyoneCanPayFieldType,
  };
  json_mapper.emplace("sighashAnyoneCanPay", func_table);
  item_list.push_back("sighashAnyoneCanPay");
}

void CreateElementsSignatureHashTxInRequest::ConvertFromStruct(
    const CreateElementsSignatureHashTxInRequestStruct& data) {
  txid_ = data.txid;
  vout_ = data.vout;
  key_data_.ConvertFromStruct(data.key_data);
  amount_ = data.amount;
  confidential_value_commitment_ = data.confidential_value_commitment;
  hash_type_ = data.hash_type;
  sighash_type_ = data.sighash_type;
  sighash_anyone_can_pay_ = data.sighash_anyone_can_pay;
  ignore_items = data.ignore_items;
}

CreateElementsSignatureHashTxInRequestStruct CreateElementsSignatureHashTxInRequest::ConvertToStruct() const {  // NOLINT
  CreateElementsSignatureHashTxInRequestStruct result;
  result.txid = txid_;
  result.vout = vout_;
  result.key_data = key_data_.ConvertToStruct();
  result.amount = amount_;
  result.confidential_value_commitment = confidential_value_commitment_;
  result.hash_type = hash_type_;
  result.sighash_type = sighash_type_;
  result.sighash_anyone_can_pay = sighash_anyone_can_pay_;
  result.ignore_items = ignore_items;
  return result;
}

// ------------------------------------------------------------------------
// CreateElementsSignatureHashRequest
// ------------------------------------------------------------------------
cfd::core::JsonTableMap<CreateElementsSignatureHashRequest>
  CreateElementsSignatureHashRequest::json_mapper;
std::vector<std::string> CreateElementsSignatureHashRequest::item_list;

void CreateElementsSignatureHashRequest::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfd::core::CLASS_FUNCTION_TABLE<CreateElementsSignatureHashRequest> func_table;  // NOLINT

  func_table = {
    CreateElementsSignatureHashRequest::GetTxString,
    CreateElementsSignatureHashRequest::SetTxString,
    CreateElementsSignatureHashRequest::GetTxFieldType,
  };
  json_mapper.emplace("tx", func_table);
  item_list.push_back("tx");
  func_table = {
    CreateElementsSignatureHashRequest::GetTxinString,
    CreateElementsSignatureHashRequest::SetTxinString,
    CreateElementsSignatureHashRequest::GetTxinFieldType,
  };
  json_mapper.emplace("txin", func_table);
  item_list.push_back("txin");
}

void CreateElementsSignatureHashRequest::ConvertFromStruct(
    const CreateElementsSignatureHashRequestStruct& data) {
  tx_ = data.tx;
  txin_.ConvertFromStruct(data.txin);
  ignore_items = data.ignore_items;
}

CreateElementsSignatureHashRequestStruct CreateElementsSignatureHashRequest::ConvertToStruct() const {  // NOLINT
  CreateElementsSignatureHashRequestStruct result;
  result.tx = tx_;
  result.txin = txin_.ConvertToStruct();
  result.ignore_items = ignore_items;
  return result;
}

// ------------------------------------------------------------------------
// CreateElementsSignatureHashResponse
// ------------------------------------------------------------------------
cfd::core::JsonTableMap<CreateElementsSignatureHashResponse>
  CreateElementsSignatureHashResponse::json_mapper;
std::vector<std::string> CreateElementsSignatureHashResponse::item_list;

void CreateElementsSignatureHashResponse::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfd::core::CLASS_FUNCTION_TABLE<CreateElementsSignatureHashResponse> func_table;  // NOLINT

  func_table = {
    CreateElementsSignatureHashResponse::GetSighashString,
    CreateElementsSignatureHashResponse::SetSighashString,
    CreateElementsSignatureHashResponse::GetSighashFieldType,
  };
  json_mapper.emplace("sighash", func_table);
  item_list.push_back("sighash");
}

void CreateElementsSignatureHashResponse::ConvertFromStruct(
    const CreateElementsSignatureHashResponseStruct& data) {
  sighash_ = data.sighash;
  ignore_items = data.ignore_items;
}

CreateElementsSignatureHashResponseStruct CreateElementsSignatureHashResponse::ConvertToStruct() const {  // NOLINT
  CreateElementsSignatureHashResponseStruct result;
  result.sighash = sighash_;
  result.ignore_items = ignore_items;
  return result;
}

// @formatter:on
// clang-format on

}  // namespace api
}  // namespace cfd
