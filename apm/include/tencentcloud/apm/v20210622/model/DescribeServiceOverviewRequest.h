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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBESERVICEOVERVIEWREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBESERVICEOVERVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/QueryMetricItem.h>
#include <tencentcloud/apm/v20210622/model/Filter.h>
#include <tencentcloud/apm/v20210622/model/OrderBy.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeServiceOverview request structure.
                */
                class DescribeServiceOverviewRequest : public AbstractModel
                {
                public:
                    DescribeServiceOverviewRequest();
                    ~DescribeServiceOverviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Metric list.
                     * @return Metrics Metric list.
                     * 
                     */
                    std::vector<QueryMetricItem> GetMetrics() const;

                    /**
                     * 设置Metric list.
                     * @param _metrics Metric list.
                     * 
                     */
                    void SetMetrics(const std::vector<QueryMetricItem>& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     * 
                     */
                    bool MetricsHasBeenSet() const;

                    /**
                     * 获取Business system id.
                     * @return InstanceId Business system id.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Business system id.
                     * @param _instanceId Business system id.
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
                     * 获取Filter criteria.
                     * @return Filters Filter criteria.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria.
                     * @param _filters Filter criteria.
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Aggregation dimension.
                     * @return GroupBy Aggregation dimension.
                     * 
                     */
                    std::vector<std::string> GetGroupBy() const;

                    /**
                     * 设置Aggregation dimension.
                     * @param _groupBy Aggregation dimension.
                     * 
                     */
                    void SetGroupBy(const std::vector<std::string>& _groupBy);

                    /**
                     * 判断参数 GroupBy 是否已赋值
                     * @return GroupBy 是否已赋值
                     * 
                     */
                    bool GroupByHasBeenSet() const;

                    /**
                     * 获取Start time (unit: sec).
                     * @return StartTime Start time (unit: sec).
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Start time (unit: sec).
                     * @param _startTime Start time (unit: sec).
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time (unit: seconds).
                     * @return EndTime End time (unit: seconds).
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置End time (unit: seconds).
                     * @param _endTime End time (unit: seconds).
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Sorting method
.
Value: fill in.
-Asc: sorts query metrics in ascending order.
- desc: sort query metrics in descending order.
                     * @return OrderBy Sorting method
.
Value: fill in.
-Asc: sorts query metrics in ascending order.
- desc: sort query metrics in descending order.
                     * 
                     */
                    OrderBy GetOrderBy() const;

                    /**
                     * 设置Sorting method
.
Value: fill in.
-Asc: sorts query metrics in ascending order.
- desc: sort query metrics in descending order.
                     * @param _orderBy Sorting method
.
Value: fill in.
-Asc: sorts query metrics in ascending order.
- desc: sort query metrics in descending order.
                     * 
                     */
                    void SetOrderBy(const OrderBy& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Page size.
                     * @return Limit Page size.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Page size.
                     * @param _limit Page size.
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
                     * 获取Paging starting point.
                     * @return Offset Paging starting point.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Paging starting point.
                     * @param _offset Paging starting point.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Metric list.
                     */
                    std::vector<QueryMetricItem> m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * Business system id.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Filter criteria.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Aggregation dimension.
                     */
                    std::vector<std::string> m_groupBy;
                    bool m_groupByHasBeenSet;

                    /**
                     * Start time (unit: sec).
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time (unit: seconds).
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Sorting method
.
Value: fill in.
-Asc: sorts query metrics in ascending order.
- desc: sort query metrics in descending order.
                     */
                    OrderBy m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Page size.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Paging starting point.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBESERVICEOVERVIEWREQUEST_H_
