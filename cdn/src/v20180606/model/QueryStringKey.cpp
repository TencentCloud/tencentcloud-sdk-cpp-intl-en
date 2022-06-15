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

#include <tencentcloud/cdn/v20180606/model/QueryStringKey.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

QueryStringKey::QueryStringKey() :
    m_switchHasBeenSet(false),
    m_reorderHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome QueryStringKey::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryStringKey.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("Reorder") && !value["Reorder"].IsNull())
    {
        if (!value["Reorder"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryStringKey.Reorder` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reorder = string(value["Reorder"].GetString());
        m_reorderHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryStringKey.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryStringKey.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryStringKey::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_reorderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reorder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reorder.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

}


string QueryStringKey::GetSwitch() const
{
    return m_switch;
}

void QueryStringKey::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool QueryStringKey::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string QueryStringKey::GetReorder() const
{
    return m_reorder;
}

void QueryStringKey::SetReorder(const string& _reorder)
{
    m_reorder = _reorder;
    m_reorderHasBeenSet = true;
}

bool QueryStringKey::ReorderHasBeenSet() const
{
    return m_reorderHasBeenSet;
}

string QueryStringKey::GetAction() const
{
    return m_action;
}

void QueryStringKey::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool QueryStringKey::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string QueryStringKey::GetValue() const
{
    return m_value;
}

void QueryStringKey::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool QueryStringKey::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}
