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

#include <tencentcloud/tcsas/v20250106/model/DescribeTeamDetailResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeTeamDetailResp::DescribeTeamDetailResp() :
    m_teamNameHasBeenSet(false),
    m_teamRoleTypeHasBeenSet(false),
    m_adminUserAccountHasBeenSet(false),
    m_createUserHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_memberCountHasBeenSet(false),
    m_bindMiniTeamCountHasBeenSet(false),
    m_bindTeamNameHasBeenSet(false),
    m_registerLinkHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTeamDetailResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TeamName") && !value["TeamName"].IsNull())
    {
        if (!value["TeamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTeamDetailResp.TeamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teamName = string(value["TeamName"].GetString());
        m_teamNameHasBeenSet = true;
    }

    if (value.HasMember("TeamRoleType") && !value["TeamRoleType"].IsNull())
    {
        if (!value["TeamRoleType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTeamDetailResp.TeamRoleType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_teamRoleType = value["TeamRoleType"].GetInt64();
        m_teamRoleTypeHasBeenSet = true;
    }

    if (value.HasMember("AdminUserAccount") && !value["AdminUserAccount"].IsNull())
    {
        if (!value["AdminUserAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTeamDetailResp.AdminUserAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminUserAccount = string(value["AdminUserAccount"].GetString());
        m_adminUserAccountHasBeenSet = true;
    }

    if (value.HasMember("CreateUser") && !value["CreateUser"].IsNull())
    {
        if (!value["CreateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTeamDetailResp.CreateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUser = string(value["CreateUser"].GetString());
        m_createUserHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTeamDetailResp.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("MemberCount") && !value["MemberCount"].IsNull())
    {
        if (!value["MemberCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTeamDetailResp.MemberCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memberCount = value["MemberCount"].GetInt64();
        m_memberCountHasBeenSet = true;
    }

    if (value.HasMember("BindMiniTeamCount") && !value["BindMiniTeamCount"].IsNull())
    {
        if (!value["BindMiniTeamCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTeamDetailResp.BindMiniTeamCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bindMiniTeamCount = value["BindMiniTeamCount"].GetInt64();
        m_bindMiniTeamCountHasBeenSet = true;
    }

    if (value.HasMember("BindTeamName") && !value["BindTeamName"].IsNull())
    {
        if (!value["BindTeamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTeamDetailResp.BindTeamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindTeamName = string(value["BindTeamName"].GetString());
        m_bindTeamNameHasBeenSet = true;
    }

    if (value.HasMember("RegisterLink") && !value["RegisterLink"].IsNull())
    {
        if (!value["RegisterLink"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTeamDetailResp.RegisterLink` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registerLink = string(value["RegisterLink"].GetString());
        m_registerLinkHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTeamDetailResp.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTeamDetailResp.ExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetInt64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTeamDetailResp.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeTeamDetailResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_teamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_teamName.c_str(), allocator).Move(), allocator);
    }

    if (m_teamRoleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamRoleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_teamRoleType, allocator);
    }

    if (m_adminUserAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminUserAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adminUserAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_createUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUser.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_memberCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memberCount, allocator);
    }

    if (m_bindMiniTeamCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindMiniTeamCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindMiniTeamCount, allocator);
    }

    if (m_bindTeamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindTeamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindTeamName.c_str(), allocator).Move(), allocator);
    }

    if (m_registerLinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterLink";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registerLink.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


string DescribeTeamDetailResp::GetTeamName() const
{
    return m_teamName;
}

void DescribeTeamDetailResp::SetTeamName(const string& _teamName)
{
    m_teamName = _teamName;
    m_teamNameHasBeenSet = true;
}

bool DescribeTeamDetailResp::TeamNameHasBeenSet() const
{
    return m_teamNameHasBeenSet;
}

int64_t DescribeTeamDetailResp::GetTeamRoleType() const
{
    return m_teamRoleType;
}

void DescribeTeamDetailResp::SetTeamRoleType(const int64_t& _teamRoleType)
{
    m_teamRoleType = _teamRoleType;
    m_teamRoleTypeHasBeenSet = true;
}

bool DescribeTeamDetailResp::TeamRoleTypeHasBeenSet() const
{
    return m_teamRoleTypeHasBeenSet;
}

string DescribeTeamDetailResp::GetAdminUserAccount() const
{
    return m_adminUserAccount;
}

void DescribeTeamDetailResp::SetAdminUserAccount(const string& _adminUserAccount)
{
    m_adminUserAccount = _adminUserAccount;
    m_adminUserAccountHasBeenSet = true;
}

bool DescribeTeamDetailResp::AdminUserAccountHasBeenSet() const
{
    return m_adminUserAccountHasBeenSet;
}

string DescribeTeamDetailResp::GetCreateUser() const
{
    return m_createUser;
}

void DescribeTeamDetailResp::SetCreateUser(const string& _createUser)
{
    m_createUser = _createUser;
    m_createUserHasBeenSet = true;
}

bool DescribeTeamDetailResp::CreateUserHasBeenSet() const
{
    return m_createUserHasBeenSet;
}

string DescribeTeamDetailResp::GetCreateTime() const
{
    return m_createTime;
}

void DescribeTeamDetailResp::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeTeamDetailResp::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t DescribeTeamDetailResp::GetMemberCount() const
{
    return m_memberCount;
}

void DescribeTeamDetailResp::SetMemberCount(const int64_t& _memberCount)
{
    m_memberCount = _memberCount;
    m_memberCountHasBeenSet = true;
}

bool DescribeTeamDetailResp::MemberCountHasBeenSet() const
{
    return m_memberCountHasBeenSet;
}

int64_t DescribeTeamDetailResp::GetBindMiniTeamCount() const
{
    return m_bindMiniTeamCount;
}

void DescribeTeamDetailResp::SetBindMiniTeamCount(const int64_t& _bindMiniTeamCount)
{
    m_bindMiniTeamCount = _bindMiniTeamCount;
    m_bindMiniTeamCountHasBeenSet = true;
}

bool DescribeTeamDetailResp::BindMiniTeamCountHasBeenSet() const
{
    return m_bindMiniTeamCountHasBeenSet;
}

string DescribeTeamDetailResp::GetBindTeamName() const
{
    return m_bindTeamName;
}

void DescribeTeamDetailResp::SetBindTeamName(const string& _bindTeamName)
{
    m_bindTeamName = _bindTeamName;
    m_bindTeamNameHasBeenSet = true;
}

bool DescribeTeamDetailResp::BindTeamNameHasBeenSet() const
{
    return m_bindTeamNameHasBeenSet;
}

string DescribeTeamDetailResp::GetRegisterLink() const
{
    return m_registerLink;
}

void DescribeTeamDetailResp::SetRegisterLink(const string& _registerLink)
{
    m_registerLink = _registerLink;
    m_registerLinkHasBeenSet = true;
}

bool DescribeTeamDetailResp::RegisterLinkHasBeenSet() const
{
    return m_registerLinkHasBeenSet;
}

string DescribeTeamDetailResp::GetApplicationName() const
{
    return m_applicationName;
}

void DescribeTeamDetailResp::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool DescribeTeamDetailResp::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

int64_t DescribeTeamDetailResp::GetExpireTime() const
{
    return m_expireTime;
}

void DescribeTeamDetailResp::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool DescribeTeamDetailResp::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

int64_t DescribeTeamDetailResp::GetStatus() const
{
    return m_status;
}

void DescribeTeamDetailResp::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeTeamDetailResp::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

