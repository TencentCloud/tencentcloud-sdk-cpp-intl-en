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

#include <tencentcloud/faceid/v20180301/model/EditDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

EditDetail::EditDetail() :
    m_fieldNameHasBeenSet(false),
    m_originalFieldValueHasBeenSet(false),
    m_revisedFieldValueHasBeenSet(false)
{
}

CoreInternalOutcome EditDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FieldName") && !value["FieldName"].IsNull())
    {
        if (!value["FieldName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EditDetail.FieldName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldName = string(value["FieldName"].GetString());
        m_fieldNameHasBeenSet = true;
    }

    if (value.HasMember("OriginalFieldValue") && !value["OriginalFieldValue"].IsNull())
    {
        if (!value["OriginalFieldValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EditDetail.OriginalFieldValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalFieldValue = string(value["OriginalFieldValue"].GetString());
        m_originalFieldValueHasBeenSet = true;
    }

    if (value.HasMember("RevisedFieldValue") && !value["RevisedFieldValue"].IsNull())
    {
        if (!value["RevisedFieldValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EditDetail.RevisedFieldValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_revisedFieldValue = string(value["RevisedFieldValue"].GetString());
        m_revisedFieldValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EditDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fieldNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldName.c_str(), allocator).Move(), allocator);
    }

    if (m_originalFieldValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalFieldValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalFieldValue.c_str(), allocator).Move(), allocator);
    }

    if (m_revisedFieldValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RevisedFieldValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_revisedFieldValue.c_str(), allocator).Move(), allocator);
    }

}


string EditDetail::GetFieldName() const
{
    return m_fieldName;
}

void EditDetail::SetFieldName(const string& _fieldName)
{
    m_fieldName = _fieldName;
    m_fieldNameHasBeenSet = true;
}

bool EditDetail::FieldNameHasBeenSet() const
{
    return m_fieldNameHasBeenSet;
}

string EditDetail::GetOriginalFieldValue() const
{
    return m_originalFieldValue;
}

void EditDetail::SetOriginalFieldValue(const string& _originalFieldValue)
{
    m_originalFieldValue = _originalFieldValue;
    m_originalFieldValueHasBeenSet = true;
}

bool EditDetail::OriginalFieldValueHasBeenSet() const
{
    return m_originalFieldValueHasBeenSet;
}

string EditDetail::GetRevisedFieldValue() const
{
    return m_revisedFieldValue;
}

void EditDetail::SetRevisedFieldValue(const string& _revisedFieldValue)
{
    m_revisedFieldValue = _revisedFieldValue;
    m_revisedFieldValueHasBeenSet = true;
}

bool EditDetail::RevisedFieldValueHasBeenSet() const
{
    return m_revisedFieldValueHasBeenSet;
}

