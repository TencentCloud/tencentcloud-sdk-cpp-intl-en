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

#include <tencentcloud/cls/v20201016/model/GroupTriggerConditionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

GroupTriggerConditionInfo::GroupTriggerConditionInfo() :
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome GroupTriggerConditionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupTriggerConditionInfo.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupTriggerConditionInfo.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupTriggerConditionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

}


string GroupTriggerConditionInfo::GetKey() const
{
    return m_key;
}

void GroupTriggerConditionInfo::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool GroupTriggerConditionInfo::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string GroupTriggerConditionInfo::GetValue() const
{
    return m_value;
}

void GroupTriggerConditionInfo::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool GroupTriggerConditionInfo::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

