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

#include <tencentcloud/tke/v20180525/model/ModifyClusterEndpointSPRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace rapidjson;
using namespace std;

ModifyClusterEndpointSPRequest::ModifyClusterEndpointSPRequest() :
    m_clusterIdHasBeenSet(false),
    m_securityPoliciesHasBeenSet(false)
{
}

string ModifyClusterEndpointSPRequest::ToJsonString() const
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

    if (m_securityPoliciesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecurityPolicies";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_securityPolicies.begin(); itr != m_securityPolicies.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyClusterEndpointSPRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyClusterEndpointSPRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyClusterEndpointSPRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<string> ModifyClusterEndpointSPRequest::GetSecurityPolicies() const
{
    return m_securityPolicies;
}

void ModifyClusterEndpointSPRequest::SetSecurityPolicies(const vector<string>& _securityPolicies)
{
    m_securityPolicies = _securityPolicies;
    m_securityPoliciesHasBeenSet = true;
}

bool ModifyClusterEndpointSPRequest::SecurityPoliciesHasBeenSet() const
{
    return m_securityPoliciesHasBeenSet;
}


