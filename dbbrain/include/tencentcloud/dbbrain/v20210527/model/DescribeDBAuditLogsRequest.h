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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBAUDITLOGSREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBAUDITLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/AuditLogQueryFilter.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeDBAuditLogs request structure.
                */
                class DescribeDBAuditLogsRequest : public AbstractModel
                {
                public:
                    DescribeDBAuditLogsRequest();
                    ~DescribeDBAuditLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Service product type. Currently, Cloud API only supports: dcdb, mariadb (cdb and cynosdb have been migrated to the central platform).</p>
                     * @return Product <p>Service product type. Currently, Cloud API only supports: dcdb, mariadb (cdb and cynosdb have been migrated to the central platform).</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>Service product type. Currently, Cloud API only supports: dcdb, mariadb (cdb and cynosdb have been migrated to the central platform).</p>
                     * @param _product <p>Service product type. Currently, Cloud API only supports: dcdb, mariadb (cdb and cynosdb have been migrated to the central platform).</p>
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取<p>Start time, format yyyy-MM-dd HH:mm:ss.</p>
                     * @return StartTime <p>Start time, format yyyy-MM-dd HH:mm:ss.</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Start time, format yyyy-MM-dd HH:mm:ss.</p>
                     * @param _startTime <p>Start time, format yyyy-MM-dd HH:mm:ss.</p>
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
                     * 获取<p>End time, format: yyyy-MM-dd HH:mm:ss.</p>
                     * @return EndTime <p>End time, format: yyyy-MM-dd HH:mm:ss.</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>End time, format: yyyy-MM-dd HH:mm:ss.</p>
                     * @param _endTime <p>End time, format: yyyy-MM-dd HH:mm:ss.</p>
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
                     * 获取<p>Instance ID, required. In dcdb and mariadb scenarios, query audit logs by instance dimension.</p>
                     * @return InstanceId <p>Instance ID, required. In dcdb and mariadb scenarios, query audit logs by instance dimension.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID, required. In dcdb and mariadb scenarios, query audit logs by instance dimension.</p>
                     * @param _instanceId <p>Instance ID, required. In dcdb and mariadb scenarios, query audit logs by instance dimension.</p>
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
                     * 获取<p>Log type: Proxy log, DB database log, All.</p>
                     * @return LogType <p>Log type: Proxy log, DB database log, All.</p>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>Log type: Proxy log, DB database log, All.</p>
                     * @param _logType <p>Log type: Proxy log, DB database log, All.</p>
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取<p>Sorting field. Default: Timestamp.</p>
                     * @return SortBy <p>Sorting field. Default: Timestamp.</p>
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置<p>Sorting field. Default: Timestamp.</p>
                     * @param _sortBy <p>Sorting field. Default: Timestamp.</p>
                     * 
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取<p>Sorting method: ASC for ascending order, DESC for descending order. Default: DESC.</p>
                     * @return OrderBy <p>Sorting method: ASC for ascending order, DESC for descending order. Default: DESC.</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>Sorting method: ASC for ascending order, DESC for descending order. Default: DESC.</p>
                     * @param _orderBy <p>Sorting method: ASC for ascending order, DESC for descending order. Default: DESC.</p>
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
                     * 获取<p>Offset. Default value: 0.</p>
                     * @return Offset <p>Offset. Default value: 0.</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Offset. Default value: 0.</p>
                     * @param _offset <p>Offset. Default value: 0.</p>
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
                     * 获取<p>Number of returned results. Default: 20. Maximum: 100.</p>
                     * @return Limit <p>Number of returned results. Default: 20. Maximum: 100.</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Number of returned results. Default: 20. Maximum: 100.</p>
                     * @param _limit <p>Number of returned results. Default: 20. Maximum: 100.</p>
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
                     * 获取<p>SQL start time (millisecond-level timestamp), used when performing a join query by QueryId.</p>
                     * @return SqlStartTime <p>SQL start time (millisecond-level timestamp), used when performing a join query by QueryId.</p>
                     * 
                     */
                    int64_t GetSqlStartTime() const;

                    /**
                     * 设置<p>SQL start time (millisecond-level timestamp), used when performing a join query by QueryId.</p>
                     * @param _sqlStartTime <p>SQL start time (millisecond-level timestamp), used when performing a join query by QueryId.</p>
                     * 
                     */
                    void SetSqlStartTime(const int64_t& _sqlStartTime);

                    /**
                     * 判断参数 SqlStartTime 是否已赋值
                     * @return SqlStartTime 是否已赋值
                     * 
                     */
                    bool SqlStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>A collection of query filter criteria for audit logs.</p>
                     * @return Filter <p>A collection of query filter criteria for audit logs.</p>
                     * 
                     */
                    AuditLogQueryFilter GetFilter() const;

                    /**
                     * 设置<p>A collection of query filter criteria for audit logs.</p>
                     * @param _filter <p>A collection of query filter criteria for audit logs.</p>
                     * 
                     */
                    void SetFilter(const AuditLogQueryFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取<p>Cluster ID. Query audit logs for the dcdb product at the cluster level</p>
                     * @return ClusterId <p>Cluster ID. Query audit logs for the dcdb product at the cluster level</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Cluster ID. Query audit logs for the dcdb product at the cluster level</p>
                     * @param _clusterId <p>Cluster ID. Query audit logs for the dcdb product at the cluster level</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * <p>Service product type. Currently, Cloud API only supports: dcdb, mariadb (cdb and cynosdb have been migrated to the central platform).</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>Start time, format yyyy-MM-dd HH:mm:ss.</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>End time, format: yyyy-MM-dd HH:mm:ss.</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Instance ID, required. In dcdb and mariadb scenarios, query audit logs by instance dimension.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Log type: Proxy log, DB database log, All.</p>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>Sorting field. Default: Timestamp.</p>
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * <p>Sorting method: ASC for ascending order, DESC for descending order. Default: DESC.</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>Offset. Default value: 0.</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Number of returned results. Default: 20. Maximum: 100.</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>SQL start time (millisecond-level timestamp), used when performing a join query by QueryId.</p>
                     */
                    int64_t m_sqlStartTime;
                    bool m_sqlStartTimeHasBeenSet;

                    /**
                     * <p>A collection of query filter criteria for audit logs.</p>
                     */
                    AuditLogQueryFilter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * <p>Cluster ID. Query audit logs for the dcdb product at the cluster level</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBAUDITLOGSREQUEST_H_
