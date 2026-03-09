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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_KILLTRIGGERWORKFLOWRUNSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_KILLTRIGGERWORKFLOWRUNSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * KillTriggerWorkflowRuns request structure.
                */
                class KillTriggerWorkflowRunsRequest : public AbstractModel
                {
                public:
                    KillTriggerWorkflowRunsRequest();
                    ~KillTriggerWorkflowRunsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID.	
                     * @return ProjectId Project ID.	
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.	
                     * @param _projectId Project ID.	
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
                     * @return WorkflowId Workflow ID.
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow ID.
                     * @param _workflowId Workflow ID.
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
                     * 获取Specifies the workflow execution ID to be stopped.
                     * @return WorkflowExecutionIdList Specifies the workflow execution ID to be stopped.
                     * 
                     */
                    std::vector<std::string> GetWorkflowExecutionIdList() const;

                    /**
                     * 设置Specifies the workflow execution ID to be stopped.
                     * @param _workflowExecutionIdList Specifies the workflow execution ID to be stopped.
                     * 
                     */
                    void SetWorkflowExecutionIdList(const std::vector<std::string>& _workflowExecutionIdList);

                    /**
                     * 判断参数 WorkflowExecutionIdList 是否已赋值
                     * @return WorkflowExecutionIdList 是否已赋值
                     * 
                     */
                    bool WorkflowExecutionIdListHasBeenSet() const;

                    /**
                     * 获取When specifying an empty workflow run, whether all terminate running workflow execution.	
                     * @return All When specifying an empty workflow run, whether all terminate running workflow execution.	
                     * 
                     */
                    bool GetAll() const;

                    /**
                     * 设置When specifying an empty workflow run, whether all terminate running workflow execution.	
                     * @param _all When specifying an empty workflow run, whether all terminate running workflow execution.	
                     * 
                     */
                    void SetAll(const bool& _all);

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     * 
                     */
                    bool AllHasBeenSet() const;

                    /**
                     * 获取Whether to stop only waiting workflow runs when specifying empty workflow runs.
                     * @return Pending Whether to stop only waiting workflow runs when specifying empty workflow runs.
                     * 
                     */
                    bool GetPending() const;

                    /**
                     * 设置Whether to stop only waiting workflow runs when specifying empty workflow runs.
                     * @param _pending Whether to stop only waiting workflow runs when specifying empty workflow runs.
                     * 
                     */
                    void SetPending(const bool& _pending);

                    /**
                     * 判断参数 Pending 是否已赋值
                     * @return Pending 是否已赋值
                     * 
                     */
                    bool PendingHasBeenSet() const;

                private:

                    /**
                     * Project ID.	
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Workflow ID.
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Specifies the workflow execution ID to be stopped.
                     */
                    std::vector<std::string> m_workflowExecutionIdList;
                    bool m_workflowExecutionIdListHasBeenSet;

                    /**
                     * When specifying an empty workflow run, whether all terminate running workflow execution.	
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * Whether to stop only waiting workflow runs when specifying empty workflow runs.
                     */
                    bool m_pending;
                    bool m_pendingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_KILLTRIGGERWORKFLOWRUNSREQUEST_H_
