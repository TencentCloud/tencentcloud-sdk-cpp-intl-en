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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETWORKFLOWTASKRUNREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETWORKFLOWTASKRUNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/InnerWorkflowTaskRunListOption.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * GetWorkflowTaskRun request structure.
                */
                class GetWorkflowTaskRunRequest : public AbstractModel
                {
                public:
                    GetWorkflowTaskRunRequest();
                    ~GetWorkflowTaskRunRequest() = default;
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
                     * 获取<p>Task running ID, which can be obtained through ListWorkflowTaskRuns. Required</p>
                     * @return WorkflowTaskRunId <p>Task running ID, which can be obtained through ListWorkflowTaskRuns. Required</p>
                     * 
                     */
                    std::string GetWorkflowTaskRunId() const;

                    /**
                     * 设置<p>Task running ID, which can be obtained through ListWorkflowTaskRuns. Required</p>
                     * @param _workflowTaskRunId <p>Task running ID, which can be obtained through ListWorkflowTaskRuns. Required</p>
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
                     * 获取<p>Built-in workflow task run list options (for FOR_EACH task use only). Optional</p>
                     * @return InnerWorkflowTaskRunListOption <p>Built-in workflow task run list options (for FOR_EACH task use only). Optional</p>
                     * 
                     */
                    InnerWorkflowTaskRunListOption GetInnerWorkflowTaskRunListOption() const;

                    /**
                     * 设置<p>Built-in workflow task run list options (for FOR_EACH task use only). Optional</p>
                     * @param _innerWorkflowTaskRunListOption <p>Built-in workflow task run list options (for FOR_EACH task use only). Optional</p>
                     * 
                     */
                    void SetInnerWorkflowTaskRunListOption(const InnerWorkflowTaskRunListOption& _innerWorkflowTaskRunListOption);

                    /**
                     * 判断参数 InnerWorkflowTaskRunListOption 是否已赋值
                     * @return InnerWorkflowTaskRunListOption 是否已赋值
                     * 
                     */
                    bool InnerWorkflowTaskRunListOptionHasBeenSet() const;

                private:

                    /**
                     * <p>Workspace ID, which can be obtained through ListWorkspaces. Required</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>Task running ID, which can be obtained through ListWorkflowTaskRuns. Required</p>
                     */
                    std::string m_workflowTaskRunId;
                    bool m_workflowTaskRunIdHasBeenSet;

                    /**
                     * <p>Built-in workflow task run list options (for FOR_EACH task use only). Optional</p>
                     */
                    InnerWorkflowTaskRunListOption m_innerWorkflowTaskRunListOption;
                    bool m_innerWorkflowTaskRunListOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETWORKFLOWTASKRUNREQUEST_H_
