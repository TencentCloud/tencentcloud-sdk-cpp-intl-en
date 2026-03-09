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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERWORKFLOWBRIEF_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERWORKFLOWBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/WorkflowTriggerConfig.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Workflow summary information.
                */
                class TriggerWorkflowBrief : public AbstractModel
                {
                public:
                    TriggerWorkflowBrief();
                    ~TriggerWorkflowBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectId Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectId Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Task ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkflowId Task ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Task ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workflowId Task ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of Tasks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskCount Number of Tasks
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTaskCount() const;

                    /**
                     * 设置Number of Tasks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskCount Number of Tasks
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Folder ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FolderId Folder ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置Folder ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _folderId Folder ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Folder name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FolderName Folder name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFolderName() const;

                    /**
                     * 设置Folder name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _folderName Folder name.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Scheduling configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkflowTriggerConfig Scheduling configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    WorkflowTriggerConfig GetWorkflowTriggerConfig() const;

                    /**
                     * 设置Scheduling configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workflowTriggerConfig Scheduling configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWorkflowTriggerConfig(const WorkflowTriggerConfig& _workflowTriggerConfig);

                    /**
                     * 判断参数 WorkflowTriggerConfig 是否已赋值
                     * @return WorkflowTriggerConfig 是否已赋值
                     * 
                     */
                    bool WorkflowTriggerConfigHasBeenSet() const;

                    /**
                     * 获取Responsible person.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserNameInCharge Responsible person.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserNameInCharge() const;

                    /**
                     * 设置Responsible person.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userNameInCharge Responsible person.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserNameInCharge(const std::string& _userNameInCharge);

                    /**
                     * 判断参数 UserNameInCharge 是否已赋值
                     * @return UserNameInCharge 是否已赋值
                     * 
                     */
                    bool UserNameInChargeHasBeenSet() const;

                    /**
                     * 获取Responsible person ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserUinInCharge Responsible person ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserUinInCharge() const;

                    /**
                     * 设置Responsible person ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userUinInCharge Responsible person ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserUinInCharge(const std::string& _userUinInCharge);

                    /**
                     * 判断参数 UserUinInCharge 是否已赋值
                     * @return UserUinInCharge 是否已赋值
                     * 
                     */
                    bool UserUinInChargeHasBeenSet() const;

                    /**
                     * 获取Workflow parameter.
                     * @return WorkflowParams Workflow parameter.
                     * 
                     */
                    std::string GetWorkflowParams() const;

                    /**
                     * 设置Workflow parameter.
                     * @param _workflowParams Workflow parameter.
                     * 
                     */
                    void SetWorkflowParams(const std::string& _workflowParams);

                    /**
                     * 判断参数 WorkflowParams 是否已赋值
                     * @return WorkflowParams 是否已赋值
                     * 
                     */
                    bool WorkflowParamsHasBeenSet() const;

                private:

                    /**
                     * Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Task ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Number of Tasks
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_taskCount;
                    bool m_taskCountHasBeenSet;

                    /**
                     * Folder ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * Folder name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                    /**
                     * Scheduling configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    WorkflowTriggerConfig m_workflowTriggerConfig;
                    bool m_workflowTriggerConfigHasBeenSet;

                    /**
                     * Responsible person.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userNameInCharge;
                    bool m_userNameInChargeHasBeenSet;

                    /**
                     * Responsible person ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userUinInCharge;
                    bool m_userUinInChargeHasBeenSet;

                    /**
                     * Workflow parameter.
                     */
                    std::string m_workflowParams;
                    bool m_workflowParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERWORKFLOWBRIEF_H_
