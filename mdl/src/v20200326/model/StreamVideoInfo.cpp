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

#include <tencentcloud/mdl/v20200326/model/StreamVideoInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

StreamVideoInfo::StreamVideoInfo() :
    m_pidHasBeenSet(false),
    m_codecHasBeenSet(false),
    m_fpsHasBeenSet(false),
    m_rateHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false)
{
}

CoreInternalOutcome StreamVideoInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StreamVideoInfo.Pid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetInt64();
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("Codec") && !value["Codec"].IsNull())
    {
        if (!value["Codec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamVideoInfo.Codec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codec = string(value["Codec"].GetString());
        m_codecHasBeenSet = true;
    }

    if (value.HasMember("Fps") && !value["Fps"].IsNull())
    {
        if (!value["Fps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StreamVideoInfo.Fps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fps = value["Fps"].GetInt64();
        m_fpsHasBeenSet = true;
    }

    if (value.HasMember("Rate") && !value["Rate"].IsNull())
    {
        if (!value["Rate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StreamVideoInfo.Rate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rate = value["Rate"].GetInt64();
        m_rateHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StreamVideoInfo.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StreamVideoInfo.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StreamVideoInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

}


int64_t StreamVideoInfo::GetPid() const
{
    return m_pid;
}

void StreamVideoInfo::SetPid(const int64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool StreamVideoInfo::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

string StreamVideoInfo::GetCodec() const
{
    return m_codec;
}

void StreamVideoInfo::SetCodec(const string& _codec)
{
    m_codec = _codec;
    m_codecHasBeenSet = true;
}

bool StreamVideoInfo::CodecHasBeenSet() const
{
    return m_codecHasBeenSet;
}

int64_t StreamVideoInfo::GetFps() const
{
    return m_fps;
}

void StreamVideoInfo::SetFps(const int64_t& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool StreamVideoInfo::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

int64_t StreamVideoInfo::GetRate() const
{
    return m_rate;
}

void StreamVideoInfo::SetRate(const int64_t& _rate)
{
    m_rate = _rate;
    m_rateHasBeenSet = true;
}

bool StreamVideoInfo::RateHasBeenSet() const
{
    return m_rateHasBeenSet;
}

int64_t StreamVideoInfo::GetWidth() const
{
    return m_width;
}

void StreamVideoInfo::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool StreamVideoInfo::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t StreamVideoInfo::GetHeight() const
{
    return m_height;
}

void StreamVideoInfo::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool StreamVideoInfo::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

