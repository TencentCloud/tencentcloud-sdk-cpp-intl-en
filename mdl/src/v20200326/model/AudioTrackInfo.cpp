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

#include <tencentcloud/mdl/v20200326/model/AudioTrackInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

AudioTrackInfo::AudioTrackInfo() :
    m_trackNameHasBeenSet(false),
    m_audioCodecHasBeenSet(false),
    m_audioBitrateHasBeenSet(false),
    m_audioSampleRateHasBeenSet(false),
    m_audioSelectorNameHasBeenSet(false),
    m_audioNormalizationHasBeenSet(false),
    m_audioCodecDetailsHasBeenSet(false)
{
}

CoreInternalOutcome AudioTrackInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TrackName") && !value["TrackName"].IsNull())
    {
        if (!value["TrackName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioTrackInfo.TrackName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trackName = string(value["TrackName"].GetString());
        m_trackNameHasBeenSet = true;
    }

    if (value.HasMember("AudioCodec") && !value["AudioCodec"].IsNull())
    {
        if (!value["AudioCodec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioTrackInfo.AudioCodec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioCodec = string(value["AudioCodec"].GetString());
        m_audioCodecHasBeenSet = true;
    }

    if (value.HasMember("AudioBitrate") && !value["AudioBitrate"].IsNull())
    {
        if (!value["AudioBitrate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioTrackInfo.AudioBitrate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_audioBitrate = value["AudioBitrate"].GetUint64();
        m_audioBitrateHasBeenSet = true;
    }

    if (value.HasMember("AudioSampleRate") && !value["AudioSampleRate"].IsNull())
    {
        if (!value["AudioSampleRate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioTrackInfo.AudioSampleRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_audioSampleRate = value["AudioSampleRate"].GetUint64();
        m_audioSampleRateHasBeenSet = true;
    }

    if (value.HasMember("AudioSelectorName") && !value["AudioSelectorName"].IsNull())
    {
        if (!value["AudioSelectorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioTrackInfo.AudioSelectorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioSelectorName = string(value["AudioSelectorName"].GetString());
        m_audioSelectorNameHasBeenSet = true;
    }

    if (value.HasMember("AudioNormalization") && !value["AudioNormalization"].IsNull())
    {
        if (!value["AudioNormalization"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AudioTrackInfo.AudioNormalization` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audioNormalization.Deserialize(value["AudioNormalization"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_audioNormalizationHasBeenSet = true;
    }

    if (value.HasMember("AudioCodecDetails") && !value["AudioCodecDetails"].IsNull())
    {
        if (!value["AudioCodecDetails"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AudioTrackInfo.AudioCodecDetails` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audioCodecDetails.Deserialize(value["AudioCodecDetails"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_audioCodecDetailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioTrackInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_trackNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrackName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trackName.c_str(), allocator).Move(), allocator);
    }

    if (m_audioCodecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioCodec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioCodec.c_str(), allocator).Move(), allocator);
    }

    if (m_audioBitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioBitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioBitrate, allocator);
    }

    if (m_audioSampleRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioSampleRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioSampleRate, allocator);
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

    if (m_audioCodecDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioCodecDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audioCodecDetails.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AudioTrackInfo::GetTrackName() const
{
    return m_trackName;
}

void AudioTrackInfo::SetTrackName(const string& _trackName)
{
    m_trackName = _trackName;
    m_trackNameHasBeenSet = true;
}

bool AudioTrackInfo::TrackNameHasBeenSet() const
{
    return m_trackNameHasBeenSet;
}

string AudioTrackInfo::GetAudioCodec() const
{
    return m_audioCodec;
}

void AudioTrackInfo::SetAudioCodec(const string& _audioCodec)
{
    m_audioCodec = _audioCodec;
    m_audioCodecHasBeenSet = true;
}

bool AudioTrackInfo::AudioCodecHasBeenSet() const
{
    return m_audioCodecHasBeenSet;
}

uint64_t AudioTrackInfo::GetAudioBitrate() const
{
    return m_audioBitrate;
}

void AudioTrackInfo::SetAudioBitrate(const uint64_t& _audioBitrate)
{
    m_audioBitrate = _audioBitrate;
    m_audioBitrateHasBeenSet = true;
}

bool AudioTrackInfo::AudioBitrateHasBeenSet() const
{
    return m_audioBitrateHasBeenSet;
}

uint64_t AudioTrackInfo::GetAudioSampleRate() const
{
    return m_audioSampleRate;
}

void AudioTrackInfo::SetAudioSampleRate(const uint64_t& _audioSampleRate)
{
    m_audioSampleRate = _audioSampleRate;
    m_audioSampleRateHasBeenSet = true;
}

bool AudioTrackInfo::AudioSampleRateHasBeenSet() const
{
    return m_audioSampleRateHasBeenSet;
}

string AudioTrackInfo::GetAudioSelectorName() const
{
    return m_audioSelectorName;
}

void AudioTrackInfo::SetAudioSelectorName(const string& _audioSelectorName)
{
    m_audioSelectorName = _audioSelectorName;
    m_audioSelectorNameHasBeenSet = true;
}

bool AudioTrackInfo::AudioSelectorNameHasBeenSet() const
{
    return m_audioSelectorNameHasBeenSet;
}

AudioNormalizationSettings AudioTrackInfo::GetAudioNormalization() const
{
    return m_audioNormalization;
}

void AudioTrackInfo::SetAudioNormalization(const AudioNormalizationSettings& _audioNormalization)
{
    m_audioNormalization = _audioNormalization;
    m_audioNormalizationHasBeenSet = true;
}

bool AudioTrackInfo::AudioNormalizationHasBeenSet() const
{
    return m_audioNormalizationHasBeenSet;
}

AudioCodecDetail AudioTrackInfo::GetAudioCodecDetails() const
{
    return m_audioCodecDetails;
}

void AudioTrackInfo::SetAudioCodecDetails(const AudioCodecDetail& _audioCodecDetails)
{
    m_audioCodecDetails = _audioCodecDetails;
    m_audioCodecDetailsHasBeenSet = true;
}

bool AudioTrackInfo::AudioCodecDetailsHasBeenSet() const
{
    return m_audioCodecDetailsHasBeenSet;
}

