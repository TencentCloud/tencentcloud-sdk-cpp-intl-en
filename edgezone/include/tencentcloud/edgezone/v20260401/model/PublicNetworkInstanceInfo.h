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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_PUBLICNETWORKINSTANCEINFO_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_PUBLICNETWORKINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/edgezone/v20260401/model/PublicNetworkSegment.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            namespace Model
            {
                /**
                * Public network instance info, including instance ID, availability zone ID, instance name, line, routing mode, etc.
                */
                class PublicNetworkInstanceInfo : public AbstractModel
                {
                public:
                    PublicNetworkInstanceInfo();
                    ~PublicNetworkInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Public network instance ID
                     * @return NetworkInstanceId Public network instance ID
                     * 
                     */
                    std::string GetNetworkInstanceId() const;

                    /**
                     * 设置Public network instance ID
                     * @param _networkInstanceId Public network instance ID
                     * 
                     */
                    void SetNetworkInstanceId(const std::string& _networkInstanceId);

                    /**
                     * 判断参数 NetworkInstanceId 是否已赋值
                     * @return NetworkInstanceId 是否已赋值
                     * 
                     */
                    bool NetworkInstanceIdHasBeenSet() const;

                    /**
                     * 获取Availability zone ID.
                     * @return ZoneId Availability zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Availability zone ID.
                     * @param _zoneId Availability zone ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Public network instance name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NetworkInstanceName Public network instance name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNetworkInstanceName() const;

                    /**
                     * 设置Public network instance name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _networkInstanceName Public network instance name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNetworkInstanceName(const std::string& _networkInstanceName);

                    /**
                     * 判断参数 NetworkInstanceName 是否已赋值
                     * @return NetworkInstanceName 是否已赋值
                     * 
                     */
                    bool NetworkInstanceNameHasBeenSet() const;

                    /**
                     * 获取Bandwidth, Unit: Mbps
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Bandwidth Bandwidth, Unit: Mbps
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置Bandwidth, Unit: Mbps
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bandwidth Bandwidth, Unit: Mbps
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取Line information
                     * @return Line Line information
                     * 
                     */
                    std::string GetLine() const;

                    /**
                     * 设置Line information
                     * @param _line Line information
                     * 
                     */
                    void SetLine(const std::string& _line);

                    /**
                     * 判断参数 Line 是否已赋值
                     * @return Line 是否已赋值
                     * 
                     */
                    bool LineHasBeenSet() const;

                    /**
                     * 获取Routing mode, enumeration value: STATIC, BGP, OSPF
                     * @return RouteMode Routing mode, enumeration value: STATIC, BGP, OSPF
                     * 
                     */
                    std::string GetRouteMode() const;

                    /**
                     * 设置Routing mode, enumeration value: STATIC, BGP, OSPF
                     * @param _routeMode Routing mode, enumeration value: STATIC, BGP, OSPF
                     * 
                     */
                    void SetRouteMode(const std::string& _routeMode);

                    /**
                     * 判断参数 RouteMode 是否已赋值
                     * @return RouteMode 是否已赋值
                     * 
                     */
                    bool RouteModeHasBeenSet() const;

                    /**
                     * 获取Number of Associated Physical Servers
                     * @return ServerCount Number of Associated Physical Servers
                     * 
                     */
                    int64_t GetServerCount() const;

                    /**
                     * 设置Number of Associated Physical Servers
                     * @param _serverCount Number of Associated Physical Servers
                     * 
                     */
                    void SetServerCount(const int64_t& _serverCount);

                    /**
                     * 判断参数 ServerCount 是否已赋值
                     * @return ServerCount 是否已赋值
                     * 
                     */
                    bool ServerCountHasBeenSet() const;

                    /**
                     * 获取Applied Ipv4 quantity
                     * @return Ipv4Count Applied Ipv4 quantity
                     * 
                     */
                    int64_t GetIpv4Count() const;

                    /**
                     * 设置Applied Ipv4 quantity
                     * @param _ipv4Count Applied Ipv4 quantity
                     * 
                     */
                    void SetIpv4Count(const int64_t& _ipv4Count);

                    /**
                     * 判断参数 Ipv4Count 是否已赋值
                     * @return Ipv4Count 是否已赋值
                     * 
                     */
                    bool Ipv4CountHasBeenSet() const;

                    /**
                     * 获取Number of applied Ipv6 addresses
                     * @return Ipv6Count Number of applied Ipv6 addresses
                     * 
                     */
                    int64_t GetIpv6Count() const;

                    /**
                     * 设置Number of applied Ipv6 addresses
                     * @param _ipv6Count Number of applied Ipv6 addresses
                     * 
                     */
                    void SetIpv6Count(const int64_t& _ipv6Count);

                    /**
                     * 判断参数 Ipv6Count 是否已赋值
                     * @return Ipv6Count 是否已赋值
                     * 
                     */
                    bool Ipv6CountHasBeenSet() const;

                    /**
                     * 获取Associated Ipv4 subnet
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Ipv4CidrSet Associated Ipv4 subnet
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PublicNetworkSegment> GetIpv4CidrSet() const;

                    /**
                     * 设置Associated Ipv4 subnet
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ipv4CidrSet Associated Ipv4 subnet
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIpv4CidrSet(const std::vector<PublicNetworkSegment>& _ipv4CidrSet);

                    /**
                     * 判断参数 Ipv4CidrSet 是否已赋值
                     * @return Ipv4CidrSet 是否已赋值
                     * 
                     */
                    bool Ipv4CidrSetHasBeenSet() const;

                    /**
                     * 获取Associated Ipv6 segment
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Ipv6CidrSet Associated Ipv6 segment
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PublicNetworkSegment> GetIpv6CidrSet() const;

                    /**
                     * 设置Associated Ipv6 segment
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ipv6CidrSet Associated Ipv6 segment
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIpv6CidrSet(const std::vector<PublicNetworkSegment>& _ipv6CidrSet);

                    /**
                     * 判断参数 Ipv6CidrSet 是否已赋值
                     * @return Ipv6CidrSet 是否已赋值
                     * 
                     */
                    bool Ipv6CidrSetHasBeenSet() const;

                    /**
                     * 获取Public network instance creation time
                     * @return CreatedAt Public network instance creation time
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Public network instance creation time
                     * @param _createdAt Public network instance creation time
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Public network instance last modified
                     * @return UpdatedAt Public network instance last modified
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置Public network instance last modified
                     * @param _updatedAt Public network instance last modified
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                private:

                    /**
                     * Public network instance ID
                     */
                    std::string m_networkInstanceId;
                    bool m_networkInstanceIdHasBeenSet;

                    /**
                     * Availability zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Public network instance name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_networkInstanceName;
                    bool m_networkInstanceNameHasBeenSet;

                    /**
                     * Bandwidth, Unit: Mbps
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Line information
                     */
                    std::string m_line;
                    bool m_lineHasBeenSet;

                    /**
                     * Routing mode, enumeration value: STATIC, BGP, OSPF
                     */
                    std::string m_routeMode;
                    bool m_routeModeHasBeenSet;

                    /**
                     * Number of Associated Physical Servers
                     */
                    int64_t m_serverCount;
                    bool m_serverCountHasBeenSet;

                    /**
                     * Applied Ipv4 quantity
                     */
                    int64_t m_ipv4Count;
                    bool m_ipv4CountHasBeenSet;

                    /**
                     * Number of applied Ipv6 addresses
                     */
                    int64_t m_ipv6Count;
                    bool m_ipv6CountHasBeenSet;

                    /**
                     * Associated Ipv4 subnet
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PublicNetworkSegment> m_ipv4CidrSet;
                    bool m_ipv4CidrSetHasBeenSet;

                    /**
                     * Associated Ipv6 segment
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PublicNetworkSegment> m_ipv6CidrSet;
                    bool m_ipv6CidrSetHasBeenSet;

                    /**
                     * Public network instance creation time
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Public network instance last modified
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_PUBLICNETWORKINSTANCEINFO_H_
