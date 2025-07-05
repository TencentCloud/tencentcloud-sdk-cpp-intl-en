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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MOVETASKSTOFOLDERREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MOVETASKSTOFOLDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * MoveTasksToFolder request structure.
                */
                class MoveTasksToFolderRequest : public AbstractModel
                {
                public:
                    MoveTasksToFolderRequest();
                    ~MoveTasksToFolderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
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
                     * 获取Workflow ID
                     * @return WorkflowId Workflow ID
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow ID
                     * @param _workflowId Workflow ID
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
                     * 获取Task Folder ID
                     * @return TaskFolderId Task Folder ID
                     * 
                     */
                    std::string GetTaskFolderId() const;

                    /**
                     * 设置Task Folder ID
                     * @param _taskFolderId Task Folder ID
                     * 
                     */
                    void SetTaskFolderId(const std::string& _taskFolderId);

                    /**
                     * 判断参数 TaskFolderId 是否已赋值
                     * @return TaskFolderId 是否已赋值
                     * 
                     */
                    bool TaskFolderIdHasBeenSet() const;

                    /**
                     * 获取Task ID
                     * @return TaskIds Task ID
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置Task ID
                     * @param _taskIds Task ID
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
                     * 获取Virtual Task ID
                     * @return VirtualTaskIds Virtual Task ID
                     * 
                     */
                    std::vector<std::string> GetVirtualTaskIds() const;

                    /**
                     * 设置Virtual Task ID
                     * @param _virtualTaskIds Virtual Task ID
                     * 
                     */
                    void SetVirtualTaskIds(const std::vector<std::string>& _virtualTaskIds);

                    /**
                     * 判断参数 VirtualTaskIds 是否已赋值
                     * @return VirtualTaskIds 是否已赋值
                     * 
                     */
                    bool VirtualTaskIdsHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Workflow ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Task Folder ID
                     */
                    std::string m_taskFolderId;
                    bool m_taskFolderIdHasBeenSet;

                    /**
                     * Task ID
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * Virtual Task ID
                     */
                    std::vector<std::string> m_virtualTaskIds;
                    bool m_virtualTaskIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MOVETASKSTOFOLDERREQUEST_H_
