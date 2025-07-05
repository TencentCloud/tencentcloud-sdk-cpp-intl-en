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

#include <tencentcloud/postgres/v20170312/model/DeleteServerlessDBInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

DeleteServerlessDBInstanceRequest::DeleteServerlessDBInstanceRequest() :
    m_dBInstanceNameHasBeenSet(false),
    m_dBInstanceIdHasBeenSet(false)
{
}

string DeleteServerlessDBInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dBInstanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBInstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBInstanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_dBInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBInstanceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteServerlessDBInstanceRequest::GetDBInstanceName() const
{
    return m_dBInstanceName;
}

void DeleteServerlessDBInstanceRequest::SetDBInstanceName(const string& _dBInstanceName)
{
    m_dBInstanceName = _dBInstanceName;
    m_dBInstanceNameHasBeenSet = true;
}

bool DeleteServerlessDBInstanceRequest::DBInstanceNameHasBeenSet() const
{
    return m_dBInstanceNameHasBeenSet;
}

string DeleteServerlessDBInstanceRequest::GetDBInstanceId() const
{
    return m_dBInstanceId;
}

void DeleteServerlessDBInstanceRequest::SetDBInstanceId(const string& _dBInstanceId)
{
    m_dBInstanceId = _dBInstanceId;
    m_dBInstanceIdHasBeenSet = true;
}

bool DeleteServerlessDBInstanceRequest::DBInstanceIdHasBeenSet() const
{
    return m_dBInstanceIdHasBeenSet;
}


