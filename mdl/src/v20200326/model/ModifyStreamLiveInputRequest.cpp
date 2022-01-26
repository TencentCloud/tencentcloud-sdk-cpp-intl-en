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

#include <tencentcloud/mdl/v20200326/model/ModifyStreamLiveInputRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

ModifyStreamLiveInputRequest::ModifyStreamLiveInputRequest() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_inputSettingsHasBeenSet(false)
{
}

string ModifyStreamLiveInputRequest::ToJsonString() const
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

    if (m_securityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_inputSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inputSettings.begin(); itr != m_inputSettings.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyStreamLiveInputRequest::GetId() const
{
    return m_id;
}

void ModifyStreamLiveInputRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyStreamLiveInputRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyStreamLiveInputRequest::GetName() const
{
    return m_name;
}

void ModifyStreamLiveInputRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyStreamLiveInputRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> ModifyStreamLiveInputRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void ModifyStreamLiveInputRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool ModifyStreamLiveInputRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

vector<InputSettingInfo> ModifyStreamLiveInputRequest::GetInputSettings() const
{
    return m_inputSettings;
}

void ModifyStreamLiveInputRequest::SetInputSettings(const vector<InputSettingInfo>& _inputSettings)
{
    m_inputSettings = _inputSettings;
    m_inputSettingsHasBeenSet = true;
}

bool ModifyStreamLiveInputRequest::InputSettingsHasBeenSet() const
{
    return m_inputSettingsHasBeenSet;
}


