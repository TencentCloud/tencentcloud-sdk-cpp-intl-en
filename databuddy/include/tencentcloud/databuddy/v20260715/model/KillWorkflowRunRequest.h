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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_KILLWORKFLOWRUNREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_KILLWORKFLOWRUNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * KillWorkflowRun request structure.
                */
                class KillWorkflowRunRequest : public AbstractModel
                {
                public:
                    KillWorkflowRunRequest();
                    ~KillWorkflowRunRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Workspace ID, which can be obtained through ListWorkspaces. Required.</p>
                     * @return WorkspaceId <p>Workspace ID, which can be obtained through ListWorkspaces. Required.</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>Workspace ID, which can be obtained through ListWorkspaces. Required.</p>
                     * @param _workspaceId <p>Workspace ID, which can be obtained through ListWorkspaces. Required.</p>
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
                     * 获取<p>Workflow ID. You can obtain it through ListWorkflows. Required</p>
                     * @return WorkflowId <p>Workflow ID. You can obtain it through ListWorkflows. Required</p>
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置<p>Workflow ID. You can obtain it through ListWorkflows. Required</p>
                     * @param _workflowId <p>Workflow ID. You can obtain it through ListWorkflows. Required</p>
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
                     * 获取<p>List of workflow running IDs pending termination. You can obtain it through ListWorkflowRuns</p>
                     * @return WorkflowRunIds <p>List of workflow running IDs pending termination. You can obtain it through ListWorkflowRuns</p>
                     * 
                     */
                    std::vector<std::string> GetWorkflowRunIds() const;

                    /**
                     * 设置<p>List of workflow running IDs pending termination. You can obtain it through ListWorkflowRuns</p>
                     * @param _workflowRunIds <p>List of workflow running IDs pending termination. You can obtain it through ListWorkflowRuns</p>
                     * 
                     */
                    void SetWorkflowRunIds(const std::vector<std::string>& _workflowRunIds);

                    /**
                     * 判断参数 WorkflowRunIds 是否已赋值
                     * @return WorkflowRunIds 是否已赋值
                     * 
                     */
                    bool WorkflowRunIdsHasBeenSet() const;

                    /**
                     * 获取<p>Whether to terminate all running instances in the workflow that have not entered the final state. Optional. false by default.</p>
                     * @return KillAllRuns <p>Whether to terminate all running instances in the workflow that have not entered the final state. Optional. false by default.</p>
                     * 
                     */
                    bool GetKillAllRuns() const;

                    /**
                     * 设置<p>Whether to terminate all running instances in the workflow that have not entered the final state. Optional. false by default.</p>
                     * @param _killAllRuns <p>Whether to terminate all running instances in the workflow that have not entered the final state. Optional. false by default.</p>
                     * 
                     */
                    void SetKillAllRuns(const bool& _killAllRuns);

                    /**
                     * 判断参数 KillAllRuns 是否已赋值
                     * @return KillAllRuns 是否已赋值
                     * 
                     */
                    bool KillAllRunsHasBeenSet() const;

                    /**
                     * 获取<p>Whether to terminate only the running that is in the Waiting (Pending) state. Optional. false by default</p>
                     * @return OnlyKillPendingRuns <p>Whether to terminate only the running that is in the Waiting (Pending) state. Optional. false by default</p>
                     * 
                     */
                    bool GetOnlyKillPendingRuns() const;

                    /**
                     * 设置<p>Whether to terminate only the running that is in the Waiting (Pending) state. Optional. false by default</p>
                     * @param _onlyKillPendingRuns <p>Whether to terminate only the running that is in the Waiting (Pending) state. Optional. false by default</p>
                     * 
                     */
                    void SetOnlyKillPendingRuns(const bool& _onlyKillPendingRuns);

                    /**
                     * 判断参数 OnlyKillPendingRuns 是否已赋值
                     * @return OnlyKillPendingRuns 是否已赋值
                     * 
                     */
                    bool OnlyKillPendingRunsHasBeenSet() const;

                private:

                    /**
                     * <p>Workspace ID, which can be obtained through ListWorkspaces. Required.</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>Workflow ID. You can obtain it through ListWorkflows. Required</p>
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * <p>List of workflow running IDs pending termination. You can obtain it through ListWorkflowRuns</p>
                     */
                    std::vector<std::string> m_workflowRunIds;
                    bool m_workflowRunIdsHasBeenSet;

                    /**
                     * <p>Whether to terminate all running instances in the workflow that have not entered the final state. Optional. false by default.</p>
                     */
                    bool m_killAllRuns;
                    bool m_killAllRunsHasBeenSet;

                    /**
                     * <p>Whether to terminate only the running that is in the Waiting (Pending) state. Optional. false by default</p>
                     */
                    bool m_onlyKillPendingRuns;
                    bool m_onlyKillPendingRunsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_KILLWORKFLOWRUNREQUEST_H_
