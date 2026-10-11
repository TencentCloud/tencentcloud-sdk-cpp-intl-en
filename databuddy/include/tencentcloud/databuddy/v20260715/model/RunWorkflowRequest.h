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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_RUNWORKFLOWREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_RUNWORKFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/TaskSchedulingParameterBrief.h>
#include <tencentcloud/databuddy/v20260715/model/ScheduledTimeConfig.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * RunWorkflow request structure.
                */
                class RunWorkflowRequest : public AbstractModel
                {
                public:
                    RunWorkflowRequest();
                    ~RunWorkflowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Workspace ID, which can be obtained through ListWorkspaces. Required</p>
                     * @return WorkspaceId <p>Workspace ID, which can be obtained through ListWorkspaces. Required</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>Workspace ID, which can be obtained through ListWorkspaces. Required</p>
                     * @param _workspaceId <p>Workspace ID, which can be obtained through ListWorkspaces. Required</p>
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
                     * 获取<p>Workflow ID, which can be obtained through ListWorkflows. Required</p>
                     * @return WorkflowId <p>Workflow ID, which can be obtained through ListWorkflows. Required</p>
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置<p>Workflow ID, which can be obtained through ListWorkflows. Required</p>
                     * @param _workflowId <p>Workflow ID, which can be obtained through ListWorkflows. Required</p>
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
                     * 获取<p>Running type. Required. Value: 1 ordinary, 2 advanced running</p>
                     * @return RunType <p>Running type. Required. Value: 1 ordinary, 2 advanced running</p>
                     * 
                     */
                    int64_t GetRunType() const;

                    /**
                     * 设置<p>Running type. Required. Value: 1 ordinary, 2 advanced running</p>
                     * @param _runType <p>Running type. Required. Value: 1 ordinary, 2 advanced running</p>
                     * 
                     */
                    void SetRunType(const int64_t& _runType);

                    /**
                     * 判断参数 RunType 是否已赋值
                     * @return RunType 是否已赋值
                     * 
                     */
                    bool RunTypeHasBeenSet() const;

                    /**
                     * 获取<p>Custom running parameter filled in when the running type is advanced running</p>
                     * @return AdvancedParams <p>Custom running parameter filled in when the running type is advanced running</p>
                     * 
                     */
                    std::vector<TaskSchedulingParameterBrief> GetAdvancedParams() const;

                    /**
                     * 设置<p>Custom running parameter filled in when the running type is advanced running</p>
                     * @param _advancedParams <p>Custom running parameter filled in when the running type is advanced running</p>
                     * 
                     */
                    void SetAdvancedParams(const std::vector<TaskSchedulingParameterBrief>& _advancedParams);

                    /**
                     * 判断参数 AdvancedParams 是否已赋值
                     * @return AdvancedParams 是否已赋值
                     * 
                     */
                    bool AdvancedParamsHasBeenSet() const;

                    /**
                     * 获取<p>This time, the specified task ID set needs to be run, which can be obtained through ListWorkflowTasks. If not passed, all tasks under the workflow run by default.</p>
                     * @return TaskIds <p>This time, the specified task ID set needs to be run, which can be obtained through ListWorkflowTasks. If not passed, all tasks under the workflow run by default.</p>
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置<p>This time, the specified task ID set needs to be run, which can be obtained through ListWorkflowTasks. If not passed, all tasks under the workflow run by default.</p>
                     * @param _taskIds <p>This time, the specified task ID set needs to be run, which can be obtained through ListWorkflowTasks. If not passed, all tasks under the workflow run by default.</p>
                     * 
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取<p>Idempotency token. Optional. Duplicate requests with the same token trigger only once</p>
                     * @return IdempotencyToken <p>Idempotency token. Optional. Duplicate requests with the same token trigger only once</p>
                     * 
                     */
                    std::string GetIdempotencyToken() const;

                    /**
                     * 设置<p>Idempotency token. Optional. Duplicate requests with the same token trigger only once</p>
                     * @param _idempotencyToken <p>Idempotency token. Optional. Duplicate requests with the same token trigger only once</p>
                     * 
                     */
                    void SetIdempotencyToken(const std::string& _idempotencyToken);

                    /**
                     * 判断参数 IdempotencyToken 是否已赋值
                     * @return IdempotencyToken 是否已赋值
                     * 
                     */
                    bool IdempotencyTokenHasBeenSet() const;

                    /**
                     * 获取<p>Scheduled dispatch time list configuration</p>
                     * @return ScheduledTimeConfig <p>Scheduled dispatch time list configuration</p>
                     * 
                     */
                    ScheduledTimeConfig GetScheduledTimeConfig() const;

                    /**
                     * 设置<p>Scheduled dispatch time list configuration</p>
                     * @param _scheduledTimeConfig <p>Scheduled dispatch time list configuration</p>
                     * 
                     */
                    void SetScheduledTimeConfig(const ScheduledTimeConfig& _scheduledTimeConfig);

                    /**
                     * 判断参数 ScheduledTimeConfig 是否已赋值
                     * @return ScheduledTimeConfig 是否已赋值
                     * 
                     */
                    bool ScheduledTimeConfigHasBeenSet() const;

                private:

                    /**
                     * <p>Workspace ID, which can be obtained through ListWorkspaces. Required</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>Workflow ID, which can be obtained through ListWorkflows. Required</p>
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * <p>Running type. Required. Value: 1 ordinary, 2 advanced running</p>
                     */
                    int64_t m_runType;
                    bool m_runTypeHasBeenSet;

                    /**
                     * <p>Custom running parameter filled in when the running type is advanced running</p>
                     */
                    std::vector<TaskSchedulingParameterBrief> m_advancedParams;
                    bool m_advancedParamsHasBeenSet;

                    /**
                     * <p>This time, the specified task ID set needs to be run, which can be obtained through ListWorkflowTasks. If not passed, all tasks under the workflow run by default.</p>
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * <p>Idempotency token. Optional. Duplicate requests with the same token trigger only once</p>
                     */
                    std::string m_idempotencyToken;
                    bool m_idempotencyTokenHasBeenSet;

                    /**
                     * <p>Scheduled dispatch time list configuration</p>
                     */
                    ScheduledTimeConfig m_scheduledTimeConfig;
                    bool m_scheduledTimeConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_RUNWORKFLOWREQUEST_H_
