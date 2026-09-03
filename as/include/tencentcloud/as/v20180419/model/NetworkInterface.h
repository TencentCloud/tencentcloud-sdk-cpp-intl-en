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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_NETWORKINTERFACE_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_NETWORKINTERFACE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * Elastic Network Interface configuration in the launch configuration.
                */
                class NetworkInterface : public AbstractModel
                {
                public:
                    NetworkInterface();
                    ~NetworkInterface() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Network interface card type. This field is required in the request for each network interface.</p><p>Enumeration values:</p><ul><li>PRIMARY: Primary network interface</li><li>SECONDARY: Auxiliary network interface</li></ul><p>When configuring upper-level NetworkInterfaces, the array must explicitly contain and can only contain one PRIMARY. AS does not auto-complete the primary network interface.</p>
                     * @return InterfaceType <p>Network interface card type. This field is required in the request for each network interface.</p><p>Enumeration values:</p><ul><li>PRIMARY: Primary network interface</li><li>SECONDARY: Auxiliary network interface</li></ul><p>When configuring upper-level NetworkInterfaces, the array must explicitly contain and can only contain one PRIMARY. AS does not auto-complete the primary network interface.</p>
                     * 
                     */
                    std::string GetInterfaceType() const;

                    /**
                     * 设置<p>Network interface card type. This field is required in the request for each network interface.</p><p>Enumeration values:</p><ul><li>PRIMARY: Primary network interface</li><li>SECONDARY: Auxiliary network interface</li></ul><p>When configuring upper-level NetworkInterfaces, the array must explicitly contain and can only contain one PRIMARY. AS does not auto-complete the primary network interface.</p>
                     * @param _interfaceType <p>Network interface card type. This field is required in the request for each network interface.</p><p>Enumeration values:</p><ul><li>PRIMARY: Primary network interface</li><li>SECONDARY: Auxiliary network interface</li></ul><p>When configuring upper-level NetworkInterfaces, the array must explicitly contain and can only contain one PRIMARY. AS does not auto-complete the primary network interface.</p>
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
                     * 获取<p>Total number of private IPv4 addresses requested for the network interface card, including the primary IP.</p><p>Value range: [1, 40]</p><p>Required for SECONDARY network interface card requests; optional for PRIMARY network interface card requests. If left empty, it is processed as 1 only when constructing a CVM request copy during actual scaling, and is not written back to the launch configuration. The explicitly passed in value is passed through to CVM by AS, and finally validated by CVM/VPC.</p>
                     * @return PrivateIpv4AddressCount <p>Total number of private IPv4 addresses requested for the network interface card, including the primary IP.</p><p>Value range: [1, 40]</p><p>Required for SECONDARY network interface card requests; optional for PRIMARY network interface card requests. If left empty, it is processed as 1 only when constructing a CVM request copy during actual scaling, and is not written back to the launch configuration. The explicitly passed in value is passed through to CVM by AS, and finally validated by CVM/VPC.</p>
                     * 
                     */
                    int64_t GetPrivateIpv4AddressCount() const;

                    /**
                     * 设置<p>Total number of private IPv4 addresses requested for the network interface card, including the primary IP.</p><p>Value range: [1, 40]</p><p>Required for SECONDARY network interface card requests; optional for PRIMARY network interface card requests. If left empty, it is processed as 1 only when constructing a CVM request copy during actual scaling, and is not written back to the launch configuration. The explicitly passed in value is passed through to CVM by AS, and finally validated by CVM/VPC.</p>
                     * @param _privateIpv4AddressCount <p>Total number of private IPv4 addresses requested for the network interface card, including the primary IP.</p><p>Value range: [1, 40]</p><p>Required for SECONDARY network interface card requests; optional for PRIMARY network interface card requests. If left empty, it is processed as 1 only when constructing a CVM request copy during actual scaling, and is not written back to the launch configuration. The explicitly passed in value is passed through to CVM by AS, and finally validated by CVM/VPC.</p>
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
                     * 获取<p>List of security group IDs bound to the ENI.</p><p>Input limit: up to 10.</p><p>For PRIMARY, a non-empty list explicitly configured in the network interface takes precedence over the SecurityGroupIds parameter in the launch configuration; if not configured in the network interface, the SecurityGroupIds parameter in the launch configuration is used. If neither is configured, AS does not specify security groups and proceeds with the CVM default rule. For SECONDARY, only the non-empty list explicitly configured in the network interface is passed through, and the SecurityGroupIds parameter in the launch configuration is not inherited.</p>
                     * @return SecurityGroupIds <p>List of security group IDs bound to the ENI.</p><p>Input limit: up to 10.</p><p>For PRIMARY, a non-empty list explicitly configured in the network interface takes precedence over the SecurityGroupIds parameter in the launch configuration; if not configured in the network interface, the SecurityGroupIds parameter in the launch configuration is used. If neither is configured, AS does not specify security groups and proceeds with the CVM default rule. For SECONDARY, only the non-empty list explicitly configured in the network interface is passed through, and the SecurityGroupIds parameter in the launch configuration is not inherited.</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>List of security group IDs bound to the ENI.</p><p>Input limit: up to 10.</p><p>For PRIMARY, a non-empty list explicitly configured in the network interface takes precedence over the SecurityGroupIds parameter in the launch configuration; if not configured in the network interface, the SecurityGroupIds parameter in the launch configuration is used. If neither is configured, AS does not specify security groups and proceeds with the CVM default rule. For SECONDARY, only the non-empty list explicitly configured in the network interface is passed through, and the SecurityGroupIds parameter in the launch configuration is not inherited.</p>
                     * @param _securityGroupIds <p>List of security group IDs bound to the ENI.</p><p>Input limit: up to 10.</p><p>For PRIMARY, a non-empty list explicitly configured in the network interface takes precedence over the SecurityGroupIds parameter in the launch configuration; if not configured in the network interface, the SecurityGroupIds parameter in the launch configuration is used. If neither is configured, AS does not specify security groups and proceeds with the CVM default rule. For SECONDARY, only the non-empty list explicitly configured in the network interface is passed through, and the SecurityGroupIds parameter in the launch configuration is not inherited.</p>
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
                     * 获取<p>Whether to reserve the auxiliary network interface when instance is terminated. Only applicable to SECONDARY.</p><p>Enumeration values:</p><ul><li>false: Do not retain the auxiliary network interface. It will destroy with the instance.</li><li>true: Retain the auxiliary network interface.</li></ul><p>Default value: false</p><p>PRIMARY does not allow configuration of true.</p>
                     * @return IsKeepENI <p>Whether to reserve the auxiliary network interface when instance is terminated. Only applicable to SECONDARY.</p><p>Enumeration values:</p><ul><li>false: Do not retain the auxiliary network interface. It will destroy with the instance.</li><li>true: Retain the auxiliary network interface.</li></ul><p>Default value: false</p><p>PRIMARY does not allow configuration of true.</p>
                     * 
                     */
                    bool GetIsKeepENI() const;

                    /**
                     * 设置<p>Whether to reserve the auxiliary network interface when instance is terminated. Only applicable to SECONDARY.</p><p>Enumeration values:</p><ul><li>false: Do not retain the auxiliary network interface. It will destroy with the instance.</li><li>true: Retain the auxiliary network interface.</li></ul><p>Default value: false</p><p>PRIMARY does not allow configuration of true.</p>
                     * @param _isKeepENI <p>Whether to reserve the auxiliary network interface when instance is terminated. Only applicable to SECONDARY.</p><p>Enumeration values:</p><ul><li>false: Do not retain the auxiliary network interface. It will destroy with the instance.</li><li>true: Retain the auxiliary network interface.</li></ul><p>Default value: false</p><p>PRIMARY does not allow configuration of true.</p>
                     * 
                     */
                    void SetIsKeepENI(const bool& _isKeepENI);

                    /**
                     * 判断参数 IsKeepENI 是否已赋值
                     * @return IsKeepENI 是否已赋值
                     * 
                     */
                    bool IsKeepENIHasBeenSet() const;

                private:

                    /**
                     * <p>Network interface card type. This field is required in the request for each network interface.</p><p>Enumeration values:</p><ul><li>PRIMARY: Primary network interface</li><li>SECONDARY: Auxiliary network interface</li></ul><p>When configuring upper-level NetworkInterfaces, the array must explicitly contain and can only contain one PRIMARY. AS does not auto-complete the primary network interface.</p>
                     */
                    std::string m_interfaceType;
                    bool m_interfaceTypeHasBeenSet;

                    /**
                     * <p>Total number of private IPv4 addresses requested for the network interface card, including the primary IP.</p><p>Value range: [1, 40]</p><p>Required for SECONDARY network interface card requests; optional for PRIMARY network interface card requests. If left empty, it is processed as 1 only when constructing a CVM request copy during actual scaling, and is not written back to the launch configuration. The explicitly passed in value is passed through to CVM by AS, and finally validated by CVM/VPC.</p>
                     */
                    int64_t m_privateIpv4AddressCount;
                    bool m_privateIpv4AddressCountHasBeenSet;

                    /**
                     * <p>List of security group IDs bound to the ENI.</p><p>Input limit: up to 10.</p><p>For PRIMARY, a non-empty list explicitly configured in the network interface takes precedence over the SecurityGroupIds parameter in the launch configuration; if not configured in the network interface, the SecurityGroupIds parameter in the launch configuration is used. If neither is configured, AS does not specify security groups and proceeds with the CVM default rule. For SECONDARY, only the non-empty list explicitly configured in the network interface is passed through, and the SecurityGroupIds parameter in the launch configuration is not inherited.</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>Whether to reserve the auxiliary network interface when instance is terminated. Only applicable to SECONDARY.</p><p>Enumeration values:</p><ul><li>false: Do not retain the auxiliary network interface. It will destroy with the instance.</li><li>true: Retain the auxiliary network interface.</li></ul><p>Default value: false</p><p>PRIMARY does not allow configuration of true.</p>
                     */
                    bool m_isKeepENI;
                    bool m_isKeepENIHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_NETWORKINTERFACE_H_
