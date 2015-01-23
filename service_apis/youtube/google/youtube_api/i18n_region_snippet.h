// Copyright 2010 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.5.0
//   Build date: 2014-11-17 18:43:33 UTC
//   on: 2014-12-11, 22:05:47 UTC
//   C++ generator version:

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Generated from:
//   Version: v3
//   Revision: 125
// Generated by:
//    Tool: google-apis-code-generator 1.5.0
//     C++: 0.1.2
#ifndef  GOOGLE_YOUTUBE_API_I18N_REGION_SNIPPET_H_
#define  GOOGLE_YOUTUBE_API_I18N_REGION_SNIPPET_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * Basic details about an i18n region, such as region code and human-readable
 * name.
 *
 * @ingroup DataObject
 */
class I18nRegionSnippet : public client::JsonCppData {
 public:

  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static I18nRegionSnippet* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit I18nRegionSnippet(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit I18nRegionSnippet(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~I18nRegionSnippet();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::I18nRegionSnippet</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::I18nRegionSnippet");
  }

  /**
   * Determine if the '<code>gl</code>' attribute was set.
   *
   * @return true if the '<code>gl</code>' attribute was set.
   */
  bool has_gl() const {
    return Storage().isMember("gl");
  }

  /**
   * Clears the '<code>gl</code>' attribute.
   */
  void clear_gl() {
    MutableStorage()->removeMember("gl");
  }


  /**
   * Get the value of the '<code>gl</code>' attribute.
   */
  const StringPiece get_gl() const {
    const Json::Value& v = Storage("gl");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>gl</code>' attribute.
   *
   * The region code as a 2-letter ISO country code.
   *
   * @param[in] value The new value.
   */
  void set_gl(const StringPiece& value) {
    *MutableStorage("gl") = value.data();
  }

  /**
   * Determine if the '<code>name</code>' attribute was set.
   *
   * @return true if the '<code>name</code>' attribute was set.
   */
  bool has_name() const {
    return Storage().isMember("name");
  }

  /**
   * Clears the '<code>name</code>' attribute.
   */
  void clear_name() {
    MutableStorage()->removeMember("name");
  }


  /**
   * Get the value of the '<code>name</code>' attribute.
   */
  const StringPiece get_name() const {
    const Json::Value& v = Storage("name");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>name</code>' attribute.
   *
   * The human-readable name of the region.
   *
   * @param[in] value The new value.
   */
  void set_name(const StringPiece& value) {
    *MutableStorage("name") = value.data();
  }

 private:
  void operator=(const I18nRegionSnippet&);
};  // I18nRegionSnippet
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_I18N_REGION_SNIPPET_H_
