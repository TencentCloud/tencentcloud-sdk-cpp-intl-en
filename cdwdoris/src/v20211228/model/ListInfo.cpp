/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/cdwdoris/v20211228/model/ListInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

ListInfo::ListInfo() :
    m_partitionNameHasBeenSet(false),
    m_enumValuesHasBeenSet(false)
{
}

CoreInternalOutcome ListInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PartitionName") && !value["PartitionName"].IsNull())
    {
        if (!value["PartitionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListInfo.PartitionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partitionName = string(value["PartitionName"].GetString());
        m_partitionNameHasBeenSet = true;
    }

    if (value.HasMember("EnumValues") && !value["EnumValues"].IsNull())
    {
        if (!value["EnumValues"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ListInfo.EnumValues` is not array type"));

        const rapidjson::Value &tmpValue = value["EnumValues"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_enumValues.push_back((*itr).GetString());
        }
        m_enumValuesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ListInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_partitionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_partitionName.c_str(), allocator).Move(), allocator);
    }

    if (m_enumValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnumValues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_enumValues.begin(); itr != m_enumValues.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ListInfo::GetPartitionName() const
{
    return m_partitionName;
}

void ListInfo::SetPartitionName(const string& _partitionName)
{
    m_partitionName = _partitionName;
    m_partitionNameHasBeenSet = true;
}

bool ListInfo::PartitionNameHasBeenSet() const
{
    return m_partitionNameHasBeenSet;
}

vector<string> ListInfo::GetEnumValues() const
{
    return m_enumValues;
}

void ListInfo::SetEnumValues(const vector<string>& _enumValues)
{
    m_enumValues = _enumValues;
    m_enumValuesHasBeenSet = true;
}

bool ListInfo::EnumValuesHasBeenSet() const
{
    return m_enumValuesHasBeenSet;
}

