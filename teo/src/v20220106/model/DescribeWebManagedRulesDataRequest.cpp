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

#include <tencentcloud/teo/v20220106/model/DescribeWebManagedRulesDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

DescribeWebManagedRulesDataRequest::DescribeWebManagedRulesDataRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_metricNamesHasBeenSet(false),
    m_zoneIdsHasBeenSet(false),
    m_domainsHasBeenSet(false),
    m_protocolTypeHasBeenSet(false),
    m_attackTypeHasBeenSet(false),
    m_intervalHasBeenSet(false)
{
}

string DescribeWebManagedRulesDataRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_metricNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_metricNames.begin(); itr != m_metricNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_zoneIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zoneIds.begin(); itr != m_zoneIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_domainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domains";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domains.begin(); itr != m_domains.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_protocolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocolType.c_str(), allocator).Move(), allocator);
    }

    if (m_attackTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_attackType.c_str(), allocator).Move(), allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_interval.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeWebManagedRulesDataRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeWebManagedRulesDataRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeWebManagedRulesDataRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeWebManagedRulesDataRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeWebManagedRulesDataRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeWebManagedRulesDataRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<string> DescribeWebManagedRulesDataRequest::GetMetricNames() const
{
    return m_metricNames;
}

void DescribeWebManagedRulesDataRequest::SetMetricNames(const vector<string>& _metricNames)
{
    m_metricNames = _metricNames;
    m_metricNamesHasBeenSet = true;
}

bool DescribeWebManagedRulesDataRequest::MetricNamesHasBeenSet() const
{
    return m_metricNamesHasBeenSet;
}

vector<string> DescribeWebManagedRulesDataRequest::GetZoneIds() const
{
    return m_zoneIds;
}

void DescribeWebManagedRulesDataRequest::SetZoneIds(const vector<string>& _zoneIds)
{
    m_zoneIds = _zoneIds;
    m_zoneIdsHasBeenSet = true;
}

bool DescribeWebManagedRulesDataRequest::ZoneIdsHasBeenSet() const
{
    return m_zoneIdsHasBeenSet;
}

vector<string> DescribeWebManagedRulesDataRequest::GetDomains() const
{
    return m_domains;
}

void DescribeWebManagedRulesDataRequest::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool DescribeWebManagedRulesDataRequest::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

string DescribeWebManagedRulesDataRequest::GetProtocolType() const
{
    return m_protocolType;
}

void DescribeWebManagedRulesDataRequest::SetProtocolType(const string& _protocolType)
{
    m_protocolType = _protocolType;
    m_protocolTypeHasBeenSet = true;
}

bool DescribeWebManagedRulesDataRequest::ProtocolTypeHasBeenSet() const
{
    return m_protocolTypeHasBeenSet;
}

string DescribeWebManagedRulesDataRequest::GetAttackType() const
{
    return m_attackType;
}

void DescribeWebManagedRulesDataRequest::SetAttackType(const string& _attackType)
{
    m_attackType = _attackType;
    m_attackTypeHasBeenSet = true;
}

bool DescribeWebManagedRulesDataRequest::AttackTypeHasBeenSet() const
{
    return m_attackTypeHasBeenSet;
}

string DescribeWebManagedRulesDataRequest::GetInterval() const
{
    return m_interval;
}

void DescribeWebManagedRulesDataRequest::SetInterval(const string& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool DescribeWebManagedRulesDataRequest::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}


