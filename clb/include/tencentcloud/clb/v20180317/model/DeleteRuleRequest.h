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
                     * 获取ID of the CLB instance. You can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to query the ID.
                     * @return LoadBalancerId ID of the CLB instance. You can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to query the ID.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置ID of the CLB instance. You can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to query the ID.
                     * @param _loadBalancerId ID of the CLB instance. You can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to query the ID.
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
                     * 获取ID of the CLB instance listener. You can call the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) API to query the ID.
                     * @return ListenerId ID of the CLB instance listener. You can call the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) API to query the ID.
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置ID of the CLB instance listener. You can call the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) API to query the ID.
                     * @param _listenerId ID of the CLB instance listener. You can call the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) API to query the ID.
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
                     * 获取Array of ids of forwarding rules to be deleted, can be accessed through the [DescribeLoadBalancersDetail](https://www.tencentcloud.comom/document/api/214/46916?from_cn_redirect=1) api.
                     * @return LocationIds Array of ids of forwarding rules to be deleted, can be accessed through the [DescribeLoadBalancersDetail](https://www.tencentcloud.comom/document/api/214/46916?from_cn_redirect=1) api.
                     * 
                     */
                    std::vector<std::string> GetLocationIds() const;

                    /**
                     * 设置Array of ids of forwarding rules to be deleted, can be accessed through the [DescribeLoadBalancersDetail](https://www.tencentcloud.comom/document/api/214/46916?from_cn_redirect=1) api.
                     * @param _locationIds Array of ids of forwarding rules to be deleted, can be accessed through the [DescribeLoadBalancersDetail](https://www.tencentcloud.comom/document/api/214/46916?from_cn_redirect=1) api.
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
                     * 获取Domain name of the forwarding rule to be deleted. if it is multiple domains, you can specify any one of the domain name list. it can be accessed through the [DescribeLoadBalancersDetail](https://www.tencentcloud.comom/document/api/214/46916?from_cn_redirect=1) api.
                     * @return Domain Domain name of the forwarding rule to be deleted. if it is multiple domains, you can specify any one of the domain name list. it can be accessed through the [DescribeLoadBalancersDetail](https://www.tencentcloud.comom/document/api/214/46916?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name of the forwarding rule to be deleted. if it is multiple domains, you can specify any one of the domain name list. it can be accessed through the [DescribeLoadBalancersDetail](https://www.tencentcloud.comom/document/api/214/46916?from_cn_redirect=1) api.
                     * @param _domain Domain name of the forwarding rule to be deleted. if it is multiple domains, you can specify any one of the domain name list. it can be accessed through the [DescribeLoadBalancersDetail](https://www.tencentcloud.comom/document/api/214/46916?from_cn_redirect=1) api.
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
                     * 获取Forwarding path of the forwarding rule to be deleted can be accessed through the DescribeLoadBalancersDetail api (https://www.tencentcloud.comom/document/api/214/46916?from_cn_redirect=1).
                     * @return Url Forwarding path of the forwarding rule to be deleted can be accessed through the DescribeLoadBalancersDetail api (https://www.tencentcloud.comom/document/api/214/46916?from_cn_redirect=1).
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Forwarding path of the forwarding rule to be deleted can be accessed through the DescribeLoadBalancersDetail api (https://www.tencentcloud.comom/document/api/214/46916?from_cn_redirect=1).
                     * @param _url Forwarding path of the forwarding rule to be deleted can be accessed through the DescribeLoadBalancersDetail api (https://www.tencentcloud.comom/document/api/214/46916?from_cn_redirect=1).
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
                     * 获取A default domain name must be configured under the listener. when you need to delete the default domain name, you can specify another domain name as the new default domain name. if the new default domain name is multiple domains, you can specify any one of the domain name list. it can be accessed through the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) api.
                     * @return NewDefaultServerDomain A default domain name must be configured under the listener. when you need to delete the default domain name, you can specify another domain name as the new default domain name. if the new default domain name is multiple domains, you can specify any one of the domain name list. it can be accessed through the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetNewDefaultServerDomain() const;

                    /**
                     * 设置A default domain name must be configured under the listener. when you need to delete the default domain name, you can specify another domain name as the new default domain name. if the new default domain name is multiple domains, you can specify any one of the domain name list. it can be accessed through the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) api.
                     * @param _newDefaultServerDomain A default domain name must be configured under the listener. when you need to delete the default domain name, you can specify another domain name as the new default domain name. if the new default domain name is multiple domains, you can specify any one of the domain name list. it can be accessed through the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) api.
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
                     * ID of the CLB instance. You can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to query the ID.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * ID of the CLB instance listener. You can call the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) API to query the ID.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Array of ids of forwarding rules to be deleted, can be accessed through the [DescribeLoadBalancersDetail](https://www.tencentcloud.comom/document/api/214/46916?from_cn_redirect=1) api.
                     */
                    std::vector<std::string> m_locationIds;
                    bool m_locationIdsHasBeenSet;

                    /**
                     * Domain name of the forwarding rule to be deleted. if it is multiple domains, you can specify any one of the domain name list. it can be accessed through the [DescribeLoadBalancersDetail](https://www.tencentcloud.comom/document/api/214/46916?from_cn_redirect=1) api.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Forwarding path of the forwarding rule to be deleted can be accessed through the DescribeLoadBalancersDetail api (https://www.tencentcloud.comom/document/api/214/46916?from_cn_redirect=1).
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * A default domain name must be configured under the listener. when you need to delete the default domain name, you can specify another domain name as the new default domain name. if the new default domain name is multiple domains, you can specify any one of the domain name list. it can be accessed through the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) api.
                     */
                    std::string m_newDefaultServerDomain;
                    bool m_newDefaultServerDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DELETERULEREQUEST_H_
