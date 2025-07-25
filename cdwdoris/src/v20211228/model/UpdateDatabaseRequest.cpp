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

#include <tencentcloud/cdwdoris/v20211228/model/UpdateDatabaseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

UpdateDatabaseRequest::UpdateDatabaseRequest() :
    m_dbNameHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_quotaHasBeenSet(false),
    m_newDbNameHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passWordHasBeenSet(false),
    m_catalogNameHasBeenSet(false)
{
}

string UpdateDatabaseRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quota";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_quota.c_str(), allocator).Move(), allocator);
    }

    if (m_newDbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewDbName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newDbName.c_str(), allocator).Move(), allocator);
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_properties.begin(); itr != m_properties.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateDatabaseRequest::GetDbName() const
{
    return m_dbName;
}

void UpdateDatabaseRequest::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool UpdateDatabaseRequest::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string UpdateDatabaseRequest::GetOperation() const
{
    return m_operation;
}

void UpdateDatabaseRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool UpdateDatabaseRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string UpdateDatabaseRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpdateDatabaseRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpdateDatabaseRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string UpdateDatabaseRequest::GetQuota() const
{
    return m_quota;
}

void UpdateDatabaseRequest::SetQuota(const string& _quota)
{
    m_quota = _quota;
    m_quotaHasBeenSet = true;
}

bool UpdateDatabaseRequest::QuotaHasBeenSet() const
{
    return m_quotaHasBeenSet;
}

string UpdateDatabaseRequest::GetNewDbName() const
{
    return m_newDbName;
}

void UpdateDatabaseRequest::SetNewDbName(const string& _newDbName)
{
    m_newDbName = _newDbName;
    m_newDbNameHasBeenSet = true;
}

bool UpdateDatabaseRequest::NewDbNameHasBeenSet() const
{
    return m_newDbNameHasBeenSet;
}

vector<PropertiesMap> UpdateDatabaseRequest::GetProperties() const
{
    return m_properties;
}

void UpdateDatabaseRequest::SetProperties(const vector<PropertiesMap>& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool UpdateDatabaseRequest::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

string UpdateDatabaseRequest::GetUserName() const
{
    return m_userName;
}

void UpdateDatabaseRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool UpdateDatabaseRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string UpdateDatabaseRequest::GetPassWord() const
{
    return m_passWord;
}

void UpdateDatabaseRequest::SetPassWord(const string& _passWord)
{
    m_passWord = _passWord;
    m_passWordHasBeenSet = true;
}

bool UpdateDatabaseRequest::PassWordHasBeenSet() const
{
    return m_passWordHasBeenSet;
}

string UpdateDatabaseRequest::GetCatalogName() const
{
    return m_catalogName;
}

void UpdateDatabaseRequest::SetCatalogName(const string& _catalogName)
{
    m_catalogName = _catalogName;
    m_catalogNameHasBeenSet = true;
}

bool UpdateDatabaseRequest::CatalogNameHasBeenSet() const
{
    return m_catalogNameHasBeenSet;
}


