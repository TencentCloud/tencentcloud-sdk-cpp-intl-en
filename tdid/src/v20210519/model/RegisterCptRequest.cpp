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

#include <tencentcloud/tdid/v20210519/model/RegisterCptRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

RegisterCptRequest::RegisterCptRequest() :
    m_groupIdHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_cptJsonHasBeenSet(false),
    m_cptIdHasBeenSet(false)
{
}

string RegisterCptRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_groupId, allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_cptJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CptJson";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cptJson.c_str(), allocator).Move(), allocator);
    }

    if (m_cptIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CptId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cptId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t RegisterCptRequest::GetGroupId() const
{
    return m_groupId;
}

void RegisterCptRequest::SetGroupId(const uint64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool RegisterCptRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string RegisterCptRequest::GetClusterId() const
{
    return m_clusterId;
}

void RegisterCptRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool RegisterCptRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string RegisterCptRequest::GetCptJson() const
{
    return m_cptJson;
}

void RegisterCptRequest::SetCptJson(const string& _cptJson)
{
    m_cptJson = _cptJson;
    m_cptJsonHasBeenSet = true;
}

bool RegisterCptRequest::CptJsonHasBeenSet() const
{
    return m_cptJsonHasBeenSet;
}

uint64_t RegisterCptRequest::GetCptId() const
{
    return m_cptId;
}

void RegisterCptRequest::SetCptId(const uint64_t& _cptId)
{
    m_cptId = _cptId;
    m_cptIdHasBeenSet = true;
}

bool RegisterCptRequest::CptIdHasBeenSet() const
{
    return m_cptIdHasBeenSet;
}


