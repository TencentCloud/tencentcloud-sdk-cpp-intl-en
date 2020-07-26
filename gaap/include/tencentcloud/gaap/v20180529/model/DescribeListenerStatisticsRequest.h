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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBELISTENERSTATISTICSREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBELISTENERSTATISTICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeListenerStatistics request structure.
                */
                class DescribeListenerStatisticsRequest : public AbstractModel
                {
                public:
                    DescribeListenerStatisticsRequest();
                    ~DescribeListenerStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Listener ID
                     * @return ListenerId Listener ID
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Listener ID
                     * @param ListenerId Listener ID
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取Start time
                     * @return StartTime Start time
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time
                     * @param StartTime Start time
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time
                     * @return EndTime End time
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time
                     * @param EndTime End time
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Statistical metric name list. It supports:["InBandwidth", "OutBandwidth", "Concurrent", "InPackets", "OutPackets"]
                     * @return MetricNames Statistical metric name list. It supports:["InBandwidth", "OutBandwidth", "Concurrent", "InPackets", "OutPackets"]
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置Statistical metric name list. It supports:["InBandwidth", "OutBandwidth", "Concurrent", "InPackets", "OutPackets"]
                     * @param MetricNames Statistical metric name list. It supports:["InBandwidth", "OutBandwidth", "Concurrent", "InPackets", "OutPackets"]
                     */
                    void SetMetricNames(const std::vector<std::string>& _metricNames);

                    /**
                     * 判断参数 MetricNames 是否已赋值
                     * @return MetricNames 是否已赋值
                     */
                    bool MetricNamesHasBeenSet() const;

                    /**
                     * 获取Monitoring granularity. It currently supports: 300, 3,600, and 86,400. Unit: seconds.
Time range: <= 1 day, supported minimum granularity: 300 seconds;
Time range: <= 7 days, supported minimum granularity:3,600 seconds;
Time range: > 7 days, supported minimum granularity:86,400 seconds;
                     * @return Granularity Monitoring granularity. It currently supports: 300, 3,600, and 86,400. Unit: seconds.
Time range: <= 1 day, supported minimum granularity: 300 seconds;
Time range: <= 7 days, supported minimum granularity:3,600 seconds;
Time range: > 7 days, supported minimum granularity:86,400 seconds;
                     */
                    uint64_t GetGranularity() const;

                    /**
                     * 设置Monitoring granularity. It currently supports: 300, 3,600, and 86,400. Unit: seconds.
Time range: <= 1 day, supported minimum granularity: 300 seconds;
Time range: <= 7 days, supported minimum granularity:3,600 seconds;
Time range: > 7 days, supported minimum granularity:86,400 seconds;
                     * @param Granularity Monitoring granularity. It currently supports: 300, 3,600, and 86,400. Unit: seconds.
Time range: <= 1 day, supported minimum granularity: 300 seconds;
Time range: <= 7 days, supported minimum granularity:3,600 seconds;
Time range: > 7 days, supported minimum granularity:86,400 seconds;
                     */
                    void SetGranularity(const uint64_t& _granularity);

                    /**
                     * 判断参数 Granularity 是否已赋值
                     * @return Granularity 是否已赋值
                     */
                    bool GranularityHasBeenSet() const;

                private:

                    /**
                     * Listener ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Statistical metric name list. It supports:["InBandwidth", "OutBandwidth", "Concurrent", "InPackets", "OutPackets"]
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * Monitoring granularity. It currently supports: 300, 3,600, and 86,400. Unit: seconds.
Time range: <= 1 day, supported minimum granularity: 300 seconds;
Time range: <= 7 days, supported minimum granularity:3,600 seconds;
Time range: > 7 days, supported minimum granularity:86,400 seconds;
                     */
                    uint64_t m_granularity;
                    bool m_granularityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBELISTENERSTATISTICSREQUEST_H_
