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

#include <tencentcloud/mdl/v20200326/model/AudioPipelineInputStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

AudioPipelineInputStatistics::AudioPipelineInputStatistics() :
    m_fpsHasBeenSet(false),
    m_rateHasBeenSet(false),
    m_pidHasBeenSet(false)
{
}

CoreInternalOutcome AudioPipelineInputStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Fps") && !value["Fps"].IsNull())
    {
        if (!value["Fps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioPipelineInputStatistics.Fps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fps = value["Fps"].GetUint64();
        m_fpsHasBeenSet = true;
    }

    if (value.HasMember("Rate") && !value["Rate"].IsNull())
    {
        if (!value["Rate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioPipelineInputStatistics.Rate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rate = value["Rate"].GetUint64();
        m_rateHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioPipelineInputStatistics.Pid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetInt64();
        m_pidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioPipelineInputStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fps, allocator);
    }

    if (m_rateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rate, allocator);
    }

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pid, allocator);
    }

}


uint64_t AudioPipelineInputStatistics::GetFps() const
{
    return m_fps;
}

void AudioPipelineInputStatistics::SetFps(const uint64_t& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool AudioPipelineInputStatistics::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

uint64_t AudioPipelineInputStatistics::GetRate() const
{
    return m_rate;
}

void AudioPipelineInputStatistics::SetRate(const uint64_t& _rate)
{
    m_rate = _rate;
    m_rateHasBeenSet = true;
}

bool AudioPipelineInputStatistics::RateHasBeenSet() const
{
    return m_rateHasBeenSet;
}

int64_t AudioPipelineInputStatistics::GetPid() const
{
    return m_pid;
}

void AudioPipelineInputStatistics::SetPid(const int64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool AudioPipelineInputStatistics::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

