// Copyright 2019 CryptoGarage
/**
 * @file cfdjs_common.h
 * @brief cfdcoreの共通定義ファイル。
 */
#ifndef CFD_JS_INCLUDE_CFDJS_CFDJS_COMMON_H_
#define CFD_JS_INCLUDE_CFDJS_CFDJS_COMMON_H_
#include <cstddef>
#include <cstdint>

#include <napi.h>

/**
 * @brief APIのDLLエクスポート定義
 */
#ifndef CFD_JS_API
#if defined(_WIN32)
#ifdef CFD_JS_BUILD
#define CFD_JS_API __declspec(dllexport)
#elif defined(CFD_JS_SHARED)
#define CFD_JS_API __declspec(dllimport)
#else
#define CFD_JS_API
#endif
#elif defined(__GNUC__) && defined(CFD_JS_BUILD)
#define CFD_JS_API __attribute__((visibility("default")))
#else
#define CFD_JS_API
#endif
#endif

/**
 * @brief クラスのDLLエクスポート定義
 */
#ifndef CFD_JS_EXPORT
#if defined(_WIN32)
#ifdef CFD_JS_BUILD
#define CFD_JS_EXPORT __declspec(dllexport)
#elif defined(CFD_JS_SHARED)
#define CFD_JS_EXPORT __declspec(dllimport)
#else
#define CFD_JS_EXPORT
#endif
#elif defined(__GNUC__) && defined(CFD_JS_BUILD)
#define CFD_JS_EXPORT __attribute__((visibility("default")))
#else
#define CFD_JS_EXPORT
#endif
#endif

/**
 * @brief cfd名前空間
 */
namespace cfd {
/**
 * @brief cfd::js名前空間
 */
namespace js {
/**
 * @brief cfd::js::api名前空間
 */
namespace api {
/**
 * @brief cfd::js::api::json名前空間
 */
namespace json {

// API
/**
 * @brief Initialize処理を実施する。
 * @details N-APIの利用を前提とする。
 * @return LibraryFunctionのビットフラグ
 */
CFD_JS_API void InitializeJsonApi(Napi::Env env, Napi::Object* exports);

}  // namespace json
}  // namespace api
}  // namespace js
}  // namespace cfd

#endif  // CFD_JS_INCLUDE_CFDJS_CFDJS_COMMON_H_