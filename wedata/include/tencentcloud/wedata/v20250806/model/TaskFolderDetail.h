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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKFOLDERDETAIL_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKFOLDERDETAIL_H_

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
                * Task file detailed information.
                */
                class TaskFolderDetail : public AbstractModel
                {
                public:
                    TaskFolderDetail();
                    ~TaskFolderDetail() = default;
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
                     * 获取Folder ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskFolderId Folder ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskFolderId() const;

                    /**
                     * 设置Folder ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskFolderId Folder ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Absolute path of the folder.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskFolderPath Absolute path of the folder.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskFolderPath() const;

                    /**
                     * 设置Absolute path of the folder.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskFolderPath Absolute path of the folder.
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

                    /**
                     * 获取Creator ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateUserUin Creator ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置Creator ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createUserUin Creator ID.
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
                     * 获取Parent folder absolute path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ParentTaskFolderPath Parent folder absolute path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetParentTaskFolderPath() const;

                    /**
                     * 设置Parent folder absolute path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _parentTaskFolderPath Parent folder absolute path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetParentTaskFolderPath(const std::string& _parentTaskFolderPath);

                    /**
                     * 判断参数 ParentTaskFolderPath 是否已赋值
                     * @return ParentTaskFolderPath 是否已赋值
                     * 
                     */
                    bool ParentTaskFolderPathHasBeenSet() const;

                    /**
                     * 获取Folder name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskFolderName Folder name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskFolderName() const;

                    /**
                     * 设置Folder name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskFolderName Folder name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskFolderName(const std::string& _taskFolderName);

                    /**
                     * 判断参数 TaskFolderName 是否已赋值
                     * @return TaskFolderName 是否已赋值
                     * 
                     */
                    bool TaskFolderNameHasBeenSet() const;

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
                     * 获取Task folder type.

| task folder type parameter | task folder type interface corresponding name |.
| ---------------- | ------------------------ |
ETL | integration task.
| EMR              | EMR                      |
| DLC              | DLC                      |
| SETATS           | SETATS                   |
| TDSQL            | TDSQL                    |
| TCHOUSE          | TCHOUSE                  |
COMMON.
TI_ONE | ti-one machine learning.
ACROSS_WORKFLOWS | cross-workflow.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskFolderType Task folder type.

| task folder type parameter | task folder type interface corresponding name |.
| ---------------- | ------------------------ |
ETL | integration task.
| EMR              | EMR                      |
| DLC              | DLC                      |
| SETATS           | SETATS                   |
| TDSQL            | TDSQL                    |
| TCHOUSE          | TCHOUSE                  |
COMMON.
TI_ONE | ti-one machine learning.
ACROSS_WORKFLOWS | cross-workflow.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskFolderType() const;

                    /**
                     * 设置Task folder type.

| task folder type parameter | task folder type interface corresponding name |.
| ---------------- | ------------------------ |
ETL | integration task.
| EMR              | EMR                      |
| DLC              | DLC                      |
| SETATS           | SETATS                   |
| TDSQL            | TDSQL                    |
| TCHOUSE          | TCHOUSE                  |
COMMON.
TI_ONE | ti-one machine learning.
ACROSS_WORKFLOWS | cross-workflow.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskFolderType Task folder type.

| task folder type parameter | task folder type interface corresponding name |.
| ---------------- | ------------------------ |
ETL | integration task.
| EMR              | EMR                      |
| DLC              | DLC                      |
| SETATS           | SETATS                   |
| TDSQL            | TDSQL                    |
| TCHOUSE          | TCHOUSE                  |
COMMON.
TI_ONE | ti-one machine learning.
ACROSS_WORKFLOWS | cross-workflow.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskFolderType(const std::string& _taskFolderType);

                    /**
                     * 判断参数 TaskFolderType 是否已赋值
                     * @return TaskFolderType 是否已赋值
                     * 
                     */
                    bool TaskFolderTypeHasBeenSet() const;

                private:

                    /**
                     * Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Folder ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskFolderId;
                    bool m_taskFolderIdHasBeenSet;

                    /**
                     * Absolute path of the folder.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskFolderPath;
                    bool m_taskFolderPathHasBeenSet;

                    /**
                     * Creator ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * Parent folder absolute path.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_parentTaskFolderPath;
                    bool m_parentTaskFolderPathHasBeenSet;

                    /**
                     * Folder name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskFolderName;
                    bool m_taskFolderNameHasBeenSet;

                    /**
                     * Workflow ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Task folder type.

| task folder type parameter | task folder type interface corresponding name |.
| ---------------- | ------------------------ |
ETL | integration task.
| EMR              | EMR                      |
| DLC              | DLC                      |
| SETATS           | SETATS                   |
| TDSQL            | TDSQL                    |
| TCHOUSE          | TCHOUSE                  |
COMMON.
TI_ONE | ti-one machine learning.
ACROSS_WORKFLOWS | cross-workflow.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskFolderType;
                    bool m_taskFolderTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKFOLDERDETAIL_H_
