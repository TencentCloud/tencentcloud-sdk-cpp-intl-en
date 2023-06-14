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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDDOSATTACKDATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDDOSATTACKDATAREQUEST_H_

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
                * DescribeDDosAttackData request structure.
                */
                class DescribeDDosAttackDataRequest : public AbstractModel
                {
                public:
                    DescribeDDosAttackDataRequest();
                    ~DescribeDDosAttackDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time
                     * @return StartTime Start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time
                     * @param _startTime Start time
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
                     * 获取End time
                     * @return EndTime End time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time
                     * @param _endTime End time
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
                     * 获取List of statistical metrics
                     * @return MetricNames List of statistical metrics
                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置List of statistical metrics
                     * @param _metricNames List of statistical metrics
                     * 
                     */
                    void SetMetricNames(const std::vector<std::string>& _metricNames);

                    /**
                     * 判断参数 MetricNames 是否已赋值
                     * @return MetricNames 是否已赋值
                     * 
                     */
                    bool MetricNamesHasBeenSet() const;

                    /**
                     * 获取List of site IDs
                     * @return ZoneIds List of site IDs
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置List of site IDs
                     * @param _zoneIds List of site IDs
                     * 
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取List of DDoS policy group IDs
                     * @return PolicyIds List of DDoS policy group IDs
                     * 
                     */
                    std::vector<int64_t> GetPolicyIds() const;

                    /**
                     * 设置List of DDoS policy group IDs
                     * @param _policyIds List of DDoS policy group IDs
                     * 
                     */
                    void SetPolicyIds(const std::vector<int64_t>& _policyIds);

                    /**
                     * 判断参数 PolicyIds 是否已赋值
                     * @return PolicyIds 是否已赋值
                     * 
                     */
                    bool PolicyIdsHasBeenSet() const;

                    /**
                     * 获取Port number
                     * @return Port Port number
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Port number
                     * @param _port Port number
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Protocol type. Valid values: tcp, udp, all
                     * @return ProtocolType Protocol type. Valid values: tcp, udp, all
                     * 
                     */
                    std::string GetProtocolType() const;

                    /**
                     * 设置Protocol type. Valid values: tcp, udp, all
                     * @param _protocolType Protocol type. Valid values: tcp, udp, all
                     * 
                     */
                    void SetProtocolType(const std::string& _protocolType);

                    /**
                     * 判断参数 ProtocolType 是否已赋值
                     * @return ProtocolType 是否已赋值
                     * 
                     */
                    bool ProtocolTypeHasBeenSet() const;

                    /**
                     * 获取Attack type. Valid values: flood, icmpFlood..., all
                     * @return AttackType Attack type. Valid values: flood, icmpFlood..., all
                     * 
                     */
                    std::string GetAttackType() const;

                    /**
                     * 设置Attack type. Valid values: flood, icmpFlood..., all
                     * @param _attackType Attack type. Valid values: flood, icmpFlood..., all
                     * 
                     */
                    void SetAttackType(const std::string& _attackType);

                    /**
                     * 判断参数 AttackType 是否已赋值
                     * @return AttackType 是否已赋值
                     * 
                     */
                    bool AttackTypeHasBeenSet() const;

                    /**
                     * 获取Query time granularity. Valid values: {min,5min,hour,day}
                     * @return Interval Query time granularity. Valid values: {min,5min,hour,day}
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置Query time granularity. Valid values: {min,5min,hour,day}
                     * @param _interval Query time granularity. Valid values: {min,5min,hour,day}
                     * 
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

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
                     * List of statistical metrics
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * List of site IDs
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * List of DDoS policy group IDs
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

                    /**
                     * Query time granularity. Valid values: {min,5min,hour,day}
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDDOSATTACKDATAREQUEST_H_
