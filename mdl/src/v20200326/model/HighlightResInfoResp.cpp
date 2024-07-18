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

#include <tencentcloud/mdl/v20200326/model/HighlightResInfoResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

HighlightResInfoResp::HighlightResInfoResp() :
    m_taskIdHasBeenSet(false),
    m_segmentUrlHasBeenSet(false),
    m_covImgUrlHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_durationHasBeenSet(false)
{
}

CoreInternalOutcome HighlightResInfoResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighlightResInfoResp.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("SegmentUrl") && !value["SegmentUrl"].IsNull())
    {
        if (!value["SegmentUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighlightResInfoResp.SegmentUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_segmentUrl = string(value["SegmentUrl"].GetString());
        m_segmentUrlHasBeenSet = true;
    }

    if (value.HasMember("CovImgUrl") && !value["CovImgUrl"].IsNull())
    {
        if (!value["CovImgUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighlightResInfoResp.CovImgUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_covImgUrl = string(value["CovImgUrl"].GetString());
        m_covImgUrlHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HighlightResInfoResp.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `HighlightResInfoResp.StartTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetDouble();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `HighlightResInfoResp.EndTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetDouble();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `HighlightResInfoResp.Duration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetDouble();
        m_durationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HighlightResInfoResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_segmentUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_segmentUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_covImgUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CovImgUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_covImgUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

}


string HighlightResInfoResp::GetTaskId() const
{
    return m_taskId;
}

void HighlightResInfoResp::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool HighlightResInfoResp::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string HighlightResInfoResp::GetSegmentUrl() const
{
    return m_segmentUrl;
}

void HighlightResInfoResp::SetSegmentUrl(const string& _segmentUrl)
{
    m_segmentUrl = _segmentUrl;
    m_segmentUrlHasBeenSet = true;
}

bool HighlightResInfoResp::SegmentUrlHasBeenSet() const
{
    return m_segmentUrlHasBeenSet;
}

string HighlightResInfoResp::GetCovImgUrl() const
{
    return m_covImgUrl;
}

void HighlightResInfoResp::SetCovImgUrl(const string& _covImgUrl)
{
    m_covImgUrl = _covImgUrl;
    m_covImgUrlHasBeenSet = true;
}

bool HighlightResInfoResp::CovImgUrlHasBeenSet() const
{
    return m_covImgUrlHasBeenSet;
}

uint64_t HighlightResInfoResp::GetCreateTime() const
{
    return m_createTime;
}

void HighlightResInfoResp::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool HighlightResInfoResp::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

double HighlightResInfoResp::GetStartTime() const
{
    return m_startTime;
}

void HighlightResInfoResp::SetStartTime(const double& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool HighlightResInfoResp::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

double HighlightResInfoResp::GetEndTime() const
{
    return m_endTime;
}

void HighlightResInfoResp::SetEndTime(const double& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool HighlightResInfoResp::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

double HighlightResInfoResp::GetDuration() const
{
    return m_duration;
}

void HighlightResInfoResp::SetDuration(const double& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool HighlightResInfoResp::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

