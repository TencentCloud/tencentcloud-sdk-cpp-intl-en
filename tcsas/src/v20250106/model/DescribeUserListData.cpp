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

#include <tencentcloud/tcsas/v20250106/model/DescribeUserListData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeUserListData::DescribeUserListData() :
    m_userIdHasBeenSet(false),
    m_userAccountHasBeenSet(false),
    m_accountTypeHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_teamNameHasBeenSet(false)
{
}

CoreInternalOutcome DescribeUserListData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeUserListData.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserAccount") && !value["UserAccount"].IsNull())
    {
        if (!value["UserAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeUserListData.UserAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userAccount = string(value["UserAccount"].GetString());
        m_userAccountHasBeenSet = true;
    }

    if (value.HasMember("AccountType") && !value["AccountType"].IsNull())
    {
        if (!value["AccountType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeUserListData.AccountType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accountType = value["AccountType"].GetInt64();
        m_accountTypeHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeUserListData.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeUserListData.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeUserListData.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TeamName") && !value["TeamName"].IsNull())
    {
        if (!value["TeamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeUserListData.TeamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teamName = string(value["TeamName"].GetString());
        m_teamNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeUserListData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_accountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountType, allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
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

    if (m_teamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_teamName.c_str(), allocator).Move(), allocator);
    }

}


string DescribeUserListData::GetUserId() const
{
    return m_userId;
}

void DescribeUserListData::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DescribeUserListData::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string DescribeUserListData::GetUserAccount() const
{
    return m_userAccount;
}

void DescribeUserListData::SetUserAccount(const string& _userAccount)
{
    m_userAccount = _userAccount;
    m_userAccountHasBeenSet = true;
}

bool DescribeUserListData::UserAccountHasBeenSet() const
{
    return m_userAccountHasBeenSet;
}

int64_t DescribeUserListData::GetAccountType() const
{
    return m_accountType;
}

void DescribeUserListData::SetAccountType(const int64_t& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool DescribeUserListData::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

string DescribeUserListData::GetUserName() const
{
    return m_userName;
}

void DescribeUserListData::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool DescribeUserListData::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string DescribeUserListData::GetCreateTime() const
{
    return m_createTime;
}

void DescribeUserListData::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeUserListData::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t DescribeUserListData::GetStatus() const
{
    return m_status;
}

void DescribeUserListData::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeUserListData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeUserListData::GetTeamName() const
{
    return m_teamName;
}

void DescribeUserListData::SetTeamName(const string& _teamName)
{
    m_teamName = _teamName;
    m_teamNameHasBeenSet = true;
}

bool DescribeUserListData::TeamNameHasBeenSet() const
{
    return m_teamNameHasBeenSet;
}

