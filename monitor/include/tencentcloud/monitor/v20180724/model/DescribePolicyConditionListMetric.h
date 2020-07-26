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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTMETRIC_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTMETRIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListConfigManual.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Metric alarm configuration.
                */
                class DescribePolicyConditionListMetric : public AbstractModel
                {
                public:
                    DescribePolicyConditionListMetric();
                    ~DescribePolicyConditionListMetric() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Metric configuration.
Note: This field may return null, indicating that no valid value was found.
                     * @return ConfigManual Metric configuration.
Note: This field may return null, indicating that no valid value was found.
                     */
                    DescribePolicyConditionListConfigManual GetConfigManual() const;

                    /**
                     * 设置Metric configuration.
Note: This field may return null, indicating that no valid value was found.
                     * @param ConfigManual Metric configuration.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetConfigManual(const DescribePolicyConditionListConfigManual& _configManual);

                    /**
                     * 判断参数 ConfigManual 是否已赋值
                     * @return ConfigManual 是否已赋值
                     */
                    bool ConfigManualHasBeenSet() const;

                    /**
                     * 获取Metric ID.
                     * @return MetricId Metric ID.
                     */
                    int64_t GetMetricId() const;

                    /**
                     * 设置Metric ID.
                     * @param MetricId Metric ID.
                     */
                    void SetMetricId(const int64_t& _metricId);

                    /**
                     * 判断参数 MetricId 是否已赋值
                     * @return MetricId 是否已赋值
                     */
                    bool MetricIdHasBeenSet() const;

                    /**
                     * 获取Metric name.
                     * @return MetricShowName Metric name.
                     */
                    std::string GetMetricShowName() const;

                    /**
                     * 设置Metric name.
                     * @param MetricShowName Metric name.
                     */
                    void SetMetricShowName(const std::string& _metricShowName);

                    /**
                     * 判断参数 MetricShowName 是否已赋值
                     * @return MetricShowName 是否已赋值
                     */
                    bool MetricShowNameHasBeenSet() const;

                    /**
                     * 获取Metric unit.
                     * @return MetricUnit Metric unit.
                     */
                    std::string GetMetricUnit() const;

                    /**
                     * 设置Metric unit.
                     * @param MetricUnit Metric unit.
                     */
                    void SetMetricUnit(const std::string& _metricUnit);

                    /**
                     * 判断参数 MetricUnit 是否已赋值
                     * @return MetricUnit 是否已赋值
                     */
                    bool MetricUnitHasBeenSet() const;

                private:

                    /**
                     * Metric configuration.
Note: This field may return null, indicating that no valid value was found.
                     */
                    DescribePolicyConditionListConfigManual m_configManual;
                    bool m_configManualHasBeenSet;

                    /**
                     * Metric ID.
                     */
                    int64_t m_metricId;
                    bool m_metricIdHasBeenSet;

                    /**
                     * Metric name.
                     */
                    std::string m_metricShowName;
                    bool m_metricShowNameHasBeenSet;

                    /**
                     * Metric unit.
                     */
                    std::string m_metricUnit;
                    bool m_metricUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTMETRIC_H_
