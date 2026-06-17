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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CREATELOADBALANCERRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CREATELOADBALANCERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * CreateLoadBalancer response structure.
                */
                class CreateLoadBalancerResponse : public AbstractModel
                {
                public:
                    CreateLoadBalancerResponse();
                    ~CreateLoadBalancerResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>An array consisting of the unique IDs of Cloud Load Balancer instances.<br>In certain scenarios, such as delay in creation, this field may return null. At this point, you can query the created resource ID through the DescribeTaskStatus API using the RequestId or DealName parameter returned by the API.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LoadBalancerIds <p>An array consisting of the unique IDs of Cloud Load Balancer instances.<br>In certain scenarios, such as delay in creation, this field may return null. At this point, you can query the created resource ID through the DescribeTaskStatus API using the RequestId or DealName parameter returned by the API.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Order number.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DealName <p>Order number.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * <p>An array consisting of the unique IDs of Cloud Load Balancer instances.<br>In certain scenarios, such as delay in creation, this field may return null. At this point, you can query the created resource ID through the DescribeTaskStatus API using the RequestId or DealName parameter returned by the API.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                    /**
                     * <p>Order number.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREATELOADBALANCERRESPONSE_H_
