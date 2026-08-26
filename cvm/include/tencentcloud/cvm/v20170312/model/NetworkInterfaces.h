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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_NETWORKINTERFACES_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_NETWORKINTERFACES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Network interface configuration for instance creation, including VPCs, subnets, and IP address allocation for primary and secondary network interfaces. This feature is in beta test in selected regions. To use this feature, [submit a ticket](https://console.tencentcloud.com/workorder/category).
                */
                class NetworkInterfaces : public AbstractModel
                {
                public:
                    NetworkInterfaces();
                    ~NetworkInterfaces() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies whether the network interface is primary or secondary. Valid values must be uppercase. The `NetworkInterfaces` array must contain exactly one `PRIMARY` network interface and can contain multiple `SECONDARY` network interfaces. Valid values:<li>`PRIMARY`: Primary network interface.</li><li>`SECONDARY`: Secondary network interface.</li>
                     * @return InterfaceType Specifies whether the network interface is primary or secondary. Valid values must be uppercase. The `NetworkInterfaces` array must contain exactly one `PRIMARY` network interface and can contain multiple `SECONDARY` network interfaces. Valid values:<li>`PRIMARY`: Primary network interface.</li><li>`SECONDARY`: Secondary network interface.</li>
                     * 
                     */
                    std::string GetInterfaceType() const;

                    /**
                     * 设置Specifies whether the network interface is primary or secondary. Valid values must be uppercase. The `NetworkInterfaces` array must contain exactly one `PRIMARY` network interface and can contain multiple `SECONDARY` network interfaces. Valid values:<li>`PRIMARY`: Primary network interface.</li><li>`SECONDARY`: Secondary network interface.</li>
                     * @param _interfaceType Specifies whether the network interface is primary or secondary. Valid values must be uppercase. The `NetworkInterfaces` array must contain exactly one `PRIMARY` network interface and can contain multiple `SECONDARY` network interfaces. Valid values:<li>`PRIMARY`: Primary network interface.</li><li>`SECONDARY`: Secondary network interface.</li>
                     * 
                     */
                    void SetInterfaceType(const std::string& _interfaceType);

                    /**
                     * 判断参数 InterfaceType 是否已赋值
                     * @return InterfaceType 是否已赋值
                     * 
                     */
                    bool InterfaceTypeHasBeenSet() const;

                    /**
                     * 获取VPC ID in the format of `vpc-xxx`. You can obtain a valid VPC ID from the [VPC console](https://console.tencentcloud.com/vpc/vpc?rid=1) or from the `VpcId` field returned by the [DescribeVpcs](https://www.tencentcloud.com/document/product/215/15778) API. If both `VpcId` and `SubnetId` are set to `DEFAULT` when creating an instance, the default VPC is used.
                     * @return VpcId VPC ID in the format of `vpc-xxx`. You can obtain a valid VPC ID from the [VPC console](https://console.tencentcloud.com/vpc/vpc?rid=1) or from the `VpcId` field returned by the [DescribeVpcs](https://www.tencentcloud.com/document/product/215/15778) API. If both `VpcId` and `SubnetId` are set to `DEFAULT` when creating an instance, the default VPC is used.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID in the format of `vpc-xxx`. You can obtain a valid VPC ID from the [VPC console](https://console.tencentcloud.com/vpc/vpc?rid=1) or from the `VpcId` field returned by the [DescribeVpcs](https://www.tencentcloud.com/document/product/215/15778) API. If both `VpcId` and `SubnetId` are set to `DEFAULT` when creating an instance, the default VPC is used.
                     * @param _vpcId VPC ID in the format of `vpc-xxx`. You can obtain a valid VPC ID from the [VPC console](https://console.tencentcloud.com/vpc/vpc?rid=1) or from the `VpcId` field returned by the [DescribeVpcs](https://www.tencentcloud.com/document/product/215/15778) API. If both `VpcId` and `SubnetId` are set to `DEFAULT` when creating an instance, the default VPC is used.
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
                     * 获取VPC subnet ID in the format of `subnet-xxx`. You can obtain a valid subnet ID from the [subnet console](https://console.tencentcloud.com/vpc/subnet) or from the `SubnetId` field returned by the [DescribeSubnets](https://www.tencentcloud.com/document/product/215/15784) API. If both `SubnetId` and `VpcId` are set to `DEFAULT` when creating an instance, the default VPC is used.
                     * @return SubnetId VPC subnet ID in the format of `subnet-xxx`. You can obtain a valid subnet ID from the [subnet console](https://console.tencentcloud.com/vpc/subnet) or from the `SubnetId` field returned by the [DescribeSubnets](https://www.tencentcloud.com/document/product/215/15784) API. If both `SubnetId` and `VpcId` are set to `DEFAULT` when creating an instance, the default VPC is used.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置VPC subnet ID in the format of `subnet-xxx`. You can obtain a valid subnet ID from the [subnet console](https://console.tencentcloud.com/vpc/subnet) or from the `SubnetId` field returned by the [DescribeSubnets](https://www.tencentcloud.com/document/product/215/15784) API. If both `SubnetId` and `VpcId` are set to `DEFAULT` when creating an instance, the default VPC is used.
                     * @param _subnetId VPC subnet ID in the format of `subnet-xxx`. You can obtain a valid subnet ID from the [subnet console](https://console.tencentcloud.com/vpc/subnet) or from the `SubnetId` field returned by the [DescribeSubnets](https://www.tencentcloud.com/document/product/215/15784) API. If both `SubnetId` and `VpcId` are set to `DEFAULT` when creating an instance, the default VPC is used.
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
                     * 获取Required. Specifies the number of private IPv4 addresses automatically assigned to each network interface. Manually specifying IP addresses and automatically assigning IP addresses at the same time is not supported. Valid range: [1, 50].
                     * @return PrivateIpv4AddressCount Required. Specifies the number of private IPv4 addresses automatically assigned to each network interface. Manually specifying IP addresses and automatically assigning IP addresses at the same time is not supported. Valid range: [1, 50].
                     * 
                     */
                    int64_t GetPrivateIpv4AddressCount() const;

                    /**
                     * 设置Required. Specifies the number of private IPv4 addresses automatically assigned to each network interface. Manually specifying IP addresses and automatically assigning IP addresses at the same time is not supported. Valid range: [1, 50].
                     * @param _privateIpv4AddressCount Required. Specifies the number of private IPv4 addresses automatically assigned to each network interface. Manually specifying IP addresses and automatically assigning IP addresses at the same time is not supported. Valid range: [1, 50].
                     * 
                     */
                    void SetPrivateIpv4AddressCount(const int64_t& _privateIpv4AddressCount);

                    /**
                     * 判断参数 PrivateIpv4AddressCount 是否已赋值
                     * @return PrivateIpv4AddressCount 是否已赋值
                     * 
                     */
                    bool PrivateIpv4AddressCountHasBeenSet() const;

                    /**
                     * 获取ID of an existing elastic network interface (ENI) to be attached. This parameter applies only to secondary network interfaces. The primary network interface is created automatically through the existing process and cannot be specified using this parameter. When an existing ENI is specified, `InstanceCount` must be set to 1.
                     * @return NetworkInterfaceId ID of an existing elastic network interface (ENI) to be attached. This parameter applies only to secondary network interfaces. The primary network interface is created automatically through the existing process and cannot be specified using this parameter. When an existing ENI is specified, `InstanceCount` must be set to 1.
                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置ID of an existing elastic network interface (ENI) to be attached. This parameter applies only to secondary network interfaces. The primary network interface is created automatically through the existing process and cannot be specified using this parameter. When an existing ENI is specified, `InstanceCount` must be set to 1.
                     * @param _networkInterfaceId ID of an existing elastic network interface (ENI) to be attached. This parameter applies only to secondary network interfaces. The primary network interface is created automatically through the existing process and cannot be specified using this parameter. When an existing ENI is specified, `InstanceCount` must be set to 1.
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
                     * 获取Security groups associated with the instance. You can obtain the security group IDs from the `SecurityGroupId` field returned by the [DescribeSecurityGroups](https://www.tencentcloud.com/document/api/215/15808) API. If this parameter is not specified, the default security group of the specified project is associated. If no default security group exists, one is automatically created. Each user can configure up to 50 security groups per project in each region.
                     * @return SecurityGroupIds Security groups associated with the instance. You can obtain the security group IDs from the `SecurityGroupId` field returned by the [DescribeSecurityGroups](https://www.tencentcloud.com/document/api/215/15808) API. If this parameter is not specified, the default security group of the specified project is associated. If no default security group exists, one is automatically created. Each user can configure up to 50 security groups per project in each region.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security groups associated with the instance. You can obtain the security group IDs from the `SecurityGroupId` field returned by the [DescribeSecurityGroups](https://www.tencentcloud.com/document/api/215/15808) API. If this parameter is not specified, the default security group of the specified project is associated. If no default security group exists, one is automatically created. Each user can configure up to 50 security groups per project in each region.
                     * @param _securityGroupIds Security groups associated with the instance. You can obtain the security group IDs from the `SecurityGroupId` field returned by the [DescribeSecurityGroups](https://www.tencentcloud.com/document/api/215/15808) API. If this parameter is not specified, the default security group of the specified project is associated. If no default security group exists, one is automatically created. Each user can configure up to 50 security groups per project in each region.
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
                     * 获取Specifies whether the associated elastic network interface (ENI) is deleted when the CVM instance is terminated. This parameter applies only to secondary network interfaces. By default, secondary network interfaces are retained to preserve the existing behavior. This parameter does not apply to the primary network interface, which is always deleted when the instance is terminated. Default value: `false`.
                     * @return DeleteWithInstance Specifies whether the associated elastic network interface (ENI) is deleted when the CVM instance is terminated. This parameter applies only to secondary network interfaces. By default, secondary network interfaces are retained to preserve the existing behavior. This parameter does not apply to the primary network interface, which is always deleted when the instance is terminated. Default value: `false`.
                     * 
                     */
                    bool GetDeleteWithInstance() const;

                    /**
                     * 设置Specifies whether the associated elastic network interface (ENI) is deleted when the CVM instance is terminated. This parameter applies only to secondary network interfaces. By default, secondary network interfaces are retained to preserve the existing behavior. This parameter does not apply to the primary network interface, which is always deleted when the instance is terminated. Default value: `false`.
                     * @param _deleteWithInstance Specifies whether the associated elastic network interface (ENI) is deleted when the CVM instance is terminated. This parameter applies only to secondary network interfaces. By default, secondary network interfaces are retained to preserve the existing behavior. This parameter does not apply to the primary network interface, which is always deleted when the instance is terminated. Default value: `false`.
                     * 
                     */
                    void SetDeleteWithInstance(const bool& _deleteWithInstance);

                    /**
                     * 判断参数 DeleteWithInstance 是否已赋值
                     * @return DeleteWithInstance 是否已赋值
                     * 
                     */
                    bool DeleteWithInstanceHasBeenSet() const;

                private:

                    /**
                     * Specifies whether the network interface is primary or secondary. Valid values must be uppercase. The `NetworkInterfaces` array must contain exactly one `PRIMARY` network interface and can contain multiple `SECONDARY` network interfaces. Valid values:<li>`PRIMARY`: Primary network interface.</li><li>`SECONDARY`: Secondary network interface.</li>
                     */
                    std::string m_interfaceType;
                    bool m_interfaceTypeHasBeenSet;

                    /**
                     * VPC ID in the format of `vpc-xxx`. You can obtain a valid VPC ID from the [VPC console](https://console.tencentcloud.com/vpc/vpc?rid=1) or from the `VpcId` field returned by the [DescribeVpcs](https://www.tencentcloud.com/document/product/215/15778) API. If both `VpcId` and `SubnetId` are set to `DEFAULT` when creating an instance, the default VPC is used.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC subnet ID in the format of `subnet-xxx`. You can obtain a valid subnet ID from the [subnet console](https://console.tencentcloud.com/vpc/subnet) or from the `SubnetId` field returned by the [DescribeSubnets](https://www.tencentcloud.com/document/product/215/15784) API. If both `SubnetId` and `VpcId` are set to `DEFAULT` when creating an instance, the default VPC is used.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Required. Specifies the number of private IPv4 addresses automatically assigned to each network interface. Manually specifying IP addresses and automatically assigning IP addresses at the same time is not supported. Valid range: [1, 50].
                     */
                    int64_t m_privateIpv4AddressCount;
                    bool m_privateIpv4AddressCountHasBeenSet;

                    /**
                     * ID of an existing elastic network interface (ENI) to be attached. This parameter applies only to secondary network interfaces. The primary network interface is created automatically through the existing process and cannot be specified using this parameter. When an existing ENI is specified, `InstanceCount` must be set to 1.
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * Security groups associated with the instance. You can obtain the security group IDs from the `SecurityGroupId` field returned by the [DescribeSecurityGroups](https://www.tencentcloud.com/document/api/215/15808) API. If this parameter is not specified, the default security group of the specified project is associated. If no default security group exists, one is automatically created. Each user can configure up to 50 security groups per project in each region.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Specifies whether the associated elastic network interface (ENI) is deleted when the CVM instance is terminated. This parameter applies only to secondary network interfaces. By default, secondary network interfaces are retained to preserve the existing behavior. This parameter does not apply to the primary network interface, which is always deleted when the instance is terminated. Default value: `false`.
                     */
                    bool m_deleteWithInstance;
                    bool m_deleteWithInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_NETWORKINTERFACES_H_
