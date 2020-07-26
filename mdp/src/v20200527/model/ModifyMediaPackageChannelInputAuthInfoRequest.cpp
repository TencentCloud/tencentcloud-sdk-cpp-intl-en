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

#include <tencentcloud/mdp/v20200527/model/ModifyMediaPackageChannelInputAuthInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mdp::V20200527::Model;
using namespace rapidjson;
using namespace std;

ModifyMediaPackageChannelInputAuthInfoRequest::ModifyMediaPackageChannelInputAuthInfoRequest() :
    m_idHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_actionTypeHasBeenSet(false)
{
}

string ModifyMediaPackageChannelInputAuthInfoRequest::ToJsonString() const
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

    if (m_actionTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_actionType.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyMediaPackageChannelInputAuthInfoRequest::GetId() const
{
    return m_id;
}

void ModifyMediaPackageChannelInputAuthInfoRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyMediaPackageChannelInputAuthInfoRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyMediaPackageChannelInputAuthInfoRequest::GetUrl() const
{
    return m_url;
}

void ModifyMediaPackageChannelInputAuthInfoRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool ModifyMediaPackageChannelInputAuthInfoRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string ModifyMediaPackageChannelInputAuthInfoRequest::GetActionType() const
{
    return m_actionType;
}

void ModifyMediaPackageChannelInputAuthInfoRequest::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool ModifyMediaPackageChannelInputAuthInfoRequest::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}


