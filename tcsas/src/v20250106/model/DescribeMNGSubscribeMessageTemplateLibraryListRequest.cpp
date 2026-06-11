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

#include <tencentcloud/tcsas/v20250106/model/DescribeMNGSubscribeMessageTemplateLibraryListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeMNGSubscribeMessageTemplateLibraryListRequest::DescribeMNGSubscribeMessageTemplateLibraryListRequest() :
    m_platformIdHasBeenSet(false),
    m_mNPIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_queryTypeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_queryStrHasBeenSet(false)
{
}

string DescribeMNGSubscribeMessageTemplateLibraryListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mNPId.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_queryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryType, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_queryStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryStr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queryStr.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeMNGSubscribeMessageTemplateLibraryListRequest::GetPlatformId() const
{
    return m_platformId;
}

void DescribeMNGSubscribeMessageTemplateLibraryListRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool DescribeMNGSubscribeMessageTemplateLibraryListRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

string DescribeMNGSubscribeMessageTemplateLibraryListRequest::GetMNPId() const
{
    return m_mNPId;
}

void DescribeMNGSubscribeMessageTemplateLibraryListRequest::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool DescribeMNGSubscribeMessageTemplateLibraryListRequest::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}

int64_t DescribeMNGSubscribeMessageTemplateLibraryListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeMNGSubscribeMessageTemplateLibraryListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeMNGSubscribeMessageTemplateLibraryListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeMNGSubscribeMessageTemplateLibraryListRequest::GetQueryType() const
{
    return m_queryType;
}

void DescribeMNGSubscribeMessageTemplateLibraryListRequest::SetQueryType(const int64_t& _queryType)
{
    m_queryType = _queryType;
    m_queryTypeHasBeenSet = true;
}

bool DescribeMNGSubscribeMessageTemplateLibraryListRequest::QueryTypeHasBeenSet() const
{
    return m_queryTypeHasBeenSet;
}

int64_t DescribeMNGSubscribeMessageTemplateLibraryListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeMNGSubscribeMessageTemplateLibraryListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeMNGSubscribeMessageTemplateLibraryListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeMNGSubscribeMessageTemplateLibraryListRequest::GetQueryStr() const
{
    return m_queryStr;
}

void DescribeMNGSubscribeMessageTemplateLibraryListRequest::SetQueryStr(const string& _queryStr)
{
    m_queryStr = _queryStr;
    m_queryStrHasBeenSet = true;
}

bool DescribeMNGSubscribeMessageTemplateLibraryListRequest::QueryStrHasBeenSet() const
{
    return m_queryStrHasBeenSet;
}


