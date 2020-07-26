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

#include <tencentcloud/mdp/v20200527/model/ModifyMediaPackageChannelEndpointRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mdp::V20200527::Model;
using namespace rapidjson;
using namespace std;

ModifyMediaPackageChannelEndpointRequest::ModifyMediaPackageChannelEndpointRequest() :
    m_idHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_authInfoHasBeenSet(false)
{
}

string ModifyMediaPackageChannelEndpointRequest::ToJsonString() const
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

    if (m_urlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_url.c_str(), allocator).Move(), allocator);
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


string ModifyMediaPackageChannelEndpointRequest::GetId() const
{
    return m_id;
}

void ModifyMediaPackageChannelEndpointRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyMediaPackageChannelEndpointRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyMediaPackageChannelEndpointRequest::GetUrl() const
{
    return m_url;
}

void ModifyMediaPackageChannelEndpointRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool ModifyMediaPackageChannelEndpointRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string ModifyMediaPackageChannelEndpointRequest::GetName() const
{
    return m_name;
}

void ModifyMediaPackageChannelEndpointRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyMediaPackageChannelEndpointRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

EndpointAuthInfo ModifyMediaPackageChannelEndpointRequest::GetAuthInfo() const
{
    return m_authInfo;
}

void ModifyMediaPackageChannelEndpointRequest::SetAuthInfo(const EndpointAuthInfo& _authInfo)
{
    m_authInfo = _authInfo;
    m_authInfoHasBeenSet = true;
}

bool ModifyMediaPackageChannelEndpointRequest::AuthInfoHasBeenSet() const
{
    return m_authInfoHasBeenSet;
}


