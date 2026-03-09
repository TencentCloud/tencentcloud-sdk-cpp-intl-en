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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERWORKFLOWRUNBRIEF_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERWORKFLOWRUNBRIEF_H_

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
                * Workflow operation summary information.
                */
                class TriggerWorkflowRunBrief : public AbstractModel
                {
                public:
                    TriggerWorkflowRunBrief();
                    ~TriggerWorkflowRunBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User AppId
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppId User AppId
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置User AppId
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appId User AppId
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

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
                     * 获取Workflow running ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecutionId Workflow running ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExecutionId() const;

                    /**
                     * 设置Workflow running ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executionId Workflow running ID.
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
                     * 获取Trigger ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TriggerId Trigger ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTriggerId() const;

                    /**
                     * 设置Trigger ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _triggerId Trigger ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTriggerId(const std::string& _triggerId);

                    /**
                     * 判断参数 TriggerId 是否已赋值
                     * @return TriggerId 是否已赋值
                     * 
                     */
                    bool TriggerIdHasBeenSet() const;

                    /**
                     * 获取Trigger mode: scheduling trigger Scheduler, manual trigger ManualTrigger, Event trigger Event.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TriggerType Trigger mode: scheduling trigger Scheduler, manual trigger ManualTrigger, Event trigger Event.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置Trigger mode: scheduling trigger Scheduler, manual trigger ManualTrigger, Event trigger Event.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _triggerType Trigger mode: scheduling trigger Scheduler, manual trigger ManualTrigger, Event trigger Event.
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
                     * 获取Workflow trigger time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Workflow trigger time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Workflow trigger time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Workflow trigger time.
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
                     * 获取Execution start timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecutionStartTime Execution start timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置Execution start timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executionStartTime Execution start timestamp.
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
                     * 获取Execution end timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecutionEndTime Execution end timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置Execution end timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executionEndTime Execution end timestamp.
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
                     * 获取Running time, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecutionCostTime Running time, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExecutionCostTime() const;

                    /**
                     * 设置Running time, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executionCostTime Running time, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExecutionCostTime(const std::string& _executionCostTime);

                    /**
                     * 判断参数 ExecutionCostTime 是否已赋值
                     * @return ExecutionCostTime 是否已赋值
                     * 
                     */
                    bool ExecutionCostTimeHasBeenSet() const;

                    /**
                     * 获取Concurrent queue time taken, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QueueCostTime Concurrent queue time taken, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetQueueCostTime() const;

                    /**
                     * 设置Concurrent queue time taken, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _queueCostTime Concurrent queue time taken, in seconds.
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
                     * 获取Wait time for resource spending, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PendingCostTime Wait time for resource spending, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPendingCostTime() const;

                    /**
                     * 设置Wait time for resource spending, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pendingCostTime Wait time for resource spending, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPendingCostTime(const std::string& _pendingCostTime);

                    /**
                     * 判断参数 PendingCostTime 是否已赋值
                     * @return PendingCostTime 是否已赋值
                     * 
                     */
                    bool PendingCostTimeHasBeenSet() const;

                    /**
                     * 获取Execution status: execution FAILED: FAILED, operation successful: SUCCESS, waiting: PENDING, skip RUNNING: SKIPED, RUNNING: RUNNING.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecutionState Execution status: execution FAILED: FAILED, operation successful: SUCCESS, waiting: PENDING, skip RUNNING: SKIPED, RUNNING: RUNNING.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExecutionState() const;

                    /**
                     * 设置Execution status: execution FAILED: FAILED, operation successful: SUCCESS, waiting: PENDING, skip RUNNING: SKIPED, RUNNING: RUNNING.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executionState Execution status: execution FAILED: FAILED, operation successful: SUCCESS, waiting: PENDING, skip RUNNING: SKIPED, RUNNING: RUNNING.
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
                     * 获取Running user UIN.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecuteUserUin Running user UIN.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExecuteUserUin() const;

                    /**
                     * 设置Running user UIN.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executeUserUin Running user UIN.
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
                     * 获取Running username.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecuteUserName Running username.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExecuteUserName() const;

                    /**
                     * 设置Running username.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executeUserName Running username.
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
                     * 获取Error code
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrorCodeStr Error code
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrorCodeStr() const;

                    /**
                     * 设置Error code
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _errorCodeStr Error code
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
                     * 获取Running parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkflowParams Running parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWorkflowParams() const;

                    /**
                     * 设置Running parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workflowParams Running parameter.
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
                     * 获取Workflow version info ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkflowVersionId Workflow version info ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWorkflowVersionId() const;

                    /**
                     * 设置Workflow version info ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workflowVersionId Workflow version info ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWorkflowVersionId(const std::string& _workflowVersionId);

                    /**
                     * 判断参数 WorkflowVersionId 是否已赋值
                     * @return WorkflowVersionId 是否已赋值
                     * 
                     */
                    bool WorkflowVersionIdHasBeenSet() const;

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
                     * 获取Number of reruns.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RerunTimes Number of reruns.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRerunTimes() const;

                    /**
                     * 设置Number of reruns.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rerunTimes Number of reruns.
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
                     * 获取Running task scope, comma-separated task ID list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SelectedTaskIds Running task scope, comma-separated task ID list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSelectedTaskIds() const;

                    /**
                     * 设置Running task scope, comma-separated task ID list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _selectedTaskIds Running task scope, comma-separated task ID list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSelectedTaskIds(const std::vector<std::string>& _selectedTaskIds);

                    /**
                     * 判断参数 SelectedTaskIds 是否已赋值
                     * @return SelectedTaskIds 是否已赋值
                     * 
                     */
                    bool SelectedTaskIdsHasBeenSet() const;

                    /**
                     * 获取Start time of pending concurrency.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PendingStartTime Start time of pending concurrency.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPendingStartTime() const;

                    /**
                     * 设置Start time of pending concurrency.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pendingStartTime Start time of pending concurrency.
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
                     * 获取Queued waiting start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QueueStartTime Queued waiting start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetQueueStartTime() const;

                    /**
                     * 设置Queued waiting start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _queueStartTime Queued waiting start time.
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
                     * 获取Running end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime Running end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Running end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endTime Running end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Folder ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FolderId Folder ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置Folder ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _folderId Folder ID.
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
                     * 获取Planned scheduling time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PlannedSchedulingTime Planned scheduling time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPlannedSchedulingTime() const;

                    /**
                     * 设置Planned scheduling time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _plannedSchedulingTime Planned scheduling time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPlannedSchedulingTime(const std::string& _plannedSchedulingTime);

                    /**
                     * 判断参数 PlannedSchedulingTime 是否已赋值
                     * @return PlannedSchedulingTime 是否已赋值
                     * 
                     */
                    bool PlannedSchedulingTimeHasBeenSet() const;

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
                     * 获取Responsible person ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserUinInCharge Responsible person ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserUinInCharge() const;

                    /**
                     * 设置Responsible person ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userUinInCharge Responsible person ID.
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

                private:

                    /**
                     * User AppId
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Workflow name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * Workflow ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Workflow running ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_executionId;
                    bool m_executionIdHasBeenSet;

                    /**
                     * Trigger ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_triggerId;
                    bool m_triggerIdHasBeenSet;

                    /**
                     * Trigger mode: scheduling trigger Scheduler, manual trigger ManualTrigger, Event trigger Event.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * Workflow trigger time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Execution start timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * Execution end timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                    /**
                     * Running time, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_executionCostTime;
                    bool m_executionCostTimeHasBeenSet;

                    /**
                     * Concurrent queue time taken, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_queueCostTime;
                    bool m_queueCostTimeHasBeenSet;

                    /**
                     * Wait time for resource spending, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_pendingCostTime;
                    bool m_pendingCostTimeHasBeenSet;

                    /**
                     * Execution status: execution FAILED: FAILED, operation successful: SUCCESS, waiting: PENDING, skip RUNNING: SKIPED, RUNNING: RUNNING.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_executionState;
                    bool m_executionStateHasBeenSet;

                    /**
                     * Running user UIN.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_executeUserUin;
                    bool m_executeUserUinHasBeenSet;

                    /**
                     * Running username.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_executeUserName;
                    bool m_executeUserNameHasBeenSet;

                    /**
                     * Error code
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errorCodeStr;
                    bool m_errorCodeStrHasBeenSet;

                    /**
                     * Running parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_workflowParams;
                    bool m_workflowParamsHasBeenSet;

                    /**
                     * Workflow version info ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_workflowVersionId;
                    bool m_workflowVersionIdHasBeenSet;

                    /**
                     * Whether rerun is supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_supportRerun;
                    bool m_supportRerunHasBeenSet;

                    /**
                     * Number of reruns.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_rerunTimes;
                    bool m_rerunTimesHasBeenSet;

                    /**
                     * Running task scope, comma-separated task ID list.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_selectedTaskIds;
                    bool m_selectedTaskIdsHasBeenSet;

                    /**
                     * Start time of pending concurrency.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_pendingStartTime;
                    bool m_pendingStartTimeHasBeenSet;

                    /**
                     * Queued waiting start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_queueStartTime;
                    bool m_queueStartTimeHasBeenSet;

                    /**
                     * Running end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Folder ID.
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
                     * Planned scheduling time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_plannedSchedulingTime;
                    bool m_plannedSchedulingTimeHasBeenSet;

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
                     * Responsible person ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userUinInCharge;
                    bool m_userUinInChargeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERWORKFLOWRUNBRIEF_H_
