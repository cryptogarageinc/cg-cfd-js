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
    CreateElementsSignatureHashRequest::GetTxHexString,
    CreateElementsSignatureHashRequest::SetTxHexString,
    CreateElementsSignatureHashRequest::GetTxHexFieldType,
  };
  json_mapper.emplace("txHex", func_table);
  item_list.push_back("txHex");
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
    CreateElementsSignatureHashRequest::GetScriptHexString,
    CreateElementsSignatureHashRequest::SetScriptHexString,
    CreateElementsSignatureHashRequest::GetScriptHexFieldType,
  };
  json_mapper.emplace("scriptHex", func_table);
  item_list.push_back("scriptHex");
  func_table = {
    CreateElementsSignatureHashRequest::GetPubkeyHexString,
    CreateElementsSignatureHashRequest::SetPubkeyHexString,
    CreateElementsSignatureHashRequest::GetPubkeyHexFieldType,
  };
  json_mapper.emplace("pubkeyHex", func_table);
  item_list.push_back("pubkeyHex");
  func_table = {
    CreateElementsSignatureHashRequest::GetAmountString,
    CreateElementsSignatureHashRequest::SetAmountString,
    CreateElementsSignatureHashRequest::GetAmountFieldType,
  };
  json_mapper.emplace("amount", func_table);
  item_list.push_back("amount");
  func_table = {
    CreateElementsSignatureHashRequest::GetConfidentialValueHexString,
    CreateElementsSignatureHashRequest::SetConfidentialValueHexString,
    CreateElementsSignatureHashRequest::GetConfidentialValueHexFieldType,
  };
  json_mapper.emplace("confidentialValueHex", func_table);
  item_list.push_back("confidentialValueHex");
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
  tx_hex_ = data.tx_hex;
  txin_txid_ = data.txin_txid;
  txin_vout_ = data.txin_vout;
  script_hex_ = data.script_hex;
  pubkey_hex_ = data.pubkey_hex;
  amount_ = data.amount;
  confidential_value_hex_ = data.confidential_value_hex;
  hash_type_ = data.hash_type;
  sighash_type_ = data.sighash_type;
  sighash_anyone_can_pay_ = data.sighash_anyone_can_pay;
  ignore_items = data.ignore_items;
}

CreateElementsSignatureHashRequestStruct CreateElementsSignatureHashRequest::ConvertToStruct() const {  // NOLINT
  CreateElementsSignatureHashRequestStruct result;
  result.tx_hex = tx_hex_;
  result.txin_txid = txin_txid_;
  result.txin_vout = txin_vout_;
  result.script_hex = script_hex_;
  result.pubkey_hex = pubkey_hex_;
  result.amount = amount_;
  result.confidential_value_hex = confidential_value_hex_;
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
