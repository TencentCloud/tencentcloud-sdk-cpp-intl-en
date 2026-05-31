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

#include <tencentcloud/mdl/v20200326/model/PipSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

PipSetting::PipSetting() :
    m_audioSelectionHasBeenSet(false),
    m_liveSourceLayoutHasBeenSet(false),
    m_adSourceLayoutHasBeenSet(false),
    m_backgroundImgUrlHasBeenSet(false),
    m_adSourceUrlHasBeenSet(false)
{
}

CoreInternalOutcome PipSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AudioSelection") && !value["AudioSelection"].IsNull())
    {
        if (!value["AudioSelection"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PipSetting.AudioSelection` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioSelection = string(value["AudioSelection"].GetString());
        m_audioSelectionHasBeenSet = true;
    }

    if (value.HasMember("LiveSourceLayout") && !value["LiveSourceLayout"].IsNull())
    {
        if (!value["LiveSourceLayout"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PipSetting.LiveSourceLayout` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_liveSourceLayout.Deserialize(value["LiveSourceLayout"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_liveSourceLayoutHasBeenSet = true;
    }

    if (value.HasMember("AdSourceLayout") && !value["AdSourceLayout"].IsNull())
    {
        if (!value["AdSourceLayout"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PipSetting.AdSourceLayout` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_adSourceLayout.Deserialize(value["AdSourceLayout"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_adSourceLayoutHasBeenSet = true;
    }

    if (value.HasMember("BackgroundImgUrl") && !value["BackgroundImgUrl"].IsNull())
    {
        if (!value["BackgroundImgUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PipSetting.BackgroundImgUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backgroundImgUrl = string(value["BackgroundImgUrl"].GetString());
        m_backgroundImgUrlHasBeenSet = true;
    }

    if (value.HasMember("AdSourceUrl") && !value["AdSourceUrl"].IsNull())
    {
        if (!value["AdSourceUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PipSetting.AdSourceUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adSourceUrl = string(value["AdSourceUrl"].GetString());
        m_adSourceUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PipSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_audioSelectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioSelection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioSelection.c_str(), allocator).Move(), allocator);
    }

    if (m_liveSourceLayoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveSourceLayout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_liveSourceLayout.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_adSourceLayoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdSourceLayout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_adSourceLayout.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_backgroundImgUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundImgUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backgroundImgUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_adSourceUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdSourceUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adSourceUrl.c_str(), allocator).Move(), allocator);
    }

}


string PipSetting::GetAudioSelection() const
{
    return m_audioSelection;
}

void PipSetting::SetAudioSelection(const string& _audioSelection)
{
    m_audioSelection = _audioSelection;
    m_audioSelectionHasBeenSet = true;
}

bool PipSetting::AudioSelectionHasBeenSet() const
{
    return m_audioSelectionHasBeenSet;
}

SourceLayout PipSetting::GetLiveSourceLayout() const
{
    return m_liveSourceLayout;
}

void PipSetting::SetLiveSourceLayout(const SourceLayout& _liveSourceLayout)
{
    m_liveSourceLayout = _liveSourceLayout;
    m_liveSourceLayoutHasBeenSet = true;
}

bool PipSetting::LiveSourceLayoutHasBeenSet() const
{
    return m_liveSourceLayoutHasBeenSet;
}

SourceLayout PipSetting::GetAdSourceLayout() const
{
    return m_adSourceLayout;
}

void PipSetting::SetAdSourceLayout(const SourceLayout& _adSourceLayout)
{
    m_adSourceLayout = _adSourceLayout;
    m_adSourceLayoutHasBeenSet = true;
}

bool PipSetting::AdSourceLayoutHasBeenSet() const
{
    return m_adSourceLayoutHasBeenSet;
}

string PipSetting::GetBackgroundImgUrl() const
{
    return m_backgroundImgUrl;
}

void PipSetting::SetBackgroundImgUrl(const string& _backgroundImgUrl)
{
    m_backgroundImgUrl = _backgroundImgUrl;
    m_backgroundImgUrlHasBeenSet = true;
}

bool PipSetting::BackgroundImgUrlHasBeenSet() const
{
    return m_backgroundImgUrlHasBeenSet;
}

string PipSetting::GetAdSourceUrl() const
{
    return m_adSourceUrl;
}

void PipSetting::SetAdSourceUrl(const string& _adSourceUrl)
{
    m_adSourceUrl = _adSourceUrl;
    m_adSourceUrlHasBeenSet = true;
}

bool PipSetting::AdSourceUrlHasBeenSet() const
{
    return m_adSourceUrlHasBeenSet;
}

