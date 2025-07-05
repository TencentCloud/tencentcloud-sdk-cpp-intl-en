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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATETASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskExtInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CreateTask request structure.
                */
                class CreateTaskRequest : public AbstractModel
                {
                public:
                    CreateTaskRequest();
                    ~CreateTaskRequest() = default;
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
                     * 获取Task Name
                     * @return TaskName Task Name
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task Name
                     * @param _taskName Task Name
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
                     * 获取26 Offline Synchronization,30 Python,31 PySpark,32 DLC,33 Impala,34 Hive SQL,35 Shell,36 Spark SQL,39 Spark,40 TCHouse-P,92 MapReduce
                     * @return TaskType 26 Offline Synchronization,30 Python,31 PySpark,32 DLC,33 Impala,34 Hive SQL,35 Shell,36 Spark SQL,39 Spark,40 TCHouse-P,92 MapReduce
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置26 Offline Synchronization,30 Python,31 PySpark,32 DLC,33 Impala,34 Hive SQL,35 Shell,36 Spark SQL,39 Spark,40 TCHouse-P,92 MapReduce
                     * @param _taskType 26 Offline Synchronization,30 Python,31 PySpark,32 DLC,33 Impala,34 Hive SQL,35 Shell,36 Spark SQL,39 Spark,40 TCHouse-P,92 MapReduce
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
                     * 获取Extended Attributes
                     * @return TaskExt Extended Attributes
                     * 
                     */
                    std::vector<TaskExtInfo> GetTaskExt() const;

                    /**
                     * 设置Extended Attributes
                     * @param _taskExt Extended Attributes
                     * 
                     */
                    void SetTaskExt(const std::vector<TaskExtInfo>& _taskExt);

                    /**
                     * 判断参数 TaskExt 是否已赋值
                     * @return TaskExt 是否已赋值
                     * 
                     */
                    bool TaskExtHasBeenSet() const;

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
                     * Task Name
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 26 Offline Synchronization,30 Python,31 PySpark,32 DLC,33 Impala,34 Hive SQL,35 Shell,36 Spark SQL,39 Spark,40 TCHouse-P,92 MapReduce
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Extended Attributes
                     */
                    std::vector<TaskExtInfo> m_taskExt;
                    bool m_taskExtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATETASKREQUEST_H_
