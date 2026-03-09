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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKRUNBRIEF_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKRUNBRIEF_H_

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
                * Summary information of task running in workflow scheduling mode.
                */
                class TriggerTaskRunBrief : public AbstractModel
                {
                public:
                    TriggerTaskRunBrief();
                    ~TriggerTaskRunBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Running ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecutionId Running ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExecutionId() const;

                    /**
                     * 设置Running ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executionId Running ID.
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
                     * 获取Execution status: FAILED (FAILED to run), SUCCESS (executed successfully), PENDING (waiting), SKIP (SKIP RUNNING), RUNNING (RUNNING).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecutionState Execution status: FAILED (FAILED to run), SUCCESS (executed successfully), PENDING (waiting), SKIP (SKIP RUNNING), RUNNING (RUNNING).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExecutionState() const;

                    /**
                     * 设置Execution status: FAILED (FAILED to run), SUCCESS (executed successfully), PENDING (waiting), SKIP (SKIP RUNNING), RUNNING (RUNNING).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executionState Execution status: FAILED (FAILED to run), SUCCESS (executed successfully), PENDING (waiting), SKIP (SKIP RUNNING), RUNNING (RUNNING).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExecutionState(const std::string& _executionState);

                    /**
                     * 判断参数 ExecutionState 是否已赋值
                     * @return ExecutionState 是否已赋值
                     * 
                     */
                    bool ExecutionStateHasBeenSet() const;

                    /**
                     * 获取Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectId Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectId Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Workflow ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkflowId Workflow ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workflowId Workflow ID.
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
                     * 获取Running ID of the workflow.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkflowExecutionId Running ID of the workflow.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWorkflowExecutionId() const;

                    /**
                     * 设置Running ID of the workflow.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workflowExecutionId Running ID of the workflow.
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
                     * 获取Task type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskType Task type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置Task type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskType Task type
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Task version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskVersionId Task version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskVersionId() const;

                    /**
                     * 设置Task version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskVersionId Task version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskVersionId(const std::string& _taskVersionId);

                    /**
                     * 判断参数 TaskVersionId 是否已赋值
                     * @return TaskVersionId 是否已赋值
                     * 
                     */
                    bool TaskVersionIdHasBeenSet() const;

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
                     * 获取Waiting duration, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WaitTime Waiting duration, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWaitTime() const;

                    /**
                     * 设置Waiting duration, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _waitTime Waiting duration, in seconds.
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
                     * 获取Associated resource group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceGroup Associated resource group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceGroup() const;

                    /**
                     * 设置Associated resource group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceGroup Associated resource group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceGroup(const std::string& _resourceGroup);

                    /**
                     * 判断参数 ResourceGroup 是否已赋值
                     * @return ResourceGroup 是否已赋值
                     * 
                     */
                    bool ResourceGroupHasBeenSet() const;

                    /**
                     * 获取Error code
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrorCode Error code
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 设置Error code
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _errorCode Error code
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErrorCode(const std::string& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取Operating account.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecuteUserUin Operating account.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExecuteUserUin() const;

                    /**
                     * 设置Operating account.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executeUserUin Operating account.
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
                     * 获取Creator ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreaterUin Creator ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreaterUin() const;

                    /**
                     * 设置Creator ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createrUin Creator ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreaterUin(const std::string& _createrUin);

                    /**
                     * 判断参数 CreaterUin 是否已赋值
                     * @return CreaterUin 是否已赋值
                     * 
                     */
                    bool CreaterUinHasBeenSet() const;

                    /**
                     * 获取Execution ID of the execution platform.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JobId Execution ID of the execution platform.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Execution ID of the execution platform.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _jobId Execution ID of the execution platform.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Creation Timestamp
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation Timestamp
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation Timestamp
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation Timestamp
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Update Timestamp
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Update Timestamp
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update Timestamp
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Update Timestamp
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Task completion time dependency.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DependenceFinishedTime Task completion time dependency.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDependenceFinishedTime() const;

                    /**
                     * 设置Task completion time dependency.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dependenceFinishedTime Task completion time dependency.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDependenceFinishedTime(const std::string& _dependenceFinishedTime);

                    /**
                     * 判断参数 DependenceFinishedTime 是否已赋值
                     * @return DependenceFinishedTime 是否已赋值
                     * 
                     */
                    bool DependenceFinishedTimeHasBeenSet() const;

                    /**
                     * 获取Task delivery time to the execution platform.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QueueStartTime Task delivery time to the execution platform.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetQueueStartTime() const;

                    /**
                     * 设置Task delivery time to the execution platform.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _queueStartTime Task delivery time to the execution platform.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQueueStartTime(const std::string& _queueStartTime);

                    /**
                     * 判断参数 QueueStartTime 是否已赋值
                     * @return QueueStartTime 是否已赋值
                     * 
                     */
                    bool QueueStartTimeHasBeenSet() const;

                    /**
                     * 获取Started waiting for source time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PendingStartTime Started waiting for source time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPendingStartTime() const;

                    /**
                     * 设置Started waiting for source time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pendingStartTime Started waiting for source time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPendingStartTime(const std::string& _pendingStartTime);

                    /**
                     * 判断参数 PendingStartTime 是否已赋值
                     * @return PendingStartTime 是否已赋值
                     * 
                     */
                    bool PendingStartTimeHasBeenSet() const;

                    /**
                     * 获取Start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecutionStartTime Start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置Start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executionStartTime Start time.
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
                     * 获取Running end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecutionEndTime Running end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置Running end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executionEndTime Running end time.
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
                     * 获取Queuing time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QueueCostTime Queuing time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetQueueCostTime() const;

                    /**
                     * 设置Queuing time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _queueCostTime Queuing time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQueueCostTime(const std::string& _queueCostTime);

                    /**
                     * 判断参数 QueueCostTime 是否已赋值
                     * @return QueueCostTime 是否已赋值
                     * 
                     */
                    bool QueueCostTimeHasBeenSet() const;

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
                     * 获取Total time spent.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AllCostTime Total time spent.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAllCostTime() const;

                    /**
                     * 设置Total time spent.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _allCostTime Total time spent.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAllCostTime(const std::string& _allCostTime);

                    /**
                     * 判断参数 AllCostTime 是否已赋值
                     * @return AllCostTime 是否已赋值
                     * 
                     */
                    bool AllCostTimeHasBeenSet() const;

                    /**
                     * 获取Time zone.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TimeZone Time zone.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置Time zone.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _timeZone Time zone.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                    /**
                     * 获取Depends on the upstream task ID list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DependOnList Depends on the upstream task ID list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetDependOnList() const;

                    /**
                     * 设置Depends on the upstream task ID list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dependOnList Depends on the upstream task ID list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDependOnList(const std::vector<std::string>& _dependOnList);

                    /**
                     * 判断参数 DependOnList 是否已赋值
                     * @return DependOnList 是否已赋值
                     * 
                     */
                    bool DependOnListHasBeenSet() const;

                    /**
                     * 获取Running parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RunParams Running parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRunParams() const;

                    /**
                     * 设置Running parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _runParams Running parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRunParams(const std::string& _runParams);

                    /**
                     * 判断参数 RunParams 是否已赋值
                     * @return RunParams 是否已赋值
                     * 
                     */
                    bool RunParamsHasBeenSet() const;

                    /**
                     * 获取Task extension information, including script path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskTypeExtensions Task extension information, including script path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskTypeExtensions() const;

                    /**
                     * 设置Task extension information, including script path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskTypeExtensions Task extension information, including script path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskTypeExtensions(const std::string& _taskTypeExtensions);

                    /**
                     * 判断参数 TaskTypeExtensions 是否已赋值
                     * @return TaskTypeExtensions 是否已赋值
                     * 
                     */
                    bool TaskTypeExtensionsHasBeenSet() const;

                    /**
                     * 获取Retry count. it indicates the first run when set to 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RetryTimes Retry count. it indicates the first run when set to 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRetryTimes() const;

                    /**
                     * 设置Retry count. it indicates the first run when set to 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _retryTimes Retry count. it indicates the first run when set to 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRetryTimes(const uint64_t& _retryTimes);

                    /**
                     * 判断参数 RetryTimes 是否已赋值
                     * @return RetryTimes 是否已赋值
                     * 
                     */
                    bool RetryTimesHasBeenSet() const;

                    /**
                     * 获取Left coordinate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LeftCoordinate Left coordinate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetLeftCoordinate() const;

                    /**
                     * 设置Left coordinate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _leftCoordinate Left coordinate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLeftCoordinate(const double& _leftCoordinate);

                    /**
                     * 判断参数 LeftCoordinate 是否已赋值
                     * @return LeftCoordinate 是否已赋值
                     * 
                     */
                    bool LeftCoordinateHasBeenSet() const;

                    /**
                     * 获取Top coordinate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TopCoordinate Top coordinate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetTopCoordinate() const;

                    /**
                     * 设置Top coordinate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _topCoordinate Top coordinate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTopCoordinate(const double& _topCoordinate);

                    /**
                     * 判断参数 TopCoordinate 是否已赋值
                     * @return TopCoordinate 是否已赋值
                     * 
                     */
                    bool TopCoordinateHasBeenSet() const;

                    /**
                     * 获取Resource group ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceGroupId Resource group ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置Resource group ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceGroupId Resource group ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

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
                     * 获取Creator UIN.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateUin Creator UIN.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateUin() const;

                    /**
                     * 设置Creator UIN.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createUin Creator UIN.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateUin(const std::string& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     * 
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取Issue the execution platform time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IssueTime Issue the execution platform time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIssueTime() const;

                    /**
                     * 设置Issue the execution platform time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _issueTime Issue the execution platform time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIssueTime(const std::string& _issueTime);

                    /**
                     * 判断参数 IssueTime 是否已赋值
                     * @return IssueTime 是否已赋值
                     * 
                     */
                    bool IssueTimeHasBeenSet() const;

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
                     * 获取Operator name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecuteUserName Operator name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExecuteUserName() const;

                    /**
                     * 设置Operator name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executeUserName Operator name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExecuteUserName(const std::string& _executeUserName);

                    /**
                     * 判断参数 ExecuteUserName 是否已赋值
                     * @return ExecuteUserName 是否已赋值
                     * 
                     */
                    bool ExecuteUserNameHasBeenSet() const;

                    /**
                     * 获取Number of retries.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RerunTimes Number of retries.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRerunTimes() const;

                    /**
                     * 设置Number of retries.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rerunTimes Number of retries.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRerunTimes(const uint64_t& _rerunTimes);

                    /**
                     * 判断参数 RerunTimes 是否已赋值
                     * @return RerunTimes 是否已赋值
                     * 
                     */
                    bool RerunTimesHasBeenSet() const;

                    /**
                     * 获取Whether it is the most recent run.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsLatestExecution Whether it is the most recent run.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsLatestExecution() const;

                    /**
                     * 设置Whether it is the most recent run.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isLatestExecution Whether it is the most recent run.
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

                    /**
                     * 获取Task running status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskExecutionState Task running status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskExecutionState() const;

                    /**
                     * 设置Task running status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskExecutionState Task running status.
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
                     * 获取Cycle type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CycleType Cycle type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置Cycle type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cycleType Cycle type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCycleType(const std::string& _cycleType);

                    /**
                     * 判断参数 CycleType 是否已赋值
                     * @return CycleType 是否已赋值
                     * 
                     */
                    bool CycleTypeHasBeenSet() const;

                    /**
                     * 获取Responsible person's name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserNameInCharge Responsible person's name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserNameInCharge() const;

                    /**
                     * 设置Responsible person's name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userNameInCharge Responsible person's name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserNameInCharge(const std::string& _userNameInCharge);

                    /**
                     * 判断参数 UserNameInCharge 是否已赋值
                     * @return UserNameInCharge 是否已赋值
                     * 
                     */
                    bool UserNameInChargeHasBeenSet() const;

                    /**
                     * 获取Responsible person id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserUinInCharge Responsible person id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserUinInCharge() const;

                    /**
                     * 设置Responsible person id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userUinInCharge Responsible person id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserUinInCharge(const std::string& _userUinInCharge);

                    /**
                     * 判断参数 UserUinInCharge 是否已赋值
                     * @return UserUinInCharge 是否已赋值
                     * 
                     */
                    bool UserUinInChargeHasBeenSet() const;

                    /**
                     * 获取Resource group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceGroupName Resource group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置Resource group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceGroupName Resource group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceGroupName(const std::string& _resourceGroupName);

                    /**
                     * 判断参数 ResourceGroupName 是否已赋值
                     * @return ResourceGroupName 是否已赋值
                     * 
                     */
                    bool ResourceGroupNameHasBeenSet() const;

                    /**
                     * 获取Time zone.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Timezone Time zone.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTimezone() const;

                    /**
                     * 设置Time zone.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _timezone Time zone.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTimezone(const std::string& _timezone);

                    /**
                     * 判断参数 Timezone 是否已赋值
                     * @return Timezone 是否已赋值
                     * 
                     */
                    bool TimezoneHasBeenSet() const;

                    /**
                     * 获取Folder ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FolderId Folder ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置Folder ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _folderId Folder ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFolderId(const std::string& _folderId);

                    /**
                     * 判断参数 FolderId 是否已赋值
                     * @return FolderId 是否已赋值
                     * 
                     */
                    bool FolderIdHasBeenSet() const;

                    /**
                     * 获取Folder name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FolderName Folder name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFolderName() const;

                    /**
                     * 设置Folder name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _folderName Folder name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFolderName(const std::string& _folderName);

                    /**
                     * 判断参数 FolderName 是否已赋值
                     * @return FolderName 是否已赋值
                     * 
                     */
                    bool FolderNameHasBeenSet() const;

                    /**
                     * 获取Project name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectName Project name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectName Project name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取Task type id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskTypeId Task type id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTaskTypeId() const;

                    /**
                     * 设置Task type id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskTypeId Task type id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskTypeId(const int64_t& _taskTypeId);

                    /**
                     * 判断参数 TaskTypeId 是否已赋值
                     * @return TaskTypeId 是否已赋值
                     * 
                     */
                    bool TaskTypeIdHasBeenSet() const;

                    /**
                     * 获取Workflow running parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkflowParams Workflow running parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWorkflowParams() const;

                    /**
                     * 设置Workflow running parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workflowParams Workflow running parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWorkflowParams(const std::string& _workflowParams);

                    /**
                     * 判断参数 WorkflowParams 是否已赋值
                     * @return WorkflowParams 是否已赋值
                     * 
                     */
                    bool WorkflowParamsHasBeenSet() const;

                    /**
                     * 获取Whether rerun is supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SupportRerun Whether rerun is supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetSupportRerun() const;

                    /**
                     * 设置Whether rerun is supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _supportRerun Whether rerun is supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSupportRerun(const bool& _supportRerun);

                    /**
                     * 判断参数 SupportRerun 是否已赋值
                     * @return SupportRerun 是否已赋值
                     * 
                     */
                    bool SupportRerunHasBeenSet() const;

                    /**
                     * 获取Workflow execution status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkflowExecutionState Workflow execution status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWorkflowExecutionState() const;

                    /**
                     * 设置Workflow execution status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workflowExecutionState Workflow execution status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWorkflowExecutionState(const std::string& _workflowExecutionState);

                    /**
                     * 判断参数 WorkflowExecutionState 是否已赋值
                     * @return WorkflowExecutionState 是否已赋值
                     * 
                     */
                    bool WorkflowExecutionStateHasBeenSet() const;

                    /**
                     * 获取Task execution result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecutionResult Task execution result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExecutionResult() const;

                    /**
                     * 设置Task execution result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executionResult Task execution result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExecutionResult(const std::string& _executionResult);

                    /**
                     * 判断参数 ExecutionResult 是否已赋值
                     * @return ExecutionResult 是否已赋值
                     * 
                     */
                    bool ExecutionResultHasBeenSet() const;

                private:

                    /**
                     * Running ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_executionId;
                    bool m_executionIdHasBeenSet;

                    /**
                     * Execution status: FAILED (FAILED to run), SUCCESS (executed successfully), PENDING (waiting), SKIP (SKIP RUNNING), RUNNING (RUNNING).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_executionState;
                    bool m_executionStateHasBeenSet;

                    /**
                     * Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Workflow ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Running ID of the workflow.
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
                     * Task type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Task version.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskVersionId;
                    bool m_taskVersionIdHasBeenSet;

                    /**
                     * Trigger Type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * Waiting duration, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_waitTime;
                    bool m_waitTimeHasBeenSet;

                    /**
                     * Associated resource group.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceGroup;
                    bool m_resourceGroupHasBeenSet;

                    /**
                     * Error code
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * Operating account.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_executeUserUin;
                    bool m_executeUserUinHasBeenSet;

                    /**
                     * Creator ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createrUin;
                    bool m_createrUinHasBeenSet;

                    /**
                     * Execution ID of the execution platform.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Creation Timestamp
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update Timestamp
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Task completion time dependency.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dependenceFinishedTime;
                    bool m_dependenceFinishedTimeHasBeenSet;

                    /**
                     * Task delivery time to the execution platform.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_queueStartTime;
                    bool m_queueStartTimeHasBeenSet;

                    /**
                     * Started waiting for source time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_pendingStartTime;
                    bool m_pendingStartTimeHasBeenSet;

                    /**
                     * Start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * Running end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                    /**
                     * Queuing time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_queueCostTime;
                    bool m_queueCostTimeHasBeenSet;

                    /**
                     * Running time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_executionTime;
                    bool m_executionTimeHasBeenSet;

                    /**
                     * Total time spent.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_allCostTime;
                    bool m_allCostTimeHasBeenSet;

                    /**
                     * Time zone.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * Depends on the upstream task ID list.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_dependOnList;
                    bool m_dependOnListHasBeenSet;

                    /**
                     * Running parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_runParams;
                    bool m_runParamsHasBeenSet;

                    /**
                     * Task extension information, including script path.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskTypeExtensions;
                    bool m_taskTypeExtensionsHasBeenSet;

                    /**
                     * Retry count. it indicates the first run when set to 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_retryTimes;
                    bool m_retryTimesHasBeenSet;

                    /**
                     * Left coordinate.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_leftCoordinate;
                    bool m_leftCoordinateHasBeenSet;

                    /**
                     * Top coordinate.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_topCoordinate;
                    bool m_topCoordinateHasBeenSet;

                    /**
                     * Resource group ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * Error code description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errorCodeStr;
                    bool m_errorCodeStrHasBeenSet;

                    /**
                     * Creator UIN.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * Issue the execution platform time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_issueTime;
                    bool m_issueTimeHasBeenSet;

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
                     * Operator name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_executeUserName;
                    bool m_executeUserNameHasBeenSet;

                    /**
                     * Number of retries.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_rerunTimes;
                    bool m_rerunTimesHasBeenSet;

                    /**
                     * Whether it is the most recent run.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isLatestExecution;
                    bool m_isLatestExecutionHasBeenSet;

                    /**
                     * Task running status.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskExecutionState;
                    bool m_taskExecutionStateHasBeenSet;

                    /**
                     * Cycle type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * Responsible person's name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userNameInCharge;
                    bool m_userNameInChargeHasBeenSet;

                    /**
                     * Responsible person id.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userUinInCharge;
                    bool m_userUinInChargeHasBeenSet;

                    /**
                     * Resource group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                    /**
                     * Time zone.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_timezone;
                    bool m_timezoneHasBeenSet;

                    /**
                     * Folder ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * Folder name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                    /**
                     * Project name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Task type id.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * Workflow running parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_workflowParams;
                    bool m_workflowParamsHasBeenSet;

                    /**
                     * Whether rerun is supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_supportRerun;
                    bool m_supportRerunHasBeenSet;

                    /**
                     * Workflow execution status.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_workflowExecutionState;
                    bool m_workflowExecutionStateHasBeenSet;

                    /**
                     * Task execution result.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_executionResult;
                    bool m_executionResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKRUNBRIEF_H_
