// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_transaction_json.cpp
 *
 * @brief JSONマッピングファイル (自動生成)
 */
#include <set>
#include <string>
#include <vector>

#include "cfdapi_transaction_json.h"  // NOLINT

namespace cfd {
namespace api {

using cfdcore::JsonClassBase;
using cfdcore::JsonObjectVector;
using cfdcore::JsonValueVector;
using cfdcore::JsonVector;
// clang-format off
// @formatter:off

// ------------------------------------------------------------------------
// TxInRequest
// ------------------------------------------------------------------------
cfdcore::JsonTableMap<TxInRequest>
  TxInRequest::json_mapper;
std::vector<std::string> TxInRequest::item_list;

void TxInRequest::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfdcore::CLASS_FUNCTION_TABLE<TxInRequest> func_table;  // NOLINT

  func_table = {
    TxInRequest::GetTxidString,
    TxInRequest::SetTxidString,
    TxInRequest::GetTxidFieldType,
  };
  json_mapper.emplace("txid", func_table);
  item_list.push_back("txid");
  func_table = {
    TxInRequest::GetVoutString,
    TxInRequest::SetVoutString,
    TxInRequest::GetVoutFieldType,
  };
  json_mapper.emplace("vout", func_table);
  item_list.push_back("vout");
  func_table = {
    TxInRequest::GetDataString,
    TxInRequest::SetDataString,
    TxInRequest::GetDataFieldType,
  };
  json_mapper.emplace("data", func_table);
  item_list.push_back("data");
  func_table = {
    TxInRequest::GetAddrTypeString,
    TxInRequest::SetAddrTypeString,
    TxInRequest::GetAddrTypeFieldType,
  };
  json_mapper.emplace("addrType", func_table);
  item_list.push_back("addrType");
  func_table = {
    TxInRequest::GetSequenceString,
    TxInRequest::SetSequenceString,
    TxInRequest::GetSequenceFieldType,
  };
  json_mapper.emplace("sequence", func_table);
  item_list.push_back("sequence");
}

void TxInRequest::ConvertFromStruct(
    const TxInRequestStruct& data) {
  txid_ = data.txid;
  vout_ = data.vout;
  data_ = data.data;
  addr_type_ = data.addr_type;
  sequence_ = data.sequence;
  ignore_items = data.ignore_items;
}

TxInRequestStruct TxInRequest::ConvertToStruct() const {  // NOLINT
  TxInRequestStruct result;
  result.txid = txid_;
  result.vout = vout_;
  result.data = data_;
  result.addr_type = addr_type_;
  result.sequence = sequence_;
  result.ignore_items = ignore_items;
  return result;
}

// ------------------------------------------------------------------------
// TxOutRequest
// ------------------------------------------------------------------------
cfdcore::JsonTableMap<TxOutRequest>
  TxOutRequest::json_mapper;
std::vector<std::string> TxOutRequest::item_list;

void TxOutRequest::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfdcore::CLASS_FUNCTION_TABLE<TxOutRequest> func_table;  // NOLINT

  func_table = {
    TxOutRequest::GetAddressString,
    TxOutRequest::SetAddressString,
    TxOutRequest::GetAddressFieldType,
  };
  json_mapper.emplace("address", func_table);
  item_list.push_back("address");
  func_table = {
    TxOutRequest::GetAmountString,
    TxOutRequest::SetAmountString,
    TxOutRequest::GetAmountFieldType,
  };
  json_mapper.emplace("amount", func_table);
  item_list.push_back("amount");
}

void TxOutRequest::ConvertFromStruct(
    const TxOutRequestStruct& data) {
  address_ = data.address;
  amount_ = data.amount;
  ignore_items = data.ignore_items;
}

TxOutRequestStruct TxOutRequest::ConvertToStruct() const {  // NOLINT
  TxOutRequestStruct result;
  result.address = address_;
  result.amount = amount_;
  result.ignore_items = ignore_items;
  return result;
}

// ------------------------------------------------------------------------
// CreateRawTransactionRequest
// ------------------------------------------------------------------------
cfdcore::JsonTableMap<CreateRawTransactionRequest>
  CreateRawTransactionRequest::json_mapper;
std::vector<std::string> CreateRawTransactionRequest::item_list;

void CreateRawTransactionRequest::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfdcore::CLASS_FUNCTION_TABLE<CreateRawTransactionRequest> func_table;  // NOLINT

  func_table = {
    CreateRawTransactionRequest::GetVersionString,
    CreateRawTransactionRequest::SetVersionString,
    CreateRawTransactionRequest::GetVersionFieldType,
  };
  json_mapper.emplace("version", func_table);
  item_list.push_back("version");
  func_table = {
    CreateRawTransactionRequest::GetLocktimeString,
    CreateRawTransactionRequest::SetLocktimeString,
    CreateRawTransactionRequest::GetLocktimeFieldType,
  };
  json_mapper.emplace("locktime", func_table);
  item_list.push_back("locktime");
  func_table = {
    CreateRawTransactionRequest::GetTxinsString,
    CreateRawTransactionRequest::SetTxinsString,
    CreateRawTransactionRequest::GetTxinsFieldType,
  };
  json_mapper.emplace("txins", func_table);
  item_list.push_back("txins");
  func_table = {
    CreateRawTransactionRequest::GetTxoutsString,
    CreateRawTransactionRequest::SetTxoutsString,
    CreateRawTransactionRequest::GetTxoutsFieldType,
  };
  json_mapper.emplace("txouts", func_table);
  item_list.push_back("txouts");
}

void CreateRawTransactionRequest::ConvertFromStruct(
    const CreateRawTransactionRequestStruct& data) {
  version_ = data.version;
  locktime_ = data.locktime;
  txins_.ConvertFromStruct(data.txins);
  txouts_.ConvertFromStruct(data.txouts);
  ignore_items = data.ignore_items;
}

CreateRawTransactionRequestStruct CreateRawTransactionRequest::ConvertToStruct() const {  // NOLINT
  CreateRawTransactionRequestStruct result;
  result.version = version_;
  result.locktime = locktime_;
  result.txins = txins_.ConvertToStruct();
  result.txouts = txouts_.ConvertToStruct();
  result.ignore_items = ignore_items;
  return result;
}

// ------------------------------------------------------------------------
// CreateRawTransactionResponse
// ------------------------------------------------------------------------
cfdcore::JsonTableMap<CreateRawTransactionResponse>
  CreateRawTransactionResponse::json_mapper;
std::vector<std::string> CreateRawTransactionResponse::item_list;

void CreateRawTransactionResponse::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfdcore::CLASS_FUNCTION_TABLE<CreateRawTransactionResponse> func_table;  // NOLINT

  func_table = {
    CreateRawTransactionResponse::GetHexString,
    CreateRawTransactionResponse::SetHexString,
    CreateRawTransactionResponse::GetHexFieldType,
  };
  json_mapper.emplace("hex", func_table);
  item_list.push_back("hex");
}

void CreateRawTransactionResponse::ConvertFromStruct(
    const CreateRawTransactionResponseStruct& data) {
  hex_ = data.hex;
  ignore_items = data.ignore_items;
}

CreateRawTransactionResponseStruct CreateRawTransactionResponse::ConvertToStruct() const {  // NOLINT
  CreateRawTransactionResponseStruct result;
  result.hex = hex_;
  result.ignore_items = ignore_items;
  return result;
}

// @formatter:on
// clang-format on

}  // namespace api
}  // namespace cfd
