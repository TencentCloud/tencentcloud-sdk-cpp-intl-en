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

#include <tencentcloud/cdwdoris/v20211228/model/CopyTableDatasRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

CopyTableDatasRequest::CopyTableDatasRequest() :
    m_instanceIdHasBeenSet(false),
    m_copiedFromDbHasBeenSet(false),
    m_copiedFromTableHasBeenSet(false),
    m_copyToDbHasBeenSet(false),
    m_copyToTableHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passWordHasBeenSet(false),
    m_isDataOverwriteHasBeenSet(false)
{
}

string CopyTableDatasRequest::ToJsonString() const
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

    if (m_copiedFromDbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopiedFromDb";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_copiedFromDb.c_str(), allocator).Move(), allocator);
    }

    if (m_copiedFromTableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopiedFromTable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_copiedFromTable.c_str(), allocator).Move(), allocator);
    }

    if (m_copyToDbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyToDb";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_copyToDb.c_str(), allocator).Move(), allocator);
    }

    if (m_copyToTableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyToTable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_copyToTable.c_str(), allocator).Move(), allocator);
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

    if (m_isDataOverwriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDataOverwrite";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDataOverwrite, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CopyTableDatasRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CopyTableDatasRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CopyTableDatasRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CopyTableDatasRequest::GetCopiedFromDb() const
{
    return m_copiedFromDb;
}

void CopyTableDatasRequest::SetCopiedFromDb(const string& _copiedFromDb)
{
    m_copiedFromDb = _copiedFromDb;
    m_copiedFromDbHasBeenSet = true;
}

bool CopyTableDatasRequest::CopiedFromDbHasBeenSet() const
{
    return m_copiedFromDbHasBeenSet;
}

string CopyTableDatasRequest::GetCopiedFromTable() const
{
    return m_copiedFromTable;
}

void CopyTableDatasRequest::SetCopiedFromTable(const string& _copiedFromTable)
{
    m_copiedFromTable = _copiedFromTable;
    m_copiedFromTableHasBeenSet = true;
}

bool CopyTableDatasRequest::CopiedFromTableHasBeenSet() const
{
    return m_copiedFromTableHasBeenSet;
}

string CopyTableDatasRequest::GetCopyToDb() const
{
    return m_copyToDb;
}

void CopyTableDatasRequest::SetCopyToDb(const string& _copyToDb)
{
    m_copyToDb = _copyToDb;
    m_copyToDbHasBeenSet = true;
}

bool CopyTableDatasRequest::CopyToDbHasBeenSet() const
{
    return m_copyToDbHasBeenSet;
}

string CopyTableDatasRequest::GetCopyToTable() const
{
    return m_copyToTable;
}

void CopyTableDatasRequest::SetCopyToTable(const string& _copyToTable)
{
    m_copyToTable = _copyToTable;
    m_copyToTableHasBeenSet = true;
}

bool CopyTableDatasRequest::CopyToTableHasBeenSet() const
{
    return m_copyToTableHasBeenSet;
}

string CopyTableDatasRequest::GetUserName() const
{
    return m_userName;
}

void CopyTableDatasRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool CopyTableDatasRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string CopyTableDatasRequest::GetPassWord() const
{
    return m_passWord;
}

void CopyTableDatasRequest::SetPassWord(const string& _passWord)
{
    m_passWord = _passWord;
    m_passWordHasBeenSet = true;
}

bool CopyTableDatasRequest::PassWordHasBeenSet() const
{
    return m_passWordHasBeenSet;
}

bool CopyTableDatasRequest::GetIsDataOverwrite() const
{
    return m_isDataOverwrite;
}

void CopyTableDatasRequest::SetIsDataOverwrite(const bool& _isDataOverwrite)
{
    m_isDataOverwrite = _isDataOverwrite;
    m_isDataOverwriteHasBeenSet = true;
}

bool CopyTableDatasRequest::IsDataOverwriteHasBeenSet() const
{
    return m_isDataOverwriteHasBeenSet;
}


