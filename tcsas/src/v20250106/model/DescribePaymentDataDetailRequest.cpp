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

#include <tencentcloud/tcsas/v20250106/model/DescribePaymentDataDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribePaymentDataDetailRequest::DescribePaymentDataDetailRequest() :
    m_timeBeginHasBeenSet(false),
    m_mNPIdsHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_timeEndHasBeenSet(false),
    m_platformHasBeenSet(false)
{
}

string DescribePaymentDataDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_timeBeginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeBegin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeBegin, allocator);
    }

    if (m_mNPIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_mNPIds.begin(); itr != m_mNPIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dataType, allocator);
    }

    if (m_timeEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeEnd, allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_platform, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribePaymentDataDetailRequest::GetTimeBegin() const
{
    return m_timeBegin;
}

void DescribePaymentDataDetailRequest::SetTimeBegin(const int64_t& _timeBegin)
{
    m_timeBegin = _timeBegin;
    m_timeBeginHasBeenSet = true;
}

bool DescribePaymentDataDetailRequest::TimeBeginHasBeenSet() const
{
    return m_timeBeginHasBeenSet;
}

vector<string> DescribePaymentDataDetailRequest::GetMNPIds() const
{
    return m_mNPIds;
}

void DescribePaymentDataDetailRequest::SetMNPIds(const vector<string>& _mNPIds)
{
    m_mNPIds = _mNPIds;
    m_mNPIdsHasBeenSet = true;
}

bool DescribePaymentDataDetailRequest::MNPIdsHasBeenSet() const
{
    return m_mNPIdsHasBeenSet;
}

string DescribePaymentDataDetailRequest::GetPlatformId() const
{
    return m_platformId;
}

void DescribePaymentDataDetailRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool DescribePaymentDataDetailRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

int64_t DescribePaymentDataDetailRequest::GetDataType() const
{
    return m_dataType;
}

void DescribePaymentDataDetailRequest::SetDataType(const int64_t& _dataType)
{
    m_dataType = _dataType;
    m_dataTypeHasBeenSet = true;
}

bool DescribePaymentDataDetailRequest::DataTypeHasBeenSet() const
{
    return m_dataTypeHasBeenSet;
}

int64_t DescribePaymentDataDetailRequest::GetTimeEnd() const
{
    return m_timeEnd;
}

void DescribePaymentDataDetailRequest::SetTimeEnd(const int64_t& _timeEnd)
{
    m_timeEnd = _timeEnd;
    m_timeEndHasBeenSet = true;
}

bool DescribePaymentDataDetailRequest::TimeEndHasBeenSet() const
{
    return m_timeEndHasBeenSet;
}

int64_t DescribePaymentDataDetailRequest::GetPlatform() const
{
    return m_platform;
}

void DescribePaymentDataDetailRequest::SetPlatform(const int64_t& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool DescribePaymentDataDetailRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}


