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

#include <tencentcloud/tcsas/v20250106/model/TeamAdminUserInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

TeamAdminUserInfo::TeamAdminUserInfo() :
    m_adminUserIdHasBeenSet(false),
    m_adminUserAccountHasBeenSet(false),
    m_adminUserNameHasBeenSet(false)
{
}

CoreInternalOutcome TeamAdminUserInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AdminUserId") && !value["AdminUserId"].IsNull())
    {
        if (!value["AdminUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TeamAdminUserInfo.AdminUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminUserId = string(value["AdminUserId"].GetString());
        m_adminUserIdHasBeenSet = true;
    }

    if (value.HasMember("AdminUserAccount") && !value["AdminUserAccount"].IsNull())
    {
        if (!value["AdminUserAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TeamAdminUserInfo.AdminUserAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminUserAccount = string(value["AdminUserAccount"].GetString());
        m_adminUserAccountHasBeenSet = true;
    }

    if (value.HasMember("AdminUserName") && !value["AdminUserName"].IsNull())
    {
        if (!value["AdminUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TeamAdminUserInfo.AdminUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminUserName = string(value["AdminUserName"].GetString());
        m_adminUserNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TeamAdminUserInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_adminUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adminUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_adminUserAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminUserAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adminUserAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_adminUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adminUserName.c_str(), allocator).Move(), allocator);
    }

}


string TeamAdminUserInfo::GetAdminUserId() const
{
    return m_adminUserId;
}

void TeamAdminUserInfo::SetAdminUserId(const string& _adminUserId)
{
    m_adminUserId = _adminUserId;
    m_adminUserIdHasBeenSet = true;
}

bool TeamAdminUserInfo::AdminUserIdHasBeenSet() const
{
    return m_adminUserIdHasBeenSet;
}

string TeamAdminUserInfo::GetAdminUserAccount() const
{
    return m_adminUserAccount;
}

void TeamAdminUserInfo::SetAdminUserAccount(const string& _adminUserAccount)
{
    m_adminUserAccount = _adminUserAccount;
    m_adminUserAccountHasBeenSet = true;
}

bool TeamAdminUserInfo::AdminUserAccountHasBeenSet() const
{
    return m_adminUserAccountHasBeenSet;
}

string TeamAdminUserInfo::GetAdminUserName() const
{
    return m_adminUserName;
}

void TeamAdminUserInfo::SetAdminUserName(const string& _adminUserName)
{
    m_adminUserName = _adminUserName;
    m_adminUserNameHasBeenSet = true;
}

bool TeamAdminUserInfo::AdminUserNameHasBeenSet() const
{
    return m_adminUserNameHasBeenSet;
}

