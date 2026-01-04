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

#include <tencentcloud/mdl/v20200326/model/OutputInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

OutputInfo::OutputInfo() :
    m_nameHasBeenSet(false),
    m_audioTemplateNamesHasBeenSet(false),
    m_videoTemplateNamesHasBeenSet(false),
    m_scte35SettingsHasBeenSet(false),
    m_aVTemplateNamesHasBeenSet(false),
    m_captionTemplateNamesHasBeenSet(false),
    m_timedMetadataSettingsHasBeenSet(false),
    m_frameCaptureTemplateNamesHasBeenSet(false),
    m_nameModifierHasBeenSet(false)
{
}

CoreInternalOutcome OutputInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AudioTemplateNames") && !value["AudioTemplateNames"].IsNull())
    {
        if (!value["AudioTemplateNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OutputInfo.AudioTemplateNames` is not array type"));

        const rapidjson::Value &tmpValue = value["AudioTemplateNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_audioTemplateNames.push_back((*itr).GetString());
        }
        m_audioTemplateNamesHasBeenSet = true;
    }

    if (value.HasMember("VideoTemplateNames") && !value["VideoTemplateNames"].IsNull())
    {
        if (!value["VideoTemplateNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OutputInfo.VideoTemplateNames` is not array type"));

        const rapidjson::Value &tmpValue = value["VideoTemplateNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_videoTemplateNames.push_back((*itr).GetString());
        }
        m_videoTemplateNamesHasBeenSet = true;
    }

    if (value.HasMember("Scte35Settings") && !value["Scte35Settings"].IsNull())
    {
        if (!value["Scte35Settings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OutputInfo.Scte35Settings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_scte35Settings.Deserialize(value["Scte35Settings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scte35SettingsHasBeenSet = true;
    }

    if (value.HasMember("AVTemplateNames") && !value["AVTemplateNames"].IsNull())
    {
        if (!value["AVTemplateNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OutputInfo.AVTemplateNames` is not array type"));

        const rapidjson::Value &tmpValue = value["AVTemplateNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_aVTemplateNames.push_back((*itr).GetString());
        }
        m_aVTemplateNamesHasBeenSet = true;
    }

    if (value.HasMember("CaptionTemplateNames") && !value["CaptionTemplateNames"].IsNull())
    {
        if (!value["CaptionTemplateNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OutputInfo.CaptionTemplateNames` is not array type"));

        const rapidjson::Value &tmpValue = value["CaptionTemplateNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_captionTemplateNames.push_back((*itr).GetString());
        }
        m_captionTemplateNamesHasBeenSet = true;
    }

    if (value.HasMember("TimedMetadataSettings") && !value["TimedMetadataSettings"].IsNull())
    {
        if (!value["TimedMetadataSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OutputInfo.TimedMetadataSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_timedMetadataSettings.Deserialize(value["TimedMetadataSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_timedMetadataSettingsHasBeenSet = true;
    }

    if (value.HasMember("FrameCaptureTemplateNames") && !value["FrameCaptureTemplateNames"].IsNull())
    {
        if (!value["FrameCaptureTemplateNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OutputInfo.FrameCaptureTemplateNames` is not array type"));

        const rapidjson::Value &tmpValue = value["FrameCaptureTemplateNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_frameCaptureTemplateNames.push_back((*itr).GetString());
        }
        m_frameCaptureTemplateNamesHasBeenSet = true;
    }

    if (value.HasMember("NameModifier") && !value["NameModifier"].IsNull())
    {
        if (!value["NameModifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputInfo.NameModifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameModifier = string(value["NameModifier"].GetString());
        m_nameModifierHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_audioTemplateNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioTemplateNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_audioTemplateNames.begin(); itr != m_audioTemplateNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_videoTemplateNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoTemplateNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_videoTemplateNames.begin(); itr != m_videoTemplateNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scte35SettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scte35Settings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scte35Settings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aVTemplateNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AVTemplateNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_aVTemplateNames.begin(); itr != m_aVTemplateNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_captionTemplateNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaptionTemplateNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_captionTemplateNames.begin(); itr != m_captionTemplateNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_timedMetadataSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimedMetadataSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_timedMetadataSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_frameCaptureTemplateNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameCaptureTemplateNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_frameCaptureTemplateNames.begin(); itr != m_frameCaptureTemplateNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nameModifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameModifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameModifier.c_str(), allocator).Move(), allocator);
    }

}


string OutputInfo::GetName() const
{
    return m_name;
}

void OutputInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool OutputInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> OutputInfo::GetAudioTemplateNames() const
{
    return m_audioTemplateNames;
}

void OutputInfo::SetAudioTemplateNames(const vector<string>& _audioTemplateNames)
{
    m_audioTemplateNames = _audioTemplateNames;
    m_audioTemplateNamesHasBeenSet = true;
}

bool OutputInfo::AudioTemplateNamesHasBeenSet() const
{
    return m_audioTemplateNamesHasBeenSet;
}

vector<string> OutputInfo::GetVideoTemplateNames() const
{
    return m_videoTemplateNames;
}

void OutputInfo::SetVideoTemplateNames(const vector<string>& _videoTemplateNames)
{
    m_videoTemplateNames = _videoTemplateNames;
    m_videoTemplateNamesHasBeenSet = true;
}

bool OutputInfo::VideoTemplateNamesHasBeenSet() const
{
    return m_videoTemplateNamesHasBeenSet;
}

Scte35SettingsInfo OutputInfo::GetScte35Settings() const
{
    return m_scte35Settings;
}

void OutputInfo::SetScte35Settings(const Scte35SettingsInfo& _scte35Settings)
{
    m_scte35Settings = _scte35Settings;
    m_scte35SettingsHasBeenSet = true;
}

bool OutputInfo::Scte35SettingsHasBeenSet() const
{
    return m_scte35SettingsHasBeenSet;
}

vector<string> OutputInfo::GetAVTemplateNames() const
{
    return m_aVTemplateNames;
}

void OutputInfo::SetAVTemplateNames(const vector<string>& _aVTemplateNames)
{
    m_aVTemplateNames = _aVTemplateNames;
    m_aVTemplateNamesHasBeenSet = true;
}

bool OutputInfo::AVTemplateNamesHasBeenSet() const
{
    return m_aVTemplateNamesHasBeenSet;
}

vector<string> OutputInfo::GetCaptionTemplateNames() const
{
    return m_captionTemplateNames;
}

void OutputInfo::SetCaptionTemplateNames(const vector<string>& _captionTemplateNames)
{
    m_captionTemplateNames = _captionTemplateNames;
    m_captionTemplateNamesHasBeenSet = true;
}

bool OutputInfo::CaptionTemplateNamesHasBeenSet() const
{
    return m_captionTemplateNamesHasBeenSet;
}

TimedMetadataSettingInfo OutputInfo::GetTimedMetadataSettings() const
{
    return m_timedMetadataSettings;
}

void OutputInfo::SetTimedMetadataSettings(const TimedMetadataSettingInfo& _timedMetadataSettings)
{
    m_timedMetadataSettings = _timedMetadataSettings;
    m_timedMetadataSettingsHasBeenSet = true;
}

bool OutputInfo::TimedMetadataSettingsHasBeenSet() const
{
    return m_timedMetadataSettingsHasBeenSet;
}

vector<string> OutputInfo::GetFrameCaptureTemplateNames() const
{
    return m_frameCaptureTemplateNames;
}

void OutputInfo::SetFrameCaptureTemplateNames(const vector<string>& _frameCaptureTemplateNames)
{
    m_frameCaptureTemplateNames = _frameCaptureTemplateNames;
    m_frameCaptureTemplateNamesHasBeenSet = true;
}

bool OutputInfo::FrameCaptureTemplateNamesHasBeenSet() const
{
    return m_frameCaptureTemplateNamesHasBeenSet;
}

string OutputInfo::GetNameModifier() const
{
    return m_nameModifier;
}

void OutputInfo::SetNameModifier(const string& _nameModifier)
{
    m_nameModifier = _nameModifier;
    m_nameModifierHasBeenSet = true;
}

bool OutputInfo::NameModifierHasBeenSet() const
{
    return m_nameModifierHasBeenSet;
}

