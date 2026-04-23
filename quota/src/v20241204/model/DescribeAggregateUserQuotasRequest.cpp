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

#include <tencentcloud/quota/v20241204/model/DescribeAggregateUserQuotasRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Quota::V20241204::Model;
using namespace std;

DescribeAggregateUserQuotasRequest::DescribeAggregateUserQuotasRequest() :
    m_memberUinsHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_quotaDimensionsHasBeenSet(false)
{
}

string DescribeAggregateUserQuotasRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_memberUinsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberUins";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberUins.begin(); itr != m_memberUins.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

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

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filter.begin(); itr != m_filter.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sort.begin(); itr != m_sort.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_productId, allocator);
    }

    if (m_quotaDimensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaDimensions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_quotaDimensions.begin(); itr != m_quotaDimensions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<int64_t> DescribeAggregateUserQuotasRequest::GetMemberUins() const
{
    return m_memberUins;
}

void DescribeAggregateUserQuotasRequest::SetMemberUins(const vector<int64_t>& _memberUins)
{
    m_memberUins = _memberUins;
    m_memberUinsHasBeenSet = true;
}

bool DescribeAggregateUserQuotasRequest::MemberUinsHasBeenSet() const
{
    return m_memberUinsHasBeenSet;
}

int64_t DescribeAggregateUserQuotasRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAggregateUserQuotasRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAggregateUserQuotasRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeAggregateUserQuotasRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAggregateUserQuotasRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAggregateUserQuotasRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

vector<Filter> DescribeAggregateUserQuotasRequest::GetFilter() const
{
    return m_filter;
}

void DescribeAggregateUserQuotasRequest::SetFilter(const vector<Filter>& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool DescribeAggregateUserQuotasRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

vector<Sort> DescribeAggregateUserQuotasRequest::GetSort() const
{
    return m_sort;
}

void DescribeAggregateUserQuotasRequest::SetSort(const vector<Sort>& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribeAggregateUserQuotasRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

int64_t DescribeAggregateUserQuotasRequest::GetProductId() const
{
    return m_productId;
}

void DescribeAggregateUserQuotasRequest::SetProductId(const int64_t& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DescribeAggregateUserQuotasRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

vector<QuotaDimension> DescribeAggregateUserQuotasRequest::GetQuotaDimensions() const
{
    return m_quotaDimensions;
}

void DescribeAggregateUserQuotasRequest::SetQuotaDimensions(const vector<QuotaDimension>& _quotaDimensions)
{
    m_quotaDimensions = _quotaDimensions;
    m_quotaDimensionsHasBeenSet = true;
}

bool DescribeAggregateUserQuotasRequest::QuotaDimensionsHasBeenSet() const
{
    return m_quotaDimensionsHasBeenSet;
}


