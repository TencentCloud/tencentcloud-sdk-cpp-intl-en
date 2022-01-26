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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBSREQUEST_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBSREQUEST_H_

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
                * DescribeJobs request structure.
                */
                class DescribeJobsRequest : public AbstractModel
                {
                public:
                    DescribeJobsRequest();
                    ~DescribeJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return JobIds Instance ID
                     */
                    std::vector<std::string> GetJobIds() const;

                    /**
                     * 设置Instance ID
                     * @param JobIds Instance ID
                     */
                    void SetJobIds(const std::vector<std::string>& _jobIds);

                    /**
                     * 判断参数 JobIds 是否已赋值
                     * @return JobIds 是否已赋值
                     */
                    bool JobIdsHasBeenSet() const;

                    /**
                     * 获取Filter.
<li> `job-id` - String - Optional - Filter by job ID.</li>
<li> `job-name` - String - Optional - Filter by job name.</li>
<li> `job-state` - String - Optional - Filter by job state.</li>
<li> `zone` - String - Optional - Filter by availability zone.</li>
<li> `tag-key` - String - Optional - Filter by tag key.</li>
<li> `tag-value` - String - Optional - Filter by tag value.</li>
<li> `tag:tag-key` - String - Optional - Filter by tag key-value pair. The tag-key should be replaced by a specified tag key.</li>
It cannot be specified together with the `JobIds` parameter.
                     * @return Filters Filter.
<li> `job-id` - String - Optional - Filter by job ID.</li>
<li> `job-name` - String - Optional - Filter by job name.</li>
<li> `job-state` - String - Optional - Filter by job state.</li>
<li> `zone` - String - Optional - Filter by availability zone.</li>
<li> `tag-key` - String - Optional - Filter by tag key.</li>
<li> `tag-value` - String - Optional - Filter by tag value.</li>
<li> `tag:tag-key` - String - Optional - Filter by tag key-value pair. The tag-key should be replaced by a specified tag key.</li>
It cannot be specified together with the `JobIds` parameter.
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter.
<li> `job-id` - String - Optional - Filter by job ID.</li>
<li> `job-name` - String - Optional - Filter by job name.</li>
<li> `job-state` - String - Optional - Filter by job state.</li>
<li> `zone` - String - Optional - Filter by availability zone.</li>
<li> `tag-key` - String - Optional - Filter by tag key.</li>
<li> `tag-value` - String - Optional - Filter by tag value.</li>
<li> `tag:tag-key` - String - Optional - Filter by tag key-value pair. The tag-key should be replaced by a specified tag key.</li>
It cannot be specified together with the `JobIds` parameter.
                     * @param Filters Filter.
<li> `job-id` - String - Optional - Filter by job ID.</li>
<li> `job-name` - String - Optional - Filter by job name.</li>
<li> `job-state` - String - Optional - Filter by job state.</li>
<li> `zone` - String - Optional - Filter by availability zone.</li>
<li> `tag-key` - String - Optional - Filter by tag key.</li>
<li> `tag-value` - String - Optional - Filter by tag value.</li>
<li> `tag:tag-key` - String - Optional - Filter by tag key-value pair. The tag-key should be replaced by a specified tag key.</li>
It cannot be specified together with the `JobIds` parameter.
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Offset
                     * @return Offset Offset
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset
                     * @param Offset Offset
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned results
                     * @return Limit Number of returned results
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results
                     * @param Limit Number of returned results
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::vector<std::string> m_jobIds;
                    bool m_jobIdsHasBeenSet;

                    /**
                     * Filter.
<li> `job-id` - String - Optional - Filter by job ID.</li>
<li> `job-name` - String - Optional - Filter by job name.</li>
<li> `job-state` - String - Optional - Filter by job state.</li>
<li> `zone` - String - Optional - Filter by availability zone.</li>
<li> `tag-key` - String - Optional - Filter by tag key.</li>
<li> `tag-value` - String - Optional - Filter by tag value.</li>
<li> `tag:tag-key` - String - Optional - Filter by tag key-value pair. The tag-key should be replaced by a specified tag key.</li>
It cannot be specified together with the `JobIds` parameter.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBSREQUEST_H_
