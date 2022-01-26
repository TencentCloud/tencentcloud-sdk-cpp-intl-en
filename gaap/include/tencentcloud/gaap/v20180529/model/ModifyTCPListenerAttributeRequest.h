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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYTCPLISTENERATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYTCPLISTENERATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * ModifyTCPListenerAttribute request structure.
                */
                class ModifyTCPListenerAttributeRequest : public AbstractModel
                {
                public:
                    ModifyTCPListenerAttributeRequest();
                    ~ModifyTCPListenerAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Listener ID
                     * @return ListenerId Listener ID
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Listener ID
                     * @param ListenerId Listener ID
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取Connection group ID; Either `ProxyId` or `GroupId` must be set, but you cannot set both.
                     * @return GroupId Connection group ID; Either `ProxyId` or `GroupId` must be set, but you cannot set both.
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Connection group ID; Either `ProxyId` or `GroupId` must be set, but you cannot set both.
                     * @param GroupId Connection group ID; Either `ProxyId` or `GroupId` must be set, but you cannot set both.
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Connection ID; Either `ProxyId` or `GroupId` must be set, but you cannot set both.
                     * @return ProxyId Connection ID; Either `ProxyId` or `GroupId` must be set, but you cannot set both.
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置Connection ID; Either `ProxyId` or `GroupId` must be set, but you cannot set both.
                     * @param ProxyId Connection ID; Either `ProxyId` or `GroupId` must be set, but you cannot set both.
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取Listener name
                     * @return ListenerName Listener name
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置Listener name
                     * @param ListenerName Listener name
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取Origin server scheduling policy of listeners, which supports round robin (rr), weighted round robin (wrr), and least connections (lc).
                     * @return Scheduler Origin server scheduling policy of listeners, which supports round robin (rr), weighted round robin (wrr), and least connections (lc).
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置Origin server scheduling policy of listeners, which supports round robin (rr), weighted round robin (wrr), and least connections (lc).
                     * @param Scheduler Origin server scheduling policy of listeners, which supports round robin (rr), weighted round robin (wrr), and least connections (lc).
                     */
                    void SetScheduler(const std::string& _scheduler);

                    /**
                     * 判断参数 Scheduler 是否已赋值
                     * @return Scheduler 是否已赋值
                     */
                    bool SchedulerHasBeenSet() const;

                    /**
                     * 获取Time interval of origin server health check (unit: seconds). Value range: [5, 300].
                     * @return DelayLoop Time interval of origin server health check (unit: seconds). Value range: [5, 300].
                     */
                    uint64_t GetDelayLoop() const;

                    /**
                     * 设置Time interval of origin server health check (unit: seconds). Value range: [5, 300].
                     * @param DelayLoop Time interval of origin server health check (unit: seconds). Value range: [5, 300].
                     */
                    void SetDelayLoop(const uint64_t& _delayLoop);

                    /**
                     * 判断参数 DelayLoop 是否已赋值
                     * @return DelayLoop 是否已赋值
                     */
                    bool DelayLoopHasBeenSet() const;

                    /**
                     * 获取Response timeout of origin server health check (unit: seconds). Value range: [2, 60]. The timeout value shall be less than the time interval for health check DelayLoop.
                     * @return ConnectTimeout Response timeout of origin server health check (unit: seconds). Value range: [2, 60]. The timeout value shall be less than the time interval for health check DelayLoop.
                     */
                    uint64_t GetConnectTimeout() const;

                    /**
                     * 设置Response timeout of origin server health check (unit: seconds). Value range: [2, 60]. The timeout value shall be less than the time interval for health check DelayLoop.
                     * @param ConnectTimeout Response timeout of origin server health check (unit: seconds). Value range: [2, 60]. The timeout value shall be less than the time interval for health check DelayLoop.
                     */
                    void SetConnectTimeout(const uint64_t& _connectTimeout);

                    /**
                     * 判断参数 ConnectTimeout 是否已赋值
                     * @return ConnectTimeout 是否已赋值
                     */
                    bool ConnectTimeoutHasBeenSet() const;

                    /**
                     * 获取Whether to enable health check. 1: enable; 0: disable.
                     * @return HealthCheck Whether to enable health check. 1: enable; 0: disable.
                     */
                    uint64_t GetHealthCheck() const;

                    /**
                     * 设置Whether to enable health check. 1: enable; 0: disable.
                     * @param HealthCheck Whether to enable health check. 1: enable; 0: disable.
                     */
                    void SetHealthCheck(const uint64_t& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     */
                    bool HealthCheckHasBeenSet() const;

                    /**
                     * 获取Whether to enable the primary/secondary origin server mode. Valid values: 1 (enable) and 0 (disable). It cannot be enabled for domain name origin servers.
                     * @return FailoverSwitch Whether to enable the primary/secondary origin server mode. Valid values: 1 (enable) and 0 (disable). It cannot be enabled for domain name origin servers.
                     */
                    uint64_t GetFailoverSwitch() const;

                    /**
                     * 设置Whether to enable the primary/secondary origin server mode. Valid values: 1 (enable) and 0 (disable). It cannot be enabled for domain name origin servers.
                     * @param FailoverSwitch Whether to enable the primary/secondary origin server mode. Valid values: 1 (enable) and 0 (disable). It cannot be enabled for domain name origin servers.
                     */
                    void SetFailoverSwitch(const uint64_t& _failoverSwitch);

                    /**
                     * 判断参数 FailoverSwitch 是否已赋值
                     * @return FailoverSwitch 是否已赋值
                     */
                    bool FailoverSwitchHasBeenSet() const;

                    /**
                     * 获取Healthy threshold. The number of consecutive successful health checks required before considering an origin server healthy. Value range: 1 - 10.
                     * @return HealthyThreshold Healthy threshold. The number of consecutive successful health checks required before considering an origin server healthy. Value range: 1 - 10.
                     */
                    uint64_t GetHealthyThreshold() const;

                    /**
                     * 设置Healthy threshold. The number of consecutive successful health checks required before considering an origin server healthy. Value range: 1 - 10.
                     * @param HealthyThreshold Healthy threshold. The number of consecutive successful health checks required before considering an origin server healthy. Value range: 1 - 10.
                     */
                    void SetHealthyThreshold(const uint64_t& _healthyThreshold);

                    /**
                     * 判断参数 HealthyThreshold 是否已赋值
                     * @return HealthyThreshold 是否已赋值
                     */
                    bool HealthyThresholdHasBeenSet() const;

                    /**
                     * 获取Unhealthy threshold. The number of consecutive failed health checks required before considering an origin server unhealthy. Value range: 1 -10.
                     * @return UnhealthyThreshold Unhealthy threshold. The number of consecutive failed health checks required before considering an origin server unhealthy. Value range: 1 -10.
                     */
                    uint64_t GetUnhealthyThreshold() const;

                    /**
                     * 设置Unhealthy threshold. The number of consecutive failed health checks required before considering an origin server unhealthy. Value range: 1 -10.
                     * @param UnhealthyThreshold Unhealthy threshold. The number of consecutive failed health checks required before considering an origin server unhealthy. Value range: 1 -10.
                     */
                    void SetUnhealthyThreshold(const uint64_t& _unhealthyThreshold);

                    /**
                     * 判断参数 UnhealthyThreshold 是否已赋值
                     * @return UnhealthyThreshold 是否已赋值
                     */
                    bool UnhealthyThresholdHasBeenSet() const;

                private:

                    /**
                     * Listener ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Connection group ID; Either `ProxyId` or `GroupId` must be set, but you cannot set both.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Connection ID; Either `ProxyId` or `GroupId` must be set, but you cannot set both.
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * Listener name
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * Origin server scheduling policy of listeners, which supports round robin (rr), weighted round robin (wrr), and least connections (lc).
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * Time interval of origin server health check (unit: seconds). Value range: [5, 300].
                     */
                    uint64_t m_delayLoop;
                    bool m_delayLoopHasBeenSet;

                    /**
                     * Response timeout of origin server health check (unit: seconds). Value range: [2, 60]. The timeout value shall be less than the time interval for health check DelayLoop.
                     */
                    uint64_t m_connectTimeout;
                    bool m_connectTimeoutHasBeenSet;

                    /**
                     * Whether to enable health check. 1: enable; 0: disable.
                     */
                    uint64_t m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * Whether to enable the primary/secondary origin server mode. Valid values: 1 (enable) and 0 (disable). It cannot be enabled for domain name origin servers.
                     */
                    uint64_t m_failoverSwitch;
                    bool m_failoverSwitchHasBeenSet;

                    /**
                     * Healthy threshold. The number of consecutive successful health checks required before considering an origin server healthy. Value range: 1 - 10.
                     */
                    uint64_t m_healthyThreshold;
                    bool m_healthyThresholdHasBeenSet;

                    /**
                     * Unhealthy threshold. The number of consecutive failed health checks required before considering an origin server unhealthy. Value range: 1 -10.
                     */
                    uint64_t m_unhealthyThreshold;
                    bool m_unhealthyThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYTCPLISTENERATTRIBUTEREQUEST_H_
