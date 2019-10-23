// Copyright 2019 CryptoGarage
/**
 * @file cfdjs_hdwallet.h
 *
 * @brief cfd-apiで利用するHDWallet APIのクラス定義
 *
 * 構造体形式のAPIを提供する.
 */
#ifndef CFD_JS_INCLUDE_CFDJS_CFDJS_HDWALLET_H_
#define CFD_JS_INCLUDE_CFDJS_CFDJS_HDWALLET_H_

#include <string>
#include <vector>

#include "cfdjs/cfdjs_common.h"
#include "cfdjs/cfdjs_struct.h"
// #include "cfdcore/cfdcore_bytedata.h"

/**
 * @brief cfdapi名前空間
 */
namespace cfd {
namespace js {
namespace api {

/**
 * @brief HDWallet構造体関数群クラス
 */
class CFD_JS_EXPORT HDWalletStructApi {
 public:
  /**
   * @brief JSONパラメータの情報を元に、BIP39 で利用できる wordlist を取得する.
   * @param[in] request wordlistの言語を含むリクエスト構造体
   * @return wordlist一覧を含むレスポンス構造体
   */
  static GetMnemonicWordlistResponseStruct GetMnemonicWordlist(
      const GetMnemonicWordlistRequestStruct& request);

  /**
   * @brief JSONパラメータの情報を元に、mnemonic から hdwallet seedを生成する.
   * @param[in] request mnemonicを含むリクエスト構造体
   * @return seedを含むレスポンス構造体
   */
  static ConvertMnemonicToSeedResponseStruct ConvertMnemonicToSeed(
      const ConvertMnemonicToSeedRequestStruct& request);

  /**
   * @brief JSONパラメータの情報を元に、entropyからmnemonicを生成する.
   * @param[in] request Entropyを含むリクエスト構造体
   * @return mnemonicを含むレスポンス構造体
   */
  static ConvertEntropyToMnemonicResponseStruct ConvertEntropyToMnemonic(
      const ConvertEntropyToMnemonicRequestStruct& request);

 private:
  HDWalletStructApi();
};

}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_INCLUDE_CFDJS_CFDJS_HDWALLET_H_
