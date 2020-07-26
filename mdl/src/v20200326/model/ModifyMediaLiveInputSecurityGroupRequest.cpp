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

#include <tencentcloud/mdl/v20200326/model/ModifyMediaLiveInputSecurityGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mdl::V20200326::Model;
using namespace rapidjson;
using namespace std;

ModifyMediaLiveInputSecurityGroupRequest::ModifyMediaLiveInputSecurityGroupRequest() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_whitelistHasBeenSet(false)
{
}

string ModifyMediaLiveInputSecurityGroupRequest::ToJsonString() const
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

    if (m_whitelistHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Whitelist";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_whitelist.begin(); itr != m_whitelist.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyMediaLiveInputSecurityGroupRequest::GetId() const
{
    return m_id;
}

void ModifyMediaLiveInputSecurityGroupRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyMediaLiveInputSecurityGroupRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyMediaLiveInputSecurityGroupRequest::GetName() const
{
    return m_name;
}

void ModifyMediaLiveInputSecurityGroupRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyMediaLiveInputSecurityGroupRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> ModifyMediaLiveInputSecurityGroupRequest::GetWhitelist() const
{
    return m_whitelist;
}

void ModifyMediaLiveInputSecurityGroupRequest::SetWhitelist(const vector<string>& _whitelist)
{
    m_whitelist = _whitelist;
    m_whitelistHasBeenSet = true;
}

bool ModifyMediaLiveInputSecurityGroupRequest::WhitelistHasBeenSet() const
{
    return m_whitelistHasBeenSet;
}


