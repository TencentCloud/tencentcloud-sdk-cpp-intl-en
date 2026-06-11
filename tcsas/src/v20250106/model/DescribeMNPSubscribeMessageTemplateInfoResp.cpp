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

#include <tencentcloud/tcsas/v20250106/model/DescribeMNPSubscribeMessageTemplateInfoResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeMNPSubscribeMessageTemplateInfoResp::DescribeMNPSubscribeMessageTemplateInfoResp() :
    m_templateTitleHasBeenSet(false),
    m_templateTitleI18nListHasBeenSet(false),
    m_defaultLangHasBeenSet(false),
    m_supportLangHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_keywordsHasBeenSet(false),
    m_keywordI18nListHasBeenSet(false),
    m_templateTypeHasBeenSet(false),
    m_createUserHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMNPSubscribeMessageTemplateInfoResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateTitle") && !value["TemplateTitle"].IsNull())
    {
        if (!value["TemplateTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSubscribeMessageTemplateInfoResp.TemplateTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateTitle = string(value["TemplateTitle"].GetString());
        m_templateTitleHasBeenSet = true;
    }

    if (value.HasMember("TemplateTitleI18nList") && !value["TemplateTitleI18nList"].IsNull())
    {
        if (!value["TemplateTitleI18nList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSubscribeMessageTemplateInfoResp.TemplateTitleI18nList` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSubscribeMessageTemplateInfoResp.DefaultLang` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultLang = string(value["DefaultLang"].GetString());
        m_defaultLangHasBeenSet = true;
    }

    if (value.HasMember("SupportLang") && !value["SupportLang"].IsNull())
    {
        if (!value["SupportLang"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSubscribeMessageTemplateInfoResp.SupportLang` is not array type"));

        const rapidjson::Value &tmpValue = value["SupportLang"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportLang.push_back((*itr).GetString());
        }
        m_supportLangHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSubscribeMessageTemplateInfoResp.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("Keywords") && !value["Keywords"].IsNull())
    {
        if (!value["Keywords"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSubscribeMessageTemplateInfoResp.Keywords` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keywords = string(value["Keywords"].GetString());
        m_keywordsHasBeenSet = true;
    }

    if (value.HasMember("KeywordI18nList") && !value["KeywordI18nList"].IsNull())
    {
        if (!value["KeywordI18nList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSubscribeMessageTemplateInfoResp.KeywordI18nList` is not array type"));

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

    if (value.HasMember("TemplateType") && !value["TemplateType"].IsNull())
    {
        if (!value["TemplateType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSubscribeMessageTemplateInfoResp.TemplateType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateType = value["TemplateType"].GetInt64();
        m_templateTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateUser") && !value["CreateUser"].IsNull())
    {
        if (!value["CreateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSubscribeMessageTemplateInfoResp.CreateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUser = string(value["CreateUser"].GetString());
        m_createUserHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSubscribeMessageTemplateInfoResp.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSubscribeMessageTemplateInfoResp.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeMNPSubscribeMessageTemplateInfoResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supportLang.begin(); itr != m_supportLang.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
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

    if (m_templateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateType, allocator);
    }

    if (m_createUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUser.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


string DescribeMNPSubscribeMessageTemplateInfoResp::GetTemplateTitle() const
{
    return m_templateTitle;
}

void DescribeMNPSubscribeMessageTemplateInfoResp::SetTemplateTitle(const string& _templateTitle)
{
    m_templateTitle = _templateTitle;
    m_templateTitleHasBeenSet = true;
}

bool DescribeMNPSubscribeMessageTemplateInfoResp::TemplateTitleHasBeenSet() const
{
    return m_templateTitleHasBeenSet;
}

vector<I18nItem> DescribeMNPSubscribeMessageTemplateInfoResp::GetTemplateTitleI18nList() const
{
    return m_templateTitleI18nList;
}

void DescribeMNPSubscribeMessageTemplateInfoResp::SetTemplateTitleI18nList(const vector<I18nItem>& _templateTitleI18nList)
{
    m_templateTitleI18nList = _templateTitleI18nList;
    m_templateTitleI18nListHasBeenSet = true;
}

bool DescribeMNPSubscribeMessageTemplateInfoResp::TemplateTitleI18nListHasBeenSet() const
{
    return m_templateTitleI18nListHasBeenSet;
}

string DescribeMNPSubscribeMessageTemplateInfoResp::GetDefaultLang() const
{
    return m_defaultLang;
}

void DescribeMNPSubscribeMessageTemplateInfoResp::SetDefaultLang(const string& _defaultLang)
{
    m_defaultLang = _defaultLang;
    m_defaultLangHasBeenSet = true;
}

bool DescribeMNPSubscribeMessageTemplateInfoResp::DefaultLangHasBeenSet() const
{
    return m_defaultLangHasBeenSet;
}

vector<string> DescribeMNPSubscribeMessageTemplateInfoResp::GetSupportLang() const
{
    return m_supportLang;
}

void DescribeMNPSubscribeMessageTemplateInfoResp::SetSupportLang(const vector<string>& _supportLang)
{
    m_supportLang = _supportLang;
    m_supportLangHasBeenSet = true;
}

bool DescribeMNPSubscribeMessageTemplateInfoResp::SupportLangHasBeenSet() const
{
    return m_supportLangHasBeenSet;
}

string DescribeMNPSubscribeMessageTemplateInfoResp::GetTemplateId() const
{
    return m_templateId;
}

void DescribeMNPSubscribeMessageTemplateInfoResp::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool DescribeMNPSubscribeMessageTemplateInfoResp::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string DescribeMNPSubscribeMessageTemplateInfoResp::GetKeywords() const
{
    return m_keywords;
}

void DescribeMNPSubscribeMessageTemplateInfoResp::SetKeywords(const string& _keywords)
{
    m_keywords = _keywords;
    m_keywordsHasBeenSet = true;
}

bool DescribeMNPSubscribeMessageTemplateInfoResp::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

vector<SubscribeMessageTemplateLibraryKeywordI18nInfoResp> DescribeMNPSubscribeMessageTemplateInfoResp::GetKeywordI18nList() const
{
    return m_keywordI18nList;
}

void DescribeMNPSubscribeMessageTemplateInfoResp::SetKeywordI18nList(const vector<SubscribeMessageTemplateLibraryKeywordI18nInfoResp>& _keywordI18nList)
{
    m_keywordI18nList = _keywordI18nList;
    m_keywordI18nListHasBeenSet = true;
}

bool DescribeMNPSubscribeMessageTemplateInfoResp::KeywordI18nListHasBeenSet() const
{
    return m_keywordI18nListHasBeenSet;
}

int64_t DescribeMNPSubscribeMessageTemplateInfoResp::GetTemplateType() const
{
    return m_templateType;
}

void DescribeMNPSubscribeMessageTemplateInfoResp::SetTemplateType(const int64_t& _templateType)
{
    m_templateType = _templateType;
    m_templateTypeHasBeenSet = true;
}

bool DescribeMNPSubscribeMessageTemplateInfoResp::TemplateTypeHasBeenSet() const
{
    return m_templateTypeHasBeenSet;
}

string DescribeMNPSubscribeMessageTemplateInfoResp::GetCreateUser() const
{
    return m_createUser;
}

void DescribeMNPSubscribeMessageTemplateInfoResp::SetCreateUser(const string& _createUser)
{
    m_createUser = _createUser;
    m_createUserHasBeenSet = true;
}

bool DescribeMNPSubscribeMessageTemplateInfoResp::CreateUserHasBeenSet() const
{
    return m_createUserHasBeenSet;
}

string DescribeMNPSubscribeMessageTemplateInfoResp::GetCreateTime() const
{
    return m_createTime;
}

void DescribeMNPSubscribeMessageTemplateInfoResp::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeMNPSubscribeMessageTemplateInfoResp::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t DescribeMNPSubscribeMessageTemplateInfoResp::GetStatus() const
{
    return m_status;
}

void DescribeMNPSubscribeMessageTemplateInfoResp::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeMNPSubscribeMessageTemplateInfoResp::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

