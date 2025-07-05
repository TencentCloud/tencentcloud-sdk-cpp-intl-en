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

#include <tencentcloud/tcsas/v20250106/model/DescribeApplicationSensitiveAPIListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeApplicationSensitiveAPIListRequest::DescribeApplicationSensitiveAPIListRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_teamIdHasBeenSet(false)
{
}

string DescribeApplicationSensitiveAPIListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_teamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_teamId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeApplicationSensitiveAPIListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeApplicationSensitiveAPIListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeApplicationSensitiveAPIListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeApplicationSensitiveAPIListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeApplicationSensitiveAPIListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeApplicationSensitiveAPIListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeApplicationSensitiveAPIListRequest::GetPlatformId() const
{
    return m_platformId;
}

void DescribeApplicationSensitiveAPIListRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool DescribeApplicationSensitiveAPIListRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

string DescribeApplicationSensitiveAPIListRequest::GetApplicationId() const
{
    return m_applicationId;
}

void DescribeApplicationSensitiveAPIListRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool DescribeApplicationSensitiveAPIListRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string DescribeApplicationSensitiveAPIListRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeApplicationSensitiveAPIListRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeApplicationSensitiveAPIListRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string DescribeApplicationSensitiveAPIListRequest::GetTeamId() const
{
    return m_teamId;
}

void DescribeApplicationSensitiveAPIListRequest::SetTeamId(const string& _teamId)
{
    m_teamId = _teamId;
    m_teamIdHasBeenSet = true;
}

bool DescribeApplicationSensitiveAPIListRequest::TeamIdHasBeenSet() const
{
    return m_teamIdHasBeenSet;
}


