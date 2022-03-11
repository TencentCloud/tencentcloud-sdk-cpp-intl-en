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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_VIRTUALPRIVATECLOUD_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_VIRTUALPRIVATECLOUD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * VPC information configuration.
                */
                class VirtualPrivateCloud : public AbstractModel
                {
                public:
                    VirtualPrivateCloud();
                    ~VirtualPrivateCloud() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VPC ID, such as `vpc-xxx`.
                     * @return VpcId VPC ID, such as `vpc-xxx`.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID, such as `vpc-xxx`.
                     * @param VpcId VPC ID, such as `vpc-xxx`.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet ID of the VPC, such as `subnet-xxx`.
                     * @return SubnetId Subnet ID of the VPC, such as `subnet-xxx`.
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID of the VPC, such as `subnet-xxx`.
                     * @param SubnetId Subnet ID of the VPC, such as `subnet-xxx`.
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Whether it is used as a public gateway. The public gateway can be used only when the instance has a public IP and resides in a VPC. Valid values:
TRUE: yes
FALSE: no

Default value: FALSE.
                     * @return AsVpcGateway Whether it is used as a public gateway. The public gateway can be used only when the instance has a public IP and resides in a VPC. Valid values:
TRUE: yes
FALSE: no

Default value: FALSE.
                     */
                    bool GetAsVpcGateway() const;

                    /**
                     * 设置Whether it is used as a public gateway. The public gateway can be used only when the instance has a public IP and resides in a VPC. Valid values:
TRUE: yes
FALSE: no

Default value: FALSE.
                     * @param AsVpcGateway Whether it is used as a public gateway. The public gateway can be used only when the instance has a public IP and resides in a VPC. Valid values:
TRUE: yes
FALSE: no

Default value: FALSE.
                     */
                    void SetAsVpcGateway(const bool& _asVpcGateway);

                    /**
                     * 判断参数 AsVpcGateway 是否已赋值
                     * @return AsVpcGateway 是否已赋值
                     */
                    bool AsVpcGatewayHasBeenSet() const;

                    /**
                     * 获取Array of VPC subnet IPs. This parameter can be used to create instances or modify the VPC attributes of instances.
                     * @return PrivateIpAddresses Array of VPC subnet IPs. This parameter can be used to create instances or modify the VPC attributes of instances.
                     */
                    std::vector<std::string> GetPrivateIpAddresses() const;

                    /**
                     * 设置Array of VPC subnet IPs. This parameter can be used to create instances or modify the VPC attributes of instances.
                     * @param PrivateIpAddresses Array of VPC subnet IPs. This parameter can be used to create instances or modify the VPC attributes of instances.
                     */
                    void SetPrivateIpAddresses(const std::vector<std::string>& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                    /**
                     * 获取Number of the IPv6 addresses to be randomly generated for the ENI.
                     * @return Ipv6AddressCount Number of the IPv6 addresses to be randomly generated for the ENI.
                     */
                    int64_t GetIpv6AddressCount() const;

                    /**
                     * 设置Number of the IPv6 addresses to be randomly generated for the ENI.
                     * @param Ipv6AddressCount Number of the IPv6 addresses to be randomly generated for the ENI.
                     */
                    void SetIpv6AddressCount(const int64_t& _ipv6AddressCount);

                    /**
                     * 判断参数 Ipv6AddressCount 是否已赋值
                     * @return Ipv6AddressCount 是否已赋值
                     */
                    bool Ipv6AddressCountHasBeenSet() const;

                private:

                    /**
                     * VPC ID, such as `vpc-xxx`.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID of the VPC, such as `subnet-xxx`.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Whether it is used as a public gateway. The public gateway can be used only when the instance has a public IP and resides in a VPC. Valid values:
TRUE: yes
FALSE: no

Default value: FALSE.
                     */
                    bool m_asVpcGateway;
                    bool m_asVpcGatewayHasBeenSet;

                    /**
                     * Array of VPC subnet IPs. This parameter can be used to create instances or modify the VPC attributes of instances.
                     */
                    std::vector<std::string> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * Number of the IPv6 addresses to be randomly generated for the ENI.
                     */
                    int64_t m_ipv6AddressCount;
                    bool m_ipv6AddressCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_VIRTUALPRIVATECLOUD_H_
