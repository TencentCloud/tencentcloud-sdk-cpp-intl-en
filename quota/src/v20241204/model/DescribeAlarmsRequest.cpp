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

#include <tencentcloud/quota/v20241204/model/DescribeAlarmsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Quota::V20241204::Model;
using namespace std;

DescribeAlarmsRequest::DescribeAlarmsRequest() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_quotaIdHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_memberUinsHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

string DescribeAlarmsRequest::ToJsonString() const
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

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_productId, allocator);
    }

    if (m_quotaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_quotaId, allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

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

    if (m_metricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metrics";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_metrics, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeAlarmsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAlarmsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAlarmsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeAlarmsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAlarmsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAlarmsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeAlarmsRequest::GetProductId() const
{
    return m_productId;
}

void DescribeAlarmsRequest::SetProductId(const int64_t& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DescribeAlarmsRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

int64_t DescribeAlarmsRequest::GetQuotaId() const
{
    return m_quotaId;
}

void DescribeAlarmsRequest::SetQuotaId(const int64_t& _quotaId)
{
    m_quotaId = _quotaId;
    m_quotaIdHasBeenSet = true;
}

bool DescribeAlarmsRequest::QuotaIdHasBeenSet() const
{
    return m_quotaIdHasBeenSet;
}

string DescribeAlarmsRequest::GetContent() const
{
    return m_content;
}

void DescribeAlarmsRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool DescribeAlarmsRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

vector<int64_t> DescribeAlarmsRequest::GetMemberUins() const
{
    return m_memberUins;
}

void DescribeAlarmsRequest::SetMemberUins(const vector<int64_t>& _memberUins)
{
    m_memberUins = _memberUins;
    m_memberUinsHasBeenSet = true;
}

bool DescribeAlarmsRequest::MemberUinsHasBeenSet() const
{
    return m_memberUinsHasBeenSet;
}

int64_t DescribeAlarmsRequest::GetMetrics() const
{
    return m_metrics;
}

void DescribeAlarmsRequest::SetMetrics(const int64_t& _metrics)
{
    m_metrics = _metrics;
    m_metricsHasBeenSet = true;
}

bool DescribeAlarmsRequest::MetricsHasBeenSet() const
{
    return m_metricsHasBeenSet;
}

uint64_t DescribeAlarmsRequest::GetId() const
{
    return m_id;
}

void DescribeAlarmsRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeAlarmsRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}


