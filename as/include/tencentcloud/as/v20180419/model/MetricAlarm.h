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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_METRICALARM_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_METRICALARM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * Alarming metric of AS
                */
                class MetricAlarm : public AbstractModel
                {
                public:
                    MetricAlarm();
                    ~MetricAlarm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Comparison operator. Value range: <br><li>GREATER_THAN: greater than </li><li>GREATER_THAN_OR_EQUAL_TO: greater than or equal to </li><li>LESS_THAN: less than </li><li> LESS_THAN_OR_EQUAL_TO: less than or equal to </li><li> EQUAL_TO: equal to </li> <li>NOT_EQUAL_TO: not equal to </li>
                     * @return ComparisonOperator Comparison operator. Value range: <br><li>GREATER_THAN: greater than </li><li>GREATER_THAN_OR_EQUAL_TO: greater than or equal to </li><li>LESS_THAN: less than </li><li> LESS_THAN_OR_EQUAL_TO: less than or equal to </li><li> EQUAL_TO: equal to </li> <li>NOT_EQUAL_TO: not equal to </li>
                     */
                    std::string GetComparisonOperator() const;

                    /**
                     * 设置Comparison operator. Value range: <br><li>GREATER_THAN: greater than </li><li>GREATER_THAN_OR_EQUAL_TO: greater than or equal to </li><li>LESS_THAN: less than </li><li> LESS_THAN_OR_EQUAL_TO: less than or equal to </li><li> EQUAL_TO: equal to </li> <li>NOT_EQUAL_TO: not equal to </li>
                     * @param ComparisonOperator Comparison operator. Value range: <br><li>GREATER_THAN: greater than </li><li>GREATER_THAN_OR_EQUAL_TO: greater than or equal to </li><li>LESS_THAN: less than </li><li> LESS_THAN_OR_EQUAL_TO: less than or equal to </li><li> EQUAL_TO: equal to </li> <li>NOT_EQUAL_TO: not equal to </li>
                     */
                    void SetComparisonOperator(const std::string& _comparisonOperator);

                    /**
                     * 判断参数 ComparisonOperator 是否已赋值
                     * @return ComparisonOperator 是否已赋值
                     */
                    bool ComparisonOperatorHasBeenSet() const;

                    /**
                     * 获取Metric name. Value range: <br><li>CPU_UTILIZATION: CPU utilization </li><li>MEM_UTILIZATION: memory utilization </li><li>LAN_TRAFFIC_OUT: private network outbound bandwidth </li><li>LAN_TRAFFIC_IN: private network inbound bandwidth </li><li>WAN_TRAFFIC_OUT: public network outbound bandwidth </li><li>WAN_TRAFFIC_IN: public network inbound bandwidth </li>
                     * @return MetricName Metric name. Value range: <br><li>CPU_UTILIZATION: CPU utilization </li><li>MEM_UTILIZATION: memory utilization </li><li>LAN_TRAFFIC_OUT: private network outbound bandwidth </li><li>LAN_TRAFFIC_IN: private network inbound bandwidth </li><li>WAN_TRAFFIC_OUT: public network outbound bandwidth </li><li>WAN_TRAFFIC_IN: public network inbound bandwidth </li>
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Metric name. Value range: <br><li>CPU_UTILIZATION: CPU utilization </li><li>MEM_UTILIZATION: memory utilization </li><li>LAN_TRAFFIC_OUT: private network outbound bandwidth </li><li>LAN_TRAFFIC_IN: private network inbound bandwidth </li><li>WAN_TRAFFIC_OUT: public network outbound bandwidth </li><li>WAN_TRAFFIC_IN: public network inbound bandwidth </li>
                     * @param MetricName Metric name. Value range: <br><li>CPU_UTILIZATION: CPU utilization </li><li>MEM_UTILIZATION: memory utilization </li><li>LAN_TRAFFIC_OUT: private network outbound bandwidth </li><li>LAN_TRAFFIC_IN: private network inbound bandwidth </li><li>WAN_TRAFFIC_OUT: public network outbound bandwidth </li><li>WAN_TRAFFIC_IN: public network inbound bandwidth </li>
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取Alarming threshold: <br><li>CPU_UTILIZATION: [1, 100] in % </li><li>MEM_UTILIZATION: [1, 100] in % </li><li>LAN_TRAFFIC_OUT: >0 in Mbps </li><li>LAN_TRAFFIC_IN: >0 in Mbps </li><li>WAN_TRAFFIC_OUT: >0 in Mbps </li><li>WAN_TRAFFIC_IN: >0 in Mbps </li>
                     * @return Threshold Alarming threshold: <br><li>CPU_UTILIZATION: [1, 100] in % </li><li>MEM_UTILIZATION: [1, 100] in % </li><li>LAN_TRAFFIC_OUT: >0 in Mbps </li><li>LAN_TRAFFIC_IN: >0 in Mbps </li><li>WAN_TRAFFIC_OUT: >0 in Mbps </li><li>WAN_TRAFFIC_IN: >0 in Mbps </li>
                     */
                    uint64_t GetThreshold() const;

                    /**
                     * 设置Alarming threshold: <br><li>CPU_UTILIZATION: [1, 100] in % </li><li>MEM_UTILIZATION: [1, 100] in % </li><li>LAN_TRAFFIC_OUT: >0 in Mbps </li><li>LAN_TRAFFIC_IN: >0 in Mbps </li><li>WAN_TRAFFIC_OUT: >0 in Mbps </li><li>WAN_TRAFFIC_IN: >0 in Mbps </li>
                     * @param Threshold Alarming threshold: <br><li>CPU_UTILIZATION: [1, 100] in % </li><li>MEM_UTILIZATION: [1, 100] in % </li><li>LAN_TRAFFIC_OUT: >0 in Mbps </li><li>LAN_TRAFFIC_IN: >0 in Mbps </li><li>WAN_TRAFFIC_OUT: >0 in Mbps </li><li>WAN_TRAFFIC_IN: >0 in Mbps </li>
                     */
                    void SetThreshold(const uint64_t& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取Time period in seconds. Enumerated values: 60, 300.
                     * @return Period Time period in seconds. Enumerated values: 60, 300.
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置Time period in seconds. Enumerated values: 60, 300.
                     * @param Period Time period in seconds. Enumerated values: 60, 300.
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Number of repetitions. Value range: [1, 10]
                     * @return ContinuousTime Number of repetitions. Value range: [1, 10]
                     */
                    uint64_t GetContinuousTime() const;

                    /**
                     * 设置Number of repetitions. Value range: [1, 10]
                     * @param ContinuousTime Number of repetitions. Value range: [1, 10]
                     */
                    void SetContinuousTime(const uint64_t& _continuousTime);

                    /**
                     * 判断参数 ContinuousTime 是否已赋值
                     * @return ContinuousTime 是否已赋值
                     */
                    bool ContinuousTimeHasBeenSet() const;

                    /**
                     * 获取Statistics type. Value range: <br><li>AVERAGE: average </li><li>MAXIMUM: maximum <li>MINIMUM: minimum </li><br> Default value: AVERAGE
                     * @return Statistic Statistics type. Value range: <br><li>AVERAGE: average </li><li>MAXIMUM: maximum <li>MINIMUM: minimum </li><br> Default value: AVERAGE
                     */
                    std::string GetStatistic() const;

                    /**
                     * 设置Statistics type. Value range: <br><li>AVERAGE: average </li><li>MAXIMUM: maximum <li>MINIMUM: minimum </li><br> Default value: AVERAGE
                     * @param Statistic Statistics type. Value range: <br><li>AVERAGE: average </li><li>MAXIMUM: maximum <li>MINIMUM: minimum </li><br> Default value: AVERAGE
                     */
                    void SetStatistic(const std::string& _statistic);

                    /**
                     * 判断参数 Statistic 是否已赋值
                     * @return Statistic 是否已赋值
                     */
                    bool StatisticHasBeenSet() const;

                    /**
                     * 获取Exact alarming threshold. This parameter is only used in API outputs. Values: <br><li>`CPU_UTILIZATION` (in %): (0, 100]</li><li>`MEM_UTILIZATION` (in %): (0, 100]</li><li>`LAN_TRAFFIC_OUT` (in Mbps): > 0</li><li>`LAN_TRAFFIC_IN` (in Mbps): > 0</li><li>`WAN_TRAFFIC_OUT` (in Mbps): > 0</li><li>`WAN_TRAFFIC_IN` (in Mbps): > 0</li>
                     * @return PreciseThreshold Exact alarming threshold. This parameter is only used in API outputs. Values: <br><li>`CPU_UTILIZATION` (in %): (0, 100]</li><li>`MEM_UTILIZATION` (in %): (0, 100]</li><li>`LAN_TRAFFIC_OUT` (in Mbps): > 0</li><li>`LAN_TRAFFIC_IN` (in Mbps): > 0</li><li>`WAN_TRAFFIC_OUT` (in Mbps): > 0</li><li>`WAN_TRAFFIC_IN` (in Mbps): > 0</li>
                     */
                    double GetPreciseThreshold() const;

                    /**
                     * 设置Exact alarming threshold. This parameter is only used in API outputs. Values: <br><li>`CPU_UTILIZATION` (in %): (0, 100]</li><li>`MEM_UTILIZATION` (in %): (0, 100]</li><li>`LAN_TRAFFIC_OUT` (in Mbps): > 0</li><li>`LAN_TRAFFIC_IN` (in Mbps): > 0</li><li>`WAN_TRAFFIC_OUT` (in Mbps): > 0</li><li>`WAN_TRAFFIC_IN` (in Mbps): > 0</li>
                     * @param PreciseThreshold Exact alarming threshold. This parameter is only used in API outputs. Values: <br><li>`CPU_UTILIZATION` (in %): (0, 100]</li><li>`MEM_UTILIZATION` (in %): (0, 100]</li><li>`LAN_TRAFFIC_OUT` (in Mbps): > 0</li><li>`LAN_TRAFFIC_IN` (in Mbps): > 0</li><li>`WAN_TRAFFIC_OUT` (in Mbps): > 0</li><li>`WAN_TRAFFIC_IN` (in Mbps): > 0</li>
                     */
                    void SetPreciseThreshold(const double& _preciseThreshold);

                    /**
                     * 判断参数 PreciseThreshold 是否已赋值
                     * @return PreciseThreshold 是否已赋值
                     */
                    bool PreciseThresholdHasBeenSet() const;

                private:

                    /**
                     * Comparison operator. Value range: <br><li>GREATER_THAN: greater than </li><li>GREATER_THAN_OR_EQUAL_TO: greater than or equal to </li><li>LESS_THAN: less than </li><li> LESS_THAN_OR_EQUAL_TO: less than or equal to </li><li> EQUAL_TO: equal to </li> <li>NOT_EQUAL_TO: not equal to </li>
                     */
                    std::string m_comparisonOperator;
                    bool m_comparisonOperatorHasBeenSet;

                    /**
                     * Metric name. Value range: <br><li>CPU_UTILIZATION: CPU utilization </li><li>MEM_UTILIZATION: memory utilization </li><li>LAN_TRAFFIC_OUT: private network outbound bandwidth </li><li>LAN_TRAFFIC_IN: private network inbound bandwidth </li><li>WAN_TRAFFIC_OUT: public network outbound bandwidth </li><li>WAN_TRAFFIC_IN: public network inbound bandwidth </li>
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Alarming threshold: <br><li>CPU_UTILIZATION: [1, 100] in % </li><li>MEM_UTILIZATION: [1, 100] in % </li><li>LAN_TRAFFIC_OUT: >0 in Mbps </li><li>LAN_TRAFFIC_IN: >0 in Mbps </li><li>WAN_TRAFFIC_OUT: >0 in Mbps </li><li>WAN_TRAFFIC_IN: >0 in Mbps </li>
                     */
                    uint64_t m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * Time period in seconds. Enumerated values: 60, 300.
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Number of repetitions. Value range: [1, 10]
                     */
                    uint64_t m_continuousTime;
                    bool m_continuousTimeHasBeenSet;

                    /**
                     * Statistics type. Value range: <br><li>AVERAGE: average </li><li>MAXIMUM: maximum <li>MINIMUM: minimum </li><br> Default value: AVERAGE
                     */
                    std::string m_statistic;
                    bool m_statisticHasBeenSet;

                    /**
                     * Exact alarming threshold. This parameter is only used in API outputs. Values: <br><li>`CPU_UTILIZATION` (in %): (0, 100]</li><li>`MEM_UTILIZATION` (in %): (0, 100]</li><li>`LAN_TRAFFIC_OUT` (in Mbps): > 0</li><li>`LAN_TRAFFIC_IN` (in Mbps): > 0</li><li>`WAN_TRAFFIC_OUT` (in Mbps): > 0</li><li>`WAN_TRAFFIC_IN` (in Mbps): > 0</li>
                     */
                    double m_preciseThreshold;
                    bool m_preciseThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_METRICALARM_H_
