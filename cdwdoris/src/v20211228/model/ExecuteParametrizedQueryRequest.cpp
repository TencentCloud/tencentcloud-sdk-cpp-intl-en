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

#include <tencentcloud/cdwdoris/v20211228/model/ExecuteParametrizedQueryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

ExecuteParametrizedQueryRequest::ExecuteParametrizedQueryRequest() :
    m_databaseHasBeenSet(false),
    m_sqlHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_queryParameterHasBeenSet(false),
    m_pageNumHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passWordHasBeenSet(false),
    m_catalogNameHasBeenSet(false)
{
}

string ExecuteParametrizedQueryRequest::ToJsonString() const
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

    if (m_sqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sql";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sql.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_queryParameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryParameter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_queryParameter.begin(); itr != m_queryParameter.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
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


string ExecuteParametrizedQueryRequest::GetDatabase() const
{
    return m_database;
}

void ExecuteParametrizedQueryRequest::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool ExecuteParametrizedQueryRequest::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

string ExecuteParametrizedQueryRequest::GetSql() const
{
    return m_sql;
}

void ExecuteParametrizedQueryRequest::SetSql(const string& _sql)
{
    m_sql = _sql;
    m_sqlHasBeenSet = true;
}

bool ExecuteParametrizedQueryRequest::SqlHasBeenSet() const
{
    return m_sqlHasBeenSet;
}

string ExecuteParametrizedQueryRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ExecuteParametrizedQueryRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ExecuteParametrizedQueryRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<PropertiesMap> ExecuteParametrizedQueryRequest::GetQueryParameter() const
{
    return m_queryParameter;
}

void ExecuteParametrizedQueryRequest::SetQueryParameter(const vector<PropertiesMap>& _queryParameter)
{
    m_queryParameter = _queryParameter;
    m_queryParameterHasBeenSet = true;
}

bool ExecuteParametrizedQueryRequest::QueryParameterHasBeenSet() const
{
    return m_queryParameterHasBeenSet;
}

uint64_t ExecuteParametrizedQueryRequest::GetPageNum() const
{
    return m_pageNum;
}

void ExecuteParametrizedQueryRequest::SetPageNum(const uint64_t& _pageNum)
{
    m_pageNum = _pageNum;
    m_pageNumHasBeenSet = true;
}

bool ExecuteParametrizedQueryRequest::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

uint64_t ExecuteParametrizedQueryRequest::GetPageSize() const
{
    return m_pageSize;
}

void ExecuteParametrizedQueryRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ExecuteParametrizedQueryRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string ExecuteParametrizedQueryRequest::GetUserName() const
{
    return m_userName;
}

void ExecuteParametrizedQueryRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ExecuteParametrizedQueryRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string ExecuteParametrizedQueryRequest::GetPassWord() const
{
    return m_passWord;
}

void ExecuteParametrizedQueryRequest::SetPassWord(const string& _passWord)
{
    m_passWord = _passWord;
    m_passWordHasBeenSet = true;
}

bool ExecuteParametrizedQueryRequest::PassWordHasBeenSet() const
{
    return m_passWordHasBeenSet;
}

string ExecuteParametrizedQueryRequest::GetCatalogName() const
{
    return m_catalogName;
}

void ExecuteParametrizedQueryRequest::SetCatalogName(const string& _catalogName)
{
    m_catalogName = _catalogName;
    m_catalogNameHasBeenSet = true;
}

bool ExecuteParametrizedQueryRequest::CatalogNameHasBeenSet() const
{
    return m_catalogNameHasBeenSet;
}


