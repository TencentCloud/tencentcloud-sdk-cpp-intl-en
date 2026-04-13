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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBETASKSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeTasks request structure.
                */
                class DescribeTasksRequest : public AbstractModel
                {
                public:
                    DescribeTasksRequest();
                    ~DescribeTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query by task ID. the FlowId and TaskId returned in other cloud apis are equivalent.
                     * @return TaskId Query by task ID. the FlowId and TaskId returned in other cloud apis are equivalent.
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置Query by task ID. the FlowId and TaskId returned in other cloud apis are equivalent.
                     * @param _taskId Query by task ID. the FlowId and TaskId returned in other cloud apis are equivalent.
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Query by database instance ID.
                     * @return DBInstanceId Query by database instance ID.
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Query by database instance ID.
                     * @param _dBInstanceId Query by database instance ID.
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取Earliest start time of the task, such as 2024-08-23 00:00:00. default shows data within the last 180 days.
                     * @return MinStartTime Earliest start time of the task, such as 2024-08-23 00:00:00. default shows data within the last 180 days.
                     * 
                     */
                    std::string GetMinStartTime() const;

                    /**
                     * 设置Earliest start time of the task, such as 2024-08-23 00:00:00. default shows data within the last 180 days.
                     * @param _minStartTime Earliest start time of the task, such as 2024-08-23 00:00:00. default shows data within the last 180 days.
                     * 
                     */
                    void SetMinStartTime(const std::string& _minStartTime);

                    /**
                     * 判断参数 MinStartTime 是否已赋值
                     * @return MinStartTime 是否已赋值
                     * 
                     */
                    bool MinStartTimeHasBeenSet() const;

                    /**
                     * 获取Latest start time of the task, such as 2024-08-23 00:00:00, defaults to the current time.
                     * @return MaxStartTime Latest start time of the task, such as 2024-08-23 00:00:00, defaults to the current time.
                     * 
                     */
                    std::string GetMaxStartTime() const;

                    /**
                     * 设置Latest start time of the task, such as 2024-08-23 00:00:00, defaults to the current time.
                     * @param _maxStartTime Latest start time of the task, such as 2024-08-23 00:00:00, defaults to the current time.
                     * 
                     */
                    void SetMaxStartTime(const std::string& _maxStartTime);

                    /**
                     * 判断参数 MaxStartTime 是否已赋值
                     * @return MaxStartTime 是否已赋值
                     * 
                     */
                    bool MaxStartTimeHasBeenSet() const;

                    /**
                     * 获取Number of results displayed per page. value range 1-100. default 20.
                     * @return Limit Number of results displayed per page. value range 1-100. default 20.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results displayed per page. value range 1-100. default 20.
                     * @param _limit Number of results displayed per page. value range 1-100. default 20.
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
                     * 获取Data offset, starting from 0.
                     * @return Offset Data offset, starting from 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Data offset, starting from 0.
                     * @param _offset Data offset, starting from 0.
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
                     * 获取Sorting field, supports StartTime and EndTime. defaults to StartTime.
                     * @return OrderBy Sorting field, supports StartTime and EndTime. defaults to StartTime.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting field, supports StartTime and EndTime. defaults to StartTime.
                     * @param _orderBy Sorting field, supports StartTime and EndTime. defaults to StartTime.
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Specifies the sorting method, including ascending: `asc` and descending: `desc`. defaults to `desc`.
                     * @return OrderByType Specifies the sorting method, including ascending: `asc` and descending: `desc`. defaults to `desc`.
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Specifies the sorting method, including ascending: `asc` and descending: `desc`. defaults to `desc`.
                     * @param _orderByType Specifies the sorting method, including ascending: `asc` and descending: `desc`. defaults to `desc`.
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                private:

                    /**
                     * Query by task ID. the FlowId and TaskId returned in other cloud apis are equivalent.
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Query by database instance ID.
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Earliest start time of the task, such as 2024-08-23 00:00:00. default shows data within the last 180 days.
                     */
                    std::string m_minStartTime;
                    bool m_minStartTimeHasBeenSet;

                    /**
                     * Latest start time of the task, such as 2024-08-23 00:00:00, defaults to the current time.
                     */
                    std::string m_maxStartTime;
                    bool m_maxStartTimeHasBeenSet;

                    /**
                     * Number of results displayed per page. value range 1-100. default 20.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Data offset, starting from 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sorting field, supports StartTime and EndTime. defaults to StartTime.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Specifies the sorting method, including ascending: `asc` and descending: `desc`. defaults to `desc`.
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBETASKSREQUEST_H_
