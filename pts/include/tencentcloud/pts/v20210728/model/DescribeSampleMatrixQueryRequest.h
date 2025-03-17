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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESAMPLEMATRIXQUERYREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESAMPLEMATRIXQUERYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/Filter.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeSampleMatrixQuery request structure.
                */
                class DescribeSampleMatrixQueryRequest : public AbstractModel
                {
                public:
                    DescribeSampleMatrixQueryRequest();
                    ~DescribeSampleMatrixQueryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Job ID.
                     * @return JobId Job ID.
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Job ID.
                     * @param _jobId Job ID.
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Scenario ID.
                     * @return ScenarioId Scenario ID.
                     * 
                     */
                    std::string GetScenarioId() const;

                    /**
                     * 设置Scenario ID.
                     * @param _scenarioId Scenario ID.
                     * 
                     */
                    void SetScenarioId(const std::string& _scenarioId);

                    /**
                     * 判断参数 ScenarioId 是否已赋值
                     * @return ScenarioId 是否已赋值
                     * 
                     */
                    bool ScenarioIdHasBeenSet() const;

                    /**
                     * 获取Metric name. For the value range, refer to all metric names returned by the DescribeMetricLabelWithValues API.
                     * @return Metric Metric name. For the value range, refer to all metric names returned by the DescribeMetricLabelWithValues API.
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置Metric name. For the value range, refer to all metric names returned by the DescribeMetricLabelWithValues API.
                     * @param _metric Metric name. For the value range, refer to all metric names returned by the DescribeMetricLabelWithValues API.
                     * 
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     * 
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取Aggregation function. Range of values: Rate, Count, Avg, P90, P95, P99, Gauge.
                     * @return Aggregation Aggregation function. Range of values: Rate, Count, Avg, P90, P95, P99, Gauge.
                     * 
                     */
                    std::string GetAggregation() const;

                    /**
                     * 设置Aggregation function. Range of values: Rate, Count, Avg, P90, P95, P99, Gauge.
                     * @param _aggregation Aggregation function. Range of values: Rate, Count, Avg, P90, P95, P99, Gauge.
                     * 
                     */
                    void SetAggregation(const std::string& _aggregation);

                    /**
                     * 判断参数 Aggregation 是否已赋值
                     * @return Aggregation 是否已赋值
                     * 
                     */
                    bool AggregationHasBeenSet() const;

                    /**
                     * 获取Use label rules to filter metrics. Rules include label name, label value, and operator (0 means equal, 1 means not equal).
                     * @return Filters Use label rules to filter metrics. Rules include label name, label value, and operator (0 means equal, 1 means not equal).
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Use label rules to filter metrics. Rules include label name, label value, and operator (0 means equal, 1 means not equal).
                     * @param _filters Use label rules to filter metrics. Rules include label name, label value, and operator (0 means equal, 1 means not equal).
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
                     * 获取Labels used for grouping, similar to group by in PromQL.


                     * @return GroupBy Labels used for grouping, similar to group by in PromQL.


                     * 
                     */
                    std::vector<std::string> GetGroupBy() const;

                    /**
                     * 设置Labels used for grouping, similar to group by in PromQL.


                     * @param _groupBy Labels used for grouping, similar to group by in PromQL.


                     * 
                     */
                    void SetGroupBy(const std::vector<std::string>& _groupBy);

                    /**
                     * 判断参数 GroupBy 是否已赋值
                     * @return GroupBy 是否已赋值
                     * 
                     */
                    bool GroupByHasBeenSet() const;

                private:

                    /**
                     * Job ID.
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Scenario ID.
                     */
                    std::string m_scenarioId;
                    bool m_scenarioIdHasBeenSet;

                    /**
                     * Metric name. For the value range, refer to all metric names returned by the DescribeMetricLabelWithValues API.
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * Aggregation function. Range of values: Rate, Count, Avg, P90, P95, P99, Gauge.
                     */
                    std::string m_aggregation;
                    bool m_aggregationHasBeenSet;

                    /**
                     * Use label rules to filter metrics. Rules include label name, label value, and operator (0 means equal, 1 means not equal).
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Labels used for grouping, similar to group by in PromQL.


                     */
                    std::vector<std::string> m_groupBy;
                    bool m_groupByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESAMPLEMATRIXQUERYREQUEST_H_
