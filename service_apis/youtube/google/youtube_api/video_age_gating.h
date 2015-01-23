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
#ifndef  GOOGLE_YOUTUBE_API_VIDEO_AGE_GATING_H_
#define  GOOGLE_YOUTUBE_API_VIDEO_AGE_GATING_H_

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
class VideoAgeGating : public client::JsonCppData {
 public:

  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static VideoAgeGating* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit VideoAgeGating(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit VideoAgeGating(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~VideoAgeGating();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::VideoAgeGating</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::VideoAgeGating");
  }

  /**
   * Determine if the '<code>alcoholContent</code>' attribute was set.
   *
   * @return true if the '<code>alcoholContent</code>' attribute was set.
   */
  bool has_alcohol_content() const {
    return Storage().isMember("alcoholContent");
  }

  /**
   * Clears the '<code>alcoholContent</code>' attribute.
   */
  void clear_alcohol_content() {
    MutableStorage()->removeMember("alcoholContent");
  }


  /**
   * Get the value of the '<code>alcoholContent</code>' attribute.
   */
  bool get_alcohol_content() const {
    const Json::Value& storage = Storage("alcoholContent");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>alcoholContent</code>' attribute.
   *
   * Indicates whether or not the video has alcoholic beverage content. Only
   * users of legal purchasing age in a particular country, as identified by
   * ICAP, can view the content.
   *
   * @param[in] value The new value.
   */
  void set_alcohol_content(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("alcoholContent"));
  }

  /**
   * Determine if the '<code>restricted</code>' attribute was set.
   *
   * @return true if the '<code>restricted</code>' attribute was set.
   */
  bool has_restricted() const {
    return Storage().isMember("restricted");
  }

  /**
   * Clears the '<code>restricted</code>' attribute.
   */
  void clear_restricted() {
    MutableStorage()->removeMember("restricted");
  }


  /**
   * Get the value of the '<code>restricted</code>' attribute.
   */
  bool get_restricted() const {
    const Json::Value& storage = Storage("restricted");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>restricted</code>' attribute.
   *
   * Age-restricted trailers. For redband trailers and adult-rated video-games.
   * Only users aged 18+ can view the content. The the field is true the content
   * is restricted to viewers aged 18+. Otherwise The field won't be present.
   *
   * @param[in] value The new value.
   */
  void set_restricted(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("restricted"));
  }

  /**
   * Determine if the '<code>videoGameRating</code>' attribute was set.
   *
   * @return true if the '<code>videoGameRating</code>' attribute was set.
   */
  bool has_video_game_rating() const {
    return Storage().isMember("videoGameRating");
  }

  /**
   * Clears the '<code>videoGameRating</code>' attribute.
   */
  void clear_video_game_rating() {
    MutableStorage()->removeMember("videoGameRating");
  }


  /**
   * Get the value of the '<code>videoGameRating</code>' attribute.
   */
  const StringPiece get_video_game_rating() const {
    const Json::Value& v = Storage("videoGameRating");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>videoGameRating</code>' attribute.
   *
   * Video game rating, if any.
   *
   * @param[in] value The new value.
   */
  void set_video_game_rating(const StringPiece& value) {
    *MutableStorage("videoGameRating") = value.data();
  }

 private:
  void operator=(const VideoAgeGating&);
};  // VideoAgeGating
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_VIDEO_AGE_GATING_H_
