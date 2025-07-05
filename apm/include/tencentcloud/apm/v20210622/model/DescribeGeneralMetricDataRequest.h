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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEGENERALMETRICDATAREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEGENERALMETRICDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/GeneralFilter.h>
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
                * DescribeGeneralMetricData request structure.
                */
                class DescribeGeneralMetricDataRequest : public AbstractModel
                {
                public:
                    DescribeGeneralMetricDataRequest();
                    ~DescribeGeneralMetricDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Metric name to be queried, which cannot be customized. (for details, see <https://intl.cloud.tencent.com/document/product/248/101681?from_cn_redirect=1>.).
                     * @return Metrics Metric name to be queried, which cannot be customized. (for details, see <https://intl.cloud.tencent.com/document/product/248/101681?from_cn_redirect=1>.).
                     * 
                     */
                    std::vector<std::string> GetMetrics() const;

                    /**
                     * 设置Metric name to be queried, which cannot be customized. (for details, see <https://intl.cloud.tencent.com/document/product/248/101681?from_cn_redirect=1>.).
                     * @param _metrics Metric name to be queried, which cannot be customized. (for details, see <https://intl.cloud.tencent.com/document/product/248/101681?from_cn_redirect=1>.).
                     * 
                     */
                    void SetMetrics(const std::vector<std::string>& _metrics);

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
                     * 获取View name. the input cannot be customized. [for details, see.](https://intl.cloud.tencent.com/document/product/248/101681?from_cn_redirect=1).
                     * @return ViewName View name. the input cannot be customized. [for details, see.](https://intl.cloud.tencent.com/document/product/248/101681?from_cn_redirect=1).
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置View name. the input cannot be customized. [for details, see.](https://intl.cloud.tencent.com/document/product/248/101681?from_cn_redirect=1).
                     * @param _viewName View name. the input cannot be customized. [for details, see.](https://intl.cloud.tencent.com/document/product/248/101681?from_cn_redirect=1).
                     * 
                     */
                    void SetViewName(const std::string& _viewName);

                    /**
                     * 判断参数 ViewName 是否已赋值
                     * @return ViewName 是否已赋值
                     * 
                     */
                    bool ViewNameHasBeenSet() const;

                    /**
                     * 获取The dimension information to be filtered; different views have corresponding metric dimensions. (for details, see <https://intl.cloud.tencent.com/document/product/248/101681?from_cn_redirect=1>.).
                     * @return Filters The dimension information to be filtered; different views have corresponding metric dimensions. (for details, see <https://intl.cloud.tencent.com/document/product/248/101681?from_cn_redirect=1>.).
                     * 
                     */
                    std::vector<GeneralFilter> GetFilters() const;

                    /**
                     * 设置The dimension information to be filtered; different views have corresponding metric dimensions. (for details, see <https://intl.cloud.tencent.com/document/product/248/101681?from_cn_redirect=1>.).
                     * @param _filters The dimension information to be filtered; different views have corresponding metric dimensions. (for details, see <https://intl.cloud.tencent.com/document/product/248/101681?from_cn_redirect=1>.).
                     * 
                     */
                    void SetFilters(const std::vector<GeneralFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Aggregated dimension; different views have corresponding metric dimensions. (for details, see <https://intl.cloud.tencent.com/document/product/248/101681?from_cn_redirect=1>.).
                     * @return GroupBy Aggregated dimension; different views have corresponding metric dimensions. (for details, see <https://intl.cloud.tencent.com/document/product/248/101681?from_cn_redirect=1>.).
                     * 
                     */
                    std::vector<std::string> GetGroupBy() const;

                    /**
                     * 设置Aggregated dimension; different views have corresponding metric dimensions. (for details, see <https://intl.cloud.tencent.com/document/product/248/101681?from_cn_redirect=1>.).
                     * @param _groupBy Aggregated dimension; different views have corresponding metric dimensions. (for details, see <https://intl.cloud.tencent.com/document/product/248/101681?from_cn_redirect=1>.).
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
                     * 获取The timestamp of the start time, supporting the query of metric data within 30 days. (unit: seconds).
                     * @return StartTime The timestamp of the start time, supporting the query of metric data within 30 days. (unit: seconds).
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置The timestamp of the start time, supporting the query of metric data within 30 days. (unit: seconds).
                     * @param _startTime The timestamp of the start time, supporting the query of metric data within 30 days. (unit: seconds).
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The timestamp of the end time, supporting the query of metric data within 30 days. (unit: seconds).
                     * @return EndTime The timestamp of the end time, supporting the query of metric data within 30 days. (unit: seconds).
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置The timestamp of the end time, supporting the query of metric data within 30 days. (unit: seconds).
                     * @param _endTime The timestamp of the end time, supporting the query of metric data within 30 days. (unit: seconds).
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Whether to aggregate by a fixed time span: enter 1 for values of 1 and greater, and 0 if not filled in.
-If 0 is filled in, it calculates the metric data from the start time to the cutoff time.
- if 1 is filled in, the aggregation granularity will be selected according to the time span from the start time to the deadline:.
 -If the time span is (0,12) hours, it is aggregated by one-minute granularity.
 -If the time span is [12,48] hours, it is aggregated at a five-minute granularity.
 -If the time span is (48, +∞) hours, it is aggregated at an hourly granularity.
                     * @return Period Whether to aggregate by a fixed time span: enter 1 for values of 1 and greater, and 0 if not filled in.
-If 0 is filled in, it calculates the metric data from the start time to the cutoff time.
- if 1 is filled in, the aggregation granularity will be selected according to the time span from the start time to the deadline:.
 -If the time span is (0,12) hours, it is aggregated by one-minute granularity.
 -If the time span is [12,48] hours, it is aggregated at a five-minute granularity.
 -If the time span is (48, +∞) hours, it is aggregated at an hourly granularity.
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Whether to aggregate by a fixed time span: enter 1 for values of 1 and greater, and 0 if not filled in.
-If 0 is filled in, it calculates the metric data from the start time to the cutoff time.
- if 1 is filled in, the aggregation granularity will be selected according to the time span from the start time to the deadline:.
 -If the time span is (0,12) hours, it is aggregated by one-minute granularity.
 -If the time span is [12,48] hours, it is aggregated at a five-minute granularity.
 -If the time span is (48, +∞) hours, it is aggregated at an hourly granularity.
                     * @param _period Whether to aggregate by a fixed time span: enter 1 for values of 1 and greater, and 0 if not filled in.
-If 0 is filled in, it calculates the metric data from the start time to the cutoff time.
- if 1 is filled in, the aggregation granularity will be selected according to the time span from the start time to the deadline:.
 -If the time span is (0,12) hours, it is aggregated by one-minute granularity.
 -If the time span is [12,48] hours, it is aggregated at a five-minute granularity.
 -If the time span is (48, +∞) hours, it is aggregated at an hourly granularity.
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Sort query metrics.
Key: enter the tencentcloud api metric name. [for details, see](https://intl.cloud.tencent.com/document/product/248/101681?from_cn_redirect=1) .
Value: specify the sorting method:.     
-Asc: sorts query metrics in ascending order.
- desc: sort query metrics in descending order.
                     * @return OrderBy Sort query metrics.
Key: enter the tencentcloud api metric name. [for details, see](https://intl.cloud.tencent.com/document/product/248/101681?from_cn_redirect=1) .
Value: specify the sorting method:.     
-Asc: sorts query metrics in ascending order.
- desc: sort query metrics in descending order.
                     * 
                     */
                    OrderBy GetOrderBy() const;

                    /**
                     * 设置Sort query metrics.
Key: enter the tencentcloud api metric name. [for details, see](https://intl.cloud.tencent.com/document/product/248/101681?from_cn_redirect=1) .
Value: specify the sorting method:.     
-Asc: sorts query metrics in ascending order.
- desc: sort query metrics in descending order.
                     * @param _orderBy Sort query metrics.
Key: enter the tencentcloud api metric name. [for details, see](https://intl.cloud.tencent.com/document/product/248/101681?from_cn_redirect=1) .
Value: specify the sorting method:.     
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
                     * 获取Maximum number of queried metrics. currently, up to 50 data entries can be displayed. the value range for pagesize is 1-50. submit pagesize to show the limited number based on the value of pagesize.
                     * @return PageSize Maximum number of queried metrics. currently, up to 50 data entries can be displayed. the value range for pagesize is 1-50. submit pagesize to show the limited number based on the value of pagesize.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Maximum number of queried metrics. currently, up to 50 data entries can be displayed. the value range for pagesize is 1-50. submit pagesize to show the limited number based on the value of pagesize.
                     * @param _pageSize Maximum number of queried metrics. currently, up to 50 data entries can be displayed. the value range for pagesize is 1-50. submit pagesize to show the limited number based on the value of pagesize.
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
                     * Metric name to be queried, which cannot be customized. (for details, see <https://intl.cloud.tencent.com/document/product/248/101681?from_cn_redirect=1>.).
                     */
                    std::vector<std::string> m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * Business system id.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * View name. the input cannot be customized. [for details, see.](https://intl.cloud.tencent.com/document/product/248/101681?from_cn_redirect=1).
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * The dimension information to be filtered; different views have corresponding metric dimensions. (for details, see <https://intl.cloud.tencent.com/document/product/248/101681?from_cn_redirect=1>.).
                     */
                    std::vector<GeneralFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Aggregated dimension; different views have corresponding metric dimensions. (for details, see <https://intl.cloud.tencent.com/document/product/248/101681?from_cn_redirect=1>.).
                     */
                    std::vector<std::string> m_groupBy;
                    bool m_groupByHasBeenSet;

                    /**
                     * The timestamp of the start time, supporting the query of metric data within 30 days. (unit: seconds).
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The timestamp of the end time, supporting the query of metric data within 30 days. (unit: seconds).
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Whether to aggregate by a fixed time span: enter 1 for values of 1 and greater, and 0 if not filled in.
-If 0 is filled in, it calculates the metric data from the start time to the cutoff time.
- if 1 is filled in, the aggregation granularity will be selected according to the time span from the start time to the deadline:.
 -If the time span is (0,12) hours, it is aggregated by one-minute granularity.
 -If the time span is [12,48] hours, it is aggregated at a five-minute granularity.
 -If the time span is (48, +∞) hours, it is aggregated at an hourly granularity.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Sort query metrics.
Key: enter the tencentcloud api metric name. [for details, see](https://intl.cloud.tencent.com/document/product/248/101681?from_cn_redirect=1) .
Value: specify the sorting method:.     
-Asc: sorts query metrics in ascending order.
- desc: sort query metrics in descending order.
                     */
                    OrderBy m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Maximum number of queried metrics. currently, up to 50 data entries can be displayed. the value range for pagesize is 1-50. submit pagesize to show the limited number based on the value of pagesize.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEGENERALMETRICDATAREQUEST_H_
