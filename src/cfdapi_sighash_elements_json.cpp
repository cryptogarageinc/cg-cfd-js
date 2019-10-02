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

using cfdcore::JsonClassBase;
using cfdcore::JsonObjectVector;
using cfdcore::JsonValueVector;
using cfdcore::JsonVector;
// clang-format off
// @formatter:off

// ------------------------------------------------------------------------
// ElementsSignatureHashKeyData
// ------------------------------------------------------------------------
cfdcore::JsonTableMap<ElementsSignatureHashKeyData>
  ElementsSignatureHashKeyData::json_mapper;
std::vector<std::string> ElementsSignatureHashKeyData::item_list;

void ElementsSignatureHashKeyData::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfdcore::CLASS_FUNCTION_TABLE<ElementsSignatureHashKeyData> func_table;  // NOLINT

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
// CreateElementsSignatureHashRequest
// ------------------------------------------------------------------------
cfdcore::JsonTableMap<CreateElementsSignatureHashRequest>
  CreateElementsSignatureHashRequest::json_mapper;
std::vector<std::string> CreateElementsSignatureHashRequest::item_list;

void CreateElementsSignatureHashRequest::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfdcore::CLASS_FUNCTION_TABLE<CreateElementsSignatureHashRequest> func_table;  // NOLINT

  func_table = {
    CreateElementsSignatureHashRequest::GetTxString,
    CreateElementsSignatureHashRequest::SetTxString,
    CreateElementsSignatureHashRequest::GetTxFieldType,
  };
  json_mapper.emplace("tx", func_table);
  item_list.push_back("tx");
  func_table = {
    CreateElementsSignatureHashRequest::GetTxinTxidString,
    CreateElementsSignatureHashRequest::SetTxinTxidString,
    CreateElementsSignatureHashRequest::GetTxinTxidFieldType,
  };
  json_mapper.emplace("txinTxid", func_table);
  item_list.push_back("txinTxid");
  func_table = {
    CreateElementsSignatureHashRequest::GetTxinVoutString,
    CreateElementsSignatureHashRequest::SetTxinVoutString,
    CreateElementsSignatureHashRequest::GetTxinVoutFieldType,
  };
  json_mapper.emplace("txinVout", func_table);
  item_list.push_back("txinVout");
  func_table = {
    CreateElementsSignatureHashRequest::GetKeyDataString,
    CreateElementsSignatureHashRequest::SetKeyDataString,
    CreateElementsSignatureHashRequest::GetKeyDataFieldType,
  };
  json_mapper.emplace("keyData", func_table);
  item_list.push_back("keyData");
  func_table = {
    CreateElementsSignatureHashRequest::GetAmountString,
    CreateElementsSignatureHashRequest::SetAmountString,
    CreateElementsSignatureHashRequest::GetAmountFieldType,
  };
  json_mapper.emplace("amount", func_table);
  item_list.push_back("amount");
  func_table = {
    CreateElementsSignatureHashRequest::GetConfidentialValueCommitmentString,
    CreateElementsSignatureHashRequest::SetConfidentialValueCommitmentString,
    CreateElementsSignatureHashRequest::GetConfidentialValueCommitmentFieldType,
  };
  json_mapper.emplace("confidentialValueCommitment", func_table);
  item_list.push_back("confidentialValueCommitment");
  func_table = {
    CreateElementsSignatureHashRequest::GetHashTypeString,
    CreateElementsSignatureHashRequest::SetHashTypeString,
    CreateElementsSignatureHashRequest::GetHashTypeFieldType,
  };
  json_mapper.emplace("hashType", func_table);
  item_list.push_back("hashType");
  func_table = {
    CreateElementsSignatureHashRequest::GetSighashTypeString,
    CreateElementsSignatureHashRequest::SetSighashTypeString,
    CreateElementsSignatureHashRequest::GetSighashTypeFieldType,
  };
  json_mapper.emplace("sighashType", func_table);
  item_list.push_back("sighashType");
  func_table = {
    CreateElementsSignatureHashRequest::GetSighashAnyoneCanPayString,
    CreateElementsSignatureHashRequest::SetSighashAnyoneCanPayString,
    CreateElementsSignatureHashRequest::GetSighashAnyoneCanPayFieldType,
  };
  json_mapper.emplace("sighashAnyoneCanPay", func_table);
  item_list.push_back("sighashAnyoneCanPay");
}

void CreateElementsSignatureHashRequest::ConvertFromStruct(
    const CreateElementsSignatureHashRequestStruct& data) {
  tx_ = data.tx;
  txin_txid_ = data.txin_txid;
  txin_vout_ = data.txin_vout;
  key_data_.ConvertFromStruct(data.key_data);
  amount_ = data.amount;
  confidential_value_commitment_ = data.confidential_value_commitment;
  hash_type_ = data.hash_type;
  sighash_type_ = data.sighash_type;
  sighash_anyone_can_pay_ = data.sighash_anyone_can_pay;
  ignore_items = data.ignore_items;
}

CreateElementsSignatureHashRequestStruct CreateElementsSignatureHashRequest::ConvertToStruct() const {  // NOLINT
  CreateElementsSignatureHashRequestStruct result;
  result.tx = tx_;
  result.txin_txid = txin_txid_;
  result.txin_vout = txin_vout_;
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
// CreateElementsSignatureHashResponse
// ------------------------------------------------------------------------
cfdcore::JsonTableMap<CreateElementsSignatureHashResponse>
  CreateElementsSignatureHashResponse::json_mapper;
std::vector<std::string> CreateElementsSignatureHashResponse::item_list;

void CreateElementsSignatureHashResponse::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfdcore::CLASS_FUNCTION_TABLE<CreateElementsSignatureHashResponse> func_table;  // NOLINT

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
