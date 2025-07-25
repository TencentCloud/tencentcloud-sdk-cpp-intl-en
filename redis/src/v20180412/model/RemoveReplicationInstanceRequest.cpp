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

#include <tencentcloud/redis/v20180412/model/RemoveReplicationInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

RemoveReplicationInstanceRequest::RemoveReplicationInstanceRequest() :
    m_groupIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_syncTypeHasBeenSet(false)
{
}

string RemoveReplicationInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_syncTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_syncType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RemoveReplicationInstanceRequest::GetGroupId() const
{
    return m_groupId;
}

void RemoveReplicationInstanceRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool RemoveReplicationInstanceRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string RemoveReplicationInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void RemoveReplicationInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RemoveReplicationInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

bool RemoveReplicationInstanceRequest::GetSyncType() const
{
    return m_syncType;
}

void RemoveReplicationInstanceRequest::SetSyncType(const bool& _syncType)
{
    m_syncType = _syncType;
    m_syncTypeHasBeenSet = true;
}

bool RemoveReplicationInstanceRequest::SyncTypeHasBeenSet() const
{
    return m_syncTypeHasBeenSet;
}


