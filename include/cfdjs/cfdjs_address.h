// Copyright 2019 CryptoGarage
/**
 * @file cfdjs_address.h
 *
 * @brief cfd-apiで利用するAddress操作のクラス定義
 *
 * JSON形式のAPIを提供する.
 */
#ifndef CFD_JS_INCLUDE_CFDJS_CFDJS_ADDRESS_H_
#define CFD_JS_INCLUDE_CFDJS_CFDJS_ADDRESS_H_

#include <string>
#include <vector>

#include "cfdcore/cfdcore_address.h"
#include "cfdcore/cfdcore_key.h"
#include "cfdjs/cfdjs_common.h"
#include "cfdjs/cfdjs_struct.h"

/**
 * @brief cfdapi名前空間
 */
namespace cfd {
namespace js {
namespace api {

using cfd::core::AddressType;

/**
 * @brief Address関連の関数群クラス
 */
class CFD_JS_EXPORT AddressStructApi {
 public:
  /**
   * @brief JSONパラメータの情報を元に、Addressを作成する
   * @param[in] request Addressを構築するパラメータ
   * @return Addressのhexデータを格納した構造体
   */
  static CreateAddressResponseStruct CreateAddress(
      const CreateAddressRequestStruct& request);

  /**
   * @brief JSONパラメータの情報を元に、Multisigを作成する
   * @param[in] request Multisigを構築するパラメータ
   * @return MultisigAddressとredeem scriptのhexデータを格納した構造体
   */
  static CreateMultisigResponseStruct CreateMultisig(
      const CreateMultisigRequestStruct& request);

  /**
   * @brief bitcoinネットワーク文字列を、NetType構造体へ変換する.
   * @param[in] network_type ネットワーク文字列
   * @return 引数に対応するNetType構造体
   * @throws CfdException 指定文字列以外が渡された場合
   */
  static cfd::core::NetType ConvertNetType(const std::string& network_type);

  /**
   * @brief Convert address type from string to AddressType.
   * @param[in] address_type the address type as a string.
   * @return the converted AddressType.
   * @throws CfdException if address_type does not match any known AddressType.
   */
  static AddressType ConvertAddressType(const std::string& address_type);

 private:
  AddressStructApi();
};

}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_INCLUDE_CFDJS_CFDJS_ADDRESS_H_