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

#include <tencentcloud/cdwdoris/v20211228/model/UpdateTableSchemaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

UpdateTableSchemaRequest::UpdateTableSchemaRequest() :
    m_instanceIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passWordHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_columnsHasBeenSet(false),
    m_indexInfosHasBeenSet(false),
    m_distributionHasBeenSet(false),
    m_tableCommentHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
}

string UpdateTableSchemaRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
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

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_columnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Columns";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_columns.begin(); itr != m_columns.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_indexInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_indexInfos.begin(); itr != m_indexInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_distributionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Distribution";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_distribution.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tableCommentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableComment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableComment.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateTableSchemaRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpdateTableSchemaRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpdateTableSchemaRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string UpdateTableSchemaRequest::GetUserName() const
{
    return m_userName;
}

void UpdateTableSchemaRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool UpdateTableSchemaRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string UpdateTableSchemaRequest::GetPassWord() const
{
    return m_passWord;
}

void UpdateTableSchemaRequest::SetPassWord(const string& _passWord)
{
    m_passWord = _passWord;
    m_passWordHasBeenSet = true;
}

bool UpdateTableSchemaRequest::PassWordHasBeenSet() const
{
    return m_passWordHasBeenSet;
}

string UpdateTableSchemaRequest::GetDbName() const
{
    return m_dbName;
}

void UpdateTableSchemaRequest::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool UpdateTableSchemaRequest::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string UpdateTableSchemaRequest::GetTableName() const
{
    return m_tableName;
}

void UpdateTableSchemaRequest::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool UpdateTableSchemaRequest::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

vector<Column> UpdateTableSchemaRequest::GetColumns() const
{
    return m_columns;
}

void UpdateTableSchemaRequest::SetColumns(const vector<Column>& _columns)
{
    m_columns = _columns;
    m_columnsHasBeenSet = true;
}

bool UpdateTableSchemaRequest::ColumnsHasBeenSet() const
{
    return m_columnsHasBeenSet;
}

vector<IndexInfo> UpdateTableSchemaRequest::GetIndexInfos() const
{
    return m_indexInfos;
}

void UpdateTableSchemaRequest::SetIndexInfos(const vector<IndexInfo>& _indexInfos)
{
    m_indexInfos = _indexInfos;
    m_indexInfosHasBeenSet = true;
}

bool UpdateTableSchemaRequest::IndexInfosHasBeenSet() const
{
    return m_indexInfosHasBeenSet;
}

Distribution UpdateTableSchemaRequest::GetDistribution() const
{
    return m_distribution;
}

void UpdateTableSchemaRequest::SetDistribution(const Distribution& _distribution)
{
    m_distribution = _distribution;
    m_distributionHasBeenSet = true;
}

bool UpdateTableSchemaRequest::DistributionHasBeenSet() const
{
    return m_distributionHasBeenSet;
}

string UpdateTableSchemaRequest::GetTableComment() const
{
    return m_tableComment;
}

void UpdateTableSchemaRequest::SetTableComment(const string& _tableComment)
{
    m_tableComment = _tableComment;
    m_tableCommentHasBeenSet = true;
}

bool UpdateTableSchemaRequest::TableCommentHasBeenSet() const
{
    return m_tableCommentHasBeenSet;
}

vector<Property> UpdateTableSchemaRequest::GetProperties() const
{
    return m_properties;
}

void UpdateTableSchemaRequest::SetProperties(const vector<Property>& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool UpdateTableSchemaRequest::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}


