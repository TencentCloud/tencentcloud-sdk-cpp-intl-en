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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CREATERULEREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CREATERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/RuleCheckParams.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * CreateRule request structure.
                */
                class CreateRuleRequest : public AbstractModel
                {
                public:
                    CreateRuleRequest();
                    ~CreateRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Layer-7 listener ID
                     * @return ListenerId Layer-7 listener ID
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Layer-7 listener ID
                     * @param _listenerId Layer-7 listener ID
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
                     * 获取Domain name of the forwarding rule
                     * @return Domain Domain name of the forwarding rule
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name of the forwarding rule
                     * @param _domain Domain name of the forwarding rule
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
                     * 获取Path of the forwarding rule
                     * @return Path Path of the forwarding rule
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Path of the forwarding rule
                     * @param _path Path of the forwarding rule
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取The origin server type of the forwarding rule, which supports IP and DOMAIN types.
                     * @return RealServerType The origin server type of the forwarding rule, which supports IP and DOMAIN types.
                     * 
                     */
                    std::string GetRealServerType() const;

                    /**
                     * 设置The origin server type of the forwarding rule, which supports IP and DOMAIN types.
                     * @param _realServerType The origin server type of the forwarding rule, which supports IP and DOMAIN types.
                     * 
                     */
                    void SetRealServerType(const std::string& _realServerType);

                    /**
                     * 判断参数 RealServerType 是否已赋值
                     * @return RealServerType 是否已赋值
                     * 
                     */
                    bool RealServerTypeHasBeenSet() const;

                    /**
                     * 获取The strategy used by the listener to access the origin server. Values: `rr` (round-robin), `wrr` (weighted round-robin), `lc` (the least-connections strategy).
                     * @return Scheduler The strategy used by the listener to access the origin server. Values: `rr` (round-robin), `wrr` (weighted round-robin), `lc` (the least-connections strategy).
                     * 
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置The strategy used by the listener to access the origin server. Values: `rr` (round-robin), `wrr` (weighted round-robin), `lc` (the least-connections strategy).
                     * @param _scheduler The strategy used by the listener to access the origin server. Values: `rr` (round-robin), `wrr` (weighted round-robin), `lc` (the least-connections strategy).
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
                     * 获取Whether the health check is enabled for rules. 1: enabled; 0: disabled.
                     * @return HealthCheck Whether the health check is enabled for rules. 1: enabled; 0: disabled.
                     * 
                     */
                    uint64_t GetHealthCheck() const;

                    /**
                     * 设置Whether the health check is enabled for rules. 1: enabled; 0: disabled.
                     * @param _healthCheck Whether the health check is enabled for rules. 1: enabled; 0: disabled.
                     * 
                     */
                    void SetHealthCheck(const uint64_t& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     * 
                     */
                    bool HealthCheckHasBeenSet() const;

                    /**
                     * 获取Parameters related to origin server health check
                     * @return CheckParams Parameters related to origin server health check
                     * 
                     */
                    RuleCheckParams GetCheckParams() const;

                    /**
                     * 设置Parameters related to origin server health check
                     * @param _checkParams Parameters related to origin server health check
                     * 
                     */
                    void SetCheckParams(const RuleCheckParams& _checkParams);

                    /**
                     * 判断参数 CheckParams 是否已赋值
                     * @return CheckParams 是否已赋值
                     * 
                     */
                    bool CheckParamsHasBeenSet() const;

                    /**
                     * 获取Protocol types of the forwarding from acceleration connection to origin server, which supports HTTP or HTTPS.
If this field is not passed in, it indicates that the ForwardProtocol of the corresponding listener will be used.
                     * @return ForwardProtocol Protocol types of the forwarding from acceleration connection to origin server, which supports HTTP or HTTPS.
If this field is not passed in, it indicates that the ForwardProtocol of the corresponding listener will be used.
                     * 
                     */
                    std::string GetForwardProtocol() const;

                    /**
                     * 设置Protocol types of the forwarding from acceleration connection to origin server, which supports HTTP or HTTPS.
If this field is not passed in, it indicates that the ForwardProtocol of the corresponding listener will be used.
                     * @param _forwardProtocol Protocol types of the forwarding from acceleration connection to origin server, which supports HTTP or HTTPS.
If this field is not passed in, it indicates that the ForwardProtocol of the corresponding listener will be used.
                     * 
                     */
                    void SetForwardProtocol(const std::string& _forwardProtocol);

                    /**
                     * 判断参数 ForwardProtocol 是否已赋值
                     * @return ForwardProtocol 是否已赋值
                     * 
                     */
                    bool ForwardProtocolHasBeenSet() const;

                    /**
                     * 获取The host to which the acceleration connection forwards. If this parameter is not specified, the default host will be used, i.e., the host with which the client initiates HTTP requests.
                     * @return ForwardHost The host to which the acceleration connection forwards. If this parameter is not specified, the default host will be used, i.e., the host with which the client initiates HTTP requests.
                     * 
                     */
                    std::string GetForwardHost() const;

                    /**
                     * 设置The host to which the acceleration connection forwards. If this parameter is not specified, the default host will be used, i.e., the host with which the client initiates HTTP requests.
                     * @param _forwardHost The host to which the acceleration connection forwards. If this parameter is not specified, the default host will be used, i.e., the host with which the client initiates HTTP requests.
                     * 
                     */
                    void SetForwardHost(const std::string& _forwardHost);

                    /**
                     * 判断参数 ForwardHost 是否已赋值
                     * @return ForwardHost 是否已赋值
                     * 
                     */
                    bool ForwardHostHasBeenSet() const;

                    /**
                     * 获取Whether to enable SNI. Values: `on` (enable), `off` (disable). For creation of HTTP listener forwarding rules, SNI is disabled by default.
                     * @return ServerNameIndicationSwitch Whether to enable SNI. Values: `on` (enable), `off` (disable). For creation of HTTP listener forwarding rules, SNI is disabled by default.
                     * 
                     */
                    std::string GetServerNameIndicationSwitch() const;

                    /**
                     * 设置Whether to enable SNI. Values: `on` (enable), `off` (disable). For creation of HTTP listener forwarding rules, SNI is disabled by default.
                     * @param _serverNameIndicationSwitch Whether to enable SNI. Values: `on` (enable), `off` (disable). For creation of HTTP listener forwarding rules, SNI is disabled by default.
                     * 
                     */
                    void SetServerNameIndicationSwitch(const std::string& _serverNameIndicationSwitch);

                    /**
                     * 判断参数 ServerNameIndicationSwitch 是否已赋值
                     * @return ServerNameIndicationSwitch 是否已赋值
                     * 
                     */
                    bool ServerNameIndicationSwitchHasBeenSet() const;

                    /**
                     * 获取Server Name Indication (SNI). This field is required when `ServerNameIndicationSwitch` is `ON`.
                     * @return ServerNameIndication Server Name Indication (SNI). This field is required when `ServerNameIndicationSwitch` is `ON`.
                     * 
                     */
                    std::string GetServerNameIndication() const;

                    /**
                     * 设置Server Name Indication (SNI). This field is required when `ServerNameIndicationSwitch` is `ON`.
                     * @param _serverNameIndication Server Name Indication (SNI). This field is required when `ServerNameIndicationSwitch` is `ON`.
                     * 
                     */
                    void SetServerNameIndication(const std::string& _serverNameIndication);

                    /**
                     * 判断参数 ServerNameIndication 是否已赋值
                     * @return ServerNameIndication 是否已赋值
                     * 
                     */
                    bool ServerNameIndicationHasBeenSet() const;

                    /**
                     * 获取Enables HTTP-to-HTTPS force redirect for a forwarding rule. Enter a hostname and path of the current forwarding rule.
                     * @return ForcedRedirect Enables HTTP-to-HTTPS force redirect for a forwarding rule. Enter a hostname and path of the current forwarding rule.
                     * 
                     */
                    std::string GetForcedRedirect() const;

                    /**
                     * 设置Enables HTTP-to-HTTPS force redirect for a forwarding rule. Enter a hostname and path of the current forwarding rule.
                     * @param _forcedRedirect Enables HTTP-to-HTTPS force redirect for a forwarding rule. Enter a hostname and path of the current forwarding rule.
                     * 
                     */
                    void SetForcedRedirect(const std::string& _forcedRedirect);

                    /**
                     * 判断参数 ForcedRedirect 是否已赋值
                     * @return ForcedRedirect 是否已赋值
                     * 
                     */
                    bool ForcedRedirectHasBeenSet() const;

                private:

                    /**
                     * Layer-7 listener ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Domain name of the forwarding rule
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Path of the forwarding rule
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * The origin server type of the forwarding rule, which supports IP and DOMAIN types.
                     */
                    std::string m_realServerType;
                    bool m_realServerTypeHasBeenSet;

                    /**
                     * The strategy used by the listener to access the origin server. Values: `rr` (round-robin), `wrr` (weighted round-robin), `lc` (the least-connections strategy).
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * Whether the health check is enabled for rules. 1: enabled; 0: disabled.
                     */
                    uint64_t m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * Parameters related to origin server health check
                     */
                    RuleCheckParams m_checkParams;
                    bool m_checkParamsHasBeenSet;

                    /**
                     * Protocol types of the forwarding from acceleration connection to origin server, which supports HTTP or HTTPS.
If this field is not passed in, it indicates that the ForwardProtocol of the corresponding listener will be used.
                     */
                    std::string m_forwardProtocol;
                    bool m_forwardProtocolHasBeenSet;

                    /**
                     * The host to which the acceleration connection forwards. If this parameter is not specified, the default host will be used, i.e., the host with which the client initiates HTTP requests.
                     */
                    std::string m_forwardHost;
                    bool m_forwardHostHasBeenSet;

                    /**
                     * Whether to enable SNI. Values: `on` (enable), `off` (disable). For creation of HTTP listener forwarding rules, SNI is disabled by default.
                     */
                    std::string m_serverNameIndicationSwitch;
                    bool m_serverNameIndicationSwitchHasBeenSet;

                    /**
                     * Server Name Indication (SNI). This field is required when `ServerNameIndicationSwitch` is `ON`.
                     */
                    std::string m_serverNameIndication;
                    bool m_serverNameIndicationHasBeenSet;

                    /**
                     * Enables HTTP-to-HTTPS force redirect for a forwarding rule. Enter a hostname and path of the current forwarding rule.
                     */
                    std::string m_forcedRedirect;
                    bool m_forcedRedirectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CREATERULEREQUEST_H_
