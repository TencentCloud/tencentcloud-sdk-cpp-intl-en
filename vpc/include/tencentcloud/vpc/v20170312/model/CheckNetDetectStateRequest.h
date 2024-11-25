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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CHECKNETDETECTSTATEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CHECKNETDETECTSTATEREQUEST_H_

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
                * CheckNetDetectState request structure.
                */
                class CheckNetDetectStateRequest : public AbstractModel
                {
                public:
                    CheckNetDetectStateRequest();
                    ~CheckNetDetectStateRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取ID of a network inspector instance, e.g. netd-12345678. Enter at least one of this parameter, VpcId, SubnetId, and NetDetectName. Use NetDetectId if it is present.
                     * @return NetDetectId ID of a network inspector instance, e.g. netd-12345678. Enter at least one of this parameter, VpcId, SubnetId, and NetDetectName. Use NetDetectId if it is present.
                     * 
                     */
                    std::string GetNetDetectId() const;

                    /**
                     * 设置ID of a network inspector instance, e.g. netd-12345678. Enter at least one of this parameter, VpcId, SubnetId, and NetDetectName. Use NetDetectId if it is present.
                     * @param _netDetectId ID of a network inspector instance, e.g. netd-12345678. Enter at least one of this parameter, VpcId, SubnetId, and NetDetectName. Use NetDetectId if it is present.
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
                     * 获取ID of a `VPC` instance, e.g. `vpc-12345678`, which is used together with SubnetId and NetDetectName. You should enter either this parameter or NetDetectId, or both. Use NetDetectId if it is present.
                     * @return VpcId ID of a `VPC` instance, e.g. `vpc-12345678`, which is used together with SubnetId and NetDetectName. You should enter either this parameter or NetDetectId, or both. Use NetDetectId if it is present.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置ID of a `VPC` instance, e.g. `vpc-12345678`, which is used together with SubnetId and NetDetectName. You should enter either this parameter or NetDetectId, or both. Use NetDetectId if it is present.
                     * @param _vpcId ID of a `VPC` instance, e.g. `vpc-12345678`, which is used together with SubnetId and NetDetectName. You should enter either this parameter or NetDetectId, or both. Use NetDetectId if it is present.
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
                     * 获取ID of a subnet instance, e.g. `subnet-12345678`, which is used together with VpcId and NetDetectName. You should enter either this parameter or NetDetectId, or both. Use NetDetectId if it is present.
                     * @return SubnetId ID of a subnet instance, e.g. `subnet-12345678`, which is used together with VpcId and NetDetectName. You should enter either this parameter or NetDetectId, or both. Use NetDetectId if it is present.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置ID of a subnet instance, e.g. `subnet-12345678`, which is used together with VpcId and NetDetectName. You should enter either this parameter or NetDetectId, or both. Use NetDetectId if it is present.
                     * @param _subnetId ID of a subnet instance, e.g. `subnet-12345678`, which is used together with VpcId and NetDetectName. You should enter either this parameter or NetDetectId, or both. Use NetDetectId if it is present.
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
                     * 获取The name of a network inspector, up to 60 bytes in length. It is used together with VpcId and NetDetectName. You should enter either this parameter or NetDetectId, or both. Use NetDetectId if it is present.
                     * @return NetDetectName The name of a network inspector, up to 60 bytes in length. It is used together with VpcId and NetDetectName. You should enter either this parameter or NetDetectId, or both. Use NetDetectId if it is present.
                     * 
                     */
                    std::string GetNetDetectName() const;

                    /**
                     * 设置The name of a network inspector, up to 60 bytes in length. It is used together with VpcId and NetDetectName. You should enter either this parameter or NetDetectId, or both. Use NetDetectId if it is present.
                     * @param _netDetectName The name of a network inspector, up to 60 bytes in length. It is used together with VpcId and NetDetectName. You should enter either this parameter or NetDetectId, or both. Use NetDetectId if it is present.
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
                     * 获取The type of the next hop. Currently supported types are:
VPN: VPN gateway;
DIRECTCONNECT: direct connect gateway;
PEERCONNECTION: peering connection;
NAT: NAT gateway;
NORMAL_CVM: normal CVM.
                     * @return NextHopType The type of the next hop. Currently supported types are:
VPN: VPN gateway;
DIRECTCONNECT: direct connect gateway;
PEERCONNECTION: peering connection;
NAT: NAT gateway;
NORMAL_CVM: normal CVM.
                     * 
                     */
                    std::string GetNextHopType() const;

                    /**
                     * 设置The type of the next hop. Currently supported types are:
VPN: VPN gateway;
DIRECTCONNECT: direct connect gateway;
PEERCONNECTION: peering connection;
NAT: NAT gateway;
NORMAL_CVM: normal CVM.
                     * @param _nextHopType The type of the next hop. Currently supported types are:
VPN: VPN gateway;
DIRECTCONNECT: direct connect gateway;
PEERCONNECTION: peering connection;
NAT: NAT gateway;
NORMAL_CVM: normal CVM.
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
                     * 获取The next-hop destination gateway. The value is related to NextHopType.
If NextHopType is set to VPN, the value of this parameter is the VPN gateway ID, such as vpngw-12345678.
If NextHopType is set to DIRECTCONNECT, the value of this parameter is the direct connect gateway ID, such as dcg-12345678.
If NextHopType is set to PEERCONNECTION, the value of this parameter is the peering connection ID, such as pcx-12345678.
If NextHopType is set to NAT, the value of this parameter is the NAT gateway ID, such as nat-12345678.
If NextHopType is set to NORMAL_CVM, the value of this parameter is the IPv4 address of the CVM, such as 10.0.0.12.
                     * @return NextHopDestination The next-hop destination gateway. The value is related to NextHopType.
If NextHopType is set to VPN, the value of this parameter is the VPN gateway ID, such as vpngw-12345678.
If NextHopType is set to DIRECTCONNECT, the value of this parameter is the direct connect gateway ID, such as dcg-12345678.
If NextHopType is set to PEERCONNECTION, the value of this parameter is the peering connection ID, such as pcx-12345678.
If NextHopType is set to NAT, the value of this parameter is the NAT gateway ID, such as nat-12345678.
If NextHopType is set to NORMAL_CVM, the value of this parameter is the IPv4 address of the CVM, such as 10.0.0.12.
                     * 
                     */
                    std::string GetNextHopDestination() const;

                    /**
                     * 设置The next-hop destination gateway. The value is related to NextHopType.
If NextHopType is set to VPN, the value of this parameter is the VPN gateway ID, such as vpngw-12345678.
If NextHopType is set to DIRECTCONNECT, the value of this parameter is the direct connect gateway ID, such as dcg-12345678.
If NextHopType is set to PEERCONNECTION, the value of this parameter is the peering connection ID, such as pcx-12345678.
If NextHopType is set to NAT, the value of this parameter is the NAT gateway ID, such as nat-12345678.
If NextHopType is set to NORMAL_CVM, the value of this parameter is the IPv4 address of the CVM, such as 10.0.0.12.
                     * @param _nextHopDestination The next-hop destination gateway. The value is related to NextHopType.
If NextHopType is set to VPN, the value of this parameter is the VPN gateway ID, such as vpngw-12345678.
If NextHopType is set to DIRECTCONNECT, the value of this parameter is the direct connect gateway ID, such as dcg-12345678.
If NextHopType is set to PEERCONNECTION, the value of this parameter is the peering connection ID, such as pcx-12345678.
If NextHopType is set to NAT, the value of this parameter is the NAT gateway ID, such as nat-12345678.
If NextHopType is set to NORMAL_CVM, the value of this parameter is the IPv4 address of the CVM, such as 10.0.0.12.
                     * 
                     */
                    void SetNextHopDestination(const std::string& _nextHopDestination);

                    /**
                     * 判断参数 NextHopDestination 是否已赋值
                     * @return NextHopDestination 是否已赋值
                     * 
                     */
                    bool NextHopDestinationHasBeenSet() const;

                private:

                    /**
                     * The array of detection destination IPv4 addresses, which contains at most two IP addresses.
                     */
                    std::vector<std::string> m_detectDestinationIp;
                    bool m_detectDestinationIpHasBeenSet;

                    /**
                     * ID of a network inspector instance, e.g. netd-12345678. Enter at least one of this parameter, VpcId, SubnetId, and NetDetectName. Use NetDetectId if it is present.
                     */
                    std::string m_netDetectId;
                    bool m_netDetectIdHasBeenSet;

                    /**
                     * ID of a `VPC` instance, e.g. `vpc-12345678`, which is used together with SubnetId and NetDetectName. You should enter either this parameter or NetDetectId, or both. Use NetDetectId if it is present.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * ID of a subnet instance, e.g. `subnet-12345678`, which is used together with VpcId and NetDetectName. You should enter either this parameter or NetDetectId, or both. Use NetDetectId if it is present.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * The name of a network inspector, up to 60 bytes in length. It is used together with VpcId and NetDetectName. You should enter either this parameter or NetDetectId, or both. Use NetDetectId if it is present.
                     */
                    std::string m_netDetectName;
                    bool m_netDetectNameHasBeenSet;

                    /**
                     * The type of the next hop. Currently supported types are:
VPN: VPN gateway;
DIRECTCONNECT: direct connect gateway;
PEERCONNECTION: peering connection;
NAT: NAT gateway;
NORMAL_CVM: normal CVM.
                     */
                    std::string m_nextHopType;
                    bool m_nextHopTypeHasBeenSet;

                    /**
                     * The next-hop destination gateway. The value is related to NextHopType.
If NextHopType is set to VPN, the value of this parameter is the VPN gateway ID, such as vpngw-12345678.
If NextHopType is set to DIRECTCONNECT, the value of this parameter is the direct connect gateway ID, such as dcg-12345678.
If NextHopType is set to PEERCONNECTION, the value of this parameter is the peering connection ID, such as pcx-12345678.
If NextHopType is set to NAT, the value of this parameter is the NAT gateway ID, such as nat-12345678.
If NextHopType is set to NORMAL_CVM, the value of this parameter is the IPv4 address of the CVM, such as 10.0.0.12.
                     */
                    std::string m_nextHopDestination;
                    bool m_nextHopDestinationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CHECKNETDETECTSTATEREQUEST_H_
