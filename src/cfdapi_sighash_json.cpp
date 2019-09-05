// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_sighash_json.cpp
 *
 * @brief JSONマッピングファイル (自動生成)
 */
#include <set>
#include <string>
#include <vector>

#include "cfdapi_sighash_json.h"  // NOLINT

namespace cfd {
namespace api {

using cfdcore::JsonClassBase;
using cfdcore::JsonObjectVector;
using cfdcore::JsonValueVector;
using cfdcore::JsonVector;
// clang-format off
// @formatter:off

// ------------------------------------------------------------------------
// CreateSignatureHashRequest
// ------------------------------------------------------------------------
cfdcore::JsonTableMap<CreateSignatureHashRequest>
  CreateSignatureHashRequest::json_mapper;
std::vector<std::string> CreateSignatureHashRequest::item_list;

void CreateSignatureHashRequest::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfdcore::CLASS_FUNCTION_TABLE<CreateSignatureHashRequest> func_table;  // NOLINT

  func_table = {
    CreateSignatureHashRequest::GetTxHexString,
    CreateSignatureHashRequest::SetTxHexString,
    CreateSignatureHashRequest::GetTxHexFieldType,
  };
  json_mapper.emplace("txHex", func_table);
  item_list.push_back("txHex");
  func_table = {
    CreateSignatureHashRequest::GetTxinTxidString,
    CreateSignatureHashRequest::SetTxinTxidString,
    CreateSignatureHashRequest::GetTxinTxidFieldType,
  };
  json_mapper.emplace("txinTxid", func_table);
  item_list.push_back("txinTxid");
  func_table = {
    CreateSignatureHashRequest::GetTxinVoutString,
    CreateSignatureHashRequest::SetTxinVoutString,
    CreateSignatureHashRequest::GetTxinVoutFieldType,
  };
  json_mapper.emplace("txinVout", func_table);
  item_list.push_back("txinVout");
  func_table = {
    CreateSignatureHashRequest::GetScriptHexString,
    CreateSignatureHashRequest::SetScriptHexString,
    CreateSignatureHashRequest::GetScriptHexFieldType,
  };
  json_mapper.emplace("scriptHex", func_table);
  item_list.push_back("scriptHex");
  func_table = {
    CreateSignatureHashRequest::GetPubkeyHexString,
    CreateSignatureHashRequest::SetPubkeyHexString,
    CreateSignatureHashRequest::GetPubkeyHexFieldType,
  };
  json_mapper.emplace("pubkeyHex", func_table);
  item_list.push_back("pubkeyHex");
  func_table = {
    CreateSignatureHashRequest::GetAmountString,
    CreateSignatureHashRequest::SetAmountString,
    CreateSignatureHashRequest::GetAmountFieldType,
  };
  json_mapper.emplace("amount", func_table);
  item_list.push_back("amount");
  func_table = {
    CreateSignatureHashRequest::GetHashTypeString,
    CreateSignatureHashRequest::SetHashTypeString,
    CreateSignatureHashRequest::GetHashTypeFieldType,
  };
  json_mapper.emplace("hashType", func_table);
  item_list.push_back("hashType");
  func_table = {
    CreateSignatureHashRequest::GetSighashTypeString,
    CreateSignatureHashRequest::SetSighashTypeString,
    CreateSignatureHashRequest::GetSighashTypeFieldType,
  };
  json_mapper.emplace("sighashType", func_table);
  item_list.push_back("sighashType");
  func_table = {
    CreateSignatureHashRequest::GetSighashAnyoneCanPayString,
    CreateSignatureHashRequest::SetSighashAnyoneCanPayString,
    CreateSignatureHashRequest::GetSighashAnyoneCanPayFieldType,
  };
  json_mapper.emplace("sighashAnyoneCanPay", func_table);
  item_list.push_back("sighashAnyoneCanPay");
}

void CreateSignatureHashRequest::ConvertFromStruct(
    const CreateSignatureHashRequestStruct& data) {
  tx_hex_ = data.tx_hex;
  txin_txid_ = data.txin_txid;
  txin_vout_ = data.txin_vout;
  script_hex_ = data.script_hex;
  pubkey_hex_ = data.pubkey_hex;
  amount_ = data.amount;
  hash_type_ = data.hash_type;
  sighash_type_ = data.sighash_type;
  sighash_anyone_can_pay_ = data.sighash_anyone_can_pay;
  ignore_items = data.ignore_items;
}

CreateSignatureHashRequestStruct CreateSignatureHashRequest::ConvertToStruct() const {  // NOLINT
  CreateSignatureHashRequestStruct result;
  result.tx_hex = tx_hex_;
  result.txin_txid = txin_txid_;
  result.txin_vout = txin_vout_;
  result.script_hex = script_hex_;
  result.pubkey_hex = pubkey_hex_;
  result.amount = amount_;
  result.hash_type = hash_type_;
  result.sighash_type = sighash_type_;
  result.sighash_anyone_can_pay = sighash_anyone_can_pay_;
  result.ignore_items = ignore_items;
  return result;
}

// ------------------------------------------------------------------------
// CreateSignatureHashResponse
// ------------------------------------------------------------------------
cfdcore::JsonTableMap<CreateSignatureHashResponse>
  CreateSignatureHashResponse::json_mapper;
std::vector<std::string> CreateSignatureHashResponse::item_list;

void CreateSignatureHashResponse::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfdcore::CLASS_FUNCTION_TABLE<CreateSignatureHashResponse> func_table;  // NOLINT

  func_table = {
    CreateSignatureHashResponse::GetSighashString,
    CreateSignatureHashResponse::SetSighashString,
    CreateSignatureHashResponse::GetSighashFieldType,
  };
  json_mapper.emplace("sighash", func_table);
  item_list.push_back("sighash");
}

void CreateSignatureHashResponse::ConvertFromStruct(
    const CreateSignatureHashResponseStruct& data) {
  sighash_ = data.sighash;
  ignore_items = data.ignore_items;
}

CreateSignatureHashResponseStruct CreateSignatureHashResponse::ConvertToStruct() const {  // NOLINT
  CreateSignatureHashResponseStruct result;
  result.sighash = sighash_;
  result.ignore_items = ignore_items;
  return result;
}

// @formatter:on
// clang-format on

}  // namespace api
}  // namespace cfd
