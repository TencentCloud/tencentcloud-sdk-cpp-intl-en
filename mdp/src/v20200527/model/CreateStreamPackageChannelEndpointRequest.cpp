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

#include <tencentcloud/mdp/v20200527/model/CreateStreamPackageChannelEndpointRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mdp::V20200527::Model;
using namespace std;

CreateStreamPackageChannelEndpointRequest::CreateStreamPackageChannelEndpointRequest() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_authInfoHasBeenSet(false)
{
}

string CreateStreamPackageChannelEndpointRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_authInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_authInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateStreamPackageChannelEndpointRequest::GetId() const
{
    return m_id;
}

void CreateStreamPackageChannelEndpointRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CreateStreamPackageChannelEndpointRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string CreateStreamPackageChannelEndpointRequest::GetName() const
{
    return m_name;
}

void CreateStreamPackageChannelEndpointRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateStreamPackageChannelEndpointRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

EndpointAuthInfo CreateStreamPackageChannelEndpointRequest::GetAuthInfo() const
{
    return m_authInfo;
}

void CreateStreamPackageChannelEndpointRequest::SetAuthInfo(const EndpointAuthInfo& _authInfo)
{
    m_authInfo = _authInfo;
    m_authInfoHasBeenSet = true;
}

bool CreateStreamPackageChannelEndpointRequest::AuthInfoHasBeenSet() const
{
    return m_authInfoHasBeenSet;
}


