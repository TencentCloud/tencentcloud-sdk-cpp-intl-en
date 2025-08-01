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

#include <tencentcloud/billing/v20180709/model/DescribeAllocationRuleSummaryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

DescribeAllocationRuleSummaryRequest::DescribeAllocationRuleSummaryRequest() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_monthHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

string DescribeAllocationRuleSummaryRequest::ToJsonString() const
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

    if (m_monthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Month";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_month.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeAllocationRuleSummaryRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAllocationRuleSummaryRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAllocationRuleSummaryRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeAllocationRuleSummaryRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAllocationRuleSummaryRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAllocationRuleSummaryRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeAllocationRuleSummaryRequest::GetMonth() const
{
    return m_month;
}

void DescribeAllocationRuleSummaryRequest::SetMonth(const string& _month)
{
    m_month = _month;
    m_monthHasBeenSet = true;
}

bool DescribeAllocationRuleSummaryRequest::MonthHasBeenSet() const
{
    return m_monthHasBeenSet;
}

uint64_t DescribeAllocationRuleSummaryRequest::GetType() const
{
    return m_type;
}

void DescribeAllocationRuleSummaryRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeAllocationRuleSummaryRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeAllocationRuleSummaryRequest::GetName() const
{
    return m_name;
}

void DescribeAllocationRuleSummaryRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeAllocationRuleSummaryRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}


