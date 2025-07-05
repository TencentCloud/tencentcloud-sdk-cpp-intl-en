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

#include <tencentcloud/domain/v20180808/model/BatchModifyIntlDomainDNSRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

BatchModifyIntlDomainDNSRequest::BatchModifyIntlDomainDNSRequest() :
    m_domainsHasBeenSet(false),
    m_dnsHasBeenSet(false),
    m_batchActionHasBeenSet(false)
{
}

string BatchModifyIntlDomainDNSRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_dnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dns";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dns.begin(); itr != m_dns.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_batchActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_batchAction.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> BatchModifyIntlDomainDNSRequest::GetDomains() const
{
    return m_domains;
}

void BatchModifyIntlDomainDNSRequest::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool BatchModifyIntlDomainDNSRequest::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

vector<string> BatchModifyIntlDomainDNSRequest::GetDns() const
{
    return m_dns;
}

void BatchModifyIntlDomainDNSRequest::SetDns(const vector<string>& _dns)
{
    m_dns = _dns;
    m_dnsHasBeenSet = true;
}

bool BatchModifyIntlDomainDNSRequest::DnsHasBeenSet() const
{
    return m_dnsHasBeenSet;
}

string BatchModifyIntlDomainDNSRequest::GetBatchAction() const
{
    return m_batchAction;
}

void BatchModifyIntlDomainDNSRequest::SetBatchAction(const string& _batchAction)
{
    m_batchAction = _batchAction;
    m_batchActionHasBeenSet = true;
}

bool BatchModifyIntlDomainDNSRequest::BatchActionHasBeenSet() const
{
    return m_batchActionHasBeenSet;
}


