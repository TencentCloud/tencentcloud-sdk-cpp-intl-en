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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBETASKREQUEST_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeTask request structure.
                */
                class DescribeTaskRequest : public AbstractModel
                {
                public:
                    DescribeTaskRequest();
                    ~DescribeTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Job ID
                     * @return JobId Job ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Job ID
                     * @param _jobId Job ID
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
                     * 获取Task name
                     * @return TaskName Task name
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task name
                     * @param _taskName Task name
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
                     * 获取Offset
                     * @return Offset Offset
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset
                     * @param _offset Offset
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
                     * 获取Number of returned results. Default value: 100. Maximum value: 1,000.
                     * @return Limit Number of returned results. Default value: 100. Maximum value: 1,000.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 100. Maximum value: 1,000.
                     * @param _limit Number of returned results. Default value: 100. Maximum value: 1,000.
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
                     * 获取Filter as detailed below:
<li> `task-instance-type` - String - Optional - Filter by the task instance state. (`SUBMITTED`, `PENDING`, `RUNNABLE`, `STARTING`, `RUNNING`, `SUCCEED`, `FAILED`, `FAILED_INTERRUPTED`).</li>
                     * @return Filters Filter as detailed below:
<li> `task-instance-type` - String - Optional - Filter by the task instance state. (`SUBMITTED`, `PENDING`, `RUNNABLE`, `STARTING`, `RUNNING`, `SUCCEED`, `FAILED`, `FAILED_INTERRUPTED`).</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter as detailed below:
<li> `task-instance-type` - String - Optional - Filter by the task instance state. (`SUBMITTED`, `PENDING`, `RUNNABLE`, `STARTING`, `RUNNING`, `SUCCEED`, `FAILED`, `FAILED_INTERRUPTED`).</li>
                     * @param _filters Filter as detailed below:
<li> `task-instance-type` - String - Optional - Filter by the task instance state. (`SUBMITTED`, `PENDING`, `RUNNABLE`, `STARTING`, `RUNNING`, `SUCCEED`, `FAILED`, `FAILED_INTERRUPTED`).</li>
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
                     * Job ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Task name
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. Default value: 100. Maximum value: 1,000.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter as detailed below:
<li> `task-instance-type` - String - Optional - Filter by the task instance state. (`SUBMITTED`, `PENDING`, `RUNNABLE`, `STARTING`, `RUNNING`, `SUCCEED`, `FAILED`, `FAILED_INTERRUPTED`).</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBETASKREQUEST_H_
