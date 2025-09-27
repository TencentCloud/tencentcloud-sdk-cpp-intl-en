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

#include <tencentcloud/quota/v20241204/model/UpdateAlarmRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Quota::V20241204::Model;
using namespace std;

UpdateAlarmRequest::UpdateAlarmRequest() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_quotaIdHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_thresholdHasBeenSet(false),
    m_frequencyHasBeenSet(false),
    m_memberUinHasBeenSet(false)
{
}

string UpdateAlarmRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_metricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metrics";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_metrics, allocator);
    }

    if (m_thresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Threshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_threshold, allocator);
    }

    if (m_frequencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Frequency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_frequency, allocator);
    }

    if (m_memberUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memberUin, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t UpdateAlarmRequest::GetId() const
{
    return m_id;
}

void UpdateAlarmRequest::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool UpdateAlarmRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string UpdateAlarmRequest::GetName() const
{
    return m_name;
}

void UpdateAlarmRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateAlarmRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t UpdateAlarmRequest::GetProductId() const
{
    return m_productId;
}

void UpdateAlarmRequest::SetProductId(const int64_t& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool UpdateAlarmRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

int64_t UpdateAlarmRequest::GetQuotaId() const
{
    return m_quotaId;
}

void UpdateAlarmRequest::SetQuotaId(const int64_t& _quotaId)
{
    m_quotaId = _quotaId;
    m_quotaIdHasBeenSet = true;
}

bool UpdateAlarmRequest::QuotaIdHasBeenSet() const
{
    return m_quotaIdHasBeenSet;
}

int64_t UpdateAlarmRequest::GetMetrics() const
{
    return m_metrics;
}

void UpdateAlarmRequest::SetMetrics(const int64_t& _metrics)
{
    m_metrics = _metrics;
    m_metricsHasBeenSet = true;
}

bool UpdateAlarmRequest::MetricsHasBeenSet() const
{
    return m_metricsHasBeenSet;
}

int64_t UpdateAlarmRequest::GetThreshold() const
{
    return m_threshold;
}

void UpdateAlarmRequest::SetThreshold(const int64_t& _threshold)
{
    m_threshold = _threshold;
    m_thresholdHasBeenSet = true;
}

bool UpdateAlarmRequest::ThresholdHasBeenSet() const
{
    return m_thresholdHasBeenSet;
}

int64_t UpdateAlarmRequest::GetFrequency() const
{
    return m_frequency;
}

void UpdateAlarmRequest::SetFrequency(const int64_t& _frequency)
{
    m_frequency = _frequency;
    m_frequencyHasBeenSet = true;
}

bool UpdateAlarmRequest::FrequencyHasBeenSet() const
{
    return m_frequencyHasBeenSet;
}

int64_t UpdateAlarmRequest::GetMemberUin() const
{
    return m_memberUin;
}

void UpdateAlarmRequest::SetMemberUin(const int64_t& _memberUin)
{
    m_memberUin = _memberUin;
    m_memberUinHasBeenSet = true;
}

bool UpdateAlarmRequest::MemberUinHasBeenSet() const
{
    return m_memberUinHasBeenSet;
}


