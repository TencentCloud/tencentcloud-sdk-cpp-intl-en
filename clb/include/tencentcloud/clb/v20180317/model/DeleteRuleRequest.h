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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DELETERULEREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DELETERULEREQUEST_H_

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
                * DeleteRule request structure.
                */
                class DeleteRuleRequest : public AbstractModel
                {
                public:
                    DeleteRuleRequest();
                    ~DeleteRuleRequest() = default;
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
                     * 获取CLB listener ID
                     * @return ListenerId CLB listener ID
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置CLB listener ID
                     * @param _listenerId CLB listener ID
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
                     * 获取Array of IDs of the forwarding rules to be deleted
                     * @return LocationIds Array of IDs of the forwarding rules to be deleted
                     * 
                     */
                    std::vector<std::string> GetLocationIds() const;

                    /**
                     * 设置Array of IDs of the forwarding rules to be deleted
                     * @param _locationIds Array of IDs of the forwarding rules to be deleted
                     * 
                     */
                    void SetLocationIds(const std::vector<std::string>& _locationIds);

                    /**
                     * 判断参数 LocationIds 是否已赋值
                     * @return LocationIds 是否已赋值
                     * 
                     */
                    bool LocationIdsHasBeenSet() const;

                    /**
                     * 获取The domain name associated with the forwarding rule to delete. If the rule is associated with multiple domain names, specify any one of them.
                     * @return Domain The domain name associated with the forwarding rule to delete. If the rule is associated with multiple domain names, specify any one of them.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The domain name associated with the forwarding rule to delete. If the rule is associated with multiple domain names, specify any one of them.
                     * @param _domain The domain name associated with the forwarding rule to delete. If the rule is associated with multiple domain names, specify any one of them.
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
                     * 获取The forwarding path of the forwarding rule to delete.
                     * @return Url The forwarding path of the forwarding rule to delete.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置The forwarding path of the forwarding rule to delete.
                     * @param _url The forwarding path of the forwarding rule to delete.
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
                     * 获取Specifies a new default domain name for the listener. This field is used when the original default domain name is disabled. If there are multiple domain names, specify one of them.
                     * @return NewDefaultServerDomain Specifies a new default domain name for the listener. This field is used when the original default domain name is disabled. If there are multiple domain names, specify one of them.
                     * 
                     */
                    std::string GetNewDefaultServerDomain() const;

                    /**
                     * 设置Specifies a new default domain name for the listener. This field is used when the original default domain name is disabled. If there are multiple domain names, specify one of them.
                     * @param _newDefaultServerDomain Specifies a new default domain name for the listener. This field is used when the original default domain name is disabled. If there are multiple domain names, specify one of them.
                     * 
                     */
                    void SetNewDefaultServerDomain(const std::string& _newDefaultServerDomain);

                    /**
                     * 判断参数 NewDefaultServerDomain 是否已赋值
                     * @return NewDefaultServerDomain 是否已赋值
                     * 
                     */
                    bool NewDefaultServerDomainHasBeenSet() const;

                private:

                    /**
                     * CLB instance ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * CLB listener ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Array of IDs of the forwarding rules to be deleted
                     */
                    std::vector<std::string> m_locationIds;
                    bool m_locationIdsHasBeenSet;

                    /**
                     * The domain name associated with the forwarding rule to delete. If the rule is associated with multiple domain names, specify any one of them.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * The forwarding path of the forwarding rule to delete.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Specifies a new default domain name for the listener. This field is used when the original default domain name is disabled. If there are multiple domain names, specify one of them.
                     */
                    std::string m_newDefaultServerDomain;
                    bool m_newDefaultServerDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DELETERULEREQUEST_H_
