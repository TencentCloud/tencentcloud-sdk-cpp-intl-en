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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_CREATEGATEWAYLOADBALANCERRESPONSE_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_CREATEGATEWAYLOADBALANCERRESPONSE_H_

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
                * CreateGatewayLoadBalancer response structure.
                */
                class CreateGatewayLoadBalancerResponse : public AbstractModel
                {
                public:
                    CreateGatewayLoadBalancerResponse();
                    ~CreateGatewayLoadBalancerResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of unique GWLB instance IDs.In certain scenarios, for example, when there is a delay in creation, this field may return null; at this time, you can query the created resource ID through the DescribeTaskStatus API using the RequestId or DealName parameter returned by the API.Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return LoadBalancerIds Array of unique GWLB instance IDs.In certain scenarios, for example, when there is a delay in creation, this field may return null; at this time, you can query the created resource ID through the DescribeTaskStatus API using the RequestId or DealName parameter returned by the API.Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 判断参数 LoadBalancerIds 是否已赋值
                     * @return LoadBalancerIds 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdsHasBeenSet() const;

                    /**
                     * 获取Order number.

Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DealName Order number.

Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDealName() const;

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     * 
                     */
                    bool DealNameHasBeenSet() const;

                private:

                    /**
                     * Array of unique GWLB instance IDs.In certain scenarios, for example, when there is a delay in creation, this field may return null; at this time, you can query the created resource ID through the DescribeTaskStatus API using the RequestId or DealName parameter returned by the API.Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                    /**
                     * Order number.

Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_CREATEGATEWAYLOADBALANCERRESPONSE_H_
