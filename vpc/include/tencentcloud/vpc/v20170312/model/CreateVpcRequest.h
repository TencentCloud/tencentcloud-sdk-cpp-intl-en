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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPCREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateVpc request structure.
                */
                class CreateVpcRequest : public AbstractModel
                {
                public:
                    CreateVpcRequest();
                    ~CreateVpcRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The VPC name. The maximum length is 60 bytes.
                     * @return VpcName The VPC name. The maximum length is 60 bytes.
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置The VPC name. The maximum length is 60 bytes.
                     * @param VpcName The VPC name. The maximum length is 60 bytes.
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取VPC CIDR, which must fall within the following private network IP ranges: 10.0.0.0/16, 172.16.0.0/16, and 192.168.0.0/16.
                     * @return CidrBlock VPC CIDR, which must fall within the following private network IP ranges: 10.0.0.0/16, 172.16.0.0/16, and 192.168.0.0/16.
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置VPC CIDR, which must fall within the following private network IP ranges: 10.0.0.0/16, 172.16.0.0/16, and 192.168.0.0/16.
                     * @param CidrBlock VPC CIDR, which must fall within the following private network IP ranges: 10.0.0.0/16, 172.16.0.0/16, and 192.168.0.0/16.
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取Whether multicast is enabled. `true`: Enabled. `false`: Not enabled.
                     * @return EnableMulticast Whether multicast is enabled. `true`: Enabled. `false`: Not enabled.
                     */
                    std::string GetEnableMulticast() const;

                    /**
                     * 设置Whether multicast is enabled. `true`: Enabled. `false`: Not enabled.
                     * @param EnableMulticast Whether multicast is enabled. `true`: Enabled. `false`: Not enabled.
                     */
                    void SetEnableMulticast(const std::string& _enableMulticast);

                    /**
                     * 判断参数 EnableMulticast 是否已赋值
                     * @return EnableMulticast 是否已赋值
                     */
                    bool EnableMulticastHasBeenSet() const;

                    /**
                     * 获取The DNS address. A maximum of 4 addresses is supported.
                     * @return DnsServers The DNS address. A maximum of 4 addresses is supported.
                     */
                    std::vector<std::string> GetDnsServers() const;

                    /**
                     * 设置The DNS address. A maximum of 4 addresses is supported.
                     * @param DnsServers The DNS address. A maximum of 4 addresses is supported.
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

                    /**
                     * 获取Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * @return Tags Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * @param Tags Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * The VPC name. The maximum length is 60 bytes.
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * VPC CIDR, which must fall within the following private network IP ranges: 10.0.0.0/16, 172.16.0.0/16, and 192.168.0.0/16.
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * Whether multicast is enabled. `true`: Enabled. `false`: Not enabled.
                     */
                    std::string m_enableMulticast;
                    bool m_enableMulticastHasBeenSet;

                    /**
                     * The DNS address. A maximum of 4 addresses is supported.
                     */
                    std::vector<std::string> m_dnsServers;
                    bool m_dnsServersHasBeenSet;

                    /**
                     * Domain name
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPCREQUEST_H_
