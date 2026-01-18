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

#include <tencentcloud/tcsas/v20250106/model/VisitData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

VisitData::VisitData() :
    m_visitCountHasBeenSet(false),
    m_avgDeviceVisitDeepHasBeenSet(false),
    m_avgCountVisitDeepHasBeenSet(false),
    m_avgPageVisitDurationHasBeenSet(false),
    m_avgCountVisitDurationHasBeenSet(false),
    m_dataTimeHasBeenSet(false)
{
}

CoreInternalOutcome VisitData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VisitCount") && !value["VisitCount"].IsNull())
    {
        if (!value["VisitCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VisitData.VisitCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_visitCount = value["VisitCount"].GetInt64();
        m_visitCountHasBeenSet = true;
    }

    if (value.HasMember("AvgDeviceVisitDeep") && !value["AvgDeviceVisitDeep"].IsNull())
    {
        if (!value["AvgDeviceVisitDeep"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VisitData.AvgDeviceVisitDeep` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avgDeviceVisitDeep = string(value["AvgDeviceVisitDeep"].GetString());
        m_avgDeviceVisitDeepHasBeenSet = true;
    }

    if (value.HasMember("AvgCountVisitDeep") && !value["AvgCountVisitDeep"].IsNull())
    {
        if (!value["AvgCountVisitDeep"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VisitData.AvgCountVisitDeep` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avgCountVisitDeep = string(value["AvgCountVisitDeep"].GetString());
        m_avgCountVisitDeepHasBeenSet = true;
    }

    if (value.HasMember("AvgPageVisitDuration") && !value["AvgPageVisitDuration"].IsNull())
    {
        if (!value["AvgPageVisitDuration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VisitData.AvgPageVisitDuration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avgPageVisitDuration = string(value["AvgPageVisitDuration"].GetString());
        m_avgPageVisitDurationHasBeenSet = true;
    }

    if (value.HasMember("AvgCountVisitDuration") && !value["AvgCountVisitDuration"].IsNull())
    {
        if (!value["AvgCountVisitDuration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VisitData.AvgCountVisitDuration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avgCountVisitDuration = string(value["AvgCountVisitDuration"].GetString());
        m_avgCountVisitDurationHasBeenSet = true;
    }

    if (value.HasMember("DataTime") && !value["DataTime"].IsNull())
    {
        if (!value["DataTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VisitData.DataTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataTime = value["DataTime"].GetInt64();
        m_dataTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VisitData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_visitCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VisitCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_visitCount, allocator);
    }

    if (m_avgDeviceVisitDeepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgDeviceVisitDeep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_avgDeviceVisitDeep.c_str(), allocator).Move(), allocator);
    }

    if (m_avgCountVisitDeepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgCountVisitDeep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_avgCountVisitDeep.c_str(), allocator).Move(), allocator);
    }

    if (m_avgPageVisitDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgPageVisitDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_avgPageVisitDuration.c_str(), allocator).Move(), allocator);
    }

    if (m_avgCountVisitDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgCountVisitDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_avgCountVisitDuration.c_str(), allocator).Move(), allocator);
    }

    if (m_dataTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataTime, allocator);
    }

}


int64_t VisitData::GetVisitCount() const
{
    return m_visitCount;
}

void VisitData::SetVisitCount(const int64_t& _visitCount)
{
    m_visitCount = _visitCount;
    m_visitCountHasBeenSet = true;
}

bool VisitData::VisitCountHasBeenSet() const
{
    return m_visitCountHasBeenSet;
}

string VisitData::GetAvgDeviceVisitDeep() const
{
    return m_avgDeviceVisitDeep;
}

void VisitData::SetAvgDeviceVisitDeep(const string& _avgDeviceVisitDeep)
{
    m_avgDeviceVisitDeep = _avgDeviceVisitDeep;
    m_avgDeviceVisitDeepHasBeenSet = true;
}

bool VisitData::AvgDeviceVisitDeepHasBeenSet() const
{
    return m_avgDeviceVisitDeepHasBeenSet;
}

string VisitData::GetAvgCountVisitDeep() const
{
    return m_avgCountVisitDeep;
}

void VisitData::SetAvgCountVisitDeep(const string& _avgCountVisitDeep)
{
    m_avgCountVisitDeep = _avgCountVisitDeep;
    m_avgCountVisitDeepHasBeenSet = true;
}

bool VisitData::AvgCountVisitDeepHasBeenSet() const
{
    return m_avgCountVisitDeepHasBeenSet;
}

string VisitData::GetAvgPageVisitDuration() const
{
    return m_avgPageVisitDuration;
}

void VisitData::SetAvgPageVisitDuration(const string& _avgPageVisitDuration)
{
    m_avgPageVisitDuration = _avgPageVisitDuration;
    m_avgPageVisitDurationHasBeenSet = true;
}

bool VisitData::AvgPageVisitDurationHasBeenSet() const
{
    return m_avgPageVisitDurationHasBeenSet;
}

string VisitData::GetAvgCountVisitDuration() const
{
    return m_avgCountVisitDuration;
}

void VisitData::SetAvgCountVisitDuration(const string& _avgCountVisitDuration)
{
    m_avgCountVisitDuration = _avgCountVisitDuration;
    m_avgCountVisitDurationHasBeenSet = true;
}

bool VisitData::AvgCountVisitDurationHasBeenSet() const
{
    return m_avgCountVisitDurationHasBeenSet;
}

int64_t VisitData::GetDataTime() const
{
    return m_dataTime;
}

void VisitData::SetDataTime(const int64_t& _dataTime)
{
    m_dataTime = _dataTime;
    m_dataTimeHasBeenSet = true;
}

bool VisitData::DataTimeHasBeenSet() const
{
    return m_dataTimeHasBeenSet;
}

