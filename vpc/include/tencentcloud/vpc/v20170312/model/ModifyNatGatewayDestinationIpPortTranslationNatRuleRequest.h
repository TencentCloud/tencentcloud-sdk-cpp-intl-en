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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNATGATEWAYDESTINATIONIPPORTTRANSLATIONNATRULEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNATGATEWAYDESTINATIONIPPORTTRANSLATIONNATRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/DestinationIpPortTranslationNatRule.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyNatGatewayDestinationIpPortTranslationNatRule request structure.
                */
                class ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest : public AbstractModel
                {
                public:
                    ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest();
                    ~ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of the NAT gateway, such as `nat-df45454`.
                     * @return NatGatewayId The ID of the NAT gateway, such as `nat-df45454`.
                     * 
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置The ID of the NAT gateway, such as `nat-df45454`.
                     * @param _natGatewayId The ID of the NAT gateway, such as `nat-df45454`.
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
                     * 获取The port forwarding rule of the source NAT gateway.
                     * @return SourceNatRule The port forwarding rule of the source NAT gateway.
                     * 
                     */
                    DestinationIpPortTranslationNatRule GetSourceNatRule() const;

                    /**
                     * 设置The port forwarding rule of the source NAT gateway.
                     * @param _sourceNatRule The port forwarding rule of the source NAT gateway.
                     * 
                     */
                    void SetSourceNatRule(const DestinationIpPortTranslationNatRule& _sourceNatRule);

                    /**
                     * 判断参数 SourceNatRule 是否已赋值
                     * @return SourceNatRule 是否已赋值
                     * 
                     */
                    bool SourceNatRuleHasBeenSet() const;

                    /**
                     * 获取The port forwarding rule of the destination NAT gateway.
                     * @return DestinationNatRule The port forwarding rule of the destination NAT gateway.
                     * 
                     */
                    DestinationIpPortTranslationNatRule GetDestinationNatRule() const;

                    /**
                     * 设置The port forwarding rule of the destination NAT gateway.
                     * @param _destinationNatRule The port forwarding rule of the destination NAT gateway.
                     * 
                     */
                    void SetDestinationNatRule(const DestinationIpPortTranslationNatRule& _destinationNatRule);

                    /**
                     * 判断参数 DestinationNatRule 是否已赋值
                     * @return DestinationNatRule 是否已赋值
                     * 
                     */
                    bool DestinationNatRuleHasBeenSet() const;

                private:

                    /**
                     * The ID of the NAT gateway, such as `nat-df45454`.
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * The port forwarding rule of the source NAT gateway.
                     */
                    DestinationIpPortTranslationNatRule m_sourceNatRule;
                    bool m_sourceNatRuleHasBeenSet;

                    /**
                     * The port forwarding rule of the destination NAT gateway.
                     */
                    DestinationIpPortTranslationNatRule m_destinationNatRule;
                    bool m_destinationNatRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNATGATEWAYDESTINATIONIPPORTTRANSLATIONNATRULEREQUEST_H_
