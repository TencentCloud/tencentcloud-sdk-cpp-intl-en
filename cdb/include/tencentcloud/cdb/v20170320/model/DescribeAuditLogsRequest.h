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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEAUDITLOGSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEAUDITLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/InstanceAuditLogFilters.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
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
                     * 获取Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * @return InstanceId Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * @param _instanceId Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
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
                     * 获取Start time. We recommend that the interval between start and end time does not exceed 7 days.
                     * @return StartTime Start time. We recommend that the interval between start and end time does not exceed 7 days.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time. We recommend that the interval between start and end time does not exceed 7 days.
                     * @param _startTime Start time. We recommend that the interval between start and end time does not exceed 7 days.
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
                     * 获取End time. We recommend that the interval between start and end time does not exceed 7 days.
                     * @return EndTime End time. We recommend that the interval between start and end time does not exceed 7 days.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time. We recommend that the interval between start and end time does not exceed 7 days.
                     * @param _endTime End time. We recommend that the interval between start and end time does not exceed 7 days.
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
                     * 获取The pagination parameter, which specifies the number of entries per page. Maximum value: 100 (default).
                     * @return Limit The pagination parameter, which specifies the number of entries per page. Maximum value: 100 (default).
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The pagination parameter, which specifies the number of entries per page. Maximum value: 100 (default).
                     * @param _limit The pagination parameter, which specifies the number of entries per page. Maximum value: 100 (default).
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
                     * 获取Log offset, supports up to 65535 log entries for offset querying. Fill in the range: 0 - 65535.
                     * @return Offset Log offset, supports up to 65535 log entries for offset querying. Fill in the range: 0 - 65535.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Log offset, supports up to 65535 log entries for offset querying. Fill in the range: 0 - 65535.
                     * @param _offset Log offset, supports up to 65535 log entries for offset querying. Fill in the range: 0 - 65535.
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
                     * 获取Sort order. Valid values: "ASC" - Ascending order, "DESC" - Descending order. Default value: "DESC".
                     * @return Order Sort order. Valid values: "ASC" - Ascending order, "DESC" - Descending order. Default value: "DESC".
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sort order. Valid values: "ASC" - Ascending order, "DESC" - Descending order. Default value: "DESC".
                     * @param _order Sort order. Valid values: "ASC" - Ascending order, "DESC" - Descending order. Default value: "DESC".
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
                     * 获取Field to sort by. Valid values:
"timestamp" - timestamp;
"affectRows" - Number of affected rows.
"execTime" - Execution time.
                     * @return OrderBy Field to sort by. Valid values:
"timestamp" - timestamp;
"affectRows" - Number of affected rows.
"execTime" - Execution time.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Field to sort by. Valid values:
"timestamp" - timestamp;
"affectRows" - Number of affected rows.
"execTime" - Execution time.
                     * @param _orderBy Field to sort by. Valid values:
"timestamp" - timestamp;
"affectRows" - Number of affected rows.
"execTime" - Execution time.
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
                     * 获取Filter. Multiple values are in `AND` relationship.
                     * @return LogFilter Filter. Multiple values are in `AND` relationship.
                     * 
                     */
                    std::vector<InstanceAuditLogFilters> GetLogFilter() const;

                    /**
                     * 设置Filter. Multiple values are in `AND` relationship.
                     * @param _logFilter Filter. Multiple values are in `AND` relationship.
                     * 
                     */
                    void SetLogFilter(const std::vector<InstanceAuditLogFilters>& _logFilter);

                    /**
                     * 判断参数 LogFilter 是否已赋值
                     * @return LogFilter 是否已赋值
                     * 
                     */
                    bool LogFilterHasBeenSet() const;

                private:

                    /**
                     * Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Start time. We recommend that the interval between start and end time does not exceed 7 days.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time. We recommend that the interval between start and end time does not exceed 7 days.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The pagination parameter, which specifies the number of entries per page. Maximum value: 100 (default).
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Log offset, supports up to 65535 log entries for offset querying. Fill in the range: 0 - 65535.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sort order. Valid values: "ASC" - Ascending order, "DESC" - Descending order. Default value: "DESC".
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Field to sort by. Valid values:
"timestamp" - timestamp;
"affectRows" - Number of affected rows.
"execTime" - Execution time.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Filter. Multiple values are in `AND` relationship.
                     */
                    std::vector<InstanceAuditLogFilters> m_logFilter;
                    bool m_logFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEAUDITLOGSREQUEST_H_
