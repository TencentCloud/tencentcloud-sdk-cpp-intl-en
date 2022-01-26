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

#include <tencentcloud/mdl/v20200326/model/Scte35SettingsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

Scte35SettingsInfo::Scte35SettingsInfo() :
    m_behaviorHasBeenSet(false)
{
}

CoreInternalOutcome Scte35SettingsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Behavior") && !value["Behavior"].IsNull())
    {
        if (!value["Behavior"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Scte35SettingsInfo.Behavior` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_behavior = string(value["Behavior"].GetString());
        m_behaviorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Scte35SettingsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_behaviorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Behavior";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_behavior.c_str(), allocator).Move(), allocator);
    }

}


string Scte35SettingsInfo::GetBehavior() const
{
    return m_behavior;
}

void Scte35SettingsInfo::SetBehavior(const string& _behavior)
{
    m_behavior = _behavior;
    m_behaviorHasBeenSet = true;
}

bool Scte35SettingsInfo::BehaviorHasBeenSet() const
{
    return m_behaviorHasBeenSet;
}

