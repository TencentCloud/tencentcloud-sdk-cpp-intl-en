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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKAPPTASKSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKAPPTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Filter.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeSparkAppTasks request structure.
                */
                class DescribeSparkAppTasksRequest : public AbstractModel
                {
                public:
                    DescribeSparkAppTasksRequest();
                    ~DescribeSparkAppTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Spark job ID
                     * @return JobId Spark job ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Spark job ID
                     * @param _jobId Spark job ID
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Paginated query offset
                     * @return Offset Paginated query offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Paginated query offset
                     * @param _offset Paginated query offset
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Paginated query limit
                     * @return Limit Paginated query limit
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Paginated query limit
                     * @param _limit Paginated query limit
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Execution instance ID
                     * @return TaskId Execution instance ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Execution instance ID
                     * @param _taskId Execution instance ID
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
                     * 获取The update start time in the format of yyyy-MM-dd HH:mm:ss.
                     * @return StartTime The update start time in the format of yyyy-MM-dd HH:mm:ss.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置The update start time in the format of yyyy-MM-dd HH:mm:ss.
                     * @param _startTime The update start time in the format of yyyy-MM-dd HH:mm:ss.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The update end time in the format of yyyy-MM-dd HH:mm:ss.
                     * @return EndTime The update end time in the format of yyyy-MM-dd HH:mm:ss.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The update end time in the format of yyyy-MM-dd HH:mm:ss.
                     * @param _endTime The update end time in the format of yyyy-MM-dd HH:mm:ss.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Filter by this parameter, which can be `task-state`.
                     * @return Filters Filter by this parameter, which can be `task-state`.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter by this parameter, which can be `task-state`.
                     * @param _filters Filter by this parameter, which can be `task-state`.
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Spark job ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Paginated query offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Paginated query limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Execution instance ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * The update start time in the format of yyyy-MM-dd HH:mm:ss.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The update end time in the format of yyyy-MM-dd HH:mm:ss.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Filter by this parameter, which can be `task-state`.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKAPPTASKSREQUEST_H_
