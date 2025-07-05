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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNATGATEWAYSOURCEIPTRANSLATIONNATRULEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNATGATEWAYSOURCEIPTRANSLATIONNATRULEREQUEST_H_

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
                * ModifyNatGatewaySourceIpTranslationNatRule request structure.
                */
                class ModifyNatGatewaySourceIpTranslationNatRuleRequest : public AbstractModel
                {
                public:
                    ModifyNatGatewaySourceIpTranslationNatRuleRequest();
                    ~ModifyNatGatewaySourceIpTranslationNatRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of the NAT Gateway, such as `nat-df453454`
                     * @return NatGatewayId The ID of the NAT Gateway, such as `nat-df453454`
                     * 
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置The ID of the NAT Gateway, such as `nat-df453454`
                     * @param _natGatewayId The ID of the NAT Gateway, such as `nat-df453454`
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
                     * @return SourceIpTranslationNatRule The SNAT forwarding rule of the NAT Gateway
                     * 
                     */
                    SourceIpTranslationNatRule GetSourceIpTranslationNatRule() const;

                    /**
                     * 设置The SNAT forwarding rule of the NAT Gateway
                     * @param _sourceIpTranslationNatRule The SNAT forwarding rule of the NAT Gateway
                     * 
                     */
                    void SetSourceIpTranslationNatRule(const SourceIpTranslationNatRule& _sourceIpTranslationNatRule);

                    /**
                     * 判断参数 SourceIpTranslationNatRule 是否已赋值
                     * @return SourceIpTranslationNatRule 是否已赋值
                     * 
                     */
                    bool SourceIpTranslationNatRuleHasBeenSet() const;

                private:

                    /**
                     * The ID of the NAT Gateway, such as `nat-df453454`
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * The SNAT forwarding rule of the NAT Gateway
                     */
                    SourceIpTranslationNatRule m_sourceIpTranslationNatRule;
                    bool m_sourceIpTranslationNatRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNATGATEWAYSOURCEIPTRANSLATIONNATRULEREQUEST_H_
