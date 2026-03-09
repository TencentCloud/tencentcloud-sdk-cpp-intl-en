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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKBASEATTRIBUTE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKBASEATTRIBUTE_H_

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
                * Task basic attribute information.
                */
                class TriggerTaskBaseAttribute : public AbstractModel
                {
                public:
                    TriggerTaskBaseAttribute();
                    ~TriggerTaskBaseAttribute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskId Task ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskId Task ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Task type ID.

- 26:OfflineSynchronization
- 30:Python
- 32:DLC SQL
- 35:Shell
- 38:Shell Form Mode
- 46:DLC Spark
- 50:DLC PySpark
- 130:Branch Node
- 131:Merged Node
- 132:Notebook
- 133:SSH
- 137:For-each
- 139:DLC Spark Streaming
- 140:Run Workflow
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskTypeId Task type ID.

- 26:OfflineSynchronization
- 30:Python
- 32:DLC SQL
- 35:Shell
- 38:Shell Form Mode
- 46:DLC Spark
- 50:DLC PySpark
- 130:Branch Node
- 131:Merged Node
- 132:Notebook
- 133:SSH
- 137:For-each
- 139:DLC Spark Streaming
- 140:Run Workflow
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTaskTypeId() const;

                    /**
                     * 设置Task type ID.

- 26:OfflineSynchronization
- 30:Python
- 32:DLC SQL
- 35:Shell
- 38:Shell Form Mode
- 46:DLC Spark
- 50:DLC PySpark
- 130:Branch Node
- 131:Merged Node
- 132:Notebook
- 133:SSH
- 137:For-each
- 139:DLC Spark Streaming
- 140:Run Workflow
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskTypeId Task type ID.

- 26:OfflineSynchronization
- 30:Python
- 32:DLC SQL
- 35:Shell
- 38:Shell Form Mode
- 46:DLC Spark
- 50:DLC PySpark
- 130:Branch Node
- 131:Merged Node
- 132:Notebook
- 133:SSH
- 137:For-each
- 139:DLC Spark Streaming
- 140:Run Workflow
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskTypeId(const uint64_t& _taskTypeId);

                    /**
                     * 判断参数 TaskTypeId 是否已赋值
                     * @return TaskTypeId 是否已赋值
                     * 
                     */
                    bool TaskTypeIdHasBeenSet() const;

                    /**
                     * 获取Workflow ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkflowId Workflow ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workflowId Workflow ID.
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
                     * 获取Task name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskName Task name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskName Task name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Last saved version no.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskLatestVersionNo Last saved version no.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskLatestVersionNo() const;

                    /**
                     * 设置Last saved version no.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskLatestVersionNo Last saved version no.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskLatestVersionNo(const std::string& _taskLatestVersionNo);

                    /**
                     * 判断参数 TaskLatestVersionNo 是否已赋值
                     * @return TaskLatestVersionNo 是否已赋值
                     * 
                     */
                    bool TaskLatestVersionNoHasBeenSet() const;

                    /**
                     * 获取Version no. of last submission.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskLatestSubmitVersionNo Version no. of last submission.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskLatestSubmitVersionNo() const;

                    /**
                     * 设置Version no. of last submission.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskLatestSubmitVersionNo Version no. of last submission.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskLatestSubmitVersionNo(const std::string& _taskLatestSubmitVersionNo);

                    /**
                     * 判断参数 TaskLatestSubmitVersionNo 是否已赋值
                     * @return TaskLatestSubmitVersionNo 是否已赋值
                     * 
                     */
                    bool TaskLatestSubmitVersionNoHasBeenSet() const;

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
                     * 获取Task status:.
* N: create.
* Y: scheduling in progress.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Task status:.
* N: create.
* Y: scheduling in progress.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status:.
* N: create.
* Y: scheduling in progress.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Task status:.
* N: create.
* Y: scheduling in progress.

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Latest submission status of the task, whether it has been submitted: true/false.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Submit Latest submission status of the task, whether it has been submitted: true/false.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetSubmit() const;

                    /**
                     * 设置Latest submission status of the task, whether it has been submitted: true/false.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _submit Latest submission status of the task, whether it has been submitted: true/false.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubmit(const bool& _submit);

                    /**
                     * 判断参数 Submit 是否已赋值
                     * @return Submit 是否已赋值
                     * 
                     */
                    bool SubmitHasBeenSet() const;

                    /**
                     * 获取Task creation time, for example: 2022-02-12 11:13:41.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Task creation time, for example: 2022-02-12 11:13:41.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Task creation time, for example: 2022-02-12 11:13:41.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Task creation time, for example: 2022-02-12 11:13:41.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Last update time, for example: 2025-08-13 16:34:06.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastUpdateTime Last update time, for example: 2025-08-13 16:34:06.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastUpdateTime() const;

                    /**
                     * 设置Last update time, for example: 2025-08-13 16:34:06.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastUpdateTime Last update time, for example: 2025-08-13 16:34:06.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastUpdateTime(const std::string& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                    /**
                     * 获取Last updated by name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastUpdateUserName Last updated by name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastUpdateUserName() const;

                    /**
                     * 设置Last updated by name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastUpdateUserName Last updated by name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastUpdateUserName(const std::string& _lastUpdateUserName);

                    /**
                     * 判断参数 LastUpdateUserName 是否已赋值
                     * @return LastUpdateUserName 是否已赋值
                     * 
                     */
                    bool LastUpdateUserNameHasBeenSet() const;

                    /**
                     * 获取Last maintenance time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastOpsTime Last maintenance time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastOpsTime() const;

                    /**
                     * 设置Last maintenance time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastOpsTime Last maintenance time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastOpsTime(const std::string& _lastOpsTime);

                    /**
                     * 判断参数 LastOpsTime 是否已赋值
                     * @return LastOpsTime 是否已赋值
                     * 
                     */
                    bool LastOpsTimeHasBeenSet() const;

                    /**
                     * 获取Last operator name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastOpsUserName Last operator name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastOpsUserName() const;

                    /**
                     * 设置Last operator name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastOpsUserName Last operator name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastOpsUserName(const std::string& _lastOpsUserName);

                    /**
                     * 判断参数 LastOpsUserName 是否已赋值
                     * @return LastOpsUserName 是否已赋值
                     * 
                     */
                    bool LastOpsUserNameHasBeenSet() const;

                    /**
                     * 获取Task owner ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OwnerUin Task owner ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置Task owner ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ownerUin Task owner ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Task description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskDescription Task description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskDescription() const;

                    /**
                     * 设置Task description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskDescription Task description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskDescription(const std::string& _taskDescription);

                    /**
                     * 判断参数 TaskDescription 是否已赋值
                     * @return TaskDescription 是否已赋值
                     * 
                     */
                    bool TaskDescriptionHasBeenSet() const;

                    /**
                     * 获取Latest update uid.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateUserUin Latest update uid.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateUserUin() const;

                    /**
                     * 设置Latest update uid.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateUserUin Latest update uid.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdateUserUin(const std::string& _updateUserUin);

                    /**
                     * 判断参数 UpdateUserUin 是否已赋值
                     * @return UpdateUserUin 是否已赋值
                     * 
                     */
                    bool UpdateUserUinHasBeenSet() const;

                    /**
                     * 获取Create a user ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateUserUin Create a user ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置Create a user ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createUserUin Create a user ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateUserUin(const std::string& _createUserUin);

                    /**
                     * 判断参数 CreateUserUin 是否已赋值
                     * @return CreateUserUin 是否已赋值
                     * 
                     */
                    bool CreateUserUinHasBeenSet() const;

                    /**
                     * 获取Task folder path.

Note:.

Do not fill in the task node type in the path. for example, in a workflow named wf01, under the "common" category, if you want to create a new shell task under the tf_01 folder in this classification, just fill in /tf_01.
If the tf_01 folder does not exist, first create this folder (use the CreateTaskFolder api) for a successful operation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskFolderPath Task folder path.

Note:.

Do not fill in the task node type in the path. for example, in a workflow named wf01, under the "common" category, if you want to create a new shell task under the tf_01 folder in this classification, just fill in /tf_01.
If the tf_01 folder does not exist, first create this folder (use the CreateTaskFolder api) for a successful operation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskFolderPath() const;

                    /**
                     * 设置Task folder path.

Note:.

Do not fill in the task node type in the path. for example, in a workflow named wf01, under the "common" category, if you want to create a new shell task under the tf_01 folder in this classification, just fill in /tf_01.
If the tf_01 folder does not exist, first create this folder (use the CreateTaskFolder api) for a successful operation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskFolderPath Task folder path.

Note:.

Do not fill in the task node type in the path. for example, in a workflow named wf01, under the "common" category, if you want to create a new shell task under the tf_01 folder in this classification, just fill in /tf_01.
If the tf_01 folder does not exist, first create this folder (use the CreateTaskFolder api) for a successful operation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskFolderPath(const std::string& _taskFolderPath);

                    /**
                     * 判断参数 TaskFolderPath 是否已赋值
                     * @return TaskFolderPath 是否已赋值
                     * 
                     */
                    bool TaskFolderPathHasBeenSet() const;

                private:

                    /**
                     * Task ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task type ID.

- 26:OfflineSynchronization
- 30:Python
- 32:DLC SQL
- 35:Shell
- 38:Shell Form Mode
- 46:DLC Spark
- 50:DLC PySpark
- 130:Branch Node
- 131:Merged Node
- 132:Notebook
- 133:SSH
- 137:For-each
- 139:DLC Spark Streaming
- 140:Run Workflow
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * Workflow ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Task name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Last saved version no.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskLatestVersionNo;
                    bool m_taskLatestVersionNoHasBeenSet;

                    /**
                     * Version no. of last submission.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskLatestSubmitVersionNo;
                    bool m_taskLatestSubmitVersionNoHasBeenSet;

                    /**
                     * Workflow name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * Task status:.
* N: create.
* Y: scheduling in progress.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Latest submission status of the task, whether it has been submitted: true/false.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_submit;
                    bool m_submitHasBeenSet;

                    /**
                     * Task creation time, for example: 2022-02-12 11:13:41.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last update time, for example: 2025-08-13 16:34:06.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                    /**
                     * Last updated by name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastUpdateUserName;
                    bool m_lastUpdateUserNameHasBeenSet;

                    /**
                     * Last maintenance time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastOpsTime;
                    bool m_lastOpsTimeHasBeenSet;

                    /**
                     * Last operator name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastOpsUserName;
                    bool m_lastOpsUserNameHasBeenSet;

                    /**
                     * Task owner ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Task description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskDescription;
                    bool m_taskDescriptionHasBeenSet;

                    /**
                     * Latest update uid.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateUserUin;
                    bool m_updateUserUinHasBeenSet;

                    /**
                     * Create a user ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * Task folder path.

Note:.

Do not fill in the task node type in the path. for example, in a workflow named wf01, under the "common" category, if you want to create a new shell task under the tf_01 folder in this classification, just fill in /tf_01.
If the tf_01 folder does not exist, first create this folder (use the CreateTaskFolder api) for a successful operation.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskFolderPath;
                    bool m_taskFolderPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKBASEATTRIBUTE_H_
