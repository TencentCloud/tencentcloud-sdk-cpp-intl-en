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

#include <tencentcloud/cbs/v20170312/model/SnapshotOperationLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

SnapshotOperationLog::SnapshotOperationLog() :
    m_operationStateHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome SnapshotOperationLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OperationState") && !value["OperationState"].IsNull())
    {
        if (!value["OperationState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotOperationLog.OperationState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationState = string(value["OperationState"].GetString());
        m_operationStateHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotOperationLog.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotOperationLog.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("SnapshotId") && !value["SnapshotId"].IsNull())
    {
        if (!value["SnapshotId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotOperationLog.SnapshotId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotId = string(value["SnapshotId"].GetString());
        m_snapshotIdHasBeenSet = true;
    }

    if (value.HasMember("Operation") && !value["Operation"].IsNull())
    {
        if (!value["Operation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotOperationLog.Operation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operation = string(value["Operation"].GetString());
        m_operationHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotOperationLog.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SnapshotOperationLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_operationStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationState.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotId.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

}


string SnapshotOperationLog::GetOperationState() const
{
    return m_operationState;
}

void SnapshotOperationLog::SetOperationState(const string& _operationState)
{
    m_operationState = _operationState;
    m_operationStateHasBeenSet = true;
}

bool SnapshotOperationLog::OperationStateHasBeenSet() const
{
    return m_operationStateHasBeenSet;
}

string SnapshotOperationLog::GetStartTime() const
{
    return m_startTime;
}

void SnapshotOperationLog::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool SnapshotOperationLog::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string SnapshotOperationLog::GetOperator() const
{
    return m_operator;
}

void SnapshotOperationLog::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool SnapshotOperationLog::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string SnapshotOperationLog::GetSnapshotId() const
{
    return m_snapshotId;
}

void SnapshotOperationLog::SetSnapshotId(const string& _snapshotId)
{
    m_snapshotId = _snapshotId;
    m_snapshotIdHasBeenSet = true;
}

bool SnapshotOperationLog::SnapshotIdHasBeenSet() const
{
    return m_snapshotIdHasBeenSet;
}

string SnapshotOperationLog::GetOperation() const
{
    return m_operation;
}

void SnapshotOperationLog::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool SnapshotOperationLog::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string SnapshotOperationLog::GetEndTime() const
{
    return m_endTime;
}

void SnapshotOperationLog::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool SnapshotOperationLog::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

