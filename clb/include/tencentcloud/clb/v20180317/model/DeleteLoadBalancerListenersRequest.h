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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DELETELOADBALANCERLISTENERSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DELETELOADBALANCERLISTENERSREQUEST_H_

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
                * DeleteLoadBalancerListeners request structure.
                */
                class DeleteLoadBalancerListenersRequest : public AbstractModel
                {
                public:
                    DeleteLoadBalancerListenersRequest();
                    ~DeleteLoadBalancerListenersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the CLB instance. You can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to query the ID.
                     * @return LoadBalancerId ID of the CLB instance. You can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to query the ID.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置ID of the CLB instance. You can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to query the ID.
                     * @param _loadBalancerId ID of the CLB instance. You can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to query the ID.
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取Specifies the listener ID array to be deleted, with a maximum of 20 elements. if left blank, all listeners of the clb will be deleted. can be obtained through the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) api.
                     * @return ListenerIds Specifies the listener ID array to be deleted, with a maximum of 20 elements. if left blank, all listeners of the clb will be deleted. can be obtained through the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) api.
                     * 
                     */
                    std::vector<std::string> GetListenerIds() const;

                    /**
                     * 设置Specifies the listener ID array to be deleted, with a maximum of 20 elements. if left blank, all listeners of the clb will be deleted. can be obtained through the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) api.
                     * @param _listenerIds Specifies the listener ID array to be deleted, with a maximum of 20 elements. if left blank, all listeners of the clb will be deleted. can be obtained through the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) api.
                     * 
                     */
                    void SetListenerIds(const std::vector<std::string>& _listenerIds);

                    /**
                     * 判断参数 ListenerIds 是否已赋值
                     * @return ListenerIds 是否已赋值
                     * 
                     */
                    bool ListenerIdsHasBeenSet() const;

                private:

                    /**
                     * ID of the CLB instance. You can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to query the ID.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Specifies the listener ID array to be deleted, with a maximum of 20 elements. if left blank, all listeners of the clb will be deleted. can be obtained through the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) api.
                     */
                    std::vector<std::string> m_listenerIds;
                    bool m_listenerIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DELETELOADBALANCERLISTENERSREQUEST_H_
