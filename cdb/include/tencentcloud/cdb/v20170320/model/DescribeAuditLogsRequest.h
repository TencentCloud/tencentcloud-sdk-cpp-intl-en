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
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取Start time
                     * @return StartTime Start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time
                     * @param _startTime Start time
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
                     * 获取End time
                     * @return EndTime End time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time
                     * @param _endTime End time
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
                     * 获取Pagination offset
                     * @return Offset Pagination offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset
                     * @param _offset Pagination offset
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
                     * 获取Sorting order Valid values: `ASC (ascending), `DESC` (descending).
                     * @return Order Sorting order Valid values: `ASC (ascending), `DESC` (descending).
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting order Valid values: `ASC (ascending), `DESC` (descending).
                     * @param _order Sorting order Valid values: `ASC (ascending), `DESC` (descending).
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
                     * 获取Sorting field Valid values: 
`timestamp`: Timestamp,
`affectRows`: Number of affected rows,
`execTime`: Execution time.
                     * @return OrderBy Sorting field Valid values: 
`timestamp`: Timestamp,
`affectRows`: Number of affected rows,
`execTime`: Execution time.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting field Valid values: 
`timestamp`: Timestamp,
`affectRows`: Number of affected rows,
`execTime`: Execution time.
                     * @param _orderBy Sorting field Valid values: 
`timestamp`: Timestamp,
`affectRows`: Number of affected rows,
`execTime`: Execution time.
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
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The pagination parameter, which specifies the number of entries per page. Maximum value: 100 (default).
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sorting order Valid values: `ASC (ascending), `DESC` (descending).
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sorting field Valid values: 
`timestamp`: Timestamp,
`affectRows`: Number of affected rows,
`execTime`: Execution time.
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
