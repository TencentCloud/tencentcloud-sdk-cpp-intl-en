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
    m_rateControlModeHasBeenSet(false),
    m_watermarkIdHasBeenSet(false),
    m_smartSubtitlesHasBeenSet(false),
    m_subtitleConfigurationHasBeenSet(false),
    m_faceBlurringEnabledHasBeenSet(false),
    m_audioSelectorNameHasBeenSet(false),
    m_audioNormalizationHasBeenSet(false),
    m_audioSampleRateHasBeenSet(false),
    m_frameRateTypeHasBeenSet(false),
    m_frameRateNumeratorHasBeenSet(false),
    m_frameRateDenominatorHasBeenSet(false),
    m_bFramesNumHasBeenSet(false),
    m_refFramesNumHasBeenSet(false),
    m_additionalRateSettingsHasBeenSet(false),
    m_videoCodecDetailsHasBeenSet(false),
    m_audioCodecDetailsHasBeenSet(false),
    m_multiAudioTrackEnabledHasBeenSet(false),
    m_audioTracksHasBeenSet(false),
    m_videoEnhanceEnabledHasBeenSet(false),
    m_videoEnhanceSettingsHasBeenSet(false),
    m_gopSizeHasBeenSet(false),
    m_gopSizeUnitsHasBeenSet(false),
    m_colorSpaceSettingsHasBeenSet(false)
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

    if (value.HasMember("WatermarkId") && !value["WatermarkId"].IsNull())
    {
        if (!value["WatermarkId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AVTemplate.WatermarkId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_watermarkId = string(value["WatermarkId"].GetString());
        m_watermarkIdHasBeenSet = true;
    }

    if (value.HasMember("SmartSubtitles") && !value["SmartSubtitles"].IsNull())
    {
        if (!value["SmartSubtitles"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AVTemplate.SmartSubtitles` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_smartSubtitles = value["SmartSubtitles"].GetUint64();
        m_smartSubtitlesHasBeenSet = true;
    }

    if (value.HasMember("SubtitleConfiguration") && !value["SubtitleConfiguration"].IsNull())
    {
        if (!value["SubtitleConfiguration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AVTemplate.SubtitleConfiguration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleConfiguration = string(value["SubtitleConfiguration"].GetString());
        m_subtitleConfigurationHasBeenSet = true;
    }

    if (value.HasMember("FaceBlurringEnabled") && !value["FaceBlurringEnabled"].IsNull())
    {
        if (!value["FaceBlurringEnabled"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AVTemplate.FaceBlurringEnabled` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_faceBlurringEnabled = value["FaceBlurringEnabled"].GetUint64();
        m_faceBlurringEnabledHasBeenSet = true;
    }

    if (value.HasMember("AudioSelectorName") && !value["AudioSelectorName"].IsNull())
    {
        if (!value["AudioSelectorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AVTemplate.AudioSelectorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioSelectorName = string(value["AudioSelectorName"].GetString());
        m_audioSelectorNameHasBeenSet = true;
    }

    if (value.HasMember("AudioNormalization") && !value["AudioNormalization"].IsNull())
    {
        if (!value["AudioNormalization"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AVTemplate.AudioNormalization` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audioNormalization.Deserialize(value["AudioNormalization"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_audioNormalizationHasBeenSet = true;
    }

    if (value.HasMember("AudioSampleRate") && !value["AudioSampleRate"].IsNull())
    {
        if (!value["AudioSampleRate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AVTemplate.AudioSampleRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_audioSampleRate = value["AudioSampleRate"].GetUint64();
        m_audioSampleRateHasBeenSet = true;
    }

    if (value.HasMember("FrameRateType") && !value["FrameRateType"].IsNull())
    {
        if (!value["FrameRateType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AVTemplate.FrameRateType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frameRateType = string(value["FrameRateType"].GetString());
        m_frameRateTypeHasBeenSet = true;
    }

    if (value.HasMember("FrameRateNumerator") && !value["FrameRateNumerator"].IsNull())
    {
        if (!value["FrameRateNumerator"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AVTemplate.FrameRateNumerator` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_frameRateNumerator = value["FrameRateNumerator"].GetUint64();
        m_frameRateNumeratorHasBeenSet = true;
    }

    if (value.HasMember("FrameRateDenominator") && !value["FrameRateDenominator"].IsNull())
    {
        if (!value["FrameRateDenominator"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AVTemplate.FrameRateDenominator` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_frameRateDenominator = value["FrameRateDenominator"].GetUint64();
        m_frameRateDenominatorHasBeenSet = true;
    }

    if (value.HasMember("BFramesNum") && !value["BFramesNum"].IsNull())
    {
        if (!value["BFramesNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AVTemplate.BFramesNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bFramesNum = value["BFramesNum"].GetUint64();
        m_bFramesNumHasBeenSet = true;
    }

    if (value.HasMember("RefFramesNum") && !value["RefFramesNum"].IsNull())
    {
        if (!value["RefFramesNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AVTemplate.RefFramesNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_refFramesNum = value["RefFramesNum"].GetUint64();
        m_refFramesNumHasBeenSet = true;
    }

    if (value.HasMember("AdditionalRateSettings") && !value["AdditionalRateSettings"].IsNull())
    {
        if (!value["AdditionalRateSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AVTemplate.AdditionalRateSettings` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `AVTemplate.VideoCodecDetails` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoCodecDetails.Deserialize(value["VideoCodecDetails"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoCodecDetailsHasBeenSet = true;
    }

    if (value.HasMember("AudioCodecDetails") && !value["AudioCodecDetails"].IsNull())
    {
        if (!value["AudioCodecDetails"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AVTemplate.AudioCodecDetails` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audioCodecDetails.Deserialize(value["AudioCodecDetails"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_audioCodecDetailsHasBeenSet = true;
    }

    if (value.HasMember("MultiAudioTrackEnabled") && !value["MultiAudioTrackEnabled"].IsNull())
    {
        if (!value["MultiAudioTrackEnabled"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AVTemplate.MultiAudioTrackEnabled` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_multiAudioTrackEnabled = value["MultiAudioTrackEnabled"].GetUint64();
        m_multiAudioTrackEnabledHasBeenSet = true;
    }

    if (value.HasMember("AudioTracks") && !value["AudioTracks"].IsNull())
    {
        if (!value["AudioTracks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AVTemplate.AudioTracks` is not array type"));

        const rapidjson::Value &tmpValue = value["AudioTracks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AudioTrackInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_audioTracks.push_back(item);
        }
        m_audioTracksHasBeenSet = true;
    }

    if (value.HasMember("VideoEnhanceEnabled") && !value["VideoEnhanceEnabled"].IsNull())
    {
        if (!value["VideoEnhanceEnabled"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AVTemplate.VideoEnhanceEnabled` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoEnhanceEnabled = value["VideoEnhanceEnabled"].GetUint64();
        m_videoEnhanceEnabledHasBeenSet = true;
    }

    if (value.HasMember("VideoEnhanceSettings") && !value["VideoEnhanceSettings"].IsNull())
    {
        if (!value["VideoEnhanceSettings"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AVTemplate.VideoEnhanceSettings` is not array type"));

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

    if (value.HasMember("GopSize") && !value["GopSize"].IsNull())
    {
        if (!value["GopSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AVTemplate.GopSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gopSize = value["GopSize"].GetInt64();
        m_gopSizeHasBeenSet = true;
    }

    if (value.HasMember("GopSizeUnits") && !value["GopSizeUnits"].IsNull())
    {
        if (!value["GopSizeUnits"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AVTemplate.GopSizeUnits` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gopSizeUnits = string(value["GopSizeUnits"].GetString());
        m_gopSizeUnitsHasBeenSet = true;
    }

    if (value.HasMember("ColorSpaceSettings") && !value["ColorSpaceSettings"].IsNull())
    {
        if (!value["ColorSpaceSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AVTemplate.ColorSpaceSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_colorSpaceSettings.Deserialize(value["ColorSpaceSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_colorSpaceSettingsHasBeenSet = true;
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

    if (m_watermarkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WatermarkId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_watermarkId.c_str(), allocator).Move(), allocator);
    }

    if (m_smartSubtitlesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmartSubtitles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_smartSubtitles, allocator);
    }

    if (m_subtitleConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleConfiguration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subtitleConfiguration.c_str(), allocator).Move(), allocator);
    }

    if (m_faceBlurringEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceBlurringEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_faceBlurringEnabled, allocator);
    }

    if (m_audioSelectorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioSelectorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioSelectorName.c_str(), allocator).Move(), allocator);
    }

    if (m_audioNormalizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioNormalization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audioNormalization.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_audioSampleRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioSampleRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioSampleRate, allocator);
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

    if (m_audioCodecDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioCodecDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audioCodecDetails.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_multiAudioTrackEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiAudioTrackEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_multiAudioTrackEnabled, allocator);
    }

    if (m_audioTracksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioTracks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_audioTracks.begin(); itr != m_audioTracks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_gopSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GopSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gopSize, allocator);
    }

    if (m_gopSizeUnitsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GopSizeUnits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gopSizeUnits.c_str(), allocator).Move(), allocator);
    }

    if (m_colorSpaceSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColorSpaceSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_colorSpaceSettings.ToJsonObject(value[key.c_str()], allocator);
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

string AVTemplate::GetWatermarkId() const
{
    return m_watermarkId;
}

void AVTemplate::SetWatermarkId(const string& _watermarkId)
{
    m_watermarkId = _watermarkId;
    m_watermarkIdHasBeenSet = true;
}

bool AVTemplate::WatermarkIdHasBeenSet() const
{
    return m_watermarkIdHasBeenSet;
}

uint64_t AVTemplate::GetSmartSubtitles() const
{
    return m_smartSubtitles;
}

void AVTemplate::SetSmartSubtitles(const uint64_t& _smartSubtitles)
{
    m_smartSubtitles = _smartSubtitles;
    m_smartSubtitlesHasBeenSet = true;
}

bool AVTemplate::SmartSubtitlesHasBeenSet() const
{
    return m_smartSubtitlesHasBeenSet;
}

string AVTemplate::GetSubtitleConfiguration() const
{
    return m_subtitleConfiguration;
}

void AVTemplate::SetSubtitleConfiguration(const string& _subtitleConfiguration)
{
    m_subtitleConfiguration = _subtitleConfiguration;
    m_subtitleConfigurationHasBeenSet = true;
}

bool AVTemplate::SubtitleConfigurationHasBeenSet() const
{
    return m_subtitleConfigurationHasBeenSet;
}

uint64_t AVTemplate::GetFaceBlurringEnabled() const
{
    return m_faceBlurringEnabled;
}

void AVTemplate::SetFaceBlurringEnabled(const uint64_t& _faceBlurringEnabled)
{
    m_faceBlurringEnabled = _faceBlurringEnabled;
    m_faceBlurringEnabledHasBeenSet = true;
}

bool AVTemplate::FaceBlurringEnabledHasBeenSet() const
{
    return m_faceBlurringEnabledHasBeenSet;
}

string AVTemplate::GetAudioSelectorName() const
{
    return m_audioSelectorName;
}

void AVTemplate::SetAudioSelectorName(const string& _audioSelectorName)
{
    m_audioSelectorName = _audioSelectorName;
    m_audioSelectorNameHasBeenSet = true;
}

bool AVTemplate::AudioSelectorNameHasBeenSet() const
{
    return m_audioSelectorNameHasBeenSet;
}

AudioNormalizationSettings AVTemplate::GetAudioNormalization() const
{
    return m_audioNormalization;
}

void AVTemplate::SetAudioNormalization(const AudioNormalizationSettings& _audioNormalization)
{
    m_audioNormalization = _audioNormalization;
    m_audioNormalizationHasBeenSet = true;
}

bool AVTemplate::AudioNormalizationHasBeenSet() const
{
    return m_audioNormalizationHasBeenSet;
}

uint64_t AVTemplate::GetAudioSampleRate() const
{
    return m_audioSampleRate;
}

void AVTemplate::SetAudioSampleRate(const uint64_t& _audioSampleRate)
{
    m_audioSampleRate = _audioSampleRate;
    m_audioSampleRateHasBeenSet = true;
}

bool AVTemplate::AudioSampleRateHasBeenSet() const
{
    return m_audioSampleRateHasBeenSet;
}

string AVTemplate::GetFrameRateType() const
{
    return m_frameRateType;
}

void AVTemplate::SetFrameRateType(const string& _frameRateType)
{
    m_frameRateType = _frameRateType;
    m_frameRateTypeHasBeenSet = true;
}

bool AVTemplate::FrameRateTypeHasBeenSet() const
{
    return m_frameRateTypeHasBeenSet;
}

uint64_t AVTemplate::GetFrameRateNumerator() const
{
    return m_frameRateNumerator;
}

void AVTemplate::SetFrameRateNumerator(const uint64_t& _frameRateNumerator)
{
    m_frameRateNumerator = _frameRateNumerator;
    m_frameRateNumeratorHasBeenSet = true;
}

bool AVTemplate::FrameRateNumeratorHasBeenSet() const
{
    return m_frameRateNumeratorHasBeenSet;
}

uint64_t AVTemplate::GetFrameRateDenominator() const
{
    return m_frameRateDenominator;
}

void AVTemplate::SetFrameRateDenominator(const uint64_t& _frameRateDenominator)
{
    m_frameRateDenominator = _frameRateDenominator;
    m_frameRateDenominatorHasBeenSet = true;
}

bool AVTemplate::FrameRateDenominatorHasBeenSet() const
{
    return m_frameRateDenominatorHasBeenSet;
}

uint64_t AVTemplate::GetBFramesNum() const
{
    return m_bFramesNum;
}

void AVTemplate::SetBFramesNum(const uint64_t& _bFramesNum)
{
    m_bFramesNum = _bFramesNum;
    m_bFramesNumHasBeenSet = true;
}

bool AVTemplate::BFramesNumHasBeenSet() const
{
    return m_bFramesNumHasBeenSet;
}

uint64_t AVTemplate::GetRefFramesNum() const
{
    return m_refFramesNum;
}

void AVTemplate::SetRefFramesNum(const uint64_t& _refFramesNum)
{
    m_refFramesNum = _refFramesNum;
    m_refFramesNumHasBeenSet = true;
}

bool AVTemplate::RefFramesNumHasBeenSet() const
{
    return m_refFramesNumHasBeenSet;
}

AdditionalRateSetting AVTemplate::GetAdditionalRateSettings() const
{
    return m_additionalRateSettings;
}

void AVTemplate::SetAdditionalRateSettings(const AdditionalRateSetting& _additionalRateSettings)
{
    m_additionalRateSettings = _additionalRateSettings;
    m_additionalRateSettingsHasBeenSet = true;
}

bool AVTemplate::AdditionalRateSettingsHasBeenSet() const
{
    return m_additionalRateSettingsHasBeenSet;
}

VideoCodecDetail AVTemplate::GetVideoCodecDetails() const
{
    return m_videoCodecDetails;
}

void AVTemplate::SetVideoCodecDetails(const VideoCodecDetail& _videoCodecDetails)
{
    m_videoCodecDetails = _videoCodecDetails;
    m_videoCodecDetailsHasBeenSet = true;
}

bool AVTemplate::VideoCodecDetailsHasBeenSet() const
{
    return m_videoCodecDetailsHasBeenSet;
}

AudioCodecDetail AVTemplate::GetAudioCodecDetails() const
{
    return m_audioCodecDetails;
}

void AVTemplate::SetAudioCodecDetails(const AudioCodecDetail& _audioCodecDetails)
{
    m_audioCodecDetails = _audioCodecDetails;
    m_audioCodecDetailsHasBeenSet = true;
}

bool AVTemplate::AudioCodecDetailsHasBeenSet() const
{
    return m_audioCodecDetailsHasBeenSet;
}

uint64_t AVTemplate::GetMultiAudioTrackEnabled() const
{
    return m_multiAudioTrackEnabled;
}

void AVTemplate::SetMultiAudioTrackEnabled(const uint64_t& _multiAudioTrackEnabled)
{
    m_multiAudioTrackEnabled = _multiAudioTrackEnabled;
    m_multiAudioTrackEnabledHasBeenSet = true;
}

bool AVTemplate::MultiAudioTrackEnabledHasBeenSet() const
{
    return m_multiAudioTrackEnabledHasBeenSet;
}

vector<AudioTrackInfo> AVTemplate::GetAudioTracks() const
{
    return m_audioTracks;
}

void AVTemplate::SetAudioTracks(const vector<AudioTrackInfo>& _audioTracks)
{
    m_audioTracks = _audioTracks;
    m_audioTracksHasBeenSet = true;
}

bool AVTemplate::AudioTracksHasBeenSet() const
{
    return m_audioTracksHasBeenSet;
}

uint64_t AVTemplate::GetVideoEnhanceEnabled() const
{
    return m_videoEnhanceEnabled;
}

void AVTemplate::SetVideoEnhanceEnabled(const uint64_t& _videoEnhanceEnabled)
{
    m_videoEnhanceEnabled = _videoEnhanceEnabled;
    m_videoEnhanceEnabledHasBeenSet = true;
}

bool AVTemplate::VideoEnhanceEnabledHasBeenSet() const
{
    return m_videoEnhanceEnabledHasBeenSet;
}

vector<VideoEnhanceSetting> AVTemplate::GetVideoEnhanceSettings() const
{
    return m_videoEnhanceSettings;
}

void AVTemplate::SetVideoEnhanceSettings(const vector<VideoEnhanceSetting>& _videoEnhanceSettings)
{
    m_videoEnhanceSettings = _videoEnhanceSettings;
    m_videoEnhanceSettingsHasBeenSet = true;
}

bool AVTemplate::VideoEnhanceSettingsHasBeenSet() const
{
    return m_videoEnhanceSettingsHasBeenSet;
}

int64_t AVTemplate::GetGopSize() const
{
    return m_gopSize;
}

void AVTemplate::SetGopSize(const int64_t& _gopSize)
{
    m_gopSize = _gopSize;
    m_gopSizeHasBeenSet = true;
}

bool AVTemplate::GopSizeHasBeenSet() const
{
    return m_gopSizeHasBeenSet;
}

string AVTemplate::GetGopSizeUnits() const
{
    return m_gopSizeUnits;
}

void AVTemplate::SetGopSizeUnits(const string& _gopSizeUnits)
{
    m_gopSizeUnits = _gopSizeUnits;
    m_gopSizeUnitsHasBeenSet = true;
}

bool AVTemplate::GopSizeUnitsHasBeenSet() const
{
    return m_gopSizeUnitsHasBeenSet;
}

ColorSpaceSetting AVTemplate::GetColorSpaceSettings() const
{
    return m_colorSpaceSettings;
}

void AVTemplate::SetColorSpaceSettings(const ColorSpaceSetting& _colorSpaceSettings)
{
    m_colorSpaceSettings = _colorSpaceSettings;
    m_colorSpaceSettingsHasBeenSet = true;
}

bool AVTemplate::ColorSpaceSettingsHasBeenSet() const
{
    return m_colorSpaceSettingsHasBeenSet;
}

