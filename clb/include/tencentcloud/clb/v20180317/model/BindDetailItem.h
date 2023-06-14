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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_BINDDETAILITEM_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_BINDDETAILITEM_H_

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
                * Binding details including listener name, protocol, url and vport
                */
                class BindDetailItem : public AbstractModel
                {
                public:
                    BindDetailItem();
                    ~BindDetailItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the ID of CLB to be bound
                     * @return LoadBalancerId Specifies the ID of CLB to be bound
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置Specifies the ID of CLB to be bound
                     * @param _loadBalancerId Specifies the ID of CLB to be bound
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
                     * 获取Specifies the ID of listener to be bound
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ListenerId Specifies the ID of listener to be bound
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Specifies the ID of listener to be bound
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _listenerId Specifies the ID of listener to be bound
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Specifies the domain name to be bound
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Domain Specifies the domain name to be bound
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Specifies the domain name to be bound
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _domain Specifies the domain name to be bound
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Sets the bound rule.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return LocationId Sets the bound rule.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置Sets the bound rule.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _locationId Sets the bound rule.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Listener name.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ListenerName Listener name.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置Listener name.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _listenerName Listener name.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     * 
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取Listener protocol.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Protocol Listener protocol.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Listener protocol.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _protocol Listener protocol.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Listener port.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Vport Listener port.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置Listener port.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _vport Listener port.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取URL of the location.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Url URL of the location.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置URL of the location.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _url URL of the location.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Configuration ID.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return UconfigId Configuration ID.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUconfigId() const;

                    /**
                     * 设置Configuration ID.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _uconfigId Configuration ID.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUconfigId(const std::string& _uconfigId);

                    /**
                     * 判断参数 UconfigId 是否已赋值
                     * @return UconfigId 是否已赋值
                     * 
                     */
                    bool UconfigIdHasBeenSet() const;

                private:

                    /**
                     * Specifies the ID of CLB to be bound
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Specifies the ID of listener to be bound
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Specifies the domain name to be bound
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Sets the bound rule.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * Listener name.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * Listener protocol.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Listener port.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * URL of the location.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Configuration ID.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_uconfigId;
                    bool m_uconfigIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_BINDDETAILITEM_H_
