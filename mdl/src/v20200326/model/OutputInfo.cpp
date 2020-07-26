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

#include <tencentcloud/mdl/v20200326/model/OutputInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace rapidjson;
using namespace std;

OutputInfo::OutputInfo() :
    m_nameHasBeenSet(false),
    m_audioTemplateNamesHasBeenSet(false),
    m_videoTemplateNamesHasBeenSet(false),
    m_scte35SettingsHasBeenSet(false)
{
}

CoreInternalOutcome OutputInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `OutputInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AudioTemplateNames") && !value["AudioTemplateNames"].IsNull())
    {
        if (!value["AudioTemplateNames"].IsArray())
            return CoreInternalOutcome(Error("response `OutputInfo.AudioTemplateNames` is not array type"));

        const Value &tmpValue = value["AudioTemplateNames"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_audioTemplateNames.push_back((*itr).GetString());
        }
        m_audioTemplateNamesHasBeenSet = true;
    }

    if (value.HasMember("VideoTemplateNames") && !value["VideoTemplateNames"].IsNull())
    {
        if (!value["VideoTemplateNames"].IsArray())
            return CoreInternalOutcome(Error("response `OutputInfo.VideoTemplateNames` is not array type"));

        const Value &tmpValue = value["VideoTemplateNames"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_videoTemplateNames.push_back((*itr).GetString());
        }
        m_videoTemplateNamesHasBeenSet = true;
    }

    if (value.HasMember("Scte35Settings") && !value["Scte35Settings"].IsNull())
    {
        if (!value["Scte35Settings"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OutputInfo.Scte35Settings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_scte35Settings.Deserialize(value["Scte35Settings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scte35SettingsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_audioTemplateNamesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AudioTemplateNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_audioTemplateNames.begin(); itr != m_audioTemplateNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_videoTemplateNamesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoTemplateNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_videoTemplateNames.begin(); itr != m_videoTemplateNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scte35SettingsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Scte35Settings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_scte35Settings.ToJsonObject(value[key.c_str()], allocator);
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

