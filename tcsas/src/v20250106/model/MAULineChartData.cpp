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

#include <tencentcloud/tcsas/v20250106/model/MAULineChartData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

MAULineChartData::MAULineChartData() :
    m_dataTimeHasBeenSet(false),
    m_mAUCountHasBeenSet(false)
{
}

CoreInternalOutcome MAULineChartData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataTime") && !value["DataTime"].IsNull())
    {
        if (!value["DataTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MAULineChartData.DataTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataTime = value["DataTime"].GetInt64();
        m_dataTimeHasBeenSet = true;
    }

    if (value.HasMember("MAUCount") && !value["MAUCount"].IsNull())
    {
        if (!value["MAUCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MAULineChartData.MAUCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mAUCount = string(value["MAUCount"].GetString());
        m_mAUCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MAULineChartData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataTime, allocator);
    }

    if (m_mAUCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MAUCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mAUCount.c_str(), allocator).Move(), allocator);
    }

}


int64_t MAULineChartData::GetDataTime() const
{
    return m_dataTime;
}

void MAULineChartData::SetDataTime(const int64_t& _dataTime)
{
    m_dataTime = _dataTime;
    m_dataTimeHasBeenSet = true;
}

bool MAULineChartData::DataTimeHasBeenSet() const
{
    return m_dataTimeHasBeenSet;
}

string MAULineChartData::GetMAUCount() const
{
    return m_mAUCount;
}

void MAULineChartData::SetMAUCount(const string& _mAUCount)
{
    m_mAUCount = _mAUCount;
    m_mAUCountHasBeenSet = true;
}

bool MAULineChartData::MAUCountHasBeenSet() const
{
    return m_mAUCountHasBeenSet;
}

