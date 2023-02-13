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

#include <tencentcloud/mdl/v20200326/model/EventNotifySetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

EventNotifySetting::EventNotifySetting() :
    m_pushEventSettingsHasBeenSet(false)
{
}

CoreInternalOutcome EventNotifySetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PushEventSettings") && !value["PushEventSettings"].IsNull())
    {
        if (!value["PushEventSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventNotifySetting.PushEventSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pushEventSettings.Deserialize(value["PushEventSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pushEventSettingsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventNotifySetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pushEventSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushEventSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pushEventSettings.ToJsonObject(value[key.c_str()], allocator);
    }

}


PushEventSetting EventNotifySetting::GetPushEventSettings() const
{
    return m_pushEventSettings;
}

void EventNotifySetting::SetPushEventSettings(const PushEventSetting& _pushEventSettings)
{
    m_pushEventSettings = _pushEventSettings;
    m_pushEventSettingsHasBeenSet = true;
}

bool EventNotifySetting::PushEventSettingsHasBeenSet() const
{
    return m_pushEventSettingsHasBeenSet;
}

