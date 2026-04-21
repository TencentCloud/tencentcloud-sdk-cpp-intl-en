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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTRIGGERTASKRUNBRIEF_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTRIGGERTASKRUNBRIEF_H_

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
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Query job run list returned parameter
                */
                class ListTriggerTaskRunBrief : public AbstractModel
                {
                public:
                    ListTriggerTaskRunBrief();
                    ~ListTriggerTaskRunBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Running ID of the task
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecutionId Running ID of the task
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExecutionId() const;

                    /**
                     * 设置Running ID of the task
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executionId Running ID of the task
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExecutionId(const std::string& _executionId);

                    /**
                     * 判断参数 ExecutionId 是否已赋值
                     * @return ExecutionId 是否已赋值
                     * 
                     */
                    bool ExecutionIdHasBeenSet() const;

                    /**
                     * 获取Workflow ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkflowId Workflow ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workflowId Workflow ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取Running ID of the workflow
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkflowExecutionId Running ID of the workflow
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWorkflowExecutionId() const;

                    /**
                     * 设置Running ID of the workflow
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workflowExecutionId Running ID of the workflow
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWorkflowExecutionId(const std::string& _workflowExecutionId);

                    /**
                     * 判断参数 WorkflowExecutionId 是否已赋值
                     * @return WorkflowExecutionId 是否已赋值
                     * 
                     */
                    bool WorkflowExecutionIdHasBeenSet() const;

                    /**
                     * 获取Task ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskId Task ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskId Task ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Trigger Type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TriggerType Trigger Type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置Trigger Type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _triggerType Trigger Type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTriggerType(const std::string& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取Waiting duration, in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WaitTime Waiting duration, in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWaitTime() const;

                    /**
                     * 设置Waiting duration, in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _waitTime Waiting duration, in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWaitTime(const std::string& _waitTime);

                    /**
                     * 判断参数 WaitTime 是否已赋值
                     * @return WaitTime 是否已赋值
                     * 
                     */
                    bool WaitTimeHasBeenSet() const;

                    /**
                     * 获取Operating Account
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecuteUserUin Operating Account
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExecuteUserUin() const;

                    /**
                     * 设置Operating Account
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executeUserUin Operating Account
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExecuteUserUin(const std::string& _executeUserUin);

                    /**
                     * 判断参数 ExecuteUserUin 是否已赋值
                     * @return ExecuteUserUin 是否已赋值
                     * 
                     */
                    bool ExecuteUserUinHasBeenSet() const;

                    /**
                     * 获取Planned scheduling time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScheduleTime Planned scheduling time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetScheduleTime() const;

                    /**
                     * 设置Planned scheduling time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scheduleTime Planned scheduling time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScheduleTime(const std::string& _scheduleTime);

                    /**
                     * 判断参数 ScheduleTime 是否已赋值
                     * @return ScheduleTime 是否已赋值
                     * 
                     */
                    bool ScheduleTimeHasBeenSet() const;

                    /**
                     * 获取Start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecutionStartTime Start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置Start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executionStartTime Start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExecutionStartTime(const std::string& _executionStartTime);

                    /**
                     * 判断参数 ExecutionStartTime 是否已赋值
                     * @return ExecutionStartTime 是否已赋值
                     * 
                     */
                    bool ExecutionStartTimeHasBeenSet() const;

                    /**
                     * 获取Running end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecutionEndTime Running end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置Running end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executionEndTime Running end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExecutionEndTime(const std::string& _executionEndTime);

                    /**
                     * 判断参数 ExecutionEndTime 是否已赋值
                     * @return ExecutionEndTime 是否已赋值
                     * 
                     */
                    bool ExecutionEndTimeHasBeenSet() const;

                    /**
                     * 获取Running time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecutionTime Running time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExecutionTime() const;

                    /**
                     * 设置Running time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executionTime Running time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExecutionTime(const std::string& _executionTime);

                    /**
                     * 判断参数 ExecutionTime 是否已赋值
                     * @return ExecutionTime 是否已赋值
                     * 
                     */
                    bool ExecutionTimeHasBeenSet() const;

                    /**
                     * 获取Times of automatic retry
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RetryTimes Times of automatic retry
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRetryTimes() const;

                    /**
                     * 设置Times of automatic retry
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _retryTimes Times of automatic retry
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRetryTimes(const int64_t& _retryTimes);

                    /**
                     * 判断参数 RetryTimes 是否已赋值
                     * @return RetryTimes 是否已赋值
                     * 
                     */
                    bool RetryTimesHasBeenSet() const;

                    /**
                     * 获取Error code description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrorCodeStr Error code description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrorCodeStr() const;

                    /**
                     * 设置Error code description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _errorCodeStr Error code description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErrorCodeStr(const std::string& _errorCodeStr);

                    /**
                     * 判断参数 ErrorCodeStr 是否已赋值
                     * @return ErrorCodeStr 是否已赋值
                     * 
                     */
                    bool ErrorCodeStrHasBeenSet() const;

                    /**
                     * 获取Task name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskName Task name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskName Task name.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Workflow name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkflowName Workflow name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置Workflow name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workflowName Workflow name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWorkflowName(const std::string& _workflowName);

                    /**
                     * 判断参数 WorkflowName 是否已赋值
                     * @return WorkflowName 是否已赋值
                     * 
                     */
                    bool WorkflowNameHasBeenSet() const;

                    /**
                     * 获取Number of manual rerun attempts by the user
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RerunTimes Number of manual rerun attempts by the user
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRerunTimes() const;

                    /**
                     * 设置Number of manual rerun attempts by the user
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rerunTimes Number of manual rerun attempts by the user
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRerunTimes(const int64_t& _rerunTimes);

                    /**
                     * 判断参数 RerunTimes 是否已赋值
                     * @return RerunTimes 是否已赋值
                     * 
                     */
                    bool RerunTimesHasBeenSet() const;

                    /**
                     * 获取Task running status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskExecutionState Task running status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskExecutionState() const;

                    /**
                     * 设置Task running status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskExecutionState Task running status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskExecutionState(const std::string& _taskExecutionState);

                    /**
                     * 判断参数 TaskExecutionState 是否已赋值
                     * @return TaskExecutionState 是否已赋值
                     * 
                     */
                    bool TaskExecutionStateHasBeenSet() const;

                    /**
                     * 获取Whether it is the most recent run
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsLatestExecution Whether it is the most recent run
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsLatestExecution() const;

                    /**
                     * 设置Whether it is the most recent run
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isLatestExecution Whether it is the most recent run
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsLatestExecution(const bool& _isLatestExecution);

                    /**
                     * 判断参数 IsLatestExecution 是否已赋值
                     * @return IsLatestExecution 是否已赋值
                     * 
                     */
                    bool IsLatestExecutionHasBeenSet() const;

                private:

                    /**
                     * Running ID of the task
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_executionId;
                    bool m_executionIdHasBeenSet;

                    /**
                     * Workflow ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Running ID of the workflow
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_workflowExecutionId;
                    bool m_workflowExecutionIdHasBeenSet;

                    /**
                     * Task ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Trigger Type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * Waiting duration, in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_waitTime;
                    bool m_waitTimeHasBeenSet;

                    /**
                     * Operating Account
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_executeUserUin;
                    bool m_executeUserUinHasBeenSet;

                    /**
                     * Planned scheduling time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scheduleTime;
                    bool m_scheduleTimeHasBeenSet;

                    /**
                     * Start time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * Running end time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                    /**
                     * Running time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_executionTime;
                    bool m_executionTimeHasBeenSet;

                    /**
                     * Times of automatic retry
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_retryTimes;
                    bool m_retryTimesHasBeenSet;

                    /**
                     * Error code description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errorCodeStr;
                    bool m_errorCodeStrHasBeenSet;

                    /**
                     * Task name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Workflow name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * Number of manual rerun attempts by the user
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_rerunTimes;
                    bool m_rerunTimesHasBeenSet;

                    /**
                     * Task running status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskExecutionState;
                    bool m_taskExecutionStateHasBeenSet;

                    /**
                     * Whether it is the most recent run
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isLatestExecution;
                    bool m_isLatestExecutionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTRIGGERTASKRUNBRIEF_H_
