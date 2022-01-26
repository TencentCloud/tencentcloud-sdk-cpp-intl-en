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

#include <tencentcloud/mdl/v20200326/model/PlanSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

PlanSettings::PlanSettings() :
    m_timedRecordSettingsHasBeenSet(false)
{
}

CoreInternalOutcome PlanSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimedRecordSettings") && !value["TimedRecordSettings"].IsNull())
    {
        if (!value["TimedRecordSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PlanSettings.TimedRecordSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_timedRecordSettings.Deserialize(value["TimedRecordSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_timedRecordSettingsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlanSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timedRecordSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimedRecordSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_timedRecordSettings.ToJsonObject(value[key.c_str()], allocator);
    }

}


TimedRecordSettings PlanSettings::GetTimedRecordSettings() const
{
    return m_timedRecordSettings;
}

void PlanSettings::SetTimedRecordSettings(const TimedRecordSettings& _timedRecordSettings)
{
    m_timedRecordSettings = _timedRecordSettings;
    m_timedRecordSettingsHasBeenSet = true;
}

bool PlanSettings::TimedRecordSettingsHasBeenSet() const
{
    return m_timedRecordSettingsHasBeenSet;
}

