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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CREATEAUDITLOGFILEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CREATEAUDITLOGFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/AuditLogFilter.h>
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
                * CreateAuditLogFile request structure.
                */
                class CreateAuditLogFileRequest : public AbstractModel
                {
                public:
                    CreateAuditLogFileRequest();
                    ~CreateAuditLogFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.comom/document/product/236/15872?from_cn_redirect=1) API.
                     * @return InstanceId Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.comom/document/product/236/15872?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.comom/document/product/236/15872?from_cn_redirect=1) API.
                     * @param _instanceId Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.comom/document/product/236/15872?from_cn_redirect=1) API.
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
                     * 获取Field to sort by. Valid values: "timestamp" - Timestamp; "affectRows" - Number of affected rows; "execTime" - Execution time. Default value: "timestamp".
                     * @return OrderBy Field to sort by. Valid values: "timestamp" - Timestamp; "affectRows" - Number of affected rows; "execTime" - Execution time. Default value: "timestamp".
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Field to sort by. Valid values: "timestamp" - Timestamp; "affectRows" - Number of affected rows; "execTime" - Execution time. Default value: "timestamp".
                     * @param _orderBy Field to sort by. Valid values: "timestamp" - Timestamp; "affectRows" - Number of affected rows; "execTime" - Execution time. Default value: "timestamp".
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
                     * 获取Filter conditions. You can filter logs based on these conditions.
                     * @return LogFilter Filter conditions. You can filter logs based on these conditions.
                     * 
                     */
                    std::vector<InstanceAuditLogFilters> GetLogFilter() const;

                    /**
                     * 设置Filter conditions. You can filter logs based on these conditions.
                     * @param _logFilter Filter conditions. You can filter logs based on these conditions.
                     * 
                     */
                    void SetLogFilter(const std::vector<InstanceAuditLogFilters>& _logFilter);

                    /**
                     * 判断参数 LogFilter 是否已赋值
                     * @return LogFilter 是否已赋值
                     * 
                     */
                    bool LogFilterHasBeenSet() const;

                    /**
                     * 获取Columns to include in the download.
                     * @return ColumnFilter Columns to include in the download.
                     * 
                     */
                    std::vector<std::string> GetColumnFilter() const;

                    /**
                     * 设置Columns to include in the download.
                     * @param _columnFilter Columns to include in the download.
                     * 
                     */
                    void SetColumnFilter(const std::vector<std::string>& _columnFilter);

                    /**
                     * 判断参数 ColumnFilter 是否已赋值
                     * @return ColumnFilter 是否已赋值
                     * 
                     */
                    bool ColumnFilterHasBeenSet() const;

                private:

                    /**
                     * Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.comom/document/product/236/15872?from_cn_redirect=1) API.
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
                     * Sort order. Valid values: "ASC" - Ascending order, "DESC" - Descending order. Default value: "DESC".
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Field to sort by. Valid values: "timestamp" - Timestamp; "affectRows" - Number of affected rows; "execTime" - Execution time. Default value: "timestamp".
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Deprecated.
                     */
                    AuditLogFilter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * Filter conditions. You can filter logs based on these conditions.
                     */
                    std::vector<InstanceAuditLogFilters> m_logFilter;
                    bool m_logFilterHasBeenSet;

                    /**
                     * Columns to include in the download.
                     */
                    std::vector<std::string> m_columnFilter;
                    bool m_columnFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATEAUDITLOGFILEREQUEST_H_
