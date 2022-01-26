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

#include <tencentcloud/mdl/v20200326/model/PlanReq.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

PlanReq::PlanReq() :
    m_eventNameHasBeenSet(false),
    m_timingSettingsHasBeenSet(false),
    m_eventSettingsHasBeenSet(false)
{
}

CoreInternalOutcome PlanReq::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventName") && !value["EventName"].IsNull())
    {
        if (!value["EventName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlanReq.EventName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventName = string(value["EventName"].GetString());
        m_eventNameHasBeenSet = true;
    }

    if (value.HasMember("TimingSettings") && !value["TimingSettings"].IsNull())
    {
        if (!value["TimingSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PlanReq.TimingSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_timingSettings.Deserialize(value["TimingSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_timingSettingsHasBeenSet = true;
    }

    if (value.HasMember("EventSettings") && !value["EventSettings"].IsNull())
    {
        if (!value["EventSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PlanReq.EventSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eventSettings.Deserialize(value["EventSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eventSettingsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlanReq::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventName.c_str(), allocator).Move(), allocator);
    }

    if (m_timingSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimingSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_timingSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_eventSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eventSettings.ToJsonObject(value[key.c_str()], allocator);
    }

}


string PlanReq::GetEventName() const
{
    return m_eventName;
}

void PlanReq::SetEventName(const string& _eventName)
{
    m_eventName = _eventName;
    m_eventNameHasBeenSet = true;
}

bool PlanReq::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

TimingSettingsReq PlanReq::GetTimingSettings() const
{
    return m_timingSettings;
}

void PlanReq::SetTimingSettings(const TimingSettingsReq& _timingSettings)
{
    m_timingSettings = _timingSettings;
    m_timingSettingsHasBeenSet = true;
}

bool PlanReq::TimingSettingsHasBeenSet() const
{
    return m_timingSettingsHasBeenSet;
}

EventSettingsReq PlanReq::GetEventSettings() const
{
    return m_eventSettings;
}

void PlanReq::SetEventSettings(const EventSettingsReq& _eventSettings)
{
    m_eventSettings = _eventSettings;
    m_eventSettingsHasBeenSet = true;
}

bool PlanReq::EventSettingsHasBeenSet() const
{
    return m_eventSettingsHasBeenSet;
}

