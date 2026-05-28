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

#include <tencentcloud/intlpartnersmgt/v20220928/model/CostAnalyzeDimensionData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

CostAnalyzeDimensionData::CostAnalyzeDimensionData() :
    m_totalCountHasBeenSet(false),
    m_sumCostHasBeenSet(false),
    m_periodItemDetailHasBeenSet(false)
{
}

CoreInternalOutcome CostAnalyzeDimensionData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CostAnalyzeDimensionData.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("SumCost") && !value["SumCost"].IsNull())
    {
        if (!value["SumCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CostAnalyzeDimensionData.SumCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sumCost = string(value["SumCost"].GetString());
        m_sumCostHasBeenSet = true;
    }

    if (value.HasMember("PeriodItemDetail") && !value["PeriodItemDetail"].IsNull())
    {
        if (!value["PeriodItemDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CostAnalyzeDimensionData.PeriodItemDetail` is not array type"));

        const rapidjson::Value &tmpValue = value["PeriodItemDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PeriodItemDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_periodItemDetail.push_back(item);
        }
        m_periodItemDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CostAnalyzeDimensionData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_sumCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SumCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sumCost.c_str(), allocator).Move(), allocator);
    }

    if (m_periodItemDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodItemDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_periodItemDetail.begin(); itr != m_periodItemDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t CostAnalyzeDimensionData::GetTotalCount() const
{
    return m_totalCount;
}

void CostAnalyzeDimensionData::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool CostAnalyzeDimensionData::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

string CostAnalyzeDimensionData::GetSumCost() const
{
    return m_sumCost;
}

void CostAnalyzeDimensionData::SetSumCost(const string& _sumCost)
{
    m_sumCost = _sumCost;
    m_sumCostHasBeenSet = true;
}

bool CostAnalyzeDimensionData::SumCostHasBeenSet() const
{
    return m_sumCostHasBeenSet;
}

vector<PeriodItemDetail> CostAnalyzeDimensionData::GetPeriodItemDetail() const
{
    return m_periodItemDetail;
}

void CostAnalyzeDimensionData::SetPeriodItemDetail(const vector<PeriodItemDetail>& _periodItemDetail)
{
    m_periodItemDetail = _periodItemDetail;
    m_periodItemDetailHasBeenSet = true;
}

bool CostAnalyzeDimensionData::PeriodItemDetailHasBeenSet() const
{
    return m_periodItemDetailHasBeenSet;
}

