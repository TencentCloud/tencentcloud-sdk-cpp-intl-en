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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_STATISTICITEM_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_STATISTICITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Usage limit configuration
                */
                class StatisticItem : public AbstractModel
                {
                public:
                    StatisticItem();
                    ~StatisticItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Type of usage limit. `total`: Cumulative usage; `moment`: Instantaneous usage.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Type Type of usage limit. `total`: Cumulative usage; `moment`: Instantaneous usage.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type of usage limit. `total`: Cumulative usage; `moment`: Instantaneous usage.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _type Type of usage limit. `total`: Cumulative usage; `moment`: Instantaneous usage.
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Unblocking time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return UnBlockTime Unblocking time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetUnBlockTime() const;

                    /**
                     * 设置Unblocking time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _unBlockTime Unblocking time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUnBlockTime(const uint64_t& _unBlockTime);

                    /**
                     * 判断参数 UnBlockTime 是否已赋值
                     * @return UnBlockTime 是否已赋值
                     * 
                     */
                    bool UnBlockTimeHasBeenSet() const;

                    /**
                     * 获取Bandwidth/Traffic threshold
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return BpsThreshold Bandwidth/Traffic threshold
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetBpsThreshold() const;

                    /**
                     * 设置Bandwidth/Traffic threshold
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _bpsThreshold Bandwidth/Traffic threshold
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetBpsThreshold(const uint64_t& _bpsThreshold);

                    /**
                     * 判断参数 BpsThreshold 是否已赋值
                     * @return BpsThreshold 是否已赋值
                     * 
                     */
                    bool BpsThresholdHasBeenSet() const;

                    /**
                     * 获取Specifies how to disable CDN service when the threshold is exceeded. `RETURN_404`: Return 404; `RESOLVE_DNS_TO_ORIGIN`: Forward to origin server.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return CounterMeasure Specifies how to disable CDN service when the threshold is exceeded. `RETURN_404`: Return 404; `RESOLVE_DNS_TO_ORIGIN`: Forward to origin server.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCounterMeasure() const;

                    /**
                     * 设置Specifies how to disable CDN service when the threshold is exceeded. `RETURN_404`: Return 404; `RESOLVE_DNS_TO_ORIGIN`: Forward to origin server.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _counterMeasure Specifies how to disable CDN service when the threshold is exceeded. `RETURN_404`: Return 404; `RESOLVE_DNS_TO_ORIGIN`: Forward to origin server.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCounterMeasure(const std::string& _counterMeasure);

                    /**
                     * 判断参数 CounterMeasure 是否已赋值
                     * @return CounterMeasure 是否已赋值
                     * 
                     */
                    bool CounterMeasureHasBeenSet() const;

                    /**
                     * 获取Threshold (in percentage) that triggers alarms
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return AlertPercentage Threshold (in percentage) that triggers alarms
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetAlertPercentage() const;

                    /**
                     * 设置Threshold (in percentage) that triggers alarms
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _alertPercentage Threshold (in percentage) that triggers alarms
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAlertPercentage(const uint64_t& _alertPercentage);

                    /**
                     * 判断参数 AlertPercentage 是否已赋值
                     * @return AlertPercentage 是否已赋值
                     * 
                     */
                    bool AlertPercentageHasBeenSet() const;

                    /**
                     * 获取Whether to enable the alarm threshold trigger. Values: `on`, `off`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return AlertSwitch Whether to enable the alarm threshold trigger. Values: `on`, `off`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetAlertSwitch() const;

                    /**
                     * 设置Whether to enable the alarm threshold trigger. Values: `on`, `off`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _alertSwitch Whether to enable the alarm threshold trigger. Values: `on`, `off`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAlertSwitch(const std::string& _alertSwitch);

                    /**
                     * 判断参数 AlertSwitch 是否已赋值
                     * @return AlertSwitch 是否已赋值
                     * 
                     */
                    bool AlertSwitchHasBeenSet() const;

                    /**
                     * 获取Metric type. `flux`: Traffic; `bandwidth`: Bandwidth.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Metric Metric type. `flux`: Traffic; `bandwidth`: Bandwidth.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置Metric type. `flux`: Traffic; `bandwidth`: Bandwidth.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _metric Metric type. `flux`: Traffic; `bandwidth`: Bandwidth.
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取
                     * @return Cycle 
                     * 
                     */
                    uint64_t GetCycle() const;

                    /**
                     * 设置
                     * @param _cycle 
                     * 
                     */
                    void SetCycle(const uint64_t& _cycle);

                    /**
                     * 判断参数 Cycle 是否已赋值
                     * @return Cycle 是否已赋值
                     * 
                     */
                    bool CycleHasBeenSet() const;

                    /**
                     * 获取Whether to enable usage limit configuration. Values: `on`, `off`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Switch Whether to enable usage limit configuration. Values: `on`, `off`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable usage limit configuration. Values: `on`, `off`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _switch Whether to enable usage limit configuration. Values: `on`, `off`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                private:

                    /**
                     * Type of usage limit. `total`: Cumulative usage; `moment`: Instantaneous usage.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Unblocking time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t m_unBlockTime;
                    bool m_unBlockTimeHasBeenSet;

                    /**
                     * Bandwidth/Traffic threshold
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t m_bpsThreshold;
                    bool m_bpsThresholdHasBeenSet;

                    /**
                     * Specifies how to disable CDN service when the threshold is exceeded. `RETURN_404`: Return 404; `RESOLVE_DNS_TO_ORIGIN`: Forward to origin server.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_counterMeasure;
                    bool m_counterMeasureHasBeenSet;

                    /**
                     * Threshold (in percentage) that triggers alarms
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t m_alertPercentage;
                    bool m_alertPercentageHasBeenSet;

                    /**
                     * Whether to enable the alarm threshold trigger. Values: `on`, `off`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_alertSwitch;
                    bool m_alertSwitchHasBeenSet;

                    /**
                     * Metric type. `flux`: Traffic; `bandwidth`: Bandwidth.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_cycle;
                    bool m_cycleHasBeenSet;

                    /**
                     * Whether to enable usage limit configuration. Values: `on`, `off`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_STATISTICITEM_H_
