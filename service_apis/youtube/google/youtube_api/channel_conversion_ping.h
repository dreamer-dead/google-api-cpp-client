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
#ifndef  GOOGLE_YOUTUBE_API_CHANNEL_CONVERSION_PING_H_
#define  GOOGLE_YOUTUBE_API_CHANNEL_CONVERSION_PING_H_

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
 * Pings that the app shall fire (authenticated by biscotti cookie). Each ping
 * has a context, in which the app must fire the ping, and a url identifying the
 * ping.
 *
 * @ingroup DataObject
 */
class ChannelConversionPing : public client::JsonCppData {
 public:

  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static ChannelConversionPing* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ChannelConversionPing(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ChannelConversionPing(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~ChannelConversionPing();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::ChannelConversionPing</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::ChannelConversionPing");
  }

  /**
   * Determine if the '<code>context</code>' attribute was set.
   *
   * @return true if the '<code>context</code>' attribute was set.
   */
  bool has_context() const {
    return Storage().isMember("context");
  }

  /**
   * Clears the '<code>context</code>' attribute.
   */
  void clear_context() {
    MutableStorage()->removeMember("context");
  }


  /**
   * Get the value of the '<code>context</code>' attribute.
   */
  const StringPiece get_context() const {
    const Json::Value& v = Storage("context");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>context</code>' attribute.
   *
   * Defines the context of the ping.
   *
   * @param[in] value The new value.
   */
  void set_context(const StringPiece& value) {
    *MutableStorage("context") = value.data();
  }

  /**
   * Determine if the '<code>conversionUrl</code>' attribute was set.
   *
   * @return true if the '<code>conversionUrl</code>' attribute was set.
   */
  bool has_conversion_url() const {
    return Storage().isMember("conversionUrl");
  }

  /**
   * Clears the '<code>conversionUrl</code>' attribute.
   */
  void clear_conversion_url() {
    MutableStorage()->removeMember("conversionUrl");
  }


  /**
   * Get the value of the '<code>conversionUrl</code>' attribute.
   */
  const StringPiece get_conversion_url() const {
    const Json::Value& v = Storage("conversionUrl");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>conversionUrl</code>' attribute.
   *
   * The url (without the schema) that the player shall send the ping to. It's
   * at caller's descretion to decide which schema to use (http vs https)
   * Example of a returned url: //googleads.g.doubleclick.net/pagead/
   * viewthroughconversion/962985656/?data=path%3DtHe_path%3Btype%3D
   * cview%3Butuid%3DGISQtTNGYqaYl4sKxoVvKA=default The caller must append
   * biscotti authentication (ms param in case of mobile, for example) to this
   * ping.
   *
   * @param[in] value The new value.
   */
  void set_conversion_url(const StringPiece& value) {
    *MutableStorage("conversionUrl") = value.data();
  }

 private:
  void operator=(const ChannelConversionPing&);
};  // ChannelConversionPing
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_CHANNEL_CONVERSION_PING_H_
