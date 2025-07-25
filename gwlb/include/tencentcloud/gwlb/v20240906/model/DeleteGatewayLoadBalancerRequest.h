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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_DELETEGATEWAYLOADBALANCERREQUEST_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_DELETEGATEWAYLOADBALANCERREQUEST_H_

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
                * DeleteGatewayLoadBalancer request structure.
                */
                class DeleteGatewayLoadBalancerRequest : public AbstractModel
                {
                public:
                    DeleteGatewayLoadBalancerRequest();
                    ~DeleteGatewayLoadBalancerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of GWLB instance IDs to be deleted, with the array size up to 20.
                     * @return LoadBalancerIds Array of GWLB instance IDs to be deleted, with the array size up to 20.
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置Array of GWLB instance IDs to be deleted, with the array size up to 20.
                     * @param _loadBalancerIds Array of GWLB instance IDs to be deleted, with the array size up to 20.
                     * 
                     */
                    void SetLoadBalancerIds(const std::vector<std::string>& _loadBalancerIds);

                    /**
                     * 判断参数 LoadBalancerIds 是否已赋值
                     * @return LoadBalancerIds 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdsHasBeenSet() const;

                private:

                    /**
                     * Array of GWLB instance IDs to be deleted, with the array size up to 20.
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_DELETEGATEWAYLOADBALANCERREQUEST_H_
