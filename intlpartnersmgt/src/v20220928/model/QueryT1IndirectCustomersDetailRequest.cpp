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

#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryT1IndirectCustomersDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

QueryT1IndirectCustomersDetailRequest::QueryT1IndirectCustomersDetailRequest() :
    m_subAgentUinHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_pageSizeHasBeenSet(false)
{
}

string QueryT1IndirectCustomersDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subAgentUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAgentUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAgentUin, allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_page, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t QueryT1IndirectCustomersDetailRequest::GetSubAgentUin() const
{
    return m_subAgentUin;
}

void QueryT1IndirectCustomersDetailRequest::SetSubAgentUin(const int64_t& _subAgentUin)
{
    m_subAgentUin = _subAgentUin;
    m_subAgentUinHasBeenSet = true;
}

bool QueryT1IndirectCustomersDetailRequest::SubAgentUinHasBeenSet() const
{
    return m_subAgentUinHasBeenSet;
}

int64_t QueryT1IndirectCustomersDetailRequest::GetPage() const
{
    return m_page;
}

void QueryT1IndirectCustomersDetailRequest::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool QueryT1IndirectCustomersDetailRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

int64_t QueryT1IndirectCustomersDetailRequest::GetPageSize() const
{
    return m_pageSize;
}

void QueryT1IndirectCustomersDetailRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool QueryT1IndirectCustomersDetailRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}


