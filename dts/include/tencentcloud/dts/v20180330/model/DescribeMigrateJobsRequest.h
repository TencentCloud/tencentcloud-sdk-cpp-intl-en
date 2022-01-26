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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_DESCRIBEMIGRATEJOBSREQUEST_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_DESCRIBEMIGRATEJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20180330/model/TagFilter.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * DescribeMigrateJobs request structure.
                */
                class DescribeMigrateJobsRequest : public AbstractModel
                {
                public:
                    DescribeMigrateJobsRequest();
                    ~DescribeMigrateJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Data migration task ID
                     * @return JobId Data migration task ID
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Data migration task ID
                     * @param JobId Data migration task ID
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Data migration task name
                     * @return JobName Data migration task name
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置Data migration task name
                     * @param JobName Data migration task name
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取Sort by field. Value range: JobId, Status, JobName, MigrateType, RunMode, CreateTime
                     * @return Order Sort by field. Value range: JobId, Status, JobName, MigrateType, RunMode, CreateTime
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sort by field. Value range: JobId, Status, JobName, MigrateType, RunMode, CreateTime
                     * @param Order Sort by field. Value range: JobId, Status, JobName, MigrateType, RunMode, CreateTime
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取Sorting order. Value range: ASC (ascending), DESC (descending)
                     * @return OrderSeq Sorting order. Value range: ASC (ascending), DESC (descending)
                     */
                    std::string GetOrderSeq() const;

                    /**
                     * 设置Sorting order. Value range: ASC (ascending), DESC (descending)
                     * @param OrderSeq Sorting order. Value range: ASC (ascending), DESC (descending)
                     */
                    void SetOrderSeq(const std::string& _orderSeq);

                    /**
                     * 判断参数 OrderSeq 是否已赋值
                     * @return OrderSeq 是否已赋值
                     */
                    bool OrderSeqHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0
                     * @return Offset Offset. Default value: 0
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0
                     * @param Offset Offset. Default value: 0
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of the returned instances. Value range: [1, 100]. Default value: 20
                     * @return Limit Number of the returned instances. Value range: [1, 100]. Default value: 20
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of the returned instances. Value range: [1, 100]. Default value: 20
                     * @param Limit Number of the returned instances. Value range: [1, 100]. Default value: 20
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Tag filter.
                     * @return TagFilters Tag filter.
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置Tag filter.
                     * @param TagFilters Tag filter.
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     */
                    bool TagFiltersHasBeenSet() const;

                private:

                    /**
                     * Data migration task ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Data migration task name
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * Sort by field. Value range: JobId, Status, JobName, MigrateType, RunMode, CreateTime
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sorting order. Value range: ASC (ascending), DESC (descending)
                     */
                    std::string m_orderSeq;
                    bool m_orderSeqHasBeenSet;

                    /**
                     * Offset. Default value: 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of the returned instances. Value range: [1, 100]. Default value: 20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Tag filter.
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_DESCRIBEMIGRATEJOBSREQUEST_H_
