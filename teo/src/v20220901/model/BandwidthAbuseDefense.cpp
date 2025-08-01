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

#include <tencentcloud/teo/v20220901/model/BandwidthAbuseDefense.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

BandwidthAbuseDefense::BandwidthAbuseDefense() :
    m_enabledHasBeenSet(false),
    m_actionHasBeenSet(false)
{
}

CoreInternalOutcome BandwidthAbuseDefense::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BandwidthAbuseDefense.Enabled` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = string(value["Enabled"].GetString());
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BandwidthAbuseDefense.Action` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_action.Deserialize(value["Action"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_actionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BandwidthAbuseDefense::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enabled.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_action.ToJsonObject(value[key.c_str()], allocator);
    }

}


string BandwidthAbuseDefense::GetEnabled() const
{
    return m_enabled;
}

void BandwidthAbuseDefense::SetEnabled(const string& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool BandwidthAbuseDefense::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

SecurityAction BandwidthAbuseDefense::GetAction() const
{
    return m_action;
}

void BandwidthAbuseDefense::SetAction(const SecurityAction& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool BandwidthAbuseDefense::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

