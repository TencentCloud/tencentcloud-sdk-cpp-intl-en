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

#include <tencentcloud/tcsas/v20250106/model/AnalysisData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

AnalysisData::AnalysisData() :
    m_dataTimeHasBeenSet(false),
    m_numberHasBeenSet(false)
{
}

CoreInternalOutcome AnalysisData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataTime") && !value["DataTime"].IsNull())
    {
        if (!value["DataTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisData.DataTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataTime = string(value["DataTime"].GetString());
        m_dataTimeHasBeenSet = true;
    }

    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisData.Number` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_number = string(value["Number"].GetString());
        m_numberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AnalysisData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataTime.c_str(), allocator).Move(), allocator);
    }

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_number.c_str(), allocator).Move(), allocator);
    }

}


string AnalysisData::GetDataTime() const
{
    return m_dataTime;
}

void AnalysisData::SetDataTime(const string& _dataTime)
{
    m_dataTime = _dataTime;
    m_dataTimeHasBeenSet = true;
}

bool AnalysisData::DataTimeHasBeenSet() const
{
    return m_dataTimeHasBeenSet;
}

string AnalysisData::GetNumber() const
{
    return m_number;
}

void AnalysisData::SetNumber(const string& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool AnalysisData::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

