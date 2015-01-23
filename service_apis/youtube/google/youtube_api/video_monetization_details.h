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
#ifndef  GOOGLE_YOUTUBE_API_VIDEO_MONETIZATION_DETAILS_H_
#define  GOOGLE_YOUTUBE_API_VIDEO_MONETIZATION_DETAILS_H_

#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/access_policy.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * Details about monetization of a YouTube Video.
 *
 * @ingroup DataObject
 */
class VideoMonetizationDetails : public client::JsonCppData {
 public:

  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static VideoMonetizationDetails* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit VideoMonetizationDetails(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit VideoMonetizationDetails(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~VideoMonetizationDetails();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::VideoMonetizationDetails</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::VideoMonetizationDetails");
  }

  /**
   * Determine if the '<code>access</code>' attribute was set.
   *
   * @return true if the '<code>access</code>' attribute was set.
   */
  bool has_access() const {
    return Storage().isMember("access");
  }

  /**
   * Clears the '<code>access</code>' attribute.
   */
  void clear_access() {
    MutableStorage()->removeMember("access");
  }


  /**
   * Get a reference to the value of the '<code>access</code>' attribute.
   */
  const AccessPolicy get_access() const {
     const Json::Value& storage = Storage("access");
    return client::JsonValueToCppValueHelper<AccessPolicy >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>access</code>' property.
   *
   * The value of access indicates whether the video can be monetized or not.
   *
   * @return The result can be modified to change the attribute value.
   */
  AccessPolicy mutable_access() {
    Json::Value* storage = MutableStorage("access");
    return client::JsonValueToMutableCppValueHelper<AccessPolicy >(storage);
  }

 private:
  void operator=(const VideoMonetizationDetails&);
};  // VideoMonetizationDetails
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_VIDEO_MONETIZATION_DETAILS_H_
