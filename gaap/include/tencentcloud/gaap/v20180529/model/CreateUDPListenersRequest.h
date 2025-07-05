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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEUDPLISTENERSREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEUDPLISTENERSREQUEST_H_

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
                * CreateUDPListeners request structure.
                */
                class CreateUDPListenersRequest : public AbstractModel
                {
                public:
                    CreateUDPListenersRequest();
                    ~CreateUDPListenersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Listener name
                     * @return ListenerName Listener name
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置Listener name
                     * @param _listenerName Listener name
                     * 
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     * 
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取List of listener ports
                     * @return Ports List of listener ports
                     * 
                     */
                    std::vector<uint64_t> GetPorts() const;

                    /**
                     * 设置List of listener ports
                     * @param _ports List of listener ports
                     * 
                     */
                    void SetPorts(const std::vector<uint64_t>& _ports);

                    /**
                     * 判断参数 Ports 是否已赋值
                     * @return Ports 是否已赋值
                     * 
                     */
                    bool PortsHasBeenSet() const;

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
                     * 获取The origin server type. Values: `IP` (IP address); `DOMAIN` (domain name).
                     * @return RealServerType The origin server type. Values: `IP` (IP address); `DOMAIN` (domain name).
                     * 
                     */
                    std::string GetRealServerType() const;

                    /**
                     * 设置The origin server type. Values: `IP` (IP address); `DOMAIN` (domain name).
                     * @param _realServerType The origin server type. Values: `IP` (IP address); `DOMAIN` (domain name).
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
                     * 获取Connection ID; Either `ProxyId` or `GroupId` must be set, but you cannot set both.
                     * @return ProxyId Connection ID; Either `ProxyId` or `GroupId` must be set, but you cannot set both.
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置Connection ID; Either `ProxyId` or `GroupId` must be set, but you cannot set both.
                     * @param _proxyId Connection ID; Either `ProxyId` or `GroupId` must be set, but you cannot set both.
                     * 
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取Connection group ID; Either `ProxyId` or `GroupId` must be set, but you cannot set both.
                     * @return GroupId Connection group ID; Either `ProxyId` or `GroupId` must be set, but you cannot set both.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Connection group ID; Either `ProxyId` or `GroupId` must be set, but you cannot set both.
                     * @param _groupId Connection group ID; Either `ProxyId` or `GroupId` must be set, but you cannot set both.
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取List of origin server ports, which only supports the listeners of version 1.0 and connection group.
                     * @return RealServerPorts List of origin server ports, which only supports the listeners of version 1.0 and connection group.
                     * 
                     */
                    std::vector<uint64_t> GetRealServerPorts() const;

                    /**
                     * 设置List of origin server ports, which only supports the listeners of version 1.0 and connection group.
                     * @param _realServerPorts List of origin server ports, which only supports the listeners of version 1.0 and connection group.
                     * 
                     */
                    void SetRealServerPorts(const std::vector<uint64_t>& _realServerPorts);

                    /**
                     * 判断参数 RealServerPorts 是否已赋值
                     * @return RealServerPorts 是否已赋值
                     * 
                     */
                    bool RealServerPortsHasBeenSet() const;

                    /**
                     * 获取Time interval of origin server health check (unit: seconds). Value range: [5, 300].
                     * @return DelayLoop Time interval of origin server health check (unit: seconds). Value range: [5, 300].
                     * 
                     */
                    uint64_t GetDelayLoop() const;

                    /**
                     * 设置Time interval of origin server health check (unit: seconds). Value range: [5, 300].
                     * @param _delayLoop Time interval of origin server health check (unit: seconds). Value range: [5, 300].
                     * 
                     */
                    void SetDelayLoop(const uint64_t& _delayLoop);

                    /**
                     * 判断参数 DelayLoop 是否已赋值
                     * @return DelayLoop 是否已赋值
                     * 
                     */
                    bool DelayLoopHasBeenSet() const;

                    /**
                     * 获取Response timeout of origin server health check (unit: seconds). Value range: [2, 60]. The timeout value shall be less than the time interval for health check DelayLoop.
                     * @return ConnectTimeout Response timeout of origin server health check (unit: seconds). Value range: [2, 60]. The timeout value shall be less than the time interval for health check DelayLoop.
                     * 
                     */
                    uint64_t GetConnectTimeout() const;

                    /**
                     * 设置Response timeout of origin server health check (unit: seconds). Value range: [2, 60]. The timeout value shall be less than the time interval for health check DelayLoop.
                     * @param _connectTimeout Response timeout of origin server health check (unit: seconds). Value range: [2, 60]. The timeout value shall be less than the time interval for health check DelayLoop.
                     * 
                     */
                    void SetConnectTimeout(const uint64_t& _connectTimeout);

                    /**
                     * 判断参数 ConnectTimeout 是否已赋值
                     * @return ConnectTimeout 是否已赋值
                     * 
                     */
                    bool ConnectTimeoutHasBeenSet() const;

                    /**
                     * 获取Healthy threshold. The number of consecutive successful health checks required before considering an origin server healthy. Value range: 1 - 10.
                     * @return HealthyThreshold Healthy threshold. The number of consecutive successful health checks required before considering an origin server healthy. Value range: 1 - 10.
                     * 
                     */
                    uint64_t GetHealthyThreshold() const;

                    /**
                     * 设置Healthy threshold. The number of consecutive successful health checks required before considering an origin server healthy. Value range: 1 - 10.
                     * @param _healthyThreshold Healthy threshold. The number of consecutive successful health checks required before considering an origin server healthy. Value range: 1 - 10.
                     * 
                     */
                    void SetHealthyThreshold(const uint64_t& _healthyThreshold);

                    /**
                     * 判断参数 HealthyThreshold 是否已赋值
                     * @return HealthyThreshold 是否已赋值
                     * 
                     */
                    bool HealthyThresholdHasBeenSet() const;

                    /**
                     * 获取Unhealthy threshold. The number of consecutive failed health checks required before considering an origin server unhealthy. Value range: 1 - 10.
                     * @return UnhealthyThreshold Unhealthy threshold. The number of consecutive failed health checks required before considering an origin server unhealthy. Value range: 1 - 10.
                     * 
                     */
                    uint64_t GetUnhealthyThreshold() const;

                    /**
                     * 设置Unhealthy threshold. The number of consecutive failed health checks required before considering an origin server unhealthy. Value range: 1 - 10.
                     * @param _unhealthyThreshold Unhealthy threshold. The number of consecutive failed health checks required before considering an origin server unhealthy. Value range: 1 - 10.
                     * 
                     */
                    void SetUnhealthyThreshold(const uint64_t& _unhealthyThreshold);

                    /**
                     * 判断参数 UnhealthyThreshold 是否已赋值
                     * @return UnhealthyThreshold 是否已赋值
                     * 
                     */
                    bool UnhealthyThresholdHasBeenSet() const;

                    /**
                     * 获取Whether to enable the primary/secondary origin server mode for failover. Values: `1` (enabled); `0` (disabled). It’s not available if the origin type is `DOMAIN`.
                     * @return FailoverSwitch Whether to enable the primary/secondary origin server mode for failover. Values: `1` (enabled); `0` (disabled). It’s not available if the origin type is `DOMAIN`.
                     * 
                     */
                    int64_t GetFailoverSwitch() const;

                    /**
                     * 设置Whether to enable the primary/secondary origin server mode for failover. Values: `1` (enabled); `0` (disabled). It’s not available if the origin type is `DOMAIN`.
                     * @param _failoverSwitch Whether to enable the primary/secondary origin server mode for failover. Values: `1` (enabled); `0` (disabled). It’s not available if the origin type is `DOMAIN`.
                     * 
                     */
                    void SetFailoverSwitch(const int64_t& _failoverSwitch);

                    /**
                     * 判断参数 FailoverSwitch 是否已赋值
                     * @return FailoverSwitch 是否已赋值
                     * 
                     */
                    bool FailoverSwitchHasBeenSet() const;

                    /**
                     * 获取Whether the health check is enabled for the origin server. Values: `1` (enabled); `0` (disabled).
                     * @return HealthCheck Whether the health check is enabled for the origin server. Values: `1` (enabled); `0` (disabled).
                     * 
                     */
                    uint64_t GetHealthCheck() const;

                    /**
                     * 设置Whether the health check is enabled for the origin server. Values: `1` (enabled); `0` (disabled).
                     * @param _healthCheck Whether the health check is enabled for the origin server. Values: `1` (enabled); `0` (disabled).
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
                     * 获取The health check type. Values: `PORT` (port); `PING` (ping).
                     * @return CheckType The health check type. Values: `PORT` (port); `PING` (ping).
                     * 
                     */
                    std::string GetCheckType() const;

                    /**
                     * 设置The health check type. Values: `PORT` (port); `PING` (ping).
                     * @param _checkType The health check type. Values: `PORT` (port); `PING` (ping).
                     * 
                     */
                    void SetCheckType(const std::string& _checkType);

                    /**
                     * 判断参数 CheckType 是否已赋值
                     * @return CheckType 是否已赋值
                     * 
                     */
                    bool CheckTypeHasBeenSet() const;

                    /**
                     * 获取The health probe port.
                     * @return CheckPort The health probe port.
                     * 
                     */
                    int64_t GetCheckPort() const;

                    /**
                     * 设置The health probe port.
                     * @param _checkPort The health probe port.
                     * 
                     */
                    void SetCheckPort(const int64_t& _checkPort);

                    /**
                     * 判断参数 CheckPort 是否已赋值
                     * @return CheckPort 是否已赋值
                     * 
                     */
                    bool CheckPortHasBeenSet() const;

                    /**
                     * 获取The UDP message type. Values: `TEXT` (text). This parameter is used only when `CheckType = PORT`.
                     * @return ContextType The UDP message type. Values: `TEXT` (text). This parameter is used only when `CheckType = PORT`.
                     * 
                     */
                    std::string GetContextType() const;

                    /**
                     * 设置The UDP message type. Values: `TEXT` (text). This parameter is used only when `CheckType = PORT`.
                     * @param _contextType The UDP message type. Values: `TEXT` (text). This parameter is used only when `CheckType = PORT`.
                     * 
                     */
                    void SetContextType(const std::string& _contextType);

                    /**
                     * 判断参数 ContextType 是否已赋值
                     * @return ContextType 是否已赋值
                     * 
                     */
                    bool ContextTypeHasBeenSet() const;

                    /**
                     * 获取The UDP message sent by the health probe port. This parameter is used only when `CheckType = PORT`.
                     * @return SendContext The UDP message sent by the health probe port. This parameter is used only when `CheckType = PORT`.
                     * 
                     */
                    std::string GetSendContext() const;

                    /**
                     * 设置The UDP message sent by the health probe port. This parameter is used only when `CheckType = PORT`.
                     * @param _sendContext The UDP message sent by the health probe port. This parameter is used only when `CheckType = PORT`.
                     * 
                     */
                    void SetSendContext(const std::string& _sendContext);

                    /**
                     * 判断参数 SendContext 是否已赋值
                     * @return SendContext 是否已赋值
                     * 
                     */
                    bool SendContextHasBeenSet() const;

                    /**
                     * 获取The UDP message received by the health probe port. This parameter is used only when `CheckType = PORT`.
                     * @return RecvContext The UDP message received by the health probe port. This parameter is used only when `CheckType = PORT`.
                     * 
                     */
                    std::string GetRecvContext() const;

                    /**
                     * 设置The UDP message received by the health probe port. This parameter is used only when `CheckType = PORT`.
                     * @param _recvContext The UDP message received by the health probe port. This parameter is used only when `CheckType = PORT`.
                     * 
                     */
                    void SetRecvContext(const std::string& _recvContext);

                    /**
                     * 判断参数 RecvContext 是否已赋值
                     * @return RecvContext 是否已赋值
                     * 
                     */
                    bool RecvContextHasBeenSet() const;

                private:

                    /**
                     * Listener name
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * List of listener ports
                     */
                    std::vector<uint64_t> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * The strategy used by the listener to access the origin server. Values: `rr` (round-robin), `wrr` (weighted round-robin), `lc` (the least-connections strategy), `lrtt` (the least-response-time strategy).
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * The origin server type. Values: `IP` (IP address); `DOMAIN` (domain name).
                     */
                    std::string m_realServerType;
                    bool m_realServerTypeHasBeenSet;

                    /**
                     * Connection ID; Either `ProxyId` or `GroupId` must be set, but you cannot set both.
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * Connection group ID; Either `ProxyId` or `GroupId` must be set, but you cannot set both.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * List of origin server ports, which only supports the listeners of version 1.0 and connection group.
                     */
                    std::vector<uint64_t> m_realServerPorts;
                    bool m_realServerPortsHasBeenSet;

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
                     * Healthy threshold. The number of consecutive successful health checks required before considering an origin server healthy. Value range: 1 - 10.
                     */
                    uint64_t m_healthyThreshold;
                    bool m_healthyThresholdHasBeenSet;

                    /**
                     * Unhealthy threshold. The number of consecutive failed health checks required before considering an origin server unhealthy. Value range: 1 - 10.
                     */
                    uint64_t m_unhealthyThreshold;
                    bool m_unhealthyThresholdHasBeenSet;

                    /**
                     * Whether to enable the primary/secondary origin server mode for failover. Values: `1` (enabled); `0` (disabled). It’s not available if the origin type is `DOMAIN`.
                     */
                    int64_t m_failoverSwitch;
                    bool m_failoverSwitchHasBeenSet;

                    /**
                     * Whether the health check is enabled for the origin server. Values: `1` (enabled); `0` (disabled).
                     */
                    uint64_t m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * The health check type. Values: `PORT` (port); `PING` (ping).
                     */
                    std::string m_checkType;
                    bool m_checkTypeHasBeenSet;

                    /**
                     * The health probe port.
                     */
                    int64_t m_checkPort;
                    bool m_checkPortHasBeenSet;

                    /**
                     * The UDP message type. Values: `TEXT` (text). This parameter is used only when `CheckType = PORT`.
                     */
                    std::string m_contextType;
                    bool m_contextTypeHasBeenSet;

                    /**
                     * The UDP message sent by the health probe port. This parameter is used only when `CheckType = PORT`.
                     */
                    std::string m_sendContext;
                    bool m_sendContextHasBeenSet;

                    /**
                     * The UDP message received by the health probe port. This parameter is used only when `CheckType = PORT`.
                     */
                    std::string m_recvContext;
                    bool m_recvContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEUDPLISTENERSREQUEST_H_
