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
#ifndef  GOOGLE_YOUTUBE_API_VIDEO_SUGGESTIONS_H_
#define  GOOGLE_YOUTUBE_API_VIDEO_SUGGESTIONS_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/video_suggestions_tag_suggestion.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * Specifies suggestions on how to improve video content, including encoding
 * hints, tag suggestions, and editor suggestions.
 *
 * @ingroup DataObject
 */
class VideoSuggestions : public client::JsonCppData {
 public:

  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static VideoSuggestions* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit VideoSuggestions(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit VideoSuggestions(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~VideoSuggestions();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::VideoSuggestions</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::VideoSuggestions");
  }

  /**
   * Determine if the '<code>editorSuggestions</code>' attribute was set.
   *
   * @return true if the '<code>editorSuggestions</code>' attribute was set.
   */
  bool has_editor_suggestions() const {
    return Storage().isMember("editorSuggestions");
  }

  /**
   * Clears the '<code>editorSuggestions</code>' attribute.
   */
  void clear_editor_suggestions() {
    MutableStorage()->removeMember("editorSuggestions");
  }


  /**
   * Get a reference to the value of the '<code>editorSuggestions</code>'
   * attribute.
   */
  const client::JsonCppArray<string > get_editor_suggestions() const {
     const Json::Value& storage = Storage("editorSuggestions");
    return client::JsonValueToCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>editorSuggestions</code>'
   * property.
   *
   * A list of video editing operations that might improve the video quality or
   * playback experience of the uploaded video.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<string > mutable_editorSuggestions() {
    Json::Value* storage = MutableStorage("editorSuggestions");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Determine if the '<code>processingErrors</code>' attribute was set.
   *
   * @return true if the '<code>processingErrors</code>' attribute was set.
   */
  bool has_processing_errors() const {
    return Storage().isMember("processingErrors");
  }

  /**
   * Clears the '<code>processingErrors</code>' attribute.
   */
  void clear_processing_errors() {
    MutableStorage()->removeMember("processingErrors");
  }


  /**
   * Get a reference to the value of the '<code>processingErrors</code>'
   * attribute.
   */
  const client::JsonCppArray<string > get_processing_errors() const {
     const Json::Value& storage = Storage("processingErrors");
    return client::JsonValueToCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>processingErrors</code>'
   * property.
   *
   * A list of errors that will prevent YouTube from successfully processing the
   * uploaded video video. These errors indicate that, regardless of the video's
   * current processing status, eventually, that status will almost certainly be
   * failed.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<string > mutable_processingErrors() {
    Json::Value* storage = MutableStorage("processingErrors");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Determine if the '<code>processingHints</code>' attribute was set.
   *
   * @return true if the '<code>processingHints</code>' attribute was set.
   */
  bool has_processing_hints() const {
    return Storage().isMember("processingHints");
  }

  /**
   * Clears the '<code>processingHints</code>' attribute.
   */
  void clear_processing_hints() {
    MutableStorage()->removeMember("processingHints");
  }


  /**
   * Get a reference to the value of the '<code>processingHints</code>'
   * attribute.
   */
  const client::JsonCppArray<string > get_processing_hints() const {
     const Json::Value& storage = Storage("processingHints");
    return client::JsonValueToCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>processingHints</code>'
   * property.
   *
   * A list of suggestions that may improve YouTube's ability to process the
   * video.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<string > mutable_processingHints() {
    Json::Value* storage = MutableStorage("processingHints");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Determine if the '<code>processingWarnings</code>' attribute was set.
   *
   * @return true if the '<code>processingWarnings</code>' attribute was set.
   */
  bool has_processing_warnings() const {
    return Storage().isMember("processingWarnings");
  }

  /**
   * Clears the '<code>processingWarnings</code>' attribute.
   */
  void clear_processing_warnings() {
    MutableStorage()->removeMember("processingWarnings");
  }


  /**
   * Get a reference to the value of the '<code>processingWarnings</code>'
   * attribute.
   */
  const client::JsonCppArray<string > get_processing_warnings() const {
     const Json::Value& storage = Storage("processingWarnings");
    return client::JsonValueToCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the
   * '<code>processingWarnings</code>' property.
   *
   * A list of reasons why YouTube may have difficulty transcoding the uploaded
   * video or that might result in an erroneous transcoding. These warnings are
   * generated before YouTube actually processes the uploaded video file. In
   * addition, they identify issues that are unlikely to cause the video
   * processing to fail but that might cause problems such as sync issues, video
   * artifacts, or a missing audio track.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<string > mutable_processingWarnings() {
    Json::Value* storage = MutableStorage("processingWarnings");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Determine if the '<code>tagSuggestions</code>' attribute was set.
   *
   * @return true if the '<code>tagSuggestions</code>' attribute was set.
   */
  bool has_tag_suggestions() const {
    return Storage().isMember("tagSuggestions");
  }

  /**
   * Clears the '<code>tagSuggestions</code>' attribute.
   */
  void clear_tag_suggestions() {
    MutableStorage()->removeMember("tagSuggestions");
  }


  /**
   * Get a reference to the value of the '<code>tagSuggestions</code>'
   * attribute.
   */
  const client::JsonCppArray<VideoSuggestionsTagSuggestion > get_tag_suggestions() const {
     const Json::Value& storage = Storage("tagSuggestions");
    return client::JsonValueToCppValueHelper<client::JsonCppArray<VideoSuggestionsTagSuggestion > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>tagSuggestions</code>'
   * property.
   *
   * A list of keyword tags that could be added to the video's metadata to
   * increase the likelihood that users will locate your video when searching or
   * browsing on YouTube.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<VideoSuggestionsTagSuggestion > mutable_tagSuggestions() {
    Json::Value* storage = MutableStorage("tagSuggestions");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<VideoSuggestionsTagSuggestion > >(storage);
  }

 private:
  void operator=(const VideoSuggestions&);
};  // VideoSuggestions
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_VIDEO_SUGGESTIONS_H_
