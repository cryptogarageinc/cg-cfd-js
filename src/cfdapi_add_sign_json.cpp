// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_add_sign_json.cpp
 *
 * @brief JSONマッピングファイル (自動生成)
 */
#include <set>
#include <string>
#include <vector>

#include "cfdapi_add_sign_json.h"  // NOLINT

namespace cfd {
namespace api {

using cfdcore::JsonClassBase;
using cfdcore::JsonObjectVector;
using cfdcore::JsonValueVector;
using cfdcore::JsonVector;
// clang-format off
// @formatter:off

// ------------------------------------------------------------------------
// SignData
// ------------------------------------------------------------------------
cfdcore::JsonTableMap<SignData>
  SignData::json_mapper;
std::vector<std::string> SignData::item_list;

void SignData::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfdcore::CLASS_FUNCTION_TABLE<SignData> func_table;  // NOLINT

  func_table = {
    SignData::GetHexString,
    SignData::SetHexString,
    SignData::GetHexFieldType,
  };
  json_mapper.emplace("hex", func_table);
  item_list.push_back("hex");
  func_table = {
    SignData::GetTypeString,
    SignData::SetTypeString,
    SignData::GetTypeFieldType,
  };
  json_mapper.emplace("type", func_table);
  item_list.push_back("type");
  func_table = {
    SignData::GetDerEncodeString,
    SignData::SetDerEncodeString,
    SignData::GetDerEncodeFieldType,
  };
  json_mapper.emplace("derEncode", func_table);
  item_list.push_back("derEncode");
  func_table = {
    SignData::GetSighashTypeString,
    SignData::SetSighashTypeString,
    SignData::GetSighashTypeFieldType,
  };
  json_mapper.emplace("sighashType", func_table);
  item_list.push_back("sighashType");
  func_table = {
    SignData::GetSighashAnyoneCanPayString,
    SignData::SetSighashAnyoneCanPayString,
    SignData::GetSighashAnyoneCanPayFieldType,
  };
  json_mapper.emplace("sighashAnyoneCanPay", func_table);
  item_list.push_back("sighashAnyoneCanPay");
}

void SignData::ConvertFromStruct(
    const SignDataStruct& data) {
  hex_ = data.hex;
  type_ = data.type;
  der_encode_ = data.der_encode;
  sighash_type_ = data.sighash_type;
  sighash_anyone_can_pay_ = data.sighash_anyone_can_pay;
  ignore_items = data.ignore_items;
}

SignDataStruct SignData::ConvertToStruct() const {  // NOLINT
  SignDataStruct result;
  result.hex = hex_;
  result.type = type_;
  result.der_encode = der_encode_;
  result.sighash_type = sighash_type_;
  result.sighash_anyone_can_pay = sighash_anyone_can_pay_;
  result.ignore_items = ignore_items;
  return result;
}

// ------------------------------------------------------------------------
// AddSignRequest
// ------------------------------------------------------------------------
cfdcore::JsonTableMap<AddSignRequest>
  AddSignRequest::json_mapper;
std::vector<std::string> AddSignRequest::item_list;

void AddSignRequest::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfdcore::CLASS_FUNCTION_TABLE<AddSignRequest> func_table;  // NOLINT

  func_table = {
    AddSignRequest::GetTxHexString,
    AddSignRequest::SetTxHexString,
    AddSignRequest::GetTxHexFieldType,
  };
  json_mapper.emplace("txHex", func_table);
  item_list.push_back("txHex");
  func_table = {
    AddSignRequest::GetIsElementsString,
    AddSignRequest::SetIsElementsString,
    AddSignRequest::GetIsElementsFieldType,
  };
  json_mapper.emplace("isElements", func_table);
  item_list.push_back("isElements");
  func_table = {
    AddSignRequest::GetTxinTxidString,
    AddSignRequest::SetTxinTxidString,
    AddSignRequest::GetTxinTxidFieldType,
  };
  json_mapper.emplace("txinTxid", func_table);
  item_list.push_back("txinTxid");
  func_table = {
    AddSignRequest::GetTxinVoutString,
    AddSignRequest::SetTxinVoutString,
    AddSignRequest::GetTxinVoutFieldType,
  };
  json_mapper.emplace("txinVout", func_table);
  item_list.push_back("txinVout");
  func_table = {
    AddSignRequest::GetIsWitnessString,
    AddSignRequest::SetIsWitnessString,
    AddSignRequest::GetIsWitnessFieldType,
  };
  json_mapper.emplace("isWitness", func_table);
  item_list.push_back("isWitness");
  func_table = {
    AddSignRequest::GetSignParamString,
    AddSignRequest::SetSignParamString,
    AddSignRequest::GetSignParamFieldType,
  };
  json_mapper.emplace("signParam", func_table);
  item_list.push_back("signParam");
  func_table = {
    AddSignRequest::GetClearStackString,
    AddSignRequest::SetClearStackString,
    AddSignRequest::GetClearStackFieldType,
  };
  json_mapper.emplace("clearStack", func_table);
  item_list.push_back("clearStack");
}

void AddSignRequest::ConvertFromStruct(
    const AddSignRequestStruct& data) {
  tx_hex_ = data.tx_hex;
  is_elements_ = data.is_elements;
  txin_txid_ = data.txin_txid;
  txin_vout_ = data.txin_vout;
  is_witness_ = data.is_witness;
  sign_param_.ConvertFromStruct(data.sign_param);
  clear_stack_ = data.clear_stack;
  ignore_items = data.ignore_items;
}

AddSignRequestStruct AddSignRequest::ConvertToStruct() const {  // NOLINT
  AddSignRequestStruct result;
  result.tx_hex = tx_hex_;
  result.is_elements = is_elements_;
  result.txin_txid = txin_txid_;
  result.txin_vout = txin_vout_;
  result.is_witness = is_witness_;
  result.sign_param = sign_param_.ConvertToStruct();
  result.clear_stack = clear_stack_;
  result.ignore_items = ignore_items;
  return result;
}

// ------------------------------------------------------------------------
// AddSignResponse
// ------------------------------------------------------------------------
cfdcore::JsonTableMap<AddSignResponse>
  AddSignResponse::json_mapper;
std::vector<std::string> AddSignResponse::item_list;

void AddSignResponse::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfdcore::CLASS_FUNCTION_TABLE<AddSignResponse> func_table;  // NOLINT

  func_table = {
    AddSignResponse::GetHexString,
    AddSignResponse::SetHexString,
    AddSignResponse::GetHexFieldType,
  };
  json_mapper.emplace("hex", func_table);
  item_list.push_back("hex");
}

void AddSignResponse::ConvertFromStruct(
    const AddSignResponseStruct& data) {
  hex_ = data.hex;
  ignore_items = data.ignore_items;
}

AddSignResponseStruct AddSignResponse::ConvertToStruct() const {  // NOLINT
  AddSignResponseStruct result;
  result.hex = hex_;
  result.ignore_items = ignore_items;
  return result;
}

// @formatter:on
// clang-format on

}  // namespace api
}  // namespace cfd
