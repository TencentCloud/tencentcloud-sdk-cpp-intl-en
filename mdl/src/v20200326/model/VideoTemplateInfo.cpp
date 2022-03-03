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

#include <tencentcloud/mdl/v20200326/model/VideoTemplateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

VideoTemplateInfo::VideoTemplateInfo() :
    m_nameHasBeenSet(false),
    m_vcodecHasBeenSet(false),
    m_videoBitrateHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_fpsHasBeenSet(false),
    m_topSpeedHasBeenSet(false),
    m_bitrateCompressionRatioHasBeenSet(false),
    m_rateControlModeHasBeenSet(false),
    m_watermarkIdHasBeenSet(false)
{
}

CoreInternalOutcome VideoTemplateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Vcodec") && !value["Vcodec"].IsNull())
    {
        if (!value["Vcodec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.Vcodec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vcodec = string(value["Vcodec"].GetString());
        m_vcodecHasBeenSet = true;
    }

    if (value.HasMember("VideoBitrate") && !value["VideoBitrate"].IsNull())
    {
        if (!value["VideoBitrate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.VideoBitrate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoBitrate = value["VideoBitrate"].GetUint64();
        m_videoBitrateHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.Width` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetUint64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.Height` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetUint64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Fps") && !value["Fps"].IsNull())
    {
        if (!value["Fps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.Fps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fps = value["Fps"].GetUint64();
        m_fpsHasBeenSet = true;
    }

    if (value.HasMember("TopSpeed") && !value["TopSpeed"].IsNull())
    {
        if (!value["TopSpeed"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.TopSpeed` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topSpeed = string(value["TopSpeed"].GetString());
        m_topSpeedHasBeenSet = true;
    }

    if (value.HasMember("BitrateCompressionRatio") && !value["BitrateCompressionRatio"].IsNull())
    {
        if (!value["BitrateCompressionRatio"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.BitrateCompressionRatio` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bitrateCompressionRatio = value["BitrateCompressionRatio"].GetUint64();
        m_bitrateCompressionRatioHasBeenSet = true;
    }

    if (value.HasMember("RateControlMode") && !value["RateControlMode"].IsNull())
    {
        if (!value["RateControlMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.RateControlMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rateControlMode = string(value["RateControlMode"].GetString());
        m_rateControlModeHasBeenSet = true;
    }

    if (value.HasMember("WatermarkId") && !value["WatermarkId"].IsNull())
    {
        if (!value["WatermarkId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.WatermarkId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_watermarkId = string(value["WatermarkId"].GetString());
        m_watermarkIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoTemplateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_vcodecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vcodec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vcodec.c_str(), allocator).Move(), allocator);
    }

    if (m_videoBitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoBitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoBitrate, allocator);
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

    if (m_rateControlModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RateControlMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rateControlMode.c_str(), allocator).Move(), allocator);
    }

    if (m_watermarkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WatermarkId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_watermarkId.c_str(), allocator).Move(), allocator);
    }

}


string VideoTemplateInfo::GetName() const
{
    return m_name;
}

void VideoTemplateInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VideoTemplateInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string VideoTemplateInfo::GetVcodec() const
{
    return m_vcodec;
}

void VideoTemplateInfo::SetVcodec(const string& _vcodec)
{
    m_vcodec = _vcodec;
    m_vcodecHasBeenSet = true;
}

bool VideoTemplateInfo::VcodecHasBeenSet() const
{
    return m_vcodecHasBeenSet;
}

uint64_t VideoTemplateInfo::GetVideoBitrate() const
{
    return m_videoBitrate;
}

void VideoTemplateInfo::SetVideoBitrate(const uint64_t& _videoBitrate)
{
    m_videoBitrate = _videoBitrate;
    m_videoBitrateHasBeenSet = true;
}

bool VideoTemplateInfo::VideoBitrateHasBeenSet() const
{
    return m_videoBitrateHasBeenSet;
}

uint64_t VideoTemplateInfo::GetWidth() const
{
    return m_width;
}

void VideoTemplateInfo::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool VideoTemplateInfo::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t VideoTemplateInfo::GetHeight() const
{
    return m_height;
}

void VideoTemplateInfo::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool VideoTemplateInfo::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

uint64_t VideoTemplateInfo::GetFps() const
{
    return m_fps;
}

void VideoTemplateInfo::SetFps(const uint64_t& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool VideoTemplateInfo::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

string VideoTemplateInfo::GetTopSpeed() const
{
    return m_topSpeed;
}

void VideoTemplateInfo::SetTopSpeed(const string& _topSpeed)
{
    m_topSpeed = _topSpeed;
    m_topSpeedHasBeenSet = true;
}

bool VideoTemplateInfo::TopSpeedHasBeenSet() const
{
    return m_topSpeedHasBeenSet;
}

uint64_t VideoTemplateInfo::GetBitrateCompressionRatio() const
{
    return m_bitrateCompressionRatio;
}

void VideoTemplateInfo::SetBitrateCompressionRatio(const uint64_t& _bitrateCompressionRatio)
{
    m_bitrateCompressionRatio = _bitrateCompressionRatio;
    m_bitrateCompressionRatioHasBeenSet = true;
}

bool VideoTemplateInfo::BitrateCompressionRatioHasBeenSet() const
{
    return m_bitrateCompressionRatioHasBeenSet;
}

string VideoTemplateInfo::GetRateControlMode() const
{
    return m_rateControlMode;
}

void VideoTemplateInfo::SetRateControlMode(const string& _rateControlMode)
{
    m_rateControlMode = _rateControlMode;
    m_rateControlModeHasBeenSet = true;
}

bool VideoTemplateInfo::RateControlModeHasBeenSet() const
{
    return m_rateControlModeHasBeenSet;
}

string VideoTemplateInfo::GetWatermarkId() const
{
    return m_watermarkId;
}

void VideoTemplateInfo::SetWatermarkId(const string& _watermarkId)
{
    m_watermarkId = _watermarkId;
    m_watermarkIdHasBeenSet = true;
}

bool VideoTemplateInfo::WatermarkIdHasBeenSet() const
{
    return m_watermarkIdHasBeenSet;
}

