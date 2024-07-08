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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_METRIC_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_METRIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/MetricConfig.h>
#include <tencentcloud/monitor/v20180724/model/Operator.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Metric, which can be used to set alarms and query data
                */
                class Metric : public AbstractModel
                {
                public:
                    Metric();
                    ~Metric() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alarm policy type
                     * @return Namespace Alarm policy type
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Alarm policy type
                     * @param _namespace Alarm policy type
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Metric name
                     * @return MetricName Metric name
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Metric name
                     * @param _metricName Metric name
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取Metric display name
                     * @return Description Metric display name
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Metric display name
                     * @param _description Metric display name
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
                     * 获取Minimum value
                     * @return Min Minimum value
                     * 
                     */
                    double GetMin() const;

                    /**
                     * 设置Minimum value
                     * @param _min Minimum value
                     * 
                     */
                    void SetMin(const double& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     * 
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取Maximum value
                     * @return Max Maximum value
                     * 
                     */
                    double GetMax() const;

                    /**
                     * 设置Maximum value
                     * @param _max Maximum value
                     * 
                     */
                    void SetMax(const double& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     * 
                     */
                    bool MaxHasBeenSet() const;

                    /**
                     * 获取Dimension list
                     * @return Dimensions Dimension list
                     * 
                     */
                    std::vector<std::string> GetDimensions() const;

                    /**
                     * 设置Dimension list
                     * @param _dimensions Dimension list
                     * 
                     */
                    void SetDimensions(const std::vector<std::string>& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                    /**
                     * 获取Unit
                     * @return Unit Unit
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置Unit
                     * @param _unit Unit
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
                     * 获取Metric configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MetricConfig Metric configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MetricConfig GetMetricConfig() const;

                    /**
                     * 设置Metric configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _metricConfig Metric configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMetricConfig(const MetricConfig& _metricConfig);

                    /**
                     * 判断参数 MetricConfig 是否已赋值
                     * @return MetricConfig 是否已赋值
                     * 
                     */
                    bool MetricConfigHasBeenSet() const;

                    /**
                     * 获取Whether it is an advanced metric. 1: Yes; 0: No.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return IsAdvanced Whether it is an advanced metric. 1: Yes; 0: No.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIsAdvanced() const;

                    /**
                     * 设置Whether it is an advanced metric. 1: Yes; 0: No.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _isAdvanced Whether it is an advanced metric. 1: Yes; 0: No.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsAdvanced(const int64_t& _isAdvanced);

                    /**
                     * 判断参数 IsAdvanced 是否已赋值
                     * @return IsAdvanced 是否已赋值
                     * 
                     */
                    bool IsAdvancedHasBeenSet() const;

                    /**
                     * 获取Whether the advanced metric feature is enabled. 1: Yes; 0: No.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return IsOpen Whether the advanced metric feature is enabled. 1: Yes; 0: No.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIsOpen() const;

                    /**
                     * 设置Whether the advanced metric feature is enabled. 1: Yes; 0: No.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _isOpen Whether the advanced metric feature is enabled. 1: Yes; 0: No.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsOpen(const int64_t& _isOpen);

                    /**
                     * 判断参数 IsOpen 是否已赋值
                     * @return IsOpen 是否已赋值
                     * 
                     */
                    bool IsOpenHasBeenSet() const;

                    /**
                     * 获取Integration center product ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ProductId Integration center product ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetProductId() const;

                    /**
                     * 设置Integration center product ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _productId Integration center product ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProductId(const int64_t& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取Matching operator
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Operators Matching operator
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Operator> GetOperators() const;

                    /**
                     * 设置Matching operator
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _operators Matching operator
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOperators(const std::vector<Operator>& _operators);

                    /**
                     * 判断参数 Operators 是否已赋值
                     * @return Operators 是否已赋值
                     * 
                     */
                    bool OperatorsHasBeenSet() const;

                    /**
                     * 获取Metric monitoring granularity
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Periods Metric monitoring granularity
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetPeriods() const;

                    /**
                     * 设置Metric monitoring granularity
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _periods Metric monitoring granularity
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPeriods(const std::vector<int64_t>& _periods);

                    /**
                     * 判断参数 Periods 是否已赋值
                     * @return Periods 是否已赋值
                     * 
                     */
                    bool PeriodsHasBeenSet() const;

                    /**
                     * 获取
                     * @return IsLatenessMetric 
                     * 
                     */
                    int64_t GetIsLatenessMetric() const;

                    /**
                     * 设置
                     * @param _isLatenessMetric 
                     * 
                     */
                    void SetIsLatenessMetric(const int64_t& _isLatenessMetric);

                    /**
                     * 判断参数 IsLatenessMetric 是否已赋值
                     * @return IsLatenessMetric 是否已赋值
                     * 
                     */
                    bool IsLatenessMetricHasBeenSet() const;

                private:

                    /**
                     * Alarm policy type
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Metric name
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Metric display name
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Minimum value
                     */
                    double m_min;
                    bool m_minHasBeenSet;

                    /**
                     * Maximum value
                     */
                    double m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * Dimension list
                     */
                    std::vector<std::string> m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * Unit
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * Metric configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MetricConfig m_metricConfig;
                    bool m_metricConfigHasBeenSet;

                    /**
                     * Whether it is an advanced metric. 1: Yes; 0: No.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_isAdvanced;
                    bool m_isAdvancedHasBeenSet;

                    /**
                     * Whether the advanced metric feature is enabled. 1: Yes; 0: No.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_isOpen;
                    bool m_isOpenHasBeenSet;

                    /**
                     * Integration center product ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * Matching operator
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Operator> m_operators;
                    bool m_operatorsHasBeenSet;

                    /**
                     * Metric monitoring granularity
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_periods;
                    bool m_periodsHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_isLatenessMetric;
                    bool m_isLatenessMetricHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_METRIC_H_
