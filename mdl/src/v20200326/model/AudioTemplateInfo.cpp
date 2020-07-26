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

#include <tencentcloud/mdl/v20200326/model/AudioTemplateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace rapidjson;
using namespace std;

AudioTemplateInfo::AudioTemplateInfo() :
    m_audioSelectorNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_acodecHasBeenSet(false),
    m_audioBitrateHasBeenSet(false),
    m_languageCodeHasBeenSet(false)
{
}

CoreInternalOutcome AudioTemplateInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("AudioSelectorName") && !value["AudioSelectorName"].IsNull())
    {
        if (!value["AudioSelectorName"].IsString())
        {
            return CoreInternalOutcome(Error("response `AudioTemplateInfo.AudioSelectorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioSelectorName = string(value["AudioSelectorName"].GetString());
        m_audioSelectorNameHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `AudioTemplateInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Acodec") && !value["Acodec"].IsNull())
    {
        if (!value["Acodec"].IsString())
        {
            return CoreInternalOutcome(Error("response `AudioTemplateInfo.Acodec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_acodec = string(value["Acodec"].GetString());
        m_acodecHasBeenSet = true;
    }

    if (value.HasMember("AudioBitrate") && !value["AudioBitrate"].IsNull())
    {
        if (!value["AudioBitrate"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AudioTemplateInfo.AudioBitrate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_audioBitrate = value["AudioBitrate"].GetUint64();
        m_audioBitrateHasBeenSet = true;
    }

    if (value.HasMember("LanguageCode") && !value["LanguageCode"].IsNull())
    {
        if (!value["LanguageCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `AudioTemplateInfo.LanguageCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_languageCode = string(value["LanguageCode"].GetString());
        m_languageCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioTemplateInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_audioSelectorNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AudioSelectorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_audioSelectorName.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_acodecHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Acodec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_acodec.c_str(), allocator).Move(), allocator);
    }

    if (m_audioBitrateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AudioBitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioBitrate, allocator);
    }

    if (m_languageCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LanguageCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_languageCode.c_str(), allocator).Move(), allocator);
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

