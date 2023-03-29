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

#include <tencentcloud/domain/v20180808/model/ModifyOwnerIntlBatchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

ModifyOwnerIntlBatchRequest::ModifyOwnerIntlBatchRequest() :
    m_domainsHasBeenSet(false),
    m_toUinHasBeenSet(false),
    m_dnsTransferHasBeenSet(false)
{
}

string ModifyOwnerIntlBatchRequest::ToJsonString() const
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

    if (m_toUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_toUin.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsTransferHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsTransfer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dnsTransfer, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyOwnerIntlBatchRequest::GetDomains() const
{
    return m_domains;
}

void ModifyOwnerIntlBatchRequest::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool ModifyOwnerIntlBatchRequest::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

string ModifyOwnerIntlBatchRequest::GetToUin() const
{
    return m_toUin;
}

void ModifyOwnerIntlBatchRequest::SetToUin(const string& _toUin)
{
    m_toUin = _toUin;
    m_toUinHasBeenSet = true;
}

bool ModifyOwnerIntlBatchRequest::ToUinHasBeenSet() const
{
    return m_toUinHasBeenSet;
}

bool ModifyOwnerIntlBatchRequest::GetDnsTransfer() const
{
    return m_dnsTransfer;
}

void ModifyOwnerIntlBatchRequest::SetDnsTransfer(const bool& _dnsTransfer)
{
    m_dnsTransfer = _dnsTransfer;
    m_dnsTransferHasBeenSet = true;
}

bool ModifyOwnerIntlBatchRequest::DnsTransferHasBeenSet() const
{
    return m_dnsTransferHasBeenSet;
}


