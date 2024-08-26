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

#include <tencentcloud/cdwdoris/v20211228/model/DescribeQueryAnalyseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

DescribeQueryAnalyseRequest::DescribeQueryAnalyseRequest() :
    m_instanceIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passWordHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_sQLFragmentHasBeenSet(false),
    m_catalogFilterHasBeenSet(false),
    m_databaseFilterHasBeenSet(false),
    m_sQLTypeFilterHasBeenSet(false),
    m_sortFieldHasBeenSet(false),
    m_sortOrderHasBeenSet(false)
{
}

string DescribeQueryAnalyseRequest::ToJsonString() const
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

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sQLFragmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SQLFragment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sQLFragment.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_catalogFilter.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_databaseFilter.c_str(), allocator).Move(), allocator);
    }

    if (m_sQLTypeFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SQLTypeFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sQLTypeFilter.c_str(), allocator).Move(), allocator);
    }

    if (m_sortFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortField.c_str(), allocator).Move(), allocator);
    }

    if (m_sortOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortOrder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortOrder.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeQueryAnalyseRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeQueryAnalyseRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeQueryAnalyseRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeQueryAnalyseRequest::GetUserName() const
{
    return m_userName;
}

void DescribeQueryAnalyseRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool DescribeQueryAnalyseRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string DescribeQueryAnalyseRequest::GetPassWord() const
{
    return m_passWord;
}

void DescribeQueryAnalyseRequest::SetPassWord(const string& _passWord)
{
    m_passWord = _passWord;
    m_passWordHasBeenSet = true;
}

bool DescribeQueryAnalyseRequest::PassWordHasBeenSet() const
{
    return m_passWordHasBeenSet;
}

string DescribeQueryAnalyseRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeQueryAnalyseRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeQueryAnalyseRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeQueryAnalyseRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeQueryAnalyseRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeQueryAnalyseRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeQueryAnalyseRequest::GetSQLFragment() const
{
    return m_sQLFragment;
}

void DescribeQueryAnalyseRequest::SetSQLFragment(const string& _sQLFragment)
{
    m_sQLFragment = _sQLFragment;
    m_sQLFragmentHasBeenSet = true;
}

bool DescribeQueryAnalyseRequest::SQLFragmentHasBeenSet() const
{
    return m_sQLFragmentHasBeenSet;
}

string DescribeQueryAnalyseRequest::GetCatalogFilter() const
{
    return m_catalogFilter;
}

void DescribeQueryAnalyseRequest::SetCatalogFilter(const string& _catalogFilter)
{
    m_catalogFilter = _catalogFilter;
    m_catalogFilterHasBeenSet = true;
}

bool DescribeQueryAnalyseRequest::CatalogFilterHasBeenSet() const
{
    return m_catalogFilterHasBeenSet;
}

string DescribeQueryAnalyseRequest::GetDatabaseFilter() const
{
    return m_databaseFilter;
}

void DescribeQueryAnalyseRequest::SetDatabaseFilter(const string& _databaseFilter)
{
    m_databaseFilter = _databaseFilter;
    m_databaseFilterHasBeenSet = true;
}

bool DescribeQueryAnalyseRequest::DatabaseFilterHasBeenSet() const
{
    return m_databaseFilterHasBeenSet;
}

string DescribeQueryAnalyseRequest::GetSQLTypeFilter() const
{
    return m_sQLTypeFilter;
}

void DescribeQueryAnalyseRequest::SetSQLTypeFilter(const string& _sQLTypeFilter)
{
    m_sQLTypeFilter = _sQLTypeFilter;
    m_sQLTypeFilterHasBeenSet = true;
}

bool DescribeQueryAnalyseRequest::SQLTypeFilterHasBeenSet() const
{
    return m_sQLTypeFilterHasBeenSet;
}

string DescribeQueryAnalyseRequest::GetSortField() const
{
    return m_sortField;
}

void DescribeQueryAnalyseRequest::SetSortField(const string& _sortField)
{
    m_sortField = _sortField;
    m_sortFieldHasBeenSet = true;
}

bool DescribeQueryAnalyseRequest::SortFieldHasBeenSet() const
{
    return m_sortFieldHasBeenSet;
}

string DescribeQueryAnalyseRequest::GetSortOrder() const
{
    return m_sortOrder;
}

void DescribeQueryAnalyseRequest::SetSortOrder(const string& _sortOrder)
{
    m_sortOrder = _sortOrder;
    m_sortOrderHasBeenSet = true;
}

bool DescribeQueryAnalyseRequest::SortOrderHasBeenSet() const
{
    return m_sortOrderHasBeenSet;
}


