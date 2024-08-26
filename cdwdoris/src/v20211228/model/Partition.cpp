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

#include <tencentcloud/cdwdoris/v20211228/model/Partition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

Partition::Partition() :
    m_partitionTypeHasBeenSet(false),
    m_autoPartitionHasBeenSet(false),
    m_rangeInfosHasBeenSet(false),
    m_listInfosHasBeenSet(false)
{
}

CoreInternalOutcome Partition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PartitionType") && !value["PartitionType"].IsNull())
    {
        if (!value["PartitionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Partition.PartitionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partitionType = string(value["PartitionType"].GetString());
        m_partitionTypeHasBeenSet = true;
    }

    if (value.HasMember("AutoPartition") && !value["AutoPartition"].IsNull())
    {
        if (!value["AutoPartition"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Partition.AutoPartition` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoPartition = value["AutoPartition"].GetBool();
        m_autoPartitionHasBeenSet = true;
    }

    if (value.HasMember("RangeInfos") && !value["RangeInfos"].IsNull())
    {
        if (!value["RangeInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Partition.RangeInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["RangeInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RangeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rangeInfos.push_back(item);
        }
        m_rangeInfosHasBeenSet = true;
    }

    if (value.HasMember("ListInfos") && !value["ListInfos"].IsNull())
    {
        if (!value["ListInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Partition.ListInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["ListInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ListInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_listInfos.push_back(item);
        }
        m_listInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Partition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_partitionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_partitionType.c_str(), allocator).Move(), allocator);
    }

    if (m_autoPartitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoPartition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoPartition, allocator);
    }

    if (m_rangeInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RangeInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rangeInfos.begin(); itr != m_rangeInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_listInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_listInfos.begin(); itr != m_listInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Partition::GetPartitionType() const
{
    return m_partitionType;
}

void Partition::SetPartitionType(const string& _partitionType)
{
    m_partitionType = _partitionType;
    m_partitionTypeHasBeenSet = true;
}

bool Partition::PartitionTypeHasBeenSet() const
{
    return m_partitionTypeHasBeenSet;
}

bool Partition::GetAutoPartition() const
{
    return m_autoPartition;
}

void Partition::SetAutoPartition(const bool& _autoPartition)
{
    m_autoPartition = _autoPartition;
    m_autoPartitionHasBeenSet = true;
}

bool Partition::AutoPartitionHasBeenSet() const
{
    return m_autoPartitionHasBeenSet;
}

vector<RangeInfo> Partition::GetRangeInfos() const
{
    return m_rangeInfos;
}

void Partition::SetRangeInfos(const vector<RangeInfo>& _rangeInfos)
{
    m_rangeInfos = _rangeInfos;
    m_rangeInfosHasBeenSet = true;
}

bool Partition::RangeInfosHasBeenSet() const
{
    return m_rangeInfosHasBeenSet;
}

vector<ListInfo> Partition::GetListInfos() const
{
    return m_listInfos;
}

void Partition::SetListInfos(const vector<ListInfo>& _listInfos)
{
    m_listInfos = _listInfos;
    m_listInfosHasBeenSet = true;
}

bool Partition::ListInfosHasBeenSet() const
{
    return m_listInfosHasBeenSet;
}

