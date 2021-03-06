/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/dayu/v20180709/model/DescribeDDoSCountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dayu::V20180709::Model;
using namespace rapidjson;
using namespace std;

DescribeDDoSCountRequest::DescribeDDoSCountRequest() :
    m_businessHasBeenSet(false),
    m_idHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_metricNameHasBeenSet(false)
{
}

string DescribeDDoSCountRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_businessHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_business.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_metricNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_metricName.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDDoSCountRequest::GetBusiness() const
{
    return m_business;
}

void DescribeDDoSCountRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool DescribeDDoSCountRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

string DescribeDDoSCountRequest::GetId() const
{
    return m_id;
}

void DescribeDDoSCountRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeDDoSCountRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeDDoSCountRequest::GetIp() const
{
    return m_ip;
}

void DescribeDDoSCountRequest::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DescribeDDoSCountRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string DescribeDDoSCountRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeDDoSCountRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeDDoSCountRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeDDoSCountRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeDDoSCountRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeDDoSCountRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeDDoSCountRequest::GetMetricName() const
{
    return m_metricName;
}

void DescribeDDoSCountRequest::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool DescribeDDoSCountRequest::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}


