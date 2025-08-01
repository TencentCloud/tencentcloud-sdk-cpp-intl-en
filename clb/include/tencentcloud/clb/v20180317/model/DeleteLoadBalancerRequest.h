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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DELETELOADBALANCERREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DELETELOADBALANCERREQUEST_H_

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
                * DeleteLoadBalancer request structure.
                */
                class DeleteLoadBalancerRequest : public AbstractModel
                {
                public:
                    DeleteLoadBalancerRequest();
                    ~DeleteLoadBalancerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of IDs of the CLB instances to be deleted. Array length limit: 20.
                     * @return LoadBalancerIds Array of IDs of the CLB instances to be deleted. Array length limit: 20.
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置Array of IDs of the CLB instances to be deleted. Array length limit: 20.
                     * @param _loadBalancerIds Array of IDs of the CLB instances to be deleted. Array length limit: 20.
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
                     * Array of IDs of the CLB instances to be deleted. Array length limit: 20.
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DELETELOADBALANCERREQUEST_H_
