// Copyright (c) 2018 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=5b84f64e6dc130807abd2cf121f4fe8a19ef0194$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_GET_GEOLOCATION_CALLBACK_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_GET_GEOLOCATION_CALLBACK_CPPTOC_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_geolocation_capi.h"
#include "include/cef_geolocation.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed wrapper-side only.
class CefGetGeolocationCallbackCppToC
    : public CefCppToCRefCounted<CefGetGeolocationCallbackCppToC,
                                 CefGetGeolocationCallback,
                                 cef_get_geolocation_callback_t> {
 public:
  CefGetGeolocationCallbackCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_GET_GEOLOCATION_CALLBACK_CPPTOC_H_
