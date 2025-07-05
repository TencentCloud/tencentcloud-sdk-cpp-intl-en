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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBELISTENERSREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBELISTENERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
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
                     * 获取CLB instance ID
                     * @return LoadBalancerId CLB instance ID
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置CLB instance ID
                     * @param _loadBalancerId CLB instance ID
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
                     * 获取Array of IDs of the CLB listeners to be queried
                     * @return ListenerIds Array of IDs of the CLB listeners to be queried
                     * 
                     */
                    std::vector<std::string> GetListenerIds() const;

                    /**
                     * 设置Array of IDs of the CLB listeners to be queried
                     * @param _listenerIds Array of IDs of the CLB listeners to be queried
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
                     * 获取Protocol type of the listener to be queried. Valid values: TCP, UDP.
                     * @return Protocol Protocol type of the listener to be queried. Valid values: TCP, UDP.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol type of the listener to be queried. Valid values: TCP, UDP.
                     * @param _protocol Protocol type of the listener to be queried. Valid values: TCP, UDP.
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
                     * 获取Port of the listener to be queried
                     * @return Port Port of the listener to be queried
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Port of the listener to be queried
                     * @param _port Port of the listener to be queried
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
                     * CLB instance ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Array of IDs of the CLB listeners to be queried
                     */
                    std::vector<std::string> m_listenerIds;
                    bool m_listenerIdsHasBeenSet;

                    /**
                     * Protocol type of the listener to be queried. Valid values: TCP, UDP.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Port of the listener to be queried
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBELISTENERSREQUEST_H_
