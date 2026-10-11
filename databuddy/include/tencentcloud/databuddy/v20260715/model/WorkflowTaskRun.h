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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWTASKRUN_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWTASKRUN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/ResourceGroupInfo.h>
#include <tencentcloud/databuddy/v20260715/model/AdvancedDependencyConfig.h>
#include <tencentcloud/databuddy/v20260715/model/InnerWorkflowTaskBrief.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Workflow task running information
                */
                class WorkflowTaskRun : public AbstractModel
                {
                public:
                    WorkflowTaskRun();
                    ~WorkflowTaskRun() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Task name.</p>
                     * @return TaskName <p>Task name.</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>Task name.</p>
                     * @param _taskName <p>Task name.</p>
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
                     * 获取<p>Task running ID</p>
                     * @return WorkflowTaskRunId <p>Task running ID</p>
                     * 
                     */
                    std::string GetWorkflowTaskRunId() const;

                    /**
                     * 设置<p>Task running ID</p>
                     * @param _workflowTaskRunId <p>Task running ID</p>
                     * 
                     */
                    void SetWorkflowTaskRunId(const std::string& _workflowTaskRunId);

                    /**
                     * 判断参数 WorkflowTaskRunId 是否已赋值
                     * @return WorkflowTaskRunId 是否已赋值
                     * 
                     */
                    bool WorkflowTaskRunIdHasBeenSet() const;

                    /**
                     * 获取<p>Running state, for example, CREATE("initialize"), QUEUED("Waiting"), PENDING("preparing"), RUNNING("running"), SKIPPED("skip running"), SUCCESS("success"), FAILED("failure"), TERMINATING("terminating"), TERMINATED("termination"), CANCELLED("manual termination")</p>
                     * @return RunState <p>Running state, for example, CREATE("initialize"), QUEUED("Waiting"), PENDING("preparing"), RUNNING("running"), SKIPPED("skip running"), SUCCESS("success"), FAILED("failure"), TERMINATING("terminating"), TERMINATED("termination"), CANCELLED("manual termination")</p>
                     * 
                     */
                    std::string GetRunState() const;

                    /**
                     * 设置<p>Running state, for example, CREATE("initialize"), QUEUED("Waiting"), PENDING("preparing"), RUNNING("running"), SKIPPED("skip running"), SUCCESS("success"), FAILED("failure"), TERMINATING("terminating"), TERMINATED("termination"), CANCELLED("manual termination")</p>
                     * @param _runState <p>Running state, for example, CREATE("initialize"), QUEUED("Waiting"), PENDING("preparing"), RUNNING("running"), SKIPPED("skip running"), SUCCESS("success"), FAILED("failure"), TERMINATING("terminating"), TERMINATED("termination"), CANCELLED("manual termination")</p>
                     * 
                     */
                    void SetRunState(const std::string& _runState);

                    /**
                     * 判断参数 RunState 是否已赋值
                     * @return RunState 是否已赋值
                     * 
                     */
                    bool RunStateHasBeenSet() const;

                    /**
                     * 获取<p>Workspace ID</p>
                     * @return WorkspaceId <p>Workspace ID</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>Workspace ID</p>
                     * @param _workspaceId <p>Workspace ID</p>
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取<p>Workflow ID</p>
                     * @return WorkflowId <p>Workflow ID</p>
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置<p>Workflow ID</p>
                     * @param _workflowId <p>Workflow ID</p>
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
                     * 获取<p>Workflow running ID</p>
                     * @return WorkflowRunId <p>Workflow running ID</p>
                     * 
                     */
                    std::string GetWorkflowRunId() const;

                    /**
                     * 设置<p>Workflow running ID</p>
                     * @param _workflowRunId <p>Workflow running ID</p>
                     * 
                     */
                    void SetWorkflowRunId(const std::string& _workflowRunId);

                    /**
                     * 判断参数 WorkflowRunId 是否已赋值
                     * @return WorkflowRunId 是否已赋值
                     * 
                     */
                    bool WorkflowRunIdHasBeenSet() const;

                    /**
                     * 获取<p>Task ID.</p>
                     * @return TaskId <p>Task ID.</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>Task ID.</p>
                     * @param _taskId <p>Task ID.</p>
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
                     * 获取<p>Task Type Name. For details, see the description of the TaskTypeName field in the TaskType data structure.</p>
                     * @return TaskTypeName <p>Task Type Name. For details, see the description of the TaskTypeName field in the TaskType data structure.</p>
                     * 
                     */
                    std::string GetTaskTypeName() const;

                    /**
                     * 设置<p>Task Type Name. For details, see the description of the TaskTypeName field in the TaskType data structure.</p>
                     * @param _taskTypeName <p>Task Type Name. For details, see the description of the TaskTypeName field in the TaskType data structure.</p>
                     * 
                     */
                    void SetTaskTypeName(const std::string& _taskTypeName);

                    /**
                     * 判断参数 TaskTypeName 是否已赋值
                     * @return TaskTypeName 是否已赋值
                     * 
                     */
                    bool TaskTypeNameHasBeenSet() const;

                    /**
                     * 获取<p>Task version ID.</p>
                     * @return TaskVersionId <p>Task version ID.</p>
                     * 
                     */
                    std::string GetTaskVersionId() const;

                    /**
                     * 设置<p>Task version ID.</p>
                     * @param _taskVersionId <p>Task version ID.</p>
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
                     * 获取<p>Trigger type</p><p>Enumeration values:</p><ul><li>Manual: manual triggering</li><li>Scheduler: scheduling trigger</li></ul>
                     * @return TriggerType <p>Trigger type</p><p>Enumeration values:</p><ul><li>Manual: manual triggering</li><li>Scheduler: scheduling trigger</li></ul>
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置<p>Trigger type</p><p>Enumeration values:</p><ul><li>Manual: manual triggering</li><li>Scheduler: scheduling trigger</li></ul>
                     * @param _triggerType <p>Trigger type</p><p>Enumeration values:</p><ul><li>Manual: manual triggering</li><li>Scheduler: scheduling trigger</li></ul>
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
                     * 获取<p>Associated resource group ID</p>
                     * @return ResourceGroupId <p>Associated resource group ID</p>
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置<p>Associated resource group ID</p>
                     * @param _resourceGroupId <p>Associated resource group ID</p>
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
                     * 获取<p>Error code</p>
                     * @return ErrorCodeString <p>Error code</p>
                     * 
                     */
                    std::string GetErrorCodeString() const;

                    /**
                     * 设置<p>Error code</p>
                     * @param _errorCodeString <p>Error code</p>
                     * 
                     */
                    void SetErrorCodeString(const std::string& _errorCodeString);

                    /**
                     * 判断参数 ErrorCodeString 是否已赋值
                     * @return ErrorCodeString 是否已赋值
                     * 
                     */
                    bool ErrorCodeStringHasBeenSet() const;

                    /**
                     * 获取<p>Running user UIN</p>
                     * @return RunUserUin <p>Running user UIN</p>
                     * 
                     */
                    std::string GetRunUserUin() const;

                    /**
                     * 设置<p>Running user UIN</p>
                     * @param _runUserUin <p>Running user UIN</p>
                     * 
                     */
                    void SetRunUserUin(const std::string& _runUserUin);

                    /**
                     * 判断参数 RunUserUin 是否已赋值
                     * @return RunUserUin 是否已赋值
                     * 
                     */
                    bool RunUserUinHasBeenSet() const;

                    /**
                     * 获取<p>Username for operation</p>
                     * @return RunUserName <p>Username for operation</p>
                     * 
                     */
                    std::string GetRunUserName() const;

                    /**
                     * 设置<p>Username for operation</p>
                     * @param _runUserName <p>Username for operation</p>
                     * 
                     */
                    void SetRunUserName(const std::string& _runUserName);

                    /**
                     * 判断参数 RunUserName 是否已赋值
                     * @return RunUserName 是否已赋值
                     * 
                     */
                    bool RunUserNameHasBeenSet() const;

                    /**
                     * 获取<p>Creator UIN</p>
                     * @return CreateUserUin <p>Creator UIN</p>
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置<p>Creator UIN</p>
                     * @param _createUserUin <p>Creator UIN</p>
                     * 
                     */
                    void SetCreateUserUin(const std::string& _createUserUin);

                    /**
                     * 判断参数 CreateUserUin 是否已赋值
                     * @return CreateUserUin 是否已赋值
                     * 
                     */
                    bool CreateUserUinHasBeenSet() const;

                    /**
                     * 获取<p>Execution platform execution ID</p>
                     * @return JobId <p>Execution platform execution ID</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>Execution platform execution ID</p>
                     * @param _jobId <p>Execution platform execution ID</p>
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
                     * 获取<p>Creation time. Unit: millisecond timestamp</p>
                     * @return CreateTime <p>Creation time. Unit: millisecond timestamp</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time. Unit: millisecond timestamp</p>
                     * @param _createTime <p>Creation time. Unit: millisecond timestamp</p>
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
                     * 获取<p>Last update time. Unit: timestamp in milliseconds</p>
                     * @return UpdateTime <p>Last update time. Unit: timestamp in milliseconds</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Last update time. Unit: timestamp in milliseconds</p>
                     * @param _updateTime <p>Last update time. Unit: timestamp in milliseconds</p>
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
                     * 获取<p>Dependency task completion time, unit: timestamp in milliseconds</p>
                     * @return DependenceFinishedTime <p>Dependency task completion time, unit: timestamp in milliseconds</p>
                     * 
                     */
                    std::string GetDependenceFinishedTime() const;

                    /**
                     * 设置<p>Dependency task completion time, unit: timestamp in milliseconds</p>
                     * @param _dependenceFinishedTime <p>Dependency task completion time, unit: timestamp in milliseconds</p>
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
                     * 获取<p>Start time in milliseconds.</p>
                     * @return RunStartTime <p>Start time in milliseconds.</p>
                     * 
                     */
                    std::string GetRunStartTime() const;

                    /**
                     * 设置<p>Start time in milliseconds.</p>
                     * @param _runStartTime <p>Start time in milliseconds.</p>
                     * 
                     */
                    void SetRunStartTime(const std::string& _runStartTime);

                    /**
                     * 判断参数 RunStartTime 是否已赋值
                     * @return RunStartTime 是否已赋值
                     * 
                     */
                    bool RunStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>Running end time, unit: timestamp in milliseconds</p>
                     * @return RunEndTime <p>Running end time, unit: timestamp in milliseconds</p>
                     * 
                     */
                    std::string GetRunEndTime() const;

                    /**
                     * 设置<p>Running end time, unit: timestamp in milliseconds</p>
                     * @param _runEndTime <p>Running end time, unit: timestamp in milliseconds</p>
                     * 
                     */
                    void SetRunEndTime(const std::string& _runEndTime);

                    /**
                     * 判断参数 RunEndTime 是否已赋值
                     * @return RunEndTime 是否已赋值
                     * 
                     */
                    bool RunEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Running time, unit: seconds</p>
                     * @return RunCostTime <p>Running time, unit: seconds</p>
                     * 
                     */
                    std::string GetRunCostTime() const;

                    /**
                     * 设置<p>Running time, unit: seconds</p>
                     * @param _runCostTime <p>Running time, unit: seconds</p>
                     * 
                     */
                    void SetRunCostTime(const std::string& _runCostTime);

                    /**
                     * 判断参数 RunCostTime 是否已赋值
                     * @return RunCostTime 是否已赋值
                     * 
                     */
                    bool RunCostTimeHasBeenSet() const;

                    /**
                     * 获取<p>Waiting duration (waiting duration from dependency readiness to start), unit: second</p>
                     * @return WaitTime <p>Waiting duration (waiting duration from dependency readiness to start), unit: second</p>
                     * 
                     */
                    std::string GetWaitTime() const;

                    /**
                     * 设置<p>Waiting duration (waiting duration from dependency readiness to start), unit: second</p>
                     * @param _waitTime <p>Waiting duration (waiting duration from dependency readiness to start), unit: second</p>
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
                     * 获取<p>Execution platform time, unit: timestamp in milliseconds</p>
                     * @return IssueTime <p>Execution platform time, unit: timestamp in milliseconds</p>
                     * 
                     */
                    std::string GetIssueTime() const;

                    /**
                     * 设置<p>Execution platform time, unit: timestamp in milliseconds</p>
                     * @param _issueTime <p>Execution platform time, unit: timestamp in milliseconds</p>
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
                     * 获取<p>Time zone</p>
                     * @return TimeZone <p>Time zone</p>
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置<p>Time zone</p>
                     * @param _timeZone <p>Time zone</p>
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
                     * 获取<p>Task ID list that it depends on. Reserved field, temporarily returns []</p><p>Reserved field, temporarily returns []</p>
                     * @return DependOnList <p>Task ID list that it depends on. Reserved field, temporarily returns []</p><p>Reserved field, temporarily returns []</p>
                     * 
                     */
                    std::vector<std::string> GetDependOnList() const;

                    /**
                     * 设置<p>Task ID list that it depends on. Reserved field, temporarily returns []</p><p>Reserved field, temporarily returns []</p>
                     * @param _dependOnList <p>Task ID list that it depends on. Reserved field, temporarily returns []</p><p>Reserved field, temporarily returns []</p>
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
                     * 获取<p>Running parameter</p>
                     * @return RunParams <p>Running parameter</p>
                     * 
                     */
                    std::string GetRunParams() const;

                    /**
                     * 设置<p>Running parameter</p>
                     * @param _runParams <p>Running parameter</p>
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
                     * 获取<p>Task extension information, including script path</p>
                     * @return TaskTypeExtensions <p>Task extension information, including script path</p>
                     * 
                     */
                    std::string GetTaskTypeExtensions() const;

                    /**
                     * 设置<p>Task extension information, including script path</p>
                     * @param _taskTypeExtensions <p>Task extension information, including script path</p>
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
                     * 获取<p>Task X coordinate</p>
                     * @return LeftCoordinate <p>Task X coordinate</p>
                     * 
                     */
                    double GetLeftCoordinate() const;

                    /**
                     * 设置<p>Task X coordinate</p>
                     * @param _leftCoordinate <p>Task X coordinate</p>
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
                     * 获取<p>Task Y-axis coordinate</p>
                     * @return TopCoordinate <p>Task Y-axis coordinate</p>
                     * 
                     */
                    double GetTopCoordinate() const;

                    /**
                     * 设置<p>Task Y-axis coordinate</p>
                     * @param _topCoordinate <p>Task Y-axis coordinate</p>
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
                     * 获取<p>Number of retries. 0 indicates the first run.</p>
                     * @return RetryTimes <p>Number of retries. 0 indicates the first run.</p>
                     * 
                     */
                    int64_t GetRetryTimes() const;

                    /**
                     * 设置<p>Number of retries. 0 indicates the first run.</p>
                     * @param _retryTimes <p>Number of retries. 0 indicates the first run.</p>
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
                     * 获取<p>Workflow name</p>
                     * @return WorkflowName <p>Workflow name</p>
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置<p>Workflow name</p>
                     * @param _workflowName <p>Workflow name</p>
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
                     * 获取<p>Number of reruns.</p>
                     * @return RerunTimes <p>Number of reruns.</p>
                     * 
                     */
                    int64_t GetRerunTimes() const;

                    /**
                     * 设置<p>Number of reruns.</p>
                     * @param _rerunTimes <p>Number of reruns.</p>
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
                     * 获取<p>Whether it is the most recent run</p>
                     * @return IsLatestRun <p>Whether it is the most recent run</p>
                     * 
                     */
                    bool GetIsLatestRun() const;

                    /**
                     * 设置<p>Whether it is the most recent run</p>
                     * @param _isLatestRun <p>Whether it is the most recent run</p>
                     * 
                     */
                    void SetIsLatestRun(const bool& _isLatestRun);

                    /**
                     * 判断参数 IsLatestRun 是否已赋值
                     * @return IsLatestRun 是否已赋值
                     * 
                     */
                    bool IsLatestRunHasBeenSet() const;

                    /**
                     * 获取<p>Resource group information list.</p>
                     * @return ResourceGroupInfoList <p>Resource group information list.</p>
                     * 
                     */
                    std::vector<ResourceGroupInfo> GetResourceGroupInfoList() const;

                    /**
                     * 设置<p>Resource group information list.</p>
                     * @param _resourceGroupInfoList <p>Resource group information list.</p>
                     * 
                     */
                    void SetResourceGroupInfoList(const std::vector<ResourceGroupInfo>& _resourceGroupInfoList);

                    /**
                     * 判断参数 ResourceGroupInfoList 是否已赋值
                     * @return ResourceGroupInfoList 是否已赋值
                     * 
                     */
                    bool ResourceGroupInfoListHasBeenSet() const;

                    /**
                     * 获取<p>Execution result</p>
                     * @return RunResult <p>Execution result</p>
                     * 
                     */
                    std::string GetRunResult() const;

                    /**
                     * 设置<p>Execution result</p>
                     * @param _runResult <p>Execution result</p>
                     * 
                     */
                    void SetRunResult(const std::string& _runResult);

                    /**
                     * 判断参数 RunResult 是否已赋值
                     * @return RunResult 是否已赋值
                     * 
                     */
                    bool RunResultHasBeenSet() const;

                    /**
                     * 获取<p>Task dependency run conditions</p><p>ALL_SUCCESS: All successful: All upstream dependency tasks have been executed and succeeded<br>ONE_SUCCESS: At least one successful: At least one upstream dependency task succeeded<br>NONE_FAILED: No failure currently: No dependency task failed, and at least one dependency task is running<br>ALL_DONE: All completed: All upstream dependency tasks have been executed and completed (regardless of success or failure)<br>ONE_FAILED: At least one failed: At least one upstream dependency task failed<br>ALL_FAILED: All failed: All upstream dependency tasks failed<br>ALL_DONE_AT_LEAST_ONE_SUCCESS: All upstream completed and at least one successful: When all upstream dependency tasks reach a final state, a dependency check is performed. If at least one succeeded, the dependency check passes; otherwise, the run is skipped<br>ALL_SKIPPED: All upstream completed, no skipped runs: When all upstream dependency tasks reach a final state, a dependency check is performed. If all upstream states are success, failure, or upstream failed state, the dependency check passes; otherwise, the run is skipped<br>ONE_DONE: At least one completed: Once any upstream task is completed, a dependency check is performed, and the dependency check passes; otherwise, it keeps waiting for upstream<br>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS: All upstream completed, none failed, at least one successful: When all upstream dependency tasks reach a final state, a dependency check is performed. If no upstream task failed and at least one succeeded, the dependency check passes; otherwise, the run is skipped<br>NONE_SKIPPED: All upstream completed, no skipped runs: When all upstream dependency tasks reach a final state, a dependency check is performed. If all upstream states are success, failure, or upstream failed state, the dependency check passes; otherwise, the run is skipped<br>ALL_DONE_AT_LEAST_ONE_FAILED: All upstream completed and at least one failed: When all upstream dependency tasks reach a final state, a dependency check is performed. If at least one failed, the dependency check passes; otherwise, the run is skipped<br>ADVANCED: Configured when the run condition is in advanced mode</p>
                     * @return DependOnRunCondition <p>Task dependency run conditions</p><p>ALL_SUCCESS: All successful: All upstream dependency tasks have been executed and succeeded<br>ONE_SUCCESS: At least one successful: At least one upstream dependency task succeeded<br>NONE_FAILED: No failure currently: No dependency task failed, and at least one dependency task is running<br>ALL_DONE: All completed: All upstream dependency tasks have been executed and completed (regardless of success or failure)<br>ONE_FAILED: At least one failed: At least one upstream dependency task failed<br>ALL_FAILED: All failed: All upstream dependency tasks failed<br>ALL_DONE_AT_LEAST_ONE_SUCCESS: All upstream completed and at least one successful: When all upstream dependency tasks reach a final state, a dependency check is performed. If at least one succeeded, the dependency check passes; otherwise, the run is skipped<br>ALL_SKIPPED: All upstream completed, no skipped runs: When all upstream dependency tasks reach a final state, a dependency check is performed. If all upstream states are success, failure, or upstream failed state, the dependency check passes; otherwise, the run is skipped<br>ONE_DONE: At least one completed: Once any upstream task is completed, a dependency check is performed, and the dependency check passes; otherwise, it keeps waiting for upstream<br>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS: All upstream completed, none failed, at least one successful: When all upstream dependency tasks reach a final state, a dependency check is performed. If no upstream task failed and at least one succeeded, the dependency check passes; otherwise, the run is skipped<br>NONE_SKIPPED: All upstream completed, no skipped runs: When all upstream dependency tasks reach a final state, a dependency check is performed. If all upstream states are success, failure, or upstream failed state, the dependency check passes; otherwise, the run is skipped<br>ALL_DONE_AT_LEAST_ONE_FAILED: All upstream completed and at least one failed: When all upstream dependency tasks reach a final state, a dependency check is performed. If at least one failed, the dependency check passes; otherwise, the run is skipped<br>ADVANCED: Configured when the run condition is in advanced mode</p>
                     * 
                     */
                    std::string GetDependOnRunCondition() const;

                    /**
                     * 设置<p>Task dependency run conditions</p><p>ALL_SUCCESS: All successful: All upstream dependency tasks have been executed and succeeded<br>ONE_SUCCESS: At least one successful: At least one upstream dependency task succeeded<br>NONE_FAILED: No failure currently: No dependency task failed, and at least one dependency task is running<br>ALL_DONE: All completed: All upstream dependency tasks have been executed and completed (regardless of success or failure)<br>ONE_FAILED: At least one failed: At least one upstream dependency task failed<br>ALL_FAILED: All failed: All upstream dependency tasks failed<br>ALL_DONE_AT_LEAST_ONE_SUCCESS: All upstream completed and at least one successful: When all upstream dependency tasks reach a final state, a dependency check is performed. If at least one succeeded, the dependency check passes; otherwise, the run is skipped<br>ALL_SKIPPED: All upstream completed, no skipped runs: When all upstream dependency tasks reach a final state, a dependency check is performed. If all upstream states are success, failure, or upstream failed state, the dependency check passes; otherwise, the run is skipped<br>ONE_DONE: At least one completed: Once any upstream task is completed, a dependency check is performed, and the dependency check passes; otherwise, it keeps waiting for upstream<br>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS: All upstream completed, none failed, at least one successful: When all upstream dependency tasks reach a final state, a dependency check is performed. If no upstream task failed and at least one succeeded, the dependency check passes; otherwise, the run is skipped<br>NONE_SKIPPED: All upstream completed, no skipped runs: When all upstream dependency tasks reach a final state, a dependency check is performed. If all upstream states are success, failure, or upstream failed state, the dependency check passes; otherwise, the run is skipped<br>ALL_DONE_AT_LEAST_ONE_FAILED: All upstream completed and at least one failed: When all upstream dependency tasks reach a final state, a dependency check is performed. If at least one failed, the dependency check passes; otherwise, the run is skipped<br>ADVANCED: Configured when the run condition is in advanced mode</p>
                     * @param _dependOnRunCondition <p>Task dependency run conditions</p><p>ALL_SUCCESS: All successful: All upstream dependency tasks have been executed and succeeded<br>ONE_SUCCESS: At least one successful: At least one upstream dependency task succeeded<br>NONE_FAILED: No failure currently: No dependency task failed, and at least one dependency task is running<br>ALL_DONE: All completed: All upstream dependency tasks have been executed and completed (regardless of success or failure)<br>ONE_FAILED: At least one failed: At least one upstream dependency task failed<br>ALL_FAILED: All failed: All upstream dependency tasks failed<br>ALL_DONE_AT_LEAST_ONE_SUCCESS: All upstream completed and at least one successful: When all upstream dependency tasks reach a final state, a dependency check is performed. If at least one succeeded, the dependency check passes; otherwise, the run is skipped<br>ALL_SKIPPED: All upstream completed, no skipped runs: When all upstream dependency tasks reach a final state, a dependency check is performed. If all upstream states are success, failure, or upstream failed state, the dependency check passes; otherwise, the run is skipped<br>ONE_DONE: At least one completed: Once any upstream task is completed, a dependency check is performed, and the dependency check passes; otherwise, it keeps waiting for upstream<br>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS: All upstream completed, none failed, at least one successful: When all upstream dependency tasks reach a final state, a dependency check is performed. If no upstream task failed and at least one succeeded, the dependency check passes; otherwise, the run is skipped<br>NONE_SKIPPED: All upstream completed, no skipped runs: When all upstream dependency tasks reach a final state, a dependency check is performed. If all upstream states are success, failure, or upstream failed state, the dependency check passes; otherwise, the run is skipped<br>ALL_DONE_AT_LEAST_ONE_FAILED: All upstream completed and at least one failed: When all upstream dependency tasks reach a final state, a dependency check is performed. If at least one failed, the dependency check passes; otherwise, the run is skipped<br>ADVANCED: Configured when the run condition is in advanced mode</p>
                     * 
                     */
                    void SetDependOnRunCondition(const std::string& _dependOnRunCondition);

                    /**
                     * 判断参数 DependOnRunCondition 是否已赋值
                     * @return DependOnRunCondition 是否已赋值
                     * 
                     */
                    bool DependOnRunConditionHasBeenSet() const;

                    /**
                     * 获取<p>Advanced dependency configuration</p>
                     * @return AdvancedDependencyConfig <p>Advanced dependency configuration</p>
                     * 
                     */
                    AdvancedDependencyConfig GetAdvancedDependencyConfig() const;

                    /**
                     * 设置<p>Advanced dependency configuration</p>
                     * @param _advancedDependencyConfig <p>Advanced dependency configuration</p>
                     * 
                     */
                    void SetAdvancedDependencyConfig(const AdvancedDependencyConfig& _advancedDependencyConfig);

                    /**
                     * 判断参数 AdvancedDependencyConfig 是否已赋值
                     * @return AdvancedDependencyConfig 是否已赋值
                     * 
                     */
                    bool AdvancedDependencyConfigHasBeenSet() const;

                    /**
                     * 获取<p>Built-in workflow task information</p>
                     * @return InnerTask <p>Built-in workflow task information</p>
                     * 
                     */
                    InnerWorkflowTaskBrief GetInnerTask() const;

                    /**
                     * 设置<p>Built-in workflow task information</p>
                     * @param _innerTask <p>Built-in workflow task information</p>
                     * 
                     */
                    void SetInnerTask(const InnerWorkflowTaskBrief& _innerTask);

                    /**
                     * 判断参数 InnerTask 是否已赋值
                     * @return InnerTask 是否已赋值
                     * 
                     */
                    bool InnerTaskHasBeenSet() const;

                    /**
                     * 获取<p>Scheduled dispatch time</p><p>Parameter format: timestamp in milliseconds, UTC</p>
                     * @return ScheduledTime <p>Scheduled dispatch time</p><p>Parameter format: timestamp in milliseconds, UTC</p>
                     * 
                     */
                    std::string GetScheduledTime() const;

                    /**
                     * 设置<p>Scheduled dispatch time</p><p>Parameter format: timestamp in milliseconds, UTC</p>
                     * @param _scheduledTime <p>Scheduled dispatch time</p><p>Parameter format: timestamp in milliseconds, UTC</p>
                     * 
                     */
                    void SetScheduledTime(const std::string& _scheduledTime);

                    /**
                     * 判断参数 ScheduledTime 是否已赋值
                     * @return ScheduledTime 是否已赋值
                     * 
                     */
                    bool ScheduledTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Task name.</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>Task running ID</p>
                     */
                    std::string m_workflowTaskRunId;
                    bool m_workflowTaskRunIdHasBeenSet;

                    /**
                     * <p>Running state, for example, CREATE("initialize"), QUEUED("Waiting"), PENDING("preparing"), RUNNING("running"), SKIPPED("skip running"), SUCCESS("success"), FAILED("failure"), TERMINATING("terminating"), TERMINATED("termination"), CANCELLED("manual termination")</p>
                     */
                    std::string m_runState;
                    bool m_runStateHasBeenSet;

                    /**
                     * <p>Workspace ID</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>Workflow ID</p>
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * <p>Workflow running ID</p>
                     */
                    std::string m_workflowRunId;
                    bool m_workflowRunIdHasBeenSet;

                    /**
                     * <p>Task ID.</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Task Type Name. For details, see the description of the TaskTypeName field in the TaskType data structure.</p>
                     */
                    std::string m_taskTypeName;
                    bool m_taskTypeNameHasBeenSet;

                    /**
                     * <p>Task version ID.</p>
                     */
                    std::string m_taskVersionId;
                    bool m_taskVersionIdHasBeenSet;

                    /**
                     * <p>Trigger type</p><p>Enumeration values:</p><ul><li>Manual: manual triggering</li><li>Scheduler: scheduling trigger</li></ul>
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * <p>Associated resource group ID</p>
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * <p>Error code</p>
                     */
                    std::string m_errorCodeString;
                    bool m_errorCodeStringHasBeenSet;

                    /**
                     * <p>Running user UIN</p>
                     */
                    std::string m_runUserUin;
                    bool m_runUserUinHasBeenSet;

                    /**
                     * <p>Username for operation</p>
                     */
                    std::string m_runUserName;
                    bool m_runUserNameHasBeenSet;

                    /**
                     * <p>Creator UIN</p>
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * <p>Execution platform execution ID</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>Creation time. Unit: millisecond timestamp</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Last update time. Unit: timestamp in milliseconds</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Dependency task completion time, unit: timestamp in milliseconds</p>
                     */
                    std::string m_dependenceFinishedTime;
                    bool m_dependenceFinishedTimeHasBeenSet;

                    /**
                     * <p>Start time in milliseconds.</p>
                     */
                    std::string m_runStartTime;
                    bool m_runStartTimeHasBeenSet;

                    /**
                     * <p>Running end time, unit: timestamp in milliseconds</p>
                     */
                    std::string m_runEndTime;
                    bool m_runEndTimeHasBeenSet;

                    /**
                     * <p>Running time, unit: seconds</p>
                     */
                    std::string m_runCostTime;
                    bool m_runCostTimeHasBeenSet;

                    /**
                     * <p>Waiting duration (waiting duration from dependency readiness to start), unit: second</p>
                     */
                    std::string m_waitTime;
                    bool m_waitTimeHasBeenSet;

                    /**
                     * <p>Execution platform time, unit: timestamp in milliseconds</p>
                     */
                    std::string m_issueTime;
                    bool m_issueTimeHasBeenSet;

                    /**
                     * <p>Time zone</p>
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * <p>Task ID list that it depends on. Reserved field, temporarily returns []</p><p>Reserved field, temporarily returns []</p>
                     */
                    std::vector<std::string> m_dependOnList;
                    bool m_dependOnListHasBeenSet;

                    /**
                     * <p>Running parameter</p>
                     */
                    std::string m_runParams;
                    bool m_runParamsHasBeenSet;

                    /**
                     * <p>Task extension information, including script path</p>
                     */
                    std::string m_taskTypeExtensions;
                    bool m_taskTypeExtensionsHasBeenSet;

                    /**
                     * <p>Task X coordinate</p>
                     */
                    double m_leftCoordinate;
                    bool m_leftCoordinateHasBeenSet;

                    /**
                     * <p>Task Y-axis coordinate</p>
                     */
                    double m_topCoordinate;
                    bool m_topCoordinateHasBeenSet;

                    /**
                     * <p>Number of retries. 0 indicates the first run.</p>
                     */
                    int64_t m_retryTimes;
                    bool m_retryTimesHasBeenSet;

                    /**
                     * <p>Workflow name</p>
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * <p>Number of reruns.</p>
                     */
                    int64_t m_rerunTimes;
                    bool m_rerunTimesHasBeenSet;

                    /**
                     * <p>Whether it is the most recent run</p>
                     */
                    bool m_isLatestRun;
                    bool m_isLatestRunHasBeenSet;

                    /**
                     * <p>Resource group information list.</p>
                     */
                    std::vector<ResourceGroupInfo> m_resourceGroupInfoList;
                    bool m_resourceGroupInfoListHasBeenSet;

                    /**
                     * <p>Execution result</p>
                     */
                    std::string m_runResult;
                    bool m_runResultHasBeenSet;

                    /**
                     * <p>Task dependency run conditions</p><p>ALL_SUCCESS: All successful: All upstream dependency tasks have been executed and succeeded<br>ONE_SUCCESS: At least one successful: At least one upstream dependency task succeeded<br>NONE_FAILED: No failure currently: No dependency task failed, and at least one dependency task is running<br>ALL_DONE: All completed: All upstream dependency tasks have been executed and completed (regardless of success or failure)<br>ONE_FAILED: At least one failed: At least one upstream dependency task failed<br>ALL_FAILED: All failed: All upstream dependency tasks failed<br>ALL_DONE_AT_LEAST_ONE_SUCCESS: All upstream completed and at least one successful: When all upstream dependency tasks reach a final state, a dependency check is performed. If at least one succeeded, the dependency check passes; otherwise, the run is skipped<br>ALL_SKIPPED: All upstream completed, no skipped runs: When all upstream dependency tasks reach a final state, a dependency check is performed. If all upstream states are success, failure, or upstream failed state, the dependency check passes; otherwise, the run is skipped<br>ONE_DONE: At least one completed: Once any upstream task is completed, a dependency check is performed, and the dependency check passes; otherwise, it keeps waiting for upstream<br>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS: All upstream completed, none failed, at least one successful: When all upstream dependency tasks reach a final state, a dependency check is performed. If no upstream task failed and at least one succeeded, the dependency check passes; otherwise, the run is skipped<br>NONE_SKIPPED: All upstream completed, no skipped runs: When all upstream dependency tasks reach a final state, a dependency check is performed. If all upstream states are success, failure, or upstream failed state, the dependency check passes; otherwise, the run is skipped<br>ALL_DONE_AT_LEAST_ONE_FAILED: All upstream completed and at least one failed: When all upstream dependency tasks reach a final state, a dependency check is performed. If at least one failed, the dependency check passes; otherwise, the run is skipped<br>ADVANCED: Configured when the run condition is in advanced mode</p>
                     */
                    std::string m_dependOnRunCondition;
                    bool m_dependOnRunConditionHasBeenSet;

                    /**
                     * <p>Advanced dependency configuration</p>
                     */
                    AdvancedDependencyConfig m_advancedDependencyConfig;
                    bool m_advancedDependencyConfigHasBeenSet;

                    /**
                     * <p>Built-in workflow task information</p>
                     */
                    InnerWorkflowTaskBrief m_innerTask;
                    bool m_innerTaskHasBeenSet;

                    /**
                     * <p>Scheduled dispatch time</p><p>Parameter format: timestamp in milliseconds, UTC</p>
                     */
                    std::string m_scheduledTime;
                    bool m_scheduledTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWTASKRUN_H_
