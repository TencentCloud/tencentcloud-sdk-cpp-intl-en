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

#include <tencentcloud/cdwdoris/v20211228/model/Column.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

Column::Column() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_aggTypeHasBeenSet(false),
    m_isNullHasBeenSet(false),
    m_isKeyHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_isPartitionHasBeenSet(false),
    m_isDistributionHasBeenSet(false),
    m_autoIncHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

CoreInternalOutcome Column::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Column.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Column.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("AggType") && !value["AggType"].IsNull())
    {
        if (!value["AggType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Column.AggType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aggType = string(value["AggType"].GetString());
        m_aggTypeHasBeenSet = true;
    }

    if (value.HasMember("IsNull") && !value["IsNull"].IsNull())
    {
        if (!value["IsNull"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Column.IsNull` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isNull = value["IsNull"].GetBool();
        m_isNullHasBeenSet = true;
    }

    if (value.HasMember("IsKey") && !value["IsKey"].IsNull())
    {
        if (!value["IsKey"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Column.IsKey` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isKey = value["IsKey"].GetBool();
        m_isKeyHasBeenSet = true;
    }

    if (value.HasMember("DefaultValue") && !value["DefaultValue"].IsNull())
    {
        if (!value["DefaultValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Column.DefaultValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultValue = string(value["DefaultValue"].GetString());
        m_defaultValueHasBeenSet = true;
    }

    if (value.HasMember("IsPartition") && !value["IsPartition"].IsNull())
    {
        if (!value["IsPartition"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Column.IsPartition` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPartition = value["IsPartition"].GetBool();
        m_isPartitionHasBeenSet = true;
    }

    if (value.HasMember("IsDistribution") && !value["IsDistribution"].IsNull())
    {
        if (!value["IsDistribution"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Column.IsDistribution` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDistribution = value["IsDistribution"].GetBool();
        m_isDistributionHasBeenSet = true;
    }

    if (value.HasMember("AutoInc") && !value["AutoInc"].IsNull())
    {
        if (!value["AutoInc"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Column.AutoInc` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoInc = value["AutoInc"].GetBool();
        m_autoIncHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Column.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Column::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_aggTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AggType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aggType.c_str(), allocator).Move(), allocator);
    }

    if (m_isNullHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNull";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNull, allocator);
    }

    if (m_isKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isKey, allocator);
    }

    if (m_defaultValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultValue.c_str(), allocator).Move(), allocator);
    }

    if (m_isPartitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPartition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPartition, allocator);
    }

    if (m_isDistributionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDistribution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDistribution, allocator);
    }

    if (m_autoIncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoInc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoInc, allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

}


string Column::GetName() const
{
    return m_name;
}

void Column::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Column::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Column::GetType() const
{
    return m_type;
}

void Column::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Column::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string Column::GetAggType() const
{
    return m_aggType;
}

void Column::SetAggType(const string& _aggType)
{
    m_aggType = _aggType;
    m_aggTypeHasBeenSet = true;
}

bool Column::AggTypeHasBeenSet() const
{
    return m_aggTypeHasBeenSet;
}

bool Column::GetIsNull() const
{
    return m_isNull;
}

void Column::SetIsNull(const bool& _isNull)
{
    m_isNull = _isNull;
    m_isNullHasBeenSet = true;
}

bool Column::IsNullHasBeenSet() const
{
    return m_isNullHasBeenSet;
}

bool Column::GetIsKey() const
{
    return m_isKey;
}

void Column::SetIsKey(const bool& _isKey)
{
    m_isKey = _isKey;
    m_isKeyHasBeenSet = true;
}

bool Column::IsKeyHasBeenSet() const
{
    return m_isKeyHasBeenSet;
}

string Column::GetDefaultValue() const
{
    return m_defaultValue;
}

void Column::SetDefaultValue(const string& _defaultValue)
{
    m_defaultValue = _defaultValue;
    m_defaultValueHasBeenSet = true;
}

bool Column::DefaultValueHasBeenSet() const
{
    return m_defaultValueHasBeenSet;
}

bool Column::GetIsPartition() const
{
    return m_isPartition;
}

void Column::SetIsPartition(const bool& _isPartition)
{
    m_isPartition = _isPartition;
    m_isPartitionHasBeenSet = true;
}

bool Column::IsPartitionHasBeenSet() const
{
    return m_isPartitionHasBeenSet;
}

bool Column::GetIsDistribution() const
{
    return m_isDistribution;
}

void Column::SetIsDistribution(const bool& _isDistribution)
{
    m_isDistribution = _isDistribution;
    m_isDistributionHasBeenSet = true;
}

bool Column::IsDistributionHasBeenSet() const
{
    return m_isDistributionHasBeenSet;
}

bool Column::GetAutoInc() const
{
    return m_autoInc;
}

void Column::SetAutoInc(const bool& _autoInc)
{
    m_autoInc = _autoInc;
    m_autoIncHasBeenSet = true;
}

bool Column::AutoIncHasBeenSet() const
{
    return m_autoIncHasBeenSet;
}

string Column::GetComment() const
{
    return m_comment;
}

void Column::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool Column::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

