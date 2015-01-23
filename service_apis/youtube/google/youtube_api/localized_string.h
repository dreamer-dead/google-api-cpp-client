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
#ifndef  GOOGLE_YOUTUBE_API_LOCALIZED_STRING_H_
#define  GOOGLE_YOUTUBE_API_LOCALIZED_STRING_H_

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
 * No description provided.
 *
 * @ingroup DataObject
 */
class LocalizedString : public client::JsonCppData {
 public:

  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static LocalizedString* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit LocalizedString(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit LocalizedString(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~LocalizedString();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::LocalizedString</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::LocalizedString");
  }

  /**
   * Determine if the '<code>language</code>' attribute was set.
   *
   * @return true if the '<code>language</code>' attribute was set.
   */
  bool has_language() const {
    return Storage().isMember("language");
  }

  /**
   * Clears the '<code>language</code>' attribute.
   */
  void clear_language() {
    MutableStorage()->removeMember("language");
  }


  /**
   * Get the value of the '<code>language</code>' attribute.
   */
  const StringPiece get_language() const {
    const Json::Value& v = Storage("language");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>language</code>' attribute.
   * @param[in] value The new value.
   */
  void set_language(const StringPiece& value) {
    *MutableStorage("language") = value.data();
  }

  /**
   * Determine if the '<code>value</code>' attribute was set.
   *
   * @return true if the '<code>value</code>' attribute was set.
   */
  bool has_value() const {
    return Storage().isMember("value");
  }

  /**
   * Clears the '<code>value</code>' attribute.
   */
  void clear_value() {
    MutableStorage()->removeMember("value");
  }


  /**
   * Get the value of the '<code>value</code>' attribute.
   */
  const StringPiece get_value() const {
    const Json::Value& v = Storage("value");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>value</code>' attribute.
   * @param[in] value The new value.
   */
  void set_value(const StringPiece& value) {
    *MutableStorage("value") = value.data();
  }

 private:
  void operator=(const LocalizedString&);
};  // LocalizedString
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_LOCALIZED_STRING_H_
