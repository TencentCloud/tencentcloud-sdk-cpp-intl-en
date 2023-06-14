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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_TCPLISTENER_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_TCPLISTENER_H_

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
                * TCP listener information
                */
                class TCPListener : public AbstractModel
                {
                public:
                    TCPListener();
                    ~TCPListener() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Listener ID
                     * @return ListenerId Listener ID
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Listener ID
                     * @param _listenerId Listener ID
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
                     * 获取Listener port
                     * @return Port Listener port
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Listener port
                     * @param _port Listener port
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Origin server port, which is only valid for the connections of version 1.0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RealServerPort Origin server port, which is only valid for the connections of version 1.0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRealServerPort() const;

                    /**
                     * 设置Origin server port, which is only valid for the connections of version 1.0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _realServerPort Origin server port, which is only valid for the connections of version 1.0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRealServerPort(const uint64_t& _realServerPort);

                    /**
                     * 判断参数 RealServerPort 是否已赋值
                     * @return RealServerPort 是否已赋值
                     * 
                     */
                    bool RealServerPortHasBeenSet() const;

                    /**
                     * 获取Type of the origin server bound to listeners
                     * @return RealServerType Type of the origin server bound to listeners
                     * 
                     */
                    std::string GetRealServerType() const;

                    /**
                     * 设置Type of the origin server bound to listeners
                     * @param _realServerType Type of the origin server bound to listeners
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
                     * 获取Listener protocol: TCP.
                     * @return Protocol Listener protocol: TCP.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Listener protocol: TCP.
                     * @param _protocol Listener protocol: TCP.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
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
                     * 
                     */
                    uint64_t GetListenerStatus() const;

                    /**
                     * 设置Listener status:
`0`: Running
`1`: Creating
`2`: Terminating
`3`: Adjusting origin server
`4`: Adjusting configuration
                     * @param _listenerStatus Listener status:
`0`: Running
`1`: Creating
`2`: Terminating
`3`: Adjusting origin server
`4`: Adjusting configuration
                     * 
                     */
                    void SetListenerStatus(const uint64_t& _listenerStatus);

                    /**
                     * 判断参数 ListenerStatus 是否已赋值
                     * @return ListenerStatus 是否已赋值
                     * 
                     */
                    bool ListenerStatusHasBeenSet() const;

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
                     * 获取Response timeout of origin server health check (unit: seconds).
                     * @return ConnectTimeout Response timeout of origin server health check (unit: seconds).
                     * 
                     */
                    uint64_t GetConnectTimeout() const;

                    /**
                     * 设置Response timeout of origin server health check (unit: seconds).
                     * @param _connectTimeout Response timeout of origin server health check (unit: seconds).
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
                     * 获取Time interval of origin server health check (unit: seconds).
                     * @return DelayLoop Time interval of origin server health check (unit: seconds).
                     * 
                     */
                    uint64_t GetDelayLoop() const;

                    /**
                     * 设置Time interval of origin server health check (unit: seconds).
                     * @param _delayLoop Time interval of origin server health check (unit: seconds).
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
                     * 获取Whether to enable the listener health check:
`0`: Disable
`1`: Enable
                     * @return HealthCheck Whether to enable the listener health check:
`0`: Disable
`1`: Enable
                     * 
                     */
                    uint64_t GetHealthCheck() const;

                    /**
                     * 设置Whether to enable the listener health check:
`0`: Disable
`1`: Enable
                     * @param _healthCheck Whether to enable the listener health check:
`0`: Disable
`1`: Enable
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
                     * 获取Status of the origin server bound to listeners:
`0`: Abnormal
`1`: Normal
                     * @return BindStatus Status of the origin server bound to listeners:
`0`: Abnormal
`1`: Normal
                     * 
                     */
                    uint64_t GetBindStatus() const;

                    /**
                     * 设置Status of the origin server bound to listeners:
`0`: Abnormal
`1`: Normal
                     * @param _bindStatus Status of the origin server bound to listeners:
`0`: Abnormal
`1`: Normal
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
                     * 获取Information of the origin server bound to listeners
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RealServerSet Information of the origin server bound to listeners
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BindRealServer> GetRealServerSet() const;

                    /**
                     * 设置Information of the origin server bound to listeners
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _realServerSet Information of the origin server bound to listeners
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Listener creation time in the format of UNIX timestamp
                     * @return CreateTime Listener creation time in the format of UNIX timestamp
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Listener creation time in the format of UNIX timestamp
                     * @param _createTime Listener creation time in the format of UNIX timestamp
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Describes how the listener obtains client IPs. `0`: TOA; `1`: Proxy Protocol.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClientIPMethod Describes how the listener obtains client IPs. `0`: TOA; `1`: Proxy Protocol.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetClientIPMethod() const;

                    /**
                     * 设置Describes how the listener obtains client IPs. `0`: TOA; `1`: Proxy Protocol.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clientIPMethod Describes how the listener obtains client IPs. `0`: TOA; `1`: Proxy Protocol.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClientIPMethod(const uint64_t& _clientIPMethod);

                    /**
                     * 判断参数 ClientIPMethod 是否已赋值
                     * @return ClientIPMethod 是否已赋值
                     * 
                     */
                    bool ClientIPMethodHasBeenSet() const;

                    /**
                     * 获取Healthy threshold. The number of consecutive successful health checks required before considering an origin server healthy. Value range: 1 - 10.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HealthyThreshold Healthy threshold. The number of consecutive successful health checks required before considering an origin server healthy. Value range: 1 - 10.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetHealthyThreshold() const;

                    /**
                     * 设置Healthy threshold. The number of consecutive successful health checks required before considering an origin server healthy. Value range: 1 - 10.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _healthyThreshold Healthy threshold. The number of consecutive successful health checks required before considering an origin server healthy. Value range: 1 - 10.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UnhealthyThreshold Unhealthy threshold. The number of consecutive failed health checks required before considering an origin server unhealthy. Value range: 1 - 10.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetUnhealthyThreshold() const;

                    /**
                     * 设置Unhealthy threshold. The number of consecutive failed health checks required before considering an origin server unhealthy. Value range: 1 - 10.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _unhealthyThreshold Unhealthy threshold. The number of consecutive failed health checks required before considering an origin server unhealthy. Value range: 1 - 10.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FailoverSwitch Whether to enable the primary/secondary origin server mode for failover. Values: `1` (enabled); `0` (disabled). It’s not available if the origin type is `DOMAIN`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetFailoverSwitch() const;

                    /**
                     * 设置Whether to enable the primary/secondary origin server mode for failover. Values: `1` (enabled); `0` (disabled). It’s not available if the origin type is `DOMAIN`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _failoverSwitch Whether to enable the primary/secondary origin server mode for failover. Values: `1` (enabled); `0` (disabled). It’s not available if the origin type is `DOMAIN`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFailoverSwitch(const uint64_t& _failoverSwitch);

                    /**
                     * 判断参数 FailoverSwitch 是否已赋值
                     * @return FailoverSwitch 是否已赋值
                     * 
                     */
                    bool FailoverSwitchHasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable session persistence. Values: `0` (disable), `1` (enable)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SessionPersist Specifies whether to enable session persistence. Values: `0` (disable), `1` (enable)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetSessionPersist() const;

                    /**
                     * 设置Specifies whether to enable session persistence. Values: `0` (disable), `1` (enable)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sessionPersist Specifies whether to enable session persistence. Values: `0` (disable), `1` (enable)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSessionPersist(const uint64_t& _sessionPersist);

                    /**
                     * 判断参数 SessionPersist 是否已赋值
                     * @return SessionPersist 是否已赋值
                     * 
                     */
                    bool SessionPersistHasBeenSet() const;

                    /**
                     * 获取Connection ID of the listener. A null value is returned if the listener is associated with the connection group.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ProxyId Connection ID of the listener. A null value is returned if the listener is associated with the connection group.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置Connection ID of the listener. A null value is returned if the listener is associated with the connection group.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _proxyId Connection ID of the listener. A null value is returned if the listener is associated with the connection group.
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Connection group ID of the listener. A null value is returned if the listener is associated with a specific connection.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return GroupId Connection group ID of the listener. A null value is returned if the listener is associated with a specific connection.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Connection group ID of the listener. A null value is returned if the listener is associated with a specific connection.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _groupId Connection group ID of the listener. A null value is returned if the listener is associated with a specific connection.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

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
                     * Origin server port, which is only valid for the connections of version 1.0.
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
                     * Listener protocol: TCP.
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
                     * Response timeout of origin server health check (unit: seconds).
                     */
                    uint64_t m_connectTimeout;
                    bool m_connectTimeoutHasBeenSet;

                    /**
                     * Time interval of origin server health check (unit: seconds).
                     */
                    uint64_t m_delayLoop;
                    bool m_delayLoopHasBeenSet;

                    /**
                     * Whether to enable the listener health check:
`0`: Disable
`1`: Enable
                     */
                    uint64_t m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * Status of the origin server bound to listeners:
`0`: Abnormal
`1`: Normal
                     */
                    uint64_t m_bindStatus;
                    bool m_bindStatusHasBeenSet;

                    /**
                     * Information of the origin server bound to listeners
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<BindRealServer> m_realServerSet;
                    bool m_realServerSetHasBeenSet;

                    /**
                     * Listener creation time in the format of UNIX timestamp
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Describes how the listener obtains client IPs. `0`: TOA; `1`: Proxy Protocol.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_clientIPMethod;
                    bool m_clientIPMethodHasBeenSet;

                    /**
                     * Healthy threshold. The number of consecutive successful health checks required before considering an origin server healthy. Value range: 1 - 10.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_healthyThreshold;
                    bool m_healthyThresholdHasBeenSet;

                    /**
                     * Unhealthy threshold. The number of consecutive failed health checks required before considering an origin server unhealthy. Value range: 1 - 10.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_unhealthyThreshold;
                    bool m_unhealthyThresholdHasBeenSet;

                    /**
                     * Whether to enable the primary/secondary origin server mode for failover. Values: `1` (enabled); `0` (disabled). It’s not available if the origin type is `DOMAIN`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_failoverSwitch;
                    bool m_failoverSwitchHasBeenSet;

                    /**
                     * Specifies whether to enable session persistence. Values: `0` (disable), `1` (enable)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_sessionPersist;
                    bool m_sessionPersistHasBeenSet;

                    /**
                     * Connection ID of the listener. A null value is returned if the listener is associated with the connection group.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * Connection group ID of the listener. A null value is returned if the listener is associated with a specific connection.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_TCPLISTENER_H_
