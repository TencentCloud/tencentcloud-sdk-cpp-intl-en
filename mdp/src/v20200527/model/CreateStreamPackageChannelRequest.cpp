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

#include <tencentcloud/mdp/v20200527/model/CreateStreamPackageChannelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mdp::V20200527::Model;
using namespace std;

CreateStreamPackageChannelRequest::CreateStreamPackageChannelRequest() :
    m_nameHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_cacheInfoHasBeenSet(false)
{
}

string CreateStreamPackageChannelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_cacheInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cacheInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateStreamPackageChannelRequest::GetName() const
{
    return m_name;
}

void CreateStreamPackageChannelRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateStreamPackageChannelRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateStreamPackageChannelRequest::GetProtocol() const
{
    return m_protocol;
}

void CreateStreamPackageChannelRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CreateStreamPackageChannelRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

CacheInfo CreateStreamPackageChannelRequest::GetCacheInfo() const
{
    return m_cacheInfo;
}

void CreateStreamPackageChannelRequest::SetCacheInfo(const CacheInfo& _cacheInfo)
{
    m_cacheInfo = _cacheInfo;
    m_cacheInfoHasBeenSet = true;
}

bool CreateStreamPackageChannelRequest::CacheInfoHasBeenSet() const
{
    return m_cacheInfoHasBeenSet;
}


