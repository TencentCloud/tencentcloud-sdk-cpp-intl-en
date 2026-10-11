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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_LOADMETRICSCONDITION_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_LOADMETRICSCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/TriggerCondition.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Load metric condition.
                */
                class LoadMetricsCondition : public AbstractModel
                {
                public:
                    LoadMetricsCondition();
                    ~LoadMetricsCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule statistics cycle. One, three, and five minutes are supported.
                     * @return StatisticPeriod Rule statistics cycle. One, three, and five minutes are supported.
                     * 
                     */
                    int64_t GetStatisticPeriod() const;

                    /**
                     * 设置Rule statistics cycle. One, three, and five minutes are supported.
                     * @param _statisticPeriod Rule statistics cycle. One, three, and five minutes are supported.
                     * 
                     */
                    void SetStatisticPeriod(const int64_t& _statisticPeriod);

                    /**
                     * 判断参数 StatisticPeriod 是否已赋值
                     * @return StatisticPeriod 是否已赋值
                     * 
                     */
                    bool StatisticPeriodHasBeenSet() const;

                    /**
                     * 获取Number of triggering times. Scaling begins only after it has been triggered continuously for more than TriggerThreshold times.
                     * @return TriggerThreshold Number of triggering times. Scaling begins only after it has been triggered continuously for more than TriggerThreshold times.
                     * 
                     */
                    int64_t GetTriggerThreshold() const;

                    /**
                     * 设置Number of triggering times. Scaling begins only after it has been triggered continuously for more than TriggerThreshold times.
                     * @param _triggerThreshold Number of triggering times. Scaling begins only after it has been triggered continuously for more than TriggerThreshold times.
                     * 
                     */
                    void SetTriggerThreshold(const int64_t& _triggerThreshold);

                    /**
                     * 判断参数 TriggerThreshold 是否已赋值
                     * @return TriggerThreshold 是否已赋值
                     * 
                     */
                    bool TriggerThresholdHasBeenSet() const;

                    /**
                     * 获取Scaling load metric.
                     * @return LoadMetrics Scaling load metric.
                     * 
                     */
                    std::string GetLoadMetrics() const;

                    /**
                     * 设置Scaling load metric.
                     * @param _loadMetrics Scaling load metric.
                     * 
                     */
                    void SetLoadMetrics(const std::string& _loadMetrics);

                    /**
                     * 判断参数 LoadMetrics 是否已赋值
                     * @return LoadMetrics 是否已赋值
                     * 
                     */
                    bool LoadMetricsHasBeenSet() const;

                    /**
                     * 获取Rule metadata record ID.
                     * @return MetricId Rule metadata record ID.
                     * 
                     */
                    int64_t GetMetricId() const;

                    /**
                     * 设置Rule metadata record ID.
                     * @param _metricId Rule metadata record ID.
                     * 
                     */
                    void SetMetricId(const int64_t& _metricId);

                    /**
                     * 判断参数 MetricId 是否已赋值
                     * @return MetricId 是否已赋值
                     * 
                     */
                    bool MetricIdHasBeenSet() const;

                    /**
                     * 获取Triggering condition.
                     * @return Conditions Triggering condition.
                     * 
                     */
                    std::vector<TriggerCondition> GetConditions() const;

                    /**
                     * 设置Triggering condition.
                     * @param _conditions Triggering condition.
                     * 
                     */
                    void SetConditions(const std::vector<TriggerCondition>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                private:

                    /**
                     * Rule statistics cycle. One, three, and five minutes are supported.
                     */
                    int64_t m_statisticPeriod;
                    bool m_statisticPeriodHasBeenSet;

                    /**
                     * Number of triggering times. Scaling begins only after it has been triggered continuously for more than TriggerThreshold times.
                     */
                    int64_t m_triggerThreshold;
                    bool m_triggerThresholdHasBeenSet;

                    /**
                     * Scaling load metric.
                     */
                    std::string m_loadMetrics;
                    bool m_loadMetricsHasBeenSet;

                    /**
                     * Rule metadata record ID.
                     */
                    int64_t m_metricId;
                    bool m_metricIdHasBeenSet;

                    /**
                     * Triggering condition.
                     */
                    std::vector<TriggerCondition> m_conditions;
                    bool m_conditionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_LOADMETRICSCONDITION_H_
