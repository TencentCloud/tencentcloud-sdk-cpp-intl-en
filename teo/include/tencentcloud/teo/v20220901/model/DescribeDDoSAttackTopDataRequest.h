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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDDOSATTACKTOPDATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDDOSATTACKTOPDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeDDoSAttackTopData request structure.
                */
                class DescribeDDoSAttackTopDataRequest : public AbstractModel
                {
                public:
                    DescribeDDoSAttackTopDataRequest();
                    ~DescribeDDoSAttackTopDataRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取End time. The query time range (`EndTime` - `StartTime`) must be less than or equal to 31 days.
                     * @return EndTime End time. The query time range (`EndTime` - `StartTime`) must be less than or equal to 31 days.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time. The query time range (`EndTime` - `StartTime`) must be less than or equal to 31 days.
                     * @param _endTime End time. The query time range (`EndTime` - `StartTime`) must be less than or equal to 31 days.
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
                     * 获取Queried statistical metric. Valid values:
<li>ddos_attackFlux_protocol: ranking of attack traffic by protocol;</li>
<li>ddos_attackPackageNum_protocol: ranking by attack packet volume of each protocol;</li>
<li>ddos_attackNum_attackType: Ranking by number of attacks for each attack type;</li>
<li>ddos_attackNum_sregion: ranking by number of attacks by attack source region;</li>
<li>ddos_attackFlux_sip: ranking by number of attacks from attack source IPs;</li>
<li>ddos_attackFlux_sregion: ranking of attackNum by attack source region.</li>
                     * @return MetricName Queried statistical metric. Valid values:
<li>ddos_attackFlux_protocol: ranking of attack traffic by protocol;</li>
<li>ddos_attackPackageNum_protocol: ranking by attack packet volume of each protocol;</li>
<li>ddos_attackNum_attackType: Ranking by number of attacks for each attack type;</li>
<li>ddos_attackNum_sregion: ranking by number of attacks by attack source region;</li>
<li>ddos_attackFlux_sip: ranking by number of attacks from attack source IPs;</li>
<li>ddos_attackFlux_sregion: ranking of attackNum by attack source region.</li>
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Queried statistical metric. Valid values:
<li>ddos_attackFlux_protocol: ranking of attack traffic by protocol;</li>
<li>ddos_attackPackageNum_protocol: ranking by attack packet volume of each protocol;</li>
<li>ddos_attackNum_attackType: Ranking by number of attacks for each attack type;</li>
<li>ddos_attackNum_sregion: ranking by number of attacks by attack source region;</li>
<li>ddos_attackFlux_sip: ranking by number of attacks from attack source IPs;</li>
<li>ddos_attackFlux_sregion: ranking of attackNum by attack source region.</li>
                     * @param _metricName Queried statistical metric. Valid values:
<li>ddos_attackFlux_protocol: ranking of attack traffic by protocol;</li>
<li>ddos_attackPackageNum_protocol: ranking by attack packet volume of each protocol;</li>
<li>ddos_attackNum_attackType: Ranking by number of attacks for each attack type;</li>
<li>ddos_attackNum_sregion: ranking by number of attacks by attack source region;</li>
<li>ddos_attackFlux_sip: ranking by number of attacks from attack source IPs;</li>
<li>ddos_attackFlux_sregion: ranking of attackNum by attack source region.</li>
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
                     * 获取Site ID set. This parameter will change from optional to required after May 30, 2024. For details, see the announcement: [Tencent Cloud EdgeOne Cloud API Change Notification](https://www.tencentcloud.com/document/product/1552/104902?from_cn_redirect=1). Import up to 100 site IDs. To query data of all sites under the Tencent Cloud root account, use `*` instead. To query account-level data, you need permission for all site resources of this interface.
                     * @return ZoneIds Site ID set. This parameter will change from optional to required after May 30, 2024. For details, see the announcement: [Tencent Cloud EdgeOne Cloud API Change Notification](https://www.tencentcloud.com/document/product/1552/104902?from_cn_redirect=1). Import up to 100 site IDs. To query data of all sites under the Tencent Cloud root account, use `*` instead. To query account-level data, you need permission for all site resources of this interface.
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置Site ID set. This parameter will change from optional to required after May 30, 2024. For details, see the announcement: [Tencent Cloud EdgeOne Cloud API Change Notification](https://www.tencentcloud.com/document/product/1552/104902?from_cn_redirect=1). Import up to 100 site IDs. To query data of all sites under the Tencent Cloud root account, use `*` instead. To query account-level data, you need permission for all site resources of this interface.
                     * @param _zoneIds Site ID set. This parameter will change from optional to required after May 30, 2024. For details, see the announcement: [Tencent Cloud EdgeOne Cloud API Change Notification](https://www.tencentcloud.com/document/product/1552/104902?from_cn_redirect=1). Import up to 100 site IDs. To query data of all sites under the Tencent Cloud root account, use `*` instead. To query account-level data, you need permission for all site resources of this interface.
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
                     * 获取Set of DDoS policy group IDs. If not specified, all policy IDs are selected by default.
                     * @return PolicyIds Set of DDoS policy group IDs. If not specified, all policy IDs are selected by default.
                     * 
                     */
                    std::vector<int64_t> GetPolicyIds() const;

                    /**
                     * 设置Set of DDoS policy group IDs. If not specified, all policy IDs are selected by default.
                     * @param _policyIds Set of DDoS policy group IDs. If not specified, all policy IDs are selected by default.
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
                     * 获取Attack type. Valid values:
<li>flood: flood attack;</li>
<li>icmpFlood: ICMP flood attack;</li>
<li>all: all attack types.</li>If this parameter is not input, the default value `all` is used, indicating a query for all attack types.
                     * @return AttackType Attack type. Valid values:
<li>flood: flood attack;</li>
<li>icmpFlood: ICMP flood attack;</li>
<li>all: all attack types.</li>If this parameter is not input, the default value `all` is used, indicating a query for all attack types.
                     * 
                     */
                    std::string GetAttackType() const;

                    /**
                     * 设置Attack type. Valid values:
<li>flood: flood attack;</li>
<li>icmpFlood: ICMP flood attack;</li>
<li>all: all attack types.</li>If this parameter is not input, the default value `all` is used, indicating a query for all attack types.
                     * @param _attackType Attack type. Valid values:
<li>flood: flood attack;</li>
<li>icmpFlood: ICMP flood attack;</li>
<li>all: all attack types.</li>If this parameter is not input, the default value `all` is used, indicating a query for all attack types.
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
                     * 获取Protocol type. Valid values:
<li>tcp: TCP protocol;</li>
<li>udp: UDP protocol;</li>
<li>all: all protocol types.</li>If this parameter is not input, the default value `all` is used, indicating a query for all protocols.
                     * @return ProtocolType Protocol type. Valid values:
<li>tcp: TCP protocol;</li>
<li>udp: UDP protocol;</li>
<li>all: all protocol types.</li>If this parameter is not input, the default value `all` is used, indicating a query for all protocols.
                     * 
                     */
                    std::string GetProtocolType() const;

                    /**
                     * 设置Protocol type. Valid values:
<li>tcp: TCP protocol;</li>
<li>udp: UDP protocol;</li>
<li>all: all protocol types.</li>If this parameter is not input, the default value `all` is used, indicating a query for all protocols.
                     * @param _protocolType Protocol type. Valid values:
<li>tcp: TCP protocol;</li>
<li>udp: UDP protocol;</li>
<li>all: all protocol types.</li>If this parameter is not input, the default value `all` is used, indicating a query for all protocols.
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
                     * 获取Port number.
                     * @return Port Port number.
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Port number.
                     * @param _port Port number.
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
                     * 获取Indicates the top N data to be queried. If this parameter is not input, the default value is 10, indicating querying the top 10 data.
                     * @return Limit Indicates the top N data to be queried. If this parameter is not input, the default value is 10, indicating querying the top 10 data.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Indicates the top N data to be queried. If this parameter is not input, the default value is 10, indicating querying the top 10 data.
                     * @param _limit Indicates the top N data to be queried. If this parameter is not input, the default value is 10, indicating querying the top 10 data.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Data ownership region. Valid values:
<li>overseas: global (excluding the Chinese mainland) data;</li>
<li>mainland: Chinese mainland data.</li>If not specified, the region will be smart selected according to the user's location.
                     * @return Area Data ownership region. Valid values:
<li>overseas: global (excluding the Chinese mainland) data;</li>
<li>mainland: Chinese mainland data.</li>If not specified, the region will be smart selected according to the user's location.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Data ownership region. Valid values:
<li>overseas: global (excluding the Chinese mainland) data;</li>
<li>mainland: Chinese mainland data.</li>If not specified, the region will be smart selected according to the user's location.
                     * @param _area Data ownership region. Valid values:
<li>overseas: global (excluding the Chinese mainland) data;</li>
<li>mainland: Chinese mainland data.</li>If not specified, the region will be smart selected according to the user's location.
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * Start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time. The query time range (`EndTime` - `StartTime`) must be less than or equal to 31 days.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Queried statistical metric. Valid values:
<li>ddos_attackFlux_protocol: ranking of attack traffic by protocol;</li>
<li>ddos_attackPackageNum_protocol: ranking by attack packet volume of each protocol;</li>
<li>ddos_attackNum_attackType: Ranking by number of attacks for each attack type;</li>
<li>ddos_attackNum_sregion: ranking by number of attacks by attack source region;</li>
<li>ddos_attackFlux_sip: ranking by number of attacks from attack source IPs;</li>
<li>ddos_attackFlux_sregion: ranking of attackNum by attack source region.</li>
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Site ID set. This parameter will change from optional to required after May 30, 2024. For details, see the announcement: [Tencent Cloud EdgeOne Cloud API Change Notification](https://www.tencentcloud.com/document/product/1552/104902?from_cn_redirect=1). Import up to 100 site IDs. To query data of all sites under the Tencent Cloud root account, use `*` instead. To query account-level data, you need permission for all site resources of this interface.
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Set of DDoS policy group IDs. If not specified, all policy IDs are selected by default.
                     */
                    std::vector<int64_t> m_policyIds;
                    bool m_policyIdsHasBeenSet;

                    /**
                     * Attack type. Valid values:
<li>flood: flood attack;</li>
<li>icmpFlood: ICMP flood attack;</li>
<li>all: all attack types.</li>If this parameter is not input, the default value `all` is used, indicating a query for all attack types.
                     */
                    std::string m_attackType;
                    bool m_attackTypeHasBeenSet;

                    /**
                     * Protocol type. Valid values:
<li>tcp: TCP protocol;</li>
<li>udp: UDP protocol;</li>
<li>all: all protocol types.</li>If this parameter is not input, the default value `all` is used, indicating a query for all protocols.
                     */
                    std::string m_protocolType;
                    bool m_protocolTypeHasBeenSet;

                    /**
                     * Port number.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Indicates the top N data to be queried. If this parameter is not input, the default value is 10, indicating querying the top 10 data.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Data ownership region. Valid values:
<li>overseas: global (excluding the Chinese mainland) data;</li>
<li>mainland: Chinese mainland data.</li>If not specified, the region will be smart selected according to the user's location.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDDOSATTACKTOPDATAREQUEST_H_
