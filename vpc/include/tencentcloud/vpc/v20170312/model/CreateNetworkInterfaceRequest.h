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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATENETWORKINTERFACEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATENETWORKINTERFACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/PrivateIpAddressSpecification.h>
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
                * CreateNetworkInterface request structure.
                */
                class CreateNetworkInterfaceRequest : public AbstractModel
                {
                public:
                    CreateNetworkInterfaceRequest();
                    ~CreateNetworkInterfaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of the VPC instance. You can obtain the parameter value from the VpcId field in the returned result of DescribeVpcs API.
                     * @return VpcId The ID of the VPC instance. You can obtain the parameter value from the VpcId field in the returned result of DescribeVpcs API.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置The ID of the VPC instance. You can obtain the parameter value from the VpcId field in the returned result of DescribeVpcs API.
                     * @param _vpcId The ID of the VPC instance. You can obtain the parameter value from the VpcId field in the returned result of DescribeVpcs API.
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
                     * 获取The name of the ENI. The maximum length is 60 characters.
                     * @return NetworkInterfaceName The name of the ENI. The maximum length is 60 characters.
                     * 
                     */
                    std::string GetNetworkInterfaceName() const;

                    /**
                     * 设置The name of the ENI. The maximum length is 60 characters.
                     * @param _networkInterfaceName The name of the ENI. The maximum length is 60 characters.
                     * 
                     */
                    void SetNetworkInterfaceName(const std::string& _networkInterfaceName);

                    /**
                     * 判断参数 NetworkInterfaceName 是否已赋值
                     * @return NetworkInterfaceName 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceNameHasBeenSet() const;

                    /**
                     * 获取The subnet instance ID of the ENI, such as `subnet-0ap8nwca`.
                     * @return SubnetId The subnet instance ID of the ENI, such as `subnet-0ap8nwca`.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置The subnet instance ID of the ENI, such as `subnet-0ap8nwca`.
                     * @param _subnetId The subnet instance ID of the ENI, such as `subnet-0ap8nwca`.
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
                     * 获取ENI description can be named freely, but the maximum length is 60 characters.
                     * @return NetworkInterfaceDescription ENI description can be named freely, but the maximum length is 60 characters.
                     * 
                     */
                    std::string GetNetworkInterfaceDescription() const;

                    /**
                     * 设置ENI description can be named freely, but the maximum length is 60 characters.
                     * @param _networkInterfaceDescription ENI description can be named freely, but the maximum length is 60 characters.
                     * 
                     */
                    void SetNetworkInterfaceDescription(const std::string& _networkInterfaceDescription);

                    /**
                     * 判断参数 NetworkInterfaceDescription 是否已赋值
                     * @return NetworkInterfaceDescription 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceDescriptionHasBeenSet() const;

                    /**
                     * 获取The number of private IP addresses you apply for. The total number of private IP addresses cannot exceed the quota.
                     * @return SecondaryPrivateIpAddressCount The number of private IP addresses you apply for. The total number of private IP addresses cannot exceed the quota.
                     * 
                     */
                    uint64_t GetSecondaryPrivateIpAddressCount() const;

                    /**
                     * 设置The number of private IP addresses you apply for. The total number of private IP addresses cannot exceed the quota.
                     * @param _secondaryPrivateIpAddressCount The number of private IP addresses you apply for. The total number of private IP addresses cannot exceed the quota.
                     * 
                     */
                    void SetSecondaryPrivateIpAddressCount(const uint64_t& _secondaryPrivateIpAddressCount);

                    /**
                     * 判断参数 SecondaryPrivateIpAddressCount 是否已赋值
                     * @return SecondaryPrivateIpAddressCount 是否已赋值
                     * 
                     */
                    bool SecondaryPrivateIpAddressCountHasBeenSet() const;

                    /**
                     * 获取IP service level. It is used together with `SecondaryPrivateIpAddressCount`. Values: `PT` (Gold), `AU` (Silver), `AG` (Bronze) and `DEFAULT` (Default).
                     * @return QosLevel IP service level. It is used together with `SecondaryPrivateIpAddressCount`. Values: `PT` (Gold), `AU` (Silver), `AG` (Bronze) and `DEFAULT` (Default).
                     * 
                     */
                    std::string GetQosLevel() const;

                    /**
                     * 设置IP service level. It is used together with `SecondaryPrivateIpAddressCount`. Values: `PT` (Gold), `AU` (Silver), `AG` (Bronze) and `DEFAULT` (Default).
                     * @param _qosLevel IP service level. It is used together with `SecondaryPrivateIpAddressCount`. Values: `PT` (Gold), `AU` (Silver), `AG` (Bronze) and `DEFAULT` (Default).
                     * 
                     */
                    void SetQosLevel(const std::string& _qosLevel);

                    /**
                     * 判断参数 QosLevel 是否已赋值
                     * @return QosLevel 是否已赋值
                     * 
                     */
                    bool QosLevelHasBeenSet() const;

                    /**
                     * 获取Specifies the security group to be bound with, such as ['sg-1dd51d'].
                     * @return SecurityGroupIds Specifies the security group to be bound with, such as ['sg-1dd51d'].
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Specifies the security group to be bound with, such as ['sg-1dd51d'].
                     * @param _securityGroupIds Specifies the security group to be bound with, such as ['sg-1dd51d'].
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取The information of the specified private IPs. You can specify a maximum of 10 each time.
                     * @return PrivateIpAddresses The information of the specified private IPs. You can specify a maximum of 10 each time.
                     * 
                     */
                    std::vector<PrivateIpAddressSpecification> GetPrivateIpAddresses() const;

                    /**
                     * 设置The information of the specified private IPs. You can specify a maximum of 10 each time.
                     * @param _privateIpAddresses The information of the specified private IPs. You can specify a maximum of 10 each time.
                     * 
                     */
                    void SetPrivateIpAddresses(const std::vector<PrivateIpAddressSpecification>& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                    /**
                     * 获取Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * @return Tags Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * @param _tags Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Configuration of the ENI trunking mode. Valid values: `Enable` and `Disable`. Default value: `Disable`.
                     * @return TrunkingFlag Configuration of the ENI trunking mode. Valid values: `Enable` and `Disable`. Default value: `Disable`.
                     * 
                     */
                    std::string GetTrunkingFlag() const;

                    /**
                     * 设置Configuration of the ENI trunking mode. Valid values: `Enable` and `Disable`. Default value: `Disable`.
                     * @param _trunkingFlag Configuration of the ENI trunking mode. Valid values: `Enable` and `Disable`. Default value: `Disable`.
                     * 
                     */
                    void SetTrunkingFlag(const std::string& _trunkingFlag);

                    /**
                     * 判断参数 TrunkingFlag 是否已赋值
                     * @return TrunkingFlag 是否已赋值
                     * 
                     */
                    bool TrunkingFlagHasBeenSet() const;

                    /**
                     * 获取
                     * @return ClientToken 
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置
                     * @param _clientToken 
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                private:

                    /**
                     * The ID of the VPC instance. You can obtain the parameter value from the VpcId field in the returned result of DescribeVpcs API.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * The name of the ENI. The maximum length is 60 characters.
                     */
                    std::string m_networkInterfaceName;
                    bool m_networkInterfaceNameHasBeenSet;

                    /**
                     * The subnet instance ID of the ENI, such as `subnet-0ap8nwca`.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * ENI description can be named freely, but the maximum length is 60 characters.
                     */
                    std::string m_networkInterfaceDescription;
                    bool m_networkInterfaceDescriptionHasBeenSet;

                    /**
                     * The number of private IP addresses you apply for. The total number of private IP addresses cannot exceed the quota.
                     */
                    uint64_t m_secondaryPrivateIpAddressCount;
                    bool m_secondaryPrivateIpAddressCountHasBeenSet;

                    /**
                     * IP service level. It is used together with `SecondaryPrivateIpAddressCount`. Values: `PT` (Gold), `AU` (Silver), `AG` (Bronze) and `DEFAULT` (Default).
                     */
                    std::string m_qosLevel;
                    bool m_qosLevelHasBeenSet;

                    /**
                     * Specifies the security group to be bound with, such as ['sg-1dd51d'].
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * The information of the specified private IPs. You can specify a maximum of 10 each time.
                     */
                    std::vector<PrivateIpAddressSpecification> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Configuration of the ENI trunking mode. Valid values: `Enable` and `Disable`. Default value: `Disable`.
                     */
                    std::string m_trunkingFlag;
                    bool m_trunkingFlagHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATENETWORKINTERFACEREQUEST_H_
