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

#include <tencentcloud/sqlserver/v20180328/model/ModifyDatabaseCDCRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

ModifyDatabaseCDCRequest::ModifyDatabaseCDCRequest() :
    m_dBNamesHasBeenSet(false),
    m_modifyTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

string ModifyDatabaseCDCRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dBNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dBNames.begin(); itr != m_dBNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_modifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modifyType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyDatabaseCDCRequest::GetDBNames() const
{
    return m_dBNames;
}

void ModifyDatabaseCDCRequest::SetDBNames(const vector<string>& _dBNames)
{
    m_dBNames = _dBNames;
    m_dBNamesHasBeenSet = true;
}

bool ModifyDatabaseCDCRequest::DBNamesHasBeenSet() const
{
    return m_dBNamesHasBeenSet;
}

string ModifyDatabaseCDCRequest::GetModifyType() const
{
    return m_modifyType;
}

void ModifyDatabaseCDCRequest::SetModifyType(const string& _modifyType)
{
    m_modifyType = _modifyType;
    m_modifyTypeHasBeenSet = true;
}

bool ModifyDatabaseCDCRequest::ModifyTypeHasBeenSet() const
{
    return m_modifyTypeHasBeenSet;
}

string ModifyDatabaseCDCRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyDatabaseCDCRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyDatabaseCDCRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}


