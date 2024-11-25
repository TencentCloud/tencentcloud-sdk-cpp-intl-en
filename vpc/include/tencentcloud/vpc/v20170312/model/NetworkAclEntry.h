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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKACLENTRY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKACLENTRY_H_

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
                * Network ACL rules.
                */
                class NetworkAclEntry : public AbstractModel
                {
                public:
                    NetworkAclEntry();
                    ~NetworkAclEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Protocol. Valid values: TCP, UDP, ICMP, ALL.
                     * @return Protocol Protocol. Valid values: TCP, UDP, ICMP, ALL.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol. Valid values: TCP, UDP, ICMP, ALL.
                     * @param _protocol Protocol. Valid values: TCP, UDP, ICMP, ALL.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Port. Valid values: all, single port, range. When Protocol takes the value `ALL` or `ICMP`, Port cannot be specified.
                     * @return Port Port. Valid values: all, single port, range. When Protocol takes the value `ALL` or `ICMP`, Port cannot be specified.
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置Port. Valid values: all, single port, range. When Protocol takes the value `ALL` or `ICMP`, Port cannot be specified.
                     * @param _port Port. Valid values: all, single port, range. When Protocol takes the value `ALL` or `ICMP`, Port cannot be specified.
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取IP range or IP address (mutually exclusive).
                     * @return CidrBlock IP range or IP address (mutually exclusive).
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置IP range or IP address (mutually exclusive).
                     * @param _cidrBlock IP range or IP address (mutually exclusive).
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
                     * 获取CIDR block or IPv6 address (mutually exclusive).
                     * @return Ipv6CidrBlock CIDR block or IPv6 address (mutually exclusive).
                     * 
                     */
                    std::string GetIpv6CidrBlock() const;

                    /**
                     * 设置CIDR block or IPv6 address (mutually exclusive).
                     * @param _ipv6CidrBlock CIDR block or IPv6 address (mutually exclusive).
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
                     * 获取ACCEPT or DROP.
                     * @return Action ACCEPT or DROP.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置ACCEPT or DROP.
                     * @param _action ACCEPT or DROP.
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Rule description, which is up to 100 bytes.
                     * @return Description Rule description, which is up to 100 bytes.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Rule description, which is up to 100 bytes.
                     * @param _description Rule description, which is up to 100 bytes.
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
                     * 获取Modification time.
                     * @return ModifyTime Modification time.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Modification time.
                     * @param _modifyTime Modification time.
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * Protocol. Valid values: TCP, UDP, ICMP, ALL.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Port. Valid values: all, single port, range. When Protocol takes the value `ALL` or `ICMP`, Port cannot be specified.
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * IP range or IP address (mutually exclusive).
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * CIDR block or IPv6 address (mutually exclusive).
                     */
                    std::string m_ipv6CidrBlock;
                    bool m_ipv6CidrBlockHasBeenSet;

                    /**
                     * ACCEPT or DROP.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Rule description, which is up to 100 bytes.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Modification time.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKACLENTRY_H_
