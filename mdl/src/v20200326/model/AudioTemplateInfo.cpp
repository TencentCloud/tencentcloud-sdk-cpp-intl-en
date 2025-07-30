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

#include <tencentcloud/mdl/v20200326/model/AudioTemplateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

AudioTemplateInfo::AudioTemplateInfo() :
    m_audioSelectorNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_acodecHasBeenSet(false),
    m_audioBitrateHasBeenSet(false),
    m_languageCodeHasBeenSet(false),
    m_audioNormalizationHasBeenSet(false),
    m_audioSampleRateHasBeenSet(false),
    m_audioCodecDetailsHasBeenSet(false),
    m_languageDescriptionHasBeenSet(false)
{
}

CoreInternalOutcome AudioTemplateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AudioSelectorName") && !value["AudioSelectorName"].IsNull())
    {
        if (!value["AudioSelectorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioTemplateInfo.AudioSelectorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioSelectorName = string(value["AudioSelectorName"].GetString());
        m_audioSelectorNameHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioTemplateInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Acodec") && !value["Acodec"].IsNull())
    {
        if (!value["Acodec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioTemplateInfo.Acodec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_acodec = string(value["Acodec"].GetString());
        m_acodecHasBeenSet = true;
    }

    if (value.HasMember("AudioBitrate") && !value["AudioBitrate"].IsNull())
    {
        if (!value["AudioBitrate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioTemplateInfo.AudioBitrate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_audioBitrate = value["AudioBitrate"].GetUint64();
        m_audioBitrateHasBeenSet = true;
    }

    if (value.HasMember("LanguageCode") && !value["LanguageCode"].IsNull())
    {
        if (!value["LanguageCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioTemplateInfo.LanguageCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_languageCode = string(value["LanguageCode"].GetString());
        m_languageCodeHasBeenSet = true;
    }

    if (value.HasMember("AudioNormalization") && !value["AudioNormalization"].IsNull())
    {
        if (!value["AudioNormalization"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AudioTemplateInfo.AudioNormalization` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `AudioTemplateInfo.AudioSampleRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_audioSampleRate = value["AudioSampleRate"].GetUint64();
        m_audioSampleRateHasBeenSet = true;
    }

    if (value.HasMember("AudioCodecDetails") && !value["AudioCodecDetails"].IsNull())
    {
        if (!value["AudioCodecDetails"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AudioTemplateInfo.AudioCodecDetails` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audioCodecDetails.Deserialize(value["AudioCodecDetails"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_audioCodecDetailsHasBeenSet = true;
    }

    if (value.HasMember("LanguageDescription") && !value["LanguageDescription"].IsNull())
    {
        if (!value["LanguageDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioTemplateInfo.LanguageDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_languageDescription = string(value["LanguageDescription"].GetString());
        m_languageDescriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioTemplateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_audioSelectorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioSelectorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioSelectorName.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_languageCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LanguageCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_languageCode.c_str(), allocator).Move(), allocator);
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

    if (m_audioCodecDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioCodecDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audioCodecDetails.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_languageDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LanguageDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_languageDescription.c_str(), allocator).Move(), allocator);
    }

}


string AudioTemplateInfo::GetAudioSelectorName() const
{
    return m_audioSelectorName;
}

void AudioTemplateInfo::SetAudioSelectorName(const string& _audioSelectorName)
{
    m_audioSelectorName = _audioSelectorName;
    m_audioSelectorNameHasBeenSet = true;
}

bool AudioTemplateInfo::AudioSelectorNameHasBeenSet() const
{
    return m_audioSelectorNameHasBeenSet;
}

string AudioTemplateInfo::GetName() const
{
    return m_name;
}

void AudioTemplateInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AudioTemplateInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AudioTemplateInfo::GetAcodec() const
{
    return m_acodec;
}

void AudioTemplateInfo::SetAcodec(const string& _acodec)
{
    m_acodec = _acodec;
    m_acodecHasBeenSet = true;
}

bool AudioTemplateInfo::AcodecHasBeenSet() const
{
    return m_acodecHasBeenSet;
}

uint64_t AudioTemplateInfo::GetAudioBitrate() const
{
    return m_audioBitrate;
}

void AudioTemplateInfo::SetAudioBitrate(const uint64_t& _audioBitrate)
{
    m_audioBitrate = _audioBitrate;
    m_audioBitrateHasBeenSet = true;
}

bool AudioTemplateInfo::AudioBitrateHasBeenSet() const
{
    return m_audioBitrateHasBeenSet;
}

string AudioTemplateInfo::GetLanguageCode() const
{
    return m_languageCode;
}

void AudioTemplateInfo::SetLanguageCode(const string& _languageCode)
{
    m_languageCode = _languageCode;
    m_languageCodeHasBeenSet = true;
}

bool AudioTemplateInfo::LanguageCodeHasBeenSet() const
{
    return m_languageCodeHasBeenSet;
}

AudioNormalizationSettings AudioTemplateInfo::GetAudioNormalization() const
{
    return m_audioNormalization;
}

void AudioTemplateInfo::SetAudioNormalization(const AudioNormalizationSettings& _audioNormalization)
{
    m_audioNormalization = _audioNormalization;
    m_audioNormalizationHasBeenSet = true;
}

bool AudioTemplateInfo::AudioNormalizationHasBeenSet() const
{
    return m_audioNormalizationHasBeenSet;
}

uint64_t AudioTemplateInfo::GetAudioSampleRate() const
{
    return m_audioSampleRate;
}

void AudioTemplateInfo::SetAudioSampleRate(const uint64_t& _audioSampleRate)
{
    m_audioSampleRate = _audioSampleRate;
    m_audioSampleRateHasBeenSet = true;
}

bool AudioTemplateInfo::AudioSampleRateHasBeenSet() const
{
    return m_audioSampleRateHasBeenSet;
}

AudioCodecDetail AudioTemplateInfo::GetAudioCodecDetails() const
{
    return m_audioCodecDetails;
}

void AudioTemplateInfo::SetAudioCodecDetails(const AudioCodecDetail& _audioCodecDetails)
{
    m_audioCodecDetails = _audioCodecDetails;
    m_audioCodecDetailsHasBeenSet = true;
}

bool AudioTemplateInfo::AudioCodecDetailsHasBeenSet() const
{
    return m_audioCodecDetailsHasBeenSet;
}

string AudioTemplateInfo::GetLanguageDescription() const
{
    return m_languageDescription;
}

void AudioTemplateInfo::SetLanguageDescription(const string& _languageDescription)
{
    m_languageDescription = _languageDescription;
    m_languageDescriptionHasBeenSet = true;
}

bool AudioTemplateInfo::LanguageDescriptionHasBeenSet() const
{
    return m_languageDescriptionHasBeenSet;
}

