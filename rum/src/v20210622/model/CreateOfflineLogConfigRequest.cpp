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

#include <tencentcloud/rum/v20210622/model/CreateOfflineLogConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

CreateOfflineLogConfigRequest::CreateOfflineLogConfigRequest() :
    m_projectKeyHasBeenSet(false),
    m_uniqueIDHasBeenSet(false)
{
}

string CreateOfflineLogConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectKey.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqueIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqueID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uniqueID.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateOfflineLogConfigRequest::GetProjectKey() const
{
    return m_projectKey;
}

void CreateOfflineLogConfigRequest::SetProjectKey(const string& _projectKey)
{
    m_projectKey = _projectKey;
    m_projectKeyHasBeenSet = true;
}

bool CreateOfflineLogConfigRequest::ProjectKeyHasBeenSet() const
{
    return m_projectKeyHasBeenSet;
}

string CreateOfflineLogConfigRequest::GetUniqueID() const
{
    return m_uniqueID;
}

void CreateOfflineLogConfigRequest::SetUniqueID(const string& _uniqueID)
{
    m_uniqueID = _uniqueID;
    m_uniqueIDHasBeenSet = true;
}

bool CreateOfflineLogConfigRequest::UniqueIDHasBeenSet() const
{
    return m_uniqueIDHasBeenSet;
}


