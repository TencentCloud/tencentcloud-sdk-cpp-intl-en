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

#include <tencentcloud/antiddos/v20200309/model/DescribeCcGeoIPBlockConfigListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

DescribeCcGeoIPBlockConfigListRequest::DescribeCcGeoIPBlockConfigListRequest() :
    m_businessHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_protocolHasBeenSet(false)
{
}

string DescribeCcGeoIPBlockConfigListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_business.c_str(), allocator).Move(), allocator);
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

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCcGeoIPBlockConfigListRequest::GetBusiness() const
{
    return m_business;
}

void DescribeCcGeoIPBlockConfigListRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool DescribeCcGeoIPBlockConfigListRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

uint64_t DescribeCcGeoIPBlockConfigListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCcGeoIPBlockConfigListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCcGeoIPBlockConfigListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeCcGeoIPBlockConfigListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCcGeoIPBlockConfigListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCcGeoIPBlockConfigListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeCcGeoIPBlockConfigListRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeCcGeoIPBlockConfigListRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeCcGeoIPBlockConfigListRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeCcGeoIPBlockConfigListRequest::GetIp() const
{
    return m_ip;
}

void DescribeCcGeoIPBlockConfigListRequest::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DescribeCcGeoIPBlockConfigListRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string DescribeCcGeoIPBlockConfigListRequest::GetDomain() const
{
    return m_domain;
}

void DescribeCcGeoIPBlockConfigListRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeCcGeoIPBlockConfigListRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DescribeCcGeoIPBlockConfigListRequest::GetProtocol() const
{
    return m_protocol;
}

void DescribeCcGeoIPBlockConfigListRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool DescribeCcGeoIPBlockConfigListRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}


