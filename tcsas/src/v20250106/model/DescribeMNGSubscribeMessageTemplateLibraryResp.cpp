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

#include <tencentcloud/tcsas/v20250106/model/DescribeMNGSubscribeMessageTemplateLibraryResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeMNGSubscribeMessageTemplateLibraryResp::DescribeMNGSubscribeMessageTemplateLibraryResp() :
    m_mNPNameHasBeenSet(false),
    m_mNPIconHasBeenSet(false),
    m_templateTitleHasBeenSet(false),
    m_titleListHasBeenSet(false),
    m_defaultLangHasBeenSet(false),
    m_supportLangHasBeenSet(false),
    m_keywordListHasBeenSet(false),
    m_templateTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMNGSubscribeMessageTemplateLibraryResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MNPName") && !value["MNPName"].IsNull())
    {
        if (!value["MNPName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGSubscribeMessageTemplateLibraryResp.MNPName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPName = string(value["MNPName"].GetString());
        m_mNPNameHasBeenSet = true;
    }

    if (value.HasMember("MNPIcon") && !value["MNPIcon"].IsNull())
    {
        if (!value["MNPIcon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGSubscribeMessageTemplateLibraryResp.MNPIcon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPIcon = string(value["MNPIcon"].GetString());
        m_mNPIconHasBeenSet = true;
    }

    if (value.HasMember("TemplateTitle") && !value["TemplateTitle"].IsNull())
    {
        if (!value["TemplateTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGSubscribeMessageTemplateLibraryResp.TemplateTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateTitle = string(value["TemplateTitle"].GetString());
        m_templateTitleHasBeenSet = true;
    }

    if (value.HasMember("TitleList") && !value["TitleList"].IsNull())
    {
        if (!value["TitleList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeMNGSubscribeMessageTemplateLibraryResp.TitleList` is not array type"));

        const rapidjson::Value &tmpValue = value["TitleList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            I18nItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_titleList.push_back(item);
        }
        m_titleListHasBeenSet = true;
    }

    if (value.HasMember("DefaultLang") && !value["DefaultLang"].IsNull())
    {
        if (!value["DefaultLang"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGSubscribeMessageTemplateLibraryResp.DefaultLang` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultLang = string(value["DefaultLang"].GetString());
        m_defaultLangHasBeenSet = true;
    }

    if (value.HasMember("SupportLang") && !value["SupportLang"].IsNull())
    {
        if (!value["SupportLang"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGSubscribeMessageTemplateLibraryResp.SupportLang` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_supportLang = string(value["SupportLang"].GetString());
        m_supportLangHasBeenSet = true;
    }

    if (value.HasMember("KeywordList") && !value["KeywordList"].IsNull())
    {
        if (!value["KeywordList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeMNGSubscribeMessageTemplateLibraryResp.KeywordList` is not array type"));

        const rapidjson::Value &tmpValue = value["KeywordList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribeMNGSubscribeMessageTemplateLibraryKeywordInfoResp item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_keywordList.push_back(item);
        }
        m_keywordListHasBeenSet = true;
    }

    if (value.HasMember("TemplateType") && !value["TemplateType"].IsNull())
    {
        if (!value["TemplateType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGSubscribeMessageTemplateLibraryResp.TemplateType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateType = value["TemplateType"].GetInt64();
        m_templateTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeMNGSubscribeMessageTemplateLibraryResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mNPNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPName.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPIconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPIcon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPIcon.c_str(), allocator).Move(), allocator);
    }

    if (m_templateTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_titleListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TitleList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_titleList.begin(); itr != m_titleList.end(); ++itr, ++i)
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

    if (m_keywordListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeywordList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_keywordList.begin(); itr != m_keywordList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_templateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateType, allocator);
    }

}


string DescribeMNGSubscribeMessageTemplateLibraryResp::GetMNPName() const
{
    return m_mNPName;
}

void DescribeMNGSubscribeMessageTemplateLibraryResp::SetMNPName(const string& _mNPName)
{
    m_mNPName = _mNPName;
    m_mNPNameHasBeenSet = true;
}

bool DescribeMNGSubscribeMessageTemplateLibraryResp::MNPNameHasBeenSet() const
{
    return m_mNPNameHasBeenSet;
}

string DescribeMNGSubscribeMessageTemplateLibraryResp::GetMNPIcon() const
{
    return m_mNPIcon;
}

void DescribeMNGSubscribeMessageTemplateLibraryResp::SetMNPIcon(const string& _mNPIcon)
{
    m_mNPIcon = _mNPIcon;
    m_mNPIconHasBeenSet = true;
}

bool DescribeMNGSubscribeMessageTemplateLibraryResp::MNPIconHasBeenSet() const
{
    return m_mNPIconHasBeenSet;
}

string DescribeMNGSubscribeMessageTemplateLibraryResp::GetTemplateTitle() const
{
    return m_templateTitle;
}

void DescribeMNGSubscribeMessageTemplateLibraryResp::SetTemplateTitle(const string& _templateTitle)
{
    m_templateTitle = _templateTitle;
    m_templateTitleHasBeenSet = true;
}

bool DescribeMNGSubscribeMessageTemplateLibraryResp::TemplateTitleHasBeenSet() const
{
    return m_templateTitleHasBeenSet;
}

vector<I18nItem> DescribeMNGSubscribeMessageTemplateLibraryResp::GetTitleList() const
{
    return m_titleList;
}

void DescribeMNGSubscribeMessageTemplateLibraryResp::SetTitleList(const vector<I18nItem>& _titleList)
{
    m_titleList = _titleList;
    m_titleListHasBeenSet = true;
}

bool DescribeMNGSubscribeMessageTemplateLibraryResp::TitleListHasBeenSet() const
{
    return m_titleListHasBeenSet;
}

string DescribeMNGSubscribeMessageTemplateLibraryResp::GetDefaultLang() const
{
    return m_defaultLang;
}

void DescribeMNGSubscribeMessageTemplateLibraryResp::SetDefaultLang(const string& _defaultLang)
{
    m_defaultLang = _defaultLang;
    m_defaultLangHasBeenSet = true;
}

bool DescribeMNGSubscribeMessageTemplateLibraryResp::DefaultLangHasBeenSet() const
{
    return m_defaultLangHasBeenSet;
}

string DescribeMNGSubscribeMessageTemplateLibraryResp::GetSupportLang() const
{
    return m_supportLang;
}

void DescribeMNGSubscribeMessageTemplateLibraryResp::SetSupportLang(const string& _supportLang)
{
    m_supportLang = _supportLang;
    m_supportLangHasBeenSet = true;
}

bool DescribeMNGSubscribeMessageTemplateLibraryResp::SupportLangHasBeenSet() const
{
    return m_supportLangHasBeenSet;
}

vector<DescribeMNGSubscribeMessageTemplateLibraryKeywordInfoResp> DescribeMNGSubscribeMessageTemplateLibraryResp::GetKeywordList() const
{
    return m_keywordList;
}

void DescribeMNGSubscribeMessageTemplateLibraryResp::SetKeywordList(const vector<DescribeMNGSubscribeMessageTemplateLibraryKeywordInfoResp>& _keywordList)
{
    m_keywordList = _keywordList;
    m_keywordListHasBeenSet = true;
}

bool DescribeMNGSubscribeMessageTemplateLibraryResp::KeywordListHasBeenSet() const
{
    return m_keywordListHasBeenSet;
}

int64_t DescribeMNGSubscribeMessageTemplateLibraryResp::GetTemplateType() const
{
    return m_templateType;
}

void DescribeMNGSubscribeMessageTemplateLibraryResp::SetTemplateType(const int64_t& _templateType)
{
    m_templateType = _templateType;
    m_templateTypeHasBeenSet = true;
}

bool DescribeMNGSubscribeMessageTemplateLibraryResp::TemplateTypeHasBeenSet() const
{
    return m_templateTypeHasBeenSet;
}

