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

#include <tencentcloud/mdp/v20200527/model/CreateMediaPackageChannelEndpointRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mdp::V20200527::Model;
using namespace rapidjson;
using namespace std;

CreateMediaPackageChannelEndpointRequest::CreateMediaPackageChannelEndpointRequest() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_authInfoHasBeenSet(false)
{
}

string CreateMediaPackageChannelEndpointRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_authInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AuthInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_authInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateMediaPackageChannelEndpointRequest::GetId() const
{
    return m_id;
}

void CreateMediaPackageChannelEndpointRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CreateMediaPackageChannelEndpointRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string CreateMediaPackageChannelEndpointRequest::GetName() const
{
    return m_name;
}

void CreateMediaPackageChannelEndpointRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateMediaPackageChannelEndpointRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

EndpointAuthInfo CreateMediaPackageChannelEndpointRequest::GetAuthInfo() const
{
    return m_authInfo;
}

void CreateMediaPackageChannelEndpointRequest::SetAuthInfo(const EndpointAuthInfo& _authInfo)
{
    m_authInfo = _authInfo;
    m_authInfoHasBeenSet = true;
}

bool CreateMediaPackageChannelEndpointRequest::AuthInfoHasBeenSet() const
{
    return m_authInfoHasBeenSet;
}


