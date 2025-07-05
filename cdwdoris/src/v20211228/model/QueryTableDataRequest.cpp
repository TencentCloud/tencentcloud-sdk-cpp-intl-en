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

#include <tencentcloud/cdwdoris/v20211228/model/QueryTableDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

QueryTableDataRequest::QueryTableDataRequest() :
    m_databaseHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_selectedFieldsHasBeenSet(false),
    m_pageNumHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passWordHasBeenSet(false),
    m_catalogNameHasBeenSet(false)
{
}

string QueryTableDataRequest::ToJsonString() const
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

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_selectedFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectedFields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_selectedFields.begin(); itr != m_selectedFields.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_pageNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNum, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
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


string QueryTableDataRequest::GetDatabase() const
{
    return m_database;
}

void QueryTableDataRequest::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool QueryTableDataRequest::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

string QueryTableDataRequest::GetTable() const
{
    return m_table;
}

void QueryTableDataRequest::SetTable(const string& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool QueryTableDataRequest::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

string QueryTableDataRequest::GetInstanceId() const
{
    return m_instanceId;
}

void QueryTableDataRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool QueryTableDataRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> QueryTableDataRequest::GetSelectedFields() const
{
    return m_selectedFields;
}

void QueryTableDataRequest::SetSelectedFields(const vector<string>& _selectedFields)
{
    m_selectedFields = _selectedFields;
    m_selectedFieldsHasBeenSet = true;
}

bool QueryTableDataRequest::SelectedFieldsHasBeenSet() const
{
    return m_selectedFieldsHasBeenSet;
}

uint64_t QueryTableDataRequest::GetPageNum() const
{
    return m_pageNum;
}

void QueryTableDataRequest::SetPageNum(const uint64_t& _pageNum)
{
    m_pageNum = _pageNum;
    m_pageNumHasBeenSet = true;
}

bool QueryTableDataRequest::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

uint64_t QueryTableDataRequest::GetPageSize() const
{
    return m_pageSize;
}

void QueryTableDataRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool QueryTableDataRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string QueryTableDataRequest::GetUserName() const
{
    return m_userName;
}

void QueryTableDataRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool QueryTableDataRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string QueryTableDataRequest::GetPassWord() const
{
    return m_passWord;
}

void QueryTableDataRequest::SetPassWord(const string& _passWord)
{
    m_passWord = _passWord;
    m_passWordHasBeenSet = true;
}

bool QueryTableDataRequest::PassWordHasBeenSet() const
{
    return m_passWordHasBeenSet;
}

string QueryTableDataRequest::GetCatalogName() const
{
    return m_catalogName;
}

void QueryTableDataRequest::SetCatalogName(const string& _catalogName)
{
    m_catalogName = _catalogName;
    m_catalogNameHasBeenSet = true;
}

bool QueryTableDataRequest::CatalogNameHasBeenSet() const
{
    return m_catalogNameHasBeenSet;
}


