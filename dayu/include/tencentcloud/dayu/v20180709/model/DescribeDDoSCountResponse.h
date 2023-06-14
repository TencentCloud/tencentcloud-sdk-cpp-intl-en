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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSCOUNTRESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSCOUNTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/KeyValue.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeDDoSCount response structure.
                */
                class DescribeDDoSCountResponse : public AbstractModel
                {
                public:
                    DescribeDDoSCountResponse();
                    ~DescribeDDoSCountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (single IP); `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate
                     * @return Business Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (single IP); `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate
                     * 
                     */
                    std::string GetBusiness() const;

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
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Resource IP
                     * @return Ip Resource IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Statistics start time
                     * @return StartTime Statistics start time
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
                     * 获取Statistics end time
                     * @return EndTime Statistics end time
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
                     * 获取Metric. Valid values: [traffic (attack protocol traffic in KB), pkg (number of attack protocol packets), classnum (number of attack events)]
                     * @return MetricName Metric. Valid values: [traffic (attack protocol traffic in KB), pkg (number of attack protocol packets), classnum (number of attack events)]
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
                     * 获取`Key-Value` array. Valid values of `Key`:
If `MetricName` is `traffic`:
If `key` is `TcpKBSum`, it indicates the traffic of TCP packets in KB.
If `key` is `UdpKBSum`, it indicates the traffic of UDP packets in KB.
If `key` is `IcmpKBSum`, it indicates the traffic of ICMP packets in KB.
If `key` is `OtherKBSum`, it indicates the traffic of other packets in KB.

If `MetricName` is `pkg`:
If `key` is `TcpPacketSum`, it indicates the number of TCP packets.
If `key` is `UdpPacketSum`, it indicates the number of UDP packets.
If `key` is `IcmpPacketSum`, it indicates the number of ICMP packets.
If `key` is `OtherPacketSum`, it indicates the number of other packets.

If `MetricName` is `classnum`:
The value of `key` indicates the attack event type. When the `key` is `UNKNOWNFLOOD`, it indicates  unknown attack events.
                     * @return Data `Key-Value` array. Valid values of `Key`:
If `MetricName` is `traffic`:
If `key` is `TcpKBSum`, it indicates the traffic of TCP packets in KB.
If `key` is `UdpKBSum`, it indicates the traffic of UDP packets in KB.
If `key` is `IcmpKBSum`, it indicates the traffic of ICMP packets in KB.
If `key` is `OtherKBSum`, it indicates the traffic of other packets in KB.

If `MetricName` is `pkg`:
If `key` is `TcpPacketSum`, it indicates the number of TCP packets.
If `key` is `UdpPacketSum`, it indicates the number of UDP packets.
If `key` is `IcmpPacketSum`, it indicates the number of ICMP packets.
If `key` is `OtherPacketSum`, it indicates the number of other packets.

If `MetricName` is `classnum`:
The value of `key` indicates the attack event type. When the `key` is `UNKNOWNFLOOD`, it indicates  unknown attack events.
                     * 
                     */
                    std::vector<KeyValue> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (single IP); `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * Anti-DDoS instance ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Resource IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Statistics start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Statistics end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Metric. Valid values: [traffic (attack protocol traffic in KB), pkg (number of attack protocol packets), classnum (number of attack events)]
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * `Key-Value` array. Valid values of `Key`:
If `MetricName` is `traffic`:
If `key` is `TcpKBSum`, it indicates the traffic of TCP packets in KB.
If `key` is `UdpKBSum`, it indicates the traffic of UDP packets in KB.
If `key` is `IcmpKBSum`, it indicates the traffic of ICMP packets in KB.
If `key` is `OtherKBSum`, it indicates the traffic of other packets in KB.

If `MetricName` is `pkg`:
If `key` is `TcpPacketSum`, it indicates the number of TCP packets.
If `key` is `UdpPacketSum`, it indicates the number of UDP packets.
If `key` is `IcmpPacketSum`, it indicates the number of ICMP packets.
If `key` is `OtherPacketSum`, it indicates the number of other packets.

If `MetricName` is `classnum`:
The value of `key` indicates the attack event type. When the `key` is `UNKNOWNFLOOD`, it indicates  unknown attack events.
                     */
                    std::vector<KeyValue> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSCOUNTRESPONSE_H_
