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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYRULEREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/HealthCheck.h>
#include <tencentcloud/clb/v20180317/model/OAuth.h>


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
                     * 获取ID of the CLB instance. You can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to obtain the ID.
                     * @return LoadBalancerId ID of the CLB instance. You can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to obtain the ID.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置ID of the CLB instance. You can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to obtain the ID.
                     * @param _loadBalancerId ID of the CLB instance. You can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to obtain the ID.
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
                     * 获取ID of the clb listener. can be obtained through the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) api.
                     * @return ListenerId ID of the clb listener. can be obtained through the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置ID of the clb listener. can be obtained through the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) api.
                     * @param _listenerId ID of the clb listener. can be obtained through the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) api.
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
                     * 获取Specifies the rule ID of the forwarding rule to be modified, which can be obtained through the DescribeListeners API (https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1).
                     * @return LocationId Specifies the rule ID of the forwarding rule to be modified, which can be obtained through the DescribeListeners API (https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1).
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置Specifies the rule ID of the forwarding rule to be modified, which can be obtained through the DescribeListeners API (https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1).
                     * @param _locationId Specifies the rule ID of the forwarding rule to be modified, which can be obtained through the DescribeListeners API (https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1).
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
                     * 获取Session persistence duration, in seconds. Value range: 0 or 30-86400.
Defaults to 0.
                     * @return SessionExpireTime Session persistence duration, in seconds. Value range: 0 or 30-86400.
Defaults to 0.
                     * 
                     */
                    int64_t GetSessionExpireTime() const;

                    /**
                     * 设置Session persistence duration, in seconds. Value range: 0 or 30-86400.
Defaults to 0.
                     * @param _sessionExpireTime Session persistence duration, in seconds. Value range: 0 or 30-86400.
Defaults to 0.
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
                     * 获取Forwarding protocol between a CLB instance and the real server. Default value: HTTP. Valid values: HTTP, HTTPS, GRPC. This parameter is valid only for HTTPS listeners.
                     * @return ForwardType Forwarding protocol between a CLB instance and the real server. Default value: HTTP. Valid values: HTTP, HTTPS, GRPC. This parameter is valid only for HTTPS listeners.
                     * 
                     */
                    std::string GetForwardType() const;

                    /**
                     * 设置Forwarding protocol between a CLB instance and the real server. Default value: HTTP. Valid values: HTTP, HTTPS, GRPC. This parameter is valid only for HTTPS listeners.
                     * @param _forwardType Forwarding protocol between a CLB instance and the real server. Default value: HTTP. Valid values: HTTP, HTTPS, GRPC. This parameter is valid only for HTTPS listeners.
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
                     * 获取TRPC callee server route, which is required when `ForwardType` is "TRPC". This is now only for internal usage.
                     * @return TrpcCallee TRPC callee server route, which is required when `ForwardType` is "TRPC". This is now only for internal usage.
                     * 
                     */
                    std::string GetTrpcCallee() const;

                    /**
                     * 设置TRPC callee server route, which is required when `ForwardType` is "TRPC". This is now only for internal usage.
                     * @param _trpcCallee TRPC callee server route, which is required when `ForwardType` is "TRPC". This is now only for internal usage.
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
                     * 获取TRPC calling service API, which is required when `ForwardType` is "TRPC". This is now only for internal usage.
                     * @return TrpcFunc TRPC calling service API, which is required when `ForwardType` is "TRPC". This is now only for internal usage.
                     * 
                     */
                    std::string GetTrpcFunc() const;

                    /**
                     * 设置TRPC calling service API, which is required when `ForwardType` is "TRPC". This is now only for internal usage.
                     * @param _trpcFunc TRPC calling service API, which is required when `ForwardType` is "TRPC". This is now only for internal usage.
                     * 
                     */
                    void SetTrpcFunc(const std::string& _trpcFunc);

                    /**
                     * 判断参数 TrpcFunc 是否已赋值
                     * @return TrpcFunc 是否已赋值
                     * 
                     */
                    bool TrpcFuncHasBeenSet() const;

                    /**
                     * 获取OAuth configuration information.
                     * @return OAuth OAuth configuration information.
                     * 
                     */
                    OAuth GetOAuth() const;

                    /**
                     * 设置OAuth configuration information.
                     * @param _oAuth OAuth configuration information.
                     * 
                     */
                    void SetOAuth(const OAuth& _oAuth);

                    /**
                     * 判断参数 OAuth 是否已赋值
                     * @return OAuth 是否已赋值
                     * 
                     */
                    bool OAuthHasBeenSet() const;

                    /**
                     * 获取Specifies the custom cookie name.
                     * @return CookieName Specifies the custom cookie name.
                     * 
                     */
                    std::string GetCookieName() const;

                    /**
                     * 设置Specifies the custom cookie name.
                     * @param _cookieName Specifies the custom cookie name.
                     * 
                     */
                    void SetCookieName(const std::string& _cookieName);

                    /**
                     * 判断参数 CookieName 是否已赋值
                     * @return CookieName 是否已赋值
                     * 
                     */
                    bool CookieNameHasBeenSet() const;

                private:

                    /**
                     * ID of the CLB instance. You can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to obtain the ID.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * ID of the clb listener. can be obtained through the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) api.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Specifies the rule ID of the forwarding rule to be modified, which can be obtained through the DescribeListeners API (https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1).
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
                     * Session persistence duration, in seconds. Value range: 0 or 30-86400.
Defaults to 0.
                     */
                    int64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                    /**
                     * Forwarding protocol between a CLB instance and the real server. Default value: HTTP. Valid values: HTTP, HTTPS, GRPC. This parameter is valid only for HTTPS listeners.
                     */
                    std::string m_forwardType;
                    bool m_forwardTypeHasBeenSet;

                    /**
                     * TRPC callee server route, which is required when `ForwardType` is "TRPC". This is now only for internal usage.
                     */
                    std::string m_trpcCallee;
                    bool m_trpcCalleeHasBeenSet;

                    /**
                     * TRPC calling service API, which is required when `ForwardType` is "TRPC". This is now only for internal usage.
                     */
                    std::string m_trpcFunc;
                    bool m_trpcFuncHasBeenSet;

                    /**
                     * OAuth configuration information.
                     */
                    OAuth m_oAuth;
                    bool m_oAuthHasBeenSet;

                    /**
                     * Specifies the custom cookie name.
                     */
                    std::string m_cookieName;
                    bool m_cookieNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYRULEREQUEST_H_
