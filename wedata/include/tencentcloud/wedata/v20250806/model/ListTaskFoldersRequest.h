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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKFOLDERSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKFOLDERSREQUEST_H_

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
                * ListTaskFolders request structure.
                */
                class ListTaskFoldersRequest : public AbstractModel
                {
                public:
                    ListTaskFoldersRequest();
                    ~ListTaskFoldersRequest() = default;
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
                     * 获取Absolute path of the parent folder, such as /abc/de. if it is the root directory, pass /.
                     * @return ParentTaskFolderPath Absolute path of the parent folder, such as /abc/de. if it is the root directory, pass /.
                     * 
                     */
                    std::string GetParentTaskFolderPath() const;

                    /**
                     * 设置Absolute path of the parent folder, such as /abc/de. if it is the root directory, pass /.
                     * @param _parentTaskFolderPath Absolute path of the parent folder, such as /abc/de. if it is the root directory, pass /.
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
                     * 获取Task folder type.

| task folder type parameter | task folder type interface corresponding name |.
| ---------------- | ------------------------ |
ETL | integration task.
| EMR              | EMR                      |
| DLC              | DLC                      |
| SETATS           | SETATS                   |
| TDSQL            | TDSQL                    |
| TCHOUSE          | TCHOUSE                  |
GENERAL.
TI_ONE | ti-one machine learning.
ACROSS_WORKFLOWS | cross-workflow.


                     * @return TaskFolderType Task folder type.

| task folder type parameter | task folder type interface corresponding name |.
| ---------------- | ------------------------ |
ETL | integration task.
| EMR              | EMR                      |
| DLC              | DLC                      |
| SETATS           | SETATS                   |
| TDSQL            | TDSQL                    |
| TCHOUSE          | TCHOUSE                  |
GENERAL.
TI_ONE | ti-one machine learning.
ACROSS_WORKFLOWS | cross-workflow.


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
GENERAL.
TI_ONE | ti-one machine learning.
ACROSS_WORKFLOWS | cross-workflow.


                     * @param _taskFolderType Task folder type.

| task folder type parameter | task folder type interface corresponding name |.
| ---------------- | ------------------------ |
ETL | integration task.
| EMR              | EMR                      |
| DLC              | DLC                      |
| SETATS           | SETATS                   |
| TDSQL            | TDSQL                    |
| TCHOUSE          | TCHOUSE                  |
GENERAL.
TI_ONE | ti-one machine learning.
ACROSS_WORKFLOWS | cross-workflow.


                     * 
                     */
                    void SetTaskFolderType(const std::string& _taskFolderType);

                    /**
                     * 判断参数 TaskFolderType 是否已赋值
                     * @return TaskFolderType 是否已赋值
                     * 
                     */
                    bool TaskFolderTypeHasBeenSet() const;

                    /**
                     * 获取Number of data pages, equal to or greater than 1. default is 1.
                     * @return PageNumber Number of data pages, equal to or greater than 1. default is 1.
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Number of data pages, equal to or greater than 1. default is 1.
                     * @param _pageNumber Number of data pages, equal to or greater than 1. default is 1.
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Number of data records displayed per page. minimum value is 10. maximum value is 200. default value is 10.
                     * @return PageSize Number of data records displayed per page. minimum value is 10. maximum value is 200. default value is 10.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of data records displayed per page. minimum value is 10. maximum value is 200. default value is 10.
                     * @param _pageSize Number of data records displayed per page. minimum value is 10. maximum value is 200. default value is 10.
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Absolute path of the parent folder, such as /abc/de. if it is the root directory, pass /.
                     */
                    std::string m_parentTaskFolderPath;
                    bool m_parentTaskFolderPathHasBeenSet;

                    /**
                     * Workflow ID.
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
GENERAL.
TI_ONE | ti-one machine learning.
ACROSS_WORKFLOWS | cross-workflow.


                     */
                    std::string m_taskFolderType;
                    bool m_taskFolderTypeHasBeenSet;

                    /**
                     * Number of data pages, equal to or greater than 1. default is 1.
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Number of data records displayed per page. minimum value is 10. maximum value is 200. default value is 10.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKFOLDERSREQUEST_H_
