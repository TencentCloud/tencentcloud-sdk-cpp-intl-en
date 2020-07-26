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
using namespace rapidjson;
using namespace std;

AudioSelectorInfo::AudioSelectorInfo() :
    m_nameHasBeenSet(false),
    m_audioPidSelectionHasBeenSet(false)
{
}

CoreInternalOutcome AudioSelectorInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `AudioSelectorInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AudioPidSelection") && !value["AudioPidSelection"].IsNull())
    {
        if (!value["AudioPidSelection"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AudioSelectorInfo.AudioPidSelection` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audioPidSelection.Deserialize(value["AudioPidSelection"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_audioPidSelectionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioSelectorInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_audioPidSelectionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AudioPidSelection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_audioPidSelection.ToJsonObject(value[key.c_str()], allocator);
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

