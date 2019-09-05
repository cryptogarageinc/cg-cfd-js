// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_elements_unblind_raw_transaction_json.cpp
 *
 * @brief JSONマッピングファイル (自動生成)
 */
#include <set>
#include <string>
#include <vector>

#include "cfdapi_elements_unblind_raw_transaction_json.h"  // NOLINT

namespace cfd {
namespace api {

using cfdcore::JsonClassBase;
using cfdcore::JsonObjectVector;
using cfdcore::JsonValueVector;
using cfdcore::JsonVector;
// clang-format off
// @formatter:off

// ------------------------------------------------------------------------
// UnblindRawTransactionRequest
// ------------------------------------------------------------------------
cfdcore::JsonTableMap<UnblindRawTransactionRequest>
  UnblindRawTransactionRequest::json_mapper;
std::vector<std::string> UnblindRawTransactionRequest::item_list;

void UnblindRawTransactionRequest::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfdcore::CLASS_FUNCTION_TABLE<UnblindRawTransactionRequest> func_table;  // NOLINT

  func_table = {
    UnblindRawTransactionRequest::GetTxHexString,
    UnblindRawTransactionRequest::SetTxHexString,
    UnblindRawTransactionRequest::GetTxHexFieldType,
  };
  json_mapper.emplace("txHex", func_table);
  item_list.push_back("txHex");
  func_table = {
    UnblindRawTransactionRequest::GetTargetOutputIndexString,
    UnblindRawTransactionRequest::SetTargetOutputIndexString,
    UnblindRawTransactionRequest::GetTargetOutputIndexFieldType,
  };
  json_mapper.emplace("targetOutputIndex", func_table);
  item_list.push_back("targetOutputIndex");
  func_table = {
    UnblindRawTransactionRequest::GetBlindingKeysString,
    UnblindRawTransactionRequest::SetBlindingKeysString,
    UnblindRawTransactionRequest::GetBlindingKeysFieldType,
  };
  json_mapper.emplace("blindingKeys", func_table);
  item_list.push_back("blindingKeys");
}

void UnblindRawTransactionRequest::ConvertFromStruct(
    const UnblindRawTransactionRequestStruct& data) {
  tx_hex_ = data.tx_hex;
  target_output_index_ = data.target_output_index;
  blinding_keys_.ConvertFromStruct(data.blinding_keys);
  ignore_items = data.ignore_items;
}

UnblindRawTransactionRequestStruct UnblindRawTransactionRequest::ConvertToStruct() const {  // NOLINT
  UnblindRawTransactionRequestStruct result;
  result.tx_hex = tx_hex_;
  result.target_output_index = target_output_index_;
  result.blinding_keys = blinding_keys_.ConvertToStruct();
  result.ignore_items = ignore_items;
  return result;
}

// ------------------------------------------------------------------------
// UnblindOutput
// ------------------------------------------------------------------------
cfdcore::JsonTableMap<UnblindOutput>
  UnblindOutput::json_mapper;
std::vector<std::string> UnblindOutput::item_list;

void UnblindOutput::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfdcore::CLASS_FUNCTION_TABLE<UnblindOutput> func_table;  // NOLINT

  func_table = {
    UnblindOutput::GetAssetString,
    UnblindOutput::SetAssetString,
    UnblindOutput::GetAssetFieldType,
  };
  json_mapper.emplace("asset", func_table);
  item_list.push_back("asset");
  func_table = {
    UnblindOutput::GetBlindFactorString,
    UnblindOutput::SetBlindFactorString,
    UnblindOutput::GetBlindFactorFieldType,
  };
  json_mapper.emplace("blindFactor", func_table);
  item_list.push_back("blindFactor");
  func_table = {
    UnblindOutput::GetAssetBlindFactorString,
    UnblindOutput::SetAssetBlindFactorString,
    UnblindOutput::GetAssetBlindFactorFieldType,
  };
  json_mapper.emplace("assetBlindFactor", func_table);
  item_list.push_back("assetBlindFactor");
  func_table = {
    UnblindOutput::GetAmountString,
    UnblindOutput::SetAmountString,
    UnblindOutput::GetAmountFieldType,
  };
  json_mapper.emplace("amount", func_table);
  item_list.push_back("amount");
}

void UnblindOutput::ConvertFromStruct(
    const UnblindOutputStruct& data) {
  asset_ = data.asset;
  blind_factor_ = data.blind_factor;
  asset_blind_factor_ = data.asset_blind_factor;
  amount_ = data.amount;
  ignore_items = data.ignore_items;
}

UnblindOutputStruct UnblindOutput::ConvertToStruct() const {  // NOLINT
  UnblindOutputStruct result;
  result.asset = asset_;
  result.blind_factor = blind_factor_;
  result.asset_blind_factor = asset_blind_factor_;
  result.amount = amount_;
  result.ignore_items = ignore_items;
  return result;
}

// ------------------------------------------------------------------------
// UnblindRawTransactionResponse
// ------------------------------------------------------------------------
cfdcore::JsonTableMap<UnblindRawTransactionResponse>
  UnblindRawTransactionResponse::json_mapper;
std::vector<std::string> UnblindRawTransactionResponse::item_list;

void UnblindRawTransactionResponse::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfdcore::CLASS_FUNCTION_TABLE<UnblindRawTransactionResponse> func_table;  // NOLINT

  func_table = {
    UnblindRawTransactionResponse::GetHexString,
    UnblindRawTransactionResponse::SetHexString,
    UnblindRawTransactionResponse::GetHexFieldType,
  };
  json_mapper.emplace("hex", func_table);
  item_list.push_back("hex");
  func_table = {
    UnblindRawTransactionResponse::GetOutputsString,
    UnblindRawTransactionResponse::SetOutputsString,
    UnblindRawTransactionResponse::GetOutputsFieldType,
  };
  json_mapper.emplace("outputs", func_table);
  item_list.push_back("outputs");
}

void UnblindRawTransactionResponse::ConvertFromStruct(
    const UnblindRawTransactionResponseStruct& data) {
  hex_ = data.hex;
  outputs_.ConvertFromStruct(data.outputs);
  ignore_items = data.ignore_items;
}

UnblindRawTransactionResponseStruct UnblindRawTransactionResponse::ConvertToStruct() const {  // NOLINT
  UnblindRawTransactionResponseStruct result;
  result.hex = hex_;
  result.outputs = outputs_.ConvertToStruct();
  result.ignore_items = ignore_items;
  return result;
}

// @formatter:on
// clang-format on

}  // namespace api
}  // namespace cfd
