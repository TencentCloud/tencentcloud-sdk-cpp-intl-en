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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHDELETEINTEGRATIONTASKSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHDELETEINTEGRATIONTASKSREQUEST_H_

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
                * BatchDeleteIntegrationTasks request structure.
                */
                class BatchDeleteIntegrationTasksRequest : public AbstractModel
                {
                public:
                    BatchDeleteIntegrationTasksRequest();
                    ~BatchDeleteIntegrationTasksRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Task Type, 201 for real-time tasks, 202 for offline tasks
                     * @return TaskType Task Type, 201 for real-time tasks, 202 for offline tasks
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置Task Type, 201 for real-time tasks, 202 for offline tasks
                     * @param _taskType Task Type, 201 for real-time tasks, 202 for offline tasks
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

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
                     * 获取Whether to delete development state tasks. By default, development state is not deleted, 0 means do not delete, 1 means delete
                     * @return DeleteKFFlag Whether to delete development state tasks. By default, development state is not deleted, 0 means do not delete, 1 means delete
                     * 
                     */
                    int64_t GetDeleteKFFlag() const;

                    /**
                     * 设置Whether to delete development state tasks. By default, development state is not deleted, 0 means do not delete, 1 means delete
                     * @param _deleteKFFlag Whether to delete development state tasks. By default, development state is not deleted, 0 means do not delete, 1 means delete
                     * 
                     */
                    void SetDeleteKFFlag(const int64_t& _deleteKFFlag);

                    /**
                     * 判断参数 DeleteKFFlag 是否已赋值
                     * @return DeleteKFFlag 是否已赋值
                     * 
                     */
                    bool DeleteKFFlagHasBeenSet() const;

                    /**
                     * 获取Operation Name
                     * @return Name Operation Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Operation Name
                     * @param _name Operation Name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取This batch operation involves tasks for auditing
                     * @return TaskNames This batch operation involves tasks for auditing
                     * 
                     */
                    std::vector<std::string> GetTaskNames() const;

                    /**
                     * 设置This batch operation involves tasks for auditing
                     * @param _taskNames This batch operation involves tasks for auditing
                     * 
                     */
                    void SetTaskNames(const std::vector<std::string>& _taskNames);

                    /**
                     * 判断参数 TaskNames 是否已赋值
                     * @return TaskNames 是否已赋值
                     * 
                     */
                    bool TaskNamesHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * Task Type, 201 for real-time tasks, 202 for offline tasks
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Whether to delete development state tasks. By default, development state is not deleted, 0 means do not delete, 1 means delete
                     */
                    int64_t m_deleteKFFlag;
                    bool m_deleteKFFlagHasBeenSet;

                    /**
                     * Operation Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * This batch operation involves tasks for auditing
                     */
                    std::vector<std::string> m_taskNames;
                    bool m_taskNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHDELETEINTEGRATIONTASKSREQUEST_H_
