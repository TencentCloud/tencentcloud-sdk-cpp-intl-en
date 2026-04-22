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

#include <tencentcloud/tcsas/v20250106/model/AccessAnalysisDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

AccessAnalysisDetail::AccessAnalysisDetail() :
    m_activeCountHasBeenSet(false),
    m_avgDeviceHasBeenSet(false),
    m_avgOnceHasBeenSet(false),
    m_avgOpenCountHasBeenSet(false),
    m_dataTimeHasBeenSet(false),
    m_flushTimeHasBeenSet(false),
    m_newCountHasBeenSet(false),
    m_openCountHasBeenSet(false),
    m_totalShareNumHasBeenSet(false),
    m_totalUserNumHasBeenSet(false)
{
}

CoreInternalOutcome AccessAnalysisDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActiveCount") && !value["ActiveCount"].IsNull())
    {
        if (!value["ActiveCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessAnalysisDetail.ActiveCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activeCount = value["ActiveCount"].GetInt64();
        m_activeCountHasBeenSet = true;
    }

    if (value.HasMember("AvgDevice") && !value["AvgDevice"].IsNull())
    {
        if (!value["AvgDevice"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessAnalysisDetail.AvgDevice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avgDevice = string(value["AvgDevice"].GetString());
        m_avgDeviceHasBeenSet = true;
    }

    if (value.HasMember("AvgOnce") && !value["AvgOnce"].IsNull())
    {
        if (!value["AvgOnce"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessAnalysisDetail.AvgOnce` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avgOnce = string(value["AvgOnce"].GetString());
        m_avgOnceHasBeenSet = true;
    }

    if (value.HasMember("AvgOpenCount") && !value["AvgOpenCount"].IsNull())
    {
        if (!value["AvgOpenCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessAnalysisDetail.AvgOpenCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avgOpenCount = string(value["AvgOpenCount"].GetString());
        m_avgOpenCountHasBeenSet = true;
    }

    if (value.HasMember("DataTime") && !value["DataTime"].IsNull())
    {
        if (!value["DataTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessAnalysisDetail.DataTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataTime = string(value["DataTime"].GetString());
        m_dataTimeHasBeenSet = true;
    }

    if (value.HasMember("FlushTime") && !value["FlushTime"].IsNull())
    {
        if (!value["FlushTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessAnalysisDetail.FlushTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flushTime = string(value["FlushTime"].GetString());
        m_flushTimeHasBeenSet = true;
    }

    if (value.HasMember("NewCount") && !value["NewCount"].IsNull())
    {
        if (!value["NewCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessAnalysisDetail.NewCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_newCount = value["NewCount"].GetInt64();
        m_newCountHasBeenSet = true;
    }

    if (value.HasMember("OpenCount") && !value["OpenCount"].IsNull())
    {
        if (!value["OpenCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessAnalysisDetail.OpenCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_openCount = value["OpenCount"].GetInt64();
        m_openCountHasBeenSet = true;
    }

    if (value.HasMember("TotalShareNum") && !value["TotalShareNum"].IsNull())
    {
        if (!value["TotalShareNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessAnalysisDetail.TotalShareNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalShareNum = value["TotalShareNum"].GetInt64();
        m_totalShareNumHasBeenSet = true;
    }

    if (value.HasMember("TotalUserNum") && !value["TotalUserNum"].IsNull())
    {
        if (!value["TotalUserNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessAnalysisDetail.TotalUserNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalUserNum = value["TotalUserNum"].GetInt64();
        m_totalUserNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessAnalysisDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_activeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeCount, allocator);
    }

    if (m_avgDeviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgDevice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_avgDevice.c_str(), allocator).Move(), allocator);
    }

    if (m_avgOnceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgOnce";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_avgOnce.c_str(), allocator).Move(), allocator);
    }

    if (m_avgOpenCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgOpenCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_avgOpenCount.c_str(), allocator).Move(), allocator);
    }

    if (m_dataTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataTime.c_str(), allocator).Move(), allocator);
    }

    if (m_flushTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlushTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flushTime.c_str(), allocator).Move(), allocator);
    }

    if (m_newCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_newCount, allocator);
    }

    if (m_openCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_openCount, allocator);
    }

    if (m_totalShareNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalShareNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalShareNum, allocator);
    }

    if (m_totalUserNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalUserNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalUserNum, allocator);
    }

}


int64_t AccessAnalysisDetail::GetActiveCount() const
{
    return m_activeCount;
}

void AccessAnalysisDetail::SetActiveCount(const int64_t& _activeCount)
{
    m_activeCount = _activeCount;
    m_activeCountHasBeenSet = true;
}

bool AccessAnalysisDetail::ActiveCountHasBeenSet() const
{
    return m_activeCountHasBeenSet;
}

string AccessAnalysisDetail::GetAvgDevice() const
{
    return m_avgDevice;
}

void AccessAnalysisDetail::SetAvgDevice(const string& _avgDevice)
{
    m_avgDevice = _avgDevice;
    m_avgDeviceHasBeenSet = true;
}

bool AccessAnalysisDetail::AvgDeviceHasBeenSet() const
{
    return m_avgDeviceHasBeenSet;
}

string AccessAnalysisDetail::GetAvgOnce() const
{
    return m_avgOnce;
}

void AccessAnalysisDetail::SetAvgOnce(const string& _avgOnce)
{
    m_avgOnce = _avgOnce;
    m_avgOnceHasBeenSet = true;
}

bool AccessAnalysisDetail::AvgOnceHasBeenSet() const
{
    return m_avgOnceHasBeenSet;
}

string AccessAnalysisDetail::GetAvgOpenCount() const
{
    return m_avgOpenCount;
}

void AccessAnalysisDetail::SetAvgOpenCount(const string& _avgOpenCount)
{
    m_avgOpenCount = _avgOpenCount;
    m_avgOpenCountHasBeenSet = true;
}

bool AccessAnalysisDetail::AvgOpenCountHasBeenSet() const
{
    return m_avgOpenCountHasBeenSet;
}

string AccessAnalysisDetail::GetDataTime() const
{
    return m_dataTime;
}

void AccessAnalysisDetail::SetDataTime(const string& _dataTime)
{
    m_dataTime = _dataTime;
    m_dataTimeHasBeenSet = true;
}

bool AccessAnalysisDetail::DataTimeHasBeenSet() const
{
    return m_dataTimeHasBeenSet;
}

string AccessAnalysisDetail::GetFlushTime() const
{
    return m_flushTime;
}

void AccessAnalysisDetail::SetFlushTime(const string& _flushTime)
{
    m_flushTime = _flushTime;
    m_flushTimeHasBeenSet = true;
}

bool AccessAnalysisDetail::FlushTimeHasBeenSet() const
{
    return m_flushTimeHasBeenSet;
}

int64_t AccessAnalysisDetail::GetNewCount() const
{
    return m_newCount;
}

void AccessAnalysisDetail::SetNewCount(const int64_t& _newCount)
{
    m_newCount = _newCount;
    m_newCountHasBeenSet = true;
}

bool AccessAnalysisDetail::NewCountHasBeenSet() const
{
    return m_newCountHasBeenSet;
}

int64_t AccessAnalysisDetail::GetOpenCount() const
{
    return m_openCount;
}

void AccessAnalysisDetail::SetOpenCount(const int64_t& _openCount)
{
    m_openCount = _openCount;
    m_openCountHasBeenSet = true;
}

bool AccessAnalysisDetail::OpenCountHasBeenSet() const
{
    return m_openCountHasBeenSet;
}

int64_t AccessAnalysisDetail::GetTotalShareNum() const
{
    return m_totalShareNum;
}

void AccessAnalysisDetail::SetTotalShareNum(const int64_t& _totalShareNum)
{
    m_totalShareNum = _totalShareNum;
    m_totalShareNumHasBeenSet = true;
}

bool AccessAnalysisDetail::TotalShareNumHasBeenSet() const
{
    return m_totalShareNumHasBeenSet;
}

int64_t AccessAnalysisDetail::GetTotalUserNum() const
{
    return m_totalUserNum;
}

void AccessAnalysisDetail::SetTotalUserNum(const int64_t& _totalUserNum)
{
    m_totalUserNum = _totalUserNum;
    m_totalUserNumHasBeenSet = true;
}

bool AccessAnalysisDetail::TotalUserNumHasBeenSet() const
{
    return m_totalUserNumHasBeenSet;
}

