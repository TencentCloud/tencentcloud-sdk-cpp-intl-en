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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHSTARTINTEGRATIONTASKSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHSTARTINTEGRATIONTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/StartTaskInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * BatchStartIntegrationTasks request structure.
                */
                class BatchStartIntegrationTasksRequest : public AbstractModel
                {
                public:
                    BatchStartIntegrationTasksRequest();
                    ~BatchStartIntegrationTasksRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Batch run integration tasks, currently only used in real-time integration
                     * @return StartTaskInfoSet Batch run integration tasks, currently only used in real-time integration
                     * 
                     */
                    std::vector<StartTaskInfo> GetStartTaskInfoSet() const;

                    /**
                     * 设置Batch run integration tasks, currently only used in real-time integration
                     * @param _startTaskInfoSet Batch run integration tasks, currently only used in real-time integration
                     * 
                     */
                    void SetStartTaskInfoSet(const std::vector<StartTaskInfo>& _startTaskInfoSet);

                    /**
                     * 判断参数 StartTaskInfoSet 是否已赋值
                     * @return StartTaskInfoSet 是否已赋值
                     * 
                     */
                    bool StartTaskInfoSetHasBeenSet() const;

                private:

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
                     * Task ID
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * Batch run integration tasks, currently only used in real-time integration
                     */
                    std::vector<StartTaskInfo> m_startTaskInfoSet;
                    bool m_startTaskInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHSTARTINTEGRATIONTASKSREQUEST_H_
