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

#include <tencentcloud/mdl/v20200326/model/TimeShiftSettingsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

TimeShiftSettingsInfo::TimeShiftSettingsInfo() :
    m_stateHasBeenSet(false),
    m_playDomainHasBeenSet(false),
    m_startoverWindowHasBeenSet(false)
{
}

CoreInternalOutcome TimeShiftSettingsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeShiftSettingsInfo.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("PlayDomain") && !value["PlayDomain"].IsNull())
    {
        if (!value["PlayDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeShiftSettingsInfo.PlayDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_playDomain = string(value["PlayDomain"].GetString());
        m_playDomainHasBeenSet = true;
    }

    if (value.HasMember("StartoverWindow") && !value["StartoverWindow"].IsNull())
    {
        if (!value["StartoverWindow"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeShiftSettingsInfo.StartoverWindow` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startoverWindow = value["StartoverWindow"].GetInt64();
        m_startoverWindowHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimeShiftSettingsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_playDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_playDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_startoverWindowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartoverWindow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startoverWindow, allocator);
    }

}


string TimeShiftSettingsInfo::GetState() const
{
    return m_state;
}

void TimeShiftSettingsInfo::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool TimeShiftSettingsInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string TimeShiftSettingsInfo::GetPlayDomain() const
{
    return m_playDomain;
}

void TimeShiftSettingsInfo::SetPlayDomain(const string& _playDomain)
{
    m_playDomain = _playDomain;
    m_playDomainHasBeenSet = true;
}

bool TimeShiftSettingsInfo::PlayDomainHasBeenSet() const
{
    return m_playDomainHasBeenSet;
}

int64_t TimeShiftSettingsInfo::GetStartoverWindow() const
{
    return m_startoverWindow;
}

void TimeShiftSettingsInfo::SetStartoverWindow(const int64_t& _startoverWindow)
{
    m_startoverWindow = _startoverWindow;
    m_startoverWindowHasBeenSet = true;
}

bool TimeShiftSettingsInfo::StartoverWindowHasBeenSet() const
{
    return m_startoverWindowHasBeenSet;
}

