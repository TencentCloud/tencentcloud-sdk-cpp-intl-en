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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_MONITORFLOATMETRIC_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_MONITORFLOATMETRIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            namespace Model
            {
                /**
                * Monitoring data in float type
                */
                class MonitorFloatMetric : public AbstractModel
                {
                public:
                    MonitorFloatMetric();
                    ~MonitorFloatMetric() = default;
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
                     * 获取Metric unit.
                     * @return Unit Metric unit.
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置Metric unit.
                     * @param _unit Metric unit.
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
                     * 获取Metric value.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Values Metric value.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<double> GetValues() const;

                    /**
                     * 设置Metric value.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _values Metric value.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetValues(const std::vector<double>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * Metric name.
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * Metric unit.
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * Metric value.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<double> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_MONITORFLOATMETRIC_H_
