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

#include <tencentcloud/tke/v20180525/model/ModifyClusterAsGroupAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ModifyClusterAsGroupAttributeRequest::ModifyClusterAsGroupAttributeRequest() :
    m_clusterIdHasBeenSet(false),
    m_clusterAsGroupAttributeHasBeenSet(false)
{
}

string ModifyClusterAsGroupAttributeRequest::ToJsonString() const
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

    if (m_clusterAsGroupAttributeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterAsGroupAttribute";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clusterAsGroupAttribute.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyClusterAsGroupAttributeRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyClusterAsGroupAttributeRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyClusterAsGroupAttributeRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

ClusterAsGroupAttribute ModifyClusterAsGroupAttributeRequest::GetClusterAsGroupAttribute() const
{
    return m_clusterAsGroupAttribute;
}

void ModifyClusterAsGroupAttributeRequest::SetClusterAsGroupAttribute(const ClusterAsGroupAttribute& _clusterAsGroupAttribute)
{
    m_clusterAsGroupAttribute = _clusterAsGroupAttribute;
    m_clusterAsGroupAttributeHasBeenSet = true;
}

bool ModifyClusterAsGroupAttributeRequest::ClusterAsGroupAttributeHasBeenSet() const
{
    return m_clusterAsGroupAttributeHasBeenSet;
}


