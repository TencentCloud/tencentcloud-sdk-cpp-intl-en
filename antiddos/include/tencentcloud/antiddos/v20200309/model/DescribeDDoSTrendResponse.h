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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEDDOSTRENDRESPONSE_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEDDOSTRENDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeDDoSTrend response structure.
                */
                class DescribeDDoSTrendResponse : public AbstractModel
                {
                public:
                    DescribeDDoSTrendResponse();
                    ~DescribeDDoSTrendResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of values returned
                     * @return Count Number of values returned
                     */
                    uint64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (Single IP); `bgp-multip`: Anti-DDoS Pro (Multi-IP); `net`: Anti-DDoS Ultimate; `basic`: Anti-DDoS Basic
                     * @return Business Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (Single IP); `bgp-multip`: Anti-DDoS Pro (Multi-IP); `net`: Anti-DDoS Ultimate; `basic`: Anti-DDoS Basic
                     */
                    std::string GetBusiness() const;

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取Instance IP
                     * @return Ip Instance IP
                     */
                    std::string GetIp() const;

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Sampling period. Valid values: `300` (5 minutes), `3600` (one hour), `86400` (one day)
                     * @return Period Sampling period. Valid values: `300` (5 minutes), `3600` (one hour), `86400` (one day)
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Beginning of the time range for the query
                     * @return StartTime Beginning of the time range for the query
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End of the time range for the query
                     * @return EndTime End of the time range for the query
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Value array. The unit for attack traffic bandwidth is Mbps, and that for the packet rate is pps.
                     * @return Data Value array. The unit for attack traffic bandwidth is Mbps, and that for the packet rate is pps.
                     */
                    std::vector<uint64_t> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Instance ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Id Instance ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Metric. Valid values: `bps`: attack traffic bandwidth; `pps`: attack packet rate
                     * @return MetricName Metric. Valid values: `bps`: attack traffic bandwidth; `pps`: attack packet rate
                     */
                    std::string GetMetricName() const;

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     */
                    bool MetricNameHasBeenSet() const;

                private:

                    /**
                     * Number of values returned
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (Single IP); `bgp-multip`: Anti-DDoS Pro (Multi-IP); `net`: Anti-DDoS Ultimate; `basic`: Anti-DDoS Basic
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * Instance IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Sampling period. Valid values: `300` (5 minutes), `3600` (one hour), `86400` (one day)
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Beginning of the time range for the query
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End of the time range for the query
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Value array. The unit for attack traffic bandwidth is Mbps, and that for the packet rate is pps.
                     */
                    std::vector<uint64_t> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Instance ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Metric. Valid values: `bps`: attack traffic bandwidth; `pps`: attack packet rate
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEDDOSTRENDRESPONSE_H_
