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

#include <tencentcloud/tcsas/v20250106/model/DescribeSubscribeMessageTemplateLibraryInfoResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeSubscribeMessageTemplateLibraryInfoResp::DescribeSubscribeMessageTemplateLibraryInfoResp() :
    m_templateTitleHasBeenSet(false),
    m_templateTitleI18nListHasBeenSet(false),
    m_defaultLangHasBeenSet(false),
    m_supportLangHasBeenSet(false),
    m_keywordsHasBeenSet(false),
    m_keywordI18nListHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_templateLibraryIdHasBeenSet(false),
    m_templateTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSubscribeMessageTemplateLibraryInfoResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateTitle") && !value["TemplateTitle"].IsNull())
    {
        if (!value["TemplateTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSubscribeMessageTemplateLibraryInfoResp.TemplateTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateTitle = string(value["TemplateTitle"].GetString());
        m_templateTitleHasBeenSet = true;
    }

    if (value.HasMember("TemplateTitleI18nList") && !value["TemplateTitleI18nList"].IsNull())
    {
        if (!value["TemplateTitleI18nList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeSubscribeMessageTemplateLibraryInfoResp.TemplateTitleI18nList` is not array type"));

        const rapidjson::Value &tmpValue = value["TemplateTitleI18nList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            I18nItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_templateTitleI18nList.push_back(item);
        }
        m_templateTitleI18nListHasBeenSet = true;
    }

    if (value.HasMember("DefaultLang") && !value["DefaultLang"].IsNull())
    {
        if (!value["DefaultLang"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSubscribeMessageTemplateLibraryInfoResp.DefaultLang` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultLang = string(value["DefaultLang"].GetString());
        m_defaultLangHasBeenSet = true;
    }

    if (value.HasMember("SupportLang") && !value["SupportLang"].IsNull())
    {
        if (!value["SupportLang"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSubscribeMessageTemplateLibraryInfoResp.SupportLang` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_supportLang = string(value["SupportLang"].GetString());
        m_supportLangHasBeenSet = true;
    }

    if (value.HasMember("Keywords") && !value["Keywords"].IsNull())
    {
        if (!value["Keywords"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSubscribeMessageTemplateLibraryInfoResp.Keywords` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keywords = string(value["Keywords"].GetString());
        m_keywordsHasBeenSet = true;
    }

    if (value.HasMember("KeywordI18nList") && !value["KeywordI18nList"].IsNull())
    {
        if (!value["KeywordI18nList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeSubscribeMessageTemplateLibraryInfoResp.KeywordI18nList` is not array type"));

        const rapidjson::Value &tmpValue = value["KeywordI18nList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SubscribeMessageTemplateLibraryKeywordI18nInfoResp item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_keywordI18nList.push_back(item);
        }
        m_keywordI18nListHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSubscribeMessageTemplateLibraryInfoResp.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("TemplateLibraryId") && !value["TemplateLibraryId"].IsNull())
    {
        if (!value["TemplateLibraryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSubscribeMessageTemplateLibraryInfoResp.TemplateLibraryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateLibraryId = string(value["TemplateLibraryId"].GetString());
        m_templateLibraryIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateType") && !value["TemplateType"].IsNull())
    {
        if (!value["TemplateType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSubscribeMessageTemplateLibraryInfoResp.TemplateType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateType = value["TemplateType"].GetInt64();
        m_templateTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeSubscribeMessageTemplateLibraryInfoResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_templateTitleI18nListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateTitleI18nList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_templateTitleI18nList.begin(); itr != m_templateTitleI18nList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_defaultLangHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultLang";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultLang.c_str(), allocator).Move(), allocator);
    }

    if (m_supportLangHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportLang";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_supportLang.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keywords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keywords.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordI18nListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeywordI18nList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_keywordI18nList.begin(); itr != m_keywordI18nList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_templateLibraryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateLibraryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateLibraryId.c_str(), allocator).Move(), allocator);
    }

    if (m_templateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateType, allocator);
    }

}


string DescribeSubscribeMessageTemplateLibraryInfoResp::GetTemplateTitle() const
{
    return m_templateTitle;
}

void DescribeSubscribeMessageTemplateLibraryInfoResp::SetTemplateTitle(const string& _templateTitle)
{
    m_templateTitle = _templateTitle;
    m_templateTitleHasBeenSet = true;
}

bool DescribeSubscribeMessageTemplateLibraryInfoResp::TemplateTitleHasBeenSet() const
{
    return m_templateTitleHasBeenSet;
}

vector<I18nItem> DescribeSubscribeMessageTemplateLibraryInfoResp::GetTemplateTitleI18nList() const
{
    return m_templateTitleI18nList;
}

void DescribeSubscribeMessageTemplateLibraryInfoResp::SetTemplateTitleI18nList(const vector<I18nItem>& _templateTitleI18nList)
{
    m_templateTitleI18nList = _templateTitleI18nList;
    m_templateTitleI18nListHasBeenSet = true;
}

bool DescribeSubscribeMessageTemplateLibraryInfoResp::TemplateTitleI18nListHasBeenSet() const
{
    return m_templateTitleI18nListHasBeenSet;
}

string DescribeSubscribeMessageTemplateLibraryInfoResp::GetDefaultLang() const
{
    return m_defaultLang;
}

void DescribeSubscribeMessageTemplateLibraryInfoResp::SetDefaultLang(const string& _defaultLang)
{
    m_defaultLang = _defaultLang;
    m_defaultLangHasBeenSet = true;
}

bool DescribeSubscribeMessageTemplateLibraryInfoResp::DefaultLangHasBeenSet() const
{
    return m_defaultLangHasBeenSet;
}

string DescribeSubscribeMessageTemplateLibraryInfoResp::GetSupportLang() const
{
    return m_supportLang;
}

void DescribeSubscribeMessageTemplateLibraryInfoResp::SetSupportLang(const string& _supportLang)
{
    m_supportLang = _supportLang;
    m_supportLangHasBeenSet = true;
}

bool DescribeSubscribeMessageTemplateLibraryInfoResp::SupportLangHasBeenSet() const
{
    return m_supportLangHasBeenSet;
}

string DescribeSubscribeMessageTemplateLibraryInfoResp::GetKeywords() const
{
    return m_keywords;
}

void DescribeSubscribeMessageTemplateLibraryInfoResp::SetKeywords(const string& _keywords)
{
    m_keywords = _keywords;
    m_keywordsHasBeenSet = true;
}

bool DescribeSubscribeMessageTemplateLibraryInfoResp::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

vector<SubscribeMessageTemplateLibraryKeywordI18nInfoResp> DescribeSubscribeMessageTemplateLibraryInfoResp::GetKeywordI18nList() const
{
    return m_keywordI18nList;
}

void DescribeSubscribeMessageTemplateLibraryInfoResp::SetKeywordI18nList(const vector<SubscribeMessageTemplateLibraryKeywordI18nInfoResp>& _keywordI18nList)
{
    m_keywordI18nList = _keywordI18nList;
    m_keywordI18nListHasBeenSet = true;
}

bool DescribeSubscribeMessageTemplateLibraryInfoResp::KeywordI18nListHasBeenSet() const
{
    return m_keywordI18nListHasBeenSet;
}

string DescribeSubscribeMessageTemplateLibraryInfoResp::GetDescription() const
{
    return m_description;
}

void DescribeSubscribeMessageTemplateLibraryInfoResp::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DescribeSubscribeMessageTemplateLibraryInfoResp::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DescribeSubscribeMessageTemplateLibraryInfoResp::GetTemplateLibraryId() const
{
    return m_templateLibraryId;
}

void DescribeSubscribeMessageTemplateLibraryInfoResp::SetTemplateLibraryId(const string& _templateLibraryId)
{
    m_templateLibraryId = _templateLibraryId;
    m_templateLibraryIdHasBeenSet = true;
}

bool DescribeSubscribeMessageTemplateLibraryInfoResp::TemplateLibraryIdHasBeenSet() const
{
    return m_templateLibraryIdHasBeenSet;
}

int64_t DescribeSubscribeMessageTemplateLibraryInfoResp::GetTemplateType() const
{
    return m_templateType;
}

void DescribeSubscribeMessageTemplateLibraryInfoResp::SetTemplateType(const int64_t& _templateType)
{
    m_templateType = _templateType;
    m_templateTypeHasBeenSet = true;
}

bool DescribeSubscribeMessageTemplateLibraryInfoResp::TemplateTypeHasBeenSet() const
{
    return m_templateTypeHasBeenSet;
}

