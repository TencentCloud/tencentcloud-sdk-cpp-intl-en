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
                     * 获取Origin server port, which is only valid for the connections of version 1.0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RealServerPort Origin server port, which is only valid for the connections of version 1.0.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetRealServerPort() const;

                    /**
                     * 设置Origin server port, which is only valid for the connections of version 1.0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RealServerPort Origin server port, which is only valid for the connections of version 1.0.
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
                     * 获取Listener protocol: TCP.
                     * @return Protocol Listener protocol: TCP.
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Listener protocol: TCP.
                     * @param Protocol Listener protocol: TCP.
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Listener status. Valid values:
0: running;
1: creating;
2: terminating;
3: adjusting origin server;
4: adjusting configuration.
                     * @return ListenerStatus Listener status. Valid values:
0: running;
1: creating;
2: terminating;
3: adjusting origin server;
4: adjusting configuration.
                     */
                    uint64_t GetListenerStatus() const;

                    /**
                     * 设置Listener status. Valid values:
0: running;
1: creating;
2: terminating;
3: adjusting origin server;
4: adjusting configuration.
                     * @param ListenerStatus Listener status. Valid values:
0: running;
1: creating;
2: terminating;
3: adjusting origin server;
4: adjusting configuration.
                     */
                    void SetListenerStatus(const uint64_t& _listenerStatus);

                    /**
                     * 判断参数 ListenerStatus 是否已赋值
                     * @return ListenerStatus 是否已赋值
                     */
                    bool ListenerStatusHasBeenSet() const;

                    /**
                     * 获取Origin server access policy of listener. Valid values:
rr: round robin;
wrr: weighted round robin;
lc: least connection.
                     * @return Scheduler Origin server access policy of listener. Valid values:
rr: round robin;
wrr: weighted round robin;
lc: least connection.
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置Origin server access policy of listener. Valid values:
rr: round robin;
wrr: weighted round robin;
lc: least connection.
                     * @param Scheduler Origin server access policy of listener. Valid values:
rr: round robin;
wrr: weighted round robin;
lc: least connection.
                     */
                    void SetScheduler(const std::string& _scheduler);

                    /**
                     * 判断参数 Scheduler 是否已赋值
                     * @return Scheduler 是否已赋值
                     */
                    bool SchedulerHasBeenSet() const;

                    /**
                     * 获取Response timeout of origin server health check (unit: seconds).
                     * @return ConnectTimeout Response timeout of origin server health check (unit: seconds).
                     */
                    uint64_t GetConnectTimeout() const;

                    /**
                     * 设置Response timeout of origin server health check (unit: seconds).
                     * @param ConnectTimeout Response timeout of origin server health check (unit: seconds).
                     */
                    void SetConnectTimeout(const uint64_t& _connectTimeout);

                    /**
                     * 判断参数 ConnectTimeout 是否已赋值
                     * @return ConnectTimeout 是否已赋值
                     */
                    bool ConnectTimeoutHasBeenSet() const;

                    /**
                     * 获取Time interval of origin server health check (unit: seconds).
                     * @return DelayLoop Time interval of origin server health check (unit: seconds).
                     */
                    uint64_t GetDelayLoop() const;

                    /**
                     * 设置Time interval of origin server health check (unit: seconds).
                     * @param DelayLoop Time interval of origin server health check (unit: seconds).
                     */
                    void SetDelayLoop(const uint64_t& _delayLoop);

                    /**
                     * 判断参数 DelayLoop 是否已赋值
                     * @return DelayLoop 是否已赋值
                     */
                    bool DelayLoopHasBeenSet() const;

                    /**
                     * 获取Whether health check is enabled for listener. Valid values:
0: disabled;
1: enabled
                     * @return HealthCheck Whether health check is enabled for listener. Valid values:
0: disabled;
1: enabled
                     */
                    uint64_t GetHealthCheck() const;

                    /**
                     * 设置Whether health check is enabled for listener. Valid values:
0: disabled;
1: enabled
                     * @param HealthCheck Whether health check is enabled for listener. Valid values:
0: disabled;
1: enabled
                     */
                    void SetHealthCheck(const uint64_t& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     */
                    bool HealthCheckHasBeenSet() const;

                    /**
                     * 获取Status of origin server bound to listener. Valid values:
0: exceptional;
1: normal.
                     * @return BindStatus Status of origin server bound to listener. Valid values:
0: exceptional;
1: normal.
                     */
                    uint64_t GetBindStatus() const;

                    /**
                     * 设置Status of origin server bound to listener. Valid values:
0: exceptional;
1: normal.
                     * @param BindStatus Status of origin server bound to listener. Valid values:
0: exceptional;
1: normal.
                     */
                    void SetBindStatus(const uint64_t& _bindStatus);

                    /**
                     * 判断参数 BindStatus 是否已赋值
                     * @return BindStatus 是否已赋值
                     */
                    bool BindStatusHasBeenSet() const;

                    /**
                     * 获取Information of the origin server bound to listeners
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RealServerSet Information of the origin server bound to listeners
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<BindRealServer> GetRealServerSet() const;

                    /**
                     * 设置Information of the origin server bound to listeners
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RealServerSet Information of the origin server bound to listeners
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRealServerSet(const std::vector<BindRealServer>& _realServerSet);

                    /**
                     * 判断参数 RealServerSet 是否已赋值
                     * @return RealServerSet 是否已赋值
                     */
                    bool RealServerSetHasBeenSet() const;

                    /**
                     * 获取Listener creation time; using UNIX timestamp.
                     * @return CreateTime Listener creation time; using UNIX timestamp.
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Listener creation time; using UNIX timestamp.
                     * @param CreateTime Listener creation time; using UNIX timestamp.
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

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
                     * Listener status. Valid values:
0: running;
1: creating;
2: terminating;
3: adjusting origin server;
4: adjusting configuration.
                     */
                    uint64_t m_listenerStatus;
                    bool m_listenerStatusHasBeenSet;

                    /**
                     * Origin server access policy of listener. Valid values:
rr: round robin;
wrr: weighted round robin;
lc: least connection.
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
                     * Whether health check is enabled for listener. Valid values:
0: disabled;
1: enabled
                     */
                    uint64_t m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * Status of origin server bound to listener. Valid values:
0: exceptional;
1: normal.
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
                     * Listener creation time; using UNIX timestamp.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_TCPLISTENER_H_
