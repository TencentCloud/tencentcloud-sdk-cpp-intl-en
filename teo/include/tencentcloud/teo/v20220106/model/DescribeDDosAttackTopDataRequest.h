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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDDOSATTACKTOPDATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDDOSATTACKTOPDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeDDosAttackTopData request structure.
                */
                class DescribeDDosAttackTopDataRequest : public AbstractModel
                {
                public:
                    DescribeDDosAttackTopDataRequest();
                    ~DescribeDDosAttackTopDataRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Filter metric
                     * @return MetricName Filter metric
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Filter metric
                     * @param MetricName Filter metric
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取Number of the top data entries to query. 0: queries all data entries.
                     * @return Limit Number of the top data entries to query. 0: queries all data entries.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of the top data entries to query. 0: queries all data entries.
                     * @param Limit Number of the top data entries to query. 0: queries all data entries.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Site set
                     * @return ZoneIds Site set
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置Site set
                     * @param ZoneIds Site set
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取Set of DDoS policy group IDs
                     * @return PolicyIds Set of DDoS policy group IDs
                     */
                    std::vector<int64_t> GetPolicyIds() const;

                    /**
                     * 设置Set of DDoS policy group IDs
                     * @param PolicyIds Set of DDoS policy group IDs
                     */
                    void SetPolicyIds(const std::vector<int64_t>& _policyIds);

                    /**
                     * 判断参数 PolicyIds 是否已赋值
                     * @return PolicyIds 是否已赋值
                     */
                    bool PolicyIdsHasBeenSet() const;

                    /**
                     * 获取Port number
                     * @return Port Port number
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Port number
                     * @param Port Port number
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Protocol type. Valid values: tcp, udp, all
                     * @return ProtocolType Protocol type. Valid values: tcp, udp, all
                     */
                    std::string GetProtocolType() const;

                    /**
                     * 设置Protocol type. Valid values: tcp, udp, all
                     * @param ProtocolType Protocol type. Valid values: tcp, udp, all
                     */
                    void SetProtocolType(const std::string& _protocolType);

                    /**
                     * 判断参数 ProtocolType 是否已赋值
                     * @return ProtocolType 是否已赋值
                     */
                    bool ProtocolTypeHasBeenSet() const;

                    /**
                     * 获取Attack type. Valid values: flood, icmpFlood..., all
                     * @return AttackType Attack type. Valid values: flood, icmpFlood..., all
                     */
                    std::string GetAttackType() const;

                    /**
                     * 设置Attack type. Valid values: flood, icmpFlood..., all
                     * @param AttackType Attack type. Valid values: flood, icmpFlood..., all
                     */
                    void SetAttackType(const std::string& _attackType);

                    /**
                     * 判断参数 AttackType 是否已赋值
                     * @return AttackType 是否已赋值
                     */
                    bool AttackTypeHasBeenSet() const;

                private:

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
                     * Filter metric
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Number of the top data entries to query. 0: queries all data entries.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Site set
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Set of DDoS policy group IDs
                     */
                    std::vector<int64_t> m_policyIds;
                    bool m_policyIdsHasBeenSet;

                    /**
                     * Port number
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Protocol type. Valid values: tcp, udp, all
                     */
                    std::string m_protocolType;
                    bool m_protocolTypeHasBeenSet;

                    /**
                     * Attack type. Valid values: flood, icmpFlood..., all
                     */
                    std::string m_attackType;
                    bool m_attackTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDDOSATTACKTOPDATAREQUEST_H_
