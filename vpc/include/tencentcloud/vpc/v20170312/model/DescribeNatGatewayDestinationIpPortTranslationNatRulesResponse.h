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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYDESTINATIONIPPORTTRANSLATIONNATRULESRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYDESTINATIONIPPORTTRANSLATIONNATRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/NatGatewayDestinationIpPortTranslationNatRule.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeNatGatewayDestinationIpPortTranslationNatRules response structure.
                */
                class DescribeNatGatewayDestinationIpPortTranslationNatRulesResponse : public AbstractModel
                {
                public:
                    DescribeNatGatewayDestinationIpPortTranslationNatRulesResponse();
                    ~DescribeNatGatewayDestinationIpPortTranslationNatRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The object array of port forwarding rules for the NAT gateway.
                     * @return NatGatewayDestinationIpPortTranslationNatRuleSet The object array of port forwarding rules for the NAT gateway.
                     * 
                     */
                    std::vector<NatGatewayDestinationIpPortTranslationNatRule> GetNatGatewayDestinationIpPortTranslationNatRuleSet() const;

                    /**
                     * 判断参数 NatGatewayDestinationIpPortTranslationNatRuleSet 是否已赋值
                     * @return NatGatewayDestinationIpPortTranslationNatRuleSet 是否已赋值
                     * 
                     */
                    bool NatGatewayDestinationIpPortTranslationNatRuleSetHasBeenSet() const;

                    /**
                     * 获取The number of eligible object arrays of NAT port forwarding rules.
                     * @return TotalCount The number of eligible object arrays of NAT port forwarding rules.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * The object array of port forwarding rules for the NAT gateway.
                     */
                    std::vector<NatGatewayDestinationIpPortTranslationNatRule> m_natGatewayDestinationIpPortTranslationNatRuleSet;
                    bool m_natGatewayDestinationIpPortTranslationNatRuleSetHasBeenSet;

                    /**
                     * The number of eligible object arrays of NAT port forwarding rules.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYDESTINATIONIPPORTTRANSLATIONNATRULESRESPONSE_H_
