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
                     * 获取CLB instance ID array to be deleted, which can be obtained by calling the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API. The array can include up to 20 elements.
                     * @return LoadBalancerIds CLB instance ID array to be deleted, which can be obtained by calling the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API. The array can include up to 20 elements.
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置CLB instance ID array to be deleted, which can be obtained by calling the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API. The array can include up to 20 elements.
                     * @param _loadBalancerIds CLB instance ID array to be deleted, which can be obtained by calling the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API. The array can include up to 20 elements.
                     * 
                     */
                    void SetLoadBalancerIds(const std::vector<std::string>& _loadBalancerIds);

                    /**
                     * 判断参数 LoadBalancerIds 是否已赋值
                     * @return LoadBalancerIds 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdsHasBeenSet() const;

                    /**
                     * 获取Whether to forcibly delete the CLB instance. True indicates forced deletion; False indicates non-forced deletion, and blocking verification is required.
The default value is False.
The deletion operation is blocked by default in the following cases. If you confirm forced deletion, the value of the forced verification parameter ForceDelete should be set to True.
1. The instance with 20 or more RS bound to the backend is deleted.
2. The instance with RS bound to the backend and the maximum peak inbound/outbound bandwidth exceeding 10 Mbps within 5 minutes is deleted.
3. Thirty or more instances are deleted within 5 minutes in a single region.
                     * @return ForceDelete Whether to forcibly delete the CLB instance. True indicates forced deletion; False indicates non-forced deletion, and blocking verification is required.
The default value is False.
The deletion operation is blocked by default in the following cases. If you confirm forced deletion, the value of the forced verification parameter ForceDelete should be set to True.
1. The instance with 20 or more RS bound to the backend is deleted.
2. The instance with RS bound to the backend and the maximum peak inbound/outbound bandwidth exceeding 10 Mbps within 5 minutes is deleted.
3. Thirty or more instances are deleted within 5 minutes in a single region.
                     * 
                     */
                    bool GetForceDelete() const;

                    /**
                     * 设置Whether to forcibly delete the CLB instance. True indicates forced deletion; False indicates non-forced deletion, and blocking verification is required.
The default value is False.
The deletion operation is blocked by default in the following cases. If you confirm forced deletion, the value of the forced verification parameter ForceDelete should be set to True.
1. The instance with 20 or more RS bound to the backend is deleted.
2. The instance with RS bound to the backend and the maximum peak inbound/outbound bandwidth exceeding 10 Mbps within 5 minutes is deleted.
3. Thirty or more instances are deleted within 5 minutes in a single region.
                     * @param _forceDelete Whether to forcibly delete the CLB instance. True indicates forced deletion; False indicates non-forced deletion, and blocking verification is required.
The default value is False.
The deletion operation is blocked by default in the following cases. If you confirm forced deletion, the value of the forced verification parameter ForceDelete should be set to True.
1. The instance with 20 or more RS bound to the backend is deleted.
2. The instance with RS bound to the backend and the maximum peak inbound/outbound bandwidth exceeding 10 Mbps within 5 minutes is deleted.
3. Thirty or more instances are deleted within 5 minutes in a single region.
                     * 
                     */
                    void SetForceDelete(const bool& _forceDelete);

                    /**
                     * 判断参数 ForceDelete 是否已赋值
                     * @return ForceDelete 是否已赋值
                     * 
                     */
                    bool ForceDeleteHasBeenSet() const;

                private:

                    /**
                     * CLB instance ID array to be deleted, which can be obtained by calling the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API. The array can include up to 20 elements.
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                    /**
                     * Whether to forcibly delete the CLB instance. True indicates forced deletion; False indicates non-forced deletion, and blocking verification is required.
The default value is False.
The deletion operation is blocked by default in the following cases. If you confirm forced deletion, the value of the forced verification parameter ForceDelete should be set to True.
1. The instance with 20 or more RS bound to the backend is deleted.
2. The instance with RS bound to the backend and the maximum peak inbound/outbound bandwidth exceeding 10 Mbps within 5 minutes is deleted.
3. Thirty or more instances are deleted within 5 minutes in a single region.
                     */
                    bool m_forceDelete;
                    bool m_forceDeleteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DELETELOADBALANCERREQUEST_H_
