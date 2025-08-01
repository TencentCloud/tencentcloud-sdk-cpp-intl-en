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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATENATGATEWAYSOURCEIPTRANSLATIONNATRULEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATENATGATEWAYSOURCEIPTRANSLATIONNATRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/SourceIpTranslationNatRule.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateNatGatewaySourceIpTranslationNatRule request structure.
                */
                class CreateNatGatewaySourceIpTranslationNatRuleRequest : public AbstractModel
                {
                public:
                    CreateNatGatewaySourceIpTranslationNatRuleRequest();
                    ~CreateNatGatewaySourceIpTranslationNatRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of the NAT Gateway, such as `nat-df45454`
                     * @return NatGatewayId The ID of the NAT Gateway, such as `nat-df45454`
                     * 
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置The ID of the NAT Gateway, such as `nat-df45454`
                     * @param _natGatewayId The ID of the NAT Gateway, such as `nat-df45454`
                     * 
                     */
                    void SetNatGatewayId(const std::string& _natGatewayId);

                    /**
                     * 判断参数 NatGatewayId 是否已赋值
                     * @return NatGatewayId 是否已赋值
                     * 
                     */
                    bool NatGatewayIdHasBeenSet() const;

                    /**
                     * 获取The SNAT forwarding rule of the NAT Gateway
                     * @return SourceIpTranslationNatRules The SNAT forwarding rule of the NAT Gateway
                     * 
                     */
                    std::vector<SourceIpTranslationNatRule> GetSourceIpTranslationNatRules() const;

                    /**
                     * 设置The SNAT forwarding rule of the NAT Gateway
                     * @param _sourceIpTranslationNatRules The SNAT forwarding rule of the NAT Gateway
                     * 
                     */
                    void SetSourceIpTranslationNatRules(const std::vector<SourceIpTranslationNatRule>& _sourceIpTranslationNatRules);

                    /**
                     * 判断参数 SourceIpTranslationNatRules 是否已赋值
                     * @return SourceIpTranslationNatRules 是否已赋值
                     * 
                     */
                    bool SourceIpTranslationNatRulesHasBeenSet() const;

                private:

                    /**
                     * The ID of the NAT Gateway, such as `nat-df45454`
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * The SNAT forwarding rule of the NAT Gateway
                     */
                    std::vector<SourceIpTranslationNatRule> m_sourceIpTranslationNatRules;
                    bool m_sourceIpTranslationNatRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATENATGATEWAYSOURCEIPTRANSLATIONNATRULEREQUEST_H_
