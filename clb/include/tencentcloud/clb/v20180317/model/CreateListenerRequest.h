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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CREATELISTENERREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CREATELISTENERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/HealthCheck.h>
#include <tencentcloud/clb/v20180317/model/CertificateInput.h>
#include <tencentcloud/clb/v20180317/model/MultiCertInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * CreateListener request structure.
                */
                class CreateListenerRequest : public AbstractModel
                {
                public:
                    CreateListenerRequest();
                    ~CreateListenerRequest() = default;
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
                     * 获取Specifies for which ports to create listeners. Each port corresponds to a new listener.
                     * @return Ports Specifies for which ports to create listeners. Each port corresponds to a new listener.
                     * 
                     */
                    std::vector<int64_t> GetPorts() const;

                    /**
                     * 设置Specifies for which ports to create listeners. Each port corresponds to a new listener.
                     * @param _ports Specifies for which ports to create listeners. Each port corresponds to a new listener.
                     * 
                     */
                    void SetPorts(const std::vector<int64_t>& _ports);

                    /**
                     * 判断参数 Ports 是否已赋值
                     * @return Ports 是否已赋值
                     * 
                     */
                    bool PortsHasBeenSet() const;

                    /**
                     * 获取Listener protocol. Values: TCP | UDP | HTTP | HTTPS | TCP_SSL | QUIC
                     * @return Protocol Listener protocol. Values: TCP | UDP | HTTP | HTTPS | TCP_SSL | QUIC
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Listener protocol. Values: TCP | UDP | HTTP | HTTPS | TCP_SSL | QUIC
                     * @param _protocol Listener protocol. Values: TCP | UDP | HTTP | HTTPS | TCP_SSL | QUIC
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
                     * 获取List of names of the listeners to be created. The array of names and array of ports are in one-to-one correspondence. If you do not want to name them now, you do not need to provide this parameter.
                     * @return ListenerNames List of names of the listeners to be created. The array of names and array of ports are in one-to-one correspondence. If you do not want to name them now, you do not need to provide this parameter.
                     * 
                     */
                    std::vector<std::string> GetListenerNames() const;

                    /**
                     * 设置List of names of the listeners to be created. The array of names and array of ports are in one-to-one correspondence. If you do not want to name them now, you do not need to provide this parameter.
                     * @param _listenerNames List of names of the listeners to be created. The array of names and array of ports are in one-to-one correspondence. If you do not want to name them now, you do not need to provide this parameter.
                     * 
                     */
                    void SetListenerNames(const std::vector<std::string>& _listenerNames);

                    /**
                     * 判断参数 ListenerNames 是否已赋值
                     * @return ListenerNames 是否已赋值
                     * 
                     */
                    bool ListenerNamesHasBeenSet() const;

                    /**
                     * 获取Health check parameter. It is only applicable only to TCP, UDP, TCP_SSL and QUIC listeners.
                     * @return HealthCheck Health check parameter. It is only applicable only to TCP, UDP, TCP_SSL and QUIC listeners.
                     * 
                     */
                    HealthCheck GetHealthCheck() const;

                    /**
                     * 设置Health check parameter. It is only applicable only to TCP, UDP, TCP_SSL and QUIC listeners.
                     * @param _healthCheck Health check parameter. It is only applicable only to TCP, UDP, TCP_SSL and QUIC listeners.
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
                     * 获取Certificate information. This parameter is only applicable to TCP_SSL listeners and HTTPS listeners with the SNI feature not enabled. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     * @return Certificate Certificate information. This parameter is only applicable to TCP_SSL listeners and HTTPS listeners with the SNI feature not enabled. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     * 
                     */
                    CertificateInput GetCertificate() const;

                    /**
                     * 设置Certificate information. This parameter is only applicable to TCP_SSL listeners and HTTPS listeners with the SNI feature not enabled. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     * @param _certificate Certificate information. This parameter is only applicable to TCP_SSL listeners and HTTPS listeners with the SNI feature not enabled. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     * 
                     */
                    void SetCertificate(const CertificateInput& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     * 
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取Session persistence time in seconds. Value range: 30-3,600. The default value is 0, indicating that session persistence is not enabled. This parameter is applicable only to TCP/UDP listeners.
                     * @return SessionExpireTime Session persistence time in seconds. Value range: 30-3,600. The default value is 0, indicating that session persistence is not enabled. This parameter is applicable only to TCP/UDP listeners.
                     * 
                     */
                    int64_t GetSessionExpireTime() const;

                    /**
                     * 设置Session persistence time in seconds. Value range: 30-3,600. The default value is 0, indicating that session persistence is not enabled. This parameter is applicable only to TCP/UDP listeners.
                     * @param _sessionExpireTime Session persistence time in seconds. Value range: 30-3,600. The default value is 0, indicating that session persistence is not enabled. This parameter is applicable only to TCP/UDP listeners.
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
                     * 获取Listener forwarding mode. Values: `WRR` (weighted round robin) and `LEAST_CONN` (least connections). 
Default value: `WRR`. This parameter is only applicable to TCP, UDP, TCP_SSL and QUIC listeners.
                     * @return Scheduler Listener forwarding mode. Values: `WRR` (weighted round robin) and `LEAST_CONN` (least connections). 
Default value: `WRR`. This parameter is only applicable to TCP, UDP, TCP_SSL and QUIC listeners.
                     * 
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置Listener forwarding mode. Values: `WRR` (weighted round robin) and `LEAST_CONN` (least connections). 
Default value: `WRR`. This parameter is only applicable to TCP, UDP, TCP_SSL and QUIC listeners.
                     * @param _scheduler Listener forwarding mode. Values: `WRR` (weighted round robin) and `LEAST_CONN` (least connections). 
Default value: `WRR`. This parameter is only applicable to TCP, UDP, TCP_SSL and QUIC listeners.
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
                     * 获取Whether to enable the SNI feature. This parameter is applicable only to HTTPS listeners
                     * @return SniSwitch Whether to enable the SNI feature. This parameter is applicable only to HTTPS listeners
                     * 
                     */
                    int64_t GetSniSwitch() const;

                    /**
                     * 设置Whether to enable the SNI feature. This parameter is applicable only to HTTPS listeners
                     * @param _sniSwitch Whether to enable the SNI feature. This parameter is applicable only to HTTPS listeners
                     * 
                     */
                    void SetSniSwitch(const int64_t& _sniSwitch);

                    /**
                     * 判断参数 SniSwitch 是否已赋值
                     * @return SniSwitch 是否已赋值
                     * 
                     */
                    bool SniSwitchHasBeenSet() const;

                    /**
                     * 获取Target real server type. `NODE`: binding a general node; `TARGETGROUP`: binding a target group.
                     * @return TargetType Target real server type. `NODE`: binding a general node; `TARGETGROUP`: binding a target group.
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置Target real server type. `NODE`: binding a general node; `TARGETGROUP`: binding a target group.
                     * @param _targetType Target real server type. `NODE`: binding a general node; `TARGETGROUP`: binding a target group.
                     * 
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取Session persistence type. Valid values: Normal: the default session persistence type; QUIC_CID: session persistence by QUIC connection ID. The `QUIC_CID` value can only be configured in UDP listeners. If this field is not specified, the default session persistence type will be used.
                     * @return SessionType Session persistence type. Valid values: Normal: the default session persistence type; QUIC_CID: session persistence by QUIC connection ID. The `QUIC_CID` value can only be configured in UDP listeners. If this field is not specified, the default session persistence type will be used.
                     * 
                     */
                    std::string GetSessionType() const;

                    /**
                     * 设置Session persistence type. Valid values: Normal: the default session persistence type; QUIC_CID: session persistence by QUIC connection ID. The `QUIC_CID` value can only be configured in UDP listeners. If this field is not specified, the default session persistence type will be used.
                     * @param _sessionType Session persistence type. Valid values: Normal: the default session persistence type; QUIC_CID: session persistence by QUIC connection ID. The `QUIC_CID` value can only be configured in UDP listeners. If this field is not specified, the default session persistence type will be used.
                     * 
                     */
                    void SetSessionType(const std::string& _sessionType);

                    /**
                     * 判断参数 SessionType 是否已赋值
                     * @return SessionType 是否已赋值
                     * 
                     */
                    bool SessionTypeHasBeenSet() const;

                    /**
                     * 获取Whether to enable a persistent connection. This parameter is applicable only to HTTP and HTTPS listeners. Valid values: 0 (disable; default value) and 1 (enable).
                     * @return KeepaliveEnable Whether to enable a persistent connection. This parameter is applicable only to HTTP and HTTPS listeners. Valid values: 0 (disable; default value) and 1 (enable).
                     * 
                     */
                    int64_t GetKeepaliveEnable() const;

                    /**
                     * 设置Whether to enable a persistent connection. This parameter is applicable only to HTTP and HTTPS listeners. Valid values: 0 (disable; default value) and 1 (enable).
                     * @param _keepaliveEnable Whether to enable a persistent connection. This parameter is applicable only to HTTP and HTTPS listeners. Valid values: 0 (disable; default value) and 1 (enable).
                     * 
                     */
                    void SetKeepaliveEnable(const int64_t& _keepaliveEnable);

                    /**
                     * 判断参数 KeepaliveEnable 是否已赋值
                     * @return KeepaliveEnable 是否已赋值
                     * 
                     */
                    bool KeepaliveEnableHasBeenSet() const;

                    /**
                     * 获取This parameter is used to specify the end port and is required when creating a port range listener. Only one member can be passed in when inputting the `Ports` parameter, which is used to specify the start port. If you want to try the port range feature, please [submit a ticket](https://console.cloud.tencent.com/workorder/category).
                     * @return EndPort This parameter is used to specify the end port and is required when creating a port range listener. Only one member can be passed in when inputting the `Ports` parameter, which is used to specify the start port. If you want to try the port range feature, please [submit a ticket](https://console.cloud.tencent.com/workorder/category).
                     * 
                     */
                    uint64_t GetEndPort() const;

                    /**
                     * 设置This parameter is used to specify the end port and is required when creating a port range listener. Only one member can be passed in when inputting the `Ports` parameter, which is used to specify the start port. If you want to try the port range feature, please [submit a ticket](https://console.cloud.tencent.com/workorder/category).
                     * @param _endPort This parameter is used to specify the end port and is required when creating a port range listener. Only one member can be passed in when inputting the `Ports` parameter, which is used to specify the start port. If you want to try the port range feature, please [submit a ticket](https://console.cloud.tencent.com/workorder/category).
                     * 
                     */
                    void SetEndPort(const uint64_t& _endPort);

                    /**
                     * 判断参数 EndPort 是否已赋值
                     * @return EndPort 是否已赋值
                     * 
                     */
                    bool EndPortHasBeenSet() const;

                    /**
                     * 获取Whether to send the TCP RST packet to the client when unbinding a real server. This parameter is applicable to TCP listeners only.
                     * @return DeregisterTargetRst Whether to send the TCP RST packet to the client when unbinding a real server. This parameter is applicable to TCP listeners only.
                     * 
                     */
                    bool GetDeregisterTargetRst() const;

                    /**
                     * 设置Whether to send the TCP RST packet to the client when unbinding a real server. This parameter is applicable to TCP listeners only.
                     * @param _deregisterTargetRst Whether to send the TCP RST packet to the client when unbinding a real server. This parameter is applicable to TCP listeners only.
                     * 
                     */
                    void SetDeregisterTargetRst(const bool& _deregisterTargetRst);

                    /**
                     * 判断参数 DeregisterTargetRst 是否已赋值
                     * @return DeregisterTargetRst 是否已赋值
                     * 
                     */
                    bool DeregisterTargetRstHasBeenSet() const;

                    /**
                     * 获取Certificate information. You can specify multiple server-side certificates with different algorithm types. This parameter is only applicable to HTTPS listeners with the SNI feature not enabled. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     * @return MultiCertInfo Certificate information. You can specify multiple server-side certificates with different algorithm types. This parameter is only applicable to HTTPS listeners with the SNI feature not enabled. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     * 
                     */
                    MultiCertInfo GetMultiCertInfo() const;

                    /**
                     * 设置Certificate information. You can specify multiple server-side certificates with different algorithm types. This parameter is only applicable to HTTPS listeners with the SNI feature not enabled. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     * @param _multiCertInfo Certificate information. You can specify multiple server-side certificates with different algorithm types. This parameter is only applicable to HTTPS listeners with the SNI feature not enabled. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     * 
                     */
                    void SetMultiCertInfo(const MultiCertInfo& _multiCertInfo);

                    /**
                     * 判断参数 MultiCertInfo 是否已赋值
                     * @return MultiCertInfo 是否已赋值
                     * 
                     */
                    bool MultiCertInfoHasBeenSet() const;

                    /**
                     * 获取Maximum number of concurrent listener connections. It's available for TCP/UDP/TCP_SSL/QUIC listeners. If it's set to `-1` or not specified, the listener speed is not limited. 
                     * @return MaxConn Maximum number of concurrent listener connections. It's available for TCP/UDP/TCP_SSL/QUIC listeners. If it's set to `-1` or not specified, the listener speed is not limited. 
                     * 
                     */
                    int64_t GetMaxConn() const;

                    /**
                     * 设置Maximum number of concurrent listener connections. It's available for TCP/UDP/TCP_SSL/QUIC listeners. If it's set to `-1` or not specified, the listener speed is not limited. 
                     * @param _maxConn Maximum number of concurrent listener connections. It's available for TCP/UDP/TCP_SSL/QUIC listeners. If it's set to `-1` or not specified, the listener speed is not limited. 
                     * 
                     */
                    void SetMaxConn(const int64_t& _maxConn);

                    /**
                     * 判断参数 MaxConn 是否已赋值
                     * @return MaxConn 是否已赋值
                     * 
                     */
                    bool MaxConnHasBeenSet() const;

                    /**
                     * 获取Maximum number of new listener connections. It's available for TCP/UDP/TCP_SSL/QUIC listeners. If it's set to `-1` or not specified, the listener speed is not limited. 
                     * @return MaxCps Maximum number of new listener connections. It's available for TCP/UDP/TCP_SSL/QUIC listeners. If it's set to `-1` or not specified, the listener speed is not limited. 
                     * 
                     */
                    int64_t GetMaxCps() const;

                    /**
                     * 设置Maximum number of new listener connections. It's available for TCP/UDP/TCP_SSL/QUIC listeners. If it's set to `-1` or not specified, the listener speed is not limited. 
                     * @param _maxCps Maximum number of new listener connections. It's available for TCP/UDP/TCP_SSL/QUIC listeners. If it's set to `-1` or not specified, the listener speed is not limited. 
                     * 
                     */
                    void SetMaxCps(const int64_t& _maxCps);

                    /**
                     * 判断参数 MaxCps 是否已赋值
                     * @return MaxCps 是否已赋值
                     * 
                     */
                    bool MaxCpsHasBeenSet() const;

                    /**
                     * 获取Connection idle timeout period (in seconds). It's only available to TCP listeners. Value range: 300-900 for shared and dedicated instances; 300-2000 for LCU-supported CLB instances. It defaults to 900. To set a period longer than 2000 seconds (up to 3600 seconds), please submit a [submit](https://console.cloud.tencent.com/workorder/category). 
                     * @return IdleConnectTimeout Connection idle timeout period (in seconds). It's only available to TCP listeners. Value range: 300-900 for shared and dedicated instances; 300-2000 for LCU-supported CLB instances. It defaults to 900. To set a period longer than 2000 seconds (up to 3600 seconds), please submit a [submit](https://console.cloud.tencent.com/workorder/category). 
                     * 
                     */
                    int64_t GetIdleConnectTimeout() const;

                    /**
                     * 设置Connection idle timeout period (in seconds). It's only available to TCP listeners. Value range: 300-900 for shared and dedicated instances; 300-2000 for LCU-supported CLB instances. It defaults to 900. To set a period longer than 2000 seconds (up to 3600 seconds), please submit a [submit](https://console.cloud.tencent.com/workorder/category). 
                     * @param _idleConnectTimeout Connection idle timeout period (in seconds). It's only available to TCP listeners. Value range: 300-900 for shared and dedicated instances; 300-2000 for LCU-supported CLB instances. It defaults to 900. To set a period longer than 2000 seconds (up to 3600 seconds), please submit a [submit](https://console.cloud.tencent.com/workorder/category). 
                     * 
                     */
                    void SetIdleConnectTimeout(const int64_t& _idleConnectTimeout);

                    /**
                     * 判断参数 IdleConnectTimeout 是否已赋值
                     * @return IdleConnectTimeout 是否已赋值
                     * 
                     */
                    bool IdleConnectTimeoutHasBeenSet() const;

                    /**
                     * 获取
                     * @return SnatEnable 
                     * 
                     */
                    bool GetSnatEnable() const;

                    /**
                     * 设置
                     * @param _snatEnable 
                     * 
                     */
                    void SetSnatEnable(const bool& _snatEnable);

                    /**
                     * 判断参数 SnatEnable 是否已赋值
                     * @return SnatEnable 是否已赋值
                     * 
                     */
                    bool SnatEnableHasBeenSet() const;

                private:

                    /**
                     * CLB instance ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Specifies for which ports to create listeners. Each port corresponds to a new listener.
                     */
                    std::vector<int64_t> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * Listener protocol. Values: TCP | UDP | HTTP | HTTPS | TCP_SSL | QUIC
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * List of names of the listeners to be created. The array of names and array of ports are in one-to-one correspondence. If you do not want to name them now, you do not need to provide this parameter.
                     */
                    std::vector<std::string> m_listenerNames;
                    bool m_listenerNamesHasBeenSet;

                    /**
                     * Health check parameter. It is only applicable only to TCP, UDP, TCP_SSL and QUIC listeners.
                     */
                    HealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * Certificate information. This parameter is only applicable to TCP_SSL listeners and HTTPS listeners with the SNI feature not enabled. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     */
                    CertificateInput m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * Session persistence time in seconds. Value range: 30-3,600. The default value is 0, indicating that session persistence is not enabled. This parameter is applicable only to TCP/UDP listeners.
                     */
                    int64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                    /**
                     * Listener forwarding mode. Values: `WRR` (weighted round robin) and `LEAST_CONN` (least connections). 
Default value: `WRR`. This parameter is only applicable to TCP, UDP, TCP_SSL and QUIC listeners.
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * Whether to enable the SNI feature. This parameter is applicable only to HTTPS listeners
                     */
                    int64_t m_sniSwitch;
                    bool m_sniSwitchHasBeenSet;

                    /**
                     * Target real server type. `NODE`: binding a general node; `TARGETGROUP`: binding a target group.
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * Session persistence type. Valid values: Normal: the default session persistence type; QUIC_CID: session persistence by QUIC connection ID. The `QUIC_CID` value can only be configured in UDP listeners. If this field is not specified, the default session persistence type will be used.
                     */
                    std::string m_sessionType;
                    bool m_sessionTypeHasBeenSet;

                    /**
                     * Whether to enable a persistent connection. This parameter is applicable only to HTTP and HTTPS listeners. Valid values: 0 (disable; default value) and 1 (enable).
                     */
                    int64_t m_keepaliveEnable;
                    bool m_keepaliveEnableHasBeenSet;

                    /**
                     * This parameter is used to specify the end port and is required when creating a port range listener. Only one member can be passed in when inputting the `Ports` parameter, which is used to specify the start port. If you want to try the port range feature, please [submit a ticket](https://console.cloud.tencent.com/workorder/category).
                     */
                    uint64_t m_endPort;
                    bool m_endPortHasBeenSet;

                    /**
                     * Whether to send the TCP RST packet to the client when unbinding a real server. This parameter is applicable to TCP listeners only.
                     */
                    bool m_deregisterTargetRst;
                    bool m_deregisterTargetRstHasBeenSet;

                    /**
                     * Certificate information. You can specify multiple server-side certificates with different algorithm types. This parameter is only applicable to HTTPS listeners with the SNI feature not enabled. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     */
                    MultiCertInfo m_multiCertInfo;
                    bool m_multiCertInfoHasBeenSet;

                    /**
                     * Maximum number of concurrent listener connections. It's available for TCP/UDP/TCP_SSL/QUIC listeners. If it's set to `-1` or not specified, the listener speed is not limited. 
                     */
                    int64_t m_maxConn;
                    bool m_maxConnHasBeenSet;

                    /**
                     * Maximum number of new listener connections. It's available for TCP/UDP/TCP_SSL/QUIC listeners. If it's set to `-1` or not specified, the listener speed is not limited. 
                     */
                    int64_t m_maxCps;
                    bool m_maxCpsHasBeenSet;

                    /**
                     * Connection idle timeout period (in seconds). It's only available to TCP listeners. Value range: 300-900 for shared and dedicated instances; 300-2000 for LCU-supported CLB instances. It defaults to 900. To set a period longer than 2000 seconds (up to 3600 seconds), please submit a [submit](https://console.cloud.tencent.com/workorder/category). 
                     */
                    int64_t m_idleConnectTimeout;
                    bool m_idleConnectTimeoutHasBeenSet;

                    /**
                     * 
                     */
                    bool m_snatEnable;
                    bool m_snatEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREATELISTENERREQUEST_H_
