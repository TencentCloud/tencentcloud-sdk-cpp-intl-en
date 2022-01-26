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

#include <tencentcloud/mdl/v20200326/model/AVTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

AVTemplate::AVTemplate() :
    m_nameHasBeenSet(false),
    m_needVideoHasBeenSet(false),
    m_vcodecHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_fpsHasBeenSet(false),
    m_topSpeedHasBeenSet(false),
    m_bitrateCompressionRatioHasBeenSet(false),
    m_needAudioHasBeenSet(false),
    m_acodecHasBeenSet(false),
    m_audioBitrateHasBeenSet(false),
    m_videoBitrateHasBeenSet(false),
    m_rateControlModeHasBeenSet(false)
{
}

CoreInternalOutcome AVTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AVTemplate.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("NeedVideo") && !value["NeedVideo"].IsNull())
    {
        if (!value["NeedVideo"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AVTemplate.NeedVideo` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_needVideo = value["NeedVideo"].GetUint64();
        m_needVideoHasBeenSet = true;
    }

    if (value.HasMember("Vcodec") && !value["Vcodec"].IsNull())
    {
        if (!value["Vcodec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AVTemplate.Vcodec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vcodec = string(value["Vcodec"].GetString());
        m_vcodecHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AVTemplate.Width` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetUint64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AVTemplate.Height` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetUint64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Fps") && !value["Fps"].IsNull())
    {
        if (!value["Fps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AVTemplate.Fps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fps = value["Fps"].GetUint64();
        m_fpsHasBeenSet = true;
    }

    if (value.HasMember("TopSpeed") && !value["TopSpeed"].IsNull())
    {
        if (!value["TopSpeed"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AVTemplate.TopSpeed` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topSpeed = string(value["TopSpeed"].GetString());
        m_topSpeedHasBeenSet = true;
    }

    if (value.HasMember("BitrateCompressionRatio") && !value["BitrateCompressionRatio"].IsNull())
    {
        if (!value["BitrateCompressionRatio"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AVTemplate.BitrateCompressionRatio` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bitrateCompressionRatio = value["BitrateCompressionRatio"].GetUint64();
        m_bitrateCompressionRatioHasBeenSet = true;
    }

    if (value.HasMember("NeedAudio") && !value["NeedAudio"].IsNull())
    {
        if (!value["NeedAudio"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AVTemplate.NeedAudio` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_needAudio = value["NeedAudio"].GetInt64();
        m_needAudioHasBeenSet = true;
    }

    if (value.HasMember("Acodec") && !value["Acodec"].IsNull())
    {
        if (!value["Acodec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AVTemplate.Acodec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_acodec = string(value["Acodec"].GetString());
        m_acodecHasBeenSet = true;
    }

    if (value.HasMember("AudioBitrate") && !value["AudioBitrate"].IsNull())
    {
        if (!value["AudioBitrate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AVTemplate.AudioBitrate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_audioBitrate = value["AudioBitrate"].GetUint64();
        m_audioBitrateHasBeenSet = true;
    }

    if (value.HasMember("VideoBitrate") && !value["VideoBitrate"].IsNull())
    {
        if (!value["VideoBitrate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AVTemplate.VideoBitrate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoBitrate = value["VideoBitrate"].GetUint64();
        m_videoBitrateHasBeenSet = true;
    }

    if (value.HasMember("RateControlMode") && !value["RateControlMode"].IsNull())
    {
        if (!value["RateControlMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AVTemplate.RateControlMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rateControlMode = string(value["RateControlMode"].GetString());
        m_rateControlModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AVTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_needVideoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedVideo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needVideo, allocator);
    }

    if (m_vcodecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vcodec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vcodec.c_str(), allocator).Move(), allocator);
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

    if (m_fpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fps, allocator);
    }

    if (m_topSpeedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopSpeed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topSpeed.c_str(), allocator).Move(), allocator);
    }

    if (m_bitrateCompressionRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BitrateCompressionRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bitrateCompressionRatio, allocator);
    }

    if (m_needAudioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedAudio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needAudio, allocator);
    }

    if (m_acodecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Acodec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_acodec.c_str(), allocator).Move(), allocator);
    }

    if (m_audioBitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioBitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioBitrate, allocator);
    }

    if (m_videoBitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoBitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoBitrate, allocator);
    }

    if (m_rateControlModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RateControlMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rateControlMode.c_str(), allocator).Move(), allocator);
    }

}


string AVTemplate::GetName() const
{
    return m_name;
}

void AVTemplate::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AVTemplate::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t AVTemplate::GetNeedVideo() const
{
    return m_needVideo;
}

void AVTemplate::SetNeedVideo(const uint64_t& _needVideo)
{
    m_needVideo = _needVideo;
    m_needVideoHasBeenSet = true;
}

bool AVTemplate::NeedVideoHasBeenSet() const
{
    return m_needVideoHasBeenSet;
}

string AVTemplate::GetVcodec() const
{
    return m_vcodec;
}

void AVTemplate::SetVcodec(const string& _vcodec)
{
    m_vcodec = _vcodec;
    m_vcodecHasBeenSet = true;
}

bool AVTemplate::VcodecHasBeenSet() const
{
    return m_vcodecHasBeenSet;
}

uint64_t AVTemplate::GetWidth() const
{
    return m_width;
}

void AVTemplate::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool AVTemplate::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t AVTemplate::GetHeight() const
{
    return m_height;
}

void AVTemplate::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool AVTemplate::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

uint64_t AVTemplate::GetFps() const
{
    return m_fps;
}

void AVTemplate::SetFps(const uint64_t& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool AVTemplate::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

string AVTemplate::GetTopSpeed() const
{
    return m_topSpeed;
}

void AVTemplate::SetTopSpeed(const string& _topSpeed)
{
    m_topSpeed = _topSpeed;
    m_topSpeedHasBeenSet = true;
}

bool AVTemplate::TopSpeedHasBeenSet() const
{
    return m_topSpeedHasBeenSet;
}

uint64_t AVTemplate::GetBitrateCompressionRatio() const
{
    return m_bitrateCompressionRatio;
}

void AVTemplate::SetBitrateCompressionRatio(const uint64_t& _bitrateCompressionRatio)
{
    m_bitrateCompressionRatio = _bitrateCompressionRatio;
    m_bitrateCompressionRatioHasBeenSet = true;
}

bool AVTemplate::BitrateCompressionRatioHasBeenSet() const
{
    return m_bitrateCompressionRatioHasBeenSet;
}

int64_t AVTemplate::GetNeedAudio() const
{
    return m_needAudio;
}

void AVTemplate::SetNeedAudio(const int64_t& _needAudio)
{
    m_needAudio = _needAudio;
    m_needAudioHasBeenSet = true;
}

bool AVTemplate::NeedAudioHasBeenSet() const
{
    return m_needAudioHasBeenSet;
}

string AVTemplate::GetAcodec() const
{
    return m_acodec;
}

void AVTemplate::SetAcodec(const string& _acodec)
{
    m_acodec = _acodec;
    m_acodecHasBeenSet = true;
}

bool AVTemplate::AcodecHasBeenSet() const
{
    return m_acodecHasBeenSet;
}

uint64_t AVTemplate::GetAudioBitrate() const
{
    return m_audioBitrate;
}

void AVTemplate::SetAudioBitrate(const uint64_t& _audioBitrate)
{
    m_audioBitrate = _audioBitrate;
    m_audioBitrateHasBeenSet = true;
}

bool AVTemplate::AudioBitrateHasBeenSet() const
{
    return m_audioBitrateHasBeenSet;
}

uint64_t AVTemplate::GetVideoBitrate() const
{
    return m_videoBitrate;
}

void AVTemplate::SetVideoBitrate(const uint64_t& _videoBitrate)
{
    m_videoBitrate = _videoBitrate;
    m_videoBitrateHasBeenSet = true;
}

bool AVTemplate::VideoBitrateHasBeenSet() const
{
    return m_videoBitrateHasBeenSet;
}

string AVTemplate::GetRateControlMode() const
{
    return m_rateControlMode;
}

void AVTemplate::SetRateControlMode(const string& _rateControlMode)
{
    m_rateControlMode = _rateControlMode;
    m_rateControlModeHasBeenSet = true;
}

bool AVTemplate::RateControlModeHasBeenSet() const
{
    return m_rateControlModeHasBeenSet;
}

