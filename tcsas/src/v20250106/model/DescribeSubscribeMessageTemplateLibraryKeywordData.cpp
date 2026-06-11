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

#include <tencentcloud/tcsas/v20250106/model/DescribeSubscribeMessageTemplateLibraryKeywordData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeSubscribeMessageTemplateLibraryKeywordData::DescribeSubscribeMessageTemplateLibraryKeywordData() :
    m_keywordIdHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_keywordTypeHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_keywordListHasBeenSet(false),
    m_defaultValueListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSubscribeMessageTemplateLibraryKeywordData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KeywordId") && !value["KeywordId"].IsNull())
    {
        if (!value["KeywordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSubscribeMessageTemplateLibraryKeywordData.KeywordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keywordId = string(value["KeywordId"].GetString());
        m_keywordIdHasBeenSet = true;
    }

    if (value.HasMember("Keyword") && !value["Keyword"].IsNull())
    {
        if (!value["Keyword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSubscribeMessageTemplateLibraryKeywordData.Keyword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyword = string(value["Keyword"].GetString());
        m_keywordHasBeenSet = true;
    }

    if (value.HasMember("KeywordType") && !value["KeywordType"].IsNull())
    {
        if (!value["KeywordType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSubscribeMessageTemplateLibraryKeywordData.KeywordType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keywordType = string(value["KeywordType"].GetString());
        m_keywordTypeHasBeenSet = true;
    }

    if (value.HasMember("DefaultValue") && !value["DefaultValue"].IsNull())
    {
        if (!value["DefaultValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSubscribeMessageTemplateLibraryKeywordData.DefaultValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultValue = string(value["DefaultValue"].GetString());
        m_defaultValueHasBeenSet = true;
    }

    if (value.HasMember("KeywordList") && !value["KeywordList"].IsNull())
    {
        if (!value["KeywordList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeSubscribeMessageTemplateLibraryKeywordData.KeywordList` is not array type"));

        const rapidjson::Value &tmpValue = value["KeywordList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            I18nItem item;
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

    if (value.HasMember("DefaultValueList") && !value["DefaultValueList"].IsNull())
    {
        if (!value["DefaultValueList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeSubscribeMessageTemplateLibraryKeywordData.DefaultValueList` is not array type"));

        const rapidjson::Value &tmpValue = value["DefaultValueList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            I18nItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_defaultValueList.push_back(item);
        }
        m_defaultValueListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeSubscribeMessageTemplateLibraryKeywordData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keywordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeywordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keywordId.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeywordType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keywordType.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultValue.c_str(), allocator).Move(), allocator);
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

    if (m_defaultValueListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultValueList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_defaultValueList.begin(); itr != m_defaultValueList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DescribeSubscribeMessageTemplateLibraryKeywordData::GetKeywordId() const
{
    return m_keywordId;
}

void DescribeSubscribeMessageTemplateLibraryKeywordData::SetKeywordId(const string& _keywordId)
{
    m_keywordId = _keywordId;
    m_keywordIdHasBeenSet = true;
}

bool DescribeSubscribeMessageTemplateLibraryKeywordData::KeywordIdHasBeenSet() const
{
    return m_keywordIdHasBeenSet;
}

string DescribeSubscribeMessageTemplateLibraryKeywordData::GetKeyword() const
{
    return m_keyword;
}

void DescribeSubscribeMessageTemplateLibraryKeywordData::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeSubscribeMessageTemplateLibraryKeywordData::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string DescribeSubscribeMessageTemplateLibraryKeywordData::GetKeywordType() const
{
    return m_keywordType;
}

void DescribeSubscribeMessageTemplateLibraryKeywordData::SetKeywordType(const string& _keywordType)
{
    m_keywordType = _keywordType;
    m_keywordTypeHasBeenSet = true;
}

bool DescribeSubscribeMessageTemplateLibraryKeywordData::KeywordTypeHasBeenSet() const
{
    return m_keywordTypeHasBeenSet;
}

string DescribeSubscribeMessageTemplateLibraryKeywordData::GetDefaultValue() const
{
    return m_defaultValue;
}

void DescribeSubscribeMessageTemplateLibraryKeywordData::SetDefaultValue(const string& _defaultValue)
{
    m_defaultValue = _defaultValue;
    m_defaultValueHasBeenSet = true;
}

bool DescribeSubscribeMessageTemplateLibraryKeywordData::DefaultValueHasBeenSet() const
{
    return m_defaultValueHasBeenSet;
}

vector<I18nItem> DescribeSubscribeMessageTemplateLibraryKeywordData::GetKeywordList() const
{
    return m_keywordList;
}

void DescribeSubscribeMessageTemplateLibraryKeywordData::SetKeywordList(const vector<I18nItem>& _keywordList)
{
    m_keywordList = _keywordList;
    m_keywordListHasBeenSet = true;
}

bool DescribeSubscribeMessageTemplateLibraryKeywordData::KeywordListHasBeenSet() const
{
    return m_keywordListHasBeenSet;
}

vector<I18nItem> DescribeSubscribeMessageTemplateLibraryKeywordData::GetDefaultValueList() const
{
    return m_defaultValueList;
}

void DescribeSubscribeMessageTemplateLibraryKeywordData::SetDefaultValueList(const vector<I18nItem>& _defaultValueList)
{
    m_defaultValueList = _defaultValueList;
    m_defaultValueListHasBeenSet = true;
}

bool DescribeSubscribeMessageTemplateLibraryKeywordData::DefaultValueListHasBeenSet() const
{
    return m_defaultValueListHasBeenSet;
}

