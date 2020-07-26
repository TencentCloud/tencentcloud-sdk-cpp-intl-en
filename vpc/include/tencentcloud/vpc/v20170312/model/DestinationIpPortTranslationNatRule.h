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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESTINATIONIPPORTTRANSLATIONNATRULE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESTINATIONIPPORTTRANSLATIONNATRULE_H_

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
                class DestinationIpPortTranslationNatRule : public AbstractModel
                {
                public:
                    DestinationIpPortTranslationNatRule();
                    ~DestinationIpPortTranslationNatRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Network protocol. Available choices: `TCP`, `UDP`.
                     * @return IpProtocol Network protocol. Available choices: `TCP`, `UDP`.
                     */
                    std::string GetIpProtocol() const;

                    /**
                     * 设置Network protocol. Available choices: `TCP`, `UDP`.
                     * @param IpProtocol Network protocol. Available choices: `TCP`, `UDP`.
                     */
                    void SetIpProtocol(const std::string& _ipProtocol);

                    /**
                     * 判断参数 IpProtocol 是否已赋值
                     * @return IpProtocol 是否已赋值
                     */
                    bool IpProtocolHasBeenSet() const;

                    /**
                     * 获取EIP.
                     * @return PublicIpAddress EIP.
                     */
                    std::string GetPublicIpAddress() const;

                    /**
                     * 设置EIP.
                     * @param PublicIpAddress EIP.
                     */
                    void SetPublicIpAddress(const std::string& _publicIpAddress);

                    /**
                     * 判断参数 PublicIpAddress 是否已赋值
                     * @return PublicIpAddress 是否已赋值
                     */
                    bool PublicIpAddressHasBeenSet() const;

                    /**
                     * 获取Public port.
                     * @return PublicPort Public port.
                     */
                    uint64_t GetPublicPort() const;

                    /**
                     * 设置Public port.
                     * @param PublicPort Public port.
                     */
                    void SetPublicPort(const uint64_t& _publicPort);

                    /**
                     * 判断参数 PublicPort 是否已赋值
                     * @return PublicPort 是否已赋值
                     */
                    bool PublicPortHasBeenSet() const;

                    /**
                     * 获取Private network address.
                     * @return PrivateIpAddress Private network address.
                     */
                    std::string GetPrivateIpAddress() const;

                    /**
                     * 设置Private network address.
                     * @param PrivateIpAddress Private network address.
                     */
                    void SetPrivateIpAddress(const std::string& _privateIpAddress);

                    /**
                     * 判断参数 PrivateIpAddress 是否已赋值
                     * @return PrivateIpAddress 是否已赋值
                     */
                    bool PrivateIpAddressHasBeenSet() const;

                    /**
                     * 获取Private network port.
                     * @return PrivatePort Private network port.
                     */
                    uint64_t GetPrivatePort() const;

                    /**
                     * 设置Private network port.
                     * @param PrivatePort Private network port.
                     */
                    void SetPrivatePort(const uint64_t& _privatePort);

                    /**
                     * 判断参数 PrivatePort 是否已赋值
                     * @return PrivatePort 是否已赋值
                     */
                    bool PrivatePortHasBeenSet() const;

                    /**
                     * 获取NAT gateway forwarding rule description.
                     * @return Description NAT gateway forwarding rule description.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置NAT gateway forwarding rule description.
                     * @param Description NAT gateway forwarding rule description.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

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
                     * Private network address.
                     */
                    std::string m_privateIpAddress;
                    bool m_privateIpAddressHasBeenSet;

                    /**
                     * Private network port.
                     */
                    uint64_t m_privatePort;
                    bool m_privatePortHasBeenSet;

                    /**
                     * NAT gateway forwarding rule description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESTINATIONIPPORTTRANSLATIONNATRULE_H_
