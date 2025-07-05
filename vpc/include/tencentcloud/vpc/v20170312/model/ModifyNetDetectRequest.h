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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNETDETECTREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNETDETECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyNetDetect request structure.
                */
                class ModifyNetDetectRequest : public AbstractModel
                {
                public:
                    ModifyNetDetectRequest();
                    ~ModifyNetDetectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of a network detection instance, such as `netd-12345678`.
                     * @return NetDetectId The ID of a network detection instance, such as `netd-12345678`.
                     * 
                     */
                    std::string GetNetDetectId() const;

                    /**
                     * 设置The ID of a network detection instance, such as `netd-12345678`.
                     * @param _netDetectId The ID of a network detection instance, such as `netd-12345678`.
                     * 
                     */
                    void SetNetDetectId(const std::string& _netDetectId);

                    /**
                     * 判断参数 NetDetectId 是否已赋值
                     * @return NetDetectId 是否已赋值
                     * 
                     */
                    bool NetDetectIdHasBeenSet() const;

                    /**
                     * 获取The name of a network detection instance. The maximum length is 60 characters.
                     * @return NetDetectName The name of a network detection instance. The maximum length is 60 characters.
                     * 
                     */
                    std::string GetNetDetectName() const;

                    /**
                     * 设置The name of a network detection instance. The maximum length is 60 characters.
                     * @param _netDetectName The name of a network detection instance. The maximum length is 60 characters.
                     * 
                     */
                    void SetNetDetectName(const std::string& _netDetectName);

                    /**
                     * 判断参数 NetDetectName 是否已赋值
                     * @return NetDetectName 是否已赋值
                     * 
                     */
                    bool NetDetectNameHasBeenSet() const;

                    /**
                     * 获取The array of detection destination IPv4 addresses, which contains at most two IP addresses.
                     * @return DetectDestinationIp The array of detection destination IPv4 addresses, which contains at most two IP addresses.
                     * 
                     */
                    std::vector<std::string> GetDetectDestinationIp() const;

                    /**
                     * 设置The array of detection destination IPv4 addresses, which contains at most two IP addresses.
                     * @param _detectDestinationIp The array of detection destination IPv4 addresses, which contains at most two IP addresses.
                     * 
                     */
                    void SetDetectDestinationIp(const std::vector<std::string>& _detectDestinationIp);

                    /**
                     * 判断参数 DetectDestinationIp 是否已赋值
                     * @return DetectDestinationIp 是否已赋值
                     * 
                     */
                    bool DetectDestinationIpHasBeenSet() const;

                    /**
                     * 获取Type of the next hop. Valid values:
`VPN`: VPN gateway;
`DIRECTCONNECT`: Direct connect gateway;
`PEERCONNECTION`: Peering connection;
`NAT`: NAT gateway;
`NORMAL_CVM`: CVM instance;
`CCN`: CCN instance;
`NONEXTHOP`: No next hop.
                     * @return NextHopType Type of the next hop. Valid values:
`VPN`: VPN gateway;
`DIRECTCONNECT`: Direct connect gateway;
`PEERCONNECTION`: Peering connection;
`NAT`: NAT gateway;
`NORMAL_CVM`: CVM instance;
`CCN`: CCN instance;
`NONEXTHOP`: No next hop.
                     * 
                     */
                    std::string GetNextHopType() const;

                    /**
                     * 设置Type of the next hop. Valid values:
`VPN`: VPN gateway;
`DIRECTCONNECT`: Direct connect gateway;
`PEERCONNECTION`: Peering connection;
`NAT`: NAT gateway;
`NORMAL_CVM`: CVM instance;
`CCN`: CCN instance;
`NONEXTHOP`: No next hop.
                     * @param _nextHopType Type of the next hop. Valid values:
`VPN`: VPN gateway;
`DIRECTCONNECT`: Direct connect gateway;
`PEERCONNECTION`: Peering connection;
`NAT`: NAT gateway;
`NORMAL_CVM`: CVM instance;
`CCN`: CCN instance;
`NONEXTHOP`: No next hop.
                     * 
                     */
                    void SetNextHopType(const std::string& _nextHopType);

                    /**
                     * 判断参数 NextHopType 是否已赋值
                     * @return NextHopType 是否已赋值
                     * 
                     */
                    bool NextHopTypeHasBeenSet() const;

                    /**
                     * 获取ID of the next-hop gateway.
If NextHopType is set to VPN, the value of this parameter is the VPN gateway ID, such as vpngw-12345678.
`NextHopType` = `DIRECTCONNECT`: Direct connect gateway ID, such as `dcg-12345678`.
`NextHopType` = `PEERCONNECTION`: Peering connection ID, such as `pcx-12345678`.
`NextHopType` = `NAT`: NAT gateway ID, such as `nat-12345678`.
If NextHopType is set to NORMAL_CVM, the value of this parameter is the IPv4 address of the CVM, such as 10.0.0.12.
`NextHopType` = `CCN`: CCN instance ID, such as `ccn-12345678`.
`NextHopType` = `NONEXTHOP`: No next hop.
                     * @return NextHopDestination ID of the next-hop gateway.
If NextHopType is set to VPN, the value of this parameter is the VPN gateway ID, such as vpngw-12345678.
`NextHopType` = `DIRECTCONNECT`: Direct connect gateway ID, such as `dcg-12345678`.
`NextHopType` = `PEERCONNECTION`: Peering connection ID, such as `pcx-12345678`.
`NextHopType` = `NAT`: NAT gateway ID, such as `nat-12345678`.
If NextHopType is set to NORMAL_CVM, the value of this parameter is the IPv4 address of the CVM, such as 10.0.0.12.
`NextHopType` = `CCN`: CCN instance ID, such as `ccn-12345678`.
`NextHopType` = `NONEXTHOP`: No next hop.
                     * 
                     */
                    std::string GetNextHopDestination() const;

                    /**
                     * 设置ID of the next-hop gateway.
If NextHopType is set to VPN, the value of this parameter is the VPN gateway ID, such as vpngw-12345678.
`NextHopType` = `DIRECTCONNECT`: Direct connect gateway ID, such as `dcg-12345678`.
`NextHopType` = `PEERCONNECTION`: Peering connection ID, such as `pcx-12345678`.
`NextHopType` = `NAT`: NAT gateway ID, such as `nat-12345678`.
If NextHopType is set to NORMAL_CVM, the value of this parameter is the IPv4 address of the CVM, such as 10.0.0.12.
`NextHopType` = `CCN`: CCN instance ID, such as `ccn-12345678`.
`NextHopType` = `NONEXTHOP`: No next hop.
                     * @param _nextHopDestination ID of the next-hop gateway.
If NextHopType is set to VPN, the value of this parameter is the VPN gateway ID, such as vpngw-12345678.
`NextHopType` = `DIRECTCONNECT`: Direct connect gateway ID, such as `dcg-12345678`.
`NextHopType` = `PEERCONNECTION`: Peering connection ID, such as `pcx-12345678`.
`NextHopType` = `NAT`: NAT gateway ID, such as `nat-12345678`.
If NextHopType is set to NORMAL_CVM, the value of this parameter is the IPv4 address of the CVM, such as 10.0.0.12.
`NextHopType` = `CCN`: CCN instance ID, such as `ccn-12345678`.
`NextHopType` = `NONEXTHOP`: No next hop.
                     * 
                     */
                    void SetNextHopDestination(const std::string& _nextHopDestination);

                    /**
                     * 判断参数 NextHopDestination 是否已赋值
                     * @return NextHopDestination 是否已赋值
                     * 
                     */
                    bool NextHopDestinationHasBeenSet() const;

                    /**
                     * 获取Network detection description.
                     * @return NetDetectDescription Network detection description.
                     * 
                     */
                    std::string GetNetDetectDescription() const;

                    /**
                     * 设置Network detection description.
                     * @param _netDetectDescription Network detection description.
                     * 
                     */
                    void SetNetDetectDescription(const std::string& _netDetectDescription);

                    /**
                     * 判断参数 NetDetectDescription 是否已赋值
                     * @return NetDetectDescription 是否已赋值
                     * 
                     */
                    bool NetDetectDescriptionHasBeenSet() const;

                private:

                    /**
                     * The ID of a network detection instance, such as `netd-12345678`.
                     */
                    std::string m_netDetectId;
                    bool m_netDetectIdHasBeenSet;

                    /**
                     * The name of a network detection instance. The maximum length is 60 characters.
                     */
                    std::string m_netDetectName;
                    bool m_netDetectNameHasBeenSet;

                    /**
                     * The array of detection destination IPv4 addresses, which contains at most two IP addresses.
                     */
                    std::vector<std::string> m_detectDestinationIp;
                    bool m_detectDestinationIpHasBeenSet;

                    /**
                     * Type of the next hop. Valid values:
`VPN`: VPN gateway;
`DIRECTCONNECT`: Direct connect gateway;
`PEERCONNECTION`: Peering connection;
`NAT`: NAT gateway;
`NORMAL_CVM`: CVM instance;
`CCN`: CCN instance;
`NONEXTHOP`: No next hop.
                     */
                    std::string m_nextHopType;
                    bool m_nextHopTypeHasBeenSet;

                    /**
                     * ID of the next-hop gateway.
If NextHopType is set to VPN, the value of this parameter is the VPN gateway ID, such as vpngw-12345678.
`NextHopType` = `DIRECTCONNECT`: Direct connect gateway ID, such as `dcg-12345678`.
`NextHopType` = `PEERCONNECTION`: Peering connection ID, such as `pcx-12345678`.
`NextHopType` = `NAT`: NAT gateway ID, such as `nat-12345678`.
If NextHopType is set to NORMAL_CVM, the value of this parameter is the IPv4 address of the CVM, such as 10.0.0.12.
`NextHopType` = `CCN`: CCN instance ID, such as `ccn-12345678`.
`NextHopType` = `NONEXTHOP`: No next hop.
                     */
                    std::string m_nextHopDestination;
                    bool m_nextHopDestinationHasBeenSet;

                    /**
                     * Network detection description.
                     */
                    std::string m_netDetectDescription;
                    bool m_netDetectDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNETDETECTREQUEST_H_
