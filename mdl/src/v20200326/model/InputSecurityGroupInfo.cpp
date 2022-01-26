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

#include <tencentcloud/mdl/v20200326/model/InputSecurityGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

InputSecurityGroupInfo::InputSecurityGroupInfo() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_whitelistHasBeenSet(false),
    m_occupiedInputsHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

CoreInternalOutcome InputSecurityGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputSecurityGroupInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputSecurityGroupInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Whitelist") && !value["Whitelist"].IsNull())
    {
        if (!value["Whitelist"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InputSecurityGroupInfo.Whitelist` is not array type"));

        const rapidjson::Value &tmpValue = value["Whitelist"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_whitelist.push_back((*itr).GetString());
        }
        m_whitelistHasBeenSet = true;
    }

    if (value.HasMember("OccupiedInputs") && !value["OccupiedInputs"].IsNull())
    {
        if (!value["OccupiedInputs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InputSecurityGroupInfo.OccupiedInputs` is not array type"));

        const rapidjson::Value &tmpValue = value["OccupiedInputs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_occupiedInputs.push_back((*itr).GetString());
        }
        m_occupiedInputsHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputSecurityGroupInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputSecurityGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_whitelistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Whitelist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_whitelist.begin(); itr != m_whitelist.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_occupiedInputsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OccupiedInputs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_occupiedInputs.begin(); itr != m_occupiedInputs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

}


string InputSecurityGroupInfo::GetId() const
{
    return m_id;
}

void InputSecurityGroupInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool InputSecurityGroupInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string InputSecurityGroupInfo::GetName() const
{
    return m_name;
}

void InputSecurityGroupInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool InputSecurityGroupInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> InputSecurityGroupInfo::GetWhitelist() const
{
    return m_whitelist;
}

void InputSecurityGroupInfo::SetWhitelist(const vector<string>& _whitelist)
{
    m_whitelist = _whitelist;
    m_whitelistHasBeenSet = true;
}

bool InputSecurityGroupInfo::WhitelistHasBeenSet() const
{
    return m_whitelistHasBeenSet;
}

vector<string> InputSecurityGroupInfo::GetOccupiedInputs() const
{
    return m_occupiedInputs;
}

void InputSecurityGroupInfo::SetOccupiedInputs(const vector<string>& _occupiedInputs)
{
    m_occupiedInputs = _occupiedInputs;
    m_occupiedInputsHasBeenSet = true;
}

bool InputSecurityGroupInfo::OccupiedInputsHasBeenSet() const
{
    return m_occupiedInputsHasBeenSet;
}

string InputSecurityGroupInfo::GetRegion() const
{
    return m_region;
}

void InputSecurityGroupInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool InputSecurityGroupInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

