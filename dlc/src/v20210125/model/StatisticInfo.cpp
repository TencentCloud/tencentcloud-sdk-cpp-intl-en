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

#include <tencentcloud/dlc/v20210125/model/StatisticInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

StatisticInfo::StatisticInfo() :
    m_taskIdHasBeenSet(false),
    m_totalProcessedBytesHasBeenSet(false),
    m_usedTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_rowsAffectHasBeenSet(false),
    m_totalTimeHasBeenSet(false)
{
}

CoreInternalOutcome StatisticInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TotalProcessedBytes") && !value["TotalProcessedBytes"].IsNull())
    {
        if (!value["TotalProcessedBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticInfo.TotalProcessedBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalProcessedBytes = value["TotalProcessedBytes"].GetInt64();
        m_totalProcessedBytesHasBeenSet = true;
    }

    if (value.HasMember("UsedTime") && !value["UsedTime"].IsNull())
    {
        if (!value["UsedTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticInfo.UsedTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedTime = value["UsedTime"].GetInt64();
        m_usedTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticInfo.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticInfo.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("RowsAffect") && !value["RowsAffect"].IsNull())
    {
        if (!value["RowsAffect"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticInfo.RowsAffect` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rowsAffect = value["RowsAffect"].GetInt64();
        m_rowsAffectHasBeenSet = true;
    }

    if (value.HasMember("TotalTime") && !value["TotalTime"].IsNull())
    {
        if (!value["TotalTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticInfo.TotalTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTime = value["TotalTime"].GetInt64();
        m_totalTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StatisticInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_totalProcessedBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalProcessedBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalProcessedBytes, allocator);
    }

    if (m_usedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedTime, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_rowsAffectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowsAffect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rowsAffect, allocator);
    }

    if (m_totalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTime, allocator);
    }

}


string StatisticInfo::GetTaskId() const
{
    return m_taskId;
}

void StatisticInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool StatisticInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t StatisticInfo::GetTotalProcessedBytes() const
{
    return m_totalProcessedBytes;
}

void StatisticInfo::SetTotalProcessedBytes(const int64_t& _totalProcessedBytes)
{
    m_totalProcessedBytes = _totalProcessedBytes;
    m_totalProcessedBytesHasBeenSet = true;
}

bool StatisticInfo::TotalProcessedBytesHasBeenSet() const
{
    return m_totalProcessedBytesHasBeenSet;
}

int64_t StatisticInfo::GetUsedTime() const
{
    return m_usedTime;
}

void StatisticInfo::SetUsedTime(const int64_t& _usedTime)
{
    m_usedTime = _usedTime;
    m_usedTimeHasBeenSet = true;
}

bool StatisticInfo::UsedTimeHasBeenSet() const
{
    return m_usedTimeHasBeenSet;
}

int64_t StatisticInfo::GetCreateTime() const
{
    return m_createTime;
}

void StatisticInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool StatisticInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t StatisticInfo::GetEndTime() const
{
    return m_endTime;
}

void StatisticInfo::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool StatisticInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t StatisticInfo::GetStartTime() const
{
    return m_startTime;
}

void StatisticInfo::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool StatisticInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t StatisticInfo::GetRowsAffect() const
{
    return m_rowsAffect;
}

void StatisticInfo::SetRowsAffect(const int64_t& _rowsAffect)
{
    m_rowsAffect = _rowsAffect;
    m_rowsAffectHasBeenSet = true;
}

bool StatisticInfo::RowsAffectHasBeenSet() const
{
    return m_rowsAffectHasBeenSet;
}

int64_t StatisticInfo::GetTotalTime() const
{
    return m_totalTime;
}

void StatisticInfo::SetTotalTime(const int64_t& _totalTime)
{
    m_totalTime = _totalTime;
    m_totalTimeHasBeenSet = true;
}

bool StatisticInfo::TotalTimeHasBeenSet() const
{
    return m_totalTimeHasBeenSet;
}

