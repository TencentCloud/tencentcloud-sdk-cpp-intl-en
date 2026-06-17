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

#ifndef TENCENTCLOUD_CLB_V20230417_MODEL_BINDDETAILITEM_H_
#define TENCENTCLOUD_CLB_V20230417_MODEL_BINDDETAILITEM_H_

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
        namespace V20230417
        {
            namespace Model
            {
                /**
                * Binding relationship, including listener name, protocol, URL, and vport.
                */
                class BindDetailItem : public AbstractModel
                {
                public:
                    BindDetailItem();
                    ~BindDetailItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the CLB instance bound to the configuration
                     * @return LoadBalancerId ID of the CLB instance bound to the configuration
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置ID of the CLB instance bound to the configuration
                     * @param _loadBalancerId ID of the CLB instance bound to the configuration
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
                     * 获取ID of the listener bound to the configuration
                     * @return ListenerId ID of the listener bound to the configuration
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置ID of the listener bound to the configuration
                     * @param _listenerId ID of the listener bound to the configuration
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
                     * 获取Domain name bound to the configuration
                     * @return Domain Domain name bound to the configuration
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name bound to the configuration
                     * @param _domain Domain name bound to the configuration
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
                     * 获取Rule bound to the configuration
                     * @return LocationId Rule bound to the configuration
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置Rule bound to the configuration
                     * @param _locationId Rule bound to the configuration
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
                     * 获取Listener name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ListenerName Listener name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置Listener name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _listenerName Listener name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Listener protocol
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Protocol Listener protocol
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Listener protocol
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _protocol Listener protocol
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Vport Listener port
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置Listener port
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vport Listener port
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Location URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Url Location URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Location URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _url Location URL
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Configuration ID
                     * @return ConfigId Configuration ID
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置Configuration ID
                     * @param _configId Configuration ID
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                private:

                    /**
                     * ID of the CLB instance bound to the configuration
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * ID of the listener bound to the configuration
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Domain name bound to the configuration
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Rule bound to the configuration
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * Listener name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * Listener protocol
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Listener port
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Location URL
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Configuration ID
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20230417_MODEL_BINDDETAILITEM_H_
