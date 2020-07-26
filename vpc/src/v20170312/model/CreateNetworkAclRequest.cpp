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

#include <tencentcloud/vpc/v20170312/model/CreateNetworkAclRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

CreateNetworkAclRequest::CreateNetworkAclRequest() :
    m_vpcIdHasBeenSet(false),
    m_networkAclNameHasBeenSet(false)
{
}

string CreateNetworkAclRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_networkAclNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetworkAclName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_networkAclName.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateNetworkAclRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateNetworkAclRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateNetworkAclRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateNetworkAclRequest::GetNetworkAclName() const
{
    return m_networkAclName;
}

void CreateNetworkAclRequest::SetNetworkAclName(const string& _networkAclName)
{
    m_networkAclName = _networkAclName;
    m_networkAclNameHasBeenSet = true;
}

bool CreateNetworkAclRequest::NetworkAclNameHasBeenSet() const
{
    return m_networkAclNameHasBeenSet;
}


