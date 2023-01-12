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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESECURITYGROUPPOLICIESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESECURITYGROUPPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeSecurityGroupPolicies request structure.
                */
                class DescribeSecurityGroupPoliciesRequest : public AbstractModel
                {
                public:
                    DescribeSecurityGroupPoliciesRequest();
                    ~DescribeSecurityGroupPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The security group instance ID, such as `sg-33ocnj9n`. It can be obtained through DescribeSecurityGroups.
                     * @return SecurityGroupId The security group instance ID, such as `sg-33ocnj9n`. It can be obtained through DescribeSecurityGroups.
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置The security group instance ID, such as `sg-33ocnj9n`. It can be obtained through DescribeSecurityGroups.
                     * @param SecurityGroupId The security group instance ID, such as `sg-33ocnj9n`. It can be obtained through DescribeSecurityGroups.
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取Filters
<li>`security-group-id` - String - Security group ID in the rule.</li>
<li>`ip` - String - IP. IPV4 and IPV6 fuzzy matching is supported.</li>
<li>`address-module` - String - IP address or address group template ID.</li>
<li>`service-module` - String - Protocol port or port group template ID.</li>
<li>`protocol-type` - String - Protocol supported by the security group policy. Valid values: `TCP`, `UDP`, `ICMP`, `ICMPV6`, `GRE`, `ALL`.</li>
<li>`port` - String - Optional - Port. Fuzzy matching is supported. Query all ports when the protocol value is `ALL`.</li>
<li>`poly` - String - Policy type. Valid values: `ALL`, `ACCEPT` and `DROP`.</li>
<li>`direction` - String - Direction of the rule. Valid values: `ALL`, `INBOUND` and `OUTBOUND`.</li>
<li>`description` - String - Policy description. Fuzzy matching is supported.</li>
                     * @return Filters Filters
<li>`security-group-id` - String - Security group ID in the rule.</li>
<li>`ip` - String - IP. IPV4 and IPV6 fuzzy matching is supported.</li>
<li>`address-module` - String - IP address or address group template ID.</li>
<li>`service-module` - String - Protocol port or port group template ID.</li>
<li>`protocol-type` - String - Protocol supported by the security group policy. Valid values: `TCP`, `UDP`, `ICMP`, `ICMPV6`, `GRE`, `ALL`.</li>
<li>`port` - String - Optional - Port. Fuzzy matching is supported. Query all ports when the protocol value is `ALL`.</li>
<li>`poly` - String - Policy type. Valid values: `ALL`, `ACCEPT` and `DROP`.</li>
<li>`direction` - String - Direction of the rule. Valid values: `ALL`, `INBOUND` and `OUTBOUND`.</li>
<li>`description` - String - Policy description. Fuzzy matching is supported.</li>
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filters
<li>`security-group-id` - String - Security group ID in the rule.</li>
<li>`ip` - String - IP. IPV4 and IPV6 fuzzy matching is supported.</li>
<li>`address-module` - String - IP address or address group template ID.</li>
<li>`service-module` - String - Protocol port or port group template ID.</li>
<li>`protocol-type` - String - Protocol supported by the security group policy. Valid values: `TCP`, `UDP`, `ICMP`, `ICMPV6`, `GRE`, `ALL`.</li>
<li>`port` - String - Optional - Port. Fuzzy matching is supported. Query all ports when the protocol value is `ALL`.</li>
<li>`poly` - String - Policy type. Valid values: `ALL`, `ACCEPT` and `DROP`.</li>
<li>`direction` - String - Direction of the rule. Valid values: `ALL`, `INBOUND` and `OUTBOUND`.</li>
<li>`description` - String - Policy description. Fuzzy matching is supported.</li>
                     * @param Filters Filters
<li>`security-group-id` - String - Security group ID in the rule.</li>
<li>`ip` - String - IP. IPV4 and IPV6 fuzzy matching is supported.</li>
<li>`address-module` - String - IP address or address group template ID.</li>
<li>`service-module` - String - Protocol port or port group template ID.</li>
<li>`protocol-type` - String - Protocol supported by the security group policy. Valid values: `TCP`, `UDP`, `ICMP`, `ICMPV6`, `GRE`, `ALL`.</li>
<li>`port` - String - Optional - Port. Fuzzy matching is supported. Query all ports when the protocol value is `ALL`.</li>
<li>`poly` - String - Policy type. Valid values: `ALL`, `ACCEPT` and `DROP`.</li>
<li>`direction` - String - Direction of the rule. Valid values: `ALL`, `INBOUND` and `OUTBOUND`.</li>
<li>`description` - String - Policy description. Fuzzy matching is supported.</li>
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * The security group instance ID, such as `sg-33ocnj9n`. It can be obtained through DescribeSecurityGroups.
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * Filters
<li>`security-group-id` - String - Security group ID in the rule.</li>
<li>`ip` - String - IP. IPV4 and IPV6 fuzzy matching is supported.</li>
<li>`address-module` - String - IP address or address group template ID.</li>
<li>`service-module` - String - Protocol port or port group template ID.</li>
<li>`protocol-type` - String - Protocol supported by the security group policy. Valid values: `TCP`, `UDP`, `ICMP`, `ICMPV6`, `GRE`, `ALL`.</li>
<li>`port` - String - Optional - Port. Fuzzy matching is supported. Query all ports when the protocol value is `ALL`.</li>
<li>`poly` - String - Policy type. Valid values: `ALL`, `ACCEPT` and `DROP`.</li>
<li>`direction` - String - Direction of the rule. Valid values: `ALL`, `INBOUND` and `OUTBOUND`.</li>
<li>`description` - String - Policy description. Fuzzy matching is supported.</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESECURITYGROUPPOLICIESREQUEST_H_
