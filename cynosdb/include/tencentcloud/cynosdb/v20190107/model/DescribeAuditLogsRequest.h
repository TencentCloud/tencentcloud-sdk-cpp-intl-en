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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEAUDITLOGSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEAUDITLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/AuditLogFilter.h>
#include <tencentcloud/cynosdb/v20190107/model/InstanceAuditLogFilter.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
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
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取Start time in the format of "2017-07-12 10:29:20".
                     * @return StartTime Start time in the format of "2017-07-12 10:29:20".
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time in the format of "2017-07-12 10:29:20".
                     * @param _startTime Start time in the format of "2017-07-12 10:29:20".
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
                     * 获取End time in the format: "2017-07-12 10:29:20".
                     * @return EndTime End time in the format: "2017-07-12 10:29:20".
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time in the format: "2017-07-12 10:29:20".
                     * @param _endTime End time in the format: "2017-07-12 10:29:20".
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
                     * 获取Sort order. Supported values: "ASC" - Ascending order, "DESC" - Descending order.
                     * @return Order Sort order. Supported values: "ASC" - Ascending order, "DESC" - Descending order.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sort order. Supported values: "ASC" - Ascending order, "DESC" - Descending order.
                     * @param _order Sort order. Supported values: "ASC" - Ascending order, "DESC" - Descending order.
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
                     * 获取Sorting field. Supported values include:
timestamp
"affectRows" - Number of affected rows
"execTime" - Execution time.
                     * @return OrderBy Sorting field. Supported values include:
timestamp
"affectRows" - Number of affected rows
"execTime" - Execution time.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting field. Supported values include:
timestamp
"affectRows" - Number of affected rows
"execTime" - Execution time.
                     * @param _orderBy Sorting field. Supported values include:
timestamp
"affectRows" - Number of affected rows
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
                     * 获取Deprecated.
                     * @return Filter Deprecated.
                     * @deprecated
                     */
                    AuditLogFilter GetFilter() const;

                    /**
                     * 设置Deprecated.
                     * @param _filter Deprecated.
                     * @deprecated
                     */
                    void SetFilter(const AuditLogFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * @deprecated
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取Pagination parameter. Number of data entries returned per request. Default value: 100. Maximum value: 100.
                     * @return Limit Pagination parameter. Number of data entries returned per request. Default value: 100. Maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination parameter. Number of data entries returned per request. Default value: 100. Maximum value: 100.
                     * @param _limit Pagination parameter. Number of data entries returned per request. Default value: 100. Maximum value: 100.
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
                     * 获取Pagination offset.
Description: The sum of Limit and Offset must be less than or equal to 65536.
                     * @return Offset Pagination offset.
Description: The sum of Limit and Offset must be less than or equal to 65536.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset.
Description: The sum of Limit and Offset must be less than or equal to 65536.
                     * @param _offset Pagination offset.
Description: The sum of Limit and Offset must be less than or equal to 65536.
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
                     * 获取Filter criteria. Multiple values have an AND relationship.
                     * @return LogFilter Filter criteria. Multiple values have an AND relationship.
                     * 
                     */
                    std::vector<InstanceAuditLogFilter> GetLogFilter() const;

                    /**
                     * 设置Filter criteria. Multiple values have an AND relationship.
                     * @param _logFilter Filter criteria. Multiple values have an AND relationship.
                     * 
                     */
                    void SetLogFilter(const std::vector<InstanceAuditLogFilter>& _logFilter);

                    /**
                     * 判断参数 LogFilter 是否已赋值
                     * @return LogFilter 是否已赋值
                     * 
                     */
                    bool LogFilterHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Start time in the format of "2017-07-12 10:29:20".
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time in the format: "2017-07-12 10:29:20".
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Sort order. Supported values: "ASC" - Ascending order, "DESC" - Descending order.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sorting field. Supported values include:
timestamp
"affectRows" - Number of affected rows
"execTime" - Execution time.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Deprecated.
                     */
                    AuditLogFilter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * Pagination parameter. Number of data entries returned per request. Default value: 100. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset.
Description: The sum of Limit and Offset must be less than or equal to 65536.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter criteria. Multiple values have an AND relationship.
                     */
                    std::vector<InstanceAuditLogFilter> m_logFilter;
                    bool m_logFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEAUDITLOGSREQUEST_H_
