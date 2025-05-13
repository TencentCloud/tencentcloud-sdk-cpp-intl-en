/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKLINKSDSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKLINKSDSREQUEST_H_

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
                * ModifyTaskLinksDs request structure.
                */
                class ModifyTaskLinksDsRequest : public AbstractModel
                {
                public:
                    ModifyTaskLinksDsRequest();
                    ~ModifyTaskLinksDsRequest() = default;
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
                     * 获取Parent task Workflow
                     * @return RealFromWorkflowId Parent task Workflow
                     * 
                     */
                    std::string GetRealFromWorkflowId() const;

                    /**
                     * 设置Parent task Workflow
                     * @param _realFromWorkflowId Parent task Workflow
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
                     * 获取Request source, WEB frontend; CLIENT CLIENT.
                     * @return RequestFromSource Request source, WEB frontend; CLIENT CLIENT.
                     * 
                     */
                    std::string GetRequestFromSource() const;

                    /**
                     * 设置Request source, WEB frontend; CLIENT CLIENT.
                     * @param _requestFromSource Request source, WEB frontend; CLIENT CLIENT.
                     * 
                     */
                    void SetRequestFromSource(const std::string& _requestFromSource);

                    /**
                     * 判断参数 RequestFromSource 是否已赋值
                     * @return RequestFromSource 是否已赋值
                     * 
                     */
                    bool RequestFromSourceHasBeenSet() const;

                    /**
                     * 获取Dependency relationship between parent and child tasks.
Enable all instances that normally depend on the parent task.
    normal_all(1),
normal dependent on parent task first one.
Specifies the normal dependent on parent task, which is the last one (3).
Valid values: normal, any one of dependent on parent tasks (4).
normal dependent on parent task a specified one.
self-Dependency, cannot use.

Invalid dependent parent task for all instances. enable (forward dependency for tomorrow).
    non_normal_all_forward(11),
non-normal dependent on parent task. first one forward (12).
non-normal dependent on parent task, last one.
Not normal, dependent on parent task, any one.
Specifies a non-normal task that depends on the parent task and designates one.

Specifies that all instances dependent on a non-normal parent task are enabled (backward dependency on yesterday).
    non_normal_all_backward(21),
non-normal dependent on parent task. first one backward (22).
Not normal dependent on parent task last one backward.
non-normal dependent on parent task, any one.
Specifies a non-normal task that depends on the parent task.
                     * @return LinkDependencyType Dependency relationship between parent and child tasks.
Enable all instances that normally depend on the parent task.
    normal_all(1),
normal dependent on parent task first one.
Specifies the normal dependent on parent task, which is the last one (3).
Valid values: normal, any one of dependent on parent tasks (4).
normal dependent on parent task a specified one.
self-Dependency, cannot use.

Invalid dependent parent task for all instances. enable (forward dependency for tomorrow).
    non_normal_all_forward(11),
non-normal dependent on parent task. first one forward (12).
non-normal dependent on parent task, last one.
Not normal, dependent on parent task, any one.
Specifies a non-normal task that depends on the parent task and designates one.

Specifies that all instances dependent on a non-normal parent task are enabled (backward dependency on yesterday).
    non_normal_all_backward(21),
non-normal dependent on parent task. first one backward (22).
Not normal dependent on parent task last one backward.
non-normal dependent on parent task, any one.
Specifies a non-normal task that depends on the parent task.
                     * 
                     */
                    std::string GetLinkDependencyType() const;

                    /**
                     * 设置Dependency relationship between parent and child tasks.
Enable all instances that normally depend on the parent task.
    normal_all(1),
normal dependent on parent task first one.
Specifies the normal dependent on parent task, which is the last one (3).
Valid values: normal, any one of dependent on parent tasks (4).
normal dependent on parent task a specified one.
self-Dependency, cannot use.

Invalid dependent parent task for all instances. enable (forward dependency for tomorrow).
    non_normal_all_forward(11),
non-normal dependent on parent task. first one forward (12).
non-normal dependent on parent task, last one.
Not normal, dependent on parent task, any one.
Specifies a non-normal task that depends on the parent task and designates one.

Specifies that all instances dependent on a non-normal parent task are enabled (backward dependency on yesterday).
    non_normal_all_backward(21),
non-normal dependent on parent task. first one backward (22).
Not normal dependent on parent task last one backward.
non-normal dependent on parent task, any one.
Specifies a non-normal task that depends on the parent task.
                     * @param _linkDependencyType Dependency relationship between parent and child tasks.
Enable all instances that normally depend on the parent task.
    normal_all(1),
normal dependent on parent task first one.
Specifies the normal dependent on parent task, which is the last one (3).
Valid values: normal, any one of dependent on parent tasks (4).
normal dependent on parent task a specified one.
self-Dependency, cannot use.

Invalid dependent parent task for all instances. enable (forward dependency for tomorrow).
    non_normal_all_forward(11),
non-normal dependent on parent task. first one forward (12).
non-normal dependent on parent task, last one.
Not normal, dependent on parent task, any one.
Specifies a non-normal task that depends on the parent task and designates one.

Specifies that all instances dependent on a non-normal parent task are enabled (backward dependency on yesterday).
    non_normal_all_backward(21),
non-normal dependent on parent task. first one backward (22).
Not normal dependent on parent task last one backward.
non-normal dependent on parent task, any one.
Specifies a non-normal task that depends on the parent task.
                     * 
                     */
                    void SetLinkDependencyType(const std::string& _linkDependencyType);

                    /**
                     * 判断参数 LinkDependencyType 是否已赋值
                     * @return LinkDependencyType 是否已赋值
                     * 
                     */
                    bool LinkDependencyTypeHasBeenSet() const;

                    /**
                     * 获取Additional attribute information such as branch node and merge node information.
                     * @return LinkExt Additional attribute information such as branch node and merge node information.
                     * 
                     */
                    std::string GetLinkExt() const;

                    /**
                     * 设置Additional attribute information such as branch node and merge node information.
                     * @param _linkExt Additional attribute information such as branch node and merge node information.
                     * 
                     */
                    void SetLinkExt(const std::string& _linkExt);

                    /**
                     * 判断参数 LinkExt 是否已赋值
                     * @return LinkExt 是否已赋值
                     * 
                     */
                    bool LinkExtHasBeenSet() const;

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
                     * Parent task Workflow
                     */
                    std::string m_realFromWorkflowId;
                    bool m_realFromWorkflowIdHasBeenSet;

                    /**
                     * Request source, WEB frontend; CLIENT CLIENT.
                     */
                    std::string m_requestFromSource;
                    bool m_requestFromSourceHasBeenSet;

                    /**
                     * Dependency relationship between parent and child tasks.
Enable all instances that normally depend on the parent task.
    normal_all(1),
normal dependent on parent task first one.
Specifies the normal dependent on parent task, which is the last one (3).
Valid values: normal, any one of dependent on parent tasks (4).
normal dependent on parent task a specified one.
self-Dependency, cannot use.

Invalid dependent parent task for all instances. enable (forward dependency for tomorrow).
    non_normal_all_forward(11),
non-normal dependent on parent task. first one forward (12).
non-normal dependent on parent task, last one.
Not normal, dependent on parent task, any one.
Specifies a non-normal task that depends on the parent task and designates one.

Specifies that all instances dependent on a non-normal parent task are enabled (backward dependency on yesterday).
    non_normal_all_backward(21),
non-normal dependent on parent task. first one backward (22).
Not normal dependent on parent task last one backward.
non-normal dependent on parent task, any one.
Specifies a non-normal task that depends on the parent task.
                     */
                    std::string m_linkDependencyType;
                    bool m_linkDependencyTypeHasBeenSet;

                    /**
                     * Additional attribute information such as branch node and merge node information.
                     */
                    std::string m_linkExt;
                    bool m_linkExtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKLINKSDSREQUEST_H_
