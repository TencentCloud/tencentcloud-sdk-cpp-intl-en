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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKSRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/TaskResponseInfo.h>
#include <tencentcloud/dlc/v20210125/model/TasksOverview.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeTasks response structure.
                */
                class DescribeTasksResponse : public AbstractModel
                {
                public:
                    DescribeTasksResponse();
                    ~DescribeTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of task objects.
                     * @return TaskList List of task objects.
                     */
                    std::vector<TaskResponseInfo> GetTaskList() const;

                    /**
                     * 判断参数 TaskList 是否已赋值
                     * @return TaskList 是否已赋值
                     */
                    bool TaskListHasBeenSet() const;

                    /**
                     * 获取Total number of instances
                     * @return TotalCount Total number of instances
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取The task overview.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TasksOverview The task overview.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TasksOverview GetTasksOverview() const;

                    /**
                     * 判断参数 TasksOverview 是否已赋值
                     * @return TasksOverview 是否已赋值
                     */
                    bool TasksOverviewHasBeenSet() const;

                private:

                    /**
                     * List of task objects.
                     */
                    std::vector<TaskResponseInfo> m_taskList;
                    bool m_taskListHasBeenSet;

                    /**
                     * Total number of instances
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * The task overview.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TasksOverview m_tasksOverview;
                    bool m_tasksOverviewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKSRESPONSE_H_
