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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_CREATELOADBALANCERREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_CREATELOADBALANCERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/LoadBalancerBillingConfig.h>
#include <tencentcloud/alb/v20251030/model/ZoneMappingsItem.h>
#include <tencentcloud/alb/v20251030/model/DeletionProtectionConfig.h>
#include <tencentcloud/alb/v20251030/model/TagInfo.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * CreateLoadBalancer request structure.
                */
                class CreateLoadBalancerRequest : public AbstractModel
                {
                public:
                    CreateLoadBalancerRequest();
                    ~CreateLoadBalancerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Address type of the application CLB.

- **Internet**: The load balancing has a public IP address, and the DNS domain name is resolved to the public IP, so it can be accessed via the public network.

- **Intranet**: The load balancer has only a private IP address, and the DNS domain name is resolved to the private IP, so it can only be accessed from the private network environment of the VPC where the load balancer resides.
                     * @return AddressType Address type of the application CLB.

- **Internet**: The load balancing has a public IP address, and the DNS domain name is resolved to the public IP, so it can be accessed via the public network.

- **Intranet**: The load balancer has only a private IP address, and the DNS domain name is resolved to the private IP, so it can only be accessed from the private network environment of the VPC where the load balancer resides.
                     * 
                     */
                    std::string GetAddressType() const;

                    /**
                     * 设置Address type of the application CLB.

- **Internet**: The load balancing has a public IP address, and the DNS domain name is resolved to the public IP, so it can be accessed via the public network.

- **Intranet**: The load balancer has only a private IP address, and the DNS domain name is resolved to the private IP, so it can only be accessed from the private network environment of the VPC where the load balancer resides.
                     * @param _addressType Address type of the application CLB.

- **Internet**: The load balancing has a public IP address, and the DNS domain name is resolved to the public IP, so it can be accessed via the public network.

- **Intranet**: The load balancer has only a private IP address, and the DNS domain name is resolved to the private IP, so it can only be accessed from the private network environment of the VPC where the load balancer resides.
                     * 
                     */
                    void SetAddressType(const std::string& _addressType);

                    /**
                     * 判断参数 AddressType 是否已赋值
                     * @return AddressType 是否已赋值
                     * 
                     */
                    bool AddressTypeHasBeenSet() const;

                    /**
                     * 获取Billing configuration of an application CLB instance.
                     * @return LoadBalancerBillingConfig Billing configuration of an application CLB instance.
                     * 
                     */
                    LoadBalancerBillingConfig GetLoadBalancerBillingConfig() const;

                    /**
                     * 设置Billing configuration of an application CLB instance.
                     * @param _loadBalancerBillingConfig Billing configuration of an application CLB instance.
                     * 
                     */
                    void SetLoadBalancerBillingConfig(const LoadBalancerBillingConfig& _loadBalancerBillingConfig);

                    /**
                     * 判断参数 LoadBalancerBillingConfig 是否已赋值
                     * @return LoadBalancerBillingConfig 是否已赋值
                     * 
                     */
                    bool LoadBalancerBillingConfigHasBeenSet() const;

                    /**
                     * 获取Virtual Private Cloud (VPC) ID.
                     * @return VpcId Virtual Private Cloud (VPC) ID.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Virtual Private Cloud (VPC) ID.
                     * @param _vpcId Virtual Private Cloud (VPC) ID.
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
                     * 获取AZ and private network subnet mapping list. A maximum of 10 AZs can be added. If the current region supports 2 or more AZs, a minimum of 2 AZs are required.
                     * @return ZoneMappings AZ and private network subnet mapping list. A maximum of 10 AZs can be added. If the current region supports 2 or more AZs, a minimum of 2 AZs are required.
                     * 
                     */
                    std::vector<ZoneMappingsItem> GetZoneMappings() const;

                    /**
                     * 设置AZ and private network subnet mapping list. A maximum of 10 AZs can be added. If the current region supports 2 or more AZs, a minimum of 2 AZs are required.
                     * @param _zoneMappings AZ and private network subnet mapping list. A maximum of 10 AZs can be added. If the current region supports 2 or more AZs, a minimum of 2 AZs are required.
                     * 
                     */
                    void SetZoneMappings(const std::vector<ZoneMappingsItem>& _zoneMappings);

                    /**
                     * 判断参数 ZoneMappings 是否已赋值
                     * @return ZoneMappings 是否已赋值
                     * 
                     */
                    bool ZoneMappingsHasBeenSet() const;

                    /**
                     * 获取IP address version. Value: IPv4 or IPv6.
                     * @return AddressIpVersion IP address version. Value: IPv4 or IPv6.
                     * 
                     */
                    std::string GetAddressIpVersion() const;

                    /**
                     * 设置IP address version. Value: IPv4 or IPv6.
                     * @param _addressIpVersion IP address version. Value: IPv4 or IPv6.
                     * 
                     */
                    void SetAddressIpVersion(const std::string& _addressIpVersion);

                    /**
                     * 判断参数 AddressIpVersion 是否已赋值
                     * @return AddressIpVersion 是否已赋值
                     * 
                     */
                    bool AddressIpVersionHasBeenSet() const;

                    /**
                     * 获取Client Token, used for ensuring the idempotency of requests.

Generate a parameter value from your client to underwrite the uniqueness of the value for different requests. ClientToken supports only ASCII characters.
                     * @return ClientToken Client Token, used for ensuring the idempotency of requests.

Generate a parameter value from your client to underwrite the uniqueness of the value for different requests. ClientToken supports only ASCII characters.
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置Client Token, used for ensuring the idempotency of requests.

Generate a parameter value from your client to underwrite the uniqueness of the value for different requests. ClientToken supports only ASCII characters.
                     * @param _clientToken Client Token, used for ensuring the idempotency of requests.

Generate a parameter value from your client to underwrite the uniqueness of the value for different requests. ClientToken supports only ASCII characters.
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取Deletion protection configuration.
                     * @return DeleteProtection Deletion protection configuration.
                     * 
                     */
                    DeletionProtectionConfig GetDeleteProtection() const;

                    /**
                     * 设置Deletion protection configuration.
                     * @param _deleteProtection Deletion protection configuration.
                     * 
                     */
                    void SetDeleteProtection(const DeletionProtectionConfig& _deleteProtection);

                    /**
                     * 判断参数 DeleteProtection 是否已赋值
                     * @return DeleteProtection 是否已赋值
                     * 
                     */
                    bool DeleteProtectionHasBeenSet() const;

                    /**
                     * 获取Whether to only precheck this request. Parameter Value:

- **true**: Send a check request without creating an application CLB instance. Check items include whether required parameters are filled in, request format, and service limits. If the check fails, return the corresponding error. If the check passes, return the error code `DryRunOperation`.

- **false** (default value): Send a normal request. After the check is passed, return HTTP 2xx status code and directly perform the operation.
                     * @return DryRun Whether to only precheck this request. Parameter Value:

- **true**: Send a check request without creating an application CLB instance. Check items include whether required parameters are filled in, request format, and service limits. If the check fails, return the corresponding error. If the check passes, return the error code `DryRunOperation`.

- **false** (default value): Send a normal request. After the check is passed, return HTTP 2xx status code and directly perform the operation.
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置Whether to only precheck this request. Parameter Value:

- **true**: Send a check request without creating an application CLB instance. Check items include whether required parameters are filled in, request format, and service limits. If the check fails, return the corresponding error. If the check passes, return the error code `DryRunOperation`.

- **false** (default value): Send a normal request. After the check is passed, return HTTP 2xx status code and directly perform the operation.
                     * @param _dryRun Whether to only precheck this request. Parameter Value:

- **true**: Send a check request without creating an application CLB instance. Check items include whether required parameters are filled in, request format, and service limits. If the check fails, return the corresponding error. If the check passes, return the error code `DryRunOperation`.

- **false** (default value): Send a normal request. After the check is passed, return HTTP 2xx status code and directly perform the operation.
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取EIP address type. Valid values:
- **EIP**: Ordinary Elastic IP
- **AntiDDoSEIP**: Anti-DDoS EIP
- **AnycastEIP**: Accelerated EIP
-**HighQualityEIP**: High Quality IP. High Quality IP is supported only in Singapore and Hong Kong (China).
- **ResidentialEIP**: natively assigned IP

Default if not passed: EIP.
                     * @return InternetAddressType EIP address type. Valid values:
- **EIP**: Ordinary Elastic IP
- **AntiDDoSEIP**: Anti-DDoS EIP
- **AnycastEIP**: Accelerated EIP
-**HighQualityEIP**: High Quality IP. High Quality IP is supported only in Singapore and Hong Kong (China).
- **ResidentialEIP**: natively assigned IP

Default if not passed: EIP.
                     * 
                     */
                    std::string GetInternetAddressType() const;

                    /**
                     * 设置EIP address type. Valid values:
- **EIP**: Ordinary Elastic IP
- **AntiDDoSEIP**: Anti-DDoS EIP
- **AnycastEIP**: Accelerated EIP
-**HighQualityEIP**: High Quality IP. High Quality IP is supported only in Singapore and Hong Kong (China).
- **ResidentialEIP**: natively assigned IP

Default if not passed: EIP.
                     * @param _internetAddressType EIP address type. Valid values:
- **EIP**: Ordinary Elastic IP
- **AntiDDoSEIP**: Anti-DDoS EIP
- **AnycastEIP**: Accelerated EIP
-**HighQualityEIP**: High Quality IP. High Quality IP is supported only in Singapore and Hong Kong (China).
- **ResidentialEIP**: natively assigned IP

Default if not passed: EIP.
                     * 
                     */
                    void SetInternetAddressType(const std::string& _internetAddressType);

                    /**
                     * 判断参数 InternetAddressType 是否已赋值
                     * @return InternetAddressType 是否已赋值
                     * 
                     */
                    bool InternetAddressTypeHasBeenSet() const;

                    /**
                     * 获取Application CLB instance name. It contains 1-80 characters, including Chinese characters, letters, digits, dashes (-), forward slashes (/), half-width periods (.), and underscores (_).
                     * @return LoadBalancerName Application CLB instance name. It contains 1-80 characters, including Chinese characters, letters, digits, dashes (-), forward slashes (/), half-width periods (.), and underscores (_).
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置Application CLB instance name. It contains 1-80 characters, including Chinese characters, letters, digits, dashes (-), forward slashes (/), half-width periods (.), and underscores (_).
                     * @param _loadBalancerName Application CLB instance name. It contains 1-80 characters, including Chinese characters, letters, digits, dashes (-), forward slashes (/), half-width periods (.), and underscores (_).
                     * 
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     * 
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取Tag.
                     * @return Tags Tag.
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置Tag.
                     * @param _tags Tag.
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Address type of the application CLB.

- **Internet**: The load balancing has a public IP address, and the DNS domain name is resolved to the public IP, so it can be accessed via the public network.

- **Intranet**: The load balancer has only a private IP address, and the DNS domain name is resolved to the private IP, so it can only be accessed from the private network environment of the VPC where the load balancer resides.
                     */
                    std::string m_addressType;
                    bool m_addressTypeHasBeenSet;

                    /**
                     * Billing configuration of an application CLB instance.
                     */
                    LoadBalancerBillingConfig m_loadBalancerBillingConfig;
                    bool m_loadBalancerBillingConfigHasBeenSet;

                    /**
                     * Virtual Private Cloud (VPC) ID.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * AZ and private network subnet mapping list. A maximum of 10 AZs can be added. If the current region supports 2 or more AZs, a minimum of 2 AZs are required.
                     */
                    std::vector<ZoneMappingsItem> m_zoneMappings;
                    bool m_zoneMappingsHasBeenSet;

                    /**
                     * IP address version. Value: IPv4 or IPv6.
                     */
                    std::string m_addressIpVersion;
                    bool m_addressIpVersionHasBeenSet;

                    /**
                     * Client Token, used for ensuring the idempotency of requests.

Generate a parameter value from your client to underwrite the uniqueness of the value for different requests. ClientToken supports only ASCII characters.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * Deletion protection configuration.
                     */
                    DeletionProtectionConfig m_deleteProtection;
                    bool m_deleteProtectionHasBeenSet;

                    /**
                     * Whether to only precheck this request. Parameter Value:

- **true**: Send a check request without creating an application CLB instance. Check items include whether required parameters are filled in, request format, and service limits. If the check fails, return the corresponding error. If the check passes, return the error code `DryRunOperation`.

- **false** (default value): Send a normal request. After the check is passed, return HTTP 2xx status code and directly perform the operation.
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * EIP address type. Valid values:
- **EIP**: Ordinary Elastic IP
- **AntiDDoSEIP**: Anti-DDoS EIP
- **AnycastEIP**: Accelerated EIP
-**HighQualityEIP**: High Quality IP. High Quality IP is supported only in Singapore and Hong Kong (China).
- **ResidentialEIP**: natively assigned IP

Default if not passed: EIP.
                     */
                    std::string m_internetAddressType;
                    bool m_internetAddressTypeHasBeenSet;

                    /**
                     * Application CLB instance name. It contains 1-80 characters, including Chinese characters, letters, digits, dashes (-), forward slashes (/), half-width periods (.), and underscores (_).
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * Tag.
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_CREATELOADBALANCERREQUEST_H_
