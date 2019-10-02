// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_blind_raw_transaction_json.cpp
 *
 * @brief JSONマッピングファイル (自動生成)
 */
#include <set>
#include <string>
#include <vector>

#include "cfdapi_blind_raw_transaction_json.h"  // NOLINT

namespace cfd {
namespace api {

using cfdcore::JsonClassBase;
using cfdcore::JsonObjectVector;
using cfdcore::JsonValueVector;
using cfdcore::JsonVector;
// clang-format off
// @formatter:off

// ------------------------------------------------------------------------
// BlindTxInRequest
// ------------------------------------------------------------------------
cfdcore::JsonTableMap<BlindTxInRequest>
  BlindTxInRequest::json_mapper;
std::vector<std::string> BlindTxInRequest::item_list;

void BlindTxInRequest::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfdcore::CLASS_FUNCTION_TABLE<BlindTxInRequest> func_table;  // NOLINT

  func_table = {
    BlindTxInRequest::GetTxidString,
    BlindTxInRequest::SetTxidString,
    BlindTxInRequest::GetTxidFieldType,
  };
  json_mapper.emplace("txid", func_table);
  item_list.push_back("txid");
  func_table = {
    BlindTxInRequest::GetVoutString,
    BlindTxInRequest::SetVoutString,
    BlindTxInRequest::GetVoutFieldType,
  };
  json_mapper.emplace("vout", func_table);
  item_list.push_back("vout");
  func_table = {
    BlindTxInRequest::GetAssetString,
    BlindTxInRequest::SetAssetString,
    BlindTxInRequest::GetAssetFieldType,
  };
  json_mapper.emplace("asset", func_table);
  item_list.push_back("asset");
  func_table = {
    BlindTxInRequest::GetBlindFactorString,
    BlindTxInRequest::SetBlindFactorString,
    BlindTxInRequest::GetBlindFactorFieldType,
  };
  json_mapper.emplace("blindFactor", func_table);
  item_list.push_back("blindFactor");
  func_table = {
    BlindTxInRequest::GetAssetBlindFactorString,
    BlindTxInRequest::SetAssetBlindFactorString,
    BlindTxInRequest::GetAssetBlindFactorFieldType,
  };
  json_mapper.emplace("assetBlindFactor", func_table);
  item_list.push_back("assetBlindFactor");
  func_table = {
    BlindTxInRequest::GetAmountString,
    BlindTxInRequest::SetAmountString,
    BlindTxInRequest::GetAmountFieldType,
  };
  json_mapper.emplace("amount", func_table);
  item_list.push_back("amount");
}

void BlindTxInRequest::ConvertFromStruct(
    const BlindTxInRequestStruct& data) {
  txid_ = data.txid;
  vout_ = data.vout;
  asset_ = data.asset;
  blind_factor_ = data.blind_factor;
  asset_blind_factor_ = data.asset_blind_factor;
  amount_ = data.amount;
  ignore_items = data.ignore_items;
}

BlindTxInRequestStruct BlindTxInRequest::ConvertToStruct() const {  // NOLINT
  BlindTxInRequestStruct result;
  result.txid = txid_;
  result.vout = vout_;
  result.asset = asset_;
  result.blind_factor = blind_factor_;
  result.asset_blind_factor = asset_blind_factor_;
  result.amount = amount_;
  result.ignore_items = ignore_items;
  return result;
}

// ------------------------------------------------------------------------
// BlindIssuanceRequest
// ------------------------------------------------------------------------
cfdcore::JsonTableMap<BlindIssuanceRequest>
  BlindIssuanceRequest::json_mapper;
std::vector<std::string> BlindIssuanceRequest::item_list;

void BlindIssuanceRequest::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfdcore::CLASS_FUNCTION_TABLE<BlindIssuanceRequest> func_table;  // NOLINT

  func_table = {
    BlindIssuanceRequest::GetTxidString,
    BlindIssuanceRequest::SetTxidString,
    BlindIssuanceRequest::GetTxidFieldType,
  };
  json_mapper.emplace("txid", func_table);
  item_list.push_back("txid");
  func_table = {
    BlindIssuanceRequest::GetVoutString,
    BlindIssuanceRequest::SetVoutString,
    BlindIssuanceRequest::GetVoutFieldType,
  };
  json_mapper.emplace("vout", func_table);
  item_list.push_back("vout");
  func_table = {
    BlindIssuanceRequest::GetAssetBlindingKeyString,
    BlindIssuanceRequest::SetAssetBlindingKeyString,
    BlindIssuanceRequest::GetAssetBlindingKeyFieldType,
  };
  json_mapper.emplace("assetBlindingKey", func_table);
  item_list.push_back("assetBlindingKey");
  func_table = {
    BlindIssuanceRequest::GetTokenBlindingKeyString,
    BlindIssuanceRequest::SetTokenBlindingKeyString,
    BlindIssuanceRequest::GetTokenBlindingKeyFieldType,
  };
  json_mapper.emplace("tokenBlindingKey", func_table);
  item_list.push_back("tokenBlindingKey");
}

void BlindIssuanceRequest::ConvertFromStruct(
    const BlindIssuanceRequestStruct& data) {
  txid_ = data.txid;
  vout_ = data.vout;
  asset_blinding_key_ = data.asset_blinding_key;
  token_blinding_key_ = data.token_blinding_key;
  ignore_items = data.ignore_items;
}

BlindIssuanceRequestStruct BlindIssuanceRequest::ConvertToStruct() const {  // NOLINT
  BlindIssuanceRequestStruct result;
  result.txid = txid_;
  result.vout = vout_;
  result.asset_blinding_key = asset_blinding_key_;
  result.token_blinding_key = token_blinding_key_;
  result.ignore_items = ignore_items;
  return result;
}

// ------------------------------------------------------------------------
// BlindRawTransactionRequest
// ------------------------------------------------------------------------
cfdcore::JsonTableMap<BlindRawTransactionRequest>
  BlindRawTransactionRequest::json_mapper;
std::vector<std::string> BlindRawTransactionRequest::item_list;

void BlindRawTransactionRequest::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfdcore::CLASS_FUNCTION_TABLE<BlindRawTransactionRequest> func_table;  // NOLINT

  func_table = {
    BlindRawTransactionRequest::GetTxString,
    BlindRawTransactionRequest::SetTxString,
    BlindRawTransactionRequest::GetTxFieldType,
  };
  json_mapper.emplace("tx", func_table);
  item_list.push_back("tx");
  func_table = {
    BlindRawTransactionRequest::GetTxinsString,
    BlindRawTransactionRequest::SetTxinsString,
    BlindRawTransactionRequest::GetTxinsFieldType,
  };
  json_mapper.emplace("txins", func_table);
  item_list.push_back("txins");
  func_table = {
    BlindRawTransactionRequest::GetBlindPubkeysString,
    BlindRawTransactionRequest::SetBlindPubkeysString,
    BlindRawTransactionRequest::GetBlindPubkeysFieldType,
  };
  json_mapper.emplace("blindPubkeys", func_table);
  item_list.push_back("blindPubkeys");
  func_table = {
    BlindRawTransactionRequest::GetIssuancesString,
    BlindRawTransactionRequest::SetIssuancesString,
    BlindRawTransactionRequest::GetIssuancesFieldType,
  };
  json_mapper.emplace("issuances", func_table);
  item_list.push_back("issuances");
}

void BlindRawTransactionRequest::ConvertFromStruct(
    const BlindRawTransactionRequestStruct& data) {
  tx_ = data.tx;
  txins_.ConvertFromStruct(data.txins);
  blind_pubkeys_.ConvertFromStruct(data.blind_pubkeys);
  issuances_.ConvertFromStruct(data.issuances);
  ignore_items = data.ignore_items;
}

BlindRawTransactionRequestStruct BlindRawTransactionRequest::ConvertToStruct() const {  // NOLINT
  BlindRawTransactionRequestStruct result;
  result.tx = tx_;
  result.txins = txins_.ConvertToStruct();
  result.blind_pubkeys = blind_pubkeys_.ConvertToStruct();
  result.issuances = issuances_.ConvertToStruct();
  result.ignore_items = ignore_items;
  return result;
}

// ------------------------------------------------------------------------
// BlindRawTransactionResponse
// ------------------------------------------------------------------------
cfdcore::JsonTableMap<BlindRawTransactionResponse>
  BlindRawTransactionResponse::json_mapper;
std::vector<std::string> BlindRawTransactionResponse::item_list;

void BlindRawTransactionResponse::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfdcore::CLASS_FUNCTION_TABLE<BlindRawTransactionResponse> func_table;  // NOLINT

  func_table = {
    BlindRawTransactionResponse::GetHexString,
    BlindRawTransactionResponse::SetHexString,
    BlindRawTransactionResponse::GetHexFieldType,
  };
  json_mapper.emplace("hex", func_table);
  item_list.push_back("hex");
}

void BlindRawTransactionResponse::ConvertFromStruct(
    const BlindRawTransactionResponseStruct& data) {
  hex_ = data.hex;
  ignore_items = data.ignore_items;
}

BlindRawTransactionResponseStruct BlindRawTransactionResponse::ConvertToStruct() const {  // NOLINT
  BlindRawTransactionResponseStruct result;
  result.hex = hex_;
  result.ignore_items = ignore_items;
  return result;
}

// @formatter:on
// clang-format on

}  // namespace api
}  // namespace cfd
