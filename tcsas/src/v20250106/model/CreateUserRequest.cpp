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

#include <tencentcloud/tcsas/v20250106/model/CreateUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

CreateUserRequest::CreateUserRequest() :
    m_userAccountHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_accountTypeHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_platformIdHasBeenSet(false)
{
}

string CreateUserRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_userAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAccount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_accountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_accountType, allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
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


string CreateUserRequest::GetUserAccount() const
{
    return m_userAccount;
}

void CreateUserRequest::SetUserAccount(const string& _userAccount)
{
    m_userAccount = _userAccount;
    m_userAccountHasBeenSet = true;
}

bool CreateUserRequest::UserAccountHasBeenSet() const
{
    return m_userAccountHasBeenSet;
}

string CreateUserRequest::GetUserName() const
{
    return m_userName;
}

void CreateUserRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool CreateUserRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

int64_t CreateUserRequest::GetAccountType() const
{
    return m_accountType;
}

void CreateUserRequest::SetAccountType(const int64_t& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool CreateUserRequest::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

string CreateUserRequest::GetPassword() const
{
    return m_password;
}

void CreateUserRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CreateUserRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string CreateUserRequest::GetKeyId() const
{
    return m_keyId;
}

void CreateUserRequest::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool CreateUserRequest::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string CreateUserRequest::GetPlatformId() const
{
    return m_platformId;
}

void CreateUserRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool CreateUserRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}


