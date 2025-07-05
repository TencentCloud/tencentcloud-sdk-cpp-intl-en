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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_INQUIREPRICECREATEGATEWAYLOADBALANCERREQUEST_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_INQUIREPRICECREATEGATEWAYLOADBALANCERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            namespace Model
            {
                /**
                * InquirePriceCreateGatewayLoadBalancer request structure.
                */
                class InquirePriceCreateGatewayLoadBalancerRequest : public AbstractModel
                {
                public:
                    InquirePriceCreateGatewayLoadBalancerRequest();
                    ~InquirePriceCreateGatewayLoadBalancerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of GWLB instances for inquiry, with a default of 1
                     * @return GoodsNum Number of GWLB instances for inquiry, with a default of 1
                     * 
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置Number of GWLB instances for inquiry, with a default of 1
                     * @param _goodsNum Number of GWLB instances for inquiry, with a default of 1
                     * 
                     */
                    void SetGoodsNum(const uint64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                private:

                    /**
                     * Number of GWLB instances for inquiry, with a default of 1
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_INQUIREPRICECREATEGATEWAYLOADBALANCERREQUEST_H_
