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

#include <tencentcloud/intlpartnersmgt/v20220928/model/QuerySubAgentsDetailV2Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

QuerySubAgentsDetailV2Request::QuerySubAgentsDetailV2Request() :
    m_pageHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_filterTypeHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_orderHasBeenSet(false)
{
}

string QuerySubAgentsDetailV2Request::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_filterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterType.c_str(), allocator).Move(), allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filter.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t QuerySubAgentsDetailV2Request::GetPage() const
{
    return m_page;
}

void QuerySubAgentsDetailV2Request::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool QuerySubAgentsDetailV2Request::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

int64_t QuerySubAgentsDetailV2Request::GetPageSize() const
{
    return m_pageSize;
}

void QuerySubAgentsDetailV2Request::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool QuerySubAgentsDetailV2Request::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string QuerySubAgentsDetailV2Request::GetFilterType() const
{
    return m_filterType;
}

void QuerySubAgentsDetailV2Request::SetFilterType(const string& _filterType)
{
    m_filterType = _filterType;
    m_filterTypeHasBeenSet = true;
}

bool QuerySubAgentsDetailV2Request::FilterTypeHasBeenSet() const
{
    return m_filterTypeHasBeenSet;
}

string QuerySubAgentsDetailV2Request::GetFilter() const
{
    return m_filter;
}

void QuerySubAgentsDetailV2Request::SetFilter(const string& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool QuerySubAgentsDetailV2Request::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

string QuerySubAgentsDetailV2Request::GetOrder() const
{
    return m_order;
}

void QuerySubAgentsDetailV2Request::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool QuerySubAgentsDetailV2Request::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}


