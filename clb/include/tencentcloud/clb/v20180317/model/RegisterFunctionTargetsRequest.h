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
                     * 获取
                     * @return LoadBalancerId 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置
                     * @param LoadBalancerId 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return ListenerId 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置
                     * @param ListenerId 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return FunctionTargets 
                     */
                    std::vector<FunctionTarget> GetFunctionTargets() const;

                    /**
                     * 设置
                     * @param FunctionTargets 
                     */
                    void SetFunctionTargets(const std::vector<FunctionTarget>& _functionTargets);

                    /**
                     * 判断参数 FunctionTargets 是否已赋值
                     * @return FunctionTargets 是否已赋值
                     */
                    bool FunctionTargetsHasBeenSet() const;

                    /**
                     * 获取
                     * @return LocationId 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置
                     * @param LocationId 
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     */
                    bool LocationIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return Domain 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置
                     * @param Domain 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取
                     * @return Url 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置
                     * @param Url 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<FunctionTarget> m_functionTargets;
                    bool m_functionTargetsHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_REGISTERFUNCTIONTARGETSREQUEST_H_
