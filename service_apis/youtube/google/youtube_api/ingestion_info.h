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
#ifndef  GOOGLE_YOUTUBE_API_INGESTION_INFO_H_
#define  GOOGLE_YOUTUBE_API_INGESTION_INFO_H_

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
 * Describes information necessary for ingesting an RTMP or an HTTP stream.
 *
 * @ingroup DataObject
 */
class IngestionInfo : public client::JsonCppData {
 public:

  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static IngestionInfo* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit IngestionInfo(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit IngestionInfo(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~IngestionInfo();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::IngestionInfo</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::IngestionInfo");
  }

  /**
   * Determine if the '<code>backupIngestionAddress</code>' attribute was set.
   *
   * @return true if the '<code>backupIngestionAddress</code>' attribute was
   * set.
   */
  bool has_backup_ingestion_address() const {
    return Storage().isMember("backupIngestionAddress");
  }

  /**
   * Clears the '<code>backupIngestionAddress</code>' attribute.
   */
  void clear_backup_ingestion_address() {
    MutableStorage()->removeMember("backupIngestionAddress");
  }


  /**
   * Get the value of the '<code>backupIngestionAddress</code>' attribute.
   */
  const StringPiece get_backup_ingestion_address() const {
    const Json::Value& v = Storage("backupIngestionAddress");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>backupIngestionAddress</code>' attribute.
   *
   * The backup ingestion URL that you should use to stream video to YouTube.
   * You have the option of simultaneously streaming the content that you are
   * sending to the ingestionAddress to this URL.
   *
   * @param[in] value The new value.
   */
  void set_backup_ingestion_address(const StringPiece& value) {
    *MutableStorage("backupIngestionAddress") = value.data();
  }

  /**
   * Determine if the '<code>ingestionAddress</code>' attribute was set.
   *
   * @return true if the '<code>ingestionAddress</code>' attribute was set.
   */
  bool has_ingestion_address() const {
    return Storage().isMember("ingestionAddress");
  }

  /**
   * Clears the '<code>ingestionAddress</code>' attribute.
   */
  void clear_ingestion_address() {
    MutableStorage()->removeMember("ingestionAddress");
  }


  /**
   * Get the value of the '<code>ingestionAddress</code>' attribute.
   */
  const StringPiece get_ingestion_address() const {
    const Json::Value& v = Storage("ingestionAddress");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>ingestionAddress</code>' attribute.
   *
   * The primary ingestion URL that you should use to stream video to YouTube.
   * You must stream video to this URL.
   *
   * Depending on which application or tool you use to encode your video stream,
   * you may need to enter the stream URL and stream name separately or you may
   * need to concatenate them in the following format:
   *
   * STREAM_URL/STREAM_NAME.
   *
   * @param[in] value The new value.
   */
  void set_ingestion_address(const StringPiece& value) {
    *MutableStorage("ingestionAddress") = value.data();
  }

  /**
   * Determine if the '<code>streamName</code>' attribute was set.
   *
   * @return true if the '<code>streamName</code>' attribute was set.
   */
  bool has_stream_name() const {
    return Storage().isMember("streamName");
  }

  /**
   * Clears the '<code>streamName</code>' attribute.
   */
  void clear_stream_name() {
    MutableStorage()->removeMember("streamName");
  }


  /**
   * Get the value of the '<code>streamName</code>' attribute.
   */
  const StringPiece get_stream_name() const {
    const Json::Value& v = Storage("streamName");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>streamName</code>' attribute.
   *
   * The HTTP or RTMP stream name that YouTube assigns to the video stream.
   *
   * @param[in] value The new value.
   */
  void set_stream_name(const StringPiece& value) {
    *MutableStorage("streamName") = value.data();
  }

 private:
  void operator=(const IngestionInfo&);
};  // IngestionInfo
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_INGESTION_INFO_H_
