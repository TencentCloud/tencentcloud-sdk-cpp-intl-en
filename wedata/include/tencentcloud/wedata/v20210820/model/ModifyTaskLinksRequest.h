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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKLINKSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKLINKSREQUEST_H_

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
                * ModifyTaskLinks request structure.
                */
                class ModifyTaskLinksRequest : public AbstractModel
                {
                public:
                    ModifyTaskLinksRequest();
                    ~ModifyTaskLinksRequest() = default;
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
                     * 获取Parent Task ID
                     * @return TaskFrom Parent Task ID
                     * 
                     */
                    std::string GetTaskFrom() const;

                    /**
                     * 设置Parent Task ID
                     * @param _taskFrom Parent Task ID
                     * 
                     */
                    void SetTaskFrom(const std::string& _taskFrom);

                    /**
                     * 判断参数 TaskFrom 是否已赋值
                     * @return TaskFrom 是否已赋值
                     * 
                     */
                    bool TaskFromHasBeenSet() const;

                    /**
                     * 获取Subtask ID
                     * @return TaskTo Subtask ID
                     * 
                     */
                    std::string GetTaskTo() const;

                    /**
                     * 设置Subtask ID
                     * @param _taskTo Subtask ID
                     * 
                     */
                    void SetTaskTo(const std::string& _taskTo);

                    /**
                     * 判断参数 TaskTo 是否已赋值
                     * @return TaskTo 是否已赋值
                     * 
                     */
                    bool TaskToHasBeenSet() const;

                    /**
                     * 获取Subtask Workflow
                     * @return WorkflowId Subtask Workflow
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Subtask Workflow
                     * @param _workflowId Subtask Workflow
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
                     * 获取Parent Task Workflow
                     * @return RealFromWorkflowId Parent Task Workflow
                     * 
                     */
                    std::string GetRealFromWorkflowId() const;

                    /**
                     * 设置Parent Task Workflow
                     * @param _realFromWorkflowId Parent Task Workflow
                     * 
                     */
                    void SetRealFromWorkflowId(const std::string& _realFromWorkflowId);

                    /**
                     * 判断参数 RealFromWorkflowId 是否已赋值
                     * @return RealFromWorkflowId 是否已赋值
                     * 
                     */
                    bool RealFromWorkflowIdHasBeenSet() const;

                    /**
                     * 获取Dependency Relationship Between Parent and Child Tasks
                     * @return LinkDependencyType Dependency Relationship Between Parent and Child Tasks
                     * 
                     */
                    std::string GetLinkDependencyType() const;

                    /**
                     * 设置Dependency Relationship Between Parent and Child Tasks
                     * @param _linkDependencyType Dependency Relationship Between Parent and Child Tasks
                     * 
                     */
                    void SetLinkDependencyType(const std::string& _linkDependencyType);

                    /**
                     * 判断参数 LinkDependencyType 是否已赋值
                     * @return LinkDependencyType 是否已赋值
                     * 
                     */
                    bool LinkDependencyTypeHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Parent Task ID
                     */
                    std::string m_taskFrom;
                    bool m_taskFromHasBeenSet;

                    /**
                     * Subtask ID
                     */
                    std::string m_taskTo;
                    bool m_taskToHasBeenSet;

                    /**
                     * Subtask Workflow
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Parent Task Workflow
                     */
                    std::string m_realFromWorkflowId;
                    bool m_realFromWorkflowIdHasBeenSet;

                    /**
                     * Dependency Relationship Between Parent and Child Tasks
                     */
                    std::string m_linkDependencyType;
                    bool m_linkDependencyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKLINKSREQUEST_H_
