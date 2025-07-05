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

#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryPendingSubAgentsV2ResponseData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

QueryPendingSubAgentsV2ResponseData::QueryPendingSubAgentsV2ResponseData() :
    m_subAgentUinHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_applyTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_materialUrlHasBeenSet(false),
    m_authStateHasBeenSet(false)
{
}

CoreInternalOutcome QueryPendingSubAgentsV2ResponseData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubAgentUin") && !value["SubAgentUin"].IsNull())
    {
        if (!value["SubAgentUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryPendingSubAgentsV2ResponseData.SubAgentUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subAgentUin = value["SubAgentUin"].GetInt64();
        m_subAgentUinHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryPendingSubAgentsV2ResponseData.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Mobile") && !value["Mobile"].IsNull())
    {
        if (!value["Mobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryPendingSubAgentsV2ResponseData.Mobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobile = string(value["Mobile"].GetString());
        m_mobileHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryPendingSubAgentsV2ResponseData.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("ApplyTime") && !value["ApplyTime"].IsNull())
    {
        if (!value["ApplyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryPendingSubAgentsV2ResponseData.ApplyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyTime = string(value["ApplyTime"].GetString());
        m_applyTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryPendingSubAgentsV2ResponseData.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("MaterialUrl") && !value["MaterialUrl"].IsNull())
    {
        if (!value["MaterialUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryPendingSubAgentsV2ResponseData.MaterialUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_materialUrl = string(value["MaterialUrl"].GetString());
        m_materialUrlHasBeenSet = true;
    }

    if (value.HasMember("AuthState") && !value["AuthState"].IsNull())
    {
        if (!value["AuthState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryPendingSubAgentsV2ResponseData.AuthState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authState = value["AuthState"].GetInt64();
        m_authStateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryPendingSubAgentsV2ResponseData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subAgentUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAgentUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subAgentUin, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_applyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_materialUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_materialUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_authStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authState, allocator);
    }

}


int64_t QueryPendingSubAgentsV2ResponseData::GetSubAgentUin() const
{
    return m_subAgentUin;
}

void QueryPendingSubAgentsV2ResponseData::SetSubAgentUin(const int64_t& _subAgentUin)
{
    m_subAgentUin = _subAgentUin;
    m_subAgentUinHasBeenSet = true;
}

bool QueryPendingSubAgentsV2ResponseData::SubAgentUinHasBeenSet() const
{
    return m_subAgentUinHasBeenSet;
}

string QueryPendingSubAgentsV2ResponseData::GetName() const
{
    return m_name;
}

void QueryPendingSubAgentsV2ResponseData::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool QueryPendingSubAgentsV2ResponseData::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string QueryPendingSubAgentsV2ResponseData::GetMobile() const
{
    return m_mobile;
}

void QueryPendingSubAgentsV2ResponseData::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool QueryPendingSubAgentsV2ResponseData::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string QueryPendingSubAgentsV2ResponseData::GetEmail() const
{
    return m_email;
}

void QueryPendingSubAgentsV2ResponseData::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool QueryPendingSubAgentsV2ResponseData::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string QueryPendingSubAgentsV2ResponseData::GetApplyTime() const
{
    return m_applyTime;
}

void QueryPendingSubAgentsV2ResponseData::SetApplyTime(const string& _applyTime)
{
    m_applyTime = _applyTime;
    m_applyTimeHasBeenSet = true;
}

bool QueryPendingSubAgentsV2ResponseData::ApplyTimeHasBeenSet() const
{
    return m_applyTimeHasBeenSet;
}

string QueryPendingSubAgentsV2ResponseData::GetStatus() const
{
    return m_status;
}

void QueryPendingSubAgentsV2ResponseData::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool QueryPendingSubAgentsV2ResponseData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string QueryPendingSubAgentsV2ResponseData::GetMaterialUrl() const
{
    return m_materialUrl;
}

void QueryPendingSubAgentsV2ResponseData::SetMaterialUrl(const string& _materialUrl)
{
    m_materialUrl = _materialUrl;
    m_materialUrlHasBeenSet = true;
}

bool QueryPendingSubAgentsV2ResponseData::MaterialUrlHasBeenSet() const
{
    return m_materialUrlHasBeenSet;
}

int64_t QueryPendingSubAgentsV2ResponseData::GetAuthState() const
{
    return m_authState;
}

void QueryPendingSubAgentsV2ResponseData::SetAuthState(const int64_t& _authState)
{
    m_authState = _authState;
    m_authStateHasBeenSet = true;
}

bool QueryPendingSubAgentsV2ResponseData::AuthStateHasBeenSet() const
{
    return m_authStateHasBeenSet;
}

