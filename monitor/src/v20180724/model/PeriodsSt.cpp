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

#include <tencentcloud/monitor/v20180724/model/PeriodsSt.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace rapidjson;
using namespace std;

PeriodsSt::PeriodsSt() :
    m_periodHasBeenSet(false),
    m_statTypeHasBeenSet(false)
{
}

CoreInternalOutcome PeriodsSt::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsString())
        {
            return CoreInternalOutcome(Error("response `PeriodsSt.Period` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_period = string(value["Period"].GetString());
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("StatType") && !value["StatType"].IsNull())
    {
        if (!value["StatType"].IsArray())
            return CoreInternalOutcome(Error("response `PeriodsSt.StatType` is not array type"));

        const Value &tmpValue = value["StatType"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_statType.push_back((*itr).GetString());
        }
        m_statTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PeriodsSt::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_periodHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_period.c_str(), allocator).Move(), allocator);
    }

    if (m_statTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StatType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_statType.begin(); itr != m_statType.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string PeriodsSt::GetPeriod() const
{
    return m_period;
}

void PeriodsSt::SetPeriod(const string& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool PeriodsSt::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

vector<string> PeriodsSt::GetStatType() const
{
    return m_statType;
}

void PeriodsSt::SetStatType(const vector<string>& _statType)
{
    m_statType = _statType;
    m_statTypeHasBeenSet = true;
}

bool PeriodsSt::StatTypeHasBeenSet() const
{
    return m_statTypeHasBeenSet;
}

