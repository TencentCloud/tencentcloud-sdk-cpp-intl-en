/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/tcmpp/v20240801/model/DescribeSimpleApplicationInfoListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

DescribeSimpleApplicationInfoListRequest::DescribeSimpleApplicationInfoListRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_loadAssistantAppHasBeenSet(false),
    m_mNPIdHasBeenSet(false)
{
}

string DescribeSimpleApplicationInfoListRequest::ToJsonString() const
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

    if (m_loadAssistantAppHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadAssistantApp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_loadAssistantApp, allocator);
    }

    if (m_mNPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mNPId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeSimpleApplicationInfoListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeSimpleApplicationInfoListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeSimpleApplicationInfoListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeSimpleApplicationInfoListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeSimpleApplicationInfoListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeSimpleApplicationInfoListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeSimpleApplicationInfoListRequest::GetPlatformId() const
{
    return m_platformId;
}

void DescribeSimpleApplicationInfoListRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool DescribeSimpleApplicationInfoListRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

string DescribeSimpleApplicationInfoListRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeSimpleApplicationInfoListRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeSimpleApplicationInfoListRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

bool DescribeSimpleApplicationInfoListRequest::GetLoadAssistantApp() const
{
    return m_loadAssistantApp;
}

void DescribeSimpleApplicationInfoListRequest::SetLoadAssistantApp(const bool& _loadAssistantApp)
{
    m_loadAssistantApp = _loadAssistantApp;
    m_loadAssistantAppHasBeenSet = true;
}

bool DescribeSimpleApplicationInfoListRequest::LoadAssistantAppHasBeenSet() const
{
    return m_loadAssistantAppHasBeenSet;
}

string DescribeSimpleApplicationInfoListRequest::GetMNPId() const
{
    return m_mNPId;
}

void DescribeSimpleApplicationInfoListRequest::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool DescribeSimpleApplicationInfoListRequest::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}


