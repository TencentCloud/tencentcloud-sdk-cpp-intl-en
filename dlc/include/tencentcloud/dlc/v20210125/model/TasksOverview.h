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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_TASKSOVERVIEW_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_TASKSOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * The task overview.
                */
                class TasksOverview : public AbstractModel
                {
                public:
                    TasksOverview();
                    ~TasksOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The number of tasks in queue.
                     * @return TaskQueuedCount The number of tasks in queue.
                     * 
                     */
                    int64_t GetTaskQueuedCount() const;

                    /**
                     * 设置The number of tasks in queue.
                     * @param _taskQueuedCount The number of tasks in queue.
                     * 
                     */
                    void SetTaskQueuedCount(const int64_t& _taskQueuedCount);

                    /**
                     * 判断参数 TaskQueuedCount 是否已赋值
                     * @return TaskQueuedCount 是否已赋值
                     * 
                     */
                    bool TaskQueuedCountHasBeenSet() const;

                    /**
                     * 获取The number of initialized tasks.
                     * @return TaskInitCount The number of initialized tasks.
                     * 
                     */
                    int64_t GetTaskInitCount() const;

                    /**
                     * 设置The number of initialized tasks.
                     * @param _taskInitCount The number of initialized tasks.
                     * 
                     */
                    void SetTaskInitCount(const int64_t& _taskInitCount);

                    /**
                     * 判断参数 TaskInitCount 是否已赋值
                     * @return TaskInitCount 是否已赋值
                     * 
                     */
                    bool TaskInitCountHasBeenSet() const;

                    /**
                     * 获取The number of tasks in progress.
                     * @return TaskRunningCount The number of tasks in progress.
                     * 
                     */
                    int64_t GetTaskRunningCount() const;

                    /**
                     * 设置The number of tasks in progress.
                     * @param _taskRunningCount The number of tasks in progress.
                     * 
                     */
                    void SetTaskRunningCount(const int64_t& _taskRunningCount);

                    /**
                     * 判断参数 TaskRunningCount 是否已赋值
                     * @return TaskRunningCount 是否已赋值
                     * 
                     */
                    bool TaskRunningCountHasBeenSet() const;

                    /**
                     * 获取The total number of tasks in this time range.
                     * @return TotalTaskCount The total number of tasks in this time range.
                     * 
                     */
                    int64_t GetTotalTaskCount() const;

                    /**
                     * 设置The total number of tasks in this time range.
                     * @param _totalTaskCount The total number of tasks in this time range.
                     * 
                     */
                    void SetTotalTaskCount(const int64_t& _totalTaskCount);

                    /**
                     * 判断参数 TotalTaskCount 是否已赋值
                     * @return TotalTaskCount 是否已赋值
                     * 
                     */
                    bool TotalTaskCountHasBeenSet() const;

                private:

                    /**
                     * The number of tasks in queue.
                     */
                    int64_t m_taskQueuedCount;
                    bool m_taskQueuedCountHasBeenSet;

                    /**
                     * The number of initialized tasks.
                     */
                    int64_t m_taskInitCount;
                    bool m_taskInitCountHasBeenSet;

                    /**
                     * The number of tasks in progress.
                     */
                    int64_t m_taskRunningCount;
                    bool m_taskRunningCountHasBeenSet;

                    /**
                     * The total number of tasks in this time range.
                     */
                    int64_t m_totalTaskCount;
                    bool m_totalTaskCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TASKSOVERVIEW_H_
