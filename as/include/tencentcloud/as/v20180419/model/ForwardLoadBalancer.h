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
                     * 获取Load balancer ID
                     * @return LoadBalancerId Load balancer ID
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置Load balancer ID
                     * @param LoadBalancerId Load balancer ID
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取Application load balancer listener ID
                     * @return ListenerId Application load balancer listener ID
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Application load balancer listener ID
                     * @param ListenerId Application load balancer listener ID
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取List of target rule attributes
                     * @return TargetAttributes List of target rule attributes
                     */
                    std::vector<TargetAttribute> GetTargetAttributes() const;

                    /**
                     * 设置List of target rule attributes
                     * @param TargetAttributes List of target rule attributes
                     */
                    void SetTargetAttributes(const std::vector<TargetAttribute>& _targetAttributes);

                    /**
                     * 判断参数 TargetAttributes 是否已赋值
                     * @return TargetAttributes 是否已赋值
                     */
                    bool TargetAttributesHasBeenSet() const;

                    /**
                     * 获取ID of a forwarding rule. This parameter is required for layer-7 listeners.
                     * @return LocationId ID of a forwarding rule. This parameter is required for layer-7 listeners.
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置ID of a forwarding rule. This parameter is required for layer-7 listeners.
                     * @param LocationId ID of a forwarding rule. This parameter is required for layer-7 listeners.
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     */
                    bool LocationIdHasBeenSet() const;

                    /**
                     * 获取The region of CLB instance. It defaults to the region of AS service and is in the format of the common parameter `Region`, such as `ap-guangzhou`.
                     * @return Region The region of CLB instance. It defaults to the region of AS service and is in the format of the common parameter `Region`, such as `ap-guangzhou`.
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置The region of CLB instance. It defaults to the region of AS service and is in the format of the common parameter `Region`, such as `ap-guangzhou`.
                     * @param Region The region of CLB instance. It defaults to the region of AS service and is in the format of the common parameter `Region`, such as `ap-guangzhou`.
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * Load balancer ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Application load balancer listener ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * List of target rule attributes
                     */
                    std::vector<TargetAttribute> m_targetAttributes;
                    bool m_targetAttributesHasBeenSet;

                    /**
                     * ID of a forwarding rule. This parameter is required for layer-7 listeners.
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
