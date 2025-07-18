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

#include <tencentcloud/cdwdoris/v20211228/model/ModifyDatabaseTableAccessRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

ModifyDatabaseTableAccessRequest::ModifyDatabaseTableAccessRequest() :
    m_databaseHasBeenSet(false),
    m_privilegesHasBeenSet(false),
    m_grantOrRevokeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passWordHasBeenSet(false),
    m_catalogNameHasBeenSet(false),
    m_whiteHostHasBeenSet(false)
{
}

string ModifyDatabaseTableAccessRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_privilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Privileges";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_privileges.begin(); itr != m_privileges.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_grantOrRevokeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrantOrRevoke";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_grantOrRevoke.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Table";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_table.c_str(), allocator).Move(), allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_passWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_passWord.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_catalogName.c_str(), allocator).Move(), allocator);
    }

    if (m_whiteHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteHost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_whiteHost.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDatabaseTableAccessRequest::GetDatabase() const
{
    return m_database;
}

void ModifyDatabaseTableAccessRequest::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool ModifyDatabaseTableAccessRequest::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

vector<string> ModifyDatabaseTableAccessRequest::GetPrivileges() const
{
    return m_privileges;
}

void ModifyDatabaseTableAccessRequest::SetPrivileges(const vector<string>& _privileges)
{
    m_privileges = _privileges;
    m_privilegesHasBeenSet = true;
}

bool ModifyDatabaseTableAccessRequest::PrivilegesHasBeenSet() const
{
    return m_privilegesHasBeenSet;
}

string ModifyDatabaseTableAccessRequest::GetGrantOrRevoke() const
{
    return m_grantOrRevoke;
}

void ModifyDatabaseTableAccessRequest::SetGrantOrRevoke(const string& _grantOrRevoke)
{
    m_grantOrRevoke = _grantOrRevoke;
    m_grantOrRevokeHasBeenSet = true;
}

bool ModifyDatabaseTableAccessRequest::GrantOrRevokeHasBeenSet() const
{
    return m_grantOrRevokeHasBeenSet;
}

string ModifyDatabaseTableAccessRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyDatabaseTableAccessRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyDatabaseTableAccessRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyDatabaseTableAccessRequest::GetTable() const
{
    return m_table;
}

void ModifyDatabaseTableAccessRequest::SetTable(const string& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool ModifyDatabaseTableAccessRequest::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

string ModifyDatabaseTableAccessRequest::GetRole() const
{
    return m_role;
}

void ModifyDatabaseTableAccessRequest::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool ModifyDatabaseTableAccessRequest::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string ModifyDatabaseTableAccessRequest::GetUserName() const
{
    return m_userName;
}

void ModifyDatabaseTableAccessRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ModifyDatabaseTableAccessRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string ModifyDatabaseTableAccessRequest::GetPassWord() const
{
    return m_passWord;
}

void ModifyDatabaseTableAccessRequest::SetPassWord(const string& _passWord)
{
    m_passWord = _passWord;
    m_passWordHasBeenSet = true;
}

bool ModifyDatabaseTableAccessRequest::PassWordHasBeenSet() const
{
    return m_passWordHasBeenSet;
}

string ModifyDatabaseTableAccessRequest::GetCatalogName() const
{
    return m_catalogName;
}

void ModifyDatabaseTableAccessRequest::SetCatalogName(const string& _catalogName)
{
    m_catalogName = _catalogName;
    m_catalogNameHasBeenSet = true;
}

bool ModifyDatabaseTableAccessRequest::CatalogNameHasBeenSet() const
{
    return m_catalogNameHasBeenSet;
}

string ModifyDatabaseTableAccessRequest::GetWhiteHost() const
{
    return m_whiteHost;
}

void ModifyDatabaseTableAccessRequest::SetWhiteHost(const string& _whiteHost)
{
    m_whiteHost = _whiteHost;
    m_whiteHostHasBeenSet = true;
}

bool ModifyDatabaseTableAccessRequest::WhiteHostHasBeenSet() const
{
    return m_whiteHostHasBeenSet;
}


