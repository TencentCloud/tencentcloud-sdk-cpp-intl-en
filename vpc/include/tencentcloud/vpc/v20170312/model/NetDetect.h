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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_NETDETECT_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_NETDETECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * The network detection object.
                */
                class NetDetect : public AbstractModel
                {
                public:
                    NetDetect();
                    ~NetDetect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The ID of a VPC instance, such as `vpc-12345678`.
                     * @return VpcId The ID of a VPC instance, such as `vpc-12345678`.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置The ID of a VPC instance, such as `vpc-12345678`.
                     * @param _vpcId The ID of a VPC instance, such as `vpc-12345678`.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取The name of a VPC instance.
                     * @return VpcName The name of a VPC instance.
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置The name of a VPC instance.
                     * @param _vpcName The name of a VPC instance.
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取The ID of a subnet instance, such as subnet-12345678.
                     * @return SubnetId The ID of a subnet instance, such as subnet-12345678.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置The ID of a subnet instance, such as subnet-12345678.
                     * @param _subnetId The ID of a subnet instance, such as subnet-12345678.
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取The name of a subnet instance.
                     * @return SubnetName The name of a subnet instance.
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置The name of a subnet instance.
                     * @param _subnetName The name of a subnet instance.
                     * 
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     * 
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取The ID of a network detection instance, such as netd-12345678.
                     * @return NetDetectId The ID of a network detection instance, such as netd-12345678.
                     * 
                     */
                    std::string GetNetDetectId() const;

                    /**
                     * 设置The ID of a network detection instance, such as netd-12345678.
                     * @param _netDetectId The ID of a network detection instance, such as netd-12345678.
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
                     * 获取The array of detection source IPv4 addresses automatically allocated by the system. The length is 2.
                     * @return DetectSourceIp The array of detection source IPv4 addresses automatically allocated by the system. The length is 2.
                     * 
                     */
                    std::vector<std::string> GetDetectSourceIp() const;

                    /**
                     * 设置The array of detection source IPv4 addresses automatically allocated by the system. The length is 2.
                     * @param _detectSourceIp The array of detection source IPv4 addresses automatically allocated by the system. The length is 2.
                     * 
                     */
                    void SetDetectSourceIp(const std::vector<std::string>& _detectSourceIp);

                    /**
                     * 判断参数 DetectSourceIp 是否已赋值
                     * @return DetectSourceIp 是否已赋值
                     * 
                     */
                    bool DetectSourceIpHasBeenSet() const;

                    /**
                     * 获取Type of the next hop. Currently supported types are:
VPN: VPN gateway;
`DIRECTCONNECT`: Direct connect gateway;
`PEERCONNECTION`: Peering connection;
`NAT`: NAT gateway;
`NORMAL_CVM`: CVM instance;
`CCN`: CCN instance;
`NONEXTHOP`: No next hop.
                     * @return NextHopType Type of the next hop. Currently supported types are:
VPN: VPN gateway;
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
                     * 设置Type of the next hop. Currently supported types are:
VPN: VPN gateway;
`DIRECTCONNECT`: Direct connect gateway;
`PEERCONNECTION`: Peering connection;
`NAT`: NAT gateway;
`NORMAL_CVM`: CVM instance;
`CCN`: CCN instance;
`NONEXTHOP`: No next hop.
                     * @param _nextHopType Type of the next hop. Currently supported types are:
VPN: VPN gateway;
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
`NextHopType` = `VPN`: VPN gateway ID, such as `vpngw-12345678`.
`NextHopType` = `DIRECTCONNECT`: Direct connect gateway ID, such as `dcg-12345678`.
`NextHopType` = `PEERCONNECTION`: Peering connection ID, such as `pcx-12345678`.
`NextHopType` = `NAT`: NAT gateway ID, such as `nat-12345678`.
`NextHopType` = `NORMAL_CVM`: CVM IPv4 address, such as `10.0.0.12`.
`NextHopType` = `CCN`: CCN instance ID, such as `ccn-12345678`.
`NextHopType` = `NONEXTHOP`: No next hop.
                     * @return NextHopDestination ID of the next-hop gateway. 
`NextHopType` = `VPN`: VPN gateway ID, such as `vpngw-12345678`.
`NextHopType` = `DIRECTCONNECT`: Direct connect gateway ID, such as `dcg-12345678`.
`NextHopType` = `PEERCONNECTION`: Peering connection ID, such as `pcx-12345678`.
`NextHopType` = `NAT`: NAT gateway ID, such as `nat-12345678`.
`NextHopType` = `NORMAL_CVM`: CVM IPv4 address, such as `10.0.0.12`.
`NextHopType` = `CCN`: CCN instance ID, such as `ccn-12345678`.
`NextHopType` = `NONEXTHOP`: No next hop.
                     * 
                     */
                    std::string GetNextHopDestination() const;

                    /**
                     * 设置ID of the next-hop gateway. 
`NextHopType` = `VPN`: VPN gateway ID, such as `vpngw-12345678`.
`NextHopType` = `DIRECTCONNECT`: Direct connect gateway ID, such as `dcg-12345678`.
`NextHopType` = `PEERCONNECTION`: Peering connection ID, such as `pcx-12345678`.
`NextHopType` = `NAT`: NAT gateway ID, such as `nat-12345678`.
`NextHopType` = `NORMAL_CVM`: CVM IPv4 address, such as `10.0.0.12`.
`NextHopType` = `CCN`: CCN instance ID, such as `ccn-12345678`.
`NextHopType` = `NONEXTHOP`: No next hop.
                     * @param _nextHopDestination ID of the next-hop gateway. 
`NextHopType` = `VPN`: VPN gateway ID, such as `vpngw-12345678`.
`NextHopType` = `DIRECTCONNECT`: Direct connect gateway ID, such as `dcg-12345678`.
`NextHopType` = `PEERCONNECTION`: Peering connection ID, such as `pcx-12345678`.
`NextHopType` = `NAT`: NAT gateway ID, such as `nat-12345678`.
`NextHopType` = `NORMAL_CVM`: CVM IPv4 address, such as `10.0.0.12`.
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
                     * 获取The name of the next-hop gateway.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NextHopName The name of the next-hop gateway.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNextHopName() const;

                    /**
                     * 设置The name of the next-hop gateway.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nextHopName The name of the next-hop gateway.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNextHopName(const std::string& _nextHopName);

                    /**
                     * 判断参数 NextHopName 是否已赋值
                     * @return NextHopName 是否已赋值
                     * 
                     */
                    bool NextHopNameHasBeenSet() const;

                    /**
                     * 获取Network detection description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NetDetectDescription Network detection description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNetDetectDescription() const;

                    /**
                     * 设置Network detection description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _netDetectDescription Network detection description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNetDetectDescription(const std::string& _netDetectDescription);

                    /**
                     * 判断参数 NetDetectDescription 是否已赋值
                     * @return NetDetectDescription 是否已赋值
                     * 
                     */
                    bool NetDetectDescriptionHasBeenSet() const;

                    /**
                     * 获取The creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime The creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime The creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * The ID of a VPC instance, such as `vpc-12345678`.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * The name of a VPC instance.
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * The ID of a subnet instance, such as subnet-12345678.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * The name of a subnet instance.
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * The ID of a network detection instance, such as netd-12345678.
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
                     * The array of detection source IPv4 addresses automatically allocated by the system. The length is 2.
                     */
                    std::vector<std::string> m_detectSourceIp;
                    bool m_detectSourceIpHasBeenSet;

                    /**
                     * Type of the next hop. Currently supported types are:
VPN: VPN gateway;
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
`NextHopType` = `VPN`: VPN gateway ID, such as `vpngw-12345678`.
`NextHopType` = `DIRECTCONNECT`: Direct connect gateway ID, such as `dcg-12345678`.
`NextHopType` = `PEERCONNECTION`: Peering connection ID, such as `pcx-12345678`.
`NextHopType` = `NAT`: NAT gateway ID, such as `nat-12345678`.
`NextHopType` = `NORMAL_CVM`: CVM IPv4 address, such as `10.0.0.12`.
`NextHopType` = `CCN`: CCN instance ID, such as `ccn-12345678`.
`NextHopType` = `NONEXTHOP`: No next hop.
                     */
                    std::string m_nextHopDestination;
                    bool m_nextHopDestinationHasBeenSet;

                    /**
                     * The name of the next-hop gateway.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nextHopName;
                    bool m_nextHopNameHasBeenSet;

                    /**
                     * Network detection description.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_netDetectDescription;
                    bool m_netDetectDescriptionHasBeenSet;

                    /**
                     * The creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_NETDETECT_H_
