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

#include <tencentcloud/domain/v20180808/model/BatchDomainBuyDetails.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

BatchDomainBuyDetails::BatchDomainBuyDetails() :
    m_idHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_updatedOnHasBeenSet(false),
    m_transferDnsResultHasBeenSet(false),
    m_reasonZhHasBeenSet(false),
    m_payStatusHasBeenSet(false)
{
}

CoreInternalOutcome BatchDomainBuyDetails::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchDomainBuyDetails.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchDomainBuyDetails.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchDomainBuyDetails.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchDomainBuyDetails.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchDomainBuyDetails.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchDomainBuyDetails.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("UpdatedOn") && !value["UpdatedOn"].IsNull())
    {
        if (!value["UpdatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchDomainBuyDetails.UpdatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedOn = string(value["UpdatedOn"].GetString());
        m_updatedOnHasBeenSet = true;
    }

    if (value.HasMember("TransferDnsResult") && !value["TransferDnsResult"].IsNull())
    {
        if (!value["TransferDnsResult"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BatchDomainBuyDetails.TransferDnsResult` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_transferDnsResult = value["TransferDnsResult"].GetBool();
        m_transferDnsResultHasBeenSet = true;
    }

    if (value.HasMember("ReasonZh") && !value["ReasonZh"].IsNull())
    {
        if (!value["ReasonZh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchDomainBuyDetails.ReasonZh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reasonZh = string(value["ReasonZh"].GetString());
        m_reasonZhHasBeenSet = true;
    }

    if (value.HasMember("PayStatus") && !value["PayStatus"].IsNull())
    {
        if (!value["PayStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchDomainBuyDetails.PayStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payStatus = value["PayStatus"].GetInt64();
        m_payStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchDomainBuyDetails::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdOn.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedOn.c_str(), allocator).Move(), allocator);
    }

    if (m_transferDnsResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferDnsResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transferDnsResult, allocator);
    }

    if (m_reasonZhHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReasonZh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reasonZh.c_str(), allocator).Move(), allocator);
    }

    if (m_payStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payStatus, allocator);
    }

}


int64_t BatchDomainBuyDetails::GetId() const
{
    return m_id;
}

void BatchDomainBuyDetails::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool BatchDomainBuyDetails::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string BatchDomainBuyDetails::GetAction() const
{
    return m_action;
}

void BatchDomainBuyDetails::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool BatchDomainBuyDetails::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string BatchDomainBuyDetails::GetDomain() const
{
    return m_domain;
}

void BatchDomainBuyDetails::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool BatchDomainBuyDetails::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string BatchDomainBuyDetails::GetStatus() const
{
    return m_status;
}

void BatchDomainBuyDetails::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BatchDomainBuyDetails::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string BatchDomainBuyDetails::GetReason() const
{
    return m_reason;
}

void BatchDomainBuyDetails::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool BatchDomainBuyDetails::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string BatchDomainBuyDetails::GetCreatedOn() const
{
    return m_createdOn;
}

void BatchDomainBuyDetails::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool BatchDomainBuyDetails::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string BatchDomainBuyDetails::GetUpdatedOn() const
{
    return m_updatedOn;
}

void BatchDomainBuyDetails::SetUpdatedOn(const string& _updatedOn)
{
    m_updatedOn = _updatedOn;
    m_updatedOnHasBeenSet = true;
}

bool BatchDomainBuyDetails::UpdatedOnHasBeenSet() const
{
    return m_updatedOnHasBeenSet;
}

bool BatchDomainBuyDetails::GetTransferDnsResult() const
{
    return m_transferDnsResult;
}

void BatchDomainBuyDetails::SetTransferDnsResult(const bool& _transferDnsResult)
{
    m_transferDnsResult = _transferDnsResult;
    m_transferDnsResultHasBeenSet = true;
}

bool BatchDomainBuyDetails::TransferDnsResultHasBeenSet() const
{
    return m_transferDnsResultHasBeenSet;
}

string BatchDomainBuyDetails::GetReasonZh() const
{
    return m_reasonZh;
}

void BatchDomainBuyDetails::SetReasonZh(const string& _reasonZh)
{
    m_reasonZh = _reasonZh;
    m_reasonZhHasBeenSet = true;
}

bool BatchDomainBuyDetails::ReasonZhHasBeenSet() const
{
    return m_reasonZhHasBeenSet;
}

int64_t BatchDomainBuyDetails::GetPayStatus() const
{
    return m_payStatus;
}

void BatchDomainBuyDetails::SetPayStatus(const int64_t& _payStatus)
{
    m_payStatus = _payStatus;
    m_payStatusHasBeenSet = true;
}

bool BatchDomainBuyDetails::PayStatusHasBeenSet() const
{
    return m_payStatusHasBeenSet;
}

