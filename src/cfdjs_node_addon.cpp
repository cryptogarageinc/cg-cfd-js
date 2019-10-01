// Copyright 2019 CryptoGarage
/**
 * @file cfdjs_node_addon.cpp
 *
 * @brief cfdのnode.js向けAPI実装ファイル
 */
#include <napi.h>  // NOLINT
#include <string>

#include "cfd/cfd_common.h"
#include "cfd/cfdapi_address.h"
#include "cfd/cfdapi_elements_address.h"
#include "cfd/cfdapi_elements_transaction.h"
#include "cfd/cfdapi_key.h"
#include "cfd/cfdapi_sighash.h"
#include "cfd/cfdapi_transaction.h"
#include "cfd/cfdapi_utility.h"
#include "cfd/dlcapi_address.h"
#include "cfd/dlcapi_transaction.h"

#include "cfdapi_add_multisig_sign_json.h"                  // NOLINT
#include "cfdapi_add_sign_json.h"                           // NOLINT
#include "cfdapi_blind_raw_transaction_json.h"              // NOLINT
#include "cfdapi_create_address_json.h"                     // NOLINT
#include "cfdapi_create_key_pair_json.h"                    // NOLINT
#include "cfdapi_decode_transaction_json.h"                 // NOLINT
#include "cfdapi_elements_create_pegin_address_json.h"      // NOLINT
#include "cfdapi_elements_create_raw_pegin_json.h"          // NOLINT
#include "cfdapi_elements_create_raw_pegout_json.h"         // NOLINT
#include "cfdapi_elements_create_raw_transaction_json.h"    // NOLINT
#include "cfdapi_elements_decode_raw_transaction_json.h"    // NOLINT
#include "cfdapi_elements_get_confidential_address_json.h"  // NOLINT
#include "cfdapi_elements_get_unblinded_address_json.h"     // NOLINT
#include "cfdapi_elements_set_rawissueasset_json.h"         // NOLINT
#include "cfdapi_elements_set_rawreissueasset_json.h"       // NOLINT
#include "cfdapi_elements_unblind_raw_transaction_json.h"   // NOLINT
#include "cfdapi_error_base_json.h"                         // NOLINT
#include "cfdapi_error_json.h"                              // NOLINT
#include "cfdapi_get_issuance_blinding_key_json.h"          // NOLINT
#include "cfdapi_get_witness_num_json.h"                    // NOLINT
#include "cfdapi_multisig_address_json.h"                   // NOLINT
#include "cfdapi_sighash_elements_json.h"                   // NOLINT
#include "cfdapi_sighash_json.h"                            // NOLINT
#include "cfdapi_supported_function_json.h"                 // NOLINT
#include "cfdapi_transaction_json.h"                        // NOLINT
#include "cfdapi_update_witness_json.h"                     // NOLINT
#include "dlcapi_add_cetx_sign_json.h"                      // NOLINT
#include "dlcapi_address_json.h"                            // NOLINT

// using
using cfd::api::AddressApi;
using cfd::api::KeyApi;
using cfd::api::SigHashApi;
using cfd::api::TransactionApi;
using cfd::api::UtilApi;
using dlc::api::DlcAddressApi;
using dlc::api::DlcTransactionApi;
#ifndef CFD_DISABLE_ELEMENTS
using cfd::api::ElementsAddressApi;
using cfd::api::ElementsTransactionApi;
#endif  // CFD_DISABLE_ELEMENTS
using cfd::api::ErrorResponse;
using cfd::api::InnerErrorResponse;
using cfdcore::CfdError;
using cfdcore::CfdException;
using Napi::CallbackInfo;
using Napi::Env;
using Napi::Function;
using Napi::Number;
using Napi::Object;
using Napi::String;
using Napi::TypeError;
using Napi::Value;

// -----------------------------------------------------------------------------
// API wrapper for node addon
// -----------------------------------------------------------------------------

namespace cfd {
namespace api {

/**
 * @brief NodeAddonのJSON APIテンプレート関数(request, response).
 * @param[in] information     node addon apiのコールバック情報
 * @param[in] call_function   cfdの呼び出し関数
 * @return 戻り値(JSON文字列)
 */
template <
    typename RequestType, typename ResponseType, typename RequestStructType,
    typename ResponseStructType>
Value NodeAddonJsonApi(
    const CallbackInfo &information,
    std::function<ResponseStructType(const RequestStructType &)>
        call_function) {
  Env env = information.Env();
  if (information.Length() < 1) {
    TypeError::New(env, "Invalid arguments.").ThrowAsJavaScriptException();
    return env.Null();
  }
  if (!information[0].IsString()) {
    TypeError::New(env, "Wrong arguments.").ThrowAsJavaScriptException();
    return env.Null();
  }

  try {
    // リクエストjson_strから、モデルへ変換
    RequestType req;
    try {
      req.Deserialize(information[0].As<String>().Utf8Value());
    } catch (const CfdException &cfd_except) {
      ErrorResponse res = ErrorResponse::ConvertFromCfdException(cfd_except);
      return String::New(env, res.Serialize().c_str());
    } catch (...) {
      CfdException ex(
          CfdError::kCfdOutOfRangeError,
          "JSON value convert error. Value out of range.");
      ErrorResponse res = ErrorResponse::ConvertFromCfdException(ex);
      return String::New(env, res.Serialize().c_str());
    }
    RequestStructType request = req.ConvertToStruct();
    ResponseStructType response = call_function(request);
    std::string json_message;
    if (response.error.code == 0) {
      ResponseType res;
      res.ConvertFromStruct(response);
      json_message = res.Serialize();
    } else {
      json_message =
          ErrorResponse::ConvertFromStruct(response.error).Serialize();
    }

    // utf-8
    return String::New(env, json_message.c_str());
  } catch (const std::exception &except) {
    // illegal route
    std::string errmsg = "exception=" + std::string(except.what());
    TypeError::New(env, errmsg).ThrowAsJavaScriptException();
    return env.Null();
  } catch (...) {
    // illegal route
    TypeError::New(env, "Illegal exception.").ThrowAsJavaScriptException();
    return env.Null();
  }
}

/**
 * @brief NodeAddonのJSON APIテンプレート関数(request, response).
 * @param[in] information     node addon apiのコールバック情報
 * @param[in] call_function   cfdの呼び出し関数
 * @return 戻り値(JSON文字列)
 */
template <
    typename RequestType, typename ResponseType, typename RequestStructType,
    typename ResponseStructType>
Value NodeAddonElementsCheckApi(
    const CallbackInfo &information,
    std::function<ResponseStructType(const RequestStructType &)>
        bitcoin_function,  // NOLINT
    std::function<ResponseStructType(const RequestStructType &)>
        elements_function) {  // NOLINT
  Env env = information.Env();
  if (information.Length() < 1) {
    TypeError::New(env, "Invalid arguments.").ThrowAsJavaScriptException();
    return env.Null();
  }
  if (!information[0].IsString()) {
    TypeError::New(env, "Wrong arguments.").ThrowAsJavaScriptException();
    return env.Null();
  }

  try {
    // リクエストjson_strから、モデルへ変換
    RequestType req;
    try {
      req.Deserialize(information[0].As<String>().Utf8Value());
    } catch (const CfdException &cfd_except) {
      ErrorResponse res = ErrorResponse::ConvertFromCfdException(cfd_except);
      return String::New(env, res.Serialize().c_str());
    } catch (...) {
      CfdException ex(
          CfdError::kCfdOutOfRangeError,
          "JSON value convert error. Value out of range.");
      ErrorResponse res = ErrorResponse::ConvertFromCfdException(ex);
      return String::New(env, res.Serialize().c_str());
    }
    RequestStructType request = req.ConvertToStruct();
    ResponseStructType response;
    if (request.is_elements) {
#ifndef CFD_DISABLE_ELEMENTS
      response = elements_function(request);
#else
      CfdException ex(
          CfdError::kCfdIllegalArgumentError, "functionType not supported.");
      ErrorResponse res = ErrorResponse::ConvertFromCfdException(ex);
      return String::New(env, res.Serialize().c_str());
#endif  // CFD_DISABLE_ELEMENTS
    } else {
#ifndef CFD_DISABLE_BITCOIN
      response = bitcoin_function(request);
#else
      CfdException ex(
          CfdError::kCfdIllegalArgumentError, "functionType not supported.");
      ErrorResponse res = ErrorResponse::ConvertFromCfdException(ex);
      return String::New(env, res.Serialize().c_str());
#endif  // CFD_DISABLE_BITCOIN
    }
    std::string json_message;
    if (response.error.code == 0) {
      ResponseType res;
      res.ConvertFromStruct(response);
      json_message = res.Serialize();
    } else {
      json_message =
          ErrorResponse::ConvertFromStruct(response.error).Serialize();
    }

    // utf-8
    return String::New(env, json_message.c_str());
  } catch (const std::exception &except) {
    // illegal route
    std::string errmsg = "exception=" + std::string(except.what());
    TypeError::New(env, errmsg).ThrowAsJavaScriptException();
    return env.Null();
  } catch (...) {
    // illegal route
    TypeError::New(env, "Illegal exception.").ThrowAsJavaScriptException();
    return env.Null();
  }
}

/**
 * @brief NodeAddonのJSON APIテンプレート関数(response only).
 * @param[in] information     node addon apiのコールバック情報
 * @param[in] call_function   cfdの呼び出し関数
 * @return 戻り値(JSON文字列)
 */
template <typename ResponseType, typename ResponseStructType>
Value NodeAddonJsonResponseApi(
    const CallbackInfo &information,
    std::function<ResponseStructType()> call_function) {
  Env env = information.Env();
  try {
    ResponseStructType response = call_function();
    std::string json_message;
    if (response.error.code == 0) {
      ResponseType res;
      res.ConvertFromStruct(response);
      json_message = res.Serialize();
    } else {
      json_message =
          ErrorResponse::ConvertFromStruct(response.error).Serialize();
    }

    // utf-8
    return String::New(env, json_message.c_str());
  } catch (const std::exception &except) {
    // illegal route
    std::string errmsg = "exception=" + std::string(except.what());
    TypeError::New(env, errmsg).ThrowAsJavaScriptException();
    return env.Null();
  } catch (...) {
    // illegal route
    TypeError::New(env, "Illegal exception.").ThrowAsJavaScriptException();
    return env.Null();
  }
}

}  // namespace api
}  // namespace cfd

namespace cfd {
namespace api {

Value GetSupportedFunction(const CallbackInfo &information) {
  return NodeAddonJsonResponseApi<
      GetSupportedFunctionResponse, GetSupportedFunctionResponseStruct>(
      information, UtilApi::GetSupportedFunction);
}

Value CreateRawTransaction(const CallbackInfo &information) {
  return NodeAddonJsonApi<
      CreateRawTransactionRequest, CreateRawTransactionResponse,
      CreateRawTransactionRequestStruct, CreateRawTransactionResponseStruct>(
      information, TransactionApi::CreateRawTransaction);
}

Value DecodeRawTransaction(const CallbackInfo &information) {
  return NodeAddonJsonApi<
      DecodeRawTransactionRequest, DecodeRawTransactionResponse,
      DecodeRawTransactionRequestStruct, DecodeRawTransactionResponseStruct>(
      information, TransactionApi::DecodeRawTransaction);
}

Value CreateAddress(const CallbackInfo &information) {
  return NodeAddonElementsCheckApi<
      CreateAddressRequest, CreateAddressResponse, CreateAddressRequestStruct,
      CreateAddressResponseStruct>(
      information, AddressApi::CreateAddress,
      ElementsAddressApi::CreateAddress);
}

Value CreateMultisig(const CallbackInfo &information) {
  return NodeAddonElementsCheckApi<
      CreateMultisigRequest, CreateMultisigResponse,
      CreateMultisigRequestStruct, CreateMultisigResponseStruct>(
      information, AddressApi::CreateMultisig,
      ElementsAddressApi::CreateMultisig);
}

Value CreateSignatureHash(const CallbackInfo &information) {
  return NodeAddonJsonApi<
      CreateSignatureHashRequest, CreateSignatureHashResponse,
      CreateSignatureHashRequestStruct, CreateSignatureHashResponseStruct>(
      information, SigHashApi::CreateSignatureHash);
}

Value CreateKeyPair(const CallbackInfo &information) {
  return NodeAddonJsonApi<
      CreateKeyPairRequest, CreateKeyPairResponse, CreateKeyPairRequestStruct,
      CreateKeyPairResponseStruct>(information, KeyApi::CreateKeyPair);
}

Value AddSign(const CallbackInfo &information) {
  return NodeAddonElementsCheckApi<
      AddSignRequest, AddSignResponse, AddSignRequestStruct,
      AddSignResponseStruct>(
      information, TransactionApi::AddSign, ElementsTransactionApi::AddSign);
}

Value UpdateWitnessStack(const CallbackInfo &information) {
  return NodeAddonElementsCheckApi<
      UpdateWitnessStackRequest, UpdateWitnessStackResponse,
      UpdateWitnessStackRequestStruct, UpdateWitnessStackResponseStruct>(
      information, TransactionApi::UpdateWitnessStack,
      ElementsTransactionApi::UpdateWitnessStack);
}

Value GetWitnessStackNum(const CallbackInfo &information) {
  return NodeAddonElementsCheckApi<
      GetWitnessStackNumRequest, GetWitnessStackNumResponse,
      GetWitnessStackNumRequestStruct, GetWitnessStackNumResponseStruct>(
      information, TransactionApi::GetWitnessStackNum,
      ElementsTransactionApi::GetWitnessStackNum);
}

Value AddMultisigSign(const CallbackInfo &information) {
  return NodeAddonElementsCheckApi<
      AddMultisigSignRequest, AddMultisigSignResponse,
      AddMultisigSignRequestStruct, AddMultisigSignResponseStruct>(
      information, TransactionApi::AddMultisigSign,
      ElementsTransactionApi::AddMultisigSign);
}

#ifndef CFD_DISABLE_ELEMENTS

Value GetConfidentialAddress(const CallbackInfo &information) {
  return NodeAddonJsonApi<
      GetConfidentialAddressRequest, GetConfidentialAddressResponse,
      GetConfidentialAddressRequestStruct,
      GetConfidentialAddressResponseStruct>(
      information, ElementsAddressApi::GetConfidentialAddress);
}

Value GetUnblindedAddress(const CallbackInfo &information) {
  return NodeAddonJsonApi<
      GetUnblindedAddressRequest, GetUnblindedAddressResponse,
      GetUnblindedAddressRequestStruct, GetUnblindedAddressResponseStruct>(
      information, ElementsAddressApi::GetUnblindedAddress);
}

Value CreatePegInAddress(const CallbackInfo &information) {
  return NodeAddonJsonApi<
      ElementsCreatePegInAddressRequest, ElementsCreatePegInAddressResponse,
      ElementsCreatePegInAddressRequestStruct,
      ElementsCreatePegInAddressResponseStruct>(
      information, ElementsAddressApi::CreatePegInAddress);
}

Value ElementsCreateRawTransaction(const CallbackInfo &information) {
  return NodeAddonJsonApi<
      ElementsCreateRawTransactionRequest,
      ElementsCreateRawTransactionResponse,
      ElementsCreateRawTransactionRequestStruct,
      ElementsCreateRawTransactionResponseStruct>(
      information, ElementsTransactionApi::CreateRawTransaction);
}

Value ElementsDecodeRawTransaction(const CallbackInfo &information) {
  return NodeAddonJsonApi<
      ElementsDecodeRawTransactionRequest,
      ElementsDecodeRawTransactionResponse,
      ElementsDecodeRawTransactionRequestStruct,
      ElementsDecodeRawTransactionResponseStruct>(
      information, ElementsTransactionApi::DecodeRawTransaction);
}

Value BlindRawTransaction(const CallbackInfo &information) {
  return NodeAddonJsonApi<
      BlindRawTransactionRequest, BlindRawTransactionResponse,
      BlindRawTransactionRequestStruct, BlindRawTransactionResponseStruct>(
      information,
      ElementsTransactionApi::BlindTransaction);  // NOLINT
}

Value UnblindRawTransaction(const CallbackInfo &information) {
  return NodeAddonJsonApi<
      UnblindRawTransactionRequest, UnblindRawTransactionResponse,
      UnblindRawTransactionRequestStruct, UnblindRawTransactionResponseStruct>(
      information, ElementsTransactionApi::UnblindTransaction);
}

Value SetRawIssueAsset(const CallbackInfo &information) {
  return NodeAddonJsonApi<
      SetRawIssueAssetRequest, SetRawIssueAssetResponse,
      SetRawIssueAssetRequestStruct, SetRawIssueAssetResponseStruct>(
      information, ElementsTransactionApi::SetRawIssueAsset);
}

Value SetRawReissueAsset(const CallbackInfo &information) {
  return NodeAddonJsonApi<
      SetRawReissueAssetRequest, SetRawReissueAssetResponse,
      SetRawReissueAssetRequestStruct, SetRawReissueAssetResponseStruct>(
      information, ElementsTransactionApi::SetRawReissueAsset);
}

Value CreateElementsSignatureHash(const CallbackInfo &information) {
  return NodeAddonJsonApi<
      CreateElementsSignatureHashRequest, CreateElementsSignatureHashResponse,
      CreateElementsSignatureHashRequestStruct,
      CreateElementsSignatureHashResponseStruct>(
      information, ElementsTransactionApi::CreateSignatureHash);
}

Value CreateRawPegin(const CallbackInfo &information) {
  return NodeAddonJsonApi<
      ElementsCreateRawPeginRequest, ElementsCreateRawPeginResponse,
      ElementsCreateRawPeginRequestStruct,
      ElementsCreateRawPeginResponseStruct>(
      information, ElementsTransactionApi::CreateRawPeginTransaction);
}

Value CreateRawPegout(const CallbackInfo &information) {
  return NodeAddonJsonApi<
      ElementsCreateRawPegoutRequest, ElementsCreateRawPegoutResponse,
      ElementsCreateRawPegoutRequestStruct,
      ElementsCreateRawPegoutResponseStruct>(
      information, ElementsTransactionApi::CreateRawPegoutTransaction);
}

Value GetIssuanceBlindingKey(const CallbackInfo &information) {
  return NodeAddonJsonApi<
      GetIssuanceBlindingKeyRequest, GetIssuanceBlindingKeyResponse,
      GetIssuanceBlindingKeyRequestStruct,
      GetIssuanceBlindingKeyResponseStruct>(
      information, ElementsTransactionApi::GetIssuanceBlindingKey);
}

#endif  // CFD_DISABLE_ELEMENTS

}  // namespace api
}  // namespace cfd

namespace dlc {
namespace api {

Value CreateCETxAddress(const CallbackInfo &information) {
  return cfd::api::NodeAddonJsonApi<
      CreateCETxAddressRequest, CreateCETxAddressResponse,
      CreateCETxAddressRequestStruct, CreateCETxAddressResponseStruct>(
      information, DlcAddressApi::CreateCETxAddress);
}

Value AddCETxSign(const CallbackInfo &information) {
  return cfd::api::NodeAddonJsonApi<
      AddCETxSignRequest, AddCETxSignResponse, AddCETxSignRequestStruct,
      AddCETxSignResponseStruct>(information, DlcTransactionApi::AddCETxSign);
}

}  // namespace api
}  // namespace dlc

Object Init(Env env, Object exports) {
  cfd::Initialize();
  exports.Set(
      String::New(env, "GetSupportedFunction"),
      Function::New(env, cfd::api::GetSupportedFunction));
  exports.Set(
      String::New(env, "CreateRawTransaction"),
      Function::New(env, cfd::api::CreateRawTransaction));
  exports.Set(
      String::New(env, "DecodeRawTransaction"),
      Function::New(env, cfd::api::DecodeRawTransaction));
  exports.Set(
      String::New(env, "CreateAddress"),
      Function::New(env, cfd::api::CreateAddress));
  exports.Set(
      String::New(env, "CreateMultisig"),
      Function::New(env, cfd::api::CreateMultisig));
  exports.Set(
      String::New(env, "CreateSignatureHash"),
      Function::New(env, cfd::api::CreateSignatureHash));
  exports.Set(
      String::New(env, "GetWitnessStackNum"),
      Function::New(env, cfd::api::GetWitnessStackNum));
  exports.Set(
      String::New(env, "AddSign"), Function::New(env, cfd::api::AddSign));
  exports.Set(
      String::New(env, "UpdateWitnessStack"),
      Function::New(env, cfd::api::UpdateWitnessStack));
  exports.Set(
      String::New(env, "AddMultisigSign"),
      Function::New(env, cfd::api::AddMultisigSign));
  exports.Set(
      String::New(env, "CreateKeyPair"),
      Function::New(env, cfd::api::CreateKeyPair));
#ifndef CFD_DISABLE_ELEMENTS
  exports.Set(
      String::New(env, "GetConfidentialAddress"),
      Function::New(env, cfd::api::GetConfidentialAddress));
  exports.Set(
      String::New(env, "GetUnblindedAddress"),
      Function::New(env, cfd::api::GetUnblindedAddress));
  exports.Set(
      String::New(env, "CreatePegInAddress"),
      Function::New(env, cfd::api::CreatePegInAddress));
  exports.Set(
      String::New(env, "ElementsCreateRawTransaction"),
      Function::New(env, cfd::api::ElementsCreateRawTransaction));
  exports.Set(
      String::New(env, "ElementsDecodeRawTransaction"),
      Function::New(env, cfd::api::ElementsDecodeRawTransaction));
  exports.Set(
      String::New(env, "BlindRawTransaction"),
      Function::New(env, cfd::api::BlindRawTransaction));
  exports.Set(
      String::New(env, "UnblindRawTransaction"),
      Function::New(env, cfd::api::UnblindRawTransaction));
  exports.Set(
      String::New(env, "SetRawIssueAsset"),
      Function::New(env, cfd::api::SetRawIssueAsset));
  exports.Set(
      String::New(env, "SetRawReissueAsset"),
      Function::New(env, cfd::api::SetRawReissueAsset));
  exports.Set(
      String::New(env, "CreateElementsSignatureHash"),
      Function::New(env, cfd::api::CreateElementsSignatureHash));
  exports.Set(
      String::New(env, "CreateRawPegin"),
      Function::New(env, cfd::api::CreateRawPegin));
  exports.Set(
      String::New(env, "CreateRawPegout"),
      Function::New(env, cfd::api::CreateRawPegout));
  exports.Set(
      String::New(env, "GetIssuanceBlindingKey"),
      Function::New(env, cfd::api::GetIssuanceBlindingKey));
#endif  // CFD_DISABLE_ELEMENTS
  exports.Set(
      String::New(env, "CreateCETxAddress"),
      Function::New(env, dlc::api::CreateCETxAddress));
  exports.Set(
      String::New(env, "AddCETxSign"),
      Function::New(env, dlc::api::AddCETxSign));
  return exports;
}

NODE_API_MODULE(cfd_js, Init)
