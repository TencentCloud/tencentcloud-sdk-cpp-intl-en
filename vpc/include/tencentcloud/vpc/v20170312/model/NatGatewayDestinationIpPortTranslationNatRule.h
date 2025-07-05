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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_NATGATEWAYDESTINATIONIPPORTTRANSLATIONNATRULE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_NATGATEWAYDESTINATIONIPPORTTRANSLATIONNATRULE_H_

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
                * The port forwarding rules of the NAT gateway
                */
                class NatGatewayDestinationIpPortTranslationNatRule : public AbstractModel
                {
                public:
                    NatGatewayDestinationIpPortTranslationNatRule();
                    ~NatGatewayDestinationIpPortTranslationNatRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Network protocol. Available choices: `TCP`, `UDP`.
                     * @return IpProtocol Network protocol. Available choices: `TCP`, `UDP`.
                     * 
                     */
                    std::string GetIpProtocol() const;

                    /**
                     * 设置Network protocol. Available choices: `TCP`, `UDP`.
                     * @param _ipProtocol Network protocol. Available choices: `TCP`, `UDP`.
                     * 
                     */
                    void SetIpProtocol(const std::string& _ipProtocol);

                    /**
                     * 判断参数 IpProtocol 是否已赋值
                     * @return IpProtocol 是否已赋值
                     * 
                     */
                    bool IpProtocolHasBeenSet() const;

                    /**
                     * 获取EIP.
                     * @return PublicIpAddress EIP.
                     * 
                     */
                    std::string GetPublicIpAddress() const;

                    /**
                     * 设置EIP.
                     * @param _publicIpAddress EIP.
                     * 
                     */
                    void SetPublicIpAddress(const std::string& _publicIpAddress);

                    /**
                     * 判断参数 PublicIpAddress 是否已赋值
                     * @return PublicIpAddress 是否已赋值
                     * 
                     */
                    bool PublicIpAddressHasBeenSet() const;

                    /**
                     * 获取Public port.
                     * @return PublicPort Public port.
                     * 
                     */
                    uint64_t GetPublicPort() const;

                    /**
                     * 设置Public port.
                     * @param _publicPort Public port.
                     * 
                     */
                    void SetPublicPort(const uint64_t& _publicPort);

                    /**
                     * 判断参数 PublicPort 是否已赋值
                     * @return PublicPort 是否已赋值
                     * 
                     */
                    bool PublicPortHasBeenSet() const;

                    /**
                     * 获取Private IP.
                     * @return PrivateIpAddress Private IP.
                     * 
                     */
                    std::string GetPrivateIpAddress() const;

                    /**
                     * 设置Private IP.
                     * @param _privateIpAddress Private IP.
                     * 
                     */
                    void SetPrivateIpAddress(const std::string& _privateIpAddress);

                    /**
                     * 判断参数 PrivateIpAddress 是否已赋值
                     * @return PrivateIpAddress 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressHasBeenSet() const;

                    /**
                     * 获取Private port.
                     * @return PrivatePort Private port.
                     * 
                     */
                    uint64_t GetPrivatePort() const;

                    /**
                     * 设置Private port.
                     * @param _privatePort Private port.
                     * 
                     */
                    void SetPrivatePort(const uint64_t& _privatePort);

                    /**
                     * 判断参数 PrivatePort 是否已赋值
                     * @return PrivatePort 是否已赋值
                     * 
                     */
                    bool PrivatePortHasBeenSet() const;

                    /**
                     * 获取NAT gateway forwarding rule description.
                     * @return Description NAT gateway forwarding rule description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置NAT gateway forwarding rule description.
                     * @param _description NAT gateway forwarding rule description.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取NAT gateway ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return NatGatewayId NAT gateway ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置NAT gateway ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _natGatewayId NAT gateway ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNatGatewayId(const std::string& _natGatewayId);

                    /**
                     * 判断参数 NatGatewayId 是否已赋值
                     * @return NatGatewayId 是否已赋值
                     * 
                     */
                    bool NatGatewayIdHasBeenSet() const;

                    /**
                     * 获取VPC ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return VpcId VPC ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _vpcId VPC ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取The creation time of the NAT gateway forwarding rule.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CreatedTime The creation time of the NAT gateway forwarding rule.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置The creation time of the NAT gateway forwarding rule.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _createdTime The creation time of the NAT gateway forwarding rule.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                private:

                    /**
                     * Network protocol. Available choices: `TCP`, `UDP`.
                     */
                    std::string m_ipProtocol;
                    bool m_ipProtocolHasBeenSet;

                    /**
                     * EIP.
                     */
                    std::string m_publicIpAddress;
                    bool m_publicIpAddressHasBeenSet;

                    /**
                     * Public port.
                     */
                    uint64_t m_publicPort;
                    bool m_publicPortHasBeenSet;

                    /**
                     * Private IP.
                     */
                    std::string m_privateIpAddress;
                    bool m_privateIpAddressHasBeenSet;

                    /**
                     * Private port.
                     */
                    uint64_t m_privatePort;
                    bool m_privatePortHasBeenSet;

                    /**
                     * NAT gateway forwarding rule description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * NAT gateway ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * VPC ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * The creation time of the NAT gateway forwarding rule.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_NATGATEWAYDESTINATIONIPPORTTRANSLATIONNATRULE_H_
