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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DEREGISTERTARGETSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DEREGISTERTARGETSREQUEST_H_

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
                * DeregisterTargets request structure.
                */
                class DeregisterTargetsRequest : public AbstractModel
                {
                public:
                    DeregisterTargetsRequest();
                    ~DeregisterTargetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CLB instance ID in the format of "lb-12345678"
                     * @return LoadBalancerId CLB instance ID in the format of "lb-12345678"
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置CLB instance ID in the format of "lb-12345678"
                     * @param _loadBalancerId CLB instance ID in the format of "lb-12345678"
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
                     * 获取Listener ID in the format of "lbl-12345678"
                     * @return ListenerId Listener ID in the format of "lbl-12345678"
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Listener ID in the format of "lbl-12345678"
                     * @param _listenerId Listener ID in the format of "lbl-12345678"
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
                     * 获取List of real servers to be unbound. Array length limit: 20.
                     * @return Targets List of real servers to be unbound. Array length limit: 20.
                     * 
                     */
                    std::vector<Target> GetTargets() const;

                    /**
                     * 设置List of real servers to be unbound. Array length limit: 20.
                     * @param _targets List of real servers to be unbound. Array length limit: 20.
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
                     * 获取Forwarding rule ID in the format of "loc-12345678". When unbinding a server from a layer-7 forwarding rule, you must provide either this parameter or Domain+Url.
                     * @return LocationId Forwarding rule ID in the format of "loc-12345678". When unbinding a server from a layer-7 forwarding rule, you must provide either this parameter or Domain+Url.
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置Forwarding rule ID in the format of "loc-12345678". When unbinding a server from a layer-7 forwarding rule, you must provide either this parameter or Domain+Url.
                     * @param _locationId Forwarding rule ID in the format of "loc-12345678". When unbinding a server from a layer-7 forwarding rule, you must provide either this parameter or Domain+Url.
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
                     * 获取Target rule domain name. This parameter does not take effect if LocationId is specified.
                     * @return Domain Target rule domain name. This parameter does not take effect if LocationId is specified.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Target rule domain name. This parameter does not take effect if LocationId is specified.
                     * @param _domain Target rule domain name. This parameter does not take effect if LocationId is specified.
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
                     * 获取Target rule URL. This parameter does not take effect if LocationId is specified.
                     * @return Url Target rule URL. This parameter does not take effect if LocationId is specified.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Target rule URL. This parameter does not take effect if LocationId is specified.
                     * @param _url Target rule URL. This parameter does not take effect if LocationId is specified.
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
                     * CLB instance ID in the format of "lb-12345678"
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Listener ID in the format of "lbl-12345678"
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * List of real servers to be unbound. Array length limit: 20.
                     */
                    std::vector<Target> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * Forwarding rule ID in the format of "loc-12345678". When unbinding a server from a layer-7 forwarding rule, you must provide either this parameter or Domain+Url.
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * Target rule domain name. This parameter does not take effect if LocationId is specified.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Target rule URL. This parameter does not take effect if LocationId is specified.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DEREGISTERTARGETSREQUEST_H_
