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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETARGETHEALTHREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETARGETHEALTHREQUEST_H_

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
                * DescribeTargetHealth request structure.
                */
                class DescribeTargetHealthRequest : public AbstractModel
                {
                public:
                    DescribeTargetHealthRequest();
                    ~DescribeTargetHealthRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>List of Cloud Load Balancer instance IDs to query. The array size supports up to 30.</p>
                     * @return LoadBalancerIds <p>List of Cloud Load Balancer instance IDs to query. The array size supports up to 30.</p>
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置<p>List of Cloud Load Balancer instance IDs to query. The array size supports up to 30.</p>
                     * @param _loadBalancerIds <p>List of Cloud Load Balancer instance IDs to query. The array size supports up to 30.</p>
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
                     * 获取<p>Listener ID list to query.</p>
                     * @return ListenerIds <p>Listener ID list to query.</p>
                     * 
                     */
                    std::vector<std::string> GetListenerIds() const;

                    /**
                     * 设置<p>Listener ID list to query.</p>
                     * @param _listenerIds <p>Listener ID list to query.</p>
                     * 
                     */
                    void SetListenerIds(const std::vector<std::string>& _listenerIds);

                    /**
                     * 判断参数 ListenerIds 是否已赋值
                     * @return ListenerIds 是否已赋值
                     * 
                     */
                    bool ListenerIdsHasBeenSet() const;

                    /**
                     * 获取<p>List of forwarding rule IDs to query.</p>
                     * @return LocationIds <p>List of forwarding rule IDs to query.</p>
                     * 
                     */
                    std::vector<std::string> GetLocationIds() const;

                    /**
                     * 设置<p>List of forwarding rule IDs to query.</p>
                     * @param _locationIds <p>List of forwarding rule IDs to query.</p>
                     * 
                     */
                    void SetLocationIds(const std::vector<std::string>& _locationIds);

                    /**
                     * 判断参数 LocationIds 是否已赋值
                     * @return LocationIds 是否已赋值
                     * 
                     */
                    bool LocationIdsHasBeenSet() const;

                private:

                    /**
                     * <p>List of Cloud Load Balancer instance IDs to query. The array size supports up to 30.</p>
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                    /**
                     * <p>Listener ID list to query.</p>
                     */
                    std::vector<std::string> m_listenerIds;
                    bool m_listenerIdsHasBeenSet;

                    /**
                     * <p>List of forwarding rule IDs to query.</p>
                     */
                    std::vector<std::string> m_locationIds;
                    bool m_locationIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETARGETHEALTHREQUEST_H_
