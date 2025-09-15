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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEYARNSCHEDULEHISTORYRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEYARNSCHEDULEHISTORYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/SchedulerTaskInfo.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeYarnScheduleHistory response structure.
                */
                class DescribeYarnScheduleHistoryResponse : public AbstractModel
                {
                public:
                    DescribeYarnScheduleHistoryResponse();
                    ~DescribeYarnScheduleHistoryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Task details.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tasks Task details.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<SchedulerTaskInfo> GetTasks() const;

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取Total quantity of task details.
                     * @return Total Total quantity of task details.
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Scheduling type filter list

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SchedulerNameList Scheduling type filter list

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSchedulerNameList() const;

                    /**
                     * 判断参数 SchedulerNameList 是否已赋值
                     * @return SchedulerNameList 是否已赋值
                     * 
                     */
                    bool SchedulerNameListHasBeenSet() const;

                    /**
                     * 获取Status filter list

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StateList Status filter list

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetStateList() const;

                    /**
                     * 判断参数 StateList 是否已赋值
                     * @return StateList 是否已赋值
                     * 
                     */
                    bool StateListHasBeenSet() const;

                private:

                    /**
                     * Task details.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<SchedulerTaskInfo> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * Total quantity of task details.
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Scheduling type filter list

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_schedulerNameList;
                    bool m_schedulerNameListHasBeenSet;

                    /**
                     * Status filter list

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_stateList;
                    bool m_stateListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEYARNSCHEDULEHISTORYRESPONSE_H_
