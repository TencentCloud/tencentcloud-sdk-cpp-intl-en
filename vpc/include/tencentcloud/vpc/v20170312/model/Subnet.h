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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SUBNET_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SUBNET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Subnet object
                */
                class Subnet : public AbstractModel
                {
                public:
                    Subnet();
                    ~Subnet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The `ID` of the `VPC` instance.
                     * @return VpcId The `ID` of the `VPC` instance.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置The `ID` of the `VPC` instance.
                     * @param _vpcId The `ID` of the `VPC` instance.
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
                     * 获取Subnet instance `ID`, such as `subnet-bthucmmy`.
                     * @return SubnetId Subnet instance `ID`, such as `subnet-bthucmmy`.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet instance `ID`, such as `subnet-bthucmmy`.
                     * @param _subnetId Subnet instance `ID`, such as `subnet-bthucmmy`.
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
                     * 获取Subnet name.
                     * @return SubnetName Subnet name.
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置Subnet name.
                     * @param _subnetName Subnet name.
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
                     * 获取The `IPv4` `CIDR` of the subnet.
                     * @return CidrBlock The `IPv4` `CIDR` of the subnet.
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置The `IPv4` `CIDR` of the subnet.
                     * @param _cidrBlock The `IPv4` `CIDR` of the subnet.
                     * 
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取Whether it is the default subnet.
                     * @return IsDefault Whether it is the default subnet.
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置Whether it is the default subnet.
                     * @param _isDefault Whether it is the default subnet.
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取Whether to enable broadcast.
                     * @return EnableBroadcast Whether to enable broadcast.
                     * 
                     */
                    bool GetEnableBroadcast() const;

                    /**
                     * 设置Whether to enable broadcast.
                     * @param _enableBroadcast Whether to enable broadcast.
                     * 
                     */
                    void SetEnableBroadcast(const bool& _enableBroadcast);

                    /**
                     * 判断参数 EnableBroadcast 是否已赋值
                     * @return EnableBroadcast 是否已赋值
                     * 
                     */
                    bool EnableBroadcastHasBeenSet() const;

                    /**
                     * 获取Availability Zone.
                     * @return Zone Availability Zone.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability Zone.
                     * @param _zone Availability Zone.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取The route table instance ID, such as `rtb-l2h8d7c2`.
                     * @return RouteTableId The route table instance ID, such as `rtb-l2h8d7c2`.
                     * 
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置The route table instance ID, such as `rtb-l2h8d7c2`.
                     * @param _routeTableId The route table instance ID, such as `rtb-l2h8d7c2`.
                     * 
                     */
                    void SetRouteTableId(const std::string& _routeTableId);

                    /**
                     * 判断参数 RouteTableId 是否已赋值
                     * @return RouteTableId 是否已赋值
                     * 
                     */
                    bool RouteTableIdHasBeenSet() const;

                    /**
                     * 获取Creation Time.
                     * @return CreatedTime Creation Time.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation Time.
                     * @param _createdTime Creation Time.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取The number of available IPv4 addresses
                     * @return AvailableIpAddressCount The number of available IPv4 addresses
                     * 
                     */
                    uint64_t GetAvailableIpAddressCount() const;

                    /**
                     * 设置The number of available IPv4 addresses
                     * @param _availableIpAddressCount The number of available IPv4 addresses
                     * 
                     */
                    void SetAvailableIpAddressCount(const uint64_t& _availableIpAddressCount);

                    /**
                     * 判断参数 AvailableIpAddressCount 是否已赋值
                     * @return AvailableIpAddressCount 是否已赋值
                     * 
                     */
                    bool AvailableIpAddressCountHasBeenSet() const;

                    /**
                     * 获取The `IPv6` `CIDR` of the subnet.
                     * @return Ipv6CidrBlock The `IPv6` `CIDR` of the subnet.
                     * 
                     */
                    std::string GetIpv6CidrBlock() const;

                    /**
                     * 设置The `IPv6` `CIDR` of the subnet.
                     * @param _ipv6CidrBlock The `IPv6` `CIDR` of the subnet.
                     * 
                     */
                    void SetIpv6CidrBlock(const std::string& _ipv6CidrBlock);

                    /**
                     * 判断参数 Ipv6CidrBlock 是否已赋值
                     * @return Ipv6CidrBlock 是否已赋值
                     * 
                     */
                    bool Ipv6CidrBlockHasBeenSet() const;

                    /**
                     * 获取The associated `ACL`ID
                     * @return NetworkAclId The associated `ACL`ID
                     * 
                     */
                    std::string GetNetworkAclId() const;

                    /**
                     * 设置The associated `ACL`ID
                     * @param _networkAclId The associated `ACL`ID
                     * 
                     */
                    void SetNetworkAclId(const std::string& _networkAclId);

                    /**
                     * 判断参数 NetworkAclId 是否已赋值
                     * @return NetworkAclId 是否已赋值
                     * 
                     */
                    bool NetworkAclIdHasBeenSet() const;

                    /**
                     * 获取Whether it is a `SNAT` address pool subnet.
                     * @return IsRemoteVpcSnat Whether it is a `SNAT` address pool subnet.
                     * 
                     */
                    bool GetIsRemoteVpcSnat() const;

                    /**
                     * 设置Whether it is a `SNAT` address pool subnet.
                     * @param _isRemoteVpcSnat Whether it is a `SNAT` address pool subnet.
                     * 
                     */
                    void SetIsRemoteVpcSnat(const bool& _isRemoteVpcSnat);

                    /**
                     * 判断参数 IsRemoteVpcSnat 是否已赋值
                     * @return IsRemoteVpcSnat 是否已赋值
                     * 
                     */
                    bool IsRemoteVpcSnatHasBeenSet() const;

                    /**
                     * 获取The total number of IPv4 addresses in the subnet.
                     * @return TotalIpAddressCount The total number of IPv4 addresses in the subnet.
                     * 
                     */
                    uint64_t GetTotalIpAddressCount() const;

                    /**
                     * 设置The total number of IPv4 addresses in the subnet.
                     * @param _totalIpAddressCount The total number of IPv4 addresses in the subnet.
                     * 
                     */
                    void SetTotalIpAddressCount(const uint64_t& _totalIpAddressCount);

                    /**
                     * 判断参数 TotalIpAddressCount 是否已赋值
                     * @return TotalIpAddressCount 是否已赋值
                     * 
                     */
                    bool TotalIpAddressCountHasBeenSet() const;

                    /**
                     * 获取Tag key-value pairs
                     * @return TagSet Tag key-value pairs
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置Tag key-value pairs
                     * @param _tagSet Tag key-value pairs
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取CDC instance ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return CdcId CDC instance ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置CDC instance ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _cdcId CDC instance ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                    /**
                     * 获取Whether it is a CDC subnet. Valid values: 0: no; 1: yes
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return IsCdcSubnet Whether it is a CDC subnet. Valid values: 0: no; 1: yes
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIsCdcSubnet() const;

                    /**
                     * 设置Whether it is a CDC subnet. Valid values: 0: no; 1: yes
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _isCdcSubnet Whether it is a CDC subnet. Valid values: 0: no; 1: yes
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsCdcSubnet(const int64_t& _isCdcSubnet);

                    /**
                     * 判断参数 IsCdcSubnet 是否已赋值
                     * @return IsCdcSubnet 是否已赋值
                     * 
                     */
                    bool IsCdcSubnetHasBeenSet() const;

                private:

                    /**
                     * The `ID` of the `VPC` instance.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet instance `ID`, such as `subnet-bthucmmy`.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Subnet name.
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * The `IPv4` `CIDR` of the subnet.
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * Whether it is the default subnet.
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * Whether to enable broadcast.
                     */
                    bool m_enableBroadcast;
                    bool m_enableBroadcastHasBeenSet;

                    /**
                     * Availability Zone.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * The route table instance ID, such as `rtb-l2h8d7c2`.
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * Creation Time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * The number of available IPv4 addresses
                     */
                    uint64_t m_availableIpAddressCount;
                    bool m_availableIpAddressCountHasBeenSet;

                    /**
                     * The `IPv6` `CIDR` of the subnet.
                     */
                    std::string m_ipv6CidrBlock;
                    bool m_ipv6CidrBlockHasBeenSet;

                    /**
                     * The associated `ACL`ID
                     */
                    std::string m_networkAclId;
                    bool m_networkAclIdHasBeenSet;

                    /**
                     * Whether it is a `SNAT` address pool subnet.
                     */
                    bool m_isRemoteVpcSnat;
                    bool m_isRemoteVpcSnatHasBeenSet;

                    /**
                     * The total number of IPv4 addresses in the subnet.
                     */
                    uint64_t m_totalIpAddressCount;
                    bool m_totalIpAddressCountHasBeenSet;

                    /**
                     * Tag key-value pairs
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * CDC instance ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * Whether it is a CDC subnet. Valid values: 0: no; 1: yes
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_isCdcSubnet;
                    bool m_isCdcSubnetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SUBNET_H_
