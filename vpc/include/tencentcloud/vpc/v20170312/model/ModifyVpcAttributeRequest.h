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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPCATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPCATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyVpcAttribute request structure.
                */
                class ModifyVpcAttributeRequest : public AbstractModel
                {
                public:
                    ModifyVpcAttributeRequest();
                    ~ModifyVpcAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Security group can be named freely, but cannot exceed 60 characters.
                     * @return VpcId Security group can be named freely, but cannot exceed 60 characters.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Security group can be named freely, but cannot exceed 60 characters.
                     * @param VpcId Security group can be named freely, but cannot exceed 60 characters.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取VPC can be named freely, but the maximum length is 60 characters.
                     * @return VpcName VPC can be named freely, but the maximum length is 60 characters.
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC can be named freely, but the maximum length is 60 characters.
                     * @param VpcName VPC can be named freely, but the maximum length is 60 characters.
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取Whether multicast is enabled. `true`: Enabled. `false`: Off.
                     * @return EnableMulticast Whether multicast is enabled. `true`: Enabled. `false`: Off.
                     */
                    std::string GetEnableMulticast() const;

                    /**
                     * 设置Whether multicast is enabled. `true`: Enabled. `false`: Off.
                     * @param EnableMulticast Whether multicast is enabled. `true`: Enabled. `false`: Off.
                     */
                    void SetEnableMulticast(const std::string& _enableMulticast);

                    /**
                     * 判断参数 EnableMulticast 是否已赋值
                     * @return EnableMulticast 是否已赋值
                     */
                    bool EnableMulticastHasBeenSet() const;

                    /**
                     * 获取DNS address. A maximum of 4 addresses is supported. The first one is primary server by default, and the rest are secondary servers.
                     * @return DnsServers DNS address. A maximum of 4 addresses is supported. The first one is primary server by default, and the rest are secondary servers.
                     */
                    std::vector<std::string> GetDnsServers() const;

                    /**
                     * 设置DNS address. A maximum of 4 addresses is supported. The first one is primary server by default, and the rest are secondary servers.
                     * @param DnsServers DNS address. A maximum of 4 addresses is supported. The first one is primary server by default, and the rest are secondary servers.
                     */
                    void SetDnsServers(const std::vector<std::string>& _dnsServers);

                    /**
                     * 判断参数 DnsServers 是否已赋值
                     * @return DnsServers 是否已赋值
                     */
                    bool DnsServersHasBeenSet() const;

                    /**
                     * 获取Domain name
                     * @return DomainName Domain name
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Domain name
                     * @param DomainName Domain name
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     */
                    bool DomainNameHasBeenSet() const;

                private:

                    /**
                     * Security group can be named freely, but cannot exceed 60 characters.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC can be named freely, but the maximum length is 60 characters.
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * Whether multicast is enabled. `true`: Enabled. `false`: Off.
                     */
                    std::string m_enableMulticast;
                    bool m_enableMulticastHasBeenSet;

                    /**
                     * DNS address. A maximum of 4 addresses is supported. The first one is primary server by default, and the rest are secondary servers.
                     */
                    std::vector<std::string> m_dnsServers;
                    bool m_dnsServersHasBeenSet;

                    /**
                     * Domain name
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPCATTRIBUTEREQUEST_H_
