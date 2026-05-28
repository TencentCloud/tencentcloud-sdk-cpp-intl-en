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

#include <tencentcloud/intlpartnersmgt/v20220928/model/PeriodItemDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

PeriodItemDetail::PeriodItemDetail() :
    m_periodHasBeenSet(false),
    m_costHasBeenSet(false)
{
}

CoreInternalOutcome PeriodItemDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PeriodItemDetail.Period` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_period = string(value["Period"].GetString());
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("Cost") && !value["Cost"].IsNull())
    {
        if (!value["Cost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PeriodItemDetail.Cost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cost = string(value["Cost"].GetString());
        m_costHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PeriodItemDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_period.c_str(), allocator).Move(), allocator);
    }

    if (m_costHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cost.c_str(), allocator).Move(), allocator);
    }

}


string PeriodItemDetail::GetPeriod() const
{
    return m_period;
}

void PeriodItemDetail::SetPeriod(const string& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool PeriodItemDetail::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string PeriodItemDetail::GetCost() const
{
    return m_cost;
}

void PeriodItemDetail::SetCost(const string& _cost)
{
    m_cost = _cost;
    m_costHasBeenSet = true;
}

bool PeriodItemDetail::CostHasBeenSet() const
{
    return m_costHasBeenSet;
}

