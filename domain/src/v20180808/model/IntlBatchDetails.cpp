/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/domain/v20180808/model/IntlBatchDetails.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

IntlBatchDetails::IntlBatchDetails() :
    m_idHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_reasonZhHasBeenSet(false)
{
}

CoreInternalOutcome IntlBatchDetails::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntlBatchDetails.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlBatchDetails.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlBatchDetails.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("ReasonZh") && !value["ReasonZh"].IsNull())
    {
        if (!value["ReasonZh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlBatchDetails.ReasonZh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reasonZh = string(value["ReasonZh"].GetString());
        m_reasonZhHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntlBatchDetails::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonZhHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReasonZh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reasonZh.c_str(), allocator).Move(), allocator);
    }

}


int64_t IntlBatchDetails::GetId() const
{
    return m_id;
}

void IntlBatchDetails::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool IntlBatchDetails::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string IntlBatchDetails::GetStatus() const
{
    return m_status;
}

void IntlBatchDetails::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool IntlBatchDetails::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string IntlBatchDetails::GetReason() const
{
    return m_reason;
}

void IntlBatchDetails::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool IntlBatchDetails::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string IntlBatchDetails::GetReasonZh() const
{
    return m_reasonZh;
}

void IntlBatchDetails::SetReasonZh(const string& _reasonZh)
{
    m_reasonZh = _reasonZh;
    m_reasonZhHasBeenSet = true;
}

bool IntlBatchDetails::ReasonZhHasBeenSet() const
{
    return m_reasonZhHasBeenSet;
}

