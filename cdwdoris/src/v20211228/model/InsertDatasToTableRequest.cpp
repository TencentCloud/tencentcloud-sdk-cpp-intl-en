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

#include <tencentcloud/cdwdoris/v20211228/model/InsertDatasToTableRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

InsertDatasToTableRequest::InsertDatasToTableRequest() :
    m_databaseHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_columnsHasBeenSet(false),
    m_rowsHasBeenSet(false),
    m_typesHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_strictHasBeenSet(false),
    m_maxFilterRatioHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passWordHasBeenSet(false),
    m_catalogNameHasBeenSet(false)
{
}

string InsertDatasToTableRequest::ToJsonString() const
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

    if (m_tableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Table";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_table.c_str(), allocator).Move(), allocator);
    }

    if (m_columnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Columns";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_columns.begin(); itr != m_columns.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_rowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rows";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rows.begin(); itr != m_rows.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_typesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Types";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_types.begin(); itr != m_types.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_strictHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Strict";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_strict, allocator);
    }

    if (m_maxFilterRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxFilterRatio";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxFilterRatio, allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
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


string InsertDatasToTableRequest::GetDatabase() const
{
    return m_database;
}

void InsertDatasToTableRequest::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool InsertDatasToTableRequest::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

string InsertDatasToTableRequest::GetTable() const
{
    return m_table;
}

void InsertDatasToTableRequest::SetTable(const string& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool InsertDatasToTableRequest::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

vector<string> InsertDatasToTableRequest::GetColumns() const
{
    return m_columns;
}

void InsertDatasToTableRequest::SetColumns(const vector<string>& _columns)
{
    m_columns = _columns;
    m_columnsHasBeenSet = true;
}

bool InsertDatasToTableRequest::ColumnsHasBeenSet() const
{
    return m_columnsHasBeenSet;
}

vector<Rows> InsertDatasToTableRequest::GetRows() const
{
    return m_rows;
}

void InsertDatasToTableRequest::SetRows(const vector<Rows>& _rows)
{
    m_rows = _rows;
    m_rowsHasBeenSet = true;
}

bool InsertDatasToTableRequest::RowsHasBeenSet() const
{
    return m_rowsHasBeenSet;
}

vector<string> InsertDatasToTableRequest::GetTypes() const
{
    return m_types;
}

void InsertDatasToTableRequest::SetTypes(const vector<string>& _types)
{
    m_types = _types;
    m_typesHasBeenSet = true;
}

bool InsertDatasToTableRequest::TypesHasBeenSet() const
{
    return m_typesHasBeenSet;
}

string InsertDatasToTableRequest::GetInstanceId() const
{
    return m_instanceId;
}

void InsertDatasToTableRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InsertDatasToTableRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

bool InsertDatasToTableRequest::GetStrict() const
{
    return m_strict;
}

void InsertDatasToTableRequest::SetStrict(const bool& _strict)
{
    m_strict = _strict;
    m_strictHasBeenSet = true;
}

bool InsertDatasToTableRequest::StrictHasBeenSet() const
{
    return m_strictHasBeenSet;
}

double InsertDatasToTableRequest::GetMaxFilterRatio() const
{
    return m_maxFilterRatio;
}

void InsertDatasToTableRequest::SetMaxFilterRatio(const double& _maxFilterRatio)
{
    m_maxFilterRatio = _maxFilterRatio;
    m_maxFilterRatioHasBeenSet = true;
}

bool InsertDatasToTableRequest::MaxFilterRatioHasBeenSet() const
{
    return m_maxFilterRatioHasBeenSet;
}

string InsertDatasToTableRequest::GetLabel() const
{
    return m_label;
}

void InsertDatasToTableRequest::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool InsertDatasToTableRequest::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string InsertDatasToTableRequest::GetUserName() const
{
    return m_userName;
}

void InsertDatasToTableRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool InsertDatasToTableRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string InsertDatasToTableRequest::GetPassWord() const
{
    return m_passWord;
}

void InsertDatasToTableRequest::SetPassWord(const string& _passWord)
{
    m_passWord = _passWord;
    m_passWordHasBeenSet = true;
}

bool InsertDatasToTableRequest::PassWordHasBeenSet() const
{
    return m_passWordHasBeenSet;
}

string InsertDatasToTableRequest::GetCatalogName() const
{
    return m_catalogName;
}

void InsertDatasToTableRequest::SetCatalogName(const string& _catalogName)
{
    m_catalogName = _catalogName;
    m_catalogNameHasBeenSet = true;
}

bool InsertDatasToTableRequest::CatalogNameHasBeenSet() const
{
    return m_catalogNameHasBeenSet;
}


