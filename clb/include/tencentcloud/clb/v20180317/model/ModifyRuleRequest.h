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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYRULEREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/HealthCheck.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ModifyRule request structure.
                */
                class ModifyRuleRequest : public AbstractModel
                {
                public:
                    ModifyRuleRequest();
                    ~ModifyRuleRequest() = default;
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
                     * 获取ID of the forwarding rule to be modified.
                     * @return LocationId ID of the forwarding rule to be modified.
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置ID of the forwarding rule to be modified.
                     * @param _locationId ID of the forwarding rule to be modified.
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
                     * 获取New forwarding path of the forwarding rule. This parameter is not required if the URL does not need to be modified.
                     * @return Url New forwarding path of the forwarding rule. This parameter is not required if the URL does not need to be modified.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置New forwarding path of the forwarding rule. This parameter is not required if the URL does not need to be modified.
                     * @param _url New forwarding path of the forwarding rule. This parameter is not required if the URL does not need to be modified.
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
                     * 获取Health check information
                     * @return HealthCheck Health check information
                     * 
                     */
                    HealthCheck GetHealthCheck() const;

                    /**
                     * 设置Health check information
                     * @param _healthCheck Health check information
                     * 
                     */
                    void SetHealthCheck(const HealthCheck& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     * 
                     */
                    bool HealthCheckHasBeenSet() const;

                    /**
                     * 获取Request forwarding method of the rule. Value range: WRR, LEAST_CONN, IP_HASH
They represent weighted round robin, least connections, and IP hash, respectively. Default value: WRR.
                     * @return Scheduler Request forwarding method of the rule. Value range: WRR, LEAST_CONN, IP_HASH
They represent weighted round robin, least connections, and IP hash, respectively. Default value: WRR.
                     * 
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置Request forwarding method of the rule. Value range: WRR, LEAST_CONN, IP_HASH
They represent weighted round robin, least connections, and IP hash, respectively. Default value: WRR.
                     * @param _scheduler Request forwarding method of the rule. Value range: WRR, LEAST_CONN, IP_HASH
They represent weighted round robin, least connections, and IP hash, respectively. Default value: WRR.
                     * 
                     */
                    void SetScheduler(const std::string& _scheduler);

                    /**
                     * 判断参数 Scheduler 是否已赋值
                     * @return Scheduler 是否已赋值
                     * 
                     */
                    bool SchedulerHasBeenSet() const;

                    /**
                     * 获取Session persistence time
                     * @return SessionExpireTime Session persistence time
                     * 
                     */
                    int64_t GetSessionExpireTime() const;

                    /**
                     * 设置Session persistence time
                     * @param _sessionExpireTime Session persistence time
                     * 
                     */
                    void SetSessionExpireTime(const int64_t& _sessionExpireTime);

                    /**
                     * 判断参数 SessionExpireTime 是否已赋值
                     * @return SessionExpireTime 是否已赋值
                     * 
                     */
                    bool SessionExpireTimeHasBeenSet() const;

                    /**
                     * 获取Forwarding protocol between CLB instance and real server. Default value: HTTP. Valid values: HTTP, HTTPS, and TRPC.
                     * @return ForwardType Forwarding protocol between CLB instance and real server. Default value: HTTP. Valid values: HTTP, HTTPS, and TRPC.
                     * 
                     */
                    std::string GetForwardType() const;

                    /**
                     * 设置Forwarding protocol between CLB instance and real server. Default value: HTTP. Valid values: HTTP, HTTPS, and TRPC.
                     * @param _forwardType Forwarding protocol between CLB instance and real server. Default value: HTTP. Valid values: HTTP, HTTPS, and TRPC.
                     * 
                     */
                    void SetForwardType(const std::string& _forwardType);

                    /**
                     * 判断参数 ForwardType 是否已赋值
                     * @return ForwardType 是否已赋值
                     * 
                     */
                    bool ForwardTypeHasBeenSet() const;

                    /**
                     * 获取TRPC callee server route, which is required when `ForwardType` is "TRPC".
                     * @return TrpcCallee TRPC callee server route, which is required when `ForwardType` is "TRPC".
                     * 
                     */
                    std::string GetTrpcCallee() const;

                    /**
                     * 设置TRPC callee server route, which is required when `ForwardType` is "TRPC".
                     * @param _trpcCallee TRPC callee server route, which is required when `ForwardType` is "TRPC".
                     * 
                     */
                    void SetTrpcCallee(const std::string& _trpcCallee);

                    /**
                     * 判断参数 TrpcCallee 是否已赋值
                     * @return TrpcCallee 是否已赋值
                     * 
                     */
                    bool TrpcCalleeHasBeenSet() const;

                    /**
                     * 获取TRPC calling service API, which is required when `ForwardType` is "TRPC".
                     * @return TrpcFunc TRPC calling service API, which is required when `ForwardType` is "TRPC".
                     * 
                     */
                    std::string GetTrpcFunc() const;

                    /**
                     * 设置TRPC calling service API, which is required when `ForwardType` is "TRPC".
                     * @param _trpcFunc TRPC calling service API, which is required when `ForwardType` is "TRPC".
                     * 
                     */
                    void SetTrpcFunc(const std::string& _trpcFunc);

                    /**
                     * 判断参数 TrpcFunc 是否已赋值
                     * @return TrpcFunc 是否已赋值
                     * 
                     */
                    bool TrpcFuncHasBeenSet() const;

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
                     * ID of the forwarding rule to be modified.
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * New forwarding path of the forwarding rule. This parameter is not required if the URL does not need to be modified.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Health check information
                     */
                    HealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * Request forwarding method of the rule. Value range: WRR, LEAST_CONN, IP_HASH
They represent weighted round robin, least connections, and IP hash, respectively. Default value: WRR.
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * Session persistence time
                     */
                    int64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                    /**
                     * Forwarding protocol between CLB instance and real server. Default value: HTTP. Valid values: HTTP, HTTPS, and TRPC.
                     */
                    std::string m_forwardType;
                    bool m_forwardTypeHasBeenSet;

                    /**
                     * TRPC callee server route, which is required when `ForwardType` is "TRPC".
                     */
                    std::string m_trpcCallee;
                    bool m_trpcCalleeHasBeenSet;

                    /**
                     * TRPC calling service API, which is required when `ForwardType` is "TRPC".
                     */
                    std::string m_trpcFunc;
                    bool m_trpcFuncHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYRULEREQUEST_H_
