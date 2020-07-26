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

#include <tencentcloud/mdl/v20200326/model/ModifyMediaLiveInputRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mdl::V20200326::Model;
using namespace rapidjson;
using namespace std;

ModifyMediaLiveInputRequest::ModifyMediaLiveInputRequest() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_inputSettingsHasBeenSet(false)
{
}

string ModifyMediaLiveInputRequest::ToJsonString() const
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

    if (m_securityGroupIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_inputSettingsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InputSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inputSettings.begin(); itr != m_inputSettings.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyMediaLiveInputRequest::GetId() const
{
    return m_id;
}

void ModifyMediaLiveInputRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyMediaLiveInputRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyMediaLiveInputRequest::GetName() const
{
    return m_name;
}

void ModifyMediaLiveInputRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyMediaLiveInputRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> ModifyMediaLiveInputRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void ModifyMediaLiveInputRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool ModifyMediaLiveInputRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

vector<InputSettingInfo> ModifyMediaLiveInputRequest::GetInputSettings() const
{
    return m_inputSettings;
}

void ModifyMediaLiveInputRequest::SetInputSettings(const vector<InputSettingInfo>& _inputSettings)
{
    m_inputSettings = _inputSettings;
    m_inputSettingsHasBeenSet = true;
}

bool ModifyMediaLiveInputRequest::InputSettingsHasBeenSet() const
{
    return m_inputSettingsHasBeenSet;
}


