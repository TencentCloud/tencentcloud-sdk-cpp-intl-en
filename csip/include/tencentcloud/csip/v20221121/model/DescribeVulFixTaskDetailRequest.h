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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULFIXTASKDETAILREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULFIXTASKDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeVulFixTaskDetail request structure.
                */
                class DescribeVulFixTaskDetailRequest : public AbstractModel
                {
                public:
                    DescribeVulFixTaskDetailRequest();
                    ~DescribeVulFixTaskDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Repair task ID</p>
                     * @return TaskId <p>Repair task ID</p>
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置<p>Repair task ID</p>
                     * @param _taskId <p>Repair task ID</p>
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>Paging offset<br>Value ranges from 0 to +∞<br>Default value: 0</p>
                     * @return Offset <p>Paging offset<br>Value ranges from 0 to +∞<br>Default value: 0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Paging offset<br>Value ranges from 0 to +∞<br>Default value: 0</p>
                     * @param _offset <p>Paging offset<br>Value ranges from 0 to +∞<br>Default value: 0</p>
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
                     * 获取<p>Number of results per page<br>Value ranges from 1 to 100<br>Default value: 10</p>
                     * @return Limit <p>Number of results per page<br>Value ranges from 1 to 100<br>Default value: 10</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Number of results per page<br>Value ranges from 1 to 100<br>Default value: 10</p>
                     * @param _limit <p>Number of results per page<br>Value ranges from 1 to 100<br>Default value: 10</p>
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
                     * 获取<p>Filter criteria<br>Supported Filter.Name:<br>InstanceId - Exact match, filter by host instance ID<br>VulId - Exact match, filter by vulnerability ID, filter out hosts under a certain vulnerability<br>KBId - Exact match, filter by KB Patch ID, filter out hosts under a certain KB patch<br>Status - Exact match, filter by execution status: 0-Initial status 1-Issued 11-Client confirmed 2-Repair completed 3-Client offline 4-Timeout 5-Failure 6-No support 9-Waiting for snapshot creation to complete 10-Snapshot creation failed<br>FixStatus - Exact match, filter by repair result: 0-Initial status 1-Repair successful 2-Fix failure<br>SnapshotStatus - Exact match, filter by snapshot status: -1-No need to create snapshot 0-Not started 1-In progress 2-Completed 3-Creation failure</p>
                     * @return Filters <p>Filter criteria<br>Supported Filter.Name:<br>InstanceId - Exact match, filter by host instance ID<br>VulId - Exact match, filter by vulnerability ID, filter out hosts under a certain vulnerability<br>KBId - Exact match, filter by KB Patch ID, filter out hosts under a certain KB patch<br>Status - Exact match, filter by execution status: 0-Initial status 1-Issued 11-Client confirmed 2-Repair completed 3-Client offline 4-Timeout 5-Failure 6-No support 9-Waiting for snapshot creation to complete 10-Snapshot creation failed<br>FixStatus - Exact match, filter by repair result: 0-Initial status 1-Repair successful 2-Fix failure<br>SnapshotStatus - Exact match, filter by snapshot status: -1-No need to create snapshot 0-Not started 1-In progress 2-Completed 3-Creation failure</p>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>Filter criteria<br>Supported Filter.Name:<br>InstanceId - Exact match, filter by host instance ID<br>VulId - Exact match, filter by vulnerability ID, filter out hosts under a certain vulnerability<br>KBId - Exact match, filter by KB Patch ID, filter out hosts under a certain KB patch<br>Status - Exact match, filter by execution status: 0-Initial status 1-Issued 11-Client confirmed 2-Repair completed 3-Client offline 4-Timeout 5-Failure 6-No support 9-Waiting for snapshot creation to complete 10-Snapshot creation failed<br>FixStatus - Exact match, filter by repair result: 0-Initial status 1-Repair successful 2-Fix failure<br>SnapshotStatus - Exact match, filter by snapshot status: -1-No need to create snapshot 0-Not started 1-In progress 2-Completed 3-Creation failure</p>
                     * @param _filters <p>Filter criteria<br>Supported Filter.Name:<br>InstanceId - Exact match, filter by host instance ID<br>VulId - Exact match, filter by vulnerability ID, filter out hosts under a certain vulnerability<br>KBId - Exact match, filter by KB Patch ID, filter out hosts under a certain KB patch<br>Status - Exact match, filter by execution status: 0-Initial status 1-Issued 11-Client confirmed 2-Repair completed 3-Client offline 4-Timeout 5-Failure 6-No support 9-Waiting for snapshot creation to complete 10-Snapshot creation failed<br>FixStatus - Exact match, filter by repair result: 0-Initial status 1-Repair successful 2-Fix failure<br>SnapshotStatus - Exact match, filter by snapshot status: -1-No need to create snapshot 0-Not started 1-In progress 2-Completed 3-Creation failure</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>Sorting field<br>Enumeration value:<br>StartTime: Sort by repair start time<br>EndTime: Sort by repair end time</p>
                     * @return Order <p>Sorting field<br>Enumeration value:<br>StartTime: Sort by repair start time<br>EndTime: Sort by repair end time</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>Sorting field<br>Enumeration value:<br>StartTime: Sort by repair start time<br>EndTime: Sort by repair end time</p>
                     * @param _order <p>Sorting field<br>Enumeration value:<br>StartTime: Sort by repair start time<br>EndTime: Sort by repair end time</p>
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
                     * 获取<p>Sorting method<br>Enumeration value:<br>asc: Ascending<br>desc: Descending<br>Default value: desc</p>
                     * @return By <p>Sorting method<br>Enumeration value:<br>asc: Ascending<br>desc: Descending<br>Default value: desc</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>Sorting method<br>Enumeration value:<br>asc: Ascending<br>desc: Descending<br>Default value: desc</p>
                     * @param _by <p>Sorting method<br>Enumeration value:<br>asc: Ascending<br>desc: Descending<br>Default value: desc</p>
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取Group Account Member ID
                     * @return MemberId Group Account Member ID
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置Group Account Member ID
                     * @param _memberId Group Account Member ID
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * <p>Repair task ID</p>
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Paging offset<br>Value ranges from 0 to +∞<br>Default value: 0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Number of results per page<br>Value ranges from 1 to 100<br>Default value: 10</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Filter criteria<br>Supported Filter.Name:<br>InstanceId - Exact match, filter by host instance ID<br>VulId - Exact match, filter by vulnerability ID, filter out hosts under a certain vulnerability<br>KBId - Exact match, filter by KB Patch ID, filter out hosts under a certain KB patch<br>Status - Exact match, filter by execution status: 0-Initial status 1-Issued 11-Client confirmed 2-Repair completed 3-Client offline 4-Timeout 5-Failure 6-No support 9-Waiting for snapshot creation to complete 10-Snapshot creation failed<br>FixStatus - Exact match, filter by repair result: 0-Initial status 1-Repair successful 2-Fix failure<br>SnapshotStatus - Exact match, filter by snapshot status: -1-No need to create snapshot 0-Not started 1-In progress 2-Completed 3-Creation failure</p>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Sorting field<br>Enumeration value:<br>StartTime: Sort by repair start time<br>EndTime: Sort by repair end time</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>Sorting method<br>Enumeration value:<br>asc: Ascending<br>desc: Descending<br>Default value: desc</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * Group Account Member ID
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULFIXTASKDETAILREQUEST_H_
