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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETWORKFLOWRUNREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETWORKFLOWRUNREQUEST_H_

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
                * GetWorkflowRun request structure.
                */
                class GetWorkflowRunRequest : public AbstractModel
                {
                public:
                    GetWorkflowRunRequest();
                    ~GetWorkflowRunRequest() = default;
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
                     * 获取<p>Workflow running ID, which can be obtained through ListWorkflowRuns. Required</p>
                     * @return WorkflowRunId <p>Workflow running ID, which can be obtained through ListWorkflowRuns. Required</p>
                     * 
                     */
                    std::string GetWorkflowRunId() const;

                    /**
                     * 设置<p>Workflow running ID, which can be obtained through ListWorkflowRuns. Required</p>
                     * @param _workflowRunId <p>Workflow running ID, which can be obtained through ListWorkflowRuns. Required</p>
                     * 
                     */
                    void SetWorkflowRunId(const std::string& _workflowRunId);

                    /**
                     * 判断参数 WorkflowRunId 是否已赋值
                     * @return WorkflowRunId 是否已赋值
                     * 
                     */
                    bool WorkflowRunIdHasBeenSet() const;

                private:

                    /**
                     * <p>Workspace ID, which can be obtained through ListWorkspaces. Required</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>Workflow running ID, which can be obtained through ListWorkflowRuns. Required</p>
                     */
                    std::string m_workflowRunId;
                    bool m_workflowRunIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETWORKFLOWRUNREQUEST_H_
