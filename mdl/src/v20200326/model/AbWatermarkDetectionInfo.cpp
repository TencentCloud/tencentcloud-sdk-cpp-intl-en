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

#include <tencentcloud/mdl/v20200326/model/AbWatermarkDetectionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

AbWatermarkDetectionInfo::AbWatermarkDetectionInfo() :
    m_taskIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMsgHasBeenSet(false),
    m_inputInfoHasBeenSet(false),
    m_taskNotifyConfigHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_inputFileInfoHasBeenSet(false)
{
}

CoreInternalOutcome AbWatermarkDetectionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbWatermarkDetectionInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbWatermarkDetectionInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbWatermarkDetectionInfo.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbWatermarkDetectionInfo.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("ErrorCode") && !value["ErrorCode"].IsNull())
    {
        if (!value["ErrorCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AbWatermarkDetectionInfo.ErrorCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = value["ErrorCode"].GetInt64();
        m_errorCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrorMsg") && !value["ErrorMsg"].IsNull())
    {
        if (!value["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbWatermarkDetectionInfo.ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(value["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }

    if (value.HasMember("InputInfo") && !value["InputInfo"].IsNull())
    {
        if (!value["InputInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AbWatermarkDetectionInfo.InputInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_inputInfo.Deserialize(value["InputInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inputInfoHasBeenSet = true;
    }

    if (value.HasMember("TaskNotifyConfig") && !value["TaskNotifyConfig"].IsNull())
    {
        if (!value["TaskNotifyConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AbWatermarkDetectionInfo.TaskNotifyConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskNotifyConfig.Deserialize(value["TaskNotifyConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskNotifyConfigHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AbWatermarkDetectionInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AbWatermarkDetectionInfo.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("InputFileInfo") && !value["InputFileInfo"].IsNull())
    {
        if (!value["InputFileInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AbWatermarkDetectionInfo.InputFileInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_inputFileInfo.Deserialize(value["InputFileInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inputFileInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AbWatermarkDetectionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorCode, allocator);
    }

    if (m_errorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_inputInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inputInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskNotifyConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskNotifyConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskNotifyConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_inputFileInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputFileInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inputFileInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AbWatermarkDetectionInfo::GetTaskId() const
{
    return m_taskId;
}

void AbWatermarkDetectionInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool AbWatermarkDetectionInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string AbWatermarkDetectionInfo::GetType() const
{
    return m_type;
}

void AbWatermarkDetectionInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AbWatermarkDetectionInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string AbWatermarkDetectionInfo::GetState() const
{
    return m_state;
}

void AbWatermarkDetectionInfo::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool AbWatermarkDetectionInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string AbWatermarkDetectionInfo::GetResult() const
{
    return m_result;
}

void AbWatermarkDetectionInfo::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool AbWatermarkDetectionInfo::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

int64_t AbWatermarkDetectionInfo::GetErrorCode() const
{
    return m_errorCode;
}

void AbWatermarkDetectionInfo::SetErrorCode(const int64_t& _errorCode)
{
    m_errorCode = _errorCode;
    m_errorCodeHasBeenSet = true;
}

bool AbWatermarkDetectionInfo::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string AbWatermarkDetectionInfo::GetErrorMsg() const
{
    return m_errorMsg;
}

void AbWatermarkDetectionInfo::SetErrorMsg(const string& _errorMsg)
{
    m_errorMsg = _errorMsg;
    m_errorMsgHasBeenSet = true;
}

bool AbWatermarkDetectionInfo::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}

AbWatermarkInputInfo AbWatermarkDetectionInfo::GetInputInfo() const
{
    return m_inputInfo;
}

void AbWatermarkDetectionInfo::SetInputInfo(const AbWatermarkInputInfo& _inputInfo)
{
    m_inputInfo = _inputInfo;
    m_inputInfoHasBeenSet = true;
}

bool AbWatermarkDetectionInfo::InputInfoHasBeenSet() const
{
    return m_inputInfoHasBeenSet;
}

TaskNotifyConfig AbWatermarkDetectionInfo::GetTaskNotifyConfig() const
{
    return m_taskNotifyConfig;
}

void AbWatermarkDetectionInfo::SetTaskNotifyConfig(const TaskNotifyConfig& _taskNotifyConfig)
{
    m_taskNotifyConfig = _taskNotifyConfig;
    m_taskNotifyConfigHasBeenSet = true;
}

bool AbWatermarkDetectionInfo::TaskNotifyConfigHasBeenSet() const
{
    return m_taskNotifyConfigHasBeenSet;
}

int64_t AbWatermarkDetectionInfo::GetCreateTime() const
{
    return m_createTime;
}

void AbWatermarkDetectionInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AbWatermarkDetectionInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t AbWatermarkDetectionInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void AbWatermarkDetectionInfo::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AbWatermarkDetectionInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

InputFileInfo AbWatermarkDetectionInfo::GetInputFileInfo() const
{
    return m_inputFileInfo;
}

void AbWatermarkDetectionInfo::SetInputFileInfo(const InputFileInfo& _inputFileInfo)
{
    m_inputFileInfo = _inputFileInfo;
    m_inputFileInfoHasBeenSet = true;
}

bool AbWatermarkDetectionInfo::InputFileInfoHasBeenSet() const
{
    return m_inputFileInfoHasBeenSet;
}

