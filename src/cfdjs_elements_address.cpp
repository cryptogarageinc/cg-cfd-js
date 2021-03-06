// Copyright 2019 CryptoGarage
/**
 * @file cfdjs_address.cpp
 *
 * @brief cfd-apiで利用するAddress操作の実装ファイル
 */
#ifndef CFD_DISABLE_ELEMENTS
#include <string>
#include <vector>

#include "cfd/cfd_elements_address.h"

#include "cfd/cfdapi_elements_address.h"
#include "cfdjs/cfdjs_address.h"
#include "cfdjs/cfdjs_elements_address.h"
#include "cfdjs_internal.h"  // NOLINT

namespace cfd {
namespace js {
namespace api {

using cfd::ElementsAddressFactory;
using cfd::api::DescriptorKeyData;
using cfd::api::DescriptorScriptData;
using cfd::api::ElementsAddressApi;
using cfd::core::Address;
using cfd::core::CfdError;
using cfd::core::CfdException;
using cfd::core::ConfidentialKey;
using cfd::core::ElementsConfidentialAddress;
using cfd::core::ElementsNetType;
using cfd::core::NetType;
using cfd::core::Pubkey;
using cfd::core::Script;
using cfd::core::logger::warn;

CreateAddressResponseStruct ElementsAddressStructApi::CreateAddress(
    const CreateAddressRequestStruct& request) {
  auto call_func = [](const CreateAddressRequestStruct& request)
      -> CreateAddressResponseStruct {  // NOLINT
    CreateAddressResponseStruct response;
    // Address作成
    Address addr;
    Pubkey pubkey;
    Script script;
    Script locking_script;
    Script redeem_script;
    ElementsNetType net_type = ConvertElementsNetType(request.network);
    AddressType addr_type =
        AddressStructApi::ConvertAddressType(request.hash_type);

    if (request.key_data.type == "pubkey") {
      pubkey = Pubkey(request.key_data.hex);
    } else if (request.key_data.type == "redeem_script") {
      script = Script(request.key_data.hex);
    }

    ElementsAddressApi api;
    addr = api.CreateAddress(
        net_type, addr_type, &pubkey, &script, &locking_script,
        &redeem_script);

    // レスポンスとなるモデルへ変換
    response.error.code = 0;
    response.address = addr.GetAddress();
    response.locking_script = locking_script.GetHex();
    if (redeem_script.IsEmpty()) {
      response.ignore_items.insert("redeemScript");
    } else {
      response.redeem_script = redeem_script.GetHex();
    }
    return response;
  };

  CreateAddressResponseStruct result;
  result = ExecuteStructApi<
      CreateAddressRequestStruct, CreateAddressResponseStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

CreateMultisigResponseStruct ElementsAddressStructApi::CreateMultisig(
    const CreateMultisigRequestStruct& request) {
  auto call_func = [](const CreateMultisigRequestStruct& request)
      -> CreateMultisigResponseStruct {  // NOLINT
    CreateMultisigResponseStruct response;
    // pubkeyモデルへの変換
    std::vector<Pubkey> pubkeys;
    for (std::string key : request.keys) {
      pubkeys.push_back(Pubkey(key));
    }

    uint32_t req_sig_num = static_cast<uint32_t>(request.nrequired);
    ElementsNetType net_type = ConvertElementsNetType(request.network);
    AddressType addr_type =
        AddressStructApi::ConvertAddressType(request.hash_type);
    Script witness_script;
    Script redeem_script;

    ElementsAddressApi api;
    Address addr = api.CreateMultisig(
        net_type, addr_type, req_sig_num, pubkeys, &redeem_script,
        &witness_script);

    // レスポンスとなるモデルへ変換
    response.address = addr.GetAddress();
    if (redeem_script.IsEmpty()) {
      response.ignore_items.insert("redeemScript");
    } else {
      response.redeem_script = redeem_script.GetHex();
    }
    if (witness_script.IsEmpty()) {
      response.ignore_items.insert("witnessScript");
    } else {
      response.witness_script = witness_script.GetHex();
    }
    return response;
  };

  CreateMultisigResponseStruct result;
  result = ExecuteStructApi<
      CreateMultisigRequestStruct, CreateMultisigResponseStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

GetAddressesFromMultisigResponseStruct
ElementsAddressStructApi::GetAddressesFromMultisig(
    const GetAddressesFromMultisigRequestStruct& request) {
  auto call_func = [](const GetAddressesFromMultisigRequestStruct& request)
      -> GetAddressesFromMultisigResponseStruct {  // NOLINT
    GetAddressesFromMultisigResponseStruct response;

    ElementsNetType net_type = ConvertElementsNetType(request.network);
    AddressType addr_type =
        AddressStructApi::ConvertAddressType(request.hash_type);
    Script redeem_script(request.redeem_script);

    ElementsAddressApi api;
    std::vector<Pubkey> pubkeys;
    std::vector<Address> addresses = api.GetAddressesFromMultisig(
        net_type, addr_type, redeem_script, &pubkeys);

    // レスポンスとなるモデルへ変換
    for (const auto& addr : addresses) {
      response.addresses.push_back(addr.GetAddress());
    }
    for (const auto& pubkey : pubkeys) {
      response.pubkeys.push_back(pubkey.GetHex());
    }
    return response;
  };

  GetAddressesFromMultisigResponseStruct result;
  result = ExecuteStructApi<
      GetAddressesFromMultisigRequestStruct,
      GetAddressesFromMultisigResponseStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

GetConfidentialAddressResponseStruct
ElementsAddressStructApi::GetConfidentialAddress(
    const GetConfidentialAddressRequestStruct& request) {
  auto call_func = [](const GetConfidentialAddressRequestStruct& request)
      -> GetConfidentialAddressResponseStruct {  // NOLINT
    GetConfidentialAddressResponseStruct response;
    // Address作成
    std::string unblinded_addrss = request.unblinded_address;
    if (unblinded_addrss.empty()) {
      warn(
          CFD_LOG_SOURCE,
          "Failed to GetConfidentialAddress. unblinded_addrss is empty.");
      throw CfdException(
          CfdError::kCfdIllegalArgumentError, "unblinded_addrss is empty.");
    }

    std::string key = request.key;
    if (key.empty()) {
      warn(CFD_LOG_SOURCE, "Failed to GetConfidentialAddress. key is empty.");
      throw CfdException(
          CfdError::kCfdIllegalArgumentError,  // ecode
          "key is empty.");
    }

    Address addr = ElementsAddressFactory().GetAddress(unblinded_addrss);
    ConfidentialKey conf_key(key);
    ElementsAddressApi api;
    ElementsConfidentialAddress conf_addr =
        api.GetConfidentialAddress(addr, conf_key);

    response.confidential_address = conf_addr.GetAddress();
    return response;
  };

  GetConfidentialAddressResponseStruct result;
  result = ExecuteStructApi<
      GetConfidentialAddressRequestStruct,
      GetConfidentialAddressResponseStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

GetUnblindedAddressResponseStruct
ElementsAddressStructApi::GetUnblindedAddress(
    const GetUnblindedAddressRequestStruct& request) {
  auto call_func = [](const GetUnblindedAddressRequestStruct& request)
      -> GetUnblindedAddressResponseStruct {  // NOLINT
    GetUnblindedAddressResponseStruct response;
    // Address作成
    std::string unblinded_addrss = request.confidential_address;
    if (unblinded_addrss.empty()) {
      warn(
          CFD_LOG_SOURCE,
          "Failed to GetUnblindedAddress. unblinded_addrss is empty.");
      throw CfdException(
          CfdError::kCfdIllegalArgumentError, "unblinded_addrss is empty.");
    }

    ElementsConfidentialAddress addr(unblinded_addrss);

    response.unblinded_address = addr.GetUnblindedAddress().GetAddress();
    return response;
  };

  GetUnblindedAddressResponseStruct result;
  result = ExecuteStructApi<
      GetUnblindedAddressRequestStruct, GetUnblindedAddressResponseStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

ElementsCreatePegInAddressResponseStruct
ElementsAddressStructApi::CreatePegInAddress(
    const ElementsCreatePegInAddressRequestStruct& request) {
  auto call_func = [](const ElementsCreatePegInAddressRequestStruct& request)
      -> ElementsCreatePegInAddressResponseStruct {  // NOLINT
    ElementsCreatePegInAddressResponseStruct response;

    // convert request arguments from struct
    Script fedpegscript = Script(request.fedpegscript);
    Pubkey pubkey = Pubkey(request.pubkey);
    NetType net_type = AddressStructApi::ConvertNetType(request.network);
    // FIXME(fujita-cg): Extend JSON I/F and modify innner logic
    // AddressType address_type =
    //   AddressStructApi::ConvertAddressType(request.address_type);
    AddressType address_type = AddressType::kP2shP2wpkhAddress;

    // prepare output parameters
    Script claim_script;
    Script tweak_fedpegscript;

    ElementsAddressApi api;
    Address pegin_address = api.CreatePegInAddress(
        net_type, address_type, fedpegscript, pubkey, &claim_script,
        &tweak_fedpegscript);

    // convert parameters to response struct
    response.mainchain_address = pegin_address.GetAddress();
    if (claim_script.IsEmpty()) {
      response.ignore_items.insert("claimScript");
    } else {
      response.claim_script = claim_script.GetHex();
    }
    if (tweak_fedpegscript.IsEmpty()) {
      response.ignore_items.insert("tweakFedpegscript");
    } else {
      response.tweak_fedpegscript = tweak_fedpegscript.GetHex();
    }
    return response;
  };

  ElementsCreatePegInAddressResponseStruct result;
  result = ExecuteStructApi<
      ElementsCreatePegInAddressRequestStruct,
      ElementsCreatePegInAddressResponseStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

ParseDescriptorResponseStruct ElementsAddressStructApi::ParseDescriptor(
    const ParseDescriptorRequestStruct& request) {
  auto call_func = [](const ParseDescriptorRequestStruct& request)
      -> ParseDescriptorResponseStruct {  // NOLINT
    ParseDescriptorResponseStruct response;

    NetType net_type = ConvertElementsNetType(request.network);

    ElementsAddressApi api;
    std::vector<DescriptorScriptData> script_list;
    std::vector<DescriptorKeyData> multisig_key_list;
    DescriptorScriptData data = api.ParseOutputDescriptor(
        request.descriptor, net_type, request.bip32_derivation_path,
        &script_list, &multisig_key_list);

    // レスポンスとなるモデルへ変換
    response = AddressStructApi::ConvertDescriptorData(
        data, script_list, multisig_key_list);
    return response;
  };

  ParseDescriptorResponseStruct result;
  result = ExecuteStructApi<
      ParseDescriptorRequestStruct, ParseDescriptorResponseStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

ElementsNetType ElementsAddressStructApi::ConvertElementsNetType(
    const std::string& elements_net_type) {
  ElementsNetType net_type;
  if (elements_net_type == "liquidv1") {
    net_type = ElementsNetType::kLiquidV1;
  } else if (elements_net_type == "regtest") {
    net_type = ElementsNetType::kElementsRegtest;
  } else {
    warn(
        CFD_LOG_SOURCE,
        "Failed to ConvertElementsNetType. Invalid elements_network_type "
        "passed:  elements_network_type={}",  // NOLINT
        elements_net_type);
    throw CfdException(
        CfdError::kCfdIllegalArgumentError,
        "Invalid elements_network_type passed. elements_network_type must be "
        "\"liquidv1\" or \"regtest\".");  // NOLINT
  }
  return net_type;
}

}  // namespace api
}  // namespace js
}  // namespace cfd
#endif  // CFD_DISABLE_ELEMENTS
