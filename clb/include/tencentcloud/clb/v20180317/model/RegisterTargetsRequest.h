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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_REGISTERTARGETSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_REGISTERTARGETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/Target.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * RegisterTargets request structure.
                */
                class RegisterTargetsRequest : public AbstractModel
                {
                public:
                    RegisterTargetsRequest();
                    ~RegisterTargetsRequest() = default;
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
                     * 获取List of real servers to be bound. Array length limit: 20.
                     * @return Targets List of real servers to be bound. Array length limit: 20.
                     * 
                     */
                    std::vector<Target> GetTargets() const;

                    /**
                     * 设置List of real servers to be bound. Array length limit: 20.
                     * @param _targets List of real servers to be bound. Array length limit: 20.
                     * 
                     */
                    void SetTargets(const std::vector<Target>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                    /**
                     * 获取Specifies the forwarding rule ID, which can be obtained through the DescribeListeners API (https://www.tencentcloud.com/document/product/214/30686?from_cn_redirect=1). you must provide this parameter or either Domain or Url when binding a backend service to a layer-7 forwarding rule.
                     * @return LocationId Specifies the forwarding rule ID, which can be obtained through the DescribeListeners API (https://www.tencentcloud.com/document/product/214/30686?from_cn_redirect=1). you must provide this parameter or either Domain or Url when binding a backend service to a layer-7 forwarding rule.
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置Specifies the forwarding rule ID, which can be obtained through the DescribeListeners API (https://www.tencentcloud.com/document/product/214/30686?from_cn_redirect=1). you must provide this parameter or either Domain or Url when binding a backend service to a layer-7 forwarding rule.
                     * @param _locationId Specifies the forwarding rule ID, which can be obtained through the DescribeListeners API (https://www.tencentcloud.com/document/product/214/30686?from_cn_redirect=1). you must provide this parameter or either Domain or Url when binding a backend service to a layer-7 forwarding rule.
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
                     * 获取Target forwarding rule domain name. This parameter does not take effect if LocationId is specified.
                     * @return Domain Target forwarding rule domain name. This parameter does not take effect if LocationId is specified.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Target forwarding rule domain name. This parameter does not take effect if LocationId is specified.
                     * @param _domain Target forwarding rule domain name. This parameter does not take effect if LocationId is specified.
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
                     * 获取Target forwarding rule URL. This parameter does not take effect if LocationId is specified.
                     * @return Url Target forwarding rule URL. This parameter does not take effect if LocationId is specified.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Target forwarding rule URL. This parameter does not take effect if LocationId is specified.
                     * @param _url Target forwarding rule URL. This parameter does not take effect if LocationId is specified.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

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
                     * List of real servers to be bound. Array length limit: 20.
                     */
                    std::vector<Target> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * Specifies the forwarding rule ID, which can be obtained through the DescribeListeners API (https://www.tencentcloud.com/document/product/214/30686?from_cn_redirect=1). you must provide this parameter or either Domain or Url when binding a backend service to a layer-7 forwarding rule.
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * Target forwarding rule domain name. This parameter does not take effect if LocationId is specified.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Target forwarding rule URL. This parameter does not take effect if LocationId is specified.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_REGISTERTARGETSREQUEST_H_
