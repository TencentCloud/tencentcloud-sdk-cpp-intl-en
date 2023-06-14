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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_CREATENETWORKINTERFACEREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_CREATENETWORKINTERFACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/PrivateIpAddressSpecification.h>
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
                * CreateNetworkInterface request structure.
                */
                class CreateNetworkInterfaceRequest : public AbstractModel
                {
                public:
                    CreateNetworkInterfaceRequest();
                    ~CreateNetworkInterfaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC instance ID, which can be obtained from the `VpcId` field in the returned value of the `DescribeVpcs` API.
                     * @return VpcId VPC instance ID, which can be obtained from the `VpcId` field in the returned value of the `DescribeVpcs` API.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC instance ID, which can be obtained from the `VpcId` field in the returned value of the `DescribeVpcs` API.
                     * @param _vpcId VPC instance ID, which can be obtained from the `VpcId` field in the returned value of the `DescribeVpcs` API.
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
                     * 获取ENI name, which can contain up to 60 bytes.
                     * @return NetworkInterfaceName ENI name, which can contain up to 60 bytes.
                     * 
                     */
                    std::string GetNetworkInterfaceName() const;

                    /**
                     * 设置ENI name, which can contain up to 60 bytes.
                     * @param _networkInterfaceName ENI name, which can contain up to 60 bytes.
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
                     * 获取Subnet instance ID of the ENI, such as 'subnet-0ap8nwca'.
                     * @return SubnetId Subnet instance ID of the ENI, such as 'subnet-0ap8nwca'.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet instance ID of the ENI, such as 'subnet-0ap8nwca'.
                     * @param _subnetId Subnet instance ID of the ENI, such as 'subnet-0ap8nwca'.
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
                     * 获取ECM region, such as `ap-xian-ecm`.
                     * @return EcmRegion ECM region, such as `ap-xian-ecm`.
                     * 
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置ECM region, such as `ap-xian-ecm`.
                     * @param _ecmRegion ECM region, such as `ap-xian-ecm`.
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
                     * 获取ENI description. You can enter any information within 60 characters.
                     * @return NetworkInterfaceDescription ENI description. You can enter any information within 60 characters.
                     * 
                     */
                    std::string GetNetworkInterfaceDescription() const;

                    /**
                     * 设置ENI description. You can enter any information within 60 characters.
                     * @param _networkInterfaceDescription ENI description. You can enter any information within 60 characters.
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
                     * 获取Number of private IP addresses applied for. The total number of private IP addresses cannot exceed the quota.
                     * @return SecondaryPrivateIpAddressCount Number of private IP addresses applied for. The total number of private IP addresses cannot exceed the quota.
                     * 
                     */
                    uint64_t GetSecondaryPrivateIpAddressCount() const;

                    /**
                     * 设置Number of private IP addresses applied for. The total number of private IP addresses cannot exceed the quota.
                     * @param _secondaryPrivateIpAddressCount Number of private IP addresses applied for. The total number of private IP addresses cannot exceed the quota.
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
                     * 获取The security group to be bound with, such as ['sg-1dd51d'].
                     * @return SecurityGroupIds The security group to be bound with, such as ['sg-1dd51d'].
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置The security group to be bound with, such as ['sg-1dd51d'].
                     * @param _securityGroupIds The security group to be bound with, such as ['sg-1dd51d'].
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
                     * 获取Information of the specified private IPs. You can specify up to 10 IPs at a time.
                     * @return PrivateIpAddresses Information of the specified private IPs. You can specify up to 10 IPs at a time.
                     * 
                     */
                    std::vector<PrivateIpAddressSpecification> GetPrivateIpAddresses() const;

                    /**
                     * 设置Information of the specified private IPs. You can specify up to 10 IPs at a time.
                     * @param _privateIpAddresses Information of the specified private IPs. You can specify up to 10 IPs at a time.
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
                     * 获取List of bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * @return Tags List of bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置List of bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * @param _tags List of bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * VPC instance ID, which can be obtained from the `VpcId` field in the returned value of the `DescribeVpcs` API.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * ENI name, which can contain up to 60 bytes.
                     */
                    std::string m_networkInterfaceName;
                    bool m_networkInterfaceNameHasBeenSet;

                    /**
                     * Subnet instance ID of the ENI, such as 'subnet-0ap8nwca'.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * ECM region, such as `ap-xian-ecm`.
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                    /**
                     * ENI description. You can enter any information within 60 characters.
                     */
                    std::string m_networkInterfaceDescription;
                    bool m_networkInterfaceDescriptionHasBeenSet;

                    /**
                     * Number of private IP addresses applied for. The total number of private IP addresses cannot exceed the quota.
                     */
                    uint64_t m_secondaryPrivateIpAddressCount;
                    bool m_secondaryPrivateIpAddressCountHasBeenSet;

                    /**
                     * The security group to be bound with, such as ['sg-1dd51d'].
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Information of the specified private IPs. You can specify up to 10 IPs at a time.
                     */
                    std::vector<PrivateIpAddressSpecification> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * List of bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_CREATENETWORKINTERFACEREQUEST_H_
