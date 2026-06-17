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

#ifndef TENCENTCLOUD_CLB_V20230417_MODEL_DESCRIBETARGETHEALTHREQUEST_H_
#define TENCENTCLOUD_CLB_V20230417_MODEL_DESCRIBETARGETHEALTHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20230417
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
                     * 获取List of CLB instance IDs to query.
                     * @return LoadBalancerIds List of CLB instance IDs to query.
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置List of CLB instance IDs to query.
                     * @param _loadBalancerIds List of CLB instance IDs to query.
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
                     * 获取Listener ID list to query.
                     * @return ListenerIds Listener ID list to query.
                     * 
                     */
                    std::vector<std::string> GetListenerIds() const;

                    /**
                     * 设置Listener ID list to query.
                     * @param _listenerIds Listener ID list to query.
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
                     * 获取List of forwarding rule IDs to query.
                     * @return LocationIds List of forwarding rule IDs to query.
                     * 
                     */
                    std::vector<std::string> GetLocationIds() const;

                    /**
                     * 设置List of forwarding rule IDs to query.
                     * @param _locationIds List of forwarding rule IDs to query.
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
                     * List of CLB instance IDs to query.
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                    /**
                     * Listener ID list to query.
                     */
                    std::vector<std::string> m_listenerIds;
                    bool m_listenerIdsHasBeenSet;

                    /**
                     * List of forwarding rule IDs to query.
                     */
                    std::vector<std::string> m_locationIds;
                    bool m_locationIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20230417_MODEL_DESCRIBETARGETHEALTHREQUEST_H_
