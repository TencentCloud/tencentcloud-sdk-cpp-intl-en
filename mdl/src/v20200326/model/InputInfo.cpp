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

#include <tencentcloud/mdl/v20200326/model/InputInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace rapidjson;
using namespace std;

InputInfo::InputInfo() :
    m_regionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_attachedChannelsHasBeenSet(false),
    m_inputSettingsHasBeenSet(false)
{
}

CoreInternalOutcome InputInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupIds") && !value["SecurityGroupIds"].IsNull())
    {
        if (!value["SecurityGroupIds"].IsArray())
            return CoreInternalOutcome(Error("response `InputInfo.SecurityGroupIds` is not array type"));

        const Value &tmpValue = value["SecurityGroupIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_securityGroupIds.push_back((*itr).GetString());
        }
        m_securityGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("AttachedChannels") && !value["AttachedChannels"].IsNull())
    {
        if (!value["AttachedChannels"].IsArray())
            return CoreInternalOutcome(Error("response `InputInfo.AttachedChannels` is not array type"));

        const Value &tmpValue = value["AttachedChannels"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_attachedChannels.push_back((*itr).GetString());
        }
        m_attachedChannelsHasBeenSet = true;
    }

    if (value.HasMember("InputSettings") && !value["InputSettings"].IsNull())
    {
        if (!value["InputSettings"].IsArray())
            return CoreInternalOutcome(Error("response `InputInfo.InputSettings` is not array type"));

        const Value &tmpValue = value["InputSettings"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InputSettingInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inputSettings.push_back(item);
        }
        m_inputSettingsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_attachedChannelsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AttachedChannels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_attachedChannels.begin(); itr != m_attachedChannels.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_inputSettingsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InputSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inputSettings.begin(); itr != m_inputSettings.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string InputInfo::GetRegion() const
{
    return m_region;
}

void InputInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool InputInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string InputInfo::GetId() const
{
    return m_id;
}

void InputInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool InputInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string InputInfo::GetName() const
{
    return m_name;
}

void InputInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool InputInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string InputInfo::GetType() const
{
    return m_type;
}

void InputInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool InputInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> InputInfo::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void InputInfo::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool InputInfo::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

vector<string> InputInfo::GetAttachedChannels() const
{
    return m_attachedChannels;
}

void InputInfo::SetAttachedChannels(const vector<string>& _attachedChannels)
{
    m_attachedChannels = _attachedChannels;
    m_attachedChannelsHasBeenSet = true;
}

bool InputInfo::AttachedChannelsHasBeenSet() const
{
    return m_attachedChannelsHasBeenSet;
}

vector<InputSettingInfo> InputInfo::GetInputSettings() const
{
    return m_inputSettings;
}

void InputInfo::SetInputSettings(const vector<InputSettingInfo>& _inputSettings)
{
    m_inputSettings = _inputSettings;
    m_inputSettingsHasBeenSet = true;
}

bool InputInfo::InputSettingsHasBeenSet() const
{
    return m_inputSettingsHasBeenSet;
}

