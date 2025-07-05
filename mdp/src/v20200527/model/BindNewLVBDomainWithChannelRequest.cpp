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

#include <tencentcloud/mdp/v20200527/model/BindNewLVBDomainWithChannelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mdp::V20200527::Model;
using namespace std;

BindNewLVBDomainWithChannelRequest::BindNewLVBDomainWithChannelRequest() :
    m_channelIdHasBeenSet(false),
    m_lVBDomainHasBeenSet(false)
{
}

string BindNewLVBDomainWithChannelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_lVBDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LVBDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lVBDomain.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BindNewLVBDomainWithChannelRequest::GetChannelId() const
{
    return m_channelId;
}

void BindNewLVBDomainWithChannelRequest::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool BindNewLVBDomainWithChannelRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string BindNewLVBDomainWithChannelRequest::GetLVBDomain() const
{
    return m_lVBDomain;
}

void BindNewLVBDomainWithChannelRequest::SetLVBDomain(const string& _lVBDomain)
{
    m_lVBDomain = _lVBDomain;
    m_lVBDomainHasBeenSet = true;
}

bool BindNewLVBDomainWithChannelRequest::LVBDomainHasBeenSet() const
{
    return m_lVBDomainHasBeenSet;
}


