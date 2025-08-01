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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_INQUIREPRICECREATEGATEWAYLOADBALANCERRESPONSE_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_INQUIREPRICECREATEGATEWAYLOADBALANCERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gwlb/v20240906/model/Price.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            namespace Model
            {
                /**
                * InquirePriceCreateGatewayLoadBalancer response structure.
                */
                class InquirePriceCreateGatewayLoadBalancerResponse : public AbstractModel
                {
                public:
                    InquirePriceCreateGatewayLoadBalancerResponse();
                    ~InquirePriceCreateGatewayLoadBalancerResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取This parameter represents the corresponding price.
                     * @return Price This parameter represents the corresponding price.
                     * 
                     */
                    Price GetPrice() const;

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                private:

                    /**
                     * This parameter represents the corresponding price.
                     */
                    Price m_price;
                    bool m_priceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_INQUIREPRICECREATEGATEWAYLOADBALANCERRESPONSE_H_
