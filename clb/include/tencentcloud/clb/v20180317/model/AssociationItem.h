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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_ASSOCIATIONITEM_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_ASSOCIATIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Rule associated with target group
                */
                class AssociationItem : public AbstractModel
                {
                public:
                    AssociationItem();
                    ~AssociationItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of associated CLB instance
                     * @return LoadBalancerId ID of associated CLB instance
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置ID of associated CLB instance
                     * @param _loadBalancerId ID of associated CLB instance
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
                     * 获取ID of associated listener
                     * @return ListenerId ID of associated listener
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置ID of associated listener
                     * @param _listenerId ID of associated listener
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
                     * 获取ID of associated forwarding rule
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LocationId ID of associated forwarding rule
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置ID of associated forwarding rule
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _locationId ID of associated forwarding rule
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Protocol type of associated listener, such as HTTP or TCP
                     * @return Protocol Protocol type of associated listener, such as HTTP or TCP
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol type of associated listener, such as HTTP or TCP
                     * @param _protocol Protocol type of associated listener, such as HTTP or TCP
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
                     * 获取Port of associated listener
                     * @return Port Port of associated listener
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Port of associated listener
                     * @param _port Port of associated listener
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Domain name of associated forwarding rule
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Domain Domain name of associated forwarding rule
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name of associated forwarding rule
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _domain Domain name of associated forwarding rule
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取URL of associated forwarding rule
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Url URL of associated forwarding rule
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置URL of associated forwarding rule
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _url URL of associated forwarding rule
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取CLB instance name
                     * @return LoadBalancerName CLB instance name
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置CLB instance name
                     * @param _loadBalancerName CLB instance name
                     * 
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     * 
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取Listener name
                     * @return ListenerName Listener name
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置Listener name
                     * @param _listenerName Listener name
                     * 
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     * 
                     */
                    bool ListenerNameHasBeenSet() const;

                private:

                    /**
                     * ID of associated CLB instance
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * ID of associated listener
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * ID of associated forwarding rule
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * Protocol type of associated listener, such as HTTP or TCP
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Port of associated listener
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Domain name of associated forwarding rule
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * URL of associated forwarding rule
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * CLB instance name
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * Listener name
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_ASSOCIATIONITEM_H_
