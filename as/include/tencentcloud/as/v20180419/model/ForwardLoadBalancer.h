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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_FORWARDLOADBALANCER_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_FORWARDLOADBALANCER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/TargetAttribute.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * Application load balancer
                */
                class ForwardLoadBalancer : public AbstractModel
                {
                public:
                    ForwardLoadBalancer();
                    ~ForwardLoadBalancer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the load balancer. this parameter is required as an input parameter. you can obtain it through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     * @return LoadBalancerId ID of the load balancer. this parameter is required as an input parameter. you can obtain it through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置ID of the load balancer. this parameter is required as an input parameter. you can obtain it through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     * @param _loadBalancerId ID of the load balancer. this parameter is required as an input parameter. you can obtain it through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
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
                     * 获取CLB listener ID. as an input parameter, this parameter is required. you can obtain it through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     * @return ListenerId CLB listener ID. as an input parameter, this parameter is required. you can obtain it through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置CLB listener ID. as an input parameter, this parameter is required. you can obtain it through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     * @param _listenerId CLB listener ID. as an input parameter, this parameter is required. you can obtain it through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取Target rule attribute list. as an input parameter, this parameter is required.
                     * @return TargetAttributes Target rule attribute list. as an input parameter, this parameter is required.
                     * 
                     */
                    std::vector<TargetAttribute> GetTargetAttributes() const;

                    /**
                     * 设置Target rule attribute list. as an input parameter, this parameter is required.
                     * @param _targetAttributes Target rule attribute list. as an input parameter, this parameter is required.
                     * 
                     */
                    void SetTargetAttributes(const std::vector<TargetAttribute>& _targetAttributes);

                    /**
                     * 判断参数 TargetAttributes 是否已赋值
                     * @return TargetAttributes 是否已赋值
                     * 
                     */
                    bool TargetAttributesHasBeenSet() const;

                    /**
                     * 获取The forwarding rule ID. note: this parameter is required for layer-7 (http/https) listeners. it can be obtained through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     * @return LocationId The forwarding rule ID. note: this parameter is required for layer-7 (http/https) listeners. it can be obtained through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置The forwarding rule ID. note: this parameter is required for layer-7 (http/https) listeners. it can be obtained through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     * @param _locationId The forwarding rule ID. note: this parameter is required for layer-7 (http/https) listeners. it can be obtained through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     * 
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     * 
                     */
                    bool LocationIdHasBeenSet() const;

                    /**
                     * 获取The region of CLB instance. It defaults to the region of AS service and is in the format of the common parameter `Region`, such as `ap-guangzhou`.
                     * @return Region The region of CLB instance. It defaults to the region of AS service and is in the format of the common parameter `Region`, such as `ap-guangzhou`.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置The region of CLB instance. It defaults to the region of AS service and is in the format of the common parameter `Region`, such as `ap-guangzhou`.
                     * @param _region The region of CLB instance. It defaults to the region of AS service and is in the format of the common parameter `Region`, such as `ap-guangzhou`.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * ID of the load balancer. this parameter is required as an input parameter. you can obtain it through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * CLB listener ID. as an input parameter, this parameter is required. you can obtain it through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Target rule attribute list. as an input parameter, this parameter is required.
                     */
                    std::vector<TargetAttribute> m_targetAttributes;
                    bool m_targetAttributesHasBeenSet;

                    /**
                     * The forwarding rule ID. note: this parameter is required for layer-7 (http/https) listeners. it can be obtained through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * The region of CLB instance. It defaults to the region of AS service and is in the format of the common parameter `Region`, such as `ap-guangzhou`.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_FORWARDLOADBALANCER_H_
