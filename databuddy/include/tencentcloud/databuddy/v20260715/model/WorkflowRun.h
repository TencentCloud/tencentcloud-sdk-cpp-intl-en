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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWRUN_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWRUN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/ResourceGroupInfo.h>
#include <tencentcloud/databuddy/v20260715/model/LabelBrief.h>
#include <tencentcloud/databuddy/v20260715/model/AdvancedParameter.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Workflow running information
                */
                class WorkflowRun : public AbstractModel
                {
                public:
                    WorkflowRun();
                    ~WorkflowRun() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Root account ID</p>
                     * @return AppId <p>Root account ID</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>Root account ID</p>
                     * @param _appId <p>Root account ID</p>
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
                     * 获取<p>Trigger mode: Scheduler, ManualTrigger, Event (for reference, see SchedulerTriggerType)</p>
                     * @return TriggerType <p>Trigger mode: Scheduler, ManualTrigger, Event (for reference, see SchedulerTriggerType)</p>
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置<p>Trigger mode: Scheduler, ManualTrigger, Event (for reference, see SchedulerTriggerType)</p>
                     * @param _triggerType <p>Trigger mode: Scheduler, ManualTrigger, Event (for reference, see SchedulerTriggerType)</p>
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
                     * 获取<p>Start time of the pending state, unit: timestamp in milliseconds</p>
                     * @return PendingStartTime <p>Start time of the pending state, unit: timestamp in milliseconds</p>
                     * 
                     */
                    std::string GetPendingStartTime() const;

                    /**
                     * 设置<p>Start time of the pending state, unit: timestamp in milliseconds</p>
                     * @param _pendingStartTime <p>Start time of the pending state, unit: timestamp in milliseconds</p>
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
                     * 获取<p>queue status start time, unit: timestamp in milliseconds</p>
                     * @return QueueStartTime <p>queue status start time, unit: timestamp in milliseconds</p>
                     * 
                     */
                    std::string GetQueueStartTime() const;

                    /**
                     * 设置<p>queue status start time, unit: timestamp in milliseconds</p>
                     * @param _queueStartTime <p>queue status start time, unit: timestamp in milliseconds</p>
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
                     * 获取<p>End time. It has a value when running enters the end state. Unit: timestamp in milliseconds</p>
                     * @return EndTime <p>End time. It has a value when running enters the end state. Unit: timestamp in milliseconds</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>End time. It has a value when running enters the end state. Unit: timestamp in milliseconds</p>
                     * @param _endTime <p>End time. It has a value when running enters the end state. Unit: timestamp in milliseconds</p>
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
                     * 获取<p>Concurrency queue time, in seconds</p>
                     * @return QueueCostTime <p>Concurrency queue time, in seconds</p>
                     * 
                     */
                    std::string GetQueueCostTime() const;

                    /**
                     * 设置<p>Concurrency queue time, in seconds</p>
                     * @param _queueCostTime <p>Concurrency queue time, in seconds</p>
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
                     * 获取<p>Time spent waiting for resources, in seconds</p>
                     * @return PendingCostTime <p>Time spent waiting for resources, in seconds</p>
                     * 
                     */
                    std::string GetPendingCostTime() const;

                    /**
                     * 设置<p>Time spent waiting for resources, in seconds</p>
                     * @param _pendingCostTime <p>Time spent waiting for resources, in seconds</p>
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
                     * 获取<p>RUNNING state. CREATE("initialization"), QUEUED("Waiting"), PENDING("preparing"), RUNNING("RUNNING"), SKIPPED("skip RUNNING"), SUCCESS("successful"), FAILED("failure"), TERMINATING("TERMINATING"), TERMINATED("termination"), CANCELLED("manual termination"), etc.</p>
                     * @return RunState <p>RUNNING state. CREATE("initialization"), QUEUED("Waiting"), PENDING("preparing"), RUNNING("RUNNING"), SKIPPED("skip RUNNING"), SUCCESS("successful"), FAILED("failure"), TERMINATING("TERMINATING"), TERMINATED("termination"), CANCELLED("manual termination"), etc.</p>
                     * 
                     */
                    std::string GetRunState() const;

                    /**
                     * 设置<p>RUNNING state. CREATE("initialization"), QUEUED("Waiting"), PENDING("preparing"), RUNNING("RUNNING"), SKIPPED("skip RUNNING"), SUCCESS("successful"), FAILED("failure"), TERMINATING("TERMINATING"), TERMINATED("termination"), CANCELLED("manual termination"), etc.</p>
                     * @param _runState <p>RUNNING state. CREATE("initialization"), QUEUED("Waiting"), PENDING("preparing"), RUNNING("RUNNING"), SKIPPED("skip RUNNING"), SUCCESS("successful"), FAILED("failure"), TERMINATING("TERMINATING"), TERMINATED("termination"), CANCELLED("manual termination"), etc.</p>
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
                     * 获取<p>Computational resource (resource group ID set of the task)</p>
                     * @return ResourceGroupIds <p>Computational resource (resource group ID set of the task)</p>
                     * 
                     */
                    std::vector<std::string> GetResourceGroupIds() const;

                    /**
                     * 设置<p>Computational resource (resource group ID set of the task)</p>
                     * @param _resourceGroupIds <p>Computational resource (resource group ID set of the task)</p>
                     * 
                     */
                    void SetResourceGroupIds(const std::vector<std::string>& _resourceGroupIds);

                    /**
                     * 判断参数 ResourceGroupIds 是否已赋值
                     * @return ResourceGroupIds 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdsHasBeenSet() const;

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
                     * 获取<p>Running parameter</p>
                     * @return WorkflowParams <p>Running parameter</p>
                     * 
                     */
                    std::string GetWorkflowParams() const;

                    /**
                     * 设置<p>Running parameter</p>
                     * @param _workflowParams <p>Running parameter</p>
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
                     * 获取<p>Workflow version ID</p>
                     * @return WorkflowVersionId <p>Workflow version ID</p>
                     * 
                     */
                    std::string GetWorkflowVersionId() const;

                    /**
                     * 设置<p>Workflow version ID</p>
                     * @param _workflowVersionId <p>Workflow version ID</p>
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
                     * 获取<p>Whether rerunning is supported for the current workflow</p>
                     * @return SupportRerun <p>Whether rerunning is supported for the current workflow</p>
                     * 
                     */
                    bool GetSupportRerun() const;

                    /**
                     * 设置<p>Whether rerunning is supported for the current workflow</p>
                     * @param _supportRerun <p>Whether rerunning is supported for the current workflow</p>
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
                     * 获取<p>Workflow run creation time. Unit: millisecond timestamp</p>
                     * @return CreateTime <p>Workflow run creation time. Unit: millisecond timestamp</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Workflow run creation time. Unit: millisecond timestamp</p>
                     * @param _createTime <p>Workflow run creation time. Unit: millisecond timestamp</p>
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
                     * 获取<p>Task scope in operation, Task ID list</p>
                     * @return SelectedTaskIds <p>Task scope in operation, Task ID list</p>
                     * 
                     */
                    std::vector<std::string> GetSelectedTaskIds() const;

                    /**
                     * 设置<p>Task scope in operation, Task ID list</p>
                     * @param _selectedTaskIds <p>Task scope in operation, Task ID list</p>
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
                     * 获取<p>Tag list.</p>
                     * @return LabelList <p>Tag list.</p>
                     * 
                     */
                    std::vector<LabelBrief> GetLabelList() const;

                    /**
                     * 设置<p>Tag list.</p>
                     * @param _labelList <p>Tag list.</p>
                     * 
                     */
                    void SetLabelList(const std::vector<LabelBrief>& _labelList);

                    /**
                     * 判断参数 LabelList 是否已赋值
                     * @return LabelList 是否已赋值
                     * 
                     */
                    bool LabelListHasBeenSet() const;

                    /**
                     * 获取<p>Parent workflow running ID [unique to nested workflow triggers]</p>
                     * @return ParentWorkflowRunId <p>Parent workflow running ID [unique to nested workflow triggers]</p>
                     * 
                     */
                    std::string GetParentWorkflowRunId() const;

                    /**
                     * 设置<p>Parent workflow running ID [unique to nested workflow triggers]</p>
                     * @param _parentWorkflowRunId <p>Parent workflow running ID [unique to nested workflow triggers]</p>
                     * 
                     */
                    void SetParentWorkflowRunId(const std::string& _parentWorkflowRunId);

                    /**
                     * 判断参数 ParentWorkflowRunId 是否已赋值
                     * @return ParentWorkflowRunId 是否已赋值
                     * 
                     */
                    bool ParentWorkflowRunIdHasBeenSet() const;

                    /**
                     * 获取<p>Parent workflow task running ID [unique to nested workflow triggers]</p>
                     * @return ParentWorkflowTaskRunId <p>Parent workflow task running ID [unique to nested workflow triggers]</p>
                     * 
                     */
                    std::string GetParentWorkflowTaskRunId() const;

                    /**
                     * 设置<p>Parent workflow task running ID [unique to nested workflow triggers]</p>
                     * @param _parentWorkflowTaskRunId <p>Parent workflow task running ID [unique to nested workflow triggers]</p>
                     * 
                     */
                    void SetParentWorkflowTaskRunId(const std::string& _parentWorkflowTaskRunId);

                    /**
                     * 判断参数 ParentWorkflowTaskRunId 是否已赋值
                     * @return ParentWorkflowTaskRunId 是否已赋值
                     * 
                     */
                    bool ParentWorkflowTaskRunIdHasBeenSet() const;

                    /**
                     * 获取<p>Parent workflow task run name [exclusive to nested workflow triggers]</p>
                     * @return ParentWorkflowTaskRunName <p>Parent workflow task run name [exclusive to nested workflow triggers]</p>
                     * 
                     */
                    std::string GetParentWorkflowTaskRunName() const;

                    /**
                     * 设置<p>Parent workflow task run name [exclusive to nested workflow triggers]</p>
                     * @param _parentWorkflowTaskRunName <p>Parent workflow task run name [exclusive to nested workflow triggers]</p>
                     * 
                     */
                    void SetParentWorkflowTaskRunName(const std::string& _parentWorkflowTaskRunName);

                    /**
                     * 判断参数 ParentWorkflowTaskRunName 是否已赋值
                     * @return ParentWorkflowTaskRunName 是否已赋值
                     * 
                     */
                    bool ParentWorkflowTaskRunNameHasBeenSet() const;

                    /**
                     * 获取<p>Authorization permission type<br>PERMISSION_TYPE_UNSPECIFIED: unspecified permission<br>MANAGE: management permission, including all operation permissions<br>RUN: execution permission, executable entity<br>VIEW: view permission, viewable entity content</p>
                     * @return Permission <p>Authorization permission type<br>PERMISSION_TYPE_UNSPECIFIED: unspecified permission<br>MANAGE: management permission, including all operation permissions<br>RUN: execution permission, executable entity<br>VIEW: view permission, viewable entity content</p>
                     * 
                     */
                    std::string GetPermission() const;

                    /**
                     * 设置<p>Authorization permission type<br>PERMISSION_TYPE_UNSPECIFIED: unspecified permission<br>MANAGE: management permission, including all operation permissions<br>RUN: execution permission, executable entity<br>VIEW: view permission, viewable entity content</p>
                     * @param _permission <p>Authorization permission type<br>PERMISSION_TYPE_UNSPECIFIED: unspecified permission<br>MANAGE: management permission, including all operation permissions<br>RUN: execution permission, executable entity<br>VIEW: view permission, viewable entity content</p>
                     * 
                     */
                    void SetPermission(const std::string& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                    /**
                     * 获取<p>Parameters filled in by the user during advanced execution of the workflow</p>
                     * @return AdvancedParameters <p>Parameters filled in by the user during advanced execution of the workflow</p>
                     * 
                     */
                    std::vector<AdvancedParameter> GetAdvancedParameters() const;

                    /**
                     * 设置<p>Parameters filled in by the user during advanced execution of the workflow</p>
                     * @param _advancedParameters <p>Parameters filled in by the user during advanced execution of the workflow</p>
                     * 
                     */
                    void SetAdvancedParameters(const std::vector<AdvancedParameter>& _advancedParameters);

                    /**
                     * 判断参数 AdvancedParameters 是否已赋值
                     * @return AdvancedParameters 是否已赋值
                     * 
                     */
                    bool AdvancedParametersHasBeenSet() const;

                    /**
                     * 获取<p>Scheduled dispatch time</p><p>Parameter format: timestamp in milliseconds (UTC)</p>
                     * @return ScheduledTime <p>Scheduled dispatch time</p><p>Parameter format: timestamp in milliseconds (UTC)</p>
                     * 
                     */
                    std::string GetScheduledTime() const;

                    /**
                     * 设置<p>Scheduled dispatch time</p><p>Parameter format: timestamp in milliseconds (UTC)</p>
                     * @param _scheduledTime <p>Scheduled dispatch time</p><p>Parameter format: timestamp in milliseconds (UTC)</p>
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
                     * <p>Root account ID</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Workflow name</p>
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

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
                     * <p>Workspace ID</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>Trigger mode: Scheduler, ManualTrigger, Event (for reference, see SchedulerTriggerType)</p>
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * <p>Start time in milliseconds.</p>
                     */
                    std::string m_runStartTime;
                    bool m_runStartTimeHasBeenSet;

                    /**
                     * <p>Start time of the pending state, unit: timestamp in milliseconds</p>
                     */
                    std::string m_pendingStartTime;
                    bool m_pendingStartTimeHasBeenSet;

                    /**
                     * <p>queue status start time, unit: timestamp in milliseconds</p>
                     */
                    std::string m_queueStartTime;
                    bool m_queueStartTimeHasBeenSet;

                    /**
                     * <p>Running end time, unit: timestamp in milliseconds</p>
                     */
                    std::string m_runEndTime;
                    bool m_runEndTimeHasBeenSet;

                    /**
                     * <p>End time. It has a value when running enters the end state. Unit: timestamp in milliseconds</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Running time, unit: seconds</p>
                     */
                    std::string m_runCostTime;
                    bool m_runCostTimeHasBeenSet;

                    /**
                     * <p>Concurrency queue time, in seconds</p>
                     */
                    std::string m_queueCostTime;
                    bool m_queueCostTimeHasBeenSet;

                    /**
                     * <p>Time spent waiting for resources, in seconds</p>
                     */
                    std::string m_pendingCostTime;
                    bool m_pendingCostTimeHasBeenSet;

                    /**
                     * <p>RUNNING state. CREATE("initialization"), QUEUED("Waiting"), PENDING("preparing"), RUNNING("RUNNING"), SKIPPED("skip RUNNING"), SUCCESS("successful"), FAILED("failure"), TERMINATING("TERMINATING"), TERMINATED("termination"), CANCELLED("manual termination"), etc.</p>
                     */
                    std::string m_runState;
                    bool m_runStateHasBeenSet;

                    /**
                     * <p>Computational resource (resource group ID set of the task)</p>
                     */
                    std::vector<std::string> m_resourceGroupIds;
                    bool m_resourceGroupIdsHasBeenSet;

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
                     * <p>Error code</p>
                     */
                    std::string m_errorCodeString;
                    bool m_errorCodeStringHasBeenSet;

                    /**
                     * <p>Running parameter</p>
                     */
                    std::string m_workflowParams;
                    bool m_workflowParamsHasBeenSet;

                    /**
                     * <p>Workflow version ID</p>
                     */
                    std::string m_workflowVersionId;
                    bool m_workflowVersionIdHasBeenSet;

                    /**
                     * <p>Whether rerunning is supported for the current workflow</p>
                     */
                    bool m_supportRerun;
                    bool m_supportRerunHasBeenSet;

                    /**
                     * <p>Workflow run creation time. Unit: millisecond timestamp</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Number of reruns.</p>
                     */
                    int64_t m_rerunTimes;
                    bool m_rerunTimesHasBeenSet;

                    /**
                     * <p>Task scope in operation, Task ID list</p>
                     */
                    std::vector<std::string> m_selectedTaskIds;
                    bool m_selectedTaskIdsHasBeenSet;

                    /**
                     * <p>Resource group information list.</p>
                     */
                    std::vector<ResourceGroupInfo> m_resourceGroupInfoList;
                    bool m_resourceGroupInfoListHasBeenSet;

                    /**
                     * <p>Tag list.</p>
                     */
                    std::vector<LabelBrief> m_labelList;
                    bool m_labelListHasBeenSet;

                    /**
                     * <p>Parent workflow running ID [unique to nested workflow triggers]</p>
                     */
                    std::string m_parentWorkflowRunId;
                    bool m_parentWorkflowRunIdHasBeenSet;

                    /**
                     * <p>Parent workflow task running ID [unique to nested workflow triggers]</p>
                     */
                    std::string m_parentWorkflowTaskRunId;
                    bool m_parentWorkflowTaskRunIdHasBeenSet;

                    /**
                     * <p>Parent workflow task run name [exclusive to nested workflow triggers]</p>
                     */
                    std::string m_parentWorkflowTaskRunName;
                    bool m_parentWorkflowTaskRunNameHasBeenSet;

                    /**
                     * <p>Authorization permission type<br>PERMISSION_TYPE_UNSPECIFIED: unspecified permission<br>MANAGE: management permission, including all operation permissions<br>RUN: execution permission, executable entity<br>VIEW: view permission, viewable entity content</p>
                     */
                    std::string m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * <p>Parameters filled in by the user during advanced execution of the workflow</p>
                     */
                    std::vector<AdvancedParameter> m_advancedParameters;
                    bool m_advancedParametersHasBeenSet;

                    /**
                     * <p>Scheduled dispatch time</p><p>Parameter format: timestamp in milliseconds (UTC)</p>
                     */
                    std::string m_scheduledTime;
                    bool m_scheduledTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWRUN_H_
