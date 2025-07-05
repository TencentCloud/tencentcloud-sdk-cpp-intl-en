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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_METRICINFO_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_METRICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/AggregationLegend.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * Metric structure.
                */
                class MetricInfo : public AbstractModel
                {
                public:
                    MetricInfo();
                    ~MetricInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Metric name in backend.
                     * @return Metric Metric name in backend.
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置Metric name in backend.
                     * @param _metric Metric name in backend.
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
                     * 获取Metric name displayed in frontend.
                     * @return Alias Metric name displayed in frontend.
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置Metric name displayed in frontend.
                     * @param _alias Metric name displayed in frontend.
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取Metric description.

Note: This field may return null, indicating that no valid value is found.
                     * @return Description Metric description.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Metric description.

Note: This field may return null, indicating that no valid value is found.
                     * @param _description Metric description.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Metric type.
                     * @return MetricType Metric type.
                     * 
                     */
                    std::string GetMetricType() const;

                    /**
                     * 设置Metric type.
                     * @param _metricType Metric type.
                     * 
                     */
                    void SetMetricType(const std::string& _metricType);

                    /**
                     * 判断参数 MetricType 是否已赋值
                     * @return MetricType 是否已赋值
                     * 
                     */
                    bool MetricTypeHasBeenSet() const;

                    /**
                     * 获取Default metric unit.
                     * @return Unit Default metric unit.
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置Default metric unit.
                     * @param _unit Default metric unit.
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取Aggregation functions supported by the metric.
                     * @return Aggregations Aggregation functions supported by the metric.
                     * 
                     */
                    std::vector<AggregationLegend> GetAggregations() const;

                    /**
                     * 设置Aggregation functions supported by the metric.
                     * @param _aggregations Aggregation functions supported by the metric.
                     * 
                     */
                    void SetAggregations(const std::vector<AggregationLegend>& _aggregations);

                    /**
                     * 判断参数 Aggregations 是否已赋值
                     * @return Aggregations 是否已赋值
                     * 
                     */
                    bool AggregationsHasBeenSet() const;

                    /**
                     * 获取Whether it is an internal metric, internal metrics cannot be freely selected by users on the frontend.
                     * @return InnerMetric Whether it is an internal metric, internal metrics cannot be freely selected by users on the frontend.
                     * 
                     */
                    bool GetInnerMetric() const;

                    /**
                     * 设置Whether it is an internal metric, internal metrics cannot be freely selected by users on the frontend.
                     * @param _innerMetric Whether it is an internal metric, internal metrics cannot be freely selected by users on the frontend.
                     * 
                     */
                    void SetInnerMetric(const bool& _innerMetric);

                    /**
                     * 判断参数 InnerMetric 是否已赋值
                     * @return InnerMetric 是否已赋值
                     * 
                     */
                    bool InnerMetricHasBeenSet() const;

                private:

                    /**
                     * Metric name in backend.
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * Metric name displayed in frontend.
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * Metric description.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Metric type.
                     */
                    std::string m_metricType;
                    bool m_metricTypeHasBeenSet;

                    /**
                     * Default metric unit.
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * Aggregation functions supported by the metric.
                     */
                    std::vector<AggregationLegend> m_aggregations;
                    bool m_aggregationsHasBeenSet;

                    /**
                     * Whether it is an internal metric, internal metrics cannot be freely selected by users on the frontend.
                     */
                    bool m_innerMetric;
                    bool m_innerMetricHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_METRICINFO_H_
