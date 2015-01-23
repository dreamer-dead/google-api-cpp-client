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
#ifndef  GOOGLE_YOUTUBE_API_CHANNEL_SECTION_H_
#define  GOOGLE_YOUTUBE_API_CHANNEL_SECTION_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/channel_section_content_details.h"
#include "google/youtube_api/channel_section_snippet.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * TODO(lxz) follow up with adiamondstein@ to fullfill the doc before deploying.
 *
 * @ingroup DataObject
 */
class ChannelSection : public client::JsonCppData {
 public:

  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static ChannelSection* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ChannelSection(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ChannelSection(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~ChannelSection();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::ChannelSection</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::ChannelSection");
  }

  /**
   * Determine if the '<code>contentDetails</code>' attribute was set.
   *
   * @return true if the '<code>contentDetails</code>' attribute was set.
   */
  bool has_content_details() const {
    return Storage().isMember("contentDetails");
  }

  /**
   * Clears the '<code>contentDetails</code>' attribute.
   */
  void clear_content_details() {
    MutableStorage()->removeMember("contentDetails");
  }


  /**
   * Get a reference to the value of the '<code>contentDetails</code>'
   * attribute.
   */
  const ChannelSectionContentDetails get_content_details() const {
     const Json::Value& storage = Storage("contentDetails");
    return client::JsonValueToCppValueHelper<ChannelSectionContentDetails >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>contentDetails</code>'
   * property.
   *
   * The contentDetails object contains details about the ChannelSection
   * content, such as playlists and channels.
   *
   * @return The result can be modified to change the attribute value.
   */
  ChannelSectionContentDetails mutable_contentDetails() {
    Json::Value* storage = MutableStorage("contentDetails");
    return client::JsonValueToMutableCppValueHelper<ChannelSectionContentDetails >(storage);
  }

  /**
   * Determine if the '<code>etag</code>' attribute was set.
   *
   * @return true if the '<code>etag</code>' attribute was set.
   */
  bool has_etag() const {
    return Storage().isMember("etag");
  }

  /**
   * Clears the '<code>etag</code>' attribute.
   */
  void clear_etag() {
    MutableStorage()->removeMember("etag");
  }


  /**
   * Get the value of the '<code>etag</code>' attribute.
   */
  const StringPiece get_etag() const {
    const Json::Value& v = Storage("etag");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>etag</code>' attribute.
   *
   * Etag of this resource.
   *
   * @param[in] value The new value.
   */
  void set_etag(const StringPiece& value) {
    *MutableStorage("etag") = value.data();
  }

  /**
   * Determine if the '<code>id</code>' attribute was set.
   *
   * @return true if the '<code>id</code>' attribute was set.
   */
  bool has_id() const {
    return Storage().isMember("id");
  }

  /**
   * Clears the '<code>id</code>' attribute.
   */
  void clear_id() {
    MutableStorage()->removeMember("id");
  }


  /**
   * Get the value of the '<code>id</code>' attribute.
   */
  const StringPiece get_id() const {
    const Json::Value& v = Storage("id");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>id</code>' attribute.
   *
   * The ID that YouTube uses to uniquely identify the ChannelSection.
   *
   * @param[in] value The new value.
   */
  void set_id(const StringPiece& value) {
    *MutableStorage("id") = value.data();
  }

  /**
   * Determine if the '<code>kind</code>' attribute was set.
   *
   * @return true if the '<code>kind</code>' attribute was set.
   */
  bool has_kind() const {
    return Storage().isMember("kind");
  }

  /**
   * Clears the '<code>kind</code>' attribute.
   */
  void clear_kind() {
    MutableStorage()->removeMember("kind");
  }


  /**
   * Get the value of the '<code>kind</code>' attribute.
   */
  const StringPiece get_kind() const {
    const Json::Value& v = Storage("kind");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>kind</code>' attribute.
   *
   * Identifies what kind of resource this is. Value: the fixed string
   * "youtube#channelSection".
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>snippet</code>' attribute was set.
   *
   * @return true if the '<code>snippet</code>' attribute was set.
   */
  bool has_snippet() const {
    return Storage().isMember("snippet");
  }

  /**
   * Clears the '<code>snippet</code>' attribute.
   */
  void clear_snippet() {
    MutableStorage()->removeMember("snippet");
  }


  /**
   * Get a reference to the value of the '<code>snippet</code>' attribute.
   */
  const ChannelSectionSnippet get_snippet() const {
     const Json::Value& storage = Storage("snippet");
    return client::JsonValueToCppValueHelper<ChannelSectionSnippet >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>snippet</code>' property.
   *
   * The snippet object contains basic details about the ChannelSection, such as
   * its type, style and title.
   *
   * @return The result can be modified to change the attribute value.
   */
  ChannelSectionSnippet mutable_snippet() {
    Json::Value* storage = MutableStorage("snippet");
    return client::JsonValueToMutableCppValueHelper<ChannelSectionSnippet >(storage);
  }

 private:
  void operator=(const ChannelSection&);
};  // ChannelSection
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_CHANNEL_SECTION_H_
