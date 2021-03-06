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
//   on: 2015-06-03, 10:03:42 UTC
//   C++ generator version: 0.1.3

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Calendar API (calendar/v3)
// Generated from:
//   Version: v3
//   Revision: 127
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.3
#ifndef  GOOGLE_CALENDAR_API_FREE_BUSY_REQUEST_H_
#define  GOOGLE_CALENDAR_API_FREE_BUSY_REQUEST_H_

#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/client/util/date_time.h"
#include "googleapis/strings/stringpiece.h"

#include "google/calendar_api/free_busy_request_item.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_calendar_api {
using namespace googleapis;

/**
 * No description provided.
 *
 * @ingroup DataObject
 */
class FreeBusyRequest : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static FreeBusyRequest* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit FreeBusyRequest(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit FreeBusyRequest(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~FreeBusyRequest();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_calendar_api::FreeBusyRequest</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_calendar_api::FreeBusyRequest");
  }

  /**
   * Determine if the '<code>calendarExpansionMax</code>' attribute was set.
   *
   * @return true if the '<code>calendarExpansionMax</code>' attribute was set.
   */
  bool has_calendar_expansion_max() const {
    return Storage().isMember("calendarExpansionMax");
  }

  /**
   * Clears the '<code>calendarExpansionMax</code>' attribute.
   */
  void clear_calendar_expansion_max() {
    MutableStorage()->removeMember("calendarExpansionMax");
  }


  /**
   * Get the value of the '<code>calendarExpansionMax</code>' attribute.
   */
  int32 get_calendar_expansion_max() const {
    const Json::Value& storage = Storage("calendarExpansionMax");
    return client::JsonValueToCppValueHelper<int32 >(storage);
  }

  /**
   * Change the '<code>calendarExpansionMax</code>' attribute.
   *
   * Maximal number of calendars for which FreeBusy information is to be
   * provided. Optional.
   *
   * @param[in] value The new value.
   */
  void set_calendar_expansion_max(int32 value) {
    client::SetJsonValueFromCppValueHelper<int32 >(
      value, MutableStorage("calendarExpansionMax"));
  }

  /**
   * Determine if the '<code>groupExpansionMax</code>' attribute was set.
   *
   * @return true if the '<code>groupExpansionMax</code>' attribute was set.
   */
  bool has_group_expansion_max() const {
    return Storage().isMember("groupExpansionMax");
  }

  /**
   * Clears the '<code>groupExpansionMax</code>' attribute.
   */
  void clear_group_expansion_max() {
    MutableStorage()->removeMember("groupExpansionMax");
  }


  /**
   * Get the value of the '<code>groupExpansionMax</code>' attribute.
   */
  int32 get_group_expansion_max() const {
    const Json::Value& storage = Storage("groupExpansionMax");
    return client::JsonValueToCppValueHelper<int32 >(storage);
  }

  /**
   * Change the '<code>groupExpansionMax</code>' attribute.
   *
   * Maximal number of calendar identifiers to be provided for a single group.
   * Optional. An error will be returned for a group with more members than this
   * value.
   *
   * @param[in] value The new value.
   */
  void set_group_expansion_max(int32 value) {
    client::SetJsonValueFromCppValueHelper<int32 >(
      value, MutableStorage("groupExpansionMax"));
  }

  /**
   * Determine if the '<code>items</code>' attribute was set.
   *
   * @return true if the '<code>items</code>' attribute was set.
   */
  bool has_items() const {
    return Storage().isMember("items");
  }

  /**
   * Clears the '<code>items</code>' attribute.
   */
  void clear_items() {
    MutableStorage()->removeMember("items");
  }


  /**
   * Get a reference to the value of the '<code>items</code>' attribute.
   */
  const client::JsonCppArray<FreeBusyRequestItem > get_items() const;

  /**
   * Gets a reference to a mutable value of the '<code>items</code>' property.
   *
   * List of calendars and/or groups to query.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<FreeBusyRequestItem > mutable_items();

  /**
   * Determine if the '<code>timeMax</code>' attribute was set.
   *
   * @return true if the '<code>timeMax</code>' attribute was set.
   */
  bool has_time_max() const {
    return Storage().isMember("timeMax");
  }

  /**
   * Clears the '<code>timeMax</code>' attribute.
   */
  void clear_time_max() {
    MutableStorage()->removeMember("timeMax");
  }


  /**
   * Get the value of the '<code>timeMax</code>' attribute.
   */
  client::DateTime get_time_max() const {
    const Json::Value& storage = Storage("timeMax");
    return client::JsonValueToCppValueHelper<client::DateTime >(storage);
  }

  /**
   * Change the '<code>timeMax</code>' attribute.
   *
   * The end of the interval for the query.
   *
   * @param[in] value The new value.
   */
  void set_time_max(client::DateTime value) {
    client::SetJsonValueFromCppValueHelper<client::DateTime >(
      value, MutableStorage("timeMax"));
  }

  /**
   * Determine if the '<code>timeMin</code>' attribute was set.
   *
   * @return true if the '<code>timeMin</code>' attribute was set.
   */
  bool has_time_min() const {
    return Storage().isMember("timeMin");
  }

  /**
   * Clears the '<code>timeMin</code>' attribute.
   */
  void clear_time_min() {
    MutableStorage()->removeMember("timeMin");
  }


  /**
   * Get the value of the '<code>timeMin</code>' attribute.
   */
  client::DateTime get_time_min() const {
    const Json::Value& storage = Storage("timeMin");
    return client::JsonValueToCppValueHelper<client::DateTime >(storage);
  }

  /**
   * Change the '<code>timeMin</code>' attribute.
   *
   * The start of the interval for the query.
   *
   * @param[in] value The new value.
   */
  void set_time_min(client::DateTime value) {
    client::SetJsonValueFromCppValueHelper<client::DateTime >(
      value, MutableStorage("timeMin"));
  }

  /**
   * Determine if the '<code>timeZone</code>' attribute was set.
   *
   * @return true if the '<code>timeZone</code>' attribute was set.
   */
  bool has_time_zone() const {
    return Storage().isMember("timeZone");
  }

  /**
   * Clears the '<code>timeZone</code>' attribute.
   */
  void clear_time_zone() {
    MutableStorage()->removeMember("timeZone");
  }


  /**
   * Get the value of the '<code>timeZone</code>' attribute.
   */
  const StringPiece get_time_zone() const {
    const Json::Value& v = Storage("timeZone");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>timeZone</code>' attribute.
   *
   * Time zone used in the response. Optional. The default is UTC.
   *
   * @param[in] value The new value.
   */
  void set_time_zone(const StringPiece& value) {
    *MutableStorage("timeZone") = value.data();
  }

 private:
  void operator=(const FreeBusyRequest&);
};  // FreeBusyRequest
}  // namespace google_calendar_api
#endif  // GOOGLE_CALENDAR_API_FREE_BUSY_REQUEST_H_
