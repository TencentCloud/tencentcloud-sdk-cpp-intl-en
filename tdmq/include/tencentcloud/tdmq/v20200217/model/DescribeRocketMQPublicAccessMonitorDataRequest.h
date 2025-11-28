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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQPUBLICACCESSMONITORDATAREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQPUBLICACCESSMONITORDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRocketMQPublicAccessMonitorData request structure.
                */
                class DescribeRocketMQPublicAccessMonitorDataRequest : public AbstractModel
                {
                public:
                    DescribeRocketMQPublicAccessMonitorDataRequest();
                    ~DescribeRocketMQPublicAccessMonitorDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Exclusive Edition cluster ID.
                     * @return InstanceId Exclusive Edition cluster ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Exclusive Edition cluster ID.
                     * @param _instanceId Exclusive Edition cluster ID.
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
                     * 获取Metric name. Only single-metric pulling is supported. Currently supported metrics: ClientIntraffic and ClientOuttraffic.
                     * @return MetricName Metric name. Only single-metric pulling is supported. Currently supported metrics: ClientIntraffic and ClientOuttraffic.
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Metric name. Only single-metric pulling is supported. Currently supported metrics: ClientIntraffic and ClientOuttraffic.
                     * @param _metricName Metric name. Only single-metric pulling is supported. Currently supported metrics: ClientIntraffic and ClientOuttraffic.
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
                     * 获取Start time.
                     * @return StartTime Start time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time.
                     * @param _startTime Start time.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time, current time by default.
                     * @return EndTime End time, current time by default.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time, current time by default.
                     * @param _endTime End time, current time by default.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Monitoring statistical period, such as 60 (in seconds). The default value is 300.
                     * @return Period Monitoring statistical period, such as 60 (in seconds). The default value is 300.
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Monitoring statistical period, such as 60 (in seconds). The default value is 300.
                     * @param _period Monitoring statistical period, such as 60 (in seconds). The default value is 300.
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                private:

                    /**
                     * Exclusive Edition cluster ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Metric name. Only single-metric pulling is supported. Currently supported metrics: ClientIntraffic and ClientOuttraffic.
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time, current time by default.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Monitoring statistical period, such as 60 (in seconds). The default value is 300.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQPUBLICACCESSMONITORDATAREQUEST_H_
