// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_elements_set_rawreissueasset_json.cpp
 *
 * @brief JSONマッピングファイル (自動生成)
 */
#include <set>
#include <string>
#include <vector>

#include "cfdapi_elements_set_rawreissueasset_json.h"  // NOLINT

namespace cfd {
namespace api {

using cfdcore::JsonClassBase;
using cfdcore::JsonObjectVector;
using cfdcore::JsonValueVector;
using cfdcore::JsonVector;
// clang-format off
// @formatter:off

// ------------------------------------------------------------------------
// ReissuanceDataRequest
// ------------------------------------------------------------------------
cfdcore::JsonTableMap<ReissuanceDataRequest>
  ReissuanceDataRequest::json_mapper;
std::vector<std::string> ReissuanceDataRequest::item_list;

void ReissuanceDataRequest::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfdcore::CLASS_FUNCTION_TABLE<ReissuanceDataRequest> func_table;  // NOLINT

  func_table = {
    ReissuanceDataRequest::GetTxinTxidString,
    ReissuanceDataRequest::SetTxinTxidString,
    ReissuanceDataRequest::GetTxinTxidFieldType,
  };
  json_mapper.emplace("txinTxid", func_table);
  item_list.push_back("txinTxid");
  func_table = {
    ReissuanceDataRequest::GetTxinVoutString,
    ReissuanceDataRequest::SetTxinVoutString,
    ReissuanceDataRequest::GetTxinVoutFieldType,
  };
  json_mapper.emplace("txinVout", func_table);
  item_list.push_back("txinVout");
  func_table = {
    ReissuanceDataRequest::GetAmountString,
    ReissuanceDataRequest::SetAmountString,
    ReissuanceDataRequest::GetAmountFieldType,
  };
  json_mapper.emplace("amount", func_table);
  item_list.push_back("amount");
  func_table = {
    ReissuanceDataRequest::GetAddressString,
    ReissuanceDataRequest::SetAddressString,
    ReissuanceDataRequest::GetAddressFieldType,
  };
  json_mapper.emplace("address", func_table);
  item_list.push_back("address");
  func_table = {
    ReissuanceDataRequest::GetAssetBlindingNonceString,
    ReissuanceDataRequest::SetAssetBlindingNonceString,
    ReissuanceDataRequest::GetAssetBlindingNonceFieldType,
  };
  json_mapper.emplace("assetBlindingNonce", func_table);
  item_list.push_back("assetBlindingNonce");
  func_table = {
    ReissuanceDataRequest::GetAssetEntropyString,
    ReissuanceDataRequest::SetAssetEntropyString,
    ReissuanceDataRequest::GetAssetEntropyFieldType,
  };
  json_mapper.emplace("assetEntropy", func_table);
  item_list.push_back("assetEntropy");
  func_table = {
    ReissuanceDataRequest::GetIsRemoveNonceString,
    ReissuanceDataRequest::SetIsRemoveNonceString,
    ReissuanceDataRequest::GetIsRemoveNonceFieldType,
  };
  json_mapper.emplace("isRemoveNonce", func_table);
  item_list.push_back("isRemoveNonce");
}

void ReissuanceDataRequest::ConvertFromStruct(
    const ReissuanceDataRequestStruct& data) {
  txin_txid_ = data.txin_txid;
  txin_vout_ = data.txin_vout;
  amount_ = data.amount;
  address_ = data.address;
  asset_blinding_nonce_ = data.asset_blinding_nonce;
  asset_entropy_ = data.asset_entropy;
  is_remove_nonce_ = data.is_remove_nonce;
  ignore_items = data.ignore_items;
}

ReissuanceDataRequestStruct ReissuanceDataRequest::ConvertToStruct() const {  // NOLINT
  ReissuanceDataRequestStruct result;
  result.txin_txid = txin_txid_;
  result.txin_vout = txin_vout_;
  result.amount = amount_;
  result.address = address_;
  result.asset_blinding_nonce = asset_blinding_nonce_;
  result.asset_entropy = asset_entropy_;
  result.is_remove_nonce = is_remove_nonce_;
  result.ignore_items = ignore_items;
  return result;
}

// ------------------------------------------------------------------------
// SetRawReissueAssetRequest
// ------------------------------------------------------------------------
cfdcore::JsonTableMap<SetRawReissueAssetRequest>
  SetRawReissueAssetRequest::json_mapper;
std::vector<std::string> SetRawReissueAssetRequest::item_list;

void SetRawReissueAssetRequest::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfdcore::CLASS_FUNCTION_TABLE<SetRawReissueAssetRequest> func_table;  // NOLINT

  func_table = {
    SetRawReissueAssetRequest::GetTxHexString,
    SetRawReissueAssetRequest::SetTxHexString,
    SetRawReissueAssetRequest::GetTxHexFieldType,
  };
  json_mapper.emplace("txHex", func_table);
  item_list.push_back("txHex");
  func_table = {
    SetRawReissueAssetRequest::GetIsRandomizeString,
    SetRawReissueAssetRequest::SetIsRandomizeString,
    SetRawReissueAssetRequest::GetIsRandomizeFieldType,
  };
  json_mapper.emplace("isRandomize", func_table);
  item_list.push_back("isRandomize");
  func_table = {
    SetRawReissueAssetRequest::GetIssuancesString,
    SetRawReissueAssetRequest::SetIssuancesString,
    SetRawReissueAssetRequest::GetIssuancesFieldType,
  };
  json_mapper.emplace("issuances", func_table);
  item_list.push_back("issuances");
}

void SetRawReissueAssetRequest::ConvertFromStruct(
    const SetRawReissueAssetRequestStruct& data) {
  tx_hex_ = data.tx_hex;
  is_randomize_ = data.is_randomize;
  issuances_.ConvertFromStruct(data.issuances);
  ignore_items = data.ignore_items;
}

SetRawReissueAssetRequestStruct SetRawReissueAssetRequest::ConvertToStruct() const {  // NOLINT
  SetRawReissueAssetRequestStruct result;
  result.tx_hex = tx_hex_;
  result.is_randomize = is_randomize_;
  result.issuances = issuances_.ConvertToStruct();
  result.ignore_items = ignore_items;
  return result;
}

// ------------------------------------------------------------------------
// ReissuanceDataResponse
// ------------------------------------------------------------------------
cfdcore::JsonTableMap<ReissuanceDataResponse>
  ReissuanceDataResponse::json_mapper;
std::vector<std::string> ReissuanceDataResponse::item_list;

void ReissuanceDataResponse::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfdcore::CLASS_FUNCTION_TABLE<ReissuanceDataResponse> func_table;  // NOLINT

  func_table = {
    ReissuanceDataResponse::GetTxinTxidString,
    ReissuanceDataResponse::SetTxinTxidString,
    ReissuanceDataResponse::GetTxinTxidFieldType,
  };
  json_mapper.emplace("txinTxid", func_table);
  item_list.push_back("txinTxid");
  func_table = {
    ReissuanceDataResponse::GetTxinVoutString,
    ReissuanceDataResponse::SetTxinVoutString,
    ReissuanceDataResponse::GetTxinVoutFieldType,
  };
  json_mapper.emplace("txinVout", func_table);
  item_list.push_back("txinVout");
  func_table = {
    ReissuanceDataResponse::GetAssetString,
    ReissuanceDataResponse::SetAssetString,
    ReissuanceDataResponse::GetAssetFieldType,
  };
  json_mapper.emplace("asset", func_table);
  item_list.push_back("asset");
  func_table = {
    ReissuanceDataResponse::GetEntropyString,
    ReissuanceDataResponse::SetEntropyString,
    ReissuanceDataResponse::GetEntropyFieldType,
  };
  json_mapper.emplace("entropy", func_table);
  item_list.push_back("entropy");
}

void ReissuanceDataResponse::ConvertFromStruct(
    const ReissuanceDataResponseStruct& data) {
  txin_txid_ = data.txin_txid;
  txin_vout_ = data.txin_vout;
  asset_ = data.asset;
  entropy_ = data.entropy;
  ignore_items = data.ignore_items;
}

ReissuanceDataResponseStruct ReissuanceDataResponse::ConvertToStruct() const {  // NOLINT
  ReissuanceDataResponseStruct result;
  result.txin_txid = txin_txid_;
  result.txin_vout = txin_vout_;
  result.asset = asset_;
  result.entropy = entropy_;
  result.ignore_items = ignore_items;
  return result;
}

// ------------------------------------------------------------------------
// SetRawReissueAssetResponse
// ------------------------------------------------------------------------
cfdcore::JsonTableMap<SetRawReissueAssetResponse>
  SetRawReissueAssetResponse::json_mapper;
std::vector<std::string> SetRawReissueAssetResponse::item_list;

void SetRawReissueAssetResponse::CollectFieldName() {
  if (!json_mapper.empty()) {
    return;
  }
  cfdcore::CLASS_FUNCTION_TABLE<SetRawReissueAssetResponse> func_table;  // NOLINT

  func_table = {
    SetRawReissueAssetResponse::GetHexString,
    SetRawReissueAssetResponse::SetHexString,
    SetRawReissueAssetResponse::GetHexFieldType,
  };
  json_mapper.emplace("hex", func_table);
  item_list.push_back("hex");
  func_table = {
    SetRawReissueAssetResponse::GetIssuancesString,
    SetRawReissueAssetResponse::SetIssuancesString,
    SetRawReissueAssetResponse::GetIssuancesFieldType,
  };
  json_mapper.emplace("issuances", func_table);
  item_list.push_back("issuances");
}

void SetRawReissueAssetResponse::ConvertFromStruct(
    const SetRawReissueAssetResponseStruct& data) {
  hex_ = data.hex;
  issuances_.ConvertFromStruct(data.issuances);
  ignore_items = data.ignore_items;
}

SetRawReissueAssetResponseStruct SetRawReissueAssetResponse::ConvertToStruct() const {  // NOLINT
  SetRawReissueAssetResponseStruct result;
  result.hex = hex_;
  result.issuances = issuances_.ConvertToStruct();
  result.ignore_items = ignore_items;
  return result;
}

// @formatter:on
// clang-format on

}  // namespace api
}  // namespace cfd
