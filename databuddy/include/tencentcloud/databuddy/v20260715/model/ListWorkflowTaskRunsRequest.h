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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKFLOWTASKRUNSREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKFLOWTASKRUNSREQUEST_H_

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
                * ListWorkflowTaskRuns request structure.
                */
                class ListWorkflowTaskRunsRequest : public AbstractModel
                {
                public:
                    ListWorkflowTaskRunsRequest();
                    ~ListWorkflowTaskRunsRequest() = default;
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
                     * 获取<p>Task ID, which can be obtained through the ListWorkflowTasks API. Optional, exact match. Pass at least one of this parameter and WorkflowRunId: if only TaskId is passed, all execution history of the task is queried.</p>
                     * @return TaskId <p>Task ID, which can be obtained through the ListWorkflowTasks API. Optional, exact match. Pass at least one of this parameter and WorkflowRunId: if only TaskId is passed, all execution history of the task is queried.</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>Task ID, which can be obtained through the ListWorkflowTasks API. Optional, exact match. Pass at least one of this parameter and WorkflowRunId: if only TaskId is passed, all execution history of the task is queried.</p>
                     * @param _taskId <p>Task ID, which can be obtained through the ListWorkflowTasks API. Optional, exact match. Pass at least one of this parameter and WorkflowRunId: if only TaskId is passed, all execution history of the task is queried.</p>
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
                     * 获取<p>Workflow run ID, which can be obtained through ListWorkflowRuns. Optional, exact match. Pass at least one of this parameter and TaskId: if only WorkflowRunId is passed, all task runs under this workflow run are queried.</p>
                     * @return WorkflowRunId <p>Workflow run ID, which can be obtained through ListWorkflowRuns. Optional, exact match. Pass at least one of this parameter and TaskId: if only WorkflowRunId is passed, all task runs under this workflow run are queried.</p>
                     * 
                     */
                    std::string GetWorkflowRunId() const;

                    /**
                     * 设置<p>Workflow run ID, which can be obtained through ListWorkflowRuns. Optional, exact match. Pass at least one of this parameter and TaskId: if only WorkflowRunId is passed, all task runs under this workflow run are queried.</p>
                     * @param _workflowRunId <p>Workflow run ID, which can be obtained through ListWorkflowRuns. Optional, exact match. Pass at least one of this parameter and TaskId: if only WorkflowRunId is passed, all task runs under this workflow run are queried.</p>
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
                     * 获取<p>Page number. Value range: starts from 1. Optional. Default value: 1.</p>
                     * @return PageNumber <p>Page number. Value range: starts from 1. Optional. Default value: 1.</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>Page number. Value range: starts from 1. Optional. Default value: 1.</p>
                     * @param _pageNumber <p>Page number. Value range: starts from 1. Optional. Default value: 1.</p>
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取<p>Size per page. Optional. Default: 10. Value range: [10, 200]</p>
                     * @return PageSize <p>Size per page. Optional. Default: 10. Value range: [10, 200]</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>Size per page. Optional. Default: 10. Value range: [10, 200]</p>
                     * @param _pageSize <p>Size per page. Optional. Default: 10. Value range: [10, 200]</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * <p>Workspace ID, which can be obtained through ListWorkspaces. Required.</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>Task ID, which can be obtained through the ListWorkflowTasks API. Optional, exact match. Pass at least one of this parameter and WorkflowRunId: if only TaskId is passed, all execution history of the task is queried.</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Workflow run ID, which can be obtained through ListWorkflowRuns. Optional, exact match. Pass at least one of this parameter and TaskId: if only WorkflowRunId is passed, all task runs under this workflow run are queried.</p>
                     */
                    std::string m_workflowRunId;
                    bool m_workflowRunIdHasBeenSet;

                    /**
                     * <p>Page number. Value range: starts from 1. Optional. Default value: 1.</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>Size per page. Optional. Default: 10. Value range: [10, 200]</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKFLOWTASKRUNSREQUEST_H_
