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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQPUBLICACCESSMONITORDATARESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQPUBLICACCESSMONITORDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RocketMQDataPoint.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRocketMQPublicAccessMonitorData response structure.
                */
                class DescribeRocketMQPublicAccessMonitorDataResponse : public AbstractModel
                {
                public:
                    DescribeRocketMQPublicAccessMonitorDataResponse();
                    ~DescribeRocketMQPublicAccessMonitorDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Metric name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MetricName Metric name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取Monitoring statistical period, such as 60 (in seconds). The default value is 300.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Period Monitoring statistical period, such as 60 (in seconds). The default value is 300.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Start time, for example, 2018-09-22T19:51:23+08:00.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTime Start time, for example, 2018-09-22T19:51:23+08:00.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time, such as 2018-09-22T20:51:23+08:00. The default value is the current time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime End time, such as 2018-09-22T20:51:23+08:00. The default value is the current time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Data point array
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataPoints Data point array
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<RocketMQDataPoint> GetDataPoints() const;

                    /**
                     * 判断参数 DataPoints 是否已赋值
                     * @return DataPoints 是否已赋值
                     * 
                     */
                    bool DataPointsHasBeenSet() const;

                    /**
                     * 获取Returned information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Msg Returned information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                private:

                    /**
                     * Metric name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Monitoring statistical period, such as 60 (in seconds). The default value is 300.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Start time, for example, 2018-09-22T19:51:23+08:00.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time, such as 2018-09-22T20:51:23+08:00. The default value is the current time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Data point array
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RocketMQDataPoint> m_dataPoints;
                    bool m_dataPointsHasBeenSet;

                    /**
                     * Returned information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQPUBLICACCESSMONITORDATARESPONSE_H_
