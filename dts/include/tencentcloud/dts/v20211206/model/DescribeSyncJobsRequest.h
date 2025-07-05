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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESYNCJOBSREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESYNCJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/TagFilter.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DescribeSyncJobs request structure.
                */
                class DescribeSyncJobsRequest : public AbstractModel
                {
                public:
                    DescribeSyncJobsRequest();
                    ~DescribeSyncJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Sync task ID, such as `sync-werwfs23`.
                     * @return JobId Sync task ID, such as `sync-werwfs23`.
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Sync task ID, such as `sync-werwfs23`.
                     * @param _jobId Sync task ID, such as `sync-werwfs23`.
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
                     * 获取Sync task name
                     * @return JobName Sync task name
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置Sync task name
                     * @param _jobName Sync task name
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取Sort by field, such as `CreateTime`.
                     * @return Order Sort by field, such as `CreateTime`.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sort by field, such as `CreateTime`.
                     * @param _order Sort by field, such as `CreateTime`.
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取Sorting order. Valid values: `ASC`, `DESC`. Default value: `DESC` by `CreateTime`.
                     * @return OrderSeq Sorting order. Valid values: `ASC`, `DESC`. Default value: `DESC` by `CreateTime`.
                     * 
                     */
                    std::string GetOrderSeq() const;

                    /**
                     * 设置Sorting order. Valid values: `ASC`, `DESC`. Default value: `DESC` by `CreateTime`.
                     * @param _orderSeq Sorting order. Valid values: `ASC`, `DESC`. Default value: `DESC` by `CreateTime`.
                     * 
                     */
                    void SetOrderSeq(const std::string& _orderSeq);

                    /**
                     * 判断参数 OrderSeq 是否已赋值
                     * @return OrderSeq 是否已赋值
                     * 
                     */
                    bool OrderSeqHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: `0`.
                     * @return Offset Offset. Default value: `0`.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: `0`.
                     * @param _offset Offset. Default value: `0`.
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
                     * 获取Number of sync task instances to be returned. Value range: [1,100]. Default value: `20`.
                     * @return Limit Number of sync task instances to be returned. Value range: [1,100]. Default value: `20`.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of sync task instances to be returned. Value range: [1,100]. Default value: `20`.
                     * @param _limit Number of sync task instances to be returned. Value range: [1,100]. Default value: `20`.
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
                     * 获取The set of status values, such as `Initialized,CheckPass,Running,ResumableErr,Stopped`.
                     * @return Status The set of status values, such as `Initialized,CheckPass,Running,ResumableErr,Stopped`.
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置The set of status values, such as `Initialized,CheckPass,Running,ResumableErr,Stopped`.
                     * @param _status The set of status values, such as `Initialized,CheckPass,Running,ResumableErr,Stopped`.
                     * 
                     */
                    void SetStatus(const std::vector<std::string>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Running mode. Valid values: `Immediate`, `Timed`.
                     * @return RunMode Running mode. Valid values: `Immediate`, `Timed`.
                     * 
                     */
                    std::string GetRunMode() const;

                    /**
                     * 设置Running mode. Valid values: `Immediate`, `Timed`.
                     * @param _runMode Running mode. Valid values: `Immediate`, `Timed`.
                     * 
                     */
                    void SetRunMode(const std::string& _runMode);

                    /**
                     * 判断参数 RunMode 是否已赋值
                     * @return RunMode 是否已赋值
                     * 
                     */
                    bool RunModeHasBeenSet() const;

                    /**
                     * 获取Task type, such as `mysql2mysql` (sync from MySQL to MySQL).
                     * @return JobType Task type, such as `mysql2mysql` (sync from MySQL to MySQL).
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 设置Task type, such as `mysql2mysql` (sync from MySQL to MySQL).
                     * @param _jobType Task type, such as `mysql2mysql` (sync from MySQL to MySQL).
                     * 
                     */
                    void SetJobType(const std::string& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取Billing mode. Valid values: `PrePay` (prepaid); `PostPay` (postpaid).
                     * @return PayMode Billing mode. Valid values: `PrePay` (prepaid); `PostPay` (postpaid).
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Billing mode. Valid values: `PrePay` (prepaid); `PostPay` (postpaid).
                     * @param _payMode Billing mode. Valid values: `PrePay` (prepaid); `PostPay` (postpaid).
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取tag
                     * @return TagFilters tag
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置tag
                     * @param _tagFilters tag
                     * 
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                private:

                    /**
                     * Sync task ID, such as `sync-werwfs23`.
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Sync task name
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * Sort by field, such as `CreateTime`.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sorting order. Valid values: `ASC`, `DESC`. Default value: `DESC` by `CreateTime`.
                     */
                    std::string m_orderSeq;
                    bool m_orderSeqHasBeenSet;

                    /**
                     * Offset. Default value: `0`.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of sync task instances to be returned. Value range: [1,100]. Default value: `20`.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The set of status values, such as `Initialized,CheckPass,Running,ResumableErr,Stopped`.
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Running mode. Valid values: `Immediate`, `Timed`.
                     */
                    std::string m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * Task type, such as `mysql2mysql` (sync from MySQL to MySQL).
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * Billing mode. Valid values: `PrePay` (prepaid); `PostPay` (postpaid).
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * tag
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESYNCJOBSREQUEST_H_
