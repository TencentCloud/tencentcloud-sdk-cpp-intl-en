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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBELOGSREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBELOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/LogFilter.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeLogs request structure.
                */
                class DescribeLogsRequest : public AbstractModel
                {
                public:
                    DescribeLogsRequest();
                    ~DescribeLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Specify the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     * @return InstanceId <p>Specify the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Specify the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     * @param _instanceId <p>Specify the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
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
                     * 获取<p>Start time of retrieval.</p><p>Parameter format: YYYY-MM-DD HH:mm:ss, for example 2026-03-06 00:00:00. The returned result contains only the logs at this time point and afterward.</p>
                     * @return StartTime <p>Start time of retrieval.</p><p>Parameter format: YYYY-MM-DD HH:mm:ss, for example 2026-03-06 00:00:00. The returned result contains only the logs at this time point and afterward.</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Start time of retrieval.</p><p>Parameter format: YYYY-MM-DD HH:mm:ss, for example 2026-03-06 00:00:00. The returned result contains only the logs at this time point and afterward.</p>
                     * @param _startTime <p>Start time of retrieval.</p><p>Parameter format: YYYY-MM-DD HH:mm:ss, for example 2026-03-06 00:00:00. The returned result contains only the logs at this time point and afterward.</p>
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
                     * 获取<p>End time of log retrieval.</p><p>Parameter format: YYYY-MM-DD HH:mm:ss, for example 2026-03-06 23:59:59. The returned result contains only the logs at this time point and earlier.</p>
                     * @return EndTime <p>End time of log retrieval.</p><p>Parameter format: YYYY-MM-DD HH:mm:ss, for example 2026-03-06 23:59:59. The returned result contains only the logs at this time point and earlier.</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>End time of log retrieval.</p><p>Parameter format: YYYY-MM-DD HH:mm:ss, for example 2026-03-06 23:59:59. The returned result contains only the logs at this time point and earlier.</p>
                     * @param _endTime <p>End time of log retrieval.</p><p>Parameter format: YYYY-MM-DD HH:mm:ss, for example 2026-03-06 23:59:59. The returned result contains only the logs at this time point and earlier.</p>
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
                     * 获取<p>Log type.</p><p>Enumeration value:</p><ul><li>auditLog: Audit log.</li></ul>
                     * @return LogType <p>Log type.</p><p>Enumeration value:</p><ul><li>auditLog: Audit log.</li></ul>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>Log type.</p><p>Enumeration value:</p><ul><li>auditLog: Audit log.</li></ul>
                     * @param _logType <p>Log type.</p><p>Enumeration value:</p><ul><li>auditLog: Audit log.</li></ul>
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
                     * 获取<p>Filter conditions.</p>
                     * @return LogFilter <p>Filter conditions.</p>
                     * 
                     */
                    std::vector<LogFilter> GetLogFilter() const;

                    /**
                     * 设置<p>Filter conditions.</p>
                     * @param _logFilter <p>Filter conditions.</p>
                     * 
                     */
                    void SetLogFilter(const std::vector<LogFilter>& _logFilter);

                    /**
                     * 判断参数 LogFilter 是否已赋值
                     * @return LogFilter 是否已赋值
                     * 
                     */
                    bool LogFilterHasBeenSet() const;

                    /**
                     * 获取<p>List size of returned logs per page.</p><ul><li>Default value: 20.</li><li>Value ranges from 1 to 100.</li></ul>
                     * @return Limit <p>List size of returned logs per page.</p><ul><li>Default value: 20.</li><li>Value ranges from 1 to 100.</li></ul>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>List size of returned logs per page.</p><ul><li>Default value: 20.</li><li>Value ranges from 1 to 100.</li></ul>
                     * @param _limit <p>List size of returned logs per page.</p><ul><li>Default value: 20.</li><li>Value ranges from 1 to 100.</li></ul>
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
                     * 获取<p>Starting offset amount of pagination.</p><ul><li>Default: 0.</li><li>Value: Multiple of Limit. Calculation formula: offset=limit*(page number-1).</li></ul>
                     * @return Offset <p>Starting offset amount of pagination.</p><ul><li>Default: 0.</li><li>Value: Multiple of Limit. Calculation formula: offset=limit*(page number-1).</li></ul>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Starting offset amount of pagination.</p><ul><li>Default: 0.</li><li>Value: Multiple of Limit. Calculation formula: offset=limit*(page number-1).</li></ul>
                     * @param _offset <p>Starting offset amount of pagination.</p><ul><li>Default: 0.</li><li>Value: Multiple of Limit. Calculation formula: offset=limit*(page number-1).</li></ul>
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
                     * 获取<p>Log sorting method. Default value is DESC. Values are as follows:</p><ul><li>ASC: Sort in ascending order by time with the earliest log first.</li><li>DESC: Sort in descending order with the latest log first.</li></ul>
                     * @return Order <p>Log sorting method. Default value is DESC. Values are as follows:</p><ul><li>ASC: Sort in ascending order by time with the earliest log first.</li><li>DESC: Sort in descending order with the latest log first.</li></ul>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>Log sorting method. Default value is DESC. Values are as follows:</p><ul><li>ASC: Sort in ascending order by time with the earliest log first.</li><li>DESC: Sort in descending order with the latest log first.</li></ul>
                     * @param _order <p>Log sorting method. Default value is DESC. Values are as follows:</p><ul><li>ASC: Sort in ascending order by time with the earliest log first.</li><li>DESC: Sort in descending order with the latest log first.</li></ul>
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
                     * 获取<p>Sorting field. Specifies the field used to sort logs.</p>
                     * @return OrderBy <p>Sorting field. Specifies the field used to sort logs.</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>Sorting field. Specifies the field used to sort logs.</p>
                     * @param _orderBy <p>Sorting field. Specifies the field used to sort logs.</p>
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
                     * <p>Specify the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Start time of retrieval.</p><p>Parameter format: YYYY-MM-DD HH:mm:ss, for example 2026-03-06 00:00:00. The returned result contains only the logs at this time point and afterward.</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>End time of log retrieval.</p><p>Parameter format: YYYY-MM-DD HH:mm:ss, for example 2026-03-06 23:59:59. The returned result contains only the logs at this time point and earlier.</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Log type.</p><p>Enumeration value:</p><ul><li>auditLog: Audit log.</li></ul>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>Filter conditions.</p>
                     */
                    std::vector<LogFilter> m_logFilter;
                    bool m_logFilterHasBeenSet;

                    /**
                     * <p>List size of returned logs per page.</p><ul><li>Default value: 20.</li><li>Value ranges from 1 to 100.</li></ul>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Starting offset amount of pagination.</p><ul><li>Default: 0.</li><li>Value: Multiple of Limit. Calculation formula: offset=limit*(page number-1).</li></ul>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Log sorting method. Default value is DESC. Values are as follows:</p><ul><li>ASC: Sort in ascending order by time with the earliest log first.</li><li>DESC: Sort in descending order with the latest log first.</li></ul>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>Sorting field. Specifies the field used to sort logs.</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBELOGSREQUEST_H_
