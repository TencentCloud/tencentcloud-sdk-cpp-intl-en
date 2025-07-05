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

#include <tencentcloud/cdwdoris/v20211228/model/IndexInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

IndexInfo::IndexInfo() :
    m_idxNameHasBeenSet(false),
    m_columnNameHasBeenSet(false),
    m_idxTypeHasBeenSet(false),
    m_idxPropertiesHasBeenSet(false),
    m_idxCommentHasBeenSet(false)
{
}

CoreInternalOutcome IndexInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IdxName") && !value["IdxName"].IsNull())
    {
        if (!value["IdxName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexInfo.IdxName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idxName = string(value["IdxName"].GetString());
        m_idxNameHasBeenSet = true;
    }

    if (value.HasMember("ColumnName") && !value["ColumnName"].IsNull())
    {
        if (!value["ColumnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexInfo.ColumnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnName = string(value["ColumnName"].GetString());
        m_columnNameHasBeenSet = true;
    }

    if (value.HasMember("IdxType") && !value["IdxType"].IsNull())
    {
        if (!value["IdxType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexInfo.IdxType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idxType = string(value["IdxType"].GetString());
        m_idxTypeHasBeenSet = true;
    }

    if (value.HasMember("IdxProperties") && !value["IdxProperties"].IsNull())
    {
        if (!value["IdxProperties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IndexInfo.IdxProperties` is not array type"));

        const rapidjson::Value &tmpValue = value["IdxProperties"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Property item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_idxProperties.push_back(item);
        }
        m_idxPropertiesHasBeenSet = true;
    }

    if (value.HasMember("IdxComment") && !value["IdxComment"].IsNull())
    {
        if (!value["IdxComment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexInfo.IdxComment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idxComment = string(value["IdxComment"].GetString());
        m_idxCommentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IndexInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idxNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdxName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idxName.c_str(), allocator).Move(), allocator);
    }

    if (m_columnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnName.c_str(), allocator).Move(), allocator);
    }

    if (m_idxTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdxType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idxType.c_str(), allocator).Move(), allocator);
    }

    if (m_idxPropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdxProperties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_idxProperties.begin(); itr != m_idxProperties.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_idxCommentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdxComment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idxComment.c_str(), allocator).Move(), allocator);
    }

}


string IndexInfo::GetIdxName() const
{
    return m_idxName;
}

void IndexInfo::SetIdxName(const string& _idxName)
{
    m_idxName = _idxName;
    m_idxNameHasBeenSet = true;
}

bool IndexInfo::IdxNameHasBeenSet() const
{
    return m_idxNameHasBeenSet;
}

string IndexInfo::GetColumnName() const
{
    return m_columnName;
}

void IndexInfo::SetColumnName(const string& _columnName)
{
    m_columnName = _columnName;
    m_columnNameHasBeenSet = true;
}

bool IndexInfo::ColumnNameHasBeenSet() const
{
    return m_columnNameHasBeenSet;
}

string IndexInfo::GetIdxType() const
{
    return m_idxType;
}

void IndexInfo::SetIdxType(const string& _idxType)
{
    m_idxType = _idxType;
    m_idxTypeHasBeenSet = true;
}

bool IndexInfo::IdxTypeHasBeenSet() const
{
    return m_idxTypeHasBeenSet;
}

vector<Property> IndexInfo::GetIdxProperties() const
{
    return m_idxProperties;
}

void IndexInfo::SetIdxProperties(const vector<Property>& _idxProperties)
{
    m_idxProperties = _idxProperties;
    m_idxPropertiesHasBeenSet = true;
}

bool IndexInfo::IdxPropertiesHasBeenSet() const
{
    return m_idxPropertiesHasBeenSet;
}

string IndexInfo::GetIdxComment() const
{
    return m_idxComment;
}

void IndexInfo::SetIdxComment(const string& _idxComment)
{
    m_idxComment = _idxComment;
    m_idxCommentHasBeenSet = true;
}

bool IndexInfo::IdxCommentHasBeenSet() const
{
    return m_idxCommentHasBeenSet;
}

