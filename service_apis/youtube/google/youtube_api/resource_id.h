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

// This code was generated by google-apis-code-generator 1.5.1
//   Build date: 2015-03-26 20:30:19 UTC
//   on: 2015-06-02, 17:00:10 UTC
//   C++ generator version: 0.1.3

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Generated from:
//   Version: v3
//   Revision: 139
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.3
#ifndef  GOOGLE_YOUTUBE_API_RESOURCE_ID_H_
#define  GOOGLE_YOUTUBE_API_RESOURCE_ID_H_

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
 * A resource id is a generic reference that points to another YouTube resource.
 *
 * @ingroup DataObject
 */
class ResourceId : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static ResourceId* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ResourceId(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ResourceId(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~ResourceId();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::ResourceId</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::ResourceId");
  }

  /**
   * Determine if the '<code>channelId</code>' attribute was set.
   *
   * @return true if the '<code>channelId</code>' attribute was set.
   */
  bool has_channel_id() const {
    return Storage().isMember("channelId");
  }

  /**
   * Clears the '<code>channelId</code>' attribute.
   */
  void clear_channel_id() {
    MutableStorage()->removeMember("channelId");
  }


  /**
   * Get the value of the '<code>channelId</code>' attribute.
   */
  const StringPiece get_channel_id() const {
    const Json::Value& v = Storage("channelId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>channelId</code>' attribute.
   *
   * The ID that YouTube uses to uniquely identify the referred resource, if
   * that resource is a channel. This property is only present if the
   * resourceId.kind value is youtube#channel.
   *
   * @param[in] value The new value.
   */
  void set_channel_id(const StringPiece& value) {
    *MutableStorage("channelId") = value.data();
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
   * The type of the API resource.
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>playlistId</code>' attribute was set.
   *
   * @return true if the '<code>playlistId</code>' attribute was set.
   */
  bool has_playlist_id() const {
    return Storage().isMember("playlistId");
  }

  /**
   * Clears the '<code>playlistId</code>' attribute.
   */
  void clear_playlist_id() {
    MutableStorage()->removeMember("playlistId");
  }


  /**
   * Get the value of the '<code>playlistId</code>' attribute.
   */
  const StringPiece get_playlist_id() const {
    const Json::Value& v = Storage("playlistId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>playlistId</code>' attribute.
   *
   * The ID that YouTube uses to uniquely identify the referred resource, if
   * that resource is a playlist. This property is only present if the
   * resourceId.kind value is youtube#playlist.
   *
   * @param[in] value The new value.
   */
  void set_playlist_id(const StringPiece& value) {
    *MutableStorage("playlistId") = value.data();
  }

  /**
   * Determine if the '<code>videoId</code>' attribute was set.
   *
   * @return true if the '<code>videoId</code>' attribute was set.
   */
  bool has_video_id() const {
    return Storage().isMember("videoId");
  }

  /**
   * Clears the '<code>videoId</code>' attribute.
   */
  void clear_video_id() {
    MutableStorage()->removeMember("videoId");
  }


  /**
   * Get the value of the '<code>videoId</code>' attribute.
   */
  const StringPiece get_video_id() const {
    const Json::Value& v = Storage("videoId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>videoId</code>' attribute.
   *
   * The ID that YouTube uses to uniquely identify the referred resource, if
   * that resource is a video. This property is only present if the
   * resourceId.kind value is youtube#video.
   *
   * @param[in] value The new value.
   */
  void set_video_id(const StringPiece& value) {
    *MutableStorage("videoId") = value.data();
  }

 private:
  void operator=(const ResourceId&);
};  // ResourceId
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_RESOURCE_ID_H_
