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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SECURITYGROUPPOLICY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SECURITYGROUPPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/ServiceTemplateSpecification.h>
#include <tencentcloud/vpc/v20170312/model/AddressTemplateSpecification.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Security group policy object
                */
                class SecurityGroupPolicy : public AbstractModel
                {
                public:
                    SecurityGroupPolicy();
                    ~SecurityGroupPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The index number of security group rules, which dynamically changes with the rules. This parameter can be obtained via the `DescribeSecurityGroupPolicies` API and used with the `Version` field in the returned value of the API.
                     * @return PolicyIndex The index number of security group rules, which dynamically changes with the rules. This parameter can be obtained via the `DescribeSecurityGroupPolicies` API and used with the `Version` field in the returned value of the API.
                     */
                    int64_t GetPolicyIndex() const;

                    /**
                     * 设置The index number of security group rules, which dynamically changes with the rules. This parameter can be obtained via the `DescribeSecurityGroupPolicies` API and used with the `Version` field in the returned value of the API.
                     * @param PolicyIndex The index number of security group rules, which dynamically changes with the rules. This parameter can be obtained via the `DescribeSecurityGroupPolicies` API and used with the `Version` field in the returned value of the API.
                     */
                    void SetPolicyIndex(const int64_t& _policyIndex);

                    /**
                     * 判断参数 PolicyIndex 是否已赋值
                     * @return PolicyIndex 是否已赋值
                     */
                    bool PolicyIndexHasBeenSet() const;

                    /**
                     * 获取Protocol. Valid values: TCP, UDP, ICMP, ICMPv6, ALL.
                     * @return Protocol Protocol. Valid values: TCP, UDP, ICMP, ICMPv6, ALL.
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol. Valid values: TCP, UDP, ICMP, ICMPv6, ALL.
                     * @param Protocol Protocol. Valid values: TCP, UDP, ICMP, ICMPv6, ALL.
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Port (all, discrete port, range).
                     * @return Port Port (all, discrete port, range).
                     */
                    std::string GetPort() const;

                    /**
                     * 设置Port (all, discrete port, range).
                     * @param Port Port (all, discrete port, range).
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Protocol port ID or protocol port group ID. ServiceTemplate and Protocol+Port are mutually exclusive.
                     * @return ServiceTemplate Protocol port ID or protocol port group ID. ServiceTemplate and Protocol+Port are mutually exclusive.
                     */
                    ServiceTemplateSpecification GetServiceTemplate() const;

                    /**
                     * 设置Protocol port ID or protocol port group ID. ServiceTemplate and Protocol+Port are mutually exclusive.
                     * @param ServiceTemplate Protocol port ID or protocol port group ID. ServiceTemplate and Protocol+Port are mutually exclusive.
                     */
                    void SetServiceTemplate(const ServiceTemplateSpecification& _serviceTemplate);

                    /**
                     * 判断参数 ServiceTemplate 是否已赋值
                     * @return ServiceTemplate 是否已赋值
                     */
                    bool ServiceTemplateHasBeenSet() const;

                    /**
                     * 获取IP range or IP (mutually exclusive).
                     * @return CidrBlock IP range or IP (mutually exclusive).
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置IP range or IP (mutually exclusive).
                     * @param CidrBlock IP range or IP (mutually exclusive).
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取The CIDR block or IPv6 (mutually exclusive).
                     * @return Ipv6CidrBlock The CIDR block or IPv6 (mutually exclusive).
                     */
                    std::string GetIpv6CidrBlock() const;

                    /**
                     * 设置The CIDR block or IPv6 (mutually exclusive).
                     * @param Ipv6CidrBlock The CIDR block or IPv6 (mutually exclusive).
                     */
                    void SetIpv6CidrBlock(const std::string& _ipv6CidrBlock);

                    /**
                     * 判断参数 Ipv6CidrBlock 是否已赋值
                     * @return Ipv6CidrBlock 是否已赋值
                     */
                    bool Ipv6CidrBlockHasBeenSet() const;

                    /**
                     * 获取The security group instance ID, such as `sg-ohuuioma`.
                     * @return SecurityGroupId The security group instance ID, such as `sg-ohuuioma`.
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置The security group instance ID, such as `sg-ohuuioma`.
                     * @param SecurityGroupId The security group instance ID, such as `sg-ohuuioma`.
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取IP address ID or IP address group ID.
                     * @return AddressTemplate IP address ID or IP address group ID.
                     */
                    AddressTemplateSpecification GetAddressTemplate() const;

                    /**
                     * 设置IP address ID or IP address group ID.
                     * @param AddressTemplate IP address ID or IP address group ID.
                     */
                    void SetAddressTemplate(const AddressTemplateSpecification& _addressTemplate);

                    /**
                     * 判断参数 AddressTemplate 是否已赋值
                     * @return AddressTemplate 是否已赋值
                     */
                    bool AddressTemplateHasBeenSet() const;

                    /**
                     * 获取ACCEPT or DROP.
                     * @return Action ACCEPT or DROP.
                     */
                    std::string GetAction() const;

                    /**
                     * 设置ACCEPT or DROP.
                     * @param Action ACCEPT or DROP.
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Security group policy description.
                     * @return PolicyDescription Security group policy description.
                     */
                    std::string GetPolicyDescription() const;

                    /**
                     * 设置Security group policy description.
                     * @param PolicyDescription Security group policy description.
                     */
                    void SetPolicyDescription(const std::string& _policyDescription);

                    /**
                     * 判断参数 PolicyDescription 是否已赋值
                     * @return PolicyDescription 是否已赋值
                     */
                    bool PolicyDescriptionHasBeenSet() const;

                    /**
                     * 获取The last modification time of the security group.
                     * @return ModifyTime The last modification time of the security group.
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置The last modification time of the security group.
                     * @param ModifyTime The last modification time of the security group.
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * The index number of security group rules, which dynamically changes with the rules. This parameter can be obtained via the `DescribeSecurityGroupPolicies` API and used with the `Version` field in the returned value of the API.
                     */
                    int64_t m_policyIndex;
                    bool m_policyIndexHasBeenSet;

                    /**
                     * Protocol. Valid values: TCP, UDP, ICMP, ICMPv6, ALL.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Port (all, discrete port, range).
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Protocol port ID or protocol port group ID. ServiceTemplate and Protocol+Port are mutually exclusive.
                     */
                    ServiceTemplateSpecification m_serviceTemplate;
                    bool m_serviceTemplateHasBeenSet;

                    /**
                     * IP range or IP (mutually exclusive).
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * The CIDR block or IPv6 (mutually exclusive).
                     */
                    std::string m_ipv6CidrBlock;
                    bool m_ipv6CidrBlockHasBeenSet;

                    /**
                     * The security group instance ID, such as `sg-ohuuioma`.
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * IP address ID or IP address group ID.
                     */
                    AddressTemplateSpecification m_addressTemplate;
                    bool m_addressTemplateHasBeenSet;

                    /**
                     * ACCEPT or DROP.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Security group policy description.
                     */
                    std::string m_policyDescription;
                    bool m_policyDescriptionHasBeenSet;

                    /**
                     * The last modification time of the security group.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SECURITYGROUPPOLICY_H_
