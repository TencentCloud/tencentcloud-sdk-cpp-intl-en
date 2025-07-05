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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_CREATEVPCREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_CREATEVPCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Tag.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
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
                     * 获取VPC name, which can contain up to 60 bytes.
                     * @return VpcName VPC name, which can contain up to 60 bytes.
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC name, which can contain up to 60 bytes.
                     * @param _vpcName VPC name, which can contain up to 60 bytes.
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
                     * 获取VPC CIDR block, which must fall within the following private network IP ranges: 10.*.0.0/16, 172.[16-31].0.0/16, and 192.168.0.0/16.
                     * @return CidrBlock VPC CIDR block, which must fall within the following private network IP ranges: 10.*.0.0/16, 172.[16-31].0.0/16, and 192.168.0.0/16.
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置VPC CIDR block, which must fall within the following private network IP ranges: 10.*.0.0/16, 172.[16-31].0.0/16, and 192.168.0.0/16.
                     * @param _cidrBlock VPC CIDR block, which must fall within the following private network IP ranges: 10.*.0.0/16, 172.[16-31].0.0/16, and 192.168.0.0/16.
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
                     * 获取ECM region
                     * @return EcmRegion ECM region
                     * 
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置ECM region
                     * @param _ecmRegion ECM region
                     * 
                     */
                    void SetEcmRegion(const std::string& _ecmRegion);

                    /**
                     * 判断参数 EcmRegion 是否已赋值
                     * @return EcmRegion 是否已赋值
                     * 
                     */
                    bool EcmRegionHasBeenSet() const;

                    /**
                     * 获取Whether multicast is enabled. true: enabled; false: disabled. This parameter is not supported currently
                     * @return EnableMulticast Whether multicast is enabled. true: enabled; false: disabled. This parameter is not supported currently
                     * 
                     */
                    std::string GetEnableMulticast() const;

                    /**
                     * 设置Whether multicast is enabled. true: enabled; false: disabled. This parameter is not supported currently
                     * @param _enableMulticast Whether multicast is enabled. true: enabled; false: disabled. This parameter is not supported currently
                     * 
                     */
                    void SetEnableMulticast(const std::string& _enableMulticast);

                    /**
                     * 判断参数 EnableMulticast 是否已赋值
                     * @return EnableMulticast 是否已赋值
                     * 
                     */
                    bool EnableMulticastHasBeenSet() const;

                    /**
                     * 获取DNS address (not supported currently). Up to 4 addresses can be supported.
                     * @return DnsServers DNS address (not supported currently). Up to 4 addresses can be supported.
                     * 
                     */
                    std::vector<std::string> GetDnsServers() const;

                    /**
                     * 设置DNS address (not supported currently). Up to 4 addresses can be supported.
                     * @param _dnsServers DNS address (not supported currently). Up to 4 addresses can be supported.
                     * 
                     */
                    void SetDnsServers(const std::vector<std::string>& _dnsServers);

                    /**
                     * 判断参数 DnsServers 是否已赋值
                     * @return DnsServers 是否已赋值
                     * 
                     */
                    bool DnsServersHasBeenSet() const;

                    /**
                     * 获取Domain name. This parameter is not supported currently
                     * @return DomainName Domain name. This parameter is not supported currently
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Domain name. This parameter is not supported currently
                     * @param _domainName Domain name. This parameter is not supported currently
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
                     * 获取List of bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * @return Tags List of bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置List of bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * @param _tags List of bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return Description Description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
                     * @param _description Description
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
                     * VPC name, which can contain up to 60 bytes.
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * VPC CIDR block, which must fall within the following private network IP ranges: 10.*.0.0/16, 172.[16-31].0.0/16, and 192.168.0.0/16.
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * ECM region
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                    /**
                     * Whether multicast is enabled. true: enabled; false: disabled. This parameter is not supported currently
                     */
                    std::string m_enableMulticast;
                    bool m_enableMulticastHasBeenSet;

                    /**
                     * DNS address (not supported currently). Up to 4 addresses can be supported.
                     */
                    std::vector<std::string> m_dnsServers;
                    bool m_dnsServersHasBeenSet;

                    /**
                     * Domain name. This parameter is not supported currently
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * List of bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_CREATEVPCREQUEST_H_
