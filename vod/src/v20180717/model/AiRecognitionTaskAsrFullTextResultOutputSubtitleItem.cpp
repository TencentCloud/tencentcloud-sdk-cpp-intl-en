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

#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskAsrFullTextResultOutputSubtitleItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AiRecognitionTaskAsrFullTextResultOutputSubtitleItem::AiRecognitionTaskAsrFullTextResultOutputSubtitleItem() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

CoreInternalOutcome AiRecognitionTaskAsrFullTextResultOutputSubtitleItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrFullTextResultOutputSubtitleItem.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrFullTextResultOutputSubtitleItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Language") && !value["Language"].IsNull())
    {
        if (!value["Language"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrFullTextResultOutputSubtitleItem.Language` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_language = string(value["Language"].GetString());
        m_languageHasBeenSet = true;
    }

    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrFullTextResultOutputSubtitleItem.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrFullTextResultOutputSubtitleItem.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiRecognitionTaskAsrFullTextResultOutputSubtitleItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_languageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Language";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_language.c_str(), allocator).Move(), allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

}


string AiRecognitionTaskAsrFullTextResultOutputSubtitleItem::GetId() const
{
    return m_id;
}

void AiRecognitionTaskAsrFullTextResultOutputSubtitleItem::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AiRecognitionTaskAsrFullTextResultOutputSubtitleItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AiRecognitionTaskAsrFullTextResultOutputSubtitleItem::GetName() const
{
    return m_name;
}

void AiRecognitionTaskAsrFullTextResultOutputSubtitleItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AiRecognitionTaskAsrFullTextResultOutputSubtitleItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AiRecognitionTaskAsrFullTextResultOutputSubtitleItem::GetLanguage() const
{
    return m_language;
}

void AiRecognitionTaskAsrFullTextResultOutputSubtitleItem::SetLanguage(const string& _language)
{
    m_language = _language;
    m_languageHasBeenSet = true;
}

bool AiRecognitionTaskAsrFullTextResultOutputSubtitleItem::LanguageHasBeenSet() const
{
    return m_languageHasBeenSet;
}

string AiRecognitionTaskAsrFullTextResultOutputSubtitleItem::GetFormat() const
{
    return m_format;
}

void AiRecognitionTaskAsrFullTextResultOutputSubtitleItem::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool AiRecognitionTaskAsrFullTextResultOutputSubtitleItem::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string AiRecognitionTaskAsrFullTextResultOutputSubtitleItem::GetUrl() const
{
    return m_url;
}

void AiRecognitionTaskAsrFullTextResultOutputSubtitleItem::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool AiRecognitionTaskAsrFullTextResultOutputSubtitleItem::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

