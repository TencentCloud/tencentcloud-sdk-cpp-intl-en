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

#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRegistryListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeAssetImageRegistryListRequest::DescribeAssetImageRegistryListRequest() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_byHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_onlyShowLatestHasBeenSet(false)
{
}

string DescribeAssetImageRegistryListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_byHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "By";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_by.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_onlyShowLatestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlyShowLatest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_onlyShowLatest, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeAssetImageRegistryListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAssetImageRegistryListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAssetImageRegistryListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeAssetImageRegistryListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAssetImageRegistryListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAssetImageRegistryListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

vector<AssetFilters> DescribeAssetImageRegistryListRequest::GetFilters() const
{
    return m_filters;
}

void DescribeAssetImageRegistryListRequest::SetFilters(const vector<AssetFilters>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeAssetImageRegistryListRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeAssetImageRegistryListRequest::GetBy() const
{
    return m_by;
}

void DescribeAssetImageRegistryListRequest::SetBy(const string& _by)
{
    m_by = _by;
    m_byHasBeenSet = true;
}

bool DescribeAssetImageRegistryListRequest::ByHasBeenSet() const
{
    return m_byHasBeenSet;
}

string DescribeAssetImageRegistryListRequest::GetOrder() const
{
    return m_order;
}

void DescribeAssetImageRegistryListRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeAssetImageRegistryListRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

bool DescribeAssetImageRegistryListRequest::GetOnlyShowLatest() const
{
    return m_onlyShowLatest;
}

void DescribeAssetImageRegistryListRequest::SetOnlyShowLatest(const bool& _onlyShowLatest)
{
    m_onlyShowLatest = _onlyShowLatest;
    m_onlyShowLatestHasBeenSet = true;
}

bool DescribeAssetImageRegistryListRequest::OnlyShowLatestHasBeenSet() const
{
    return m_onlyShowLatestHasBeenSet;
}


