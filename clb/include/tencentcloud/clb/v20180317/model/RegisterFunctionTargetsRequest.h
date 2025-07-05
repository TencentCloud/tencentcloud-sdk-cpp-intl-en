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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_REGISTERFUNCTIONTARGETSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_REGISTERFUNCTIONTARGETSREQUEST_H_

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
                * RegisterFunctionTargets request structure.
                */
                class RegisterFunctionTargetsRequest : public AbstractModel
                {
                public:
                    RegisterFunctionTargetsRequest();
                    ~RegisterFunctionTargetsRequest() = default;
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
                     * 获取SCF functions to be bound.
                     * @return FunctionTargets SCF functions to be bound.
                     * 
                     */
                    std::vector<FunctionTarget> GetFunctionTargets() const;

                    /**
                     * 设置SCF functions to be bound.
                     * @param _functionTargets SCF functions to be bound.
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
                     * 获取ID of the target forwarding rule. To bind an SCF function to a L7 forwarding rule, this parameter or `Domain+Url` is required.
                     * @return LocationId ID of the target forwarding rule. To bind an SCF function to a L7 forwarding rule, this parameter or `Domain+Url` is required.
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置ID of the target forwarding rule. To bind an SCF function to a L7 forwarding rule, this parameter or `Domain+Url` is required.
                     * @param _locationId ID of the target forwarding rule. To bind an SCF function to a L7 forwarding rule, this parameter or `Domain+Url` is required.
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
                     * SCF functions to be bound.
                     */
                    std::vector<FunctionTarget> m_functionTargets;
                    bool m_functionTargetsHasBeenSet;

                    /**
                     * ID of the target forwarding rule. To bind an SCF function to a L7 forwarding rule, this parameter or `Domain+Url` is required.
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

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_REGISTERFUNCTIONTARGETSREQUEST_H_
