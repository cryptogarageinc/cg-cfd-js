// Copyright 2019 CryptoGarage
/**
 * @file cfdapi_error_json.h
 *
 * @brief JSONマッピングファイル
 */
#ifndef CFD_JS_SRC_CFDAPI_ERROR_JSON_H_
#define CFD_JS_SRC_CFDAPI_ERROR_JSON_H_

#include "cfd/cfdapi_struct.h"
#include "cfdapi_error_base_json.h"  // NOLINT
#include "cfdcore/cfdcore_exception.h"

namespace cfd {
namespace api {

using cfdcore::CfdException;
using cfdcore::JsonClassBase;
using cfdcore::JsonObjectVector;
using cfdcore::JsonValueVector;
using cfdcore::JsonVector;
// @formatter:off

// ------------------------------------------------------------------------
// ErrorResponse
// ------------------------------------------------------------------------
/**
 * @brief ErrorResponse
 */
class ErrorResponse : public ErrorResponseBase {
 public:
  /**
   * @brief CfdExceptionをErrorResponseに変換する.
   * @param cfde CfdException object
   * @return ErrorResponse object
   */
  static const ErrorResponse ConvertFromCfdException(const CfdException& cfde);

  /**
   * @brief InnerErrorResponseStructをErrorResponseに変換する.
   * @param[in] data  InnerErrorResponse struct
   * @return ErrorResponse object
   */
  static const ErrorResponse ConvertFromStruct(
      const InnerErrorResponseStruct& data);
};

// @formatter:on

}  // namespace api
}  // namespace cfd

#endif  // CFD_JS_SRC_CFDAPI_ERROR_JSON_H_
