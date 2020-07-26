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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYDESTINATIONIPPORTTRANSLATIONNATRULESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYDESTINATIONIPPORTTRANSLATIONNATRULESREQUEST_H_

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
                * DescribeNatGatewayDestinationIpPortTranslationNatRules request structure.
                */
                class DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest : public AbstractModel
                {
                public:
                    DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest();
                    ~DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取NAT gateway ID.
                     * @return NatGatewayIds NAT gateway ID.
                     */
                    std::vector<std::string> GetNatGatewayIds() const;

                    /**
                     * 设置NAT gateway ID.
                     * @param NatGatewayIds NAT gateway ID.
                     */
                    void SetNatGatewayIds(const std::vector<std::string>& _natGatewayIds);

                    /**
                     * 判断参数 NatGatewayIds 是否已赋值
                     * @return NatGatewayIds 是否已赋值
                     */
                    bool NatGatewayIdsHasBeenSet() const;

                    /**
                     * 获取Filter conditions:
`NatGatewayIds` and `Filters` cannot be specified at the same time.
<li> nat-gateway-id, the NAT gateway ID, such as `nat-0yi4hekt`.</li>
<li> vpc-id, the VPC ID, such as `vpc-0yi4hekt`.</li>
<li> public-ip-address, the EIP, such as `139.199.232.238`.</li>
<li>public-port, the public network port.</li>
<li>private-ip-address, the private IP, such as `10.0.0.1`.</li>
<li>private-port, the private network port.</li>
<li>description, the rule description.</li>
                     * @return Filters Filter conditions:
`NatGatewayIds` and `Filters` cannot be specified at the same time.
<li> nat-gateway-id, the NAT gateway ID, such as `nat-0yi4hekt`.</li>
<li> vpc-id, the VPC ID, such as `vpc-0yi4hekt`.</li>
<li> public-ip-address, the EIP, such as `139.199.232.238`.</li>
<li>public-port, the public network port.</li>
<li>private-ip-address, the private IP, such as `10.0.0.1`.</li>
<li>private-port, the private network port.</li>
<li>description, the rule description.</li>
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter conditions:
`NatGatewayIds` and `Filters` cannot be specified at the same time.
<li> nat-gateway-id, the NAT gateway ID, such as `nat-0yi4hekt`.</li>
<li> vpc-id, the VPC ID, such as `vpc-0yi4hekt`.</li>
<li> public-ip-address, the EIP, such as `139.199.232.238`.</li>
<li>public-port, the public network port.</li>
<li>private-ip-address, the private IP, such as `10.0.0.1`.</li>
<li>private-port, the private network port.</li>
<li>description, the rule description.</li>
                     * @param Filters Filter conditions:
`NatGatewayIds` and `Filters` cannot be specified at the same time.
<li> nat-gateway-id, the NAT gateway ID, such as `nat-0yi4hekt`.</li>
<li> vpc-id, the VPC ID, such as `vpc-0yi4hekt`.</li>
<li> public-ip-address, the EIP, such as `139.199.232.238`.</li>
<li>public-port, the public network port.</li>
<li>private-ip-address, the private IP, such as `10.0.0.1`.</li>
<li>private-port, the private network port.</li>
<li>description, the rule description.</li>
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Offset. The default value is 0.
                     * @return Offset Offset. The default value is 0.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. The default value is 0.
                     * @param Offset Offset. The default value is 0.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of values to be returned. The default value is 20. Maximum is 100.
                     * @return Limit Number of values to be returned. The default value is 20. Maximum is 100.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of values to be returned. The default value is 20. Maximum is 100.
                     * @param Limit Number of values to be returned. The default value is 20. Maximum is 100.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * NAT gateway ID.
                     */
                    std::vector<std::string> m_natGatewayIds;
                    bool m_natGatewayIdsHasBeenSet;

                    /**
                     * Filter conditions:
`NatGatewayIds` and `Filters` cannot be specified at the same time.
<li> nat-gateway-id, the NAT gateway ID, such as `nat-0yi4hekt`.</li>
<li> vpc-id, the VPC ID, such as `vpc-0yi4hekt`.</li>
<li> public-ip-address, the EIP, such as `139.199.232.238`.</li>
<li>public-port, the public network port.</li>
<li>private-ip-address, the private IP, such as `10.0.0.1`.</li>
<li>private-port, the private network port.</li>
<li>description, the rule description.</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. The default value is 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of values to be returned. The default value is 20. Maximum is 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYDESTINATIONIPPORTTRANSLATIONNATRULESREQUEST_H_
