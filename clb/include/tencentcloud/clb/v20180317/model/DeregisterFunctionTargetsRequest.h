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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DEREGISTERFUNCTIONTARGETSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DEREGISTERFUNCTIONTARGETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/FunctionTarget.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DeregisterFunctionTargets request structure.
                */
                class DeregisterFunctionTargetsRequest : public AbstractModel
                {
                public:
                    DeregisterFunctionTargetsRequest();
                    ~DeregisterFunctionTargetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CLB instance ID.
                     * @return LoadBalancerId CLB instance ID.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置CLB instance ID.
                     * @param _loadBalancerId CLB instance ID.
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
                     * 获取CLB listener ID.
                     * @return ListenerId CLB listener ID.
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置CLB listener ID.
                     * @param _listenerId CLB listener ID.
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
                     * 获取List of functions to be unbound
                     * @return FunctionTargets List of functions to be unbound
                     * 
                     */
                    std::vector<FunctionTarget> GetFunctionTargets() const;

                    /**
                     * 设置List of functions to be unbound
                     * @param _functionTargets List of functions to be unbound
                     * 
                     */
                    void SetFunctionTargets(const std::vector<FunctionTarget>& _functionTargets);

                    /**
                     * 判断参数 FunctionTargets 是否已赋值
                     * @return FunctionTargets 是否已赋值
                     * 
                     */
                    bool FunctionTargetsHasBeenSet() const;

                    /**
                     * 获取The ID of target forwarding rule. To unbind a function from an L7 forwarding rule, either `LocationId` or `Domain+Url` is required. 
                     * @return LocationId The ID of target forwarding rule. To unbind a function from an L7 forwarding rule, either `LocationId` or `Domain+Url` is required. 
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置The ID of target forwarding rule. To unbind a function from an L7 forwarding rule, either `LocationId` or `Domain+Url` is required. 
                     * @param _locationId The ID of target forwarding rule. To unbind a function from an L7 forwarding rule, either `LocationId` or `Domain+Url` is required. 
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
                     * 获取Domain name of the target forwarding rule. It is ignored if `LocationId` is specified. 
                     * @return Domain Domain name of the target forwarding rule. It is ignored if `LocationId` is specified. 
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name of the target forwarding rule. It is ignored if `LocationId` is specified. 
                     * @param _domain Domain name of the target forwarding rule. It is ignored if `LocationId` is specified. 
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
                     * 获取URL of the target forwarding rule. It is ignored if `LocationId` is specified. 
                     * @return Url URL of the target forwarding rule. It is ignored if `LocationId` is specified. 
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置URL of the target forwarding rule. It is ignored if `LocationId` is specified. 
                     * @param _url URL of the target forwarding rule. It is ignored if `LocationId` is specified. 
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
                     * CLB instance ID.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * CLB listener ID.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * List of functions to be unbound
                     */
                    std::vector<FunctionTarget> m_functionTargets;
                    bool m_functionTargetsHasBeenSet;

                    /**
                     * The ID of target forwarding rule. To unbind a function from an L7 forwarding rule, either `LocationId` or `Domain+Url` is required. 
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * Domain name of the target forwarding rule. It is ignored if `LocationId` is specified. 
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * URL of the target forwarding rule. It is ignored if `LocationId` is specified. 
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DEREGISTERFUNCTIONTARGETSREQUEST_H_
