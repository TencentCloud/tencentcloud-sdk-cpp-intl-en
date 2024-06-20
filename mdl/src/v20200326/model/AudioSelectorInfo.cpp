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

#include <tencentcloud/mdl/v20200326/model/AudioSelectorInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

AudioSelectorInfo::AudioSelectorInfo() :
    m_nameHasBeenSet(false),
    m_audioPidSelectionHasBeenSet(false),
    m_audioSelectorTypeHasBeenSet(false),
    m_audioTrackSelectionHasBeenSet(false)
{
}

CoreInternalOutcome AudioSelectorInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioSelectorInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AudioPidSelection") && !value["AudioPidSelection"].IsNull())
    {
        if (!value["AudioPidSelection"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AudioSelectorInfo.AudioPidSelection` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audioPidSelection.Deserialize(value["AudioPidSelection"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_audioPidSelectionHasBeenSet = true;
    }

    if (value.HasMember("AudioSelectorType") && !value["AudioSelectorType"].IsNull())
    {
        if (!value["AudioSelectorType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioSelectorInfo.AudioSelectorType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioSelectorType = string(value["AudioSelectorType"].GetString());
        m_audioSelectorTypeHasBeenSet = true;
    }

    if (value.HasMember("AudioTrackSelection") && !value["AudioTrackSelection"].IsNull())
    {
        if (!value["AudioTrackSelection"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AudioSelectorInfo.AudioTrackSelection` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audioTrackSelection.Deserialize(value["AudioTrackSelection"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_audioTrackSelectionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioSelectorInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_audioPidSelectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioPidSelection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audioPidSelection.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_audioSelectorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioSelectorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioSelectorType.c_str(), allocator).Move(), allocator);
    }

    if (m_audioTrackSelectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioTrackSelection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audioTrackSelection.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AudioSelectorInfo::GetName() const
{
    return m_name;
}

void AudioSelectorInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AudioSelectorInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

AudioPidSelectionInfo AudioSelectorInfo::GetAudioPidSelection() const
{
    return m_audioPidSelection;
}

void AudioSelectorInfo::SetAudioPidSelection(const AudioPidSelectionInfo& _audioPidSelection)
{
    m_audioPidSelection = _audioPidSelection;
    m_audioPidSelectionHasBeenSet = true;
}

bool AudioSelectorInfo::AudioPidSelectionHasBeenSet() const
{
    return m_audioPidSelectionHasBeenSet;
}

string AudioSelectorInfo::GetAudioSelectorType() const
{
    return m_audioSelectorType;
}

void AudioSelectorInfo::SetAudioSelectorType(const string& _audioSelectorType)
{
    m_audioSelectorType = _audioSelectorType;
    m_audioSelectorTypeHasBeenSet = true;
}

bool AudioSelectorInfo::AudioSelectorTypeHasBeenSet() const
{
    return m_audioSelectorTypeHasBeenSet;
}

InputTracks AudioSelectorInfo::GetAudioTrackSelection() const
{
    return m_audioTrackSelection;
}

void AudioSelectorInfo::SetAudioTrackSelection(const InputTracks& _audioTrackSelection)
{
    m_audioTrackSelection = _audioTrackSelection;
    m_audioTrackSelectionHasBeenSet = true;
}

bool AudioSelectorInfo::AudioTrackSelectionHasBeenSet() const
{
    return m_audioTrackSelectionHasBeenSet;
}

