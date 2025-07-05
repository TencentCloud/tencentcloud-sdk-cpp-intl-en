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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEBARADDATAREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEBARADDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/ProtocolPort.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeBaradData request structure.
                */
                class DescribeBaradDataRequest : public AbstractModel
                {
                public:
                    DescribeBaradDataRequest();
                    ~DescribeBaradDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `net`: Anti-DDoS Ultimate
                     * @return Business Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `net`: Anti-DDoS Ultimate
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `net`: Anti-DDoS Ultimate
                     * @param _business Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `net`: Anti-DDoS Ultimate
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取Anti-DDoS instance ID
                     * @return Id Anti-DDoS instance ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Anti-DDoS instance ID
                     * @param _id Anti-DDoS instance ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Metric name. Valid values:
connum: number of active TCP connections;
new_conn: number of new TCP connections;
inactive_conn: number of inactive connections;
intraffic: inbound traffic;
outtraffic: outbound traffic;
alltraffic: sum of inbound and outbound traffic;
inpkg: inbound packet rate;
outpkg: outbound packet rate;
                     * @return MetricName Metric name. Valid values:
connum: number of active TCP connections;
new_conn: number of new TCP connections;
inactive_conn: number of inactive connections;
intraffic: inbound traffic;
outtraffic: outbound traffic;
alltraffic: sum of inbound and outbound traffic;
inpkg: inbound packet rate;
outpkg: outbound packet rate;
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Metric name. Valid values:
connum: number of active TCP connections;
new_conn: number of new TCP connections;
inactive_conn: number of inactive connections;
intraffic: inbound traffic;
outtraffic: outbound traffic;
alltraffic: sum of inbound and outbound traffic;
inpkg: inbound packet rate;
outpkg: outbound packet rate;
                     * @param _metricName Metric name. Valid values:
connum: number of active TCP connections;
new_conn: number of new TCP connections;
inactive_conn: number of inactive connections;
intraffic: inbound traffic;
outtraffic: outbound traffic;
alltraffic: sum of inbound and outbound traffic;
inpkg: inbound packet rate;
outpkg: outbound packet rate;
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
                     * 获取Statistical time granularity in seconds (300: 5-minute, 3600: hourly, 86400: daily)
                     * @return Period Statistical time granularity in seconds (300: 5-minute, 3600: hourly, 86400: daily)
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置Statistical time granularity in seconds (300: 5-minute, 3600: hourly, 86400: daily)
                     * @param _period Statistical time granularity in seconds (300: 5-minute, 3600: hourly, 86400: daily)
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Statistics start time. The second part is kept at 0, and the minute part is a multiple of 5
                     * @return StartTime Statistics start time. The second part is kept at 0, and the minute part is a multiple of 5
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Statistics start time. The second part is kept at 0, and the minute part is a multiple of 5
                     * @param _startTime Statistics start time. The second part is kept at 0, and the minute part is a multiple of 5
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
                     * 获取Statistics end time. The second part is kept at 0, and the minute part is a multiple of 5
                     * @return EndTime Statistics end time. The second part is kept at 0, and the minute part is a multiple of 5
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Statistics end time. The second part is kept at 0, and the minute part is a multiple of 5
                     * @param _endTime Statistics end time. The second part is kept at 0, and the minute part is a multiple of 5
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
                     * 获取Statistical method. Valid values:
max: maximum value;
min: minimum value;
avg: average;
                     * @return Statistics Statistical method. Valid values:
max: maximum value;
min: minimum value;
avg: average;
                     * 
                     */
                    std::string GetStatistics() const;

                    /**
                     * 设置Statistical method. Valid values:
max: maximum value;
min: minimum value;
avg: average;
                     * @param _statistics Statistical method. Valid values:
max: maximum value;
min: minimum value;
avg: average;
                     * 
                     */
                    void SetStatistics(const std::string& _statistics);

                    /**
                     * 判断参数 Statistics 是否已赋值
                     * @return Statistics 是否已赋值
                     * 
                     */
                    bool StatisticsHasBeenSet() const;

                    /**
                     * 获取Protocol port array
                     * @return ProtocolPort Protocol port array
                     * 
                     */
                    std::vector<ProtocolPort> GetProtocolPort() const;

                    /**
                     * 设置Protocol port array
                     * @param _protocolPort Protocol port array
                     * 
                     */
                    void SetProtocolPort(const std::vector<ProtocolPort>& _protocolPort);

                    /**
                     * 判断参数 ProtocolPort 是否已赋值
                     * @return ProtocolPort 是否已赋值
                     * 
                     */
                    bool ProtocolPortHasBeenSet() const;

                    /**
                     * 获取Resource instance IP, which is required only if `Business` is `net` (Anti-DDoS Ultimate), because an Anti-DDoS Ultimate instance has multiple IPs;
                     * @return Ip Resource instance IP, which is required only if `Business` is `net` (Anti-DDoS Ultimate), because an Anti-DDoS Ultimate instance has multiple IPs;
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Resource instance IP, which is required only if `Business` is `net` (Anti-DDoS Ultimate), because an Anti-DDoS Ultimate instance has multiple IPs;
                     * @param _ip Resource instance IP, which is required only if `Business` is `net` (Anti-DDoS Ultimate), because an Anti-DDoS Ultimate instance has multiple IPs;
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `net`: Anti-DDoS Ultimate
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * Anti-DDoS instance ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Metric name. Valid values:
connum: number of active TCP connections;
new_conn: number of new TCP connections;
inactive_conn: number of inactive connections;
intraffic: inbound traffic;
outtraffic: outbound traffic;
alltraffic: sum of inbound and outbound traffic;
inpkg: inbound packet rate;
outpkg: outbound packet rate;
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Statistical time granularity in seconds (300: 5-minute, 3600: hourly, 86400: daily)
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Statistics start time. The second part is kept at 0, and the minute part is a multiple of 5
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Statistics end time. The second part is kept at 0, and the minute part is a multiple of 5
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Statistical method. Valid values:
max: maximum value;
min: minimum value;
avg: average;
                     */
                    std::string m_statistics;
                    bool m_statisticsHasBeenSet;

                    /**
                     * Protocol port array
                     */
                    std::vector<ProtocolPort> m_protocolPort;
                    bool m_protocolPortHasBeenSet;

                    /**
                     * Resource instance IP, which is required only if `Business` is `net` (Anti-DDoS Ultimate), because an Anti-DDoS Ultimate instance has multiple IPs;
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEBARADDATAREQUEST_H_
