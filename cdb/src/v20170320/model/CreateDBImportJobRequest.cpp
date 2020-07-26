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

#include <tencentcloud/cdb/v20170320/model/CreateDBImportJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace rapidjson;
using namespace std;

CreateDBImportJobRequest::CreateDBImportJobRequest() :
    m_instanceIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_userHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_dbNameHasBeenSet(false)
{
}

string CreateDBImportJobRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_dbName.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDBImportJobRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateDBImportJobRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateDBImportJobRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateDBImportJobRequest::GetFileName() const
{
    return m_fileName;
}

void CreateDBImportJobRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool CreateDBImportJobRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string CreateDBImportJobRequest::GetUser() const
{
    return m_user;
}

void CreateDBImportJobRequest::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool CreateDBImportJobRequest::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string CreateDBImportJobRequest::GetPassword() const
{
    return m_password;
}

void CreateDBImportJobRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CreateDBImportJobRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string CreateDBImportJobRequest::GetDbName() const
{
    return m_dbName;
}

void CreateDBImportJobRequest::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool CreateDBImportJobRequest::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}


