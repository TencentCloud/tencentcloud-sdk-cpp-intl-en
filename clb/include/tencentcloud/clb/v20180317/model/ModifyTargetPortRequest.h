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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYTARGETPORTREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYTARGETPORTREQUEST_H_

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
                * ModifyTargetPort request structure.
                */
                class ModifyTargetPortRequest : public AbstractModel
                {
                public:
                    ModifyTargetPortRequest();
                    ~ModifyTargetPortRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CLB instance ID
                     * @return LoadBalancerId CLB instance ID
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置CLB instance ID
                     * @param LoadBalancerId CLB instance ID
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取CLB listener ID
                     * @return ListenerId CLB listener ID
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置CLB listener ID
                     * @param ListenerId CLB listener ID
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取List of real servers for which to modify the ports
                     * @return Targets List of real servers for which to modify the ports
                     */
                    std::vector<Target> GetTargets() const;

                    /**
                     * 设置List of real servers for which to modify the ports
                     * @param Targets List of real servers for which to modify the ports
                     */
                    void SetTargets(const std::vector<Target>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     */
                    bool TargetsHasBeenSet() const;

                    /**
                     * 获取New port of the real server bound to a listener or forwarding rule
                     * @return NewPort New port of the real server bound to a listener or forwarding rule
                     */
                    int64_t GetNewPort() const;

                    /**
                     * 设置New port of the real server bound to a listener or forwarding rule
                     * @param NewPort New port of the real server bound to a listener or forwarding rule
                     */
                    void SetNewPort(const int64_t& _newPort);

                    /**
                     * 判断参数 NewPort 是否已赋值
                     * @return NewPort 是否已赋值
                     */
                    bool NewPortHasBeenSet() const;

                    /**
                     * 获取Forwarding rule ID. When binding a real server to a layer-7 forwarding rule, you must provide either this parameter or Domain+Url
                     * @return LocationId Forwarding rule ID. When binding a real server to a layer-7 forwarding rule, you must provide either this parameter or Domain+Url
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置Forwarding rule ID. When binding a real server to a layer-7 forwarding rule, you must provide either this parameter or Domain+Url
                     * @param LocationId Forwarding rule ID. When binding a real server to a layer-7 forwarding rule, you must provide either this parameter or Domain+Url
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     */
                    bool LocationIdHasBeenSet() const;

                    /**
                     * 获取Target rule domain name. This parameter does not take effect if LocationId is specified
                     * @return Domain Target rule domain name. This parameter does not take effect if LocationId is specified
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Target rule domain name. This parameter does not take effect if LocationId is specified
                     * @param Domain Target rule domain name. This parameter does not take effect if LocationId is specified
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Target rule URL. This parameter does not take effect if LocationId is specified
                     * @return Url Target rule URL. This parameter does not take effect if LocationId is specified
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Target rule URL. This parameter does not take effect if LocationId is specified
                     * @param Url Target rule URL. This parameter does not take effect if LocationId is specified
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
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
                     * List of real servers for which to modify the ports
                     */
                    std::vector<Target> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * New port of the real server bound to a listener or forwarding rule
                     */
                    int64_t m_newPort;
                    bool m_newPortHasBeenSet;

                    /**
                     * Forwarding rule ID. When binding a real server to a layer-7 forwarding rule, you must provide either this parameter or Domain+Url
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * Target rule domain name. This parameter does not take effect if LocationId is specified
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Target rule URL. This parameter does not take effect if LocationId is specified
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYTARGETPORTREQUEST_H_
