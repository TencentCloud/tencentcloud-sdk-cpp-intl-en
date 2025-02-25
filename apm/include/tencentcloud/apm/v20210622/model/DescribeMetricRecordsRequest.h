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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEMETRICRECORDSREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEMETRICRECORDSREQUEST_H_

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
                * DescribeMetricRecords request structure.
                */
                class DescribeMetricRecordsRequest : public AbstractModel
                {
                public:
                    DescribeMetricRecordsRequest();
                    ~DescribeMetricRecordsRequest() = default;
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
                     * 获取Or filter criteria.
                     * @return OrFilters Or filter criteria.
                     * 
                     */
                    std::vector<Filter> GetOrFilters() const;

                    /**
                     * 设置Or filter criteria.
                     * @param _orFilters Or filter criteria.
                     * 
                     */
                    void SetOrFilters(const std::vector<Filter>& _orFilters);

                    /**
                     * 判断参数 OrFilters 是否已赋值
                     * @return OrFilters 是否已赋值
                     * 
                     */
                    bool OrFiltersHasBeenSet() const;

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
                     * 获取Sort
.
The currently supported keys are:.

-StartTime (start time).
-EndTime (end time).
-Duration (response time).

The currently supported values are:.

- desc: sort in descending order.
-Asc - ascending order.
                     * @return OrderBy Sort
.
The currently supported keys are:.

-StartTime (start time).
-EndTime (end time).
-Duration (response time).

The currently supported values are:.

- desc: sort in descending order.
-Asc - ascending order.
                     * 
                     */
                    OrderBy GetOrderBy() const;

                    /**
                     * 设置Sort
.
The currently supported keys are:.

-StartTime (start time).
-EndTime (end time).
-Duration (response time).

The currently supported values are:.

- desc: sort in descending order.
-Asc - ascending order.
                     * @param _orderBy Sort
.
The currently supported keys are:.

-StartTime (start time).
-EndTime (end time).
-Duration (response time).

The currently supported values are:.

- desc: sort in descending order.
-Asc - ascending order.
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
                     * 获取The service name of the business itself. console users should fill in taw.
                     * @return BusinessName The service name of the business itself. console users should fill in taw.
                     * 
                     */
                    std::string GetBusinessName() const;

                    /**
                     * 设置The service name of the business itself. console users should fill in taw.
                     * @param _businessName The service name of the business itself. console users should fill in taw.
                     * 
                     */
                    void SetBusinessName(const std::string& _businessName);

                    /**
                     * 判断参数 BusinessName 是否已赋值
                     * @return BusinessName 是否已赋值
                     * 
                     */
                    bool BusinessNameHasBeenSet() const;

                    /**
                     * 获取Special handling of query results.
                     * @return Type Special handling of query results.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Special handling of query results.
                     * @param _type Special handling of query results.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Size per page, defaults to 1,000, valid value range is 0 – 1,000.
                     * @return Limit Size per page, defaults to 1,000, valid value range is 0 – 1,000.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Size per page, defaults to 1,000, valid value range is 0 – 1,000.
                     * @param _limit Size per page, defaults to 1,000, valid value range is 0 – 1,000.
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

                    /**
                     * 获取Page number.
                     * @return PageIndex Page number.
                     * 
                     */
                    int64_t GetPageIndex() const;

                    /**
                     * 设置Page number.
                     * @param _pageIndex Page number.
                     * 
                     */
                    void SetPageIndex(const int64_t& _pageIndex);

                    /**
                     * 判断参数 PageIndex 是否已赋值
                     * @return PageIndex 是否已赋值
                     * 
                     */
                    bool PageIndexHasBeenSet() const;

                    /**
                     * 获取Page length.
                     * @return PageSize Page length.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Page length.
                     * @param _pageSize Page length.
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

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
                     * Filter criteria.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Or filter criteria.
                     */
                    std::vector<Filter> m_orFilters;
                    bool m_orFiltersHasBeenSet;

                    /**
                     * Aggregation dimension.
                     */
                    std::vector<std::string> m_groupBy;
                    bool m_groupByHasBeenSet;

                    /**
                     * Sort
.
The currently supported keys are:.

-StartTime (start time).
-EndTime (end time).
-Duration (response time).

The currently supported values are:.

- desc: sort in descending order.
-Asc - ascending order.
                     */
                    OrderBy m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * The service name of the business itself. console users should fill in taw.
                     */
                    std::string m_businessName;
                    bool m_businessNameHasBeenSet;

                    /**
                     * Special handling of query results.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Size per page, defaults to 1,000, valid value range is 0 – 1,000.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Paging starting point.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Page number.
                     */
                    int64_t m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                    /**
                     * Page length.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEMETRICRECORDSREQUEST_H_
