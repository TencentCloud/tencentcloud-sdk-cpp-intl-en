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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_INTERNALMETRICQUERY_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_INTERNALMETRICQUERY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/Label.h>
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
                * General metric query structure.
                */
                class InternalMetricQuery : public AbstractModel
                {
                public:
                    InternalMetricQuery();
                    ~InternalMetricQuery() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Metric name.
                     * @return Metric Metric name.
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置Metric name.
                     * @param _metric Metric name.
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
                     * 获取Aggregation Function, optional value including Rate, Count, Avg, P90, P95, P99, Gauge.
                     * @return Aggregation Aggregation Function, optional value including Rate, Count, Avg, P90, P95, P99, Gauge.
                     * 
                     */
                    std::string GetAggregation() const;

                    /**
                     * 设置Aggregation Function, optional value including Rate, Count, Avg, P90, P95, P99, Gauge.
                     * @param _aggregation Aggregation Function, optional value including Rate, Count, Avg, P90, P95, P99, Gauge.
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
                     * 获取Deprecated, please use 'Filters'.
                     * @return Labels Deprecated, please use 'Filters'.
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置Deprecated, please use 'Filters'.
                     * @param _labels Deprecated, please use 'Filters'.
                     * 
                     */
                    void SetLabels(const std::vector<Label>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取Use label filter rules to filter metrics. Rules include LabelName, LabelValue, and Operator (0 means equal, 1 means not equal).
                     * @return Filters Use label filter rules to filter metrics. Rules include LabelName, LabelValue, and Operator (0 means equal, 1 means not equal).
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Use label filter rules to filter metrics. Rules include LabelName, LabelValue, and Operator (0 means equal, 1 means not equal).
                     * @param _filters Use label filter rules to filter metrics. Rules include LabelName, LabelValue, and Operator (0 means equal, 1 means not equal).
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
                     * 获取Metric group.
                     * @return GroupBy Metric group.
                     * 
                     */
                    std::vector<std::string> GetGroupBy() const;

                    /**
                     * 设置Metric group.
                     * @param _groupBy Metric group.
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
                     * Metric name.
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * Aggregation Function, optional value including Rate, Count, Avg, P90, P95, P99, Gauge.
                     */
                    std::string m_aggregation;
                    bool m_aggregationHasBeenSet;

                    /**
                     * Deprecated, please use 'Filters'.
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * Use label filter rules to filter metrics. Rules include LabelName, LabelValue, and Operator (0 means equal, 1 means not equal).
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Metric group.
                     */
                    std::vector<std::string> m_groupBy;
                    bool m_groupByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_INTERNALMETRICQUERY_H_
