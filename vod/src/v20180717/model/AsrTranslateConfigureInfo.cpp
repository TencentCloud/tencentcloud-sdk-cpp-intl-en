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

#include <tencentcloud/vod/v20180717/model/AsrTranslateConfigureInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AsrTranslateConfigureInfo::AsrTranslateConfigureInfo() :
    m_switchHasBeenSet(false),
    m_srcLanguageHasBeenSet(false),
    m_dstLanguageHasBeenSet(false),
    m_subtitleFormatsHasBeenSet(false),
    m_subtitleNameHasBeenSet(false)
{
}

CoreInternalOutcome AsrTranslateConfigureInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsrTranslateConfigureInfo.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("SrcLanguage") && !value["SrcLanguage"].IsNull())
    {
        if (!value["SrcLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsrTranslateConfigureInfo.SrcLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcLanguage = string(value["SrcLanguage"].GetString());
        m_srcLanguageHasBeenSet = true;
    }

    if (value.HasMember("DstLanguage") && !value["DstLanguage"].IsNull())
    {
        if (!value["DstLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsrTranslateConfigureInfo.DstLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstLanguage = string(value["DstLanguage"].GetString());
        m_dstLanguageHasBeenSet = true;
    }

    if (value.HasMember("SubtitleFormats") && !value["SubtitleFormats"].IsNull())
    {
        if (!value["SubtitleFormats"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AsrTranslateConfigureInfo.SubtitleFormats` is not array type"));

        const rapidjson::Value &tmpValue = value["SubtitleFormats"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subtitleFormats.push_back((*itr).GetString());
        }
        m_subtitleFormatsHasBeenSet = true;
    }

    if (value.HasMember("SubtitleName") && !value["SubtitleName"].IsNull())
    {
        if (!value["SubtitleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsrTranslateConfigureInfo.SubtitleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleName = string(value["SubtitleName"].GetString());
        m_subtitleNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AsrTranslateConfigureInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_srcLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_dstLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_subtitleFormatsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleFormats";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subtitleFormats.begin(); itr != m_subtitleFormats.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_subtitleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subtitleName.c_str(), allocator).Move(), allocator);
    }

}


string AsrTranslateConfigureInfo::GetSwitch() const
{
    return m_switch;
}

void AsrTranslateConfigureInfo::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool AsrTranslateConfigureInfo::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string AsrTranslateConfigureInfo::GetSrcLanguage() const
{
    return m_srcLanguage;
}

void AsrTranslateConfigureInfo::SetSrcLanguage(const string& _srcLanguage)
{
    m_srcLanguage = _srcLanguage;
    m_srcLanguageHasBeenSet = true;
}

bool AsrTranslateConfigureInfo::SrcLanguageHasBeenSet() const
{
    return m_srcLanguageHasBeenSet;
}

string AsrTranslateConfigureInfo::GetDstLanguage() const
{
    return m_dstLanguage;
}

void AsrTranslateConfigureInfo::SetDstLanguage(const string& _dstLanguage)
{
    m_dstLanguage = _dstLanguage;
    m_dstLanguageHasBeenSet = true;
}

bool AsrTranslateConfigureInfo::DstLanguageHasBeenSet() const
{
    return m_dstLanguageHasBeenSet;
}

vector<string> AsrTranslateConfigureInfo::GetSubtitleFormats() const
{
    return m_subtitleFormats;
}

void AsrTranslateConfigureInfo::SetSubtitleFormats(const vector<string>& _subtitleFormats)
{
    m_subtitleFormats = _subtitleFormats;
    m_subtitleFormatsHasBeenSet = true;
}

bool AsrTranslateConfigureInfo::SubtitleFormatsHasBeenSet() const
{
    return m_subtitleFormatsHasBeenSet;
}

string AsrTranslateConfigureInfo::GetSubtitleName() const
{
    return m_subtitleName;
}

void AsrTranslateConfigureInfo::SetSubtitleName(const string& _subtitleName)
{
    m_subtitleName = _subtitleName;
    m_subtitleNameHasBeenSet = true;
}

bool AsrTranslateConfigureInfo::SubtitleNameHasBeenSet() const
{
    return m_subtitleNameHasBeenSet;
}

