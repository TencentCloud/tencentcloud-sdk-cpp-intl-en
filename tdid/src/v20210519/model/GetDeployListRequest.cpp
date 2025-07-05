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

#include <tencentcloud/tdid/v20210519/model/GetDeployListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

GetDeployListRequest::GetDeployListRequest() :
    m_clusterIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_displayStartHasBeenSet(false),
    m_displayLengthHasBeenSet(false)
{
}

string GetDeployListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_groupId, allocator);
    }

    if (m_displayStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_displayStart, allocator);
    }

    if (m_displayLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayLength";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_displayLength, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetDeployListRequest::GetClusterId() const
{
    return m_clusterId;
}

void GetDeployListRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool GetDeployListRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

uint64_t GetDeployListRequest::GetGroupId() const
{
    return m_groupId;
}

void GetDeployListRequest::SetGroupId(const uint64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool GetDeployListRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

uint64_t GetDeployListRequest::GetDisplayStart() const
{
    return m_displayStart;
}

void GetDeployListRequest::SetDisplayStart(const uint64_t& _displayStart)
{
    m_displayStart = _displayStart;
    m_displayStartHasBeenSet = true;
}

bool GetDeployListRequest::DisplayStartHasBeenSet() const
{
    return m_displayStartHasBeenSet;
}

uint64_t GetDeployListRequest::GetDisplayLength() const
{
    return m_displayLength;
}

void GetDeployListRequest::SetDisplayLength(const uint64_t& _displayLength)
{
    m_displayLength = _displayLength;
    m_displayLengthHasBeenSet = true;
}

bool GetDeployListRequest::DisplayLengthHasBeenSet() const
{
    return m_displayLengthHasBeenSet;
}


