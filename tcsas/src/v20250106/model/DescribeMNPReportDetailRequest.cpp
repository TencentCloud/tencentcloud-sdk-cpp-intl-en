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

#include <tencentcloud/tcsas/v20250106/model/DescribeMNPReportDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeMNPReportDetailRequest::DescribeMNPReportDetailRequest() :
    m_timeBeginHasBeenSet(false),
    m_mNPIdHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_timeEndHasBeenSet(false)
{
}

string DescribeMNPReportDetailRequest::ToJsonString() const
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

    if (m_mNPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mNPId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dataType, allocator);
    }

    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_platform, allocator);
    }

    if (m_timeEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeEnd, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeMNPReportDetailRequest::GetTimeBegin() const
{
    return m_timeBegin;
}

void DescribeMNPReportDetailRequest::SetTimeBegin(const int64_t& _timeBegin)
{
    m_timeBegin = _timeBegin;
    m_timeBeginHasBeenSet = true;
}

bool DescribeMNPReportDetailRequest::TimeBeginHasBeenSet() const
{
    return m_timeBeginHasBeenSet;
}

string DescribeMNPReportDetailRequest::GetMNPId() const
{
    return m_mNPId;
}

void DescribeMNPReportDetailRequest::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool DescribeMNPReportDetailRequest::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}

int64_t DescribeMNPReportDetailRequest::GetDataType() const
{
    return m_dataType;
}

void DescribeMNPReportDetailRequest::SetDataType(const int64_t& _dataType)
{
    m_dataType = _dataType;
    m_dataTypeHasBeenSet = true;
}

bool DescribeMNPReportDetailRequest::DataTypeHasBeenSet() const
{
    return m_dataTypeHasBeenSet;
}

string DescribeMNPReportDetailRequest::GetPlatformId() const
{
    return m_platformId;
}

void DescribeMNPReportDetailRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool DescribeMNPReportDetailRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

int64_t DescribeMNPReportDetailRequest::GetPlatform() const
{
    return m_platform;
}

void DescribeMNPReportDetailRequest::SetPlatform(const int64_t& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool DescribeMNPReportDetailRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

int64_t DescribeMNPReportDetailRequest::GetTimeEnd() const
{
    return m_timeEnd;
}

void DescribeMNPReportDetailRequest::SetTimeEnd(const int64_t& _timeEnd)
{
    m_timeEnd = _timeEnd;
    m_timeEndHasBeenSet = true;
}

bool DescribeMNPReportDetailRequest::TimeEndHasBeenSet() const
{
    return m_timeEndHasBeenSet;
}


