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

#include <tencentcloud/intlpartnersmgt/v20220928/model/DimensionPeriodData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

DimensionPeriodData::DimensionPeriodData() :
    m_nameHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_sumCostHasBeenSet(false),
    m_itemDetailHasBeenSet(false)
{
}

CoreInternalOutcome DimensionPeriodData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DimensionPeriodData.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DimensionPeriodData.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("SumCost") && !value["SumCost"].IsNull())
    {
        if (!value["SumCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DimensionPeriodData.SumCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sumCost = string(value["SumCost"].GetString());
        m_sumCostHasBeenSet = true;
    }

    if (value.HasMember("ItemDetail") && !value["ItemDetail"].IsNull())
    {
        if (!value["ItemDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DimensionPeriodData.ItemDetail` is not array type"));

        const rapidjson::Value &tmpValue = value["ItemDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PeriodItemDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_itemDetail.push_back(item);
        }
        m_itemDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DimensionPeriodData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_sumCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SumCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sumCost.c_str(), allocator).Move(), allocator);
    }

    if (m_itemDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_itemDetail.begin(); itr != m_itemDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DimensionPeriodData::GetName() const
{
    return m_name;
}

void DimensionPeriodData::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DimensionPeriodData::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DimensionPeriodData::GetCode() const
{
    return m_code;
}

void DimensionPeriodData::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool DimensionPeriodData::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string DimensionPeriodData::GetSumCost() const
{
    return m_sumCost;
}

void DimensionPeriodData::SetSumCost(const string& _sumCost)
{
    m_sumCost = _sumCost;
    m_sumCostHasBeenSet = true;
}

bool DimensionPeriodData::SumCostHasBeenSet() const
{
    return m_sumCostHasBeenSet;
}

vector<PeriodItemDetail> DimensionPeriodData::GetItemDetail() const
{
    return m_itemDetail;
}

void DimensionPeriodData::SetItemDetail(const vector<PeriodItemDetail>& _itemDetail)
{
    m_itemDetail = _itemDetail;
    m_itemDetailHasBeenSet = true;
}

bool DimensionPeriodData::ItemDetailHasBeenSet() const
{
    return m_itemDetailHasBeenSet;
}

