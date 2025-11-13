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

#include <tencentcloud/mdl/v20200326/model/TimingSettingsResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

TimingSettingsResp::TimingSettingsResp() :
    m_startTypeHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_pTSHasBeenSet(false)
{
}

CoreInternalOutcome TimingSettingsResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartType") && !value["StartType"].IsNull())
    {
        if (!value["StartType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimingSettingsResp.StartType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startType = string(value["StartType"].GetString());
        m_startTypeHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimingSettingsResp.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimingSettingsResp.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimingSettingsResp.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("PTS") && !value["PTS"].IsNull())
    {
        if (!value["PTS"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TimingSettingsResp.PTS` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pTS = value["PTS"].GetUint64();
        m_pTSHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimingSettingsResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startType.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_pTSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PTS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pTS, allocator);
    }

}


string TimingSettingsResp::GetStartType() const
{
    return m_startType;
}

void TimingSettingsResp::SetStartType(const string& _startType)
{
    m_startType = _startType;
    m_startTypeHasBeenSet = true;
}

bool TimingSettingsResp::StartTypeHasBeenSet() const
{
    return m_startTypeHasBeenSet;
}

string TimingSettingsResp::GetTime() const
{
    return m_time;
}

void TimingSettingsResp::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool TimingSettingsResp::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string TimingSettingsResp::GetStartTime() const
{
    return m_startTime;
}

void TimingSettingsResp::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool TimingSettingsResp::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string TimingSettingsResp::GetEndTime() const
{
    return m_endTime;
}

void TimingSettingsResp::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool TimingSettingsResp::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t TimingSettingsResp::GetPTS() const
{
    return m_pTS;
}

void TimingSettingsResp::SetPTS(const uint64_t& _pTS)
{
    m_pTS = _pTS;
    m_pTSHasBeenSet = true;
}

bool TimingSettingsResp::PTSHasBeenSet() const
{
    return m_pTSHasBeenSet;
}

