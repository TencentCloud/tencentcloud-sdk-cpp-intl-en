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

#include <tencentcloud/gaap/v20180529/model/OpenSecurityPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace rapidjson;
using namespace std;

OpenSecurityPolicyRequest::OpenSecurityPolicyRequest() :
    m_proxyIdHasBeenSet(false),
    m_policyIdHasBeenSet(false)
{
}

string OpenSecurityPolicyRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_proxyIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProxyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_proxyId.c_str(), allocator).Move(), allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_policyId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string OpenSecurityPolicyRequest::GetProxyId() const
{
    return m_proxyId;
}

void OpenSecurityPolicyRequest::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool OpenSecurityPolicyRequest::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

string OpenSecurityPolicyRequest::GetPolicyId() const
{
    return m_policyId;
}

void OpenSecurityPolicyRequest::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool OpenSecurityPolicyRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}


