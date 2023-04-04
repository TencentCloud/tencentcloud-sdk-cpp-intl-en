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

#include <tencentcloud/domain/v20180808/model/CreateIntlDomainBatchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

CreateIntlDomainBatchRequest::CreateIntlDomainBatchRequest() :
    m_templateIdHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_domainsHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_transferProhibitionHasBeenSet(false),
    m_updateProhibitionHasBeenSet(false),
    m_customDnsHasBeenSet(false)
{
}

string CreateIntlDomainBatchRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
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

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_transferProhibitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferProhibition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_transferProhibition, allocator);
    }

    if (m_updateProhibitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateProhibition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_updateProhibition, allocator);
    }

    if (m_customDnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomDns";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customDns.begin(); itr != m_customDns.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateIntlDomainBatchRequest::GetTemplateId() const
{
    return m_templateId;
}

void CreateIntlDomainBatchRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool CreateIntlDomainBatchRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

int64_t CreateIntlDomainBatchRequest::GetPeriod() const
{
    return m_period;
}

void CreateIntlDomainBatchRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CreateIntlDomainBatchRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

vector<string> CreateIntlDomainBatchRequest::GetDomains() const
{
    return m_domains;
}

void CreateIntlDomainBatchRequest::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool CreateIntlDomainBatchRequest::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

int64_t CreateIntlDomainBatchRequest::GetPayMode() const
{
    return m_payMode;
}

void CreateIntlDomainBatchRequest::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool CreateIntlDomainBatchRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

bool CreateIntlDomainBatchRequest::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void CreateIntlDomainBatchRequest::SetAutoRenewFlag(const bool& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool CreateIntlDomainBatchRequest::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

bool CreateIntlDomainBatchRequest::GetTransferProhibition() const
{
    return m_transferProhibition;
}

void CreateIntlDomainBatchRequest::SetTransferProhibition(const bool& _transferProhibition)
{
    m_transferProhibition = _transferProhibition;
    m_transferProhibitionHasBeenSet = true;
}

bool CreateIntlDomainBatchRequest::TransferProhibitionHasBeenSet() const
{
    return m_transferProhibitionHasBeenSet;
}

bool CreateIntlDomainBatchRequest::GetUpdateProhibition() const
{
    return m_updateProhibition;
}

void CreateIntlDomainBatchRequest::SetUpdateProhibition(const bool& _updateProhibition)
{
    m_updateProhibition = _updateProhibition;
    m_updateProhibitionHasBeenSet = true;
}

bool CreateIntlDomainBatchRequest::UpdateProhibitionHasBeenSet() const
{
    return m_updateProhibitionHasBeenSet;
}

vector<string> CreateIntlDomainBatchRequest::GetCustomDns() const
{
    return m_customDns;
}

void CreateIntlDomainBatchRequest::SetCustomDns(const vector<string>& _customDns)
{
    m_customDns = _customDns;
    m_customDnsHasBeenSet = true;
}

bool CreateIntlDomainBatchRequest::CustomDnsHasBeenSet() const
{
    return m_customDnsHasBeenSet;
}


