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

#include <tencentcloud/domain/v20180808/model/BatchDomainBuyLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

BatchDomainBuyLog::BatchDomainBuyLog() :
    m_logIdHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdOnHasBeenSet(false)
{
}

CoreInternalOutcome BatchDomainBuyLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogId") && !value["LogId"].IsNull())
    {
        if (!value["LogId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchDomainBuyLog.LogId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logId = value["LogId"].GetInt64();
        m_logIdHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchDomainBuyLog.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchDomainBuyLog.Number` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_number = value["Number"].GetInt64();
        m_numberHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchDomainBuyLog.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchDomainBuyLog.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchDomainBuyLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logId, allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_number, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdOn.c_str(), allocator).Move(), allocator);
    }

}


int64_t BatchDomainBuyLog::GetLogId() const
{
    return m_logId;
}

void BatchDomainBuyLog::SetLogId(const int64_t& _logId)
{
    m_logId = _logId;
    m_logIdHasBeenSet = true;
}

bool BatchDomainBuyLog::LogIdHasBeenSet() const
{
    return m_logIdHasBeenSet;
}

string BatchDomainBuyLog::GetAction() const
{
    return m_action;
}

void BatchDomainBuyLog::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool BatchDomainBuyLog::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

int64_t BatchDomainBuyLog::GetNumber() const
{
    return m_number;
}

void BatchDomainBuyLog::SetNumber(const int64_t& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool BatchDomainBuyLog::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string BatchDomainBuyLog::GetStatus() const
{
    return m_status;
}

void BatchDomainBuyLog::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BatchDomainBuyLog::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string BatchDomainBuyLog::GetCreatedOn() const
{
    return m_createdOn;
}

void BatchDomainBuyLog::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool BatchDomainBuyLog::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

