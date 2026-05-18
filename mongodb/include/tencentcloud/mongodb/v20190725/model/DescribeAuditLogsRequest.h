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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEAUDITLOGSREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEAUDITLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/AuditLogFilter.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeAuditLogs request structure.
                */
                class DescribeAuditLogsRequest : public AbstractModel
                {
                public:
                    DescribeAuditLogsRequest();
                    ~DescribeAuditLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, in the format of cmgo-xftsghuy. It is the same as the instance ID displayed on the TencentDB console page.
                     * @return InstanceId Instance ID, in the format of cmgo-xftsghuy. It is the same as the instance ID displayed on the TencentDB console page.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, in the format of cmgo-xftsghuy. It is the same as the instance ID displayed on the TencentDB console page.
                     * @param _instanceId Instance ID, in the format of cmgo-xftsghuy. It is the same as the instance ID displayed on the TencentDB console page.
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
                     * 获取Start time, format: "2017-07-12 10:29:20".
                     * @return StartTime Start time, format: "2017-07-12 10:29:20".
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time, format: "2017-07-12 10:29:20".
                     * @param _startTime Start time, format: "2017-07-12 10:29:20".
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
                     * 获取End time, format: "2017-07-12 10:29:20".
                     * @return EndTime End time, format: "2017-07-12 10:29:20".
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time, format: "2017-07-12 10:29:20".
                     * @param _endTime End time, format: "2017-07-12 10:29:20".
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
                     * 获取Filter conditions. You can filter logs based on these conditions.
                     * @return Filter Filter conditions. You can filter logs based on these conditions.
                     * 
                     */
                    AuditLogFilter GetFilter() const;

                    /**
                     * 设置Filter conditions. You can filter logs based on these conditions.
                     * @param _filter Filter conditions. You can filter logs based on these conditions.
                     * 
                     */
                    void SetFilter(const AuditLogFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取Pagination parameter indicates the number of returned data entries. Default value is 100. Maximum value is 100.
                     * @return Limit Pagination parameter indicates the number of returned data entries. Default value is 100. Maximum value is 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Pagination parameter indicates the number of returned data entries. Default value is 100. Maximum value is 100.
                     * @param _limit Pagination parameter indicates the number of returned data entries. Default value is 100. Maximum value is 100.
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
                     * 获取Pagination offset.
                     * @return Offset Pagination offset.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset.
                     * @param _offset Pagination offset.
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
                     * 获取Sorting method of the audit log.
<ul><li>ASC: ascending.</li><li>DESC: descending order.</li></ul>
                     * @return Order Sorting method of the audit log.
<ul><li>ASC: ascending.</li><li>DESC: descending order.</li></ul>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting method of the audit log.
<ul><li>ASC: ascending.</li><li>DESC: descending order.</li></ul>
                     * @param _order Sorting method of the audit log.
<ul><li>ASC: ascending.</li><li>DESC: descending order.</li></ul>
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
                     * 获取Sorting field of the audit log, including:
<ul><li>timestamp: Timestamp.</li>
<li>affectRows: Number of affected rows.</li>
<li>execTime: Execution time.</li></ul>
                     * @return OrderBy Sorting field of the audit log, including:
<ul><li>timestamp: Timestamp.</li>
<li>affectRows: Number of affected rows.</li>
<li>execTime: Execution time.</li></ul>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting field of the audit log, including:
<ul><li>timestamp: Timestamp.</li>
<li>affectRows: Number of affected rows.</li>
<li>execTime: Execution time.</li></ul>
                     * @param _orderBy Sorting field of the audit log, including:
<ul><li>timestamp: Timestamp.</li>
<li>affectRows: Number of affected rows.</li>
<li>execTime: Execution time.</li></ul>
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                private:

                    /**
                     * Instance ID, in the format of cmgo-xftsghuy. It is the same as the instance ID displayed on the TencentDB console page.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Start time, format: "2017-07-12 10:29:20".
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time, format: "2017-07-12 10:29:20".
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Filter conditions. You can filter logs based on these conditions.
                     */
                    AuditLogFilter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * Pagination parameter indicates the number of returned data entries. Default value is 100. Maximum value is 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sorting method of the audit log.
<ul><li>ASC: ascending.</li><li>DESC: descending order.</li></ul>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sorting field of the audit log, including:
<ul><li>timestamp: Timestamp.</li>
<li>affectRows: Number of affected rows.</li>
<li>execTime: Execution time.</li></ul>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEAUDITLOGSREQUEST_H_
