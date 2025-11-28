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
                     * 获取ID of the CLB instance. You can call the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) API to obtain the ID.
                     * @return LoadBalancerId ID of the CLB instance. You can call the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) API to obtain the ID.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置ID of the CLB instance. You can call the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) API to obtain the ID.
                     * @param _loadBalancerId ID of the CLB instance. You can call the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) API to obtain the ID.
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
                     * 获取Ports for creating listeners. Each port corresponds to a listener.
Port range: 1–65535.
                     * @return Ports Ports for creating listeners. Each port corresponds to a listener.
Port range: 1–65535.
                     * 
                     */
                    std::vector<int64_t> GetPorts() const;

                    /**
                     * 设置Ports for creating listeners. Each port corresponds to a listener.
Port range: 1–65535.
                     * @param _ports Ports for creating listeners. Each port corresponds to a listener.
Port range: 1–65535.
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
                     * 获取Listener protocol. Valid values: TCP, UDP, HTTP, HTTPS, TCP_SSL, and QUIC.
                     * @return Protocol Listener protocol. Valid values: TCP, UDP, HTTP, HTTPS, TCP_SSL, and QUIC.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Listener protocol. Valid values: TCP, UDP, HTTP, HTTPS, TCP_SSL, and QUIC.
                     * @param _protocol Listener protocol. Valid values: TCP, UDP, HTTP, HTTPS, TCP_SSL, and QUIC.
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
                     * 获取List of names of listeners to be created. The names correspond to ports one by one. This parameter can be left blank if you do not want to name the listeners immediately.
                     * @return ListenerNames List of names of listeners to be created. The names correspond to ports one by one. This parameter can be left blank if you do not want to name the listeners immediately.
                     * 
                     */
                    std::vector<std::string> GetListenerNames() const;

                    /**
                     * 设置List of names of listeners to be created. The names correspond to ports one by one. This parameter can be left blank if you do not want to name the listeners immediately.
                     * @param _listenerNames List of names of listeners to be created. The names correspond to ports one by one. This parameter can be left blank if you do not want to name the listeners immediately.
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
                     * 获取Health check parameter. This parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners.
                     * @return HealthCheck Health check parameter. This parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners.
                     * 
                     */
                    HealthCheck GetHealthCheck() const;

                    /**
                     * 设置Health check parameter. This parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners.
                     * @param _healthCheck Health check parameter. This parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners.
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
                     * 获取Certificate-related information. The parameter limitations are as follows:
<li>This parameter applies only to TCP_SSL listeners and HTTPS listeners with the SNI feature disabled.</li>
<li>Either this parameter or the MultiCertInfo parameter should be specified when you create a TCP_SSL listener or an HTTPS listener with the SNI feature disabled. You cannot specify them at the same time.</li>
                     * @return Certificate Certificate-related information. The parameter limitations are as follows:
<li>This parameter applies only to TCP_SSL listeners and HTTPS listeners with the SNI feature disabled.</li>
<li>Either this parameter or the MultiCertInfo parameter should be specified when you create a TCP_SSL listener or an HTTPS listener with the SNI feature disabled. You cannot specify them at the same time.</li>
                     * 
                     */
                    CertificateInput GetCertificate() const;

                    /**
                     * 设置Certificate-related information. The parameter limitations are as follows:
<li>This parameter applies only to TCP_SSL listeners and HTTPS listeners with the SNI feature disabled.</li>
<li>Either this parameter or the MultiCertInfo parameter should be specified when you create a TCP_SSL listener or an HTTPS listener with the SNI feature disabled. You cannot specify them at the same time.</li>
                     * @param _certificate Certificate-related information. The parameter limitations are as follows:
<li>This parameter applies only to TCP_SSL listeners and HTTPS listeners with the SNI feature disabled.</li>
<li>Either this parameter or the MultiCertInfo parameter should be specified when you create a TCP_SSL listener or an HTTPS listener with the SNI feature disabled. You cannot specify them at the same time.</li>
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
                     * 获取Session persistence duration, in seconds. Value range: 30–3600. Default value: 0, indicating that session persistence is not enabled by default. This parameter applies only to TCP and UDP listeners.
                     * @return SessionExpireTime Session persistence duration, in seconds. Value range: 30–3600. Default value: 0, indicating that session persistence is not enabled by default. This parameter applies only to TCP and UDP listeners.
                     * 
                     */
                    int64_t GetSessionExpireTime() const;

                    /**
                     * 设置Session persistence duration, in seconds. Value range: 30–3600. Default value: 0, indicating that session persistence is not enabled by default. This parameter applies only to TCP and UDP listeners.
                     * @param _sessionExpireTime Session persistence duration, in seconds. Value range: 30–3600. Default value: 0, indicating that session persistence is not enabled by default. This parameter applies only to TCP and UDP listeners.
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
                     * 获取Listener forwarding mode. valid values: WRR (weighted round-robin), LEAST_CONN (LEAST connections).
Default value: WRR. This parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners.
                     * @return Scheduler Listener forwarding mode. valid values: WRR (weighted round-robin), LEAST_CONN (LEAST connections).
Default value: WRR. This parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners.
                     * 
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置Listener forwarding mode. valid values: WRR (weighted round-robin), LEAST_CONN (LEAST connections).
Default value: WRR. This parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners.
                     * @param _scheduler Listener forwarding mode. valid values: WRR (weighted round-robin), LEAST_CONN (LEAST connections).
Default value: WRR. This parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners.
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
                     * 获取Whether to enable the SNI feature. This parameter applies only to HTTPS listeners. 0: disable; 1: enable.
                     * @return SniSwitch Whether to enable the SNI feature. This parameter applies only to HTTPS listeners. 0: disable; 1: enable.
                     * 
                     */
                    int64_t GetSniSwitch() const;

                    /**
                     * 设置Whether to enable the SNI feature. This parameter applies only to HTTPS listeners. 0: disable; 1: enable.
                     * @param _sniSwitch Whether to enable the SNI feature. This parameter applies only to HTTPS listeners. 0: disable; 1: enable.
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
                     * 获取Real server type. NODE: ordinary node; TARGETGROUP: real server group. This parameter applies only to TCP and UDP listeners. For layer-7 listeners, set the type in forwarding rules.
                     * @return TargetType Real server type. NODE: ordinary node; TARGETGROUP: real server group. This parameter applies only to TCP and UDP listeners. For layer-7 listeners, set the type in forwarding rules.
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置Real server type. NODE: ordinary node; TARGETGROUP: real server group. This parameter applies only to TCP and UDP listeners. For layer-7 listeners, set the type in forwarding rules.
                     * @param _targetType Real server type. NODE: ordinary node; TARGETGROUP: real server group. This parameter applies only to TCP and UDP listeners. For layer-7 listeners, set the type in forwarding rules.
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
                     * 获取Session persistence type. If this parameter is not specified or the value is set to NORMAL, the default session persistence type is used. QUIC_CID: perform session persistence based on QUIC connection ID. If the value is set to QUIC_CID, only the UDP protocol is supported. This parameter applies only to TCP and UDP listeners. For layer-7 listeners, set the type in forwarding rules. (If the value is set to QUIC_CID, the Protocol value should be UDP, the Scheduler value should be WRR, and only IPv4 addresses are supported.)
                     * @return SessionType Session persistence type. If this parameter is not specified or the value is set to NORMAL, the default session persistence type is used. QUIC_CID: perform session persistence based on QUIC connection ID. If the value is set to QUIC_CID, only the UDP protocol is supported. This parameter applies only to TCP and UDP listeners. For layer-7 listeners, set the type in forwarding rules. (If the value is set to QUIC_CID, the Protocol value should be UDP, the Scheduler value should be WRR, and only IPv4 addresses are supported.)
                     * 
                     */
                    std::string GetSessionType() const;

                    /**
                     * 设置Session persistence type. If this parameter is not specified or the value is set to NORMAL, the default session persistence type is used. QUIC_CID: perform session persistence based on QUIC connection ID. If the value is set to QUIC_CID, only the UDP protocol is supported. This parameter applies only to TCP and UDP listeners. For layer-7 listeners, set the type in forwarding rules. (If the value is set to QUIC_CID, the Protocol value should be UDP, the Scheduler value should be WRR, and only IPv4 addresses are supported.)
                     * @param _sessionType Session persistence type. If this parameter is not specified or the value is set to NORMAL, the default session persistence type is used. QUIC_CID: perform session persistence based on QUIC connection ID. If the value is set to QUIC_CID, only the UDP protocol is supported. This parameter applies only to TCP and UDP listeners. For layer-7 listeners, set the type in forwarding rules. (If the value is set to QUIC_CID, the Protocol value should be UDP, the Scheduler value should be WRR, and only IPv4 addresses are supported.)
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
                     * 获取Whether to enable the persistent connection feature. This parameter applies only to HTTP and HTTPS listeners. 0: disable; 1: enable. This feature is disabled by default.
Enable this feature with caution if the maximum number of connections is limited for real servers. This feature is in beta testing. To use it, submit a [beta testing application](https://intl.cloud.tencent.com/apply/p/tsodp6qm21?from_cn_redirect=1).
                     * @return KeepaliveEnable Whether to enable the persistent connection feature. This parameter applies only to HTTP and HTTPS listeners. 0: disable; 1: enable. This feature is disabled by default.
Enable this feature with caution if the maximum number of connections is limited for real servers. This feature is in beta testing. To use it, submit a [beta testing application](https://intl.cloud.tencent.com/apply/p/tsodp6qm21?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetKeepaliveEnable() const;

                    /**
                     * 设置Whether to enable the persistent connection feature. This parameter applies only to HTTP and HTTPS listeners. 0: disable; 1: enable. This feature is disabled by default.
Enable this feature with caution if the maximum number of connections is limited for real servers. This feature is in beta testing. To use it, submit a [beta testing application](https://intl.cloud.tencent.com/apply/p/tsodp6qm21?from_cn_redirect=1).
                     * @param _keepaliveEnable Whether to enable the persistent connection feature. This parameter applies only to HTTP and HTTPS listeners. 0: disable; 1: enable. This feature is disabled by default.
Enable this feature with caution if the maximum number of connections is limited for real servers. This feature is in beta testing. To use it, submit a [beta testing application](https://intl.cloud.tencent.com/apply/p/tsodp6qm21?from_cn_redirect=1).
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
                     * 获取End port. This parameter is required for creating a listener with a port range. In this case, the input parameter Ports allows only one value to indicate the start port. To experience the port range feature, [submit a ticket for application](https://console.cloud.tencent.com/workorder/category).
                     * @return EndPort End port. This parameter is required for creating a listener with a port range. In this case, the input parameter Ports allows only one value to indicate the start port. To experience the port range feature, [submit a ticket for application](https://console.cloud.tencent.com/workorder/category).
                     * 
                     */
                    uint64_t GetEndPort() const;

                    /**
                     * 设置End port. This parameter is required for creating a listener with a port range. In this case, the input parameter Ports allows only one value to indicate the start port. To experience the port range feature, [submit a ticket for application](https://console.cloud.tencent.com/workorder/category).
                     * @param _endPort End port. This parameter is required for creating a listener with a port range. In this case, the input parameter Ports allows only one value to indicate the start port. To experience the port range feature, [submit a ticket for application](https://console.cloud.tencent.com/workorder/category).
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
                     * 获取Reschedules when unbinding real servers. only supported for TCP/UDP listeners. toggle on to enable this feature.
                     * @return DeregisterTargetRst Reschedules when unbinding real servers. only supported for TCP/UDP listeners. toggle on to enable this feature.
                     * 
                     */
                    bool GetDeregisterTargetRst() const;

                    /**
                     * 设置Reschedules when unbinding real servers. only supported for TCP/UDP listeners. toggle on to enable this feature.
                     * @param _deregisterTargetRst Reschedules when unbinding real servers. only supported for TCP/UDP listeners. toggle on to enable this feature.
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
                     * 获取Certificate information. You can import multiple server certificates with different algorithms at the same time. The parameter limitations are as follows:
<li>This parameter applies only to TCP_SSL listeners and HTTPS listeners with the SNI feature disabled.</li>
<li>Either this parameter or the Certificate parameter should be specified when you create a TCP_SSL listener or an HTTPS listener with the SNI feature disabled. You cannot specify them at the same time.</li>
                     * @return MultiCertInfo Certificate information. You can import multiple server certificates with different algorithms at the same time. The parameter limitations are as follows:
<li>This parameter applies only to TCP_SSL listeners and HTTPS listeners with the SNI feature disabled.</li>
<li>Either this parameter or the Certificate parameter should be specified when you create a TCP_SSL listener or an HTTPS listener with the SNI feature disabled. You cannot specify them at the same time.</li>
                     * 
                     */
                    MultiCertInfo GetMultiCertInfo() const;

                    /**
                     * 设置Certificate information. You can import multiple server certificates with different algorithms at the same time. The parameter limitations are as follows:
<li>This parameter applies only to TCP_SSL listeners and HTTPS listeners with the SNI feature disabled.</li>
<li>Either this parameter or the Certificate parameter should be specified when you create a TCP_SSL listener or an HTTPS listener with the SNI feature disabled. You cannot specify them at the same time.</li>
                     * @param _multiCertInfo Certificate information. You can import multiple server certificates with different algorithms at the same time. The parameter limitations are as follows:
<li>This parameter applies only to TCP_SSL listeners and HTTPS listeners with the SNI feature disabled.</li>
<li>Either this parameter or the Certificate parameter should be specified when you create a TCP_SSL listener or an HTTPS listener with the SNI feature disabled. You cannot specify them at the same time.</li>
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
                     * 获取Maximum number of connections to a listener. Currently, this parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners of LCU-supported instances. If this parameter is not specified or the value is set to -1, the maximum number of connections is not limited. This parameter is not supported for classic network-based instances.
                     * @return MaxConn Maximum number of connections to a listener. Currently, this parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners of LCU-supported instances. If this parameter is not specified or the value is set to -1, the maximum number of connections is not limited. This parameter is not supported for classic network-based instances.
                     * 
                     */
                    int64_t GetMaxConn() const;

                    /**
                     * 设置Maximum number of connections to a listener. Currently, this parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners of LCU-supported instances. If this parameter is not specified or the value is set to -1, the maximum number of connections is not limited. This parameter is not supported for classic network-based instances.
                     * @param _maxConn Maximum number of connections to a listener. Currently, this parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners of LCU-supported instances. If this parameter is not specified or the value is set to -1, the maximum number of connections is not limited. This parameter is not supported for classic network-based instances.
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
                     * 获取Maximum number of new connections to a listener. Currently, this parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners of LCU-supported instances. If this parameter is not specified or the value is set to -1, the maximum number of new connections is not limited. This parameter is not supported for classic network-based instances.
                     * @return MaxCps Maximum number of new connections to a listener. Currently, this parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners of LCU-supported instances. If this parameter is not specified or the value is set to -1, the maximum number of new connections is not limited. This parameter is not supported for classic network-based instances.
                     * 
                     */
                    int64_t GetMaxCps() const;

                    /**
                     * 设置Maximum number of new connections to a listener. Currently, this parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners of LCU-supported instances. If this parameter is not specified or the value is set to -1, the maximum number of new connections is not limited. This parameter is not supported for classic network-based instances.
                     * @param _maxCps Maximum number of new connections to a listener. Currently, this parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners of LCU-supported instances. If this parameter is not specified or the value is set to -1, the maximum number of new connections is not limited. This parameter is not supported for classic network-based instances.
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
                     * 获取Specifies the idle connection timeout in seconds. this parameter applies only to TCP/UDP listeners. default value: 900 for TCP listeners and 300 for UDP listeners. value range: 10–900 for shared instances and dedicated instances and 10–1980 for lcu-supported instances. to set a value exceeding the permissible range, [submit a ticket for application](https://console.cloud.tencent.com/workorder/category).
                     * @return IdleConnectTimeout Specifies the idle connection timeout in seconds. this parameter applies only to TCP/UDP listeners. default value: 900 for TCP listeners and 300 for UDP listeners. value range: 10–900 for shared instances and dedicated instances and 10–1980 for lcu-supported instances. to set a value exceeding the permissible range, [submit a ticket for application](https://console.cloud.tencent.com/workorder/category).
                     * 
                     */
                    int64_t GetIdleConnectTimeout() const;

                    /**
                     * 设置Specifies the idle connection timeout in seconds. this parameter applies only to TCP/UDP listeners. default value: 900 for TCP listeners and 300 for UDP listeners. value range: 10–900 for shared instances and dedicated instances and 10–1980 for lcu-supported instances. to set a value exceeding the permissible range, [submit a ticket for application](https://console.cloud.tencent.com/workorder/category).
                     * @param _idleConnectTimeout Specifies the idle connection timeout in seconds. this parameter applies only to TCP/UDP listeners. default value: 900 for TCP listeners and 300 for UDP listeners. value range: 10–900 for shared instances and dedicated instances and 10–1980 for lcu-supported instances. to set a value exceeding the permissible range, [submit a ticket for application](https://console.cloud.tencent.com/workorder/category).
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
                     * 获取Specifies whether PP is supported for TCP_SSL and QUIC.
                     * @return ProxyProtocol Specifies whether PP is supported for TCP_SSL and QUIC.
                     * 
                     */
                    bool GetProxyProtocol() const;

                    /**
                     * 设置Specifies whether PP is supported for TCP_SSL and QUIC.
                     * @param _proxyProtocol Specifies whether PP is supported for TCP_SSL and QUIC.
                     * 
                     */
                    void SetProxyProtocol(const bool& _proxyProtocol);

                    /**
                     * 判断参数 ProxyProtocol 是否已赋值
                     * @return ProxyProtocol 是否已赋值
                     * 
                     */
                    bool ProxyProtocolHasBeenSet() const;

                    /**
                     * 获取Whether SNAT (source IP replacement) is enabled. valid values: True (enabled), False (disabled). disabled by default. note: when SnatEnable is enabled, the client source IP will be replaced, at this point the `pass through client source IP` option is disabled, and vice versa.
                     * @return SnatEnable Whether SNAT (source IP replacement) is enabled. valid values: True (enabled), False (disabled). disabled by default. note: when SnatEnable is enabled, the client source IP will be replaced, at this point the `pass through client source IP` option is disabled, and vice versa.
                     * 
                     */
                    bool GetSnatEnable() const;

                    /**
                     * 设置Whether SNAT (source IP replacement) is enabled. valid values: True (enabled), False (disabled). disabled by default. note: when SnatEnable is enabled, the client source IP will be replaced, at this point the `pass through client source IP` option is disabled, and vice versa.
                     * @param _snatEnable Whether SNAT (source IP replacement) is enabled. valid values: True (enabled), False (disabled). disabled by default. note: when SnatEnable is enabled, the client source IP will be replaced, at this point the `pass through client source IP` option is disabled, and vice versa.
                     * 
                     */
                    void SetSnatEnable(const bool& _snatEnable);

                    /**
                     * 判断参数 SnatEnable 是否已赋值
                     * @return SnatEnable 是否已赋值
                     * 
                     */
                    bool SnatEnableHasBeenSet() const;

                    /**
                     * 获取End port of a listener with a port range. Range of the port: 2–65535.
                     * @return FullEndPorts End port of a listener with a port range. Range of the port: 2–65535.
                     * 
                     */
                    std::vector<int64_t> GetFullEndPorts() const;

                    /**
                     * 设置End port of a listener with a port range. Range of the port: 2–65535.
                     * @param _fullEndPorts End port of a listener with a port range. Range of the port: 2–65535.
                     * 
                     */
                    void SetFullEndPorts(const std::vector<int64_t>& _fullEndPorts);

                    /**
                     * 判断参数 FullEndPorts 是否已赋值
                     * @return FullEndPorts 是否已赋值
                     * 
                     */
                    bool FullEndPortsHasBeenSet() const;

                    /**
                     * 获取Enable private network http listener h2c switch. valid values: True (enable), False (disable).
Disabled by default.
                     * @return H2cSwitch Enable private network http listener h2c switch. valid values: True (enable), False (disable).
Disabled by default.
                     * 
                     */
                    bool GetH2cSwitch() const;

                    /**
                     * 设置Enable private network http listener h2c switch. valid values: True (enable), False (disable).
Disabled by default.
                     * @param _h2cSwitch Enable private network http listener h2c switch. valid values: True (enable), False (disable).
Disabled by default.
                     * 
                     */
                    void SetH2cSwitch(const bool& _h2cSwitch);

                    /**
                     * 判断参数 H2cSwitch 是否已赋值
                     * @return H2cSwitch 是否已赋值
                     * 
                     */
                    bool H2cSwitchHasBeenSet() const;

                    /**
                     * 获取Whether to disable SSL for TCP_SSL listeners. dual-stack binding is still supported after SSL is disabled. valid values: True (disable), False (enable).
Disabled by default.
                     * @return SslCloseSwitch Whether to disable SSL for TCP_SSL listeners. dual-stack binding is still supported after SSL is disabled. valid values: True (disable), False (enable).
Disabled by default.
                     * 
                     */
                    bool GetSslCloseSwitch() const;

                    /**
                     * 设置Whether to disable SSL for TCP_SSL listeners. dual-stack binding is still supported after SSL is disabled. valid values: True (disable), False (enable).
Disabled by default.
                     * @param _sslCloseSwitch Whether to disable SSL for TCP_SSL listeners. dual-stack binding is still supported after SSL is disabled. valid values: True (disable), False (enable).
Disabled by default.
                     * 
                     */
                    void SetSslCloseSwitch(const bool& _sslCloseSwitch);

                    /**
                     * 判断参数 SslCloseSwitch 是否已赋值
                     * @return SslCloseSwitch 是否已赋值
                     * 
                     */
                    bool SslCloseSwitchHasBeenSet() const;

                    /**
                     * 获取Data compression mode. Valid values: transparent (passthrough mode) and compatibility (compatibility mode).
                     * @return DataCompressMode Data compression mode. Valid values: transparent (passthrough mode) and compatibility (compatibility mode).
                     * 
                     */
                    std::string GetDataCompressMode() const;

                    /**
                     * 设置Data compression mode. Valid values: transparent (passthrough mode) and compatibility (compatibility mode).
                     * @param _dataCompressMode Data compression mode. Valid values: transparent (passthrough mode) and compatibility (compatibility mode).
                     * 
                     */
                    void SetDataCompressMode(const std::string& _dataCompressMode);

                    /**
                     * 判断参数 DataCompressMode 是否已赋值
                     * @return DataCompressMode 是否已赋值
                     * 
                     */
                    bool DataCompressModeHasBeenSet() const;

                    /**
                     * 获取Reschedules when setting backend server weight to 0. only supported for TCP/UDP listeners. toggle on to enable this feature.
                     * @return RescheduleTargetZeroWeight Reschedules when setting backend server weight to 0. only supported for TCP/UDP listeners. toggle on to enable this feature.
                     * 
                     */
                    bool GetRescheduleTargetZeroWeight() const;

                    /**
                     * 设置Reschedules when setting backend server weight to 0. only supported for TCP/UDP listeners. toggle on to enable this feature.
                     * @param _rescheduleTargetZeroWeight Reschedules when setting backend server weight to 0. only supported for TCP/UDP listeners. toggle on to enable this feature.
                     * 
                     */
                    void SetRescheduleTargetZeroWeight(const bool& _rescheduleTargetZeroWeight);

                    /**
                     * 判断参数 RescheduleTargetZeroWeight 是否已赋值
                     * @return RescheduleTargetZeroWeight 是否已赋值
                     * 
                     */
                    bool RescheduleTargetZeroWeightHasBeenSet() const;

                    /**
                     * 获取Reschedules when health check exceptions occur on real servers. only supported for TCP/UDP listeners. toggle on to enable this feature.
                     * @return RescheduleUnhealthy Reschedules when health check exceptions occur on real servers. only supported for TCP/UDP listeners. toggle on to enable this feature.
                     * 
                     */
                    bool GetRescheduleUnhealthy() const;

                    /**
                     * 设置Reschedules when health check exceptions occur on real servers. only supported for TCP/UDP listeners. toggle on to enable this feature.
                     * @param _rescheduleUnhealthy Reschedules when health check exceptions occur on real servers. only supported for TCP/UDP listeners. toggle on to enable this feature.
                     * 
                     */
                    void SetRescheduleUnhealthy(const bool& _rescheduleUnhealthy);

                    /**
                     * 判断参数 RescheduleUnhealthy 是否已赋值
                     * @return RescheduleUnhealthy 是否已赋值
                     * 
                     */
                    bool RescheduleUnhealthyHasBeenSet() const;

                    /**
                     * 获取Reschedules when adding or removing backend servers. only supported for TCP/UDP listeners. toggle on to enable this feature.
                     * @return RescheduleExpandTarget Reschedules when adding or removing backend servers. only supported for TCP/UDP listeners. toggle on to enable this feature.
                     * 
                     */
                    bool GetRescheduleExpandTarget() const;

                    /**
                     * 设置Reschedules when adding or removing backend servers. only supported for TCP/UDP listeners. toggle on to enable this feature.
                     * @param _rescheduleExpandTarget Reschedules when adding or removing backend servers. only supported for TCP/UDP listeners. toggle on to enable this feature.
                     * 
                     */
                    void SetRescheduleExpandTarget(const bool& _rescheduleExpandTarget);

                    /**
                     * 判断参数 RescheduleExpandTarget 是否已赋值
                     * @return RescheduleExpandTarget 是否已赋值
                     * 
                     */
                    bool RescheduleExpandTargetHasBeenSet() const;

                    /**
                     * 获取Specifies the trigger start time for rescheduling. value range: 0-3600s. supported only by TCP/UDP listeners.
                     * @return RescheduleStartTime Specifies the trigger start time for rescheduling. value range: 0-3600s. supported only by TCP/UDP listeners.
                     * 
                     */
                    int64_t GetRescheduleStartTime() const;

                    /**
                     * 设置Specifies the trigger start time for rescheduling. value range: 0-3600s. supported only by TCP/UDP listeners.
                     * @param _rescheduleStartTime Specifies the trigger start time for rescheduling. value range: 0-3600s. supported only by TCP/UDP listeners.
                     * 
                     */
                    void SetRescheduleStartTime(const int64_t& _rescheduleStartTime);

                    /**
                     * 判断参数 RescheduleStartTime 是否已赋值
                     * @return RescheduleStartTime 是否已赋值
                     * 
                     */
                    bool RescheduleStartTimeHasBeenSet() const;

                    /**
                     * 获取Rescheduling trigger duration. valid values: 0-3600s. only TCP/UDP listeners support this.
                     * @return RescheduleInterval Rescheduling trigger duration. valid values: 0-3600s. only TCP/UDP listeners support this.
                     * 
                     */
                    int64_t GetRescheduleInterval() const;

                    /**
                     * 设置Rescheduling trigger duration. valid values: 0-3600s. only TCP/UDP listeners support this.
                     * @param _rescheduleInterval Rescheduling trigger duration. valid values: 0-3600s. only TCP/UDP listeners support this.
                     * 
                     */
                    void SetRescheduleInterval(const int64_t& _rescheduleInterval);

                    /**
                     * 判断参数 RescheduleInterval 是否已赋值
                     * @return RescheduleInterval 是否已赋值
                     * 
                     */
                    bool RescheduleIntervalHasBeenSet() const;

                private:

                    /**
                     * ID of the CLB instance. You can call the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) API to obtain the ID.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Ports for creating listeners. Each port corresponds to a listener.
Port range: 1–65535.
                     */
                    std::vector<int64_t> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * Listener protocol. Valid values: TCP, UDP, HTTP, HTTPS, TCP_SSL, and QUIC.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * List of names of listeners to be created. The names correspond to ports one by one. This parameter can be left blank if you do not want to name the listeners immediately.
                     */
                    std::vector<std::string> m_listenerNames;
                    bool m_listenerNamesHasBeenSet;

                    /**
                     * Health check parameter. This parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners.
                     */
                    HealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * Certificate-related information. The parameter limitations are as follows:
<li>This parameter applies only to TCP_SSL listeners and HTTPS listeners with the SNI feature disabled.</li>
<li>Either this parameter or the MultiCertInfo parameter should be specified when you create a TCP_SSL listener or an HTTPS listener with the SNI feature disabled. You cannot specify them at the same time.</li>
                     */
                    CertificateInput m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * Session persistence duration, in seconds. Value range: 30–3600. Default value: 0, indicating that session persistence is not enabled by default. This parameter applies only to TCP and UDP listeners.
                     */
                    int64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                    /**
                     * Listener forwarding mode. valid values: WRR (weighted round-robin), LEAST_CONN (LEAST connections).
Default value: WRR. This parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners.
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * Whether to enable the SNI feature. This parameter applies only to HTTPS listeners. 0: disable; 1: enable.
                     */
                    int64_t m_sniSwitch;
                    bool m_sniSwitchHasBeenSet;

                    /**
                     * Real server type. NODE: ordinary node; TARGETGROUP: real server group. This parameter applies only to TCP and UDP listeners. For layer-7 listeners, set the type in forwarding rules.
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * Session persistence type. If this parameter is not specified or the value is set to NORMAL, the default session persistence type is used. QUIC_CID: perform session persistence based on QUIC connection ID. If the value is set to QUIC_CID, only the UDP protocol is supported. This parameter applies only to TCP and UDP listeners. For layer-7 listeners, set the type in forwarding rules. (If the value is set to QUIC_CID, the Protocol value should be UDP, the Scheduler value should be WRR, and only IPv4 addresses are supported.)
                     */
                    std::string m_sessionType;
                    bool m_sessionTypeHasBeenSet;

                    /**
                     * Whether to enable the persistent connection feature. This parameter applies only to HTTP and HTTPS listeners. 0: disable; 1: enable. This feature is disabled by default.
Enable this feature with caution if the maximum number of connections is limited for real servers. This feature is in beta testing. To use it, submit a [beta testing application](https://intl.cloud.tencent.com/apply/p/tsodp6qm21?from_cn_redirect=1).
                     */
                    int64_t m_keepaliveEnable;
                    bool m_keepaliveEnableHasBeenSet;

                    /**
                     * End port. This parameter is required for creating a listener with a port range. In this case, the input parameter Ports allows only one value to indicate the start port. To experience the port range feature, [submit a ticket for application](https://console.cloud.tencent.com/workorder/category).
                     */
                    uint64_t m_endPort;
                    bool m_endPortHasBeenSet;

                    /**
                     * Reschedules when unbinding real servers. only supported for TCP/UDP listeners. toggle on to enable this feature.
                     */
                    bool m_deregisterTargetRst;
                    bool m_deregisterTargetRstHasBeenSet;

                    /**
                     * Certificate information. You can import multiple server certificates with different algorithms at the same time. The parameter limitations are as follows:
<li>This parameter applies only to TCP_SSL listeners and HTTPS listeners with the SNI feature disabled.</li>
<li>Either this parameter or the Certificate parameter should be specified when you create a TCP_SSL listener or an HTTPS listener with the SNI feature disabled. You cannot specify them at the same time.</li>
                     */
                    MultiCertInfo m_multiCertInfo;
                    bool m_multiCertInfoHasBeenSet;

                    /**
                     * Maximum number of connections to a listener. Currently, this parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners of LCU-supported instances. If this parameter is not specified or the value is set to -1, the maximum number of connections is not limited. This parameter is not supported for classic network-based instances.
                     */
                    int64_t m_maxConn;
                    bool m_maxConnHasBeenSet;

                    /**
                     * Maximum number of new connections to a listener. Currently, this parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners of LCU-supported instances. If this parameter is not specified or the value is set to -1, the maximum number of new connections is not limited. This parameter is not supported for classic network-based instances.
                     */
                    int64_t m_maxCps;
                    bool m_maxCpsHasBeenSet;

                    /**
                     * Specifies the idle connection timeout in seconds. this parameter applies only to TCP/UDP listeners. default value: 900 for TCP listeners and 300 for UDP listeners. value range: 10–900 for shared instances and dedicated instances and 10–1980 for lcu-supported instances. to set a value exceeding the permissible range, [submit a ticket for application](https://console.cloud.tencent.com/workorder/category).
                     */
                    int64_t m_idleConnectTimeout;
                    bool m_idleConnectTimeoutHasBeenSet;

                    /**
                     * Specifies whether PP is supported for TCP_SSL and QUIC.
                     */
                    bool m_proxyProtocol;
                    bool m_proxyProtocolHasBeenSet;

                    /**
                     * Whether SNAT (source IP replacement) is enabled. valid values: True (enabled), False (disabled). disabled by default. note: when SnatEnable is enabled, the client source IP will be replaced, at this point the `pass through client source IP` option is disabled, and vice versa.
                     */
                    bool m_snatEnable;
                    bool m_snatEnableHasBeenSet;

                    /**
                     * End port of a listener with a port range. Range of the port: 2–65535.
                     */
                    std::vector<int64_t> m_fullEndPorts;
                    bool m_fullEndPortsHasBeenSet;

                    /**
                     * Enable private network http listener h2c switch. valid values: True (enable), False (disable).
Disabled by default.
                     */
                    bool m_h2cSwitch;
                    bool m_h2cSwitchHasBeenSet;

                    /**
                     * Whether to disable SSL for TCP_SSL listeners. dual-stack binding is still supported after SSL is disabled. valid values: True (disable), False (enable).
Disabled by default.
                     */
                    bool m_sslCloseSwitch;
                    bool m_sslCloseSwitchHasBeenSet;

                    /**
                     * Data compression mode. Valid values: transparent (passthrough mode) and compatibility (compatibility mode).
                     */
                    std::string m_dataCompressMode;
                    bool m_dataCompressModeHasBeenSet;

                    /**
                     * Reschedules when setting backend server weight to 0. only supported for TCP/UDP listeners. toggle on to enable this feature.
                     */
                    bool m_rescheduleTargetZeroWeight;
                    bool m_rescheduleTargetZeroWeightHasBeenSet;

                    /**
                     * Reschedules when health check exceptions occur on real servers. only supported for TCP/UDP listeners. toggle on to enable this feature.
                     */
                    bool m_rescheduleUnhealthy;
                    bool m_rescheduleUnhealthyHasBeenSet;

                    /**
                     * Reschedules when adding or removing backend servers. only supported for TCP/UDP listeners. toggle on to enable this feature.
                     */
                    bool m_rescheduleExpandTarget;
                    bool m_rescheduleExpandTargetHasBeenSet;

                    /**
                     * Specifies the trigger start time for rescheduling. value range: 0-3600s. supported only by TCP/UDP listeners.
                     */
                    int64_t m_rescheduleStartTime;
                    bool m_rescheduleStartTimeHasBeenSet;

                    /**
                     * Rescheduling trigger duration. valid values: 0-3600s. only TCP/UDP listeners support this.
                     */
                    int64_t m_rescheduleInterval;
                    bool m_rescheduleIntervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREATELISTENERREQUEST_H_
