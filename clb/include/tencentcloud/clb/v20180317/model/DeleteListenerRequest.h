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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DELETELISTENERREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DELETELISTENERREQUEST_H_

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
                * DeleteListener request structure.
                */
                class DeleteListenerRequest : public AbstractModel
                {
                public:
                    DeleteListenerRequest();
                    ~DeleteListenerRequest() = default;
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
                     * 获取The listener ID to be deleted, can be accessed through the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) api.
                     * @return ListenerId The listener ID to be deleted, can be accessed through the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置The listener ID to be deleted, can be accessed through the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) api.
                     * @param _listenerId The listener ID to be deleted, can be accessed through the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) api.
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                private:

                    /**
                     * ID of the CLB instance. You can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to query the ID.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * The listener ID to be deleted, can be accessed through the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) api.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DELETELISTENERREQUEST_H_
