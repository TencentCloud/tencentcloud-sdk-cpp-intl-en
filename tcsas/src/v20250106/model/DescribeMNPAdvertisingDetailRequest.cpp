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

#include <tencentcloud/tcsas/v20250106/model/DescribeMNPAdvertisingDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeMNPAdvertisingDetailRequest::DescribeMNPAdvertisingDetailRequest() :
    m_timeBeginHasBeenSet(false),
    m_mNPIdHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_timeEndHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_adUnitTypeHasBeenSet(false)
{
}

string DescribeMNPAdvertisingDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_timeBeginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeBegin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeBegin.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mNPId.c_str(), allocator).Move(), allocator);
    }

    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
    }

    if (m_timeEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeEnd.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_platform, allocator);
    }

    if (m_adUnitTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdUnitType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_adUnitType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeMNPAdvertisingDetailRequest::GetTimeBegin() const
{
    return m_timeBegin;
}

void DescribeMNPAdvertisingDetailRequest::SetTimeBegin(const string& _timeBegin)
{
    m_timeBegin = _timeBegin;
    m_timeBeginHasBeenSet = true;
}

bool DescribeMNPAdvertisingDetailRequest::TimeBeginHasBeenSet() const
{
    return m_timeBeginHasBeenSet;
}

string DescribeMNPAdvertisingDetailRequest::GetMNPId() const
{
    return m_mNPId;
}

void DescribeMNPAdvertisingDetailRequest::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool DescribeMNPAdvertisingDetailRequest::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}

string DescribeMNPAdvertisingDetailRequest::GetPlatformId() const
{
    return m_platformId;
}

void DescribeMNPAdvertisingDetailRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool DescribeMNPAdvertisingDetailRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

string DescribeMNPAdvertisingDetailRequest::GetTimeEnd() const
{
    return m_timeEnd;
}

void DescribeMNPAdvertisingDetailRequest::SetTimeEnd(const string& _timeEnd)
{
    m_timeEnd = _timeEnd;
    m_timeEndHasBeenSet = true;
}

bool DescribeMNPAdvertisingDetailRequest::TimeEndHasBeenSet() const
{
    return m_timeEndHasBeenSet;
}

int64_t DescribeMNPAdvertisingDetailRequest::GetPlatform() const
{
    return m_platform;
}

void DescribeMNPAdvertisingDetailRequest::SetPlatform(const int64_t& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool DescribeMNPAdvertisingDetailRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string DescribeMNPAdvertisingDetailRequest::GetAdUnitType() const
{
    return m_adUnitType;
}

void DescribeMNPAdvertisingDetailRequest::SetAdUnitType(const string& _adUnitType)
{
    m_adUnitType = _adUnitType;
    m_adUnitTypeHasBeenSet = true;
}

bool DescribeMNPAdvertisingDetailRequest::AdUnitTypeHasBeenSet() const
{
    return m_adUnitTypeHasBeenSet;
}


