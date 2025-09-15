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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEYARNSCHEDULEHISTORYREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEYARNSCHEDULEHISTORYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeYarnScheduleHistory request structure.
                */
                class DescribeYarnScheduleHistoryRequest : public AbstractModel
                {
                public:
                    DescribeYarnScheduleHistoryRequest();
                    ~DescribeYarnScheduleHistoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID.
                     * @return InstanceId Cluster ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster ID.
                     * @param _instanceId Cluster ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Start time
                     * @return StartTime Start time
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Start time
                     * @param _startTime Start time
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
                     * 获取End time
                     * @return EndTime End time
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置End time
                     * @param _endTime End time
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
                     * 获取Page number.
                     * @return Limit Page number.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Page number.
                     * @param _limit Page number.
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
                     * 获取Page size.
                     * @return Offset Page size.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Page size.
                     * @param _offset Page size.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Scheduler type. The values are ALL, Capacity Scheduler, and Fair Scheduler.
                     * @return SchedulerType Scheduler type. The values are ALL, Capacity Scheduler, and Fair Scheduler.
                     * 
                     */
                    std::string GetSchedulerType() const;

                    /**
                     * 设置Scheduler type. The values are ALL, Capacity Scheduler, and Fair Scheduler.
                     * @param _schedulerType Scheduler type. The values are ALL, Capacity Scheduler, and Fair Scheduler.
                     * 
                     */
                    void SetSchedulerType(const std::string& _schedulerType);

                    /**
                     * 判断参数 SchedulerType 是否已赋值
                     * @return SchedulerType 是否已赋值
                     * 
                     */
                    bool SchedulerTypeHasBeenSet() const;

                    /**
                     * 获取Task type. 0: waiting; 1: executing; 2: completed; -1: failed; -99: all.
                     * @return TaskState Task type. 0: waiting; 1: executing; 2: completed; -1: failed; -99: all.
                     * 
                     */
                    int64_t GetTaskState() const;

                    /**
                     * 设置Task type. 0: waiting; 1: executing; 2: completed; -1: failed; -99: all.
                     * @param _taskState Task type. 0: waiting; 1: executing; 2: completed; -1: failed; -99: all.
                     * 
                     */
                    void SetTaskState(const int64_t& _taskState);

                    /**
                     * 判断参数 TaskState 是否已赋值
                     * @return TaskState 是否已赋值
                     * 
                     */
                    bool TaskStateHasBeenSet() const;

                private:

                    /**
                     * Cluster ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Start time
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Page number.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Page size.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Scheduler type. The values are ALL, Capacity Scheduler, and Fair Scheduler.
                     */
                    std::string m_schedulerType;
                    bool m_schedulerTypeHasBeenSet;

                    /**
                     * Task type. 0: waiting; 1: executing; 2: completed; -1: failed; -99: all.
                     */
                    int64_t m_taskState;
                    bool m_taskStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEYARNSCHEDULEHISTORYREQUEST_H_
