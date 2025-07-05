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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_VPCINFO_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_VPCINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Tag.h>
#include <tencentcloud/ecm/v20190719/model/AssistantCidr.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * VPC object.
                */
                class VpcInfo : public AbstractModel
                {
                public:
                    VpcInfo();
                    ~VpcInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VPC name.
                     * @return VpcName VPC name.
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC name.
                     * @param _vpcName VPC name.
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
                     * 获取VPC instance ID, such as `vpc-azd4dt1c`.
                     * @return VpcId VPC instance ID, such as `vpc-azd4dt1c`.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC instance ID, such as `vpc-azd4dt1c`.
                     * @param _vpcId VPC instance ID, such as `vpc-azd4dt1c`.
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
                     * 获取IPv4 CIDR block of the VPC.
                     * @return CidrBlock IPv4 CIDR block of the VPC.
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置IPv4 CIDR block of the VPC.
                     * @param _cidrBlock IPv4 CIDR block of the VPC.
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
                     * 获取Whether it is the default VPC.
                     * @return IsDefault Whether it is the default VPC.
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置Whether it is the default VPC.
                     * @param _isDefault Whether it is the default VPC.
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
                     * 获取Whether to enable multicast.
                     * @return EnableMulticast Whether to enable multicast.
                     * 
                     */
                    bool GetEnableMulticast() const;

                    /**
                     * 设置Whether to enable multicast.
                     * @param _enableMulticast Whether to enable multicast.
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
                     * 获取Creation time.
                     * @return CreatedTime Creation time.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createdTime Creation time.
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
                     * 获取List of DNS servers.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DnsServerSet List of DNS servers.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetDnsServerSet() const;

                    /**
                     * 设置List of DNS servers.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _dnsServerSet List of DNS servers.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取DHCP domain option value.
                     * @return DomainName DHCP domain option value.
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置DHCP domain option value.
                     * @param _domainName DHCP domain option value.
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
                     * 获取DHCP option set ID.
                     * @return DhcpOptionsId DHCP option set ID.
                     * 
                     */
                    std::string GetDhcpOptionsId() const;

                    /**
                     * 设置DHCP option set ID.
                     * @param _dhcpOptionsId DHCP option set ID.
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
                     * 获取Whether to enable DHCP.
                     * @return EnableDhcp Whether to enable DHCP.
                     * 
                     */
                    bool GetEnableDhcp() const;

                    /**
                     * 设置Whether to enable DHCP.
                     * @param _enableDhcp Whether to enable DHCP.
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
                     * 获取IPv6 CIDR block of the VPC.
                     * @return Ipv6CidrBlock IPv6 CIDR block of the VPC.
                     * 
                     */
                    std::string GetIpv6CidrBlock() const;

                    /**
                     * 设置IPv6 CIDR block of the VPC.
                     * @param _ipv6CidrBlock IPv6 CIDR block of the VPC.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TagSet Tag key-value pair
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置Tag key-value pair
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _tagSet Tag key-value pair
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Secondary CIDR block
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AssistantCidrSet Secondary CIDR block
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AssistantCidr> GetAssistantCidrSet() const;

                    /**
                     * 设置Secondary CIDR block
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _assistantCidrSet Secondary CIDR block
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Region
                     * @return Region Region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
                     * @param _region Region
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

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

                    /**
                     * 获取Region name
                     * @return RegionName Region name
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Region name
                     * @param _regionName Region name
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取Number of included subnets
                     * @return SubnetCount Number of included subnets
                     * 
                     */
                    uint64_t GetSubnetCount() const;

                    /**
                     * 设置Number of included subnets
                     * @param _subnetCount Number of included subnets
                     * 
                     */
                    void SetSubnetCount(const uint64_t& _subnetCount);

                    /**
                     * 判断参数 SubnetCount 是否已赋值
                     * @return SubnetCount 是否已赋值
                     * 
                     */
                    bool SubnetCountHasBeenSet() const;

                    /**
                     * 获取Number of included instances
                     * @return InstanceCount Number of included instances
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置Number of included instances
                     * @param _instanceCount Number of included instances
                     * 
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                private:

                    /**
                     * VPC name.
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * VPC instance ID, such as `vpc-azd4dt1c`.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * IPv4 CIDR block of the VPC.
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * Whether it is the default VPC.
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * Whether to enable multicast.
                     */
                    bool m_enableMulticast;
                    bool m_enableMulticastHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * List of DNS servers.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_dnsServerSet;
                    bool m_dnsServerSetHasBeenSet;

                    /**
                     * DHCP domain option value.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * DHCP option set ID.
                     */
                    std::string m_dhcpOptionsId;
                    bool m_dhcpOptionsIdHasBeenSet;

                    /**
                     * Whether to enable DHCP.
                     */
                    bool m_enableDhcp;
                    bool m_enableDhcpHasBeenSet;

                    /**
                     * IPv6 CIDR block of the VPC.
                     */
                    std::string m_ipv6CidrBlock;
                    bool m_ipv6CidrBlockHasBeenSet;

                    /**
                     * Tag key-value pair
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * Secondary CIDR block
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AssistantCidr> m_assistantCidrSet;
                    bool m_assistantCidrSetHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Region name
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * Number of included subnets
                     */
                    uint64_t m_subnetCount;
                    bool m_subnetCountHasBeenSet;

                    /**
                     * Number of included instances
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_VPCINFO_H_
