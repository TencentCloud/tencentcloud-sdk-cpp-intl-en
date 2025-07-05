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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DRINSTANCEOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DRINSTANCEOPSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Trial Run Record
                */
                class DrInstanceOpsDto : public AbstractModel
                {
                public:
                    DrInstanceOpsDto();
                    ~DrInstanceOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task Source
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskSource Task Source
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskSource() const;

                    /**
                     * 设置Task Source
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskSource Task Source
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskSource(const std::string& _taskSource);

                    /**
                     * 判断参数 TaskSource 是否已赋值
                     * @return TaskSource 是否已赋值
                     * 
                     */
                    bool TaskSourceHasBeenSet() const;

                    /**
                     * 获取Orchestration Space jobId
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return JobId Orchestration Space jobId
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Orchestration Space jobId
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _jobId Orchestration Space jobId
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Task Submission Record Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RecordId Task Submission Record Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetRecordId() const;

                    /**
                     * 设置Task Submission Record Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _recordId Task Submission Record Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRecordId(const uint64_t& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取Subtask record id
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SonRecordId Subtask record id
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetSonRecordId() const;

                    /**
                     * 设置Subtask record id
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _sonRecordId Subtask record id
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSonRecordId(const uint64_t& _sonRecordId);

                    /**
                     * 判断参数 SonRecordId 是否已赋值
                     * @return SonRecordId 是否已赋值
                     * 
                     */
                    bool SonRecordIdHasBeenSet() const;

                    /**
                     * 获取Task instance Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceId Task instance Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Task instance Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceId Task instance Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取For orchestration space, the task id; for development space, the script id
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskId For orchestration space, the task id; for development space, the script id
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置For orchestration space, the task id; for development space, the script id
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskId For orchestration space, the task id; for development space, the script id
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Script COS address
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RemotePath Script COS address
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRemotePath() const;

                    /**
                     * 设置Script COS address
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _remotePath Script COS address
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRemotePath(const std::string& _remotePath);

                    /**
                     * 判断参数 RemotePath 是否已赋值
                     * @return RemotePath 是否已赋值
                     * 
                     */
                    bool RemotePathHasBeenSet() const;

                    /**
                     * 获取Trial run content
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ScriptContent Trial run content
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetScriptContent() const;

                    /**
                     * 设置Trial run content
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _scriptContent Trial run content
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetScriptContent(const std::string& _scriptContent);

                    /**
                     * 判断参数 ScriptContent 是否已赋值
                     * @return ScriptContent 是否已赋值
                     * 
                     */
                    bool ScriptContentHasBeenSet() const;

                    /**
                     * 获取Task submission time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CreateTime Task submission time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Task submission time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _createTime Task submission time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Task start time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return StartTime Task start time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Task start time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _startTime Task start time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Running duration (seconds)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Duration Running duration (seconds)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置Running duration (seconds)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _duration Running duration (seconds)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Trial run status
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Status Trial run status
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Trial run status
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _status Trial run status
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取For orchestration space, the task name; for development space, the script name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskName For orchestration space, the task name; for development space, the script name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置For orchestration space, the task name; for development space, the script name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskName For orchestration space, the task name; for development space, the script name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Trial run submitter
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SubmitUserName Trial run submitter
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSubmitUserName() const;

                    /**
                     * 设置Trial run submitter
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _submitUserName Trial run submitter
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSubmitUserName(const std::string& _submitUserName);

                    /**
                     * 判断参数 SubmitUserName 是否已赋值
                     * @return SubmitUserName 是否已赋值
                     * 
                     */
                    bool SubmitUserNameHasBeenSet() const;

                    /**
                     * 获取Trial run submitter userId
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SubmitUserId Trial run submitter userId
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSubmitUserId() const;

                    /**
                     * 设置Trial run submitter userId
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _submitUserId Trial run submitter userId
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSubmitUserId(const std::string& _submitUserId);

                    /**
                     * 判断参数 SubmitUserId 是否已赋值
                     * @return SubmitUserId 是否已赋值
                     * 
                     */
                    bool SubmitUserIdHasBeenSet() const;

                    /**
                     * 获取Task TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskType Task TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置Task TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskType Task TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Contains result set
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return HasResultSet Contains result set
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetHasResultSet() const;

                    /**
                     * 设置Contains result set
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _hasResultSet Contains result set
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetHasResultSet(const bool& _hasResultSet);

                    /**
                     * 判断参数 HasResultSet 是否已赋值
                     * @return HasResultSet 是否已赋值
                     * 
                     */
                    bool HasResultSetHasBeenSet() const;

                private:

                    /**
                     * Task Source
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskSource;
                    bool m_taskSourceHasBeenSet;

                    /**
                     * Orchestration Space jobId
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Task Submission Record Id
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * Subtask record id
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_sonRecordId;
                    bool m_sonRecordIdHasBeenSet;

                    /**
                     * Task instance Id
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * For orchestration space, the task id; for development space, the script id
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Script COS address
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_remotePath;
                    bool m_remotePathHasBeenSet;

                    /**
                     * Trial run content
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_scriptContent;
                    bool m_scriptContentHasBeenSet;

                    /**
                     * Task submission time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Task start time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Running duration (seconds)
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Trial run status
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * For orchestration space, the task name; for development space, the script name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Trial run submitter
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_submitUserName;
                    bool m_submitUserNameHasBeenSet;

                    /**
                     * Trial run submitter userId
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_submitUserId;
                    bool m_submitUserIdHasBeenSet;

                    /**
                     * Task TypeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Contains result set
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_hasResultSet;
                    bool m_hasResultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DRINSTANCEOPSDTO_H_
