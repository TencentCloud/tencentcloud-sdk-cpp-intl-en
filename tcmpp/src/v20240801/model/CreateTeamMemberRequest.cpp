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

#include <tencentcloud/tcmpp/v20240801/model/CreateTeamMemberRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

CreateTeamMemberRequest::CreateTeamMemberRequest() :
    m_userNameHasBeenSet(false),
    m_userAccountHasBeenSet(false),
    m_userPasswordHasBeenSet(false),
    m_teamIdHasBeenSet(false),
    m_roleIdHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_platformIdHasBeenSet(false)
{
}

string CreateTeamMemberRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_userAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAccount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_userPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_teamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_teamId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roleId, allocator);
    }

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTeamMemberRequest::GetUserName() const
{
    return m_userName;
}

void CreateTeamMemberRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool CreateTeamMemberRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string CreateTeamMemberRequest::GetUserAccount() const
{
    return m_userAccount;
}

void CreateTeamMemberRequest::SetUserAccount(const string& _userAccount)
{
    m_userAccount = _userAccount;
    m_userAccountHasBeenSet = true;
}

bool CreateTeamMemberRequest::UserAccountHasBeenSet() const
{
    return m_userAccountHasBeenSet;
}

string CreateTeamMemberRequest::GetUserPassword() const
{
    return m_userPassword;
}

void CreateTeamMemberRequest::SetUserPassword(const string& _userPassword)
{
    m_userPassword = _userPassword;
    m_userPasswordHasBeenSet = true;
}

bool CreateTeamMemberRequest::UserPasswordHasBeenSet() const
{
    return m_userPasswordHasBeenSet;
}

string CreateTeamMemberRequest::GetTeamId() const
{
    return m_teamId;
}

void CreateTeamMemberRequest::SetTeamId(const string& _teamId)
{
    m_teamId = _teamId;
    m_teamIdHasBeenSet = true;
}

bool CreateTeamMemberRequest::TeamIdHasBeenSet() const
{
    return m_teamIdHasBeenSet;
}

int64_t CreateTeamMemberRequest::GetRoleId() const
{
    return m_roleId;
}

void CreateTeamMemberRequest::SetRoleId(const int64_t& _roleId)
{
    m_roleId = _roleId;
    m_roleIdHasBeenSet = true;
}

bool CreateTeamMemberRequest::RoleIdHasBeenSet() const
{
    return m_roleIdHasBeenSet;
}

string CreateTeamMemberRequest::GetKeyId() const
{
    return m_keyId;
}

void CreateTeamMemberRequest::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool CreateTeamMemberRequest::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string CreateTeamMemberRequest::GetPlatformId() const
{
    return m_platformId;
}

void CreateTeamMemberRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool CreateTeamMemberRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}


