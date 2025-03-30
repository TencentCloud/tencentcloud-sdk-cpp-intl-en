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

#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryInvitationInfoData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

QueryInvitationInfoData::QueryInvitationInfoData() :
    m_invitationTokenHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_useTimeHasBeenSet(false),
    m_clientUinHasBeenSet(false),
    m_clientMailHasBeenSet(false),
    m_clientTypeHasBeenSet(false),
    m_bindTimeHasBeenSet(false)
{
}

CoreInternalOutcome QueryInvitationInfoData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InvitationToken") && !value["InvitationToken"].IsNull())
    {
        if (!value["InvitationToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryInvitationInfoData.InvitationToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invitationToken = string(value["InvitationToken"].GetString());
        m_invitationTokenHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryInvitationInfoData.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryInvitationInfoData.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("UseTime") && !value["UseTime"].IsNull())
    {
        if (!value["UseTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryInvitationInfoData.UseTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_useTime = string(value["UseTime"].GetString());
        m_useTimeHasBeenSet = true;
    }

    if (value.HasMember("ClientUin") && !value["ClientUin"].IsNull())
    {
        if (!value["ClientUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryInvitationInfoData.ClientUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clientUin = value["ClientUin"].GetInt64();
        m_clientUinHasBeenSet = true;
    }

    if (value.HasMember("ClientMail") && !value["ClientMail"].IsNull())
    {
        if (!value["ClientMail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryInvitationInfoData.ClientMail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientMail = string(value["ClientMail"].GetString());
        m_clientMailHasBeenSet = true;
    }

    if (value.HasMember("ClientType") && !value["ClientType"].IsNull())
    {
        if (!value["ClientType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryInvitationInfoData.ClientType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clientType = value["ClientType"].GetInt64();
        m_clientTypeHasBeenSet = true;
    }

    if (value.HasMember("BindTime") && !value["BindTime"].IsNull())
    {
        if (!value["BindTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryInvitationInfoData.BindTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindTime = string(value["BindTime"].GetString());
        m_bindTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryInvitationInfoData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_invitationTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvitationToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invitationToken.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_useTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_useTime.c_str(), allocator).Move(), allocator);
    }

    if (m_clientUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clientUin, allocator);
    }

    if (m_clientMailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientMail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientMail.c_str(), allocator).Move(), allocator);
    }

    if (m_clientTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clientType, allocator);
    }

    if (m_bindTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindTime.c_str(), allocator).Move(), allocator);
    }

}


string QueryInvitationInfoData::GetInvitationToken() const
{
    return m_invitationToken;
}

void QueryInvitationInfoData::SetInvitationToken(const string& _invitationToken)
{
    m_invitationToken = _invitationToken;
    m_invitationTokenHasBeenSet = true;
}

bool QueryInvitationInfoData::InvitationTokenHasBeenSet() const
{
    return m_invitationTokenHasBeenSet;
}

string QueryInvitationInfoData::GetCreateTime() const
{
    return m_createTime;
}

void QueryInvitationInfoData::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool QueryInvitationInfoData::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t QueryInvitationInfoData::GetStatus() const
{
    return m_status;
}

void QueryInvitationInfoData::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool QueryInvitationInfoData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string QueryInvitationInfoData::GetUseTime() const
{
    return m_useTime;
}

void QueryInvitationInfoData::SetUseTime(const string& _useTime)
{
    m_useTime = _useTime;
    m_useTimeHasBeenSet = true;
}

bool QueryInvitationInfoData::UseTimeHasBeenSet() const
{
    return m_useTimeHasBeenSet;
}

int64_t QueryInvitationInfoData::GetClientUin() const
{
    return m_clientUin;
}

void QueryInvitationInfoData::SetClientUin(const int64_t& _clientUin)
{
    m_clientUin = _clientUin;
    m_clientUinHasBeenSet = true;
}

bool QueryInvitationInfoData::ClientUinHasBeenSet() const
{
    return m_clientUinHasBeenSet;
}

string QueryInvitationInfoData::GetClientMail() const
{
    return m_clientMail;
}

void QueryInvitationInfoData::SetClientMail(const string& _clientMail)
{
    m_clientMail = _clientMail;
    m_clientMailHasBeenSet = true;
}

bool QueryInvitationInfoData::ClientMailHasBeenSet() const
{
    return m_clientMailHasBeenSet;
}

int64_t QueryInvitationInfoData::GetClientType() const
{
    return m_clientType;
}

void QueryInvitationInfoData::SetClientType(const int64_t& _clientType)
{
    m_clientType = _clientType;
    m_clientTypeHasBeenSet = true;
}

bool QueryInvitationInfoData::ClientTypeHasBeenSet() const
{
    return m_clientTypeHasBeenSet;
}

string QueryInvitationInfoData::GetBindTime() const
{
    return m_bindTime;
}

void QueryInvitationInfoData::SetBindTime(const string& _bindTime)
{
    m_bindTime = _bindTime;
    m_bindTimeHasBeenSet = true;
}

bool QueryInvitationInfoData::BindTimeHasBeenSet() const
{
    return m_bindTimeHasBeenSet;
}

