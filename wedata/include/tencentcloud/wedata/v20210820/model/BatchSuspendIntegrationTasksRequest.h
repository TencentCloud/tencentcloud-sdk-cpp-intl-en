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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHSUSPENDINTEGRATIONTASKSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHSUSPENDINTEGRATIONTASKSREQUEST_H_

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
                * BatchSuspendIntegrationTasks request structure.
                */
                class BatchSuspendIntegrationTasksRequest : public AbstractModel
                {
                public:
                    BatchSuspendIntegrationTasksRequest();
                    ~BatchSuspendIntegrationTasksRequest() = default;
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
                     * 获取Event Type (START, STOP, SUSPEND, SUSPEND_WITHOUT_SP, RESUME, COMMIT, TIMESTAMP)	
                     * @return Event Event Type (START, STOP, SUSPEND, SUSPEND_WITHOUT_SP, RESUME, COMMIT, TIMESTAMP)	
                     * 
                     */
                    std::string GetEvent() const;

                    /**
                     * 设置Event Type (START, STOP, SUSPEND, SUSPEND_WITHOUT_SP, RESUME, COMMIT, TIMESTAMP)	
                     * @param _event Event Type (START, STOP, SUSPEND, SUSPEND_WITHOUT_SP, RESUME, COMMIT, TIMESTAMP)	
                     * 
                     */
                    void SetEvent(const std::string& _event);

                    /**
                     * 判断参数 Event 是否已赋值
                     * @return Event 是否已赋值
                     * 
                     */
                    bool EventHasBeenSet() const;

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
                     * Event Type (START, STOP, SUSPEND, SUSPEND_WITHOUT_SP, RESUME, COMMIT, TIMESTAMP)	
                     */
                    std::string m_event;
                    bool m_eventHasBeenSet;

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

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHSUSPENDINTEGRATIONTASKSREQUEST_H_
