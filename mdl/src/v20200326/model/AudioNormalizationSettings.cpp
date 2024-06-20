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

#include <tencentcloud/mdl/v20200326/model/AudioNormalizationSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

AudioNormalizationSettings::AudioNormalizationSettings() :
    m_audioNormalizationEnabledHasBeenSet(false),
    m_targetLUFSHasBeenSet(false)
{
}

CoreInternalOutcome AudioNormalizationSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AudioNormalizationEnabled") && !value["AudioNormalizationEnabled"].IsNull())
    {
        if (!value["AudioNormalizationEnabled"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioNormalizationSettings.AudioNormalizationEnabled` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_audioNormalizationEnabled = value["AudioNormalizationEnabled"].GetUint64();
        m_audioNormalizationEnabledHasBeenSet = true;
    }

    if (value.HasMember("TargetLUFS") && !value["TargetLUFS"].IsNull())
    {
        if (!value["TargetLUFS"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AudioNormalizationSettings.TargetLUFS` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_targetLUFS = value["TargetLUFS"].GetDouble();
        m_targetLUFSHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioNormalizationSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_audioNormalizationEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioNormalizationEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioNormalizationEnabled, allocator);
    }

    if (m_targetLUFSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetLUFS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetLUFS, allocator);
    }

}


uint64_t AudioNormalizationSettings::GetAudioNormalizationEnabled() const
{
    return m_audioNormalizationEnabled;
}

void AudioNormalizationSettings::SetAudioNormalizationEnabled(const uint64_t& _audioNormalizationEnabled)
{
    m_audioNormalizationEnabled = _audioNormalizationEnabled;
    m_audioNormalizationEnabledHasBeenSet = true;
}

bool AudioNormalizationSettings::AudioNormalizationEnabledHasBeenSet() const
{
    return m_audioNormalizationEnabledHasBeenSet;
}

double AudioNormalizationSettings::GetTargetLUFS() const
{
    return m_targetLUFS;
}

void AudioNormalizationSettings::SetTargetLUFS(const double& _targetLUFS)
{
    m_targetLUFS = _targetLUFS;
    m_targetLUFSHasBeenSet = true;
}

bool AudioNormalizationSettings::TargetLUFSHasBeenSet() const
{
    return m_targetLUFSHasBeenSet;
}

