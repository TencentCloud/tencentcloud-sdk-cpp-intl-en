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
    m_watermarkIdHasBeenSet(false),
    m_faceBlurringEnabledHasBeenSet(false),
    m_frameRateTypeHasBeenSet(false),
    m_frameRateNumeratorHasBeenSet(false),
    m_frameRateDenominatorHasBeenSet(false),
    m_bFramesNumHasBeenSet(false),
    m_refFramesNumHasBeenSet(false),
    m_additionalRateSettingsHasBeenSet(false),
    m_videoCodecDetailsHasBeenSet(false),
    m_videoEnhanceEnabledHasBeenSet(false),
    m_videoEnhanceSettingsHasBeenSet(false)
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

    if (value.HasMember("FaceBlurringEnabled") && !value["FaceBlurringEnabled"].IsNull())
    {
        if (!value["FaceBlurringEnabled"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.FaceBlurringEnabled` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_faceBlurringEnabled = value["FaceBlurringEnabled"].GetUint64();
        m_faceBlurringEnabledHasBeenSet = true;
    }

    if (value.HasMember("FrameRateType") && !value["FrameRateType"].IsNull())
    {
        if (!value["FrameRateType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.FrameRateType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frameRateType = string(value["FrameRateType"].GetString());
        m_frameRateTypeHasBeenSet = true;
    }

    if (value.HasMember("FrameRateNumerator") && !value["FrameRateNumerator"].IsNull())
    {
        if (!value["FrameRateNumerator"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.FrameRateNumerator` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_frameRateNumerator = value["FrameRateNumerator"].GetUint64();
        m_frameRateNumeratorHasBeenSet = true;
    }

    if (value.HasMember("FrameRateDenominator") && !value["FrameRateDenominator"].IsNull())
    {
        if (!value["FrameRateDenominator"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.FrameRateDenominator` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_frameRateDenominator = value["FrameRateDenominator"].GetUint64();
        m_frameRateDenominatorHasBeenSet = true;
    }

    if (value.HasMember("BFramesNum") && !value["BFramesNum"].IsNull())
    {
        if (!value["BFramesNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.BFramesNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bFramesNum = value["BFramesNum"].GetUint64();
        m_bFramesNumHasBeenSet = true;
    }

    if (value.HasMember("RefFramesNum") && !value["RefFramesNum"].IsNull())
    {
        if (!value["RefFramesNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.RefFramesNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_refFramesNum = value["RefFramesNum"].GetUint64();
        m_refFramesNumHasBeenSet = true;
    }

    if (value.HasMember("AdditionalRateSettings") && !value["AdditionalRateSettings"].IsNull())
    {
        if (!value["AdditionalRateSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.AdditionalRateSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_additionalRateSettings.Deserialize(value["AdditionalRateSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_additionalRateSettingsHasBeenSet = true;
    }

    if (value.HasMember("VideoCodecDetails") && !value["VideoCodecDetails"].IsNull())
    {
        if (!value["VideoCodecDetails"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.VideoCodecDetails` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoCodecDetails.Deserialize(value["VideoCodecDetails"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoCodecDetailsHasBeenSet = true;
    }

    if (value.HasMember("VideoEnhanceEnabled") && !value["VideoEnhanceEnabled"].IsNull())
    {
        if (!value["VideoEnhanceEnabled"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.VideoEnhanceEnabled` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoEnhanceEnabled = value["VideoEnhanceEnabled"].GetUint64();
        m_videoEnhanceEnabledHasBeenSet = true;
    }

    if (value.HasMember("VideoEnhanceSettings") && !value["VideoEnhanceSettings"].IsNull())
    {
        if (!value["VideoEnhanceSettings"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.VideoEnhanceSettings` is not array type"));

        const rapidjson::Value &tmpValue = value["VideoEnhanceSettings"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VideoEnhanceSetting item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_videoEnhanceSettings.push_back(item);
        }
        m_videoEnhanceSettingsHasBeenSet = true;
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

    if (m_faceBlurringEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceBlurringEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_faceBlurringEnabled, allocator);
    }

    if (m_frameRateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameRateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frameRateType.c_str(), allocator).Move(), allocator);
    }

    if (m_frameRateNumeratorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameRateNumerator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frameRateNumerator, allocator);
    }

    if (m_frameRateDenominatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameRateDenominator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frameRateDenominator, allocator);
    }

    if (m_bFramesNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BFramesNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bFramesNum, allocator);
    }

    if (m_refFramesNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefFramesNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_refFramesNum, allocator);
    }

    if (m_additionalRateSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdditionalRateSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_additionalRateSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_videoCodecDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoCodecDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoCodecDetails.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_videoEnhanceEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoEnhanceEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoEnhanceEnabled, allocator);
    }

    if (m_videoEnhanceSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoEnhanceSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_videoEnhanceSettings.begin(); itr != m_videoEnhanceSettings.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

uint64_t VideoTemplateInfo::GetFaceBlurringEnabled() const
{
    return m_faceBlurringEnabled;
}

void VideoTemplateInfo::SetFaceBlurringEnabled(const uint64_t& _faceBlurringEnabled)
{
    m_faceBlurringEnabled = _faceBlurringEnabled;
    m_faceBlurringEnabledHasBeenSet = true;
}

bool VideoTemplateInfo::FaceBlurringEnabledHasBeenSet() const
{
    return m_faceBlurringEnabledHasBeenSet;
}

string VideoTemplateInfo::GetFrameRateType() const
{
    return m_frameRateType;
}

void VideoTemplateInfo::SetFrameRateType(const string& _frameRateType)
{
    m_frameRateType = _frameRateType;
    m_frameRateTypeHasBeenSet = true;
}

bool VideoTemplateInfo::FrameRateTypeHasBeenSet() const
{
    return m_frameRateTypeHasBeenSet;
}

uint64_t VideoTemplateInfo::GetFrameRateNumerator() const
{
    return m_frameRateNumerator;
}

void VideoTemplateInfo::SetFrameRateNumerator(const uint64_t& _frameRateNumerator)
{
    m_frameRateNumerator = _frameRateNumerator;
    m_frameRateNumeratorHasBeenSet = true;
}

bool VideoTemplateInfo::FrameRateNumeratorHasBeenSet() const
{
    return m_frameRateNumeratorHasBeenSet;
}

uint64_t VideoTemplateInfo::GetFrameRateDenominator() const
{
    return m_frameRateDenominator;
}

void VideoTemplateInfo::SetFrameRateDenominator(const uint64_t& _frameRateDenominator)
{
    m_frameRateDenominator = _frameRateDenominator;
    m_frameRateDenominatorHasBeenSet = true;
}

bool VideoTemplateInfo::FrameRateDenominatorHasBeenSet() const
{
    return m_frameRateDenominatorHasBeenSet;
}

uint64_t VideoTemplateInfo::GetBFramesNum() const
{
    return m_bFramesNum;
}

void VideoTemplateInfo::SetBFramesNum(const uint64_t& _bFramesNum)
{
    m_bFramesNum = _bFramesNum;
    m_bFramesNumHasBeenSet = true;
}

bool VideoTemplateInfo::BFramesNumHasBeenSet() const
{
    return m_bFramesNumHasBeenSet;
}

uint64_t VideoTemplateInfo::GetRefFramesNum() const
{
    return m_refFramesNum;
}

void VideoTemplateInfo::SetRefFramesNum(const uint64_t& _refFramesNum)
{
    m_refFramesNum = _refFramesNum;
    m_refFramesNumHasBeenSet = true;
}

bool VideoTemplateInfo::RefFramesNumHasBeenSet() const
{
    return m_refFramesNumHasBeenSet;
}

AdditionalRateSetting VideoTemplateInfo::GetAdditionalRateSettings() const
{
    return m_additionalRateSettings;
}

void VideoTemplateInfo::SetAdditionalRateSettings(const AdditionalRateSetting& _additionalRateSettings)
{
    m_additionalRateSettings = _additionalRateSettings;
    m_additionalRateSettingsHasBeenSet = true;
}

bool VideoTemplateInfo::AdditionalRateSettingsHasBeenSet() const
{
    return m_additionalRateSettingsHasBeenSet;
}

VideoCodecDetail VideoTemplateInfo::GetVideoCodecDetails() const
{
    return m_videoCodecDetails;
}

void VideoTemplateInfo::SetVideoCodecDetails(const VideoCodecDetail& _videoCodecDetails)
{
    m_videoCodecDetails = _videoCodecDetails;
    m_videoCodecDetailsHasBeenSet = true;
}

bool VideoTemplateInfo::VideoCodecDetailsHasBeenSet() const
{
    return m_videoCodecDetailsHasBeenSet;
}

uint64_t VideoTemplateInfo::GetVideoEnhanceEnabled() const
{
    return m_videoEnhanceEnabled;
}

void VideoTemplateInfo::SetVideoEnhanceEnabled(const uint64_t& _videoEnhanceEnabled)
{
    m_videoEnhanceEnabled = _videoEnhanceEnabled;
    m_videoEnhanceEnabledHasBeenSet = true;
}

bool VideoTemplateInfo::VideoEnhanceEnabledHasBeenSet() const
{
    return m_videoEnhanceEnabledHasBeenSet;
}

vector<VideoEnhanceSetting> VideoTemplateInfo::GetVideoEnhanceSettings() const
{
    return m_videoEnhanceSettings;
}

void VideoTemplateInfo::SetVideoEnhanceSettings(const vector<VideoEnhanceSetting>& _videoEnhanceSettings)
{
    m_videoEnhanceSettings = _videoEnhanceSettings;
    m_videoEnhanceSettingsHasBeenSet = true;
}

bool VideoTemplateInfo::VideoEnhanceSettingsHasBeenSet() const
{
    return m_videoEnhanceSettingsHasBeenSet;
}

