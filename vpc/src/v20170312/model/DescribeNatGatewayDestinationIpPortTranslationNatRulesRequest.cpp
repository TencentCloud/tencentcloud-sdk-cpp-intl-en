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

#include <tencentcloud/vpc/v20170312/model/DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest::DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest() :
    m_natGatewayIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_natGatewayIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatGatewayIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_natGatewayIds.begin(); itr != m_natGatewayIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest::GetNatGatewayIds() const
{
    return m_natGatewayIds;
}

void DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest::SetNatGatewayIds(const vector<string>& _natGatewayIds)
{
    m_natGatewayIds = _natGatewayIds;
    m_natGatewayIdsHasBeenSet = true;
}

bool DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest::NatGatewayIdsHasBeenSet() const
{
    return m_natGatewayIdsHasBeenSet;
}

vector<Filter> DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest::GetFilters() const
{
    return m_filters;
}

void DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

uint64_t DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


