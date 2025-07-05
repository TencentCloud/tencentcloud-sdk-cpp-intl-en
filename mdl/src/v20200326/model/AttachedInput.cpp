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

#include <tencentcloud/mdl/v20200326/model/AttachedInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

AttachedInput::AttachedInput() :
    m_idHasBeenSet(false),
    m_audioSelectorsHasBeenSet(false),
    m_pullBehaviorHasBeenSet(false),
    m_failOverSettingsHasBeenSet(false),
    m_captionSelectorsHasBeenSet(false)
{
}

CoreInternalOutcome AttachedInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttachedInput.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("AudioSelectors") && !value["AudioSelectors"].IsNull())
    {
        if (!value["AudioSelectors"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AttachedInput.AudioSelectors` is not array type"));

        const rapidjson::Value &tmpValue = value["AudioSelectors"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AudioSelectorInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_audioSelectors.push_back(item);
        }
        m_audioSelectorsHasBeenSet = true;
    }

    if (value.HasMember("PullBehavior") && !value["PullBehavior"].IsNull())
    {
        if (!value["PullBehavior"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttachedInput.PullBehavior` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pullBehavior = string(value["PullBehavior"].GetString());
        m_pullBehaviorHasBeenSet = true;
    }

    if (value.HasMember("FailOverSettings") && !value["FailOverSettings"].IsNull())
    {
        if (!value["FailOverSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AttachedInput.FailOverSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_failOverSettings.Deserialize(value["FailOverSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_failOverSettingsHasBeenSet = true;
    }

    if (value.HasMember("CaptionSelectors") && !value["CaptionSelectors"].IsNull())
    {
        if (!value["CaptionSelectors"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AttachedInput.CaptionSelectors` is not array type"));

        const rapidjson::Value &tmpValue = value["CaptionSelectors"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CaptionSelector item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_captionSelectors.push_back(item);
        }
        m_captionSelectorsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AttachedInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_audioSelectorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioSelectors";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_audioSelectors.begin(); itr != m_audioSelectors.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pullBehaviorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PullBehavior";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pullBehavior.c_str(), allocator).Move(), allocator);
    }

    if (m_failOverSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailOverSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_failOverSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_captionSelectorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaptionSelectors";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_captionSelectors.begin(); itr != m_captionSelectors.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AttachedInput::GetId() const
{
    return m_id;
}

void AttachedInput::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AttachedInput::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<AudioSelectorInfo> AttachedInput::GetAudioSelectors() const
{
    return m_audioSelectors;
}

void AttachedInput::SetAudioSelectors(const vector<AudioSelectorInfo>& _audioSelectors)
{
    m_audioSelectors = _audioSelectors;
    m_audioSelectorsHasBeenSet = true;
}

bool AttachedInput::AudioSelectorsHasBeenSet() const
{
    return m_audioSelectorsHasBeenSet;
}

string AttachedInput::GetPullBehavior() const
{
    return m_pullBehavior;
}

void AttachedInput::SetPullBehavior(const string& _pullBehavior)
{
    m_pullBehavior = _pullBehavior;
    m_pullBehaviorHasBeenSet = true;
}

bool AttachedInput::PullBehaviorHasBeenSet() const
{
    return m_pullBehaviorHasBeenSet;
}

FailOverSettings AttachedInput::GetFailOverSettings() const
{
    return m_failOverSettings;
}

void AttachedInput::SetFailOverSettings(const FailOverSettings& _failOverSettings)
{
    m_failOverSettings = _failOverSettings;
    m_failOverSettingsHasBeenSet = true;
}

bool AttachedInput::FailOverSettingsHasBeenSet() const
{
    return m_failOverSettingsHasBeenSet;
}

vector<CaptionSelector> AttachedInput::GetCaptionSelectors() const
{
    return m_captionSelectors;
}

void AttachedInput::SetCaptionSelectors(const vector<CaptionSelector>& _captionSelectors)
{
    m_captionSelectors = _captionSelectors;
    m_captionSelectorsHasBeenSet = true;
}

bool AttachedInput::CaptionSelectorsHasBeenSet() const
{
    return m_captionSelectorsHasBeenSet;
}

