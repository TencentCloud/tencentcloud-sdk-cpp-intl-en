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

#include <tencentcloud/quota/v20241204/model/Alarm.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Quota::V20241204::Model;
using namespace std;

Alarm::Alarm() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_quotaIdHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_frequencyHasBeenSet(false),
    m_thresholdHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_memberUinHasBeenSet(false),
    m_quotaNameHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome Alarm::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Alarm.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Alarm.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Alarm.ProductId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_productId = value["ProductId"].GetUint64();
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("QuotaId") && !value["QuotaId"].IsNull())
    {
        if (!value["QuotaId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Alarm.QuotaId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_quotaId = value["QuotaId"].GetUint64();
        m_quotaIdHasBeenSet = true;
    }

    if (value.HasMember("Metrics") && !value["Metrics"].IsNull())
    {
        if (!value["Metrics"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Alarm.Metrics` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_metrics = value["Metrics"].GetInt64();
        m_metricsHasBeenSet = true;
    }

    if (value.HasMember("Frequency") && !value["Frequency"].IsNull())
    {
        if (!value["Frequency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Alarm.Frequency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_frequency = value["Frequency"].GetInt64();
        m_frequencyHasBeenSet = true;
    }

    if (value.HasMember("Threshold") && !value["Threshold"].IsNull())
    {
        if (!value["Threshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Alarm.Threshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_threshold = value["Threshold"].GetInt64();
        m_thresholdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Alarm.OwnerUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = value["OwnerUin"].GetInt64();
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("MemberUin") && !value["MemberUin"].IsNull())
    {
        if (!value["MemberUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Alarm.MemberUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memberUin = value["MemberUin"].GetInt64();
        m_memberUinHasBeenSet = true;
    }

    if (value.HasMember("QuotaName") && !value["QuotaName"].IsNull())
    {
        if (!value["QuotaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Alarm.QuotaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaName = string(value["QuotaName"].GetString());
        m_quotaNameHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Alarm.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Alarm.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Alarm::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_productId, allocator);
    }

    if (m_quotaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quotaId, allocator);
    }

    if (m_metricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_metrics, allocator);
    }

    if (m_frequencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Frequency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frequency, allocator);
    }

    if (m_thresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Threshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_threshold, allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ownerUin, allocator);
    }

    if (m_memberUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memberUin, allocator);
    }

    if (m_quotaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaName.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


int64_t Alarm::GetId() const
{
    return m_id;
}

void Alarm::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Alarm::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string Alarm::GetName() const
{
    return m_name;
}

void Alarm::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Alarm::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t Alarm::GetProductId() const
{
    return m_productId;
}

void Alarm::SetProductId(const uint64_t& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool Alarm::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

uint64_t Alarm::GetQuotaId() const
{
    return m_quotaId;
}

void Alarm::SetQuotaId(const uint64_t& _quotaId)
{
    m_quotaId = _quotaId;
    m_quotaIdHasBeenSet = true;
}

bool Alarm::QuotaIdHasBeenSet() const
{
    return m_quotaIdHasBeenSet;
}

int64_t Alarm::GetMetrics() const
{
    return m_metrics;
}

void Alarm::SetMetrics(const int64_t& _metrics)
{
    m_metrics = _metrics;
    m_metricsHasBeenSet = true;
}

bool Alarm::MetricsHasBeenSet() const
{
    return m_metricsHasBeenSet;
}

int64_t Alarm::GetFrequency() const
{
    return m_frequency;
}

void Alarm::SetFrequency(const int64_t& _frequency)
{
    m_frequency = _frequency;
    m_frequencyHasBeenSet = true;
}

bool Alarm::FrequencyHasBeenSet() const
{
    return m_frequencyHasBeenSet;
}

int64_t Alarm::GetThreshold() const
{
    return m_threshold;
}

void Alarm::SetThreshold(const int64_t& _threshold)
{
    m_threshold = _threshold;
    m_thresholdHasBeenSet = true;
}

bool Alarm::ThresholdHasBeenSet() const
{
    return m_thresholdHasBeenSet;
}

int64_t Alarm::GetOwnerUin() const
{
    return m_ownerUin;
}

void Alarm::SetOwnerUin(const int64_t& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool Alarm::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

int64_t Alarm::GetMemberUin() const
{
    return m_memberUin;
}

void Alarm::SetMemberUin(const int64_t& _memberUin)
{
    m_memberUin = _memberUin;
    m_memberUinHasBeenSet = true;
}

bool Alarm::MemberUinHasBeenSet() const
{
    return m_memberUinHasBeenSet;
}

string Alarm::GetQuotaName() const
{
    return m_quotaName;
}

void Alarm::SetQuotaName(const string& _quotaName)
{
    m_quotaName = _quotaName;
    m_quotaNameHasBeenSet = true;
}

bool Alarm::QuotaNameHasBeenSet() const
{
    return m_quotaNameHasBeenSet;
}

string Alarm::GetProductName() const
{
    return m_productName;
}

void Alarm::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool Alarm::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

uint64_t Alarm::GetStatus() const
{
    return m_status;
}

void Alarm::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Alarm::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

