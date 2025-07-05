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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CFWNATDNATRULE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CFWNATDNATRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * NAT firewall DNAT rules
                */
                class CfwNatDnatRule : public AbstractModel
                {
                public:
                    CfwNatDnatRule();
                    ~CfwNatDnatRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Network protocol. Valid values: TCP or UDP.
                     * @return IpProtocol Network protocol. Valid values: TCP or UDP.
                     * 
                     */
                    std::string GetIpProtocol() const;

                    /**
                     * 设置Network protocol. Valid values: TCP or UDP.
                     * @param _ipProtocol Network protocol. Valid values: TCP or UDP.
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
                     * 获取Elastic IP.
                     * @return PublicIpAddress Elastic IP.
                     * 
                     */
                    std::string GetPublicIpAddress() const;

                    /**
                     * 设置Elastic IP.
                     * @param _publicIpAddress Elastic IP.
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
                    int64_t GetPublicPort() const;

                    /**
                     * 设置Public port.
                     * @param _publicPort Public port.
                     * 
                     */
                    void SetPublicPort(const int64_t& _publicPort);

                    /**
                     * 判断参数 PublicPort 是否已赋值
                     * @return PublicPort 是否已赋值
                     * 
                     */
                    bool PublicPortHasBeenSet() const;

                    /**
                     * 获取Private address.
                     * @return PrivateIpAddress Private address.
                     * 
                     */
                    std::string GetPrivateIpAddress() const;

                    /**
                     * 设置Private address.
                     * @param _privateIpAddress Private address.
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
                    int64_t GetPrivatePort() const;

                    /**
                     * 设置Private port.
                     * @param _privatePort Private port.
                     * 
                     */
                    void SetPrivatePort(const int64_t& _privatePort);

                    /**
                     * 判断参数 PrivatePort 是否已赋值
                     * @return PrivatePort 是否已赋值
                     * 
                     */
                    bool PrivatePortHasBeenSet() const;

                    /**
                     * 获取The description of NAT firewall forwarding rules.
                     * @return Description The description of NAT firewall forwarding rules.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置The description of NAT firewall forwarding rules.
                     * @param _description The description of NAT firewall forwarding rules.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Network protocol. Valid values: TCP or UDP.
                     */
                    std::string m_ipProtocol;
                    bool m_ipProtocolHasBeenSet;

                    /**
                     * Elastic IP.
                     */
                    std::string m_publicIpAddress;
                    bool m_publicIpAddressHasBeenSet;

                    /**
                     * Public port.
                     */
                    int64_t m_publicPort;
                    bool m_publicPortHasBeenSet;

                    /**
                     * Private address.
                     */
                    std::string m_privateIpAddress;
                    bool m_privateIpAddressHasBeenSet;

                    /**
                     * Private port.
                     */
                    int64_t m_privatePort;
                    bool m_privatePortHasBeenSet;

                    /**
                     * The description of NAT firewall forwarding rules.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CFWNATDNATRULE_H_
