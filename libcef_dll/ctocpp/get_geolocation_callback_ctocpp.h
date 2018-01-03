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
// $hash=1534f165425a785e198e3eb216b70948916499e1$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_GET_GEOLOCATION_CALLBACK_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_GET_GEOLOCATION_CALLBACK_CTOCPP_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_geolocation_capi.h"
#include "include/cef_geolocation.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefGetGeolocationCallbackCToCpp
    : public CefCToCppRefCounted<CefGetGeolocationCallbackCToCpp,
                                 CefGetGeolocationCallback,
                                 cef_get_geolocation_callback_t> {
 public:
  CefGetGeolocationCallbackCToCpp();

  // CefGetGeolocationCallback methods.
  void OnLocationUpdate(const CefGeoposition& position) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_GET_GEOLOCATION_CALLBACK_CTOCPP_H_
