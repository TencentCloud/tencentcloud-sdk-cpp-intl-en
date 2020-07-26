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

#include <tencentcloud/tke/v20180525/model/DeleteClusterEndpointRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace rapidjson;
using namespace std;

DeleteClusterEndpointRequest::DeleteClusterEndpointRequest() :
    m_clusterIdHasBeenSet(false),
    m_isExtranetHasBeenSet(false)
{
}

string DeleteClusterEndpointRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_isExtranetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsExtranet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isExtranet, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteClusterEndpointRequest::GetClusterId() const
{
    return m_clusterId;
}

void DeleteClusterEndpointRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DeleteClusterEndpointRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

bool DeleteClusterEndpointRequest::GetIsExtranet() const
{
    return m_isExtranet;
}

void DeleteClusterEndpointRequest::SetIsExtranet(const bool& _isExtranet)
{
    m_isExtranet = _isExtranet;
    m_isExtranetHasBeenSet = true;
}

bool DeleteClusterEndpointRequest::IsExtranetHasBeenSet() const
{
    return m_isExtranetHasBeenSet;
}


