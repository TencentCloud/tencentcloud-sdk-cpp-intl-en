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

#include <tencentcloud/mdl/v20200326/model/VideoPipelineInputStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

VideoPipelineInputStatistics::VideoPipelineInputStatistics() :
    m_fpsHasBeenSet(false),
    m_rateHasBeenSet(false),
    m_pidHasBeenSet(false)
{
}

CoreInternalOutcome VideoPipelineInputStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Fps") && !value["Fps"].IsNull())
    {
        if (!value["Fps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoPipelineInputStatistics.Fps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fps = value["Fps"].GetUint64();
        m_fpsHasBeenSet = true;
    }

    if (value.HasMember("Rate") && !value["Rate"].IsNull())
    {
        if (!value["Rate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoPipelineInputStatistics.Rate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rate = value["Rate"].GetUint64();
        m_rateHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoPipelineInputStatistics.Pid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetInt64();
        m_pidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoPipelineInputStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


uint64_t VideoPipelineInputStatistics::GetFps() const
{
    return m_fps;
}

void VideoPipelineInputStatistics::SetFps(const uint64_t& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool VideoPipelineInputStatistics::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

uint64_t VideoPipelineInputStatistics::GetRate() const
{
    return m_rate;
}

void VideoPipelineInputStatistics::SetRate(const uint64_t& _rate)
{
    m_rate = _rate;
    m_rateHasBeenSet = true;
}

bool VideoPipelineInputStatistics::RateHasBeenSet() const
{
    return m_rateHasBeenSet;
}

int64_t VideoPipelineInputStatistics::GetPid() const
{
    return m_pid;
}

void VideoPipelineInputStatistics::SetPid(const int64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool VideoPipelineInputStatistics::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

