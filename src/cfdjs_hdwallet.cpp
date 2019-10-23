// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_hdwallet.cpp
 *
 * @brief cfd-apiで利用するHDWallet APIクラスの実装
 */
#include <string>
#include <vector>

#include "cfd/cfdapi_hdwallet.h"
#include "cfdjs/cfdjs_hdwallet.h"
#include "cfdjs_internal.h"  // NOLINT

//////////////////////////////////
/// HDWalletStructApi
//////////////////////////////////
namespace cfd {
namespace js {
namespace api {

using cfd::api::HDWalletApi;
using cfd::core::ByteData;

GetMnemonicWordlistResponseStruct HDWalletStructApi::GetMnemonicWordlist(
    const GetMnemonicWordlistRequestStruct& request) {
  auto call_func = [](const GetMnemonicWordlistRequestStruct& request)
      -> GetMnemonicWordlistResponseStruct {
    GetMnemonicWordlistResponseStruct response;
    // check language is support
    std::string language = request.language;

    // get bip39 wordlist
    std::vector<std::string> wordlist =
        HDWalletApi::GetMnemonicWordlist(language);

    response.wordlist = wordlist;
    return response;
  };

  GetMnemonicWordlistResponseStruct result;
  result = ExecuteStructApi<
      GetMnemonicWordlistRequestStruct, GetMnemonicWordlistResponseStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

ConvertMnemonicToSeedResponseStruct HDWalletStructApi::ConvertMnemonicToSeed(
    const ConvertMnemonicToSeedRequestStruct& request) {
  auto call_func = [](const ConvertMnemonicToSeedRequestStruct& request)
      -> ConvertMnemonicToSeedResponseStruct {
    ConvertMnemonicToSeedResponseStruct response;
    // check language is support
    std::vector<std::string> mnemonic = request.mnemonic;
    std::string passphrase = request.passphrase;
    bool strict_check = request.strict_check;
    std::string language = request.language;
    bool use_ideographic_space =
        ((language == "jp") && request.use_ideographic_space);
    ByteData entropy;

    // get bip39 wordlist
    ByteData seed = HDWalletApi::ConvertMnemonicToSeed(
        mnemonic, passphrase, strict_check, language, use_ideographic_space,
        &entropy);
    if (entropy.Empty()) {
      response.ignore_items.insert("entropy");
    } else {
      response.entropy = entropy.GetHex();
    }

    response.seed = seed.GetHex();
    return response;
  };

  ConvertMnemonicToSeedResponseStruct result;
  result = ExecuteStructApi<
      ConvertMnemonicToSeedRequestStruct, ConvertMnemonicToSeedResponseStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

ConvertEntropyToMnemonicResponseStruct
HDWalletStructApi::ConvertEntropyToMnemonic(
    const ConvertEntropyToMnemonicRequestStruct& request) {
  auto call_func = [](const ConvertEntropyToMnemonicRequestStruct& request)
      -> ConvertEntropyToMnemonicResponseStruct {
    ConvertEntropyToMnemonicResponseStruct response;
    ByteData entropy(request.entropy);
    std::string language = request.language;

    // entropy to mnemonic
    std::vector<std::string> mnemonic =
        HDWalletApi::ConvertEntropyToMnemonic(entropy, language);

    response.mnemonic = mnemonic;
    return response;
  };

  ConvertEntropyToMnemonicResponseStruct result;
  result = ExecuteStructApi<
      ConvertEntropyToMnemonicRequestStruct,
      ConvertEntropyToMnemonicResponseStruct>(
      request, call_func, std::string(__FUNCTION__));
  return result;
}

}  // namespace api
}  // namespace js
}  // namespace cfd
