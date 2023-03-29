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

#include <tencentcloud/domain/v20180808/model/DescribeIntlDomainListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

DescribeIntlDomainListRequest::DescribeIntlDomainListRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_keyWordHasBeenSet(false),
    m_orderByRegTimeHasBeenSet(false),
    m_orderByExpireTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_dnsStatusHasBeenSet(false),
    m_orderByDomainNameHasBeenSet(false)
{
}

string DescribeIntlDomainListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_keyWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyWord.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByRegTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderByRegTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_orderByRegTime, allocator);
    }

    if (m_orderByExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderByExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_orderByExpireTime, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dnsStatus, allocator);
    }

    if (m_orderByDomainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderByDomainName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_orderByDomainName, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeIntlDomainListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeIntlDomainListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeIntlDomainListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeIntlDomainListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeIntlDomainListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeIntlDomainListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeIntlDomainListRequest::GetKeyWord() const
{
    return m_keyWord;
}

void DescribeIntlDomainListRequest::SetKeyWord(const string& _keyWord)
{
    m_keyWord = _keyWord;
    m_keyWordHasBeenSet = true;
}

bool DescribeIntlDomainListRequest::KeyWordHasBeenSet() const
{
    return m_keyWordHasBeenSet;
}

int64_t DescribeIntlDomainListRequest::GetOrderByRegTime() const
{
    return m_orderByRegTime;
}

void DescribeIntlDomainListRequest::SetOrderByRegTime(const int64_t& _orderByRegTime)
{
    m_orderByRegTime = _orderByRegTime;
    m_orderByRegTimeHasBeenSet = true;
}

bool DescribeIntlDomainListRequest::OrderByRegTimeHasBeenSet() const
{
    return m_orderByRegTimeHasBeenSet;
}

int64_t DescribeIntlDomainListRequest::GetOrderByExpireTime() const
{
    return m_orderByExpireTime;
}

void DescribeIntlDomainListRequest::SetOrderByExpireTime(const int64_t& _orderByExpireTime)
{
    m_orderByExpireTime = _orderByExpireTime;
    m_orderByExpireTimeHasBeenSet = true;
}

bool DescribeIntlDomainListRequest::OrderByExpireTimeHasBeenSet() const
{
    return m_orderByExpireTimeHasBeenSet;
}

string DescribeIntlDomainListRequest::GetStatus() const
{
    return m_status;
}

void DescribeIntlDomainListRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeIntlDomainListRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DescribeIntlDomainListRequest::GetDnsStatus() const
{
    return m_dnsStatus;
}

void DescribeIntlDomainListRequest::SetDnsStatus(const uint64_t& _dnsStatus)
{
    m_dnsStatus = _dnsStatus;
    m_dnsStatusHasBeenSet = true;
}

bool DescribeIntlDomainListRequest::DnsStatusHasBeenSet() const
{
    return m_dnsStatusHasBeenSet;
}

uint64_t DescribeIntlDomainListRequest::GetOrderByDomainName() const
{
    return m_orderByDomainName;
}

void DescribeIntlDomainListRequest::SetOrderByDomainName(const uint64_t& _orderByDomainName)
{
    m_orderByDomainName = _orderByDomainName;
    m_orderByDomainNameHasBeenSet = true;
}

bool DescribeIntlDomainListRequest::OrderByDomainNameHasBeenSet() const
{
    return m_orderByDomainNameHasBeenSet;
}


