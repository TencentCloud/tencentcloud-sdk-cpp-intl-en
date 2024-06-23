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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKLOGREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKLOGREQUEST_H_

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
                * TaskLog request structure.
                */
                class TaskLogRequest : public AbstractModel
                {
                public:
                    TaskLogRequest();
                    ~TaskLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
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
                     * 获取Start timestamp, unit: milliseconds
                     * @return StartTime Start timestamp, unit: milliseconds
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Start timestamp, unit: milliseconds
                     * @param _startTime Start timestamp, unit: milliseconds
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End timestamp, unit: milliseconds
                     * @return EndTime End timestamp, unit: milliseconds
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置End timestamp, unit: milliseconds
                     * @param _endTime End timestamp, unit: milliseconds
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

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
                     * 获取Number of log pulls, default 100
                     * @return Limit Number of log pulls, default 100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of log pulls, default 100
                     * @param _limit Number of log pulls, default 100
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Log sorting, desc for descending, asc for ascending
                     * @return OrderType Log sorting, desc for descending, asc for ascending
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置Log sorting, desc for descending, asc for ascending
                     * @param _orderType Log sorting, desc for descending, asc for ascending
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取Real-time task 201 Offline task 202 Default is real-time task
                     * @return TaskType Real-time task 201 Offline task 202 Default is real-time task
                     * 
                     */
                    uint64_t GetTaskType() const;

                    /**
                     * 设置Real-time task 201 Offline task 202 Default is real-time task
                     * @param _taskType Real-time task 201 Offline task 202 Default is real-time task
                     * 
                     */
                    void SetTaskType(const uint64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Start timestamp, unit: milliseconds
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End timestamp, unit: milliseconds
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Number of log pulls, default 100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Log sorting, desc for descending, asc for ascending
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * Real-time task 201 Offline task 202 Default is real-time task
                     */
                    uint64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKLOGREQUEST_H_
