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

#include <tencentcloud/domain/v20180808/model/TransferInIntlDomainBatchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

TransferInIntlDomainBatchRequest::TransferInIntlDomainBatchRequest() :
    m_templateIdHasBeenSet(false),
    m_passWordsHasBeenSet(false),
    m_domainsHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_transferProhibitionHasBeenSet(false),
    m_updateProhibitionHasBeenSet(false),
    m_lockTransferHasBeenSet(false)
{
}

string TransferInIntlDomainBatchRequest::ToJsonString() const
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

    if (m_passWordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassWords";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_passWords.begin(); itr != m_passWords.end(); ++itr)
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

    if (m_lockTransferHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockTransfer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_lockTransfer, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TransferInIntlDomainBatchRequest::GetTemplateId() const
{
    return m_templateId;
}

void TransferInIntlDomainBatchRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool TransferInIntlDomainBatchRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

vector<string> TransferInIntlDomainBatchRequest::GetPassWords() const
{
    return m_passWords;
}

void TransferInIntlDomainBatchRequest::SetPassWords(const vector<string>& _passWords)
{
    m_passWords = _passWords;
    m_passWordsHasBeenSet = true;
}

bool TransferInIntlDomainBatchRequest::PassWordsHasBeenSet() const
{
    return m_passWordsHasBeenSet;
}

vector<string> TransferInIntlDomainBatchRequest::GetDomains() const
{
    return m_domains;
}

void TransferInIntlDomainBatchRequest::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool TransferInIntlDomainBatchRequest::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

int64_t TransferInIntlDomainBatchRequest::GetPayMode() const
{
    return m_payMode;
}

void TransferInIntlDomainBatchRequest::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool TransferInIntlDomainBatchRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

bool TransferInIntlDomainBatchRequest::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void TransferInIntlDomainBatchRequest::SetAutoRenewFlag(const bool& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool TransferInIntlDomainBatchRequest::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

bool TransferInIntlDomainBatchRequest::GetTransferProhibition() const
{
    return m_transferProhibition;
}

void TransferInIntlDomainBatchRequest::SetTransferProhibition(const bool& _transferProhibition)
{
    m_transferProhibition = _transferProhibition;
    m_transferProhibitionHasBeenSet = true;
}

bool TransferInIntlDomainBatchRequest::TransferProhibitionHasBeenSet() const
{
    return m_transferProhibitionHasBeenSet;
}

bool TransferInIntlDomainBatchRequest::GetUpdateProhibition() const
{
    return m_updateProhibition;
}

void TransferInIntlDomainBatchRequest::SetUpdateProhibition(const bool& _updateProhibition)
{
    m_updateProhibition = _updateProhibition;
    m_updateProhibitionHasBeenSet = true;
}

bool TransferInIntlDomainBatchRequest::UpdateProhibitionHasBeenSet() const
{
    return m_updateProhibitionHasBeenSet;
}

bool TransferInIntlDomainBatchRequest::GetLockTransfer() const
{
    return m_lockTransfer;
}

void TransferInIntlDomainBatchRequest::SetLockTransfer(const bool& _lockTransfer)
{
    m_lockTransfer = _lockTransfer;
    m_lockTransferHasBeenSet = true;
}

bool TransferInIntlDomainBatchRequest::LockTransferHasBeenSet() const
{
    return m_lockTransferHasBeenSet;
}


