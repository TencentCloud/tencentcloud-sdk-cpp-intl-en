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

#include <tencentcloud/mdl/v20200326/model/StreamAudioInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

StreamAudioInfo::StreamAudioInfo() :
    m_pidHasBeenSet(false),
    m_codecHasBeenSet(false),
    m_fpsHasBeenSet(false),
    m_rateHasBeenSet(false),
    m_sampleRateHasBeenSet(false)
{
}

CoreInternalOutcome StreamAudioInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StreamAudioInfo.Pid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetInt64();
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("Codec") && !value["Codec"].IsNull())
    {
        if (!value["Codec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamAudioInfo.Codec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codec = string(value["Codec"].GetString());
        m_codecHasBeenSet = true;
    }

    if (value.HasMember("Fps") && !value["Fps"].IsNull())
    {
        if (!value["Fps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StreamAudioInfo.Fps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fps = value["Fps"].GetInt64();
        m_fpsHasBeenSet = true;
    }

    if (value.HasMember("Rate") && !value["Rate"].IsNull())
    {
        if (!value["Rate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StreamAudioInfo.Rate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rate = value["Rate"].GetInt64();
        m_rateHasBeenSet = true;
    }

    if (value.HasMember("SampleRate") && !value["SampleRate"].IsNull())
    {
        if (!value["SampleRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StreamAudioInfo.SampleRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sampleRate = value["SampleRate"].GetInt64();
        m_sampleRateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StreamAudioInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pid, allocator);
    }

    if (m_codecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Codec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codec.c_str(), allocator).Move(), allocator);
    }

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

    if (m_sampleRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sampleRate, allocator);
    }

}


int64_t StreamAudioInfo::GetPid() const
{
    return m_pid;
}

void StreamAudioInfo::SetPid(const int64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool StreamAudioInfo::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

string StreamAudioInfo::GetCodec() const
{
    return m_codec;
}

void StreamAudioInfo::SetCodec(const string& _codec)
{
    m_codec = _codec;
    m_codecHasBeenSet = true;
}

bool StreamAudioInfo::CodecHasBeenSet() const
{
    return m_codecHasBeenSet;
}

int64_t StreamAudioInfo::GetFps() const
{
    return m_fps;
}

void StreamAudioInfo::SetFps(const int64_t& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool StreamAudioInfo::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

int64_t StreamAudioInfo::GetRate() const
{
    return m_rate;
}

void StreamAudioInfo::SetRate(const int64_t& _rate)
{
    m_rate = _rate;
    m_rateHasBeenSet = true;
}

bool StreamAudioInfo::RateHasBeenSet() const
{
    return m_rateHasBeenSet;
}

int64_t StreamAudioInfo::GetSampleRate() const
{
    return m_sampleRate;
}

void StreamAudioInfo::SetSampleRate(const int64_t& _sampleRate)
{
    m_sampleRate = _sampleRate;
    m_sampleRateHasBeenSet = true;
}

bool StreamAudioInfo::SampleRateHasBeenSet() const
{
    return m_sampleRateHasBeenSet;
}

