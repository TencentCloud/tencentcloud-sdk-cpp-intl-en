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

#include <tencentcloud/tcmpp/v20240801/model/DescribeTeamMemberInfoResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

DescribeTeamMemberInfoResp::DescribeTeamMemberInfoResp() :
    m_userIdHasBeenSet(false),
    m_userAccountHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_teamIdHasBeenSet(false),
    m_teamNameHasBeenSet(false),
    m_teamRoleNameHasBeenSet(false),
    m_teamRoleIdHasBeenSet(false),
    m_canEditHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTeamMemberInfoResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTeamMemberInfoResp.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserAccount") && !value["UserAccount"].IsNull())
    {
        if (!value["UserAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTeamMemberInfoResp.UserAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userAccount = string(value["UserAccount"].GetString());
        m_userAccountHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTeamMemberInfoResp.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("TeamId") && !value["TeamId"].IsNull())
    {
        if (!value["TeamId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTeamMemberInfoResp.TeamId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teamId = string(value["TeamId"].GetString());
        m_teamIdHasBeenSet = true;
    }

    if (value.HasMember("TeamName") && !value["TeamName"].IsNull())
    {
        if (!value["TeamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTeamMemberInfoResp.TeamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teamName = string(value["TeamName"].GetString());
        m_teamNameHasBeenSet = true;
    }

    if (value.HasMember("TeamRoleName") && !value["TeamRoleName"].IsNull())
    {
        if (!value["TeamRoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTeamMemberInfoResp.TeamRoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teamRoleName = string(value["TeamRoleName"].GetString());
        m_teamRoleNameHasBeenSet = true;
    }

    if (value.HasMember("TeamRoleId") && !value["TeamRoleId"].IsNull())
    {
        if (!value["TeamRoleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTeamMemberInfoResp.TeamRoleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_teamRoleId = value["TeamRoleId"].GetInt64();
        m_teamRoleIdHasBeenSet = true;
    }

    if (value.HasMember("CanEdit") && !value["CanEdit"].IsNull())
    {
        if (!value["CanEdit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTeamMemberInfoResp.CanEdit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canEdit = value["CanEdit"].GetBool();
        m_canEditHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeTeamMemberInfoResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_teamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_teamId.c_str(), allocator).Move(), allocator);
    }

    if (m_teamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_teamName.c_str(), allocator).Move(), allocator);
    }

    if (m_teamRoleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamRoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_teamRoleName.c_str(), allocator).Move(), allocator);
    }

    if (m_teamRoleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamRoleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_teamRoleId, allocator);
    }

    if (m_canEditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanEdit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canEdit, allocator);
    }

}


string DescribeTeamMemberInfoResp::GetUserId() const
{
    return m_userId;
}

void DescribeTeamMemberInfoResp::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DescribeTeamMemberInfoResp::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string DescribeTeamMemberInfoResp::GetUserAccount() const
{
    return m_userAccount;
}

void DescribeTeamMemberInfoResp::SetUserAccount(const string& _userAccount)
{
    m_userAccount = _userAccount;
    m_userAccountHasBeenSet = true;
}

bool DescribeTeamMemberInfoResp::UserAccountHasBeenSet() const
{
    return m_userAccountHasBeenSet;
}

string DescribeTeamMemberInfoResp::GetUserName() const
{
    return m_userName;
}

void DescribeTeamMemberInfoResp::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool DescribeTeamMemberInfoResp::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string DescribeTeamMemberInfoResp::GetTeamId() const
{
    return m_teamId;
}

void DescribeTeamMemberInfoResp::SetTeamId(const string& _teamId)
{
    m_teamId = _teamId;
    m_teamIdHasBeenSet = true;
}

bool DescribeTeamMemberInfoResp::TeamIdHasBeenSet() const
{
    return m_teamIdHasBeenSet;
}

string DescribeTeamMemberInfoResp::GetTeamName() const
{
    return m_teamName;
}

void DescribeTeamMemberInfoResp::SetTeamName(const string& _teamName)
{
    m_teamName = _teamName;
    m_teamNameHasBeenSet = true;
}

bool DescribeTeamMemberInfoResp::TeamNameHasBeenSet() const
{
    return m_teamNameHasBeenSet;
}

string DescribeTeamMemberInfoResp::GetTeamRoleName() const
{
    return m_teamRoleName;
}

void DescribeTeamMemberInfoResp::SetTeamRoleName(const string& _teamRoleName)
{
    m_teamRoleName = _teamRoleName;
    m_teamRoleNameHasBeenSet = true;
}

bool DescribeTeamMemberInfoResp::TeamRoleNameHasBeenSet() const
{
    return m_teamRoleNameHasBeenSet;
}

int64_t DescribeTeamMemberInfoResp::GetTeamRoleId() const
{
    return m_teamRoleId;
}

void DescribeTeamMemberInfoResp::SetTeamRoleId(const int64_t& _teamRoleId)
{
    m_teamRoleId = _teamRoleId;
    m_teamRoleIdHasBeenSet = true;
}

bool DescribeTeamMemberInfoResp::TeamRoleIdHasBeenSet() const
{
    return m_teamRoleIdHasBeenSet;
}

bool DescribeTeamMemberInfoResp::GetCanEdit() const
{
    return m_canEdit;
}

void DescribeTeamMemberInfoResp::SetCanEdit(const bool& _canEdit)
{
    m_canEdit = _canEdit;
    m_canEditHasBeenSet = true;
}

bool DescribeTeamMemberInfoResp::CanEditHasBeenSet() const
{
    return m_canEditHasBeenSet;
}

