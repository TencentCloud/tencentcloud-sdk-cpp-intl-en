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

#include <tencentcloud/quota/v20241204/model/QuotaDimension.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Quota::V20241204::Model;
using namespace std;

QuotaDimension::QuotaDimension() :
    m_dimensionNameHasBeenSet(false),
    m_primaryValueHasBeenSet(false)
{
}

CoreInternalOutcome QuotaDimension::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DimensionName") && !value["DimensionName"].IsNull())
    {
        if (!value["DimensionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaDimension.DimensionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dimensionName = string(value["DimensionName"].GetString());
        m_dimensionNameHasBeenSet = true;
    }

    if (value.HasMember("PrimaryValue") && !value["PrimaryValue"].IsNull())
    {
        if (!value["PrimaryValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaDimension.PrimaryValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_primaryValue = string(value["PrimaryValue"].GetString());
        m_primaryValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QuotaDimension::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dimensionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DimensionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dimensionName.c_str(), allocator).Move(), allocator);
    }

    if (m_primaryValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_primaryValue.c_str(), allocator).Move(), allocator);
    }

}


string QuotaDimension::GetDimensionName() const
{
    return m_dimensionName;
}

void QuotaDimension::SetDimensionName(const string& _dimensionName)
{
    m_dimensionName = _dimensionName;
    m_dimensionNameHasBeenSet = true;
}

bool QuotaDimension::DimensionNameHasBeenSet() const
{
    return m_dimensionNameHasBeenSet;
}

string QuotaDimension::GetPrimaryValue() const
{
    return m_primaryValue;
}

void QuotaDimension::SetPrimaryValue(const string& _primaryValue)
{
    m_primaryValue = _primaryValue;
    m_primaryValueHasBeenSet = true;
}

bool QuotaDimension::PrimaryValueHasBeenSet() const
{
    return m_primaryValueHasBeenSet;
}

