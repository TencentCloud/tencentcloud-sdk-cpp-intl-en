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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_VPC_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_VPC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>
#include <tencentcloud/vpc/v20170312/model/AssistantCidr.h>
#include <tencentcloud/vpc/v20170312/model/ISPIPv6CidrBlock.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Virtual Private Cloud (VPC) object.
                */
                class Vpc : public AbstractModel
                {
                public:
                    Vpc();
                    ~Vpc() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取`VPC` name.
                     * @return VpcName `VPC` name.
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置`VPC` name.
                     * @param _vpcName `VPC` name.
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取`VPC` instance `ID`, such as `vpc-azd4dt1c`.
                     * @return VpcId `VPC` instance `ID`, such as `vpc-azd4dt1c`.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置`VPC` instance `ID`, such as `vpc-azd4dt1c`.
                     * @param _vpcId `VPC` instance `ID`, such as `vpc-azd4dt1c`.
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
                     * 获取The `IPv4` `CIDR` of the `VPC`.
                     * @return CidrBlock The `IPv4` `CIDR` of the `VPC`.
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置The `IPv4` `CIDR` of the `VPC`.
                     * @param _cidrBlock The `IPv4` `CIDR` of the `VPC`.
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
                     * 获取Whether it is the default `VPC`.
                     * @return IsDefault Whether it is the default `VPC`.
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置Whether it is the default `VPC`.
                     * @param _isDefault Whether it is the default `VPC`.
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取Whether multicast is enabled.
                     * @return EnableMulticast Whether multicast is enabled.
                     * 
                     */
                    bool GetEnableMulticast() const;

                    /**
                     * 设置Whether multicast is enabled.
                     * @param _enableMulticast Whether multicast is enabled.
                     * 
                     */
                    void SetEnableMulticast(const bool& _enableMulticast);

                    /**
                     * 判断参数 EnableMulticast 是否已赋值
                     * @return EnableMulticast 是否已赋值
                     * 
                     */
                    bool EnableMulticastHasBeenSet() const;

                    /**
                     * 获取Creation Time.
                     * @return CreatedTime Creation Time.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation Time.
                     * @param _createdTime Creation Time.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取`DNS` list.
                     * @return DnsServerSet `DNS` list.
                     * 
                     */
                    std::vector<std::string> GetDnsServerSet() const;

                    /**
                     * 设置`DNS` list.
                     * @param _dnsServerSet `DNS` list.
                     * 
                     */
                    void SetDnsServerSet(const std::vector<std::string>& _dnsServerSet);

                    /**
                     * 判断参数 DnsServerSet 是否已赋值
                     * @return DnsServerSet 是否已赋值
                     * 
                     */
                    bool DnsServerSetHasBeenSet() const;

                    /**
                     * 获取DHCP domain name option value.
                     * @return DomainName DHCP domain name option value.
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置DHCP domain name option value.
                     * @param _domainName DHCP domain name option value.
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取`DHCP` option set `ID`.
                     * @return DhcpOptionsId `DHCP` option set `ID`.
                     * 
                     */
                    std::string GetDhcpOptionsId() const;

                    /**
                     * 设置`DHCP` option set `ID`.
                     * @param _dhcpOptionsId `DHCP` option set `ID`.
                     * 
                     */
                    void SetDhcpOptionsId(const std::string& _dhcpOptionsId);

                    /**
                     * 判断参数 DhcpOptionsId 是否已赋值
                     * @return DhcpOptionsId 是否已赋值
                     * 
                     */
                    bool DhcpOptionsIdHasBeenSet() const;

                    /**
                     * 获取Whether `DHCP` is enabled.
                     * @return EnableDhcp Whether `DHCP` is enabled.
                     * 
                     */
                    bool GetEnableDhcp() const;

                    /**
                     * 设置Whether `DHCP` is enabled.
                     * @param _enableDhcp Whether `DHCP` is enabled.
                     * 
                     */
                    void SetEnableDhcp(const bool& _enableDhcp);

                    /**
                     * 判断参数 EnableDhcp 是否已赋值
                     * @return EnableDhcp 是否已赋值
                     * 
                     */
                    bool EnableDhcpHasBeenSet() const;

                    /**
                     * 获取The `IPv6` `CIDR` of the `VPC`.
                     * @return Ipv6CidrBlock The `IPv6` `CIDR` of the `VPC`.
                     * 
                     */
                    std::string GetIpv6CidrBlock() const;

                    /**
                     * 设置The `IPv6` `CIDR` of the `VPC`.
                     * @param _ipv6CidrBlock The `IPv6` `CIDR` of the `VPC`.
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
                     * 获取Tag key-value pair
                     * @return TagSet Tag key-value pair
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置Tag key-value pair
                     * @param _tagSet Tag key-value pair
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取Auxiliary CIDR
                     * @return AssistantCidrSet Auxiliary CIDR
                     * 
                     */
                    std::vector<AssistantCidr> GetAssistantCidrSet() const;

                    /**
                     * 设置Auxiliary CIDR
                     * @param _assistantCidrSet Auxiliary CIDR
                     * 
                     */
                    void SetAssistantCidrSet(const std::vector<AssistantCidr>& _assistantCidrSet);

                    /**
                     * 判断参数 AssistantCidrSet 是否已赋值
                     * @return AssistantCidrSet 是否已赋值
                     * 
                     */
                    bool AssistantCidrSetHasBeenSet() const;

                    /**
                     * 获取Vpc association with CCN route publish policy. true: enables cidr route publishing. false: enables subnet route publishing. default is subnet route publishing when creating a vpc. to select cidr route publishing, submit a ticket for adding to allowlist.
                     * @return EnableRouteVpcPublish Vpc association with CCN route publish policy. true: enables cidr route publishing. false: enables subnet route publishing. default is subnet route publishing when creating a vpc. to select cidr route publishing, submit a ticket for adding to allowlist.
                     * 
                     */
                    bool GetEnableRouteVpcPublish() const;

                    /**
                     * 设置Vpc association with CCN route publish policy. true: enables cidr route publishing. false: enables subnet route publishing. default is subnet route publishing when creating a vpc. to select cidr route publishing, submit a ticket for adding to allowlist.
                     * @param _enableRouteVpcPublish Vpc association with CCN route publish policy. true: enables cidr route publishing. false: enables subnet route publishing. default is subnet route publishing when creating a vpc. to select cidr route publishing, submit a ticket for adding to allowlist.
                     * 
                     */
                    void SetEnableRouteVpcPublish(const bool& _enableRouteVpcPublish);

                    /**
                     * 判断参数 EnableRouteVpcPublish 是否已赋值
                     * @return EnableRouteVpcPublish 是否已赋值
                     * 
                     */
                    bool EnableRouteVpcPublishHasBeenSet() const;

                    /**
                     * 获取Returns the multi-operator IPv6 Cidr Block.
                     * @return Ipv6CidrBlockSet Returns the multi-operator IPv6 Cidr Block.
                     * 
                     */
                    std::vector<ISPIPv6CidrBlock> GetIpv6CidrBlockSet() const;

                    /**
                     * 设置Returns the multi-operator IPv6 Cidr Block.
                     * @param _ipv6CidrBlockSet Returns the multi-operator IPv6 Cidr Block.
                     * 
                     */
                    void SetIpv6CidrBlockSet(const std::vector<ISPIPv6CidrBlock>& _ipv6CidrBlockSet);

                    /**
                     * 判断参数 Ipv6CidrBlockSet 是否已赋值
                     * @return Ipv6CidrBlockSet 是否已赋值
                     * 
                     */
                    bool Ipv6CidrBlockSetHasBeenSet() const;

                private:

                    /**
                     * `VPC` name.
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * `VPC` instance `ID`, such as `vpc-azd4dt1c`.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * The `IPv4` `CIDR` of the `VPC`.
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * Whether it is the default `VPC`.
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * Whether multicast is enabled.
                     */
                    bool m_enableMulticast;
                    bool m_enableMulticastHasBeenSet;

                    /**
                     * Creation Time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * `DNS` list.
                     */
                    std::vector<std::string> m_dnsServerSet;
                    bool m_dnsServerSetHasBeenSet;

                    /**
                     * DHCP domain name option value.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * `DHCP` option set `ID`.
                     */
                    std::string m_dhcpOptionsId;
                    bool m_dhcpOptionsIdHasBeenSet;

                    /**
                     * Whether `DHCP` is enabled.
                     */
                    bool m_enableDhcp;
                    bool m_enableDhcpHasBeenSet;

                    /**
                     * The `IPv6` `CIDR` of the `VPC`.
                     */
                    std::string m_ipv6CidrBlock;
                    bool m_ipv6CidrBlockHasBeenSet;

                    /**
                     * Tag key-value pair
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * Auxiliary CIDR
                     */
                    std::vector<AssistantCidr> m_assistantCidrSet;
                    bool m_assistantCidrSetHasBeenSet;

                    /**
                     * Vpc association with CCN route publish policy. true: enables cidr route publishing. false: enables subnet route publishing. default is subnet route publishing when creating a vpc. to select cidr route publishing, submit a ticket for adding to allowlist.
                     */
                    bool m_enableRouteVpcPublish;
                    bool m_enableRouteVpcPublishHasBeenSet;

                    /**
                     * Returns the multi-operator IPv6 Cidr Block.
                     */
                    std::vector<ISPIPv6CidrBlock> m_ipv6CidrBlockSet;
                    bool m_ipv6CidrBlockSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_VPC_H_
