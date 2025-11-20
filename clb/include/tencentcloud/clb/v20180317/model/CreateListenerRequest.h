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
                     * 获取Listener forwarding method. Valid values: WRR (weighted round-robin), LEAST_CONN (least connections), and IP_HASH (IP address hash).
Default value: WRR. This parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners.
                     * @return Scheduler Listener forwarding method. Valid values: WRR (weighted round-robin), LEAST_CONN (least connections), and IP_HASH (IP address hash).
Default value: WRR. This parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners.
                     * 
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置Listener forwarding method. Valid values: WRR (weighted round-robin), LEAST_CONN (least connections), and IP_HASH (IP address hash).
Default value: WRR. This parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners.
                     * @param _scheduler Listener forwarding method. Valid values: WRR (weighted round-robin), LEAST_CONN (least connections), and IP_HASH (IP address hash).
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
                     * 获取Whether to send an RST packet to the client when a listener is unbound from a real server. This parameter applies only to TCP listeners.
                     * @return DeregisterTargetRst Whether to send an RST packet to the client when a listener is unbound from a real server. This parameter applies only to TCP listeners.
                     * 
                     */
                    bool GetDeregisterTargetRst() const;

                    /**
                     * 设置Whether to send an RST packet to the client when a listener is unbound from a real server. This parameter applies only to TCP listeners.
                     * @param _deregisterTargetRst Whether to send an RST packet to the client when a listener is unbound from a real server. This parameter applies only to TCP listeners.
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
                     * 获取Idle connection timeout, in seconds. This parameter applies only to TCP listeners. Value range: 300–900 for shared instances and dedicated instances and 300–1980 for LCU-supported instances. To set a value, [submit a ticket for application](https://console.cloud.tencent.com/workorder/category).
                     * @return IdleConnectTimeout Idle connection timeout, in seconds. This parameter applies only to TCP listeners. Value range: 300–900 for shared instances and dedicated instances and 300–1980 for LCU-supported instances. To set a value, [submit a ticket for application](https://console.cloud.tencent.com/workorder/category).
                     * 
                     */
                    int64_t GetIdleConnectTimeout() const;

                    /**
                     * 设置Idle connection timeout, in seconds. This parameter applies only to TCP listeners. Value range: 300–900 for shared instances and dedicated instances and 300–1980 for LCU-supported instances. To set a value, [submit a ticket for application](https://console.cloud.tencent.com/workorder/category).
                     * @param _idleConnectTimeout Idle connection timeout, in seconds. This parameter applies only to TCP listeners. Value range: 300–900 for shared instances and dedicated instances and 300–1980 for LCU-supported instances. To set a value, [submit a ticket for application](https://console.cloud.tencent.com/workorder/category).
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
                     * @return ProxyProtocol 
                     * 
                     */
                    bool GetProxyProtocol() const;

                    /**
                     * 设置
                     * @param _proxyProtocol 
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
                     * 获取Whether to enable SNAT. True: enable; False: disable.
                     * @return SnatEnable Whether to enable SNAT. True: enable; False: disable.
                     * 
                     */
                    bool GetSnatEnable() const;

                    /**
                     * 设置Whether to enable SNAT. True: enable; False: disable.
                     * @param _snatEnable Whether to enable SNAT. True: enable; False: disable.
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
                     * 获取Whether to enable H2C for a private network HTTP listener. True: enable; False: disable.
                     * @return H2cSwitch Whether to enable H2C for a private network HTTP listener. True: enable; False: disable.
                     * 
                     */
                    bool GetH2cSwitch() const;

                    /**
                     * 设置Whether to enable H2C for a private network HTTP listener. True: enable; False: disable.
                     * @param _h2cSwitch Whether to enable H2C for a private network HTTP listener. True: enable; False: disable.
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
                     * 获取Whether to disable SSL for TCP_SSL listeners. Dual-stack binding is still supported after SSL is disabled. True: disable; False: enable.
                     * @return SslCloseSwitch Whether to disable SSL for TCP_SSL listeners. Dual-stack binding is still supported after SSL is disabled. True: disable; False: enable.
                     * 
                     */
                    bool GetSslCloseSwitch() const;

                    /**
                     * 设置Whether to disable SSL for TCP_SSL listeners. Dual-stack binding is still supported after SSL is disabled. True: disable; False: enable.
                     * @param _sslCloseSwitch Whether to disable SSL for TCP_SSL listeners. Dual-stack binding is still supported after SSL is disabled. True: disable; False: enable.
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
                     * Listener forwarding method. Valid values: WRR (weighted round-robin), LEAST_CONN (least connections), and IP_HASH (IP address hash).
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
                     * Whether to send an RST packet to the client when a listener is unbound from a real server. This parameter applies only to TCP listeners.
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
                     * Idle connection timeout, in seconds. This parameter applies only to TCP listeners. Value range: 300–900 for shared instances and dedicated instances and 300–1980 for LCU-supported instances. To set a value, [submit a ticket for application](https://console.cloud.tencent.com/workorder/category).
                     */
                    int64_t m_idleConnectTimeout;
                    bool m_idleConnectTimeoutHasBeenSet;

                    /**
                     * 
                     */
                    bool m_proxyProtocol;
                    bool m_proxyProtocolHasBeenSet;

                    /**
                     * Whether to enable SNAT. True: enable; False: disable.
                     */
                    bool m_snatEnable;
                    bool m_snatEnableHasBeenSet;

                    /**
                     * End port of a listener with a port range. Range of the port: 2–65535.
                     */
                    std::vector<int64_t> m_fullEndPorts;
                    bool m_fullEndPortsHasBeenSet;

                    /**
                     * Whether to enable H2C for a private network HTTP listener. True: enable; False: disable.
                     */
                    bool m_h2cSwitch;
                    bool m_h2cSwitchHasBeenSet;

                    /**
                     * Whether to disable SSL for TCP_SSL listeners. Dual-stack binding is still supported after SSL is disabled. True: disable; False: enable.
                     */
                    bool m_sslCloseSwitch;
                    bool m_sslCloseSwitchHasBeenSet;

                    /**
                     * Data compression mode. Valid values: transparent (passthrough mode) and compatibility (compatibility mode).
                     */
                    std::string m_dataCompressMode;
                    bool m_dataCompressModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREATELISTENERREQUEST_H_
