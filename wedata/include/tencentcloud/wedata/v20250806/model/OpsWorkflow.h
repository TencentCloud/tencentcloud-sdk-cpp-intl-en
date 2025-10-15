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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_OPSWORKFLOW_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_OPSWORKFLOW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Workflow list pagination details.
                */
                class OpsWorkflow : public AbstractModel
                {
                public:
                    OpsWorkflow();
                    ~OpsWorkflow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of Tasks
                     * @return TaskCount Number of Tasks
                     * 
                     */
                    uint64_t GetTaskCount() const;

                    /**
                     * 设置Number of Tasks
                     * @param _taskCount Number of Tasks
                     * 
                     */
                    void SetTaskCount(const uint64_t& _taskCount);

                    /**
                     * 判断参数 TaskCount 是否已赋值
                     * @return TaskCount 是否已赋值
                     * 
                     */
                    bool TaskCountHasBeenSet() const;

                    /**
                     * 获取folder name.

                     * @return FolderName folder name.

                     * 
                     */
                    std::string GetFolderName() const;

                    /**
                     * 设置folder name.

                     * @param _folderName folder name.

                     * 
                     */
                    void SetFolderName(const std::string& _folderName);

                    /**
                     * 判断参数 FolderName 是否已赋值
                     * @return FolderName 是否已赋值
                     * 
                     */
                    bool FolderNameHasBeenSet() const;

                    /**
                     * 获取Workflow folder id.
                     * @return FolderId Workflow folder id.
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置Workflow folder id.
                     * @param _folderId Workflow folder id.
                     * 
                     */
                    void SetFolderId(const std::string& _folderId);

                    /**
                     * 判断参数 FolderId 是否已赋值
                     * @return FolderId 是否已赋值
                     * 
                     */
                    bool FolderIdHasBeenSet() const;

                    /**
                     * 获取Workflow id.
                     * @return WorkflowId Workflow id.
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow id.
                     * @param _workflowId Workflow id.
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
                     * 获取Workflow name.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkflowName Workflow name.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置Workflow name.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workflowName Workflow name.

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Specifies the workflow type.
-cycle period.
-manual.
                     * @return WorkflowType Specifies the workflow type.
-cycle period.
-manual.
                     * 
                     */
                    std::string GetWorkflowType() const;

                    /**
                     * 设置Specifies the workflow type.
-cycle period.
-manual.
                     * @param _workflowType Specifies the workflow type.
-cycle period.
-manual.
                     * 
                     */
                    void SetWorkflowType(const std::string& _workflowType);

                    /**
                     * 判断参数 WorkflowType 是否已赋值
                     * @return WorkflowType 是否已赋值
                     * 
                     */
                    bool WorkflowTypeHasBeenSet() const;

                    /**
                     * 获取Workflow description.

                     * @return WorkflowDesc Workflow description.

                     * 
                     */
                    std::string GetWorkflowDesc() const;

                    /**
                     * 设置Workflow description.

                     * @param _workflowDesc Workflow description.

                     * 
                     */
                    void SetWorkflowDesc(const std::string& _workflowDesc);

                    /**
                     * 判断参数 WorkflowDesc 是否已赋值
                     * @return WorkflowDesc 是否已赋值
                     * 
                     */
                    bool WorkflowDescHasBeenSet() const;

                    /**
                     * 获取Responsible user id, multiple ';' separators.

                     * @return OwnerUin Responsible user id, multiple ';' separators.

                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置Responsible user id, multiple ';' separators.

                     * @param _ownerUin Responsible user id, multiple ';' separators.

                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

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
                     * 获取Project name.


                     * @return ProjectName Project name.


                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project name.


                     * @param _projectName Project name.


                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取Workflow Status

* ALL_RUNNING: All running (all workflows are in scheduling state)

* ALL_FREEZED: All paused

* ALL_STOPPTED: All stopped

* PART_RUNNING: Partially running (some workflows are running, others not)

* ALL_NO_RUNNING: All not scheduled

* ALL_INVALID: All invalid
                     * @return Status Workflow Status

* ALL_RUNNING: All running (all workflows are in scheduling state)

* ALL_FREEZED: All paused

* ALL_STOPPTED: All stopped

* PART_RUNNING: Partially running (some workflows are running, others not)

* ALL_NO_RUNNING: All not scheduled

* ALL_INVALID: All invalid
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Workflow Status

* ALL_RUNNING: All running (all workflows are in scheduling state)

* ALL_FREEZED: All paused

* ALL_STOPPTED: All stopped

* PART_RUNNING: Partially running (some workflows are running, others not)

* ALL_NO_RUNNING: All not scheduled

* ALL_INVALID: All invalid
                     * @param _status Workflow Status

* ALL_RUNNING: All running (all workflows are in scheduling state)

* ALL_FREEZED: All paused

* ALL_STOPPTED: All stopped

* PART_RUNNING: Partially running (some workflows are running, others not)

* ALL_NO_RUNNING: All not scheduled

* ALL_INVALID: All invalid
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Workflow creation time.

                     * @return CreateTime Workflow creation time.

                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Workflow creation time.

                     * @param _createTime Workflow creation time.

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
                     * 获取Latest update time. specifies development and production updates.
                     * @return UpdateTime Latest update time. specifies development and production updates.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Latest update time. specifies development and production updates.
                     * @param _updateTime Latest update time. specifies development and production updates.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Last updated by, including development and production updates.
                     * @return UpdateUserUin Last updated by, including development and production updates.
                     * 
                     */
                    std::string GetUpdateUserUin() const;

                    /**
                     * 设置Last updated by, including development and production updates.
                     * @param _updateUserUin Last updated by, including development and production updates.
                     * 
                     */
                    void SetUpdateUserUin(const std::string& _updateUserUin);

                    /**
                     * 判断参数 UpdateUserUin 是否已赋值
                     * @return UpdateUserUin 是否已赋值
                     * 
                     */
                    bool UpdateUserUinHasBeenSet() const;

                private:

                    /**
                     * Number of Tasks
                     */
                    uint64_t m_taskCount;
                    bool m_taskCountHasBeenSet;

                    /**
                     * folder name.

                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                    /**
                     * Workflow folder id.
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * Workflow id.
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Workflow name.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * Specifies the workflow type.
-cycle period.
-manual.
                     */
                    std::string m_workflowType;
                    bool m_workflowTypeHasBeenSet;

                    /**
                     * Workflow description.

                     */
                    std::string m_workflowDesc;
                    bool m_workflowDescHasBeenSet;

                    /**
                     * Responsible user id, multiple ';' separators.

                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Project name.


                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Workflow Status

* ALL_RUNNING: All running (all workflows are in scheduling state)

* ALL_FREEZED: All paused

* ALL_STOPPTED: All stopped

* PART_RUNNING: Partially running (some workflows are running, others not)

* ALL_NO_RUNNING: All not scheduled

* ALL_INVALID: All invalid
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Workflow creation time.

                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Latest update time. specifies development and production updates.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Last updated by, including development and production updates.
                     */
                    std::string m_updateUserUin;
                    bool m_updateUserUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_OPSWORKFLOW_H_
