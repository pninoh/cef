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
// $hash=482a3e4b5e497c530d2fa4caf31f953cc0f74d33$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_DOMDOCUMENT_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_DOMDOCUMENT_CPPTOC_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_dom_capi.h"
#include "include/cef_dom.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed DLL-side only.
class CefDOMDocumentCppToC : public CefCppToCRefCounted<CefDOMDocumentCppToC,
                                                        CefDOMDocument,
                                                        cef_domdocument_t> {
 public:
  CefDOMDocumentCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_DOMDOCUMENT_CPPTOC_H_
