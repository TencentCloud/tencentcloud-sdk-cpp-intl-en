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
                     * 获取ID of the cloud load balancer instance. you can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/api/214/30685?from_cn_redirect=1) api to obtain the ID.
                     * @return LoadBalancerId ID of the cloud load balancer instance. you can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/api/214/30685?from_cn_redirect=1) api to obtain the ID.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置ID of the cloud load balancer instance. you can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/api/214/30685?from_cn_redirect=1) api to obtain the ID.
                     * @param _loadBalancerId ID of the cloud load balancer instance. you can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/api/214/30685?from_cn_redirect=1) api to obtain the ID.
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
                     * 获取Specifies the array of clb listener ids to query, with a maximum of 100. you can call the [DescribeListeners](https://www.tencentcloud.comom/document/api/214/30686?from_cn_redirect=1) api to obtain the ids.
                     * @return ListenerIds Specifies the array of clb listener ids to query, with a maximum of 100. you can call the [DescribeListeners](https://www.tencentcloud.comom/document/api/214/30686?from_cn_redirect=1) api to obtain the ids.
                     * 
                     */
                    std::vector<std::string> GetListenerIds() const;

                    /**
                     * 设置Specifies the array of clb listener ids to query, with a maximum of 100. you can call the [DescribeListeners](https://www.tencentcloud.comom/document/api/214/30686?from_cn_redirect=1) api to obtain the ids.
                     * @param _listenerIds Specifies the array of clb listener ids to query, with a maximum of 100. you can call the [DescribeListeners](https://www.tencentcloud.comom/document/api/214/30686?from_cn_redirect=1) api to obtain the ids.
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
                     * 获取Type of the listener protocols to be queried. Values: TCP`, `UDP`, `HTTP`, `HTTPS`, `TCP_SSL` and `QUIC`.
                     * @return Protocol Type of the listener protocols to be queried. Values: TCP`, `UDP`, `HTTP`, `HTTPS`, `TCP_SSL` and `QUIC`.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Type of the listener protocols to be queried. Values: TCP`, `UDP`, `HTTP`, `HTTPS`, `TCP_SSL` and `QUIC`.
                     * @param _protocol Type of the listener protocols to be queried. Values: TCP`, `UDP`, `HTTP`, `HTTPS`, `TCP_SSL` and `QUIC`.
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
                     * 获取Port of listener to query. value range: 1-65535.
                     * @return Port Port of listener to query. value range: 1-65535.
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Port of listener to query. value range: 1-65535.
                     * @param _port Port of listener to query. value range: 1-65535.
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
                     * ID of the cloud load balancer instance. you can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/api/214/30685?from_cn_redirect=1) api to obtain the ID.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Specifies the array of clb listener ids to query, with a maximum of 100. you can call the [DescribeListeners](https://www.tencentcloud.comom/document/api/214/30686?from_cn_redirect=1) api to obtain the ids.
                     */
                    std::vector<std::string> m_listenerIds;
                    bool m_listenerIdsHasBeenSet;

                    /**
                     * Type of the listener protocols to be queried. Values: TCP`, `UDP`, `HTTP`, `HTTPS`, `TCP_SSL` and `QUIC`.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Port of listener to query. value range: 1-65535.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELISTENERSREQUEST_H_
