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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELISTENERSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELISTENERSREQUEST_H_

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
                * DescribeListeners request structure.
                */
                class DescribeListenersRequest : public AbstractModel
                {
                public:
                    DescribeListenersRequest();
                    ~DescribeListenersRequest() = default;
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
                     * 获取Array of CLB listener IDs to query (100 IDs at most).
                     * @return ListenerIds Array of CLB listener IDs to query (100 IDs at most).
                     * 
                     */
                    std::vector<std::string> GetListenerIds() const;

                    /**
                     * 设置Array of CLB listener IDs to query (100 IDs at most).
                     * @param _listenerIds Array of CLB listener IDs to query (100 IDs at most).
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
                     * 获取Type of the listener protocols to be queried. Valid values: TCP, UDP, HTTP, HTTPS, and TCP_SSL.
                     * @return Protocol Type of the listener protocols to be queried. Valid values: TCP, UDP, HTTP, HTTPS, and TCP_SSL.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Type of the listener protocols to be queried. Valid values: TCP, UDP, HTTP, HTTPS, and TCP_SSL.
                     * @param _protocol Type of the listener protocols to be queried. Valid values: TCP, UDP, HTTP, HTTPS, and TCP_SSL.
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
                     * 获取Port of the listeners to be queried
                     * @return Port Port of the listeners to be queried
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Port of the listeners to be queried
                     * @param _port Port of the listeners to be queried
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                private:

                    /**
                     * CLB instance ID.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Array of CLB listener IDs to query (100 IDs at most).
                     */
                    std::vector<std::string> m_listenerIds;
                    bool m_listenerIdsHasBeenSet;

                    /**
                     * Type of the listener protocols to be queried. Valid values: TCP, UDP, HTTP, HTTPS, and TCP_SSL.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Port of the listeners to be queried
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELISTENERSREQUEST_H_
