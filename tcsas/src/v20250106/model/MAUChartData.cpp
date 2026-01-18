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

#include <tencentcloud/tcsas/v20250106/model/MAUChartData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

MAUChartData::MAUChartData() :
    m_dataTimeHasBeenSet(false),
    m_mAUCountHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome MAUChartData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataTime") && !value["DataTime"].IsNull())
    {
        if (!value["DataTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MAUChartData.DataTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataTime = value["DataTime"].GetInt64();
        m_dataTimeHasBeenSet = true;
    }

    if (value.HasMember("MAUCount") && !value["MAUCount"].IsNull())
    {
        if (!value["MAUCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MAUChartData.MAUCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mAUCount = value["MAUCount"].GetInt64();
        m_mAUCountHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MAUChartData.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MAUChartData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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
        value.AddMember(iKey, m_mAUCount, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


int64_t MAUChartData::GetDataTime() const
{
    return m_dataTime;
}

void MAUChartData::SetDataTime(const int64_t& _dataTime)
{
    m_dataTime = _dataTime;
    m_dataTimeHasBeenSet = true;
}

bool MAUChartData::DataTimeHasBeenSet() const
{
    return m_dataTimeHasBeenSet;
}

int64_t MAUChartData::GetMAUCount() const
{
    return m_mAUCount;
}

void MAUChartData::SetMAUCount(const int64_t& _mAUCount)
{
    m_mAUCount = _mAUCount;
    m_mAUCountHasBeenSet = true;
}

bool MAUChartData::MAUCountHasBeenSet() const
{
    return m_mAUCountHasBeenSet;
}

int64_t MAUChartData::GetUpdateTime() const
{
    return m_updateTime;
}

void MAUChartData::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool MAUChartData::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

