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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_RULEINFO_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_RULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/RuleCheckParams.h>
#include <tencentcloud/gaap/v20180529/model/BindRealServer.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * Forwarding rule of layer-7 listeners
                */
                class RuleInfo : public AbstractModel
                {
                public:
                    RuleInfo();
                    ~RuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule information
                     * @return RuleId Rule information
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Rule information
                     * @param _ruleId Rule information
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Listener information
                     * @return ListenerId Listener information
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Listener information
                     * @param _listenerId Listener information
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
                     * 获取Rule domain name
                     * @return Domain Rule domain name
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Rule domain name
                     * @param _domain Rule domain name
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
                     * 获取Rule path
                     * @return Path Rule path
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Rule path
                     * @param _path Rule path
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
                     * 获取Origin server type
                     * @return RealServerType Origin server type
                     * 
                     */
                    std::string GetRealServerType() const;

                    /**
                     * 设置Origin server type
                     * @param _realServerType Origin server type
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
                     * 获取The strategy used by the listener to access the origin server. Values: `rr` (round-robin), `wrr` (weighted round-robin), `lc` (the least-connections strategy), `lrtt` (the least-response-time strategy).
                     * @return Scheduler The strategy used by the listener to access the origin server. Values: `rr` (round-robin), `wrr` (weighted round-robin), `lc` (the least-connections strategy), `lrtt` (the least-response-time strategy).
                     * 
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置The strategy used by the listener to access the origin server. Values: `rr` (round-robin), `wrr` (weighted round-robin), `lc` (the least-connections strategy), `lrtt` (the least-response-time strategy).
                     * @param _scheduler The strategy used by the listener to access the origin server. Values: `rr` (round-robin), `wrr` (weighted round-robin), `lc` (the least-connections strategy), `lrtt` (the least-response-time strategy).
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
                     * 获取Whether health check is enabled. 1: enabled, 0: disabled
                     * @return HealthCheck Whether health check is enabled. 1: enabled, 0: disabled
                     * 
                     */
                    uint64_t GetHealthCheck() const;

                    /**
                     * 设置Whether health check is enabled. 1: enabled, 0: disabled
                     * @param _healthCheck Whether health check is enabled. 1: enabled, 0: disabled
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
                     * 获取Rule status. 0: running, 1: creating, 2: terminating, 3: binding/unbinding origin server, 4: updating configuration
                     * @return RuleStatus Rule status. 0: running, 1: creating, 2: terminating, 3: binding/unbinding origin server, 4: updating configuration
                     * 
                     */
                    uint64_t GetRuleStatus() const;

                    /**
                     * 设置Rule status. 0: running, 1: creating, 2: terminating, 3: binding/unbinding origin server, 4: updating configuration
                     * @param _ruleStatus Rule status. 0: running, 1: creating, 2: terminating, 3: binding/unbinding origin server, 4: updating configuration
                     * 
                     */
                    void SetRuleStatus(const uint64_t& _ruleStatus);

                    /**
                     * 判断参数 RuleStatus 是否已赋值
                     * @return RuleStatus 是否已赋值
                     * 
                     */
                    bool RuleStatusHasBeenSet() const;

                    /**
                     * 获取Health check parameters
                     * @return CheckParams Health check parameters
                     * 
                     */
                    RuleCheckParams GetCheckParams() const;

                    /**
                     * 设置Health check parameters
                     * @param _checkParams Health check parameters
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
                     * 获取Bound origin server information
                     * @return RealServerSet Bound origin server information
                     * 
                     */
                    std::vector<BindRealServer> GetRealServerSet() const;

                    /**
                     * 设置Bound origin server information
                     * @param _realServerSet Bound origin server information
                     * 
                     */
                    void SetRealServerSet(const std::vector<BindRealServer>& _realServerSet);

                    /**
                     * 判断参数 RealServerSet 是否已赋值
                     * @return RealServerSet 是否已赋值
                     * 
                     */
                    bool RealServerSetHasBeenSet() const;

                    /**
                     * 获取Origin server service status. 0: exceptional, 1: normal
If health check is not enabled, this status will always be normal.
As long as one origin server is exceptional, this status will be exceptional. Please view `RealServerSet` for the status of specific origin servers.
                     * @return BindStatus Origin server service status. 0: exceptional, 1: normal
If health check is not enabled, this status will always be normal.
As long as one origin server is exceptional, this status will be exceptional. Please view `RealServerSet` for the status of specific origin servers.
                     * 
                     */
                    uint64_t GetBindStatus() const;

                    /**
                     * 设置Origin server service status. 0: exceptional, 1: normal
If health check is not enabled, this status will always be normal.
As long as one origin server is exceptional, this status will be exceptional. Please view `RealServerSet` for the status of specific origin servers.
                     * @param _bindStatus Origin server service status. 0: exceptional, 1: normal
If health check is not enabled, this status will always be normal.
As long as one origin server is exceptional, this status will be exceptional. Please view `RealServerSet` for the status of specific origin servers.
                     * 
                     */
                    void SetBindStatus(const uint64_t& _bindStatus);

                    /**
                     * 判断参数 BindStatus 是否已赋值
                     * @return BindStatus 是否已赋值
                     * 
                     */
                    bool BindStatusHasBeenSet() const;

                    /**
                     * 获取The `host` carried in the request forwarded from the connection to the origin server. `default` indicates directly forwarding the received 'host'.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ForwardHost The `host` carried in the request forwarded from the connection to the origin server. `default` indicates directly forwarding the received 'host'.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetForwardHost() const;

                    /**
                     * 设置The `host` carried in the request forwarded from the connection to the origin server. `default` indicates directly forwarding the received 'host'.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _forwardHost The `host` carried in the request forwarded from the connection to the origin server. `default` indicates directly forwarding the received 'host'.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Specifies whether to enable Server Name Indication (SNI). Valid values: `ON` (enable) and `OFF` (disable).
Note: This field may return `null`, indicating that no valid value can be obtained.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ServerNameIndicationSwitch Specifies whether to enable Server Name Indication (SNI). Valid values: `ON` (enable) and `OFF` (disable).
Note: This field may return `null`, indicating that no valid value can be obtained.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetServerNameIndicationSwitch() const;

                    /**
                     * 设置Specifies whether to enable Server Name Indication (SNI). Valid values: `ON` (enable) and `OFF` (disable).
Note: This field may return `null`, indicating that no valid value can be obtained.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _serverNameIndicationSwitch Specifies whether to enable Server Name Indication (SNI). Valid values: `ON` (enable) and `OFF` (disable).
Note: This field may return `null`, indicating that no valid value can be obtained.
Note: This field may return `null`, indicating that no valid value can be obtained.
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
Note: This field may return `null`, indicating that no valid value can be obtained.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ServerNameIndication Server Name Indication (SNI). This field is required when `ServerNameIndicationSwitch` is `ON`.
Note: This field may return `null`, indicating that no valid value can be obtained.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetServerNameIndication() const;

                    /**
                     * 设置Server Name Indication (SNI). This field is required when `ServerNameIndicationSwitch` is `ON`.
Note: This field may return `null`, indicating that no valid value can be obtained.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _serverNameIndication Server Name Indication (SNI). This field is required when `ServerNameIndicationSwitch` is `ON`.
Note: This field may return `null`, indicating that no valid value can be obtained.
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Forces requests to redirect to HTTPS. When `https:` is passed in, all requests are redirected to HTTPS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ForcedRedirect Forces requests to redirect to HTTPS. When `https:` is passed in, all requests are redirected to HTTPS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetForcedRedirect() const;

                    /**
                     * 设置Forces requests to redirect to HTTPS. When `https:` is passed in, all requests are redirected to HTTPS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _forcedRedirect Forces requests to redirect to HTTPS. When `https:` is passed in, all requests are redirected to HTTPS.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Rule information
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Listener information
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Rule domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Rule path
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Origin server type
                     */
                    std::string m_realServerType;
                    bool m_realServerTypeHasBeenSet;

                    /**
                     * The strategy used by the listener to access the origin server. Values: `rr` (round-robin), `wrr` (weighted round-robin), `lc` (the least-connections strategy), `lrtt` (the least-response-time strategy).
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * Whether health check is enabled. 1: enabled, 0: disabled
                     */
                    uint64_t m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * Rule status. 0: running, 1: creating, 2: terminating, 3: binding/unbinding origin server, 4: updating configuration
                     */
                    uint64_t m_ruleStatus;
                    bool m_ruleStatusHasBeenSet;

                    /**
                     * Health check parameters
                     */
                    RuleCheckParams m_checkParams;
                    bool m_checkParamsHasBeenSet;

                    /**
                     * Bound origin server information
                     */
                    std::vector<BindRealServer> m_realServerSet;
                    bool m_realServerSetHasBeenSet;

                    /**
                     * Origin server service status. 0: exceptional, 1: normal
If health check is not enabled, this status will always be normal.
As long as one origin server is exceptional, this status will be exceptional. Please view `RealServerSet` for the status of specific origin servers.
                     */
                    uint64_t m_bindStatus;
                    bool m_bindStatusHasBeenSet;

                    /**
                     * The `host` carried in the request forwarded from the connection to the origin server. `default` indicates directly forwarding the received 'host'.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_forwardHost;
                    bool m_forwardHostHasBeenSet;

                    /**
                     * Specifies whether to enable Server Name Indication (SNI). Valid values: `ON` (enable) and `OFF` (disable).
Note: This field may return `null`, indicating that no valid value can be obtained.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_serverNameIndicationSwitch;
                    bool m_serverNameIndicationSwitchHasBeenSet;

                    /**
                     * Server Name Indication (SNI). This field is required when `ServerNameIndicationSwitch` is `ON`.
Note: This field may return `null`, indicating that no valid value can be obtained.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_serverNameIndication;
                    bool m_serverNameIndicationHasBeenSet;

                    /**
                     * Forces requests to redirect to HTTPS. When `https:` is passed in, all requests are redirected to HTTPS.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_forcedRedirect;
                    bool m_forcedRedirectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_RULEINFO_H_
