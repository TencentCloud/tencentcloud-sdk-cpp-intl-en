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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETARGETSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETARGETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/Filter.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeTargets request structure.
                */
                class DescribeTargetsRequest : public AbstractModel
                {
                public:
                    DescribeTargetsRequest();
                    ~DescribeTargetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CLB instance ID.
                     * @return LoadBalancerId CLB instance ID.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置CLB instance ID.
                     * @param _loadBalancerId CLB instance ID.
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
                     * 获取List of listener IDs (20 IDs at most).
                     * @return ListenerIds List of listener IDs (20 IDs at most).
                     * 
                     */
                    std::vector<std::string> GetListenerIds() const;

                    /**
                     * 设置List of listener IDs (20 IDs at most).
                     * @param _listenerIds List of listener IDs (20 IDs at most).
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
                     * 获取Listener protocol type
                     * @return Protocol Listener protocol type
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Listener protocol type
                     * @param _protocol Listener protocol type
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Listener port
                     * @return Port Listener port
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Listener port
                     * @param _port Listener port
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Conditions for querying the list of real servers bound to the CLB. The filter criteria are as follows:<li> location-id - String - Required: No - (Filter criterion) Filter by rule ID, such as loc-12345678.</li><li> private-ip-address - String - Required: No - (Filter criterion) Filter by private IP address of the real server, such as 172.16.1.1.</li><li> tag - String - Required: No - (Filter criterion) Filter by tag, such as tag-test.</li>
                     * @return Filters Conditions for querying the list of real servers bound to the CLB. The filter criteria are as follows:<li> location-id - String - Required: No - (Filter criterion) Filter by rule ID, such as loc-12345678.</li><li> private-ip-address - String - Required: No - (Filter criterion) Filter by private IP address of the real server, such as 172.16.1.1.</li><li> tag - String - Required: No - (Filter criterion) Filter by tag, such as tag-test.</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Conditions for querying the list of real servers bound to the CLB. The filter criteria are as follows:<li> location-id - String - Required: No - (Filter criterion) Filter by rule ID, such as loc-12345678.</li><li> private-ip-address - String - Required: No - (Filter criterion) Filter by private IP address of the real server, such as 172.16.1.1.</li><li> tag - String - Required: No - (Filter criterion) Filter by tag, such as tag-test.</li>
                     * @param _filters Conditions for querying the list of real servers bound to the CLB. The filter criteria are as follows:<li> location-id - String - Required: No - (Filter criterion) Filter by rule ID, such as loc-12345678.</li><li> private-ip-address - String - Required: No - (Filter criterion) Filter by private IP address of the real server, such as 172.16.1.1.</li><li> tag - String - Required: No - (Filter criterion) Filter by tag, such as tag-test.</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * CLB instance ID.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * List of listener IDs (20 IDs at most).
                     */
                    std::vector<std::string> m_listenerIds;
                    bool m_listenerIdsHasBeenSet;

                    /**
                     * Listener protocol type
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Listener port
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Conditions for querying the list of real servers bound to the CLB. The filter criteria are as follows:<li> location-id - String - Required: No - (Filter criterion) Filter by rule ID, such as loc-12345678.</li><li> private-ip-address - String - Required: No - (Filter criterion) Filter by private IP address of the real server, such as 172.16.1.1.</li><li> tag - String - Required: No - (Filter criterion) Filter by tag, such as tag-test.</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETARGETSREQUEST_H_
