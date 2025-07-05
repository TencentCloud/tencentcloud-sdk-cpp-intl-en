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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_ASSIGNIPV6ADDRESSESREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_ASSIGNIPV6ADDRESSESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Ipv6Address.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * AssignIpv6Addresses request structure.
                */
                class AssignIpv6AddressesRequest : public AbstractModel
                {
                public:
                    AssignIpv6AddressesRequest();
                    ~AssignIpv6AddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ECM region
                     * @return EcmRegion ECM region
                     * 
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置ECM region
                     * @param _ecmRegion ECM region
                     * 
                     */
                    void SetEcmRegion(const std::string& _ecmRegion);

                    /**
                     * 判断参数 EcmRegion 是否已赋值
                     * @return EcmRegion 是否已赋值
                     * 
                     */
                    bool EcmRegionHasBeenSet() const;

                    /**
                     * 获取ENI instance ID, such as `eni-1snva0vd`. Currently, only the primary ENI will be assigned the ID.
                     * @return NetworkInterfaceId ENI instance ID, such as `eni-1snva0vd`. Currently, only the primary ENI will be assigned the ID.
                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置ENI instance ID, such as `eni-1snva0vd`. Currently, only the primary ENI will be assigned the ID.
                     * @param _networkInterfaceId ENI instance ID, such as `eni-1snva0vd`. Currently, only the primary ENI will be assigned the ID.
                     * 
                     */
                    void SetNetworkInterfaceId(const std::string& _networkInterfaceId);

                    /**
                     * 判断参数 NetworkInterfaceId 是否已赋值
                     * @return NetworkInterfaceId 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceIdHasBeenSet() const;

                    /**
                     * 获取List of specified IPv6 addresses. You can specify up to 10 IPv6 addresses at a time. The quota is calculated together with that of `Ipv6AddressCount`, a required input parameter alternative to this one.
                     * @return Ipv6Addresses List of specified IPv6 addresses. You can specify up to 10 IPv6 addresses at a time. The quota is calculated together with that of `Ipv6AddressCount`, a required input parameter alternative to this one.
                     * 
                     */
                    std::vector<Ipv6Address> GetIpv6Addresses() const;

                    /**
                     * 设置List of specified IPv6 addresses. You can specify up to 10 IPv6 addresses at a time. The quota is calculated together with that of `Ipv6AddressCount`, a required input parameter alternative to this one.
                     * @param _ipv6Addresses List of specified IPv6 addresses. You can specify up to 10 IPv6 addresses at a time. The quota is calculated together with that of `Ipv6AddressCount`, a required input parameter alternative to this one.
                     * 
                     */
                    void SetIpv6Addresses(const std::vector<Ipv6Address>& _ipv6Addresses);

                    /**
                     * 判断参数 Ipv6Addresses 是否已赋值
                     * @return Ipv6Addresses 是否已赋值
                     * 
                     */
                    bool Ipv6AddressesHasBeenSet() const;

                    /**
                     * 获取Number of automatically assigned IPv6 addresses. The total number of private IP addresses cannot exceed the quota. The quota is calculated together with that of `Ipv6Addresses`, a required input parameter alternative to this one.
                     * @return Ipv6AddressCount Number of automatically assigned IPv6 addresses. The total number of private IP addresses cannot exceed the quota. The quota is calculated together with that of `Ipv6Addresses`, a required input parameter alternative to this one.
                     * 
                     */
                    int64_t GetIpv6AddressCount() const;

                    /**
                     * 设置Number of automatically assigned IPv6 addresses. The total number of private IP addresses cannot exceed the quota. The quota is calculated together with that of `Ipv6Addresses`, a required input parameter alternative to this one.
                     * @param _ipv6AddressCount Number of automatically assigned IPv6 addresses. The total number of private IP addresses cannot exceed the quota. The quota is calculated together with that of `Ipv6Addresses`, a required input parameter alternative to this one.
                     * 
                     */
                    void SetIpv6AddressCount(const int64_t& _ipv6AddressCount);

                    /**
                     * 判断参数 Ipv6AddressCount 是否已赋值
                     * @return Ipv6AddressCount 是否已赋值
                     * 
                     */
                    bool Ipv6AddressCountHasBeenSet() const;

                    /**
                     * 获取Ipv6 ISP. Valid values:
`CTCC`: China Telecom
`CUCC`: China Unicom
`CMCC`: China Mobile
                     * @return Ipv6ISP Ipv6 ISP. Valid values:
`CTCC`: China Telecom
`CUCC`: China Unicom
`CMCC`: China Mobile
                     * 
                     */
                    std::string GetIpv6ISP() const;

                    /**
                     * 设置Ipv6 ISP. Valid values:
`CTCC`: China Telecom
`CUCC`: China Unicom
`CMCC`: China Mobile
                     * @param _ipv6ISP Ipv6 ISP. Valid values:
`CTCC`: China Telecom
`CUCC`: China Unicom
`CMCC`: China Mobile
                     * 
                     */
                    void SetIpv6ISP(const std::string& _ipv6ISP);

                    /**
                     * 判断参数 Ipv6ISP 是否已赋值
                     * @return Ipv6ISP 是否已赋值
                     * 
                     */
                    bool Ipv6ISPHasBeenSet() const;

                private:

                    /**
                     * ECM region
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                    /**
                     * ENI instance ID, such as `eni-1snva0vd`. Currently, only the primary ENI will be assigned the ID.
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * List of specified IPv6 addresses. You can specify up to 10 IPv6 addresses at a time. The quota is calculated together with that of `Ipv6AddressCount`, a required input parameter alternative to this one.
                     */
                    std::vector<Ipv6Address> m_ipv6Addresses;
                    bool m_ipv6AddressesHasBeenSet;

                    /**
                     * Number of automatically assigned IPv6 addresses. The total number of private IP addresses cannot exceed the quota. The quota is calculated together with that of `Ipv6Addresses`, a required input parameter alternative to this one.
                     */
                    int64_t m_ipv6AddressCount;
                    bool m_ipv6AddressCountHasBeenSet;

                    /**
                     * Ipv6 ISP. Valid values:
`CTCC`: China Telecom
`CUCC`: China Unicom
`CMCC`: China Mobile
                     */
                    std::string m_ipv6ISP;
                    bool m_ipv6ISPHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_ASSIGNIPV6ADDRESSESREQUEST_H_
