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

#include <tencentcloud/tcsas/v20250106/model/DescribeApplicationListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeApplicationListRequest::DescribeApplicationListRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_teamIdHasBeenSet(false)
{
}

string DescribeApplicationListRequest::ToJsonString() const
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


int64_t DescribeApplicationListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeApplicationListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeApplicationListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeApplicationListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeApplicationListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeApplicationListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeApplicationListRequest::GetPlatformId() const
{
    return m_platformId;
}

void DescribeApplicationListRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool DescribeApplicationListRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

string DescribeApplicationListRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeApplicationListRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeApplicationListRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string DescribeApplicationListRequest::GetTeamId() const
{
    return m_teamId;
}

void DescribeApplicationListRequest::SetTeamId(const string& _teamId)
{
    m_teamId = _teamId;
    m_teamIdHasBeenSet = true;
}

bool DescribeApplicationListRequest::TeamIdHasBeenSet() const
{
    return m_teamIdHasBeenSet;
}


