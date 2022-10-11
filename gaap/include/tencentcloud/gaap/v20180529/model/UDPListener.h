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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_UDPLISTENER_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_UDPLISTENER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * UDP listener information
                */
                class UDPListener : public AbstractModel
                {
                public:
                    UDPListener();
                    ~UDPListener() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Listener port
                     * @return Port Listener port
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Listener port
                     * @param Port Listener port
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Origin server port, which is only valid for the connections or connection groups of version 1.0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RealServerPort Origin server port, which is only valid for the connections or connection groups of version 1.0.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetRealServerPort() const;

                    /**
                     * 设置Origin server port, which is only valid for the connections or connection groups of version 1.0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RealServerPort Origin server port, which is only valid for the connections or connection groups of version 1.0.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRealServerPort(const uint64_t& _realServerPort);

                    /**
                     * 判断参数 RealServerPort 是否已赋值
                     * @return RealServerPort 是否已赋值
                     */
                    bool RealServerPortHasBeenSet() const;

                    /**
                     * 获取Type of the origin server bound to listeners
                     * @return RealServerType Type of the origin server bound to listeners
                     */
                    std::string GetRealServerType() const;

                    /**
                     * 设置Type of the origin server bound to listeners
                     * @param RealServerType Type of the origin server bound to listeners
                     */
                    void SetRealServerType(const std::string& _realServerType);

                    /**
                     * 判断参数 RealServerType 是否已赋值
                     * @return RealServerType 是否已赋值
                     */
                    bool RealServerTypeHasBeenSet() const;

                    /**
                     * 获取Listener protocol: UDP.
                     * @return Protocol Listener protocol: UDP.
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Listener protocol: UDP.
                     * @param Protocol Listener protocol: UDP.
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Listener status:
`0`: Running
`1`: Creating
`2`: Terminating
`3`: Adjusting origin server
`4`: Adjusting configuration
                     * @return ListenerStatus Listener status:
`0`: Running
`1`: Creating
`2`: Terminating
`3`: Adjusting origin server
`4`: Adjusting configuration
                     */
                    uint64_t GetListenerStatus() const;

                    /**
                     * 设置Listener status:
`0`: Running
`1`: Creating
`2`: Terminating
`3`: Adjusting origin server
`4`: Adjusting configuration
                     * @param ListenerStatus Listener status:
`0`: Running
`1`: Creating
`2`: Terminating
`3`: Adjusting origin server
`4`: Adjusting configuration
                     */
                    void SetListenerStatus(const uint64_t& _listenerStatus);

                    /**
                     * 判断参数 ListenerStatus 是否已赋值
                     * @return ListenerStatus 是否已赋值
                     */
                    bool ListenerStatusHasBeenSet() const;

                    /**
                     * 获取The strategy used by the listener to access the origin server. Values: `rr` (round-robin), `wrr` (weighted round-robin), `lc` (the least-connections strategy), `lrtt` (the least-response-time strategy).
                     * @return Scheduler The strategy used by the listener to access the origin server. Values: `rr` (round-robin), `wrr` (weighted round-robin), `lc` (the least-connections strategy), `lrtt` (the least-response-time strategy).
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置The strategy used by the listener to access the origin server. Values: `rr` (round-robin), `wrr` (weighted round-robin), `lc` (the least-connections strategy), `lrtt` (the least-response-time strategy).
                     * @param Scheduler The strategy used by the listener to access the origin server. Values: `rr` (round-robin), `wrr` (weighted round-robin), `lc` (the least-connections strategy), `lrtt` (the least-response-time strategy).
                     */
                    void SetScheduler(const std::string& _scheduler);

                    /**
                     * 判断参数 Scheduler 是否已赋值
                     * @return Scheduler 是否已赋值
                     */
                    bool SchedulerHasBeenSet() const;

                    /**
                     * 获取Origin server binding status of listeners. `0`: Normal; `1`: IP exception; `2`: Domain name resolution exception.
                     * @return BindStatus Origin server binding status of listeners. `0`: Normal; `1`: IP exception; `2`: Domain name resolution exception.
                     */
                    uint64_t GetBindStatus() const;

                    /**
                     * 设置Origin server binding status of listeners. `0`: Normal; `1`: IP exception; `2`: Domain name resolution exception.
                     * @param BindStatus Origin server binding status of listeners. `0`: Normal; `1`: IP exception; `2`: Domain name resolution exception.
                     */
                    void SetBindStatus(const uint64_t& _bindStatus);

                    /**
                     * 判断参数 BindStatus 是否已赋值
                     * @return BindStatus 是否已赋值
                     */
                    bool BindStatusHasBeenSet() const;

                    /**
                     * 获取Information of the origin server bound to listeners
                     * @return RealServerSet Information of the origin server bound to listeners
                     */
                    std::vector<BindRealServer> GetRealServerSet() const;

                    /**
                     * 设置Information of the origin server bound to listeners
                     * @param RealServerSet Information of the origin server bound to listeners
                     */
                    void SetRealServerSet(const std::vector<BindRealServer>& _realServerSet);

                    /**
                     * 判断参数 RealServerSet 是否已赋值
                     * @return RealServerSet 是否已赋值
                     */
                    bool RealServerSetHasBeenSet() const;

                    /**
                     * 获取Listener creation time in the format of UNIX timestamp
                     * @return CreateTime Listener creation time in the format of UNIX timestamp
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Listener creation time in the format of UNIX timestamp
                     * @param CreateTime Listener creation time in the format of UNIX timestamp
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable session persistence. Values: `0` (disable), `1` (enable)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SessionPersist Specifies whether to enable session persistence. Values: `0` (disable), `1` (enable)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetSessionPersist() const;

                    /**
                     * 设置Specifies whether to enable session persistence. Values: `0` (disable), `1` (enable)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SessionPersist Specifies whether to enable session persistence. Values: `0` (disable), `1` (enable)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSessionPersist(const uint64_t& _sessionPersist);

                    /**
                     * 判断参数 SessionPersist 是否已赋值
                     * @return SessionPersist 是否已赋值
                     */
                    bool SessionPersistHasBeenSet() const;

                    /**
                     * 获取Time interval of origin server health check (unit: seconds). Value range: [5, 300].
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return DelayLoop Time interval of origin server health check (unit: seconds). Value range: [5, 300].
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t GetDelayLoop() const;

                    /**
                     * 设置Time interval of origin server health check (unit: seconds). Value range: [5, 300].
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param DelayLoop Time interval of origin server health check (unit: seconds). Value range: [5, 300].
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetDelayLoop(const uint64_t& _delayLoop);

                    /**
                     * 判断参数 DelayLoop 是否已赋值
                     * @return DelayLoop 是否已赋值
                     */
                    bool DelayLoopHasBeenSet() const;

                    /**
                     * 获取Response timeout of origin server health check (unit: seconds). Value range: [2, 60]. The timeout value shall be less than the time interval for health check DelayLoop.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ConnectTimeout Response timeout of origin server health check (unit: seconds). Value range: [2, 60]. The timeout value shall be less than the time interval for health check DelayLoop.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t GetConnectTimeout() const;

                    /**
                     * 设置Response timeout of origin server health check (unit: seconds). Value range: [2, 60]. The timeout value shall be less than the time interval for health check DelayLoop.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param ConnectTimeout Response timeout of origin server health check (unit: seconds). Value range: [2, 60]. The timeout value shall be less than the time interval for health check DelayLoop.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetConnectTimeout(const uint64_t& _connectTimeout);

                    /**
                     * 判断参数 ConnectTimeout 是否已赋值
                     * @return ConnectTimeout 是否已赋值
                     */
                    bool ConnectTimeoutHasBeenSet() const;

                    /**
                     * 获取Healthy threshold. The number of consecutive successful health checks required before considering an origin server healthy. Value range: 1 - 10.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HealthyThreshold Healthy threshold. The number of consecutive successful health checks required before considering an origin server healthy. Value range: 1 - 10.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetHealthyThreshold() const;

                    /**
                     * 设置Healthy threshold. The number of consecutive successful health checks required before considering an origin server healthy. Value range: 1 - 10.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param HealthyThreshold Healthy threshold. The number of consecutive successful health checks required before considering an origin server healthy. Value range: 1 - 10.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHealthyThreshold(const uint64_t& _healthyThreshold);

                    /**
                     * 判断参数 HealthyThreshold 是否已赋值
                     * @return HealthyThreshold 是否已赋值
                     */
                    bool HealthyThresholdHasBeenSet() const;

                    /**
                     * 获取Unhealthy threshold. The number of consecutive failed health checks required before considering an origin server unhealthy. Value range: 1 - 10.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return UnhealthyThreshold Unhealthy threshold. The number of consecutive failed health checks required before considering an origin server unhealthy. Value range: 1 - 10.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t GetUnhealthyThreshold() const;

                    /**
                     * 设置Unhealthy threshold. The number of consecutive failed health checks required before considering an origin server unhealthy. Value range: 1 - 10.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param UnhealthyThreshold Unhealthy threshold. The number of consecutive failed health checks required before considering an origin server unhealthy. Value range: 1 - 10.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetUnhealthyThreshold(const uint64_t& _unhealthyThreshold);

                    /**
                     * 判断参数 UnhealthyThreshold 是否已赋值
                     * @return UnhealthyThreshold 是否已赋值
                     */
                    bool UnhealthyThresholdHasBeenSet() const;

                    /**
                     * 获取Whether to enable the primary/secondary origin server mode for failover. Values: `1` (enabled); `0` (disabled). It’s not available if the origin type is `DOMAIN`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return FailoverSwitch Whether to enable the primary/secondary origin server mode for failover. Values: `1` (enabled); `0` (disabled). It’s not available if the origin type is `DOMAIN`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t GetFailoverSwitch() const;

                    /**
                     * 设置Whether to enable the primary/secondary origin server mode for failover. Values: `1` (enabled); `0` (disabled). It’s not available if the origin type is `DOMAIN`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param FailoverSwitch Whether to enable the primary/secondary origin server mode for failover. Values: `1` (enabled); `0` (disabled). It’s not available if the origin type is `DOMAIN`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetFailoverSwitch(const int64_t& _failoverSwitch);

                    /**
                     * 判断参数 FailoverSwitch 是否已赋值
                     * @return FailoverSwitch 是否已赋值
                     */
                    bool FailoverSwitchHasBeenSet() const;

                    /**
                     * 获取Whether the health check is enabled for the origin server. Values: `1` (enabled); `0` (disabled).
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return HealthCheck Whether the health check is enabled for the origin server. Values: `1` (enabled); `0` (disabled).
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t GetHealthCheck() const;

                    /**
                     * 设置Whether the health check is enabled for the origin server. Values: `1` (enabled); `0` (disabled).
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param HealthCheck Whether the health check is enabled for the origin server. Values: `1` (enabled); `0` (disabled).
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetHealthCheck(const uint64_t& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     */
                    bool HealthCheckHasBeenSet() const;

                    /**
                     * 获取The health check type. Values: `PORT` (port); `PING` (ping).
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return CheckType The health check type. Values: `PORT` (port); `PING` (ping).
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetCheckType() const;

                    /**
                     * 设置The health check type. Values: `PORT` (port); `PING` (ping).
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param CheckType The health check type. Values: `PORT` (port); `PING` (ping).
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetCheckType(const std::string& _checkType);

                    /**
                     * 判断参数 CheckType 是否已赋值
                     * @return CheckType 是否已赋值
                     */
                    bool CheckTypeHasBeenSet() const;

                    /**
                     * 获取The health probe port.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return CheckPort The health probe port.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t GetCheckPort() const;

                    /**
                     * 设置The health probe port.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param CheckPort The health probe port.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetCheckPort(const int64_t& _checkPort);

                    /**
                     * 判断参数 CheckPort 是否已赋值
                     * @return CheckPort 是否已赋值
                     */
                    bool CheckPortHasBeenSet() const;

                    /**
                     * 获取The UDP message type. Values: `TEXT` (text). This parameter is used only when `CheckType = PORT`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ContextType The UDP message type. Values: `TEXT` (text). This parameter is used only when `CheckType = PORT`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetContextType() const;

                    /**
                     * 设置The UDP message type. Values: `TEXT` (text). This parameter is used only when `CheckType = PORT`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param ContextType The UDP message type. Values: `TEXT` (text). This parameter is used only when `CheckType = PORT`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetContextType(const std::string& _contextType);

                    /**
                     * 判断参数 ContextType 是否已赋值
                     * @return ContextType 是否已赋值
                     */
                    bool ContextTypeHasBeenSet() const;

                    /**
                     * 获取The UDP message sent by the health probe port. This parameter is used only when `CheckType = PORT`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return SendContext The UDP message sent by the health probe port. This parameter is used only when `CheckType = PORT`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetSendContext() const;

                    /**
                     * 设置The UDP message sent by the health probe port. This parameter is used only when `CheckType = PORT`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param SendContext The UDP message sent by the health probe port. This parameter is used only when `CheckType = PORT`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetSendContext(const std::string& _sendContext);

                    /**
                     * 判断参数 SendContext 是否已赋值
                     * @return SendContext 是否已赋值
                     */
                    bool SendContextHasBeenSet() const;

                    /**
                     * 获取The UDP message received by the health probe port. This parameter is used only when `CheckType = PORT`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RecvContext The UDP message received by the health probe port. This parameter is used only when `CheckType = PORT`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRecvContext() const;

                    /**
                     * 设置The UDP message received by the health probe port. This parameter is used only when `CheckType = PORT`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RecvContext The UDP message received by the health probe port. This parameter is used only when `CheckType = PORT`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRecvContext(const std::string& _recvContext);

                    /**
                     * 判断参数 RecvContext 是否已赋值
                     * @return RecvContext 是否已赋值
                     */
                    bool RecvContextHasBeenSet() const;

                private:

                    /**
                     * Listener ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Listener name
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * Listener port
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Origin server port, which is only valid for the connections or connection groups of version 1.0.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_realServerPort;
                    bool m_realServerPortHasBeenSet;

                    /**
                     * Type of the origin server bound to listeners
                     */
                    std::string m_realServerType;
                    bool m_realServerTypeHasBeenSet;

                    /**
                     * Listener protocol: UDP.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Listener status:
`0`: Running
`1`: Creating
`2`: Terminating
`3`: Adjusting origin server
`4`: Adjusting configuration
                     */
                    uint64_t m_listenerStatus;
                    bool m_listenerStatusHasBeenSet;

                    /**
                     * The strategy used by the listener to access the origin server. Values: `rr` (round-robin), `wrr` (weighted round-robin), `lc` (the least-connections strategy), `lrtt` (the least-response-time strategy).
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * Origin server binding status of listeners. `0`: Normal; `1`: IP exception; `2`: Domain name resolution exception.
                     */
                    uint64_t m_bindStatus;
                    bool m_bindStatusHasBeenSet;

                    /**
                     * Information of the origin server bound to listeners
                     */
                    std::vector<BindRealServer> m_realServerSet;
                    bool m_realServerSetHasBeenSet;

                    /**
                     * Listener creation time in the format of UNIX timestamp
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Specifies whether to enable session persistence. Values: `0` (disable), `1` (enable)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_sessionPersist;
                    bool m_sessionPersistHasBeenSet;

                    /**
                     * Time interval of origin server health check (unit: seconds). Value range: [5, 300].
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t m_delayLoop;
                    bool m_delayLoopHasBeenSet;

                    /**
                     * Response timeout of origin server health check (unit: seconds). Value range: [2, 60]. The timeout value shall be less than the time interval for health check DelayLoop.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t m_connectTimeout;
                    bool m_connectTimeoutHasBeenSet;

                    /**
                     * Healthy threshold. The number of consecutive successful health checks required before considering an origin server healthy. Value range: 1 - 10.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_healthyThreshold;
                    bool m_healthyThresholdHasBeenSet;

                    /**
                     * Unhealthy threshold. The number of consecutive failed health checks required before considering an origin server unhealthy. Value range: 1 - 10.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t m_unhealthyThreshold;
                    bool m_unhealthyThresholdHasBeenSet;

                    /**
                     * Whether to enable the primary/secondary origin server mode for failover. Values: `1` (enabled); `0` (disabled). It’s not available if the origin type is `DOMAIN`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_failoverSwitch;
                    bool m_failoverSwitchHasBeenSet;

                    /**
                     * Whether the health check is enabled for the origin server. Values: `1` (enabled); `0` (disabled).
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * The health check type. Values: `PORT` (port); `PING` (ping).
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_checkType;
                    bool m_checkTypeHasBeenSet;

                    /**
                     * The health probe port.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_checkPort;
                    bool m_checkPortHasBeenSet;

                    /**
                     * The UDP message type. Values: `TEXT` (text). This parameter is used only when `CheckType = PORT`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_contextType;
                    bool m_contextTypeHasBeenSet;

                    /**
                     * The UDP message sent by the health probe port. This parameter is used only when `CheckType = PORT`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_sendContext;
                    bool m_sendContextHasBeenSet;

                    /**
                     * The UDP message received by the health probe port. This parameter is used only when `CheckType = PORT`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_recvContext;
                    bool m_recvContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_UDPLISTENER_H_
