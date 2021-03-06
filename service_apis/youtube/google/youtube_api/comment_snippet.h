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
#ifndef  GOOGLE_YOUTUBE_API_COMMENT_SNIPPET_H_
#define  GOOGLE_YOUTUBE_API_COMMENT_SNIPPET_H_

#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/client/util/date_time.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/channel_id.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * Basic details about a comment, such as its author and text.
 *
 * @ingroup DataObject
 */
class CommentSnippet : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static CommentSnippet* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit CommentSnippet(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit CommentSnippet(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~CommentSnippet();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::CommentSnippet</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::CommentSnippet");
  }

  /**
   * Determine if the '<code>authorChannelId</code>' attribute was set.
   *
   * @return true if the '<code>authorChannelId</code>' attribute was set.
   */
  bool has_author_channel_id() const {
    return Storage().isMember("authorChannelId");
  }

  /**
   * Clears the '<code>authorChannelId</code>' attribute.
   */
  void clear_author_channel_id() {
    MutableStorage()->removeMember("authorChannelId");
  }


  /**
   * Get a reference to the value of the '<code>authorChannelId</code>'
   * attribute.
   */
  const ChannelId get_author_channel_id() const;

  /**
   * Gets a reference to a mutable value of the '<code>authorChannelId</code>'
   * property.
   *
   * The id of the author's YouTube channel, if any.
   *
   * @return The result can be modified to change the attribute value.
   */
  ChannelId mutable_authorChannelId();

  /**
   * Determine if the '<code>authorChannelUrl</code>' attribute was set.
   *
   * @return true if the '<code>authorChannelUrl</code>' attribute was set.
   */
  bool has_author_channel_url() const {
    return Storage().isMember("authorChannelUrl");
  }

  /**
   * Clears the '<code>authorChannelUrl</code>' attribute.
   */
  void clear_author_channel_url() {
    MutableStorage()->removeMember("authorChannelUrl");
  }


  /**
   * Get the value of the '<code>authorChannelUrl</code>' attribute.
   */
  const StringPiece get_author_channel_url() const {
    const Json::Value& v = Storage("authorChannelUrl");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>authorChannelUrl</code>' attribute.
   *
   * Link to the author's YouTube channel, if any.
   *
   * @param[in] value The new value.
   */
  void set_author_channel_url(const StringPiece& value) {
    *MutableStorage("authorChannelUrl") = value.data();
  }

  /**
   * Determine if the '<code>authorDisplayName</code>' attribute was set.
   *
   * @return true if the '<code>authorDisplayName</code>' attribute was set.
   */
  bool has_author_display_name() const {
    return Storage().isMember("authorDisplayName");
  }

  /**
   * Clears the '<code>authorDisplayName</code>' attribute.
   */
  void clear_author_display_name() {
    MutableStorage()->removeMember("authorDisplayName");
  }


  /**
   * Get the value of the '<code>authorDisplayName</code>' attribute.
   */
  const StringPiece get_author_display_name() const {
    const Json::Value& v = Storage("authorDisplayName");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>authorDisplayName</code>' attribute.
   *
   * The name of the user who posted the comment.
   *
   * @param[in] value The new value.
   */
  void set_author_display_name(const StringPiece& value) {
    *MutableStorage("authorDisplayName") = value.data();
  }

  /**
   * Determine if the '<code>authorGoogleplusProfileUrl</code>' attribute was
   * set.
   *
   * @return true if the '<code>authorGoogleplusProfileUrl</code>' attribute was
   * set.
   */
  bool has_author_googleplus_profile_url() const {
    return Storage().isMember("authorGoogleplusProfileUrl");
  }

  /**
   * Clears the '<code>authorGoogleplusProfileUrl</code>' attribute.
   */
  void clear_author_googleplus_profile_url() {
    MutableStorage()->removeMember("authorGoogleplusProfileUrl");
  }


  /**
   * Get the value of the '<code>authorGoogleplusProfileUrl</code>' attribute.
   */
  const StringPiece get_author_googleplus_profile_url() const {
    const Json::Value& v = Storage("authorGoogleplusProfileUrl");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>authorGoogleplusProfileUrl</code>' attribute.
   *
   * Link to the author's Google+ profile, if any.
   *
   * @param[in] value The new value.
   */
  void set_author_googleplus_profile_url(const StringPiece& value) {
    *MutableStorage("authorGoogleplusProfileUrl") = value.data();
  }

  /**
   * Determine if the '<code>authorProfileImageUrl</code>' attribute was set.
   *
   * @return true if the '<code>authorProfileImageUrl</code>' attribute was set.
   */
  bool has_author_profile_image_url() const {
    return Storage().isMember("authorProfileImageUrl");
  }

  /**
   * Clears the '<code>authorProfileImageUrl</code>' attribute.
   */
  void clear_author_profile_image_url() {
    MutableStorage()->removeMember("authorProfileImageUrl");
  }


  /**
   * Get the value of the '<code>authorProfileImageUrl</code>' attribute.
   */
  const StringPiece get_author_profile_image_url() const {
    const Json::Value& v = Storage("authorProfileImageUrl");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>authorProfileImageUrl</code>' attribute.
   *
   * The URL for the avatar of the user who posted the comment.
   *
   * @param[in] value The new value.
   */
  void set_author_profile_image_url(const StringPiece& value) {
    *MutableStorage("authorProfileImageUrl") = value.data();
  }

  /**
   * Determine if the '<code>canRate</code>' attribute was set.
   *
   * @return true if the '<code>canRate</code>' attribute was set.
   */
  bool has_can_rate() const {
    return Storage().isMember("canRate");
  }

  /**
   * Clears the '<code>canRate</code>' attribute.
   */
  void clear_can_rate() {
    MutableStorage()->removeMember("canRate");
  }


  /**
   * Get the value of the '<code>canRate</code>' attribute.
   */
  bool get_can_rate() const {
    const Json::Value& storage = Storage("canRate");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>canRate</code>' attribute.
   *
   * Whether the current viewer can rate this comment.
   *
   * @param[in] value The new value.
   */
  void set_can_rate(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("canRate"));
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
   * The id of the corresponding YouTube channel. In case of a channel comment
   * this is the channel the comment refers to. In case of a video comment it's
   * the video's channel.
   *
   * @param[in] value The new value.
   */
  void set_channel_id(const StringPiece& value) {
    *MutableStorage("channelId") = value.data();
  }

  /**
   * Determine if the '<code>likeCount</code>' attribute was set.
   *
   * @return true if the '<code>likeCount</code>' attribute was set.
   */
  bool has_like_count() const {
    return Storage().isMember("likeCount");
  }

  /**
   * Clears the '<code>likeCount</code>' attribute.
   */
  void clear_like_count() {
    MutableStorage()->removeMember("likeCount");
  }


  /**
   * Get the value of the '<code>likeCount</code>' attribute.
   */
  uint32 get_like_count() const {
    const Json::Value& storage = Storage("likeCount");
    return client::JsonValueToCppValueHelper<uint32 >(storage);
  }

  /**
   * Change the '<code>likeCount</code>' attribute.
   *
   * The total number of likes this comment has received.
   *
   * @param[in] value The new value.
   */
  void set_like_count(uint32 value) {
    client::SetJsonValueFromCppValueHelper<uint32 >(
      value, MutableStorage("likeCount"));
  }

  /**
   * Determine if the '<code>moderationStatus</code>' attribute was set.
   *
   * @return true if the '<code>moderationStatus</code>' attribute was set.
   */
  bool has_moderation_status() const {
    return Storage().isMember("moderationStatus");
  }

  /**
   * Clears the '<code>moderationStatus</code>' attribute.
   */
  void clear_moderation_status() {
    MutableStorage()->removeMember("moderationStatus");
  }


  /**
   * Get the value of the '<code>moderationStatus</code>' attribute.
   */
  const StringPiece get_moderation_status() const {
    const Json::Value& v = Storage("moderationStatus");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>moderationStatus</code>' attribute.
   *
   * The comment's moderation status. Will not be set if the comments were
   * requested through the id filter.
   *
   * @param[in] value The new value.
   */
  void set_moderation_status(const StringPiece& value) {
    *MutableStorage("moderationStatus") = value.data();
  }

  /**
   * Determine if the '<code>parentId</code>' attribute was set.
   *
   * @return true if the '<code>parentId</code>' attribute was set.
   */
  bool has_parent_id() const {
    return Storage().isMember("parentId");
  }

  /**
   * Clears the '<code>parentId</code>' attribute.
   */
  void clear_parent_id() {
    MutableStorage()->removeMember("parentId");
  }


  /**
   * Get the value of the '<code>parentId</code>' attribute.
   */
  const StringPiece get_parent_id() const {
    const Json::Value& v = Storage("parentId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>parentId</code>' attribute.
   *
   * The unique id of the parent comment, only set for replies.
   *
   * @param[in] value The new value.
   */
  void set_parent_id(const StringPiece& value) {
    *MutableStorage("parentId") = value.data();
  }

  /**
   * Determine if the '<code>publishedAt</code>' attribute was set.
   *
   * @return true if the '<code>publishedAt</code>' attribute was set.
   */
  bool has_published_at() const {
    return Storage().isMember("publishedAt");
  }

  /**
   * Clears the '<code>publishedAt</code>' attribute.
   */
  void clear_published_at() {
    MutableStorage()->removeMember("publishedAt");
  }


  /**
   * Get the value of the '<code>publishedAt</code>' attribute.
   */
  client::DateTime get_published_at() const {
    const Json::Value& storage = Storage("publishedAt");
    return client::JsonValueToCppValueHelper<client::DateTime >(storage);
  }

  /**
   * Change the '<code>publishedAt</code>' attribute.
   *
   * The date and time when the comment was orignally published. The value is
   * specified in ISO 8601 (YYYY-MM-DDThh:mm:ss.sZ) format.
   *
   * @param[in] value The new value.
   */
  void set_published_at(client::DateTime value) {
    client::SetJsonValueFromCppValueHelper<client::DateTime >(
      value, MutableStorage("publishedAt"));
  }

  /**
   * Determine if the '<code>textDisplay</code>' attribute was set.
   *
   * @return true if the '<code>textDisplay</code>' attribute was set.
   */
  bool has_text_display() const {
    return Storage().isMember("textDisplay");
  }

  /**
   * Clears the '<code>textDisplay</code>' attribute.
   */
  void clear_text_display() {
    MutableStorage()->removeMember("textDisplay");
  }


  /**
   * Get the value of the '<code>textDisplay</code>' attribute.
   */
  const StringPiece get_text_display() const {
    const Json::Value& v = Storage("textDisplay");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>textDisplay</code>' attribute.
   *
   * The comment's text. The format is either plain text or HTML dependent on
   * what has been requested. Even the plain text representation may differ from
   * the text originally posted in that it may replace video links with video
   * titles etc.
   *
   * @param[in] value The new value.
   */
  void set_text_display(const StringPiece& value) {
    *MutableStorage("textDisplay") = value.data();
  }

  /**
   * Determine if the '<code>textOriginal</code>' attribute was set.
   *
   * @return true if the '<code>textOriginal</code>' attribute was set.
   */
  bool has_text_original() const {
    return Storage().isMember("textOriginal");
  }

  /**
   * Clears the '<code>textOriginal</code>' attribute.
   */
  void clear_text_original() {
    MutableStorage()->removeMember("textOriginal");
  }


  /**
   * Get the value of the '<code>textOriginal</code>' attribute.
   */
  const StringPiece get_text_original() const {
    const Json::Value& v = Storage("textOriginal");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>textOriginal</code>' attribute.
   *
   * The comment's original raw text as initially posted or last updated. The
   * original text will only be returned if it is accessible to the viewer,
   * which is only guaranteed if the viewer is the comment's author.
   *
   * @param[in] value The new value.
   */
  void set_text_original(const StringPiece& value) {
    *MutableStorage("textOriginal") = value.data();
  }

  /**
   * Determine if the '<code>updatedAt</code>' attribute was set.
   *
   * @return true if the '<code>updatedAt</code>' attribute was set.
   */
  bool has_updated_at() const {
    return Storage().isMember("updatedAt");
  }

  /**
   * Clears the '<code>updatedAt</code>' attribute.
   */
  void clear_updated_at() {
    MutableStorage()->removeMember("updatedAt");
  }


  /**
   * Get the value of the '<code>updatedAt</code>' attribute.
   */
  client::DateTime get_updated_at() const {
    const Json::Value& storage = Storage("updatedAt");
    return client::JsonValueToCppValueHelper<client::DateTime >(storage);
  }

  /**
   * Change the '<code>updatedAt</code>' attribute.
   *
   * The date and time when was last updated . The value is specified in ISO
   * 8601 (YYYY-MM-DDThh:mm:ss.sZ) format.
   *
   * @param[in] value The new value.
   */
  void set_updated_at(client::DateTime value) {
    client::SetJsonValueFromCppValueHelper<client::DateTime >(
      value, MutableStorage("updatedAt"));
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
   * The ID of the video the comment refers to, if any.
   *
   * @param[in] value The new value.
   */
  void set_video_id(const StringPiece& value) {
    *MutableStorage("videoId") = value.data();
  }

  /**
   * Determine if the '<code>viewerRating</code>' attribute was set.
   *
   * @return true if the '<code>viewerRating</code>' attribute was set.
   */
  bool has_viewer_rating() const {
    return Storage().isMember("viewerRating");
  }

  /**
   * Clears the '<code>viewerRating</code>' attribute.
   */
  void clear_viewer_rating() {
    MutableStorage()->removeMember("viewerRating");
  }


  /**
   * Get the value of the '<code>viewerRating</code>' attribute.
   */
  const StringPiece get_viewer_rating() const {
    const Json::Value& v = Storage("viewerRating");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>viewerRating</code>' attribute.
   *
   * The rating the viewer has given to this comment. For the time being this
   * will never return RATE_TYPE_DISLIKE and instead return RATE_TYPE_NONE. This
   * may change in the future.
   *
   * @param[in] value The new value.
   */
  void set_viewer_rating(const StringPiece& value) {
    *MutableStorage("viewerRating") = value.data();
  }

 private:
  void operator=(const CommentSnippet&);
};  // CommentSnippet
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_COMMENT_SNIPPET_H_
