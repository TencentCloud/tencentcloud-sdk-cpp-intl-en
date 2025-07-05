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

#include <tencentcloud/domain/v20180808/model/DescribeIntlDomainBatchDetailsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

DescribeIntlDomainBatchDetailsRequest::DescribeIntlDomainBatchDetailsRequest() :
    m_logIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_orderByKeyHasBeenSet(false),
    m_orderByHasBeenSet(false)
{
}

string DescribeIntlDomainBatchDetailsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_logIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_logId, allocator);
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

    if (m_orderByKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderByKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderByKey.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_orderBy, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeIntlDomainBatchDetailsRequest::GetLogId() const
{
    return m_logId;
}

void DescribeIntlDomainBatchDetailsRequest::SetLogId(const int64_t& _logId)
{
    m_logId = _logId;
    m_logIdHasBeenSet = true;
}

bool DescribeIntlDomainBatchDetailsRequest::LogIdHasBeenSet() const
{
    return m_logIdHasBeenSet;
}

int64_t DescribeIntlDomainBatchDetailsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeIntlDomainBatchDetailsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeIntlDomainBatchDetailsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeIntlDomainBatchDetailsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeIntlDomainBatchDetailsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeIntlDomainBatchDetailsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeIntlDomainBatchDetailsRequest::GetOrderByKey() const
{
    return m_orderByKey;
}

void DescribeIntlDomainBatchDetailsRequest::SetOrderByKey(const string& _orderByKey)
{
    m_orderByKey = _orderByKey;
    m_orderByKeyHasBeenSet = true;
}

bool DescribeIntlDomainBatchDetailsRequest::OrderByKeyHasBeenSet() const
{
    return m_orderByKeyHasBeenSet;
}

int64_t DescribeIntlDomainBatchDetailsRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeIntlDomainBatchDetailsRequest::SetOrderBy(const int64_t& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeIntlDomainBatchDetailsRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}


