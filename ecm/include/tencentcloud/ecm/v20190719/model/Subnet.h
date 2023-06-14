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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_SUBNET_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_SUBNET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Tag.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
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
                     * 获取VPC instance ID.
                     * @return VpcId VPC instance ID.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC instance ID.
                     * @param _vpcId VPC instance ID.
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
                     * 获取Subnet instance ID, such as `subnet-bthucmmy`.
                     * @return SubnetId Subnet instance ID, such as `subnet-bthucmmy`.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet instance ID, such as `subnet-bthucmmy`.
                     * @param _subnetId Subnet instance ID, such as `subnet-bthucmmy`.
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
                     * 获取IPv4 CIDR block of the subnet.
                     * @return CidrBlock IPv4 CIDR block of the subnet.
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置IPv4 CIDR block of the subnet.
                     * @param _cidrBlock IPv4 CIDR block of the subnet.
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
                     * 获取Route table instance ID, such as `rtb-l2h8d7c2`.
                     * @return RouteTableId Route table instance ID, such as `rtb-l2h8d7c2`.
                     * 
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置Route table instance ID, such as `rtb-l2h8d7c2`.
                     * @param _routeTableId Route table instance ID, such as `rtb-l2h8d7c2`.
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
                     * 获取Creation time.
                     * @return CreatedTime Creation time.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createdTime Creation time.
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
                     * 获取Number of available IPs.
                     * @return AvailableIpAddressCount Number of available IPs.
                     * 
                     */
                    uint64_t GetAvailableIpAddressCount() const;

                    /**
                     * 设置Number of available IPs.
                     * @param _availableIpAddressCount Number of available IPs.
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
                     * 获取IPv6 CIDR block of the subnet.
                     * @return Ipv6CidrBlock IPv6 CIDR block of the subnet.
                     * 
                     */
                    std::string GetIpv6CidrBlock() const;

                    /**
                     * 设置IPv6 CIDR block of the subnet.
                     * @param _ipv6CidrBlock IPv6 CIDR block of the subnet.
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
                     * 获取Associated ACLID
                     * @return NetworkAclId Associated ACLID
                     * 
                     */
                    std::string GetNetworkAclId() const;

                    /**
                     * 设置Associated ACLID
                     * @param _networkAclId Associated ACLID
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
                     * 获取Whether it is an SNAT address pool subnet.
                     * @return IsRemoteVpcSnat Whether it is an SNAT address pool subnet.
                     * 
                     */
                    bool GetIsRemoteVpcSnat() const;

                    /**
                     * 设置Whether it is an SNAT address pool subnet.
                     * @param _isRemoteVpcSnat Whether it is an SNAT address pool subnet.
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
                     * 获取Tag key-value pairs.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TagSet Tag key-value pairs.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置Tag key-value pairs.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _tagSet Tag key-value pairs.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Region
                     * @return Zone Region
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Region
                     * @param _zone Region
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
                     * 获取AZ name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ZoneName AZ name
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置AZ name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _zoneName AZ name
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取Number of instances
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InstanceCount Number of instances
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置Number of instances
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _instanceCount Number of instances
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取IPv4 CIDR block of the VPC.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VpcCidrBlock IPv4 CIDR block of the VPC.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcCidrBlock() const;

                    /**
                     * 设置IPv4 CIDR block of the VPC.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _vpcCidrBlock IPv4 CIDR block of the VPC.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVpcCidrBlock(const std::string& _vpcCidrBlock);

                    /**
                     * 判断参数 VpcCidrBlock 是否已赋值
                     * @return VpcCidrBlock 是否已赋值
                     * 
                     */
                    bool VpcCidrBlockHasBeenSet() const;

                    /**
                     * 获取IPv6 CIDR block of the VPC.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VpcIpv6CidrBlock IPv6 CIDR block of the VPC.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcIpv6CidrBlock() const;

                    /**
                     * 设置IPv6 CIDR block of the VPC.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _vpcIpv6CidrBlock IPv6 CIDR block of the VPC.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVpcIpv6CidrBlock(const std::string& _vpcIpv6CidrBlock);

                    /**
                     * 判断参数 VpcIpv6CidrBlock 是否已赋值
                     * @return VpcIpv6CidrBlock 是否已赋值
                     * 
                     */
                    bool VpcIpv6CidrBlockHasBeenSet() const;

                    /**
                     * 获取Region
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Region Region
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _region Region
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * VPC instance ID.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet instance ID, such as `subnet-bthucmmy`.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Subnet name.
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * IPv4 CIDR block of the subnet.
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
                     * Route table instance ID, such as `rtb-l2h8d7c2`.
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Number of available IPs.
                     */
                    uint64_t m_availableIpAddressCount;
                    bool m_availableIpAddressCountHasBeenSet;

                    /**
                     * IPv6 CIDR block of the subnet.
                     */
                    std::string m_ipv6CidrBlock;
                    bool m_ipv6CidrBlockHasBeenSet;

                    /**
                     * Associated ACLID
                     */
                    std::string m_networkAclId;
                    bool m_networkAclIdHasBeenSet;

                    /**
                     * Whether it is an SNAT address pool subnet.
                     */
                    bool m_isRemoteVpcSnat;
                    bool m_isRemoteVpcSnatHasBeenSet;

                    /**
                     * Tag key-value pairs.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * AZ name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Number of instances
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * IPv4 CIDR block of the VPC.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcCidrBlock;
                    bool m_vpcCidrBlockHasBeenSet;

                    /**
                     * IPv6 CIDR block of the VPC.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcIpv6CidrBlock;
                    bool m_vpcIpv6CidrBlockHasBeenSet;

                    /**
                     * Region
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_SUBNET_H_
