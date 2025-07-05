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

#include <tencentcloud/tcmpp/v20240801/model/DescribeTeamMembersInfoResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

DescribeTeamMembersInfoResp::DescribeTeamMembersInfoResp() :
    m_userIdHasBeenSet(false),
    m_userAccountHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_userRolesHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTeamMembersInfoResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTeamMembersInfoResp.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserAccount") && !value["UserAccount"].IsNull())
    {
        if (!value["UserAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTeamMembersInfoResp.UserAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userAccount = string(value["UserAccount"].GetString());
        m_userAccountHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTeamMembersInfoResp.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("UserRoles") && !value["UserRoles"].IsNull())
    {
        if (!value["UserRoles"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTeamMembersInfoResp.UserRoles` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userRoles = string(value["UserRoles"].GetString());
        m_userRolesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeTeamMembersInfoResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_userRolesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserRoles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userRoles.c_str(), allocator).Move(), allocator);
    }

}


string DescribeTeamMembersInfoResp::GetUserId() const
{
    return m_userId;
}

void DescribeTeamMembersInfoResp::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DescribeTeamMembersInfoResp::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string DescribeTeamMembersInfoResp::GetUserAccount() const
{
    return m_userAccount;
}

void DescribeTeamMembersInfoResp::SetUserAccount(const string& _userAccount)
{
    m_userAccount = _userAccount;
    m_userAccountHasBeenSet = true;
}

bool DescribeTeamMembersInfoResp::UserAccountHasBeenSet() const
{
    return m_userAccountHasBeenSet;
}

string DescribeTeamMembersInfoResp::GetUserName() const
{
    return m_userName;
}

void DescribeTeamMembersInfoResp::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool DescribeTeamMembersInfoResp::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string DescribeTeamMembersInfoResp::GetUserRoles() const
{
    return m_userRoles;
}

void DescribeTeamMembersInfoResp::SetUserRoles(const string& _userRoles)
{
    m_userRoles = _userRoles;
    m_userRolesHasBeenSet = true;
}

bool DescribeTeamMembersInfoResp::UserRolesHasBeenSet() const
{
    return m_userRolesHasBeenSet;
}

