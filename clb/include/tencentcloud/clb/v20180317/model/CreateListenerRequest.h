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
                     * 获取<p>ID of the Cloud Load Balancer (CLB) instance. You can call the <a href="https://www.tencentcloud.com/document/product/214/30685?from_cn_redirect=1">DescribeLoadBalancers</a> API to obtain the ID.</p>
                     * @return LoadBalancerId <p>ID of the Cloud Load Balancer (CLB) instance. You can call the <a href="https://www.tencentcloud.com/document/product/214/30685?from_cn_redirect=1">DescribeLoadBalancers</a> API to obtain the ID.</p>
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置<p>ID of the Cloud Load Balancer (CLB) instance. You can call the <a href="https://www.tencentcloud.com/document/product/214/30685?from_cn_redirect=1">DescribeLoadBalancers</a> API to obtain the ID.</p>
                     * @param _loadBalancerId <p>ID of the Cloud Load Balancer (CLB) instance. You can call the <a href="https://www.tencentcloud.com/document/product/214/30685?from_cn_redirect=1">DescribeLoadBalancers</a> API to obtain the ID.</p>
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
                     * 获取<p>Which ports to create listeners on, each port maps to a new listener.<br>Port range: 1–65535</p>
                     * @return Ports <p>Which ports to create listeners on, each port maps to a new listener.<br>Port range: 1–65535</p>
                     * 
                     */
                    std::vector<int64_t> GetPorts() const;

                    /**
                     * 设置<p>Which ports to create listeners on, each port maps to a new listener.<br>Port range: 1–65535</p>
                     * @param _ports <p>Which ports to create listeners on, each port maps to a new listener.<br>Port range: 1–65535</p>
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
                     * 获取<p>Listener protocol. Valid values: TCP, UDP, HTTP, HTTPS, TCP_SSL, and QUIC.</p>
                     * @return Protocol <p>Listener protocol. Valid values: TCP, UDP, HTTP, HTTPS, TCP_SSL, and QUIC.</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>Listener protocol. Valid values: TCP, UDP, HTTP, HTTPS, TCP_SSL, and QUIC.</p>
                     * @param _protocol <p>Listener protocol. Valid values: TCP, UDP, HTTP, HTTPS, TCP_SSL, and QUIC.</p>
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
                     * 获取<p>List of listener names to be created. Names correspond sequentially to Ports. If naming is not immediately necessary, this parameter need not be provided. Naming rule: 1-80 characters including English letters, Chinese characters, digits, connecting line "-", underscore "_" and other common characters (Unicode supplementary characters such as emoji and rare Chinese characters are forbidden).</p>
                     * @return ListenerNames <p>List of listener names to be created. Names correspond sequentially to Ports. If naming is not immediately necessary, this parameter need not be provided. Naming rule: 1-80 characters including English letters, Chinese characters, digits, connecting line "-", underscore "_" and other common characters (Unicode supplementary characters such as emoji and rare Chinese characters are forbidden).</p>
                     * 
                     */
                    std::vector<std::string> GetListenerNames() const;

                    /**
                     * 设置<p>List of listener names to be created. Names correspond sequentially to Ports. If naming is not immediately necessary, this parameter need not be provided. Naming rule: 1-80 characters including English letters, Chinese characters, digits, connecting line "-", underscore "_" and other common characters (Unicode supplementary characters such as emoji and rare Chinese characters are forbidden).</p>
                     * @param _listenerNames <p>List of listener names to be created. Names correspond sequentially to Ports. If naming is not immediately necessary, this parameter need not be provided. Naming rule: 1-80 characters including English letters, Chinese characters, digits, connecting line "-", underscore "_" and other common characters (Unicode supplementary characters such as emoji and rare Chinese characters are forbidden).</p>
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
                     * 获取<p>Health check parameters. This parameter is applicable only to TCP/UDP/TCP_SSL/QUIC listeners.</p>
                     * @return HealthCheck <p>Health check parameters. This parameter is applicable only to TCP/UDP/TCP_SSL/QUIC listeners.</p>
                     * 
                     */
                    HealthCheck GetHealthCheck() const;

                    /**
                     * 设置<p>Health check parameters. This parameter is applicable only to TCP/UDP/TCP_SSL/QUIC listeners.</p>
                     * @param _healthCheck <p>Health check parameters. This parameter is applicable only to TCP/UDP/TCP_SSL/QUIC listeners.</p>
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
                     * 获取<p>Certificate-related information. The limits are as follows:</p><li>This parameter is applicable only to TCP_SSL listeners and HTTPS listeners with SNI feature disabled.</li><li>When creating a TCP_SSL listener or an HTTPS listener with SNI feature disabled, a minimum of this parameter or MultiCertInfo must be specified, but they cannot be specified at the same time.</li>
                     * @return Certificate <p>Certificate-related information. The limits are as follows:</p><li>This parameter is applicable only to TCP_SSL listeners and HTTPS listeners with SNI feature disabled.</li><li>When creating a TCP_SSL listener or an HTTPS listener with SNI feature disabled, a minimum of this parameter or MultiCertInfo must be specified, but they cannot be specified at the same time.</li>
                     * 
                     */
                    CertificateInput GetCertificate() const;

                    /**
                     * 设置<p>Certificate-related information. The limits are as follows:</p><li>This parameter is applicable only to TCP_SSL listeners and HTTPS listeners with SNI feature disabled.</li><li>When creating a TCP_SSL listener or an HTTPS listener with SNI feature disabled, a minimum of this parameter or MultiCertInfo must be specified, but they cannot be specified at the same time.</li>
                     * @param _certificate <p>Certificate-related information. The limits are as follows:</p><li>This parameter is applicable only to TCP_SSL listeners and HTTPS listeners with SNI feature disabled.</li><li>When creating a TCP_SSL listener or an HTTPS listener with SNI feature disabled, a minimum of this parameter or MultiCertInfo must be specified, but they cannot be specified at the same time.</li>
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
                     * 获取<p>Session persistence duration, in seconds. Value range: 30–3600. Default value: 0, indicating that session persistence is not enabled by default. This parameter applies only to TCP and UDP listeners.</p>
                     * @return SessionExpireTime <p>Session persistence duration, in seconds. Value range: 30–3600. Default value: 0, indicating that session persistence is not enabled by default. This parameter applies only to TCP and UDP listeners.</p>
                     * 
                     */
                    int64_t GetSessionExpireTime() const;

                    /**
                     * 设置<p>Session persistence duration, in seconds. Value range: 30–3600. Default value: 0, indicating that session persistence is not enabled by default. This parameter applies only to TCP and UDP listeners.</p>
                     * @param _sessionExpireTime <p>Session persistence duration, in seconds. Value range: 30–3600. Default value: 0, indicating that session persistence is not enabled by default. This parameter applies only to TCP and UDP listeners.</p>
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
                     * 获取<p>Listener forwarding mode. Available values: WRR (weighted round-robin), LEAST_CONN (least connections).<br>Default WRR. This parameter is applicable only to TCP/UDP/TCP_SSL/QUIC listeners.</p>
                     * @return Scheduler <p>Listener forwarding mode. Available values: WRR (weighted round-robin), LEAST_CONN (least connections).<br>Default WRR. This parameter is applicable only to TCP/UDP/TCP_SSL/QUIC listeners.</p>
                     * 
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置<p>Listener forwarding mode. Available values: WRR (weighted round-robin), LEAST_CONN (least connections).<br>Default WRR. This parameter is applicable only to TCP/UDP/TCP_SSL/QUIC listeners.</p>
                     * @param _scheduler <p>Listener forwarding mode. Available values: WRR (weighted round-robin), LEAST_CONN (least connections).<br>Default WRR. This parameter is applicable only to TCP/UDP/TCP_SSL/QUIC listeners.</p>
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
                     * 获取<p>Whether to enable SNI feature. This parameter applies only to HTTPS listeners. 0: not enabled, 1: enable.</p>
                     * @return SniSwitch <p>Whether to enable SNI feature. This parameter applies only to HTTPS listeners. 0: not enabled, 1: enable.</p>
                     * 
                     */
                    int64_t GetSniSwitch() const;

                    /**
                     * 设置<p>Whether to enable SNI feature. This parameter applies only to HTTPS listeners. 0: not enabled, 1: enable.</p>
                     * @param _sniSwitch <p>Whether to enable SNI feature. This parameter applies only to HTTPS listeners. 0: not enabled, 1: enable.</p>
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
                     * 获取<p>Backend target type. NODE indicates binding to a general node. TARGETGROUP indicates binding to a target group. This parameter is applicable only to TCP/UDP listeners. For layer-7 (HTTP/HTTPS) listeners, configure it in forwarding rules.</p>
                     * @return TargetType <p>Backend target type. NODE indicates binding to a general node. TARGETGROUP indicates binding to a target group. This parameter is applicable only to TCP/UDP listeners. For layer-7 (HTTP/HTTPS) listeners, configure it in forwarding rules.</p>
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置<p>Backend target type. NODE indicates binding to a general node. TARGETGROUP indicates binding to a target group. This parameter is applicable only to TCP/UDP listeners. For layer-7 (HTTP/HTTPS) listeners, configure it in forwarding rules.</p>
                     * @param _targetType <p>Backend target type. NODE indicates binding to a general node. TARGETGROUP indicates binding to a target group. This parameter is applicable only to TCP/UDP listeners. For layer-7 (HTTP/HTTPS) listeners, configure it in forwarding rules.</p>
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
                     * 获取<p>Session persistence type. Leaving it blank or passing NORMAL means the default session persistence type. QUIC_CID refers to maintaining the session based on QUIC Connection ID. QUIC_CID supports only UDP Protocol. This parameter is applicable only to TCP/UDP listeners. Layer-7 (HTTP/HTTPS) listeners should set this in forwarding rules. (If QUIC_CID is selected, Protocol must be UDP, Scheduler must be WRR, and it supports only ipv4 concurrently).</p>
                     * @return SessionType <p>Session persistence type. Leaving it blank or passing NORMAL means the default session persistence type. QUIC_CID refers to maintaining the session based on QUIC Connection ID. QUIC_CID supports only UDP Protocol. This parameter is applicable only to TCP/UDP listeners. Layer-7 (HTTP/HTTPS) listeners should set this in forwarding rules. (If QUIC_CID is selected, Protocol must be UDP, Scheduler must be WRR, and it supports only ipv4 concurrently).</p>
                     * 
                     */
                    std::string GetSessionType() const;

                    /**
                     * 设置<p>Session persistence type. Leaving it blank or passing NORMAL means the default session persistence type. QUIC_CID refers to maintaining the session based on QUIC Connection ID. QUIC_CID supports only UDP Protocol. This parameter is applicable only to TCP/UDP listeners. Layer-7 (HTTP/HTTPS) listeners should set this in forwarding rules. (If QUIC_CID is selected, Protocol must be UDP, Scheduler must be WRR, and it supports only ipv4 concurrently).</p>
                     * @param _sessionType <p>Session persistence type. Leaving it blank or passing NORMAL means the default session persistence type. QUIC_CID refers to maintaining the session based on QUIC Connection ID. QUIC_CID supports only UDP Protocol. This parameter is applicable only to TCP/UDP listeners. Layer-7 (HTTP/HTTPS) listeners should set this in forwarding rules. (If QUIC_CID is selected, Protocol must be UDP, Scheduler must be WRR, and it supports only ipv4 concurrently).</p>
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
                     * 获取<p>Whether to enable long connections. This parameter is applicable only to HTTP/HTTPS listeners. 0: off by default; 1: enable. <br>If the backend service has a connection limit, enable with caution. This feature is currently in internal testing. If you need to use it, submit a <a href="https://www.tencentcloud.com/apply/p/tsodp6qm21?from_cn_redirect=1">beta application</a>.</p>
                     * @return KeepaliveEnable <p>Whether to enable long connections. This parameter is applicable only to HTTP/HTTPS listeners. 0: off by default; 1: enable. <br>If the backend service has a connection limit, enable with caution. This feature is currently in internal testing. If you need to use it, submit a <a href="https://www.tencentcloud.com/apply/p/tsodp6qm21?from_cn_redirect=1">beta application</a>.</p>
                     * 
                     */
                    int64_t GetKeepaliveEnable() const;

                    /**
                     * 设置<p>Whether to enable long connections. This parameter is applicable only to HTTP/HTTPS listeners. 0: off by default; 1: enable. <br>If the backend service has a connection limit, enable with caution. This feature is currently in internal testing. If you need to use it, submit a <a href="https://www.tencentcloud.com/apply/p/tsodp6qm21?from_cn_redirect=1">beta application</a>.</p>
                     * @param _keepaliveEnable <p>Whether to enable long connections. This parameter is applicable only to HTTP/HTTPS listeners. 0: off by default; 1: enable. <br>If the backend service has a connection limit, enable with caution. This feature is currently in internal testing. If you need to use it, submit a <a href="https://www.tencentcloud.com/apply/p/tsodp6qm21?from_cn_redirect=1">beta application</a>.</p>
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
                     * 获取<p>End port. This parameter is required for creating a listener with a port range. In this case, the input parameter Ports allows only one value to indicate the start port. To experience the port range feature, [submit a ticket for application](https://console.cloud.tencent.com/workorder/category).</p>
                     * @return EndPort <p>End port. This parameter is required for creating a listener with a port range. In this case, the input parameter Ports allows only one value to indicate the start port. To experience the port range feature, [submit a ticket for application](https://console.cloud.tencent.com/workorder/category).</p>
                     * 
                     */
                    uint64_t GetEndPort() const;

                    /**
                     * 设置<p>End port. This parameter is required for creating a listener with a port range. In this case, the input parameter Ports allows only one value to indicate the start port. To experience the port range feature, [submit a ticket for application](https://console.cloud.tencent.com/workorder/category).</p>
                     * @param _endPort <p>End port. This parameter is required for creating a listener with a port range. In this case, the input parameter Ports allows only one value to indicate the start port. To experience the port range feature, [submit a ticket for application](https://console.cloud.tencent.com/workorder/category).</p>
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
                     * 获取<p>Rescheduling feature, which provides a switch for scaling out the backend service. If the switch is toggled on, rescheduling is triggered when the backend service is unbound. This parameter is applicable only to TCP/UDP listeners.</p>
                     * @return DeregisterTargetRst <p>Rescheduling feature, which provides a switch for scaling out the backend service. If the switch is toggled on, rescheduling is triggered when the backend service is unbound. This parameter is applicable only to TCP/UDP listeners.</p>
                     * 
                     */
                    bool GetDeregisterTargetRst() const;

                    /**
                     * 设置<p>Rescheduling feature, which provides a switch for scaling out the backend service. If the switch is toggled on, rescheduling is triggered when the backend service is unbound. This parameter is applicable only to TCP/UDP listeners.</p>
                     * @param _deregisterTargetRst <p>Rescheduling feature, which provides a switch for scaling out the backend service. If the switch is toggled on, rescheduling is triggered when the backend service is unbound. This parameter is applicable only to TCP/UDP listeners.</p>
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
                     * 获取<p>Certificate information. Multiple server certificates with different algorithm types can be imported at the same time. Parameter constraints are as follows:</p><li>This parameter is applicable only to TCP_SSL listeners and HTTPS listeners with SNI feature disabled.</li><li>When creating a TCP_SSL listener or an HTTPS listener with SNI feature disabled, a minimum of this parameter or Certificate must be specified, but they cannot be specified at the same time.</li>
                     * @return MultiCertInfo <p>Certificate information. Multiple server certificates with different algorithm types can be imported at the same time. Parameter constraints are as follows:</p><li>This parameter is applicable only to TCP_SSL listeners and HTTPS listeners with SNI feature disabled.</li><li>When creating a TCP_SSL listener or an HTTPS listener with SNI feature disabled, a minimum of this parameter or Certificate must be specified, but they cannot be specified at the same time.</li>
                     * 
                     */
                    MultiCertInfo GetMultiCertInfo() const;

                    /**
                     * 设置<p>Certificate information. Multiple server certificates with different algorithm types can be imported at the same time. Parameter constraints are as follows:</p><li>This parameter is applicable only to TCP_SSL listeners and HTTPS listeners with SNI feature disabled.</li><li>When creating a TCP_SSL listener or an HTTPS listener with SNI feature disabled, a minimum of this parameter or Certificate must be specified, but they cannot be specified at the same time.</li>
                     * @param _multiCertInfo <p>Certificate information. Multiple server certificates with different algorithm types can be imported at the same time. Parameter constraints are as follows:</p><li>This parameter is applicable only to TCP_SSL listeners and HTTPS listeners with SNI feature disabled.</li><li>When creating a TCP_SSL listener or an HTTPS listener with SNI feature disabled, a minimum of this parameter or Certificate must be specified, but they cannot be specified at the same time.</li>
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
                     * 获取<p>Maximum number of connections to a listener. Currently, this parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners of LCU-supported instances. If this parameter is not specified or the value is set to -1, the maximum number of connections is not limited. This parameter is not supported for classic network-based instances.</p>
                     * @return MaxConn <p>Maximum number of connections to a listener. Currently, this parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners of LCU-supported instances. If this parameter is not specified or the value is set to -1, the maximum number of connections is not limited. This parameter is not supported for classic network-based instances.</p>
                     * 
                     */
                    int64_t GetMaxConn() const;

                    /**
                     * 设置<p>Maximum number of connections to a listener. Currently, this parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners of LCU-supported instances. If this parameter is not specified or the value is set to -1, the maximum number of connections is not limited. This parameter is not supported for classic network-based instances.</p>
                     * @param _maxConn <p>Maximum number of connections to a listener. Currently, this parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners of LCU-supported instances. If this parameter is not specified or the value is set to -1, the maximum number of connections is not limited. This parameter is not supported for classic network-based instances.</p>
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
                     * 获取<p>Maximum number of new connections to a listener. Currently, this parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners of LCU-supported instances. If this parameter is not specified or the value is set to -1, the maximum number of new connections is not limited. This parameter is not supported for classic network-based instances.</p>
                     * @return MaxCps <p>Maximum number of new connections to a listener. Currently, this parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners of LCU-supported instances. If this parameter is not specified or the value is set to -1, the maximum number of new connections is not limited. This parameter is not supported for classic network-based instances.</p>
                     * 
                     */
                    int64_t GetMaxCps() const;

                    /**
                     * 设置<p>Maximum number of new connections to a listener. Currently, this parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners of LCU-supported instances. If this parameter is not specified or the value is set to -1, the maximum number of new connections is not limited. This parameter is not supported for classic network-based instances.</p>
                     * @param _maxCps <p>Maximum number of new connections to a listener. Currently, this parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners of LCU-supported instances. If this parameter is not specified or the value is set to -1, the maximum number of new connections is not limited. This parameter is not supported for classic network-based instances.</p>
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
                     * 获取<p>Idle connection timeout, in seconds. This parameter applies only to TCP/UDP listeners. Default value: 900 for TCP listeners and 300 for UDP listeners. Value range: 10–900 for shared instances and dedicated instances and 10–1980 for LCU-supported instances. To set a value exceeding the permissible range, <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket for application</a>.</p><p>Permissible range: [10, 1980]</p><p>Measurement unit: seconds</p><p>Default value: 900</p><p>Default value: 900 for TCP listeners and 300 for UDP listeners. Value range: 10–900 for shared instances and dedicated instances and 10–1980 for LCU-supported instances.</p>
                     * @return IdleConnectTimeout <p>Idle connection timeout, in seconds. This parameter applies only to TCP/UDP listeners. Default value: 900 for TCP listeners and 300 for UDP listeners. Value range: 10–900 for shared instances and dedicated instances and 10–1980 for LCU-supported instances. To set a value exceeding the permissible range, <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket for application</a>.</p><p>Permissible range: [10, 1980]</p><p>Measurement unit: seconds</p><p>Default value: 900</p><p>Default value: 900 for TCP listeners and 300 for UDP listeners. Value range: 10–900 for shared instances and dedicated instances and 10–1980 for LCU-supported instances.</p>
                     * 
                     */
                    int64_t GetIdleConnectTimeout() const;

                    /**
                     * 设置<p>Idle connection timeout, in seconds. This parameter applies only to TCP/UDP listeners. Default value: 900 for TCP listeners and 300 for UDP listeners. Value range: 10–900 for shared instances and dedicated instances and 10–1980 for LCU-supported instances. To set a value exceeding the permissible range, <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket for application</a>.</p><p>Permissible range: [10, 1980]</p><p>Measurement unit: seconds</p><p>Default value: 900</p><p>Default value: 900 for TCP listeners and 300 for UDP listeners. Value range: 10–900 for shared instances and dedicated instances and 10–1980 for LCU-supported instances.</p>
                     * @param _idleConnectTimeout <p>Idle connection timeout, in seconds. This parameter applies only to TCP/UDP listeners. Default value: 900 for TCP listeners and 300 for UDP listeners. Value range: 10–900 for shared instances and dedicated instances and 10–1980 for LCU-supported instances. To set a value exceeding the permissible range, <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket for application</a>.</p><p>Permissible range: [10, 1980]</p><p>Measurement unit: seconds</p><p>Default value: 900</p><p>Default value: 900 for TCP listeners and 300 for UDP listeners. Value range: 10–900 for shared instances and dedicated instances and 10–1980 for LCU-supported instances.</p>
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
                     * 获取<p>Whether TCP_SSL and QUIC support PP</p>
                     * @return ProxyProtocol <p>Whether TCP_SSL and QUIC support PP</p>
                     * 
                     */
                    bool GetProxyProtocol() const;

                    /**
                     * 设置<p>Whether TCP_SSL and QUIC support PP</p>
                     * @param _proxyProtocol <p>Whether TCP_SSL and QUIC support PP</p>
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
                     * 获取<p>Whether SNAT (source IP replacement) is enabled, True (enabled), False (disabled). Disabled by default. Note: When SnatEnable is enabled, the client source IP will be replaced. At this point, the <code>Pass through client source IP</code> option is disabled, and vice versa.</p>
                     * @return SnatEnable <p>Whether SNAT (source IP replacement) is enabled, True (enabled), False (disabled). Disabled by default. Note: When SnatEnable is enabled, the client source IP will be replaced. At this point, the <code>Pass through client source IP</code> option is disabled, and vice versa.</p>
                     * 
                     */
                    bool GetSnatEnable() const;

                    /**
                     * 设置<p>Whether SNAT (source IP replacement) is enabled, True (enabled), False (disabled). Disabled by default. Note: When SnatEnable is enabled, the client source IP will be replaced. At this point, the <code>Pass through client source IP</code> option is disabled, and vice versa.</p>
                     * @param _snatEnable <p>Whether SNAT (source IP replacement) is enabled, True (enabled), False (disabled). Disabled by default. Note: When SnatEnable is enabled, the client source IP will be replaced. At this point, the <code>Pass through client source IP</code> option is disabled, and vice versa.</p>
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
                     * 获取<p>End port of a listener with a port range. Range of the port: 2–65535.</p>
                     * @return FullEndPorts <p>End port of a listener with a port range. Range of the port: 2–65535.</p>
                     * 
                     */
                    std::vector<int64_t> GetFullEndPorts() const;

                    /**
                     * 设置<p>End port of a listener with a port range. Range of the port: 2–65535.</p>
                     * @param _fullEndPorts <p>End port of a listener with a port range. Range of the port: 2–65535.</p>
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
                     * 获取<p>Enable the h2c switch for the private network HTTP listener.<br>True (enabled), False (disabled). Disabled by default.<br>Once enabled, the listener only supports creating layer-7 rules with GRPC or GRPCS as the backend forwarding type. When creating rules, explicitly input GRPC or GRPCS in Rules.N.ForwardType.</p>
                     * @return H2cSwitch <p>Enable the h2c switch for the private network HTTP listener.<br>True (enabled), False (disabled). Disabled by default.<br>Once enabled, the listener only supports creating layer-7 rules with GRPC or GRPCS as the backend forwarding type. When creating rules, explicitly input GRPC or GRPCS in Rules.N.ForwardType.</p>
                     * 
                     */
                    bool GetH2cSwitch() const;

                    /**
                     * 设置<p>Enable the h2c switch for the private network HTTP listener.<br>True (enabled), False (disabled). Disabled by default.<br>Once enabled, the listener only supports creating layer-7 rules with GRPC or GRPCS as the backend forwarding type. When creating rules, explicitly input GRPC or GRPCS in Rules.N.ForwardType.</p>
                     * @param _h2cSwitch <p>Enable the h2c switch for the private network HTTP listener.<br>True (enabled), False (disabled). Disabled by default.<br>Once enabled, the listener only supports creating layer-7 rules with GRPC or GRPCS as the backend forwarding type. When creating rules, explicitly input GRPC or GRPCS in Rules.N.ForwardType.</p>
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
                     * 获取<p>Control whether to remove the SSL encryption layer for TCP_SSL listeners. Once enabled, the listener will run as a normal TCP protocol. Available values:</p><ul><li>True: Disable SSL (protocol downgraded to plain text TCP).</li><li>False (default): Keep SSL enabled.</li></ul>
                     * @return SslCloseSwitch <p>Control whether to remove the SSL encryption layer for TCP_SSL listeners. Once enabled, the listener will run as a normal TCP protocol. Available values:</p><ul><li>True: Disable SSL (protocol downgraded to plain text TCP).</li><li>False (default): Keep SSL enabled.</li></ul>
                     * 
                     */
                    bool GetSslCloseSwitch() const;

                    /**
                     * 设置<p>Control whether to remove the SSL encryption layer for TCP_SSL listeners. Once enabled, the listener will run as a normal TCP protocol. Available values:</p><ul><li>True: Disable SSL (protocol downgraded to plain text TCP).</li><li>False (default): Keep SSL enabled.</li></ul>
                     * @param _sslCloseSwitch <p>Control whether to remove the SSL encryption layer for TCP_SSL listeners. Once enabled, the listener will run as a normal TCP protocol. Available values:</p><ul><li>True: Disable SSL (protocol downgraded to plain text TCP).</li><li>False (default): Keep SSL enabled.</li></ul>
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
                     * 获取<p>Data compression mode. Valid values: transparent (passthrough mode) and compatibility (compatibility mode).</p>
                     * @return DataCompressMode <p>Data compression mode. Valid values: transparent (passthrough mode) and compatibility (compatibility mode).</p>
                     * 
                     */
                    std::string GetDataCompressMode() const;

                    /**
                     * 设置<p>Data compression mode. Valid values: transparent (passthrough mode) and compatibility (compatibility mode).</p>
                     * @param _dataCompressMode <p>Data compression mode. Valid values: transparent (passthrough mode) and compatibility (compatibility mode).</p>
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
                     * 获取<p>Rescheduling feature, which provides a switch for changing the weight to 0. If the switch is toggled on, rescheduling is triggered when the weight of a real server is changed to 0. This parameter is applicable only to TCP/UDP listeners.</p>
                     * @return RescheduleTargetZeroWeight <p>Rescheduling feature, which provides a switch for changing the weight to 0. If the switch is toggled on, rescheduling is triggered when the weight of a real server is changed to 0. This parameter is applicable only to TCP/UDP listeners.</p>
                     * 
                     */
                    bool GetRescheduleTargetZeroWeight() const;

                    /**
                     * 设置<p>Rescheduling feature, which provides a switch for changing the weight to 0. If the switch is toggled on, rescheduling is triggered when the weight of a real server is changed to 0. This parameter is applicable only to TCP/UDP listeners.</p>
                     * @param _rescheduleTargetZeroWeight <p>Rescheduling feature, which provides a switch for changing the weight to 0. If the switch is toggled on, rescheduling is triggered when the weight of a real server is changed to 0. This parameter is applicable only to TCP/UDP listeners.</p>
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
                     * 获取<p>Rescheduling feature, which provides a switch for detecting health check exceptions. If the switch is toggled on, rescheduling is triggered when the real server health check fails. This parameter is applicable only to TCP/UDP listeners.</p>
                     * @return RescheduleUnhealthy <p>Rescheduling feature, which provides a switch for detecting health check exceptions. If the switch is toggled on, rescheduling is triggered when the real server health check fails. This parameter is applicable only to TCP/UDP listeners.</p>
                     * 
                     */
                    bool GetRescheduleUnhealthy() const;

                    /**
                     * 设置<p>Rescheduling feature, which provides a switch for detecting health check exceptions. If the switch is toggled on, rescheduling is triggered when the real server health check fails. This parameter is applicable only to TCP/UDP listeners.</p>
                     * @param _rescheduleUnhealthy <p>Rescheduling feature, which provides a switch for detecting health check exceptions. If the switch is toggled on, rescheduling is triggered when the real server health check fails. This parameter is applicable only to TCP/UDP listeners.</p>
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
                     * 获取<p>Rescheduling feature, which provides a switch for scaling out real servers. If the switch is toggled on, rescheduling is triggered when the number of real servers increases or decreases. This parameter is applicable only to TCP/UDP listeners.</p>
                     * @return RescheduleExpandTarget <p>Rescheduling feature, which provides a switch for scaling out real servers. If the switch is toggled on, rescheduling is triggered when the number of real servers increases or decreases. This parameter is applicable only to TCP/UDP listeners.</p>
                     * 
                     */
                    bool GetRescheduleExpandTarget() const;

                    /**
                     * 设置<p>Rescheduling feature, which provides a switch for scaling out real servers. If the switch is toggled on, rescheduling is triggered when the number of real servers increases or decreases. This parameter is applicable only to TCP/UDP listeners.</p>
                     * @param _rescheduleExpandTarget <p>Rescheduling feature, which provides a switch for scaling out real servers. If the switch is toggled on, rescheduling is triggered when the number of real servers increases or decreases. This parameter is applicable only to TCP/UDP listeners.</p>
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
                     * 获取<p>Rescheduling trigger start time. Value range: 0–3600. Unit: s. This parameter is applicable only to TCP/UDP listeners.</p>
                     * @return RescheduleStartTime <p>Rescheduling trigger start time. Value range: 0–3600. Unit: s. This parameter is applicable only to TCP/UDP listeners.</p>
                     * 
                     */
                    int64_t GetRescheduleStartTime() const;

                    /**
                     * 设置<p>Rescheduling trigger start time. Value range: 0–3600. Unit: s. This parameter is applicable only to TCP/UDP listeners.</p>
                     * @param _rescheduleStartTime <p>Rescheduling trigger start time. Value range: 0–3600. Unit: s. This parameter is applicable only to TCP/UDP listeners.</p>
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
                     * 获取<p>Rescheduling trigger duration. Value range: 0–3600. Unit: s. This parameter is applicable only to TCP/UDP listeners.</p>
                     * @return RescheduleInterval <p>Rescheduling trigger duration. Value range: 0–3600. Unit: s. This parameter is applicable only to TCP/UDP listeners.</p>
                     * 
                     */
                    int64_t GetRescheduleInterval() const;

                    /**
                     * 设置<p>Rescheduling trigger duration. Value range: 0–3600. Unit: s. This parameter is applicable only to TCP/UDP listeners.</p>
                     * @param _rescheduleInterval <p>Rescheduling trigger duration. Value range: 0–3600. Unit: s. This parameter is applicable only to TCP/UDP listeners.</p>
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
                     * <p>ID of the Cloud Load Balancer (CLB) instance. You can call the <a href="https://www.tencentcloud.com/document/product/214/30685?from_cn_redirect=1">DescribeLoadBalancers</a> API to obtain the ID.</p>
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * <p>Which ports to create listeners on, each port maps to a new listener.<br>Port range: 1–65535</p>
                     */
                    std::vector<int64_t> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * <p>Listener protocol. Valid values: TCP, UDP, HTTP, HTTPS, TCP_SSL, and QUIC.</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>List of listener names to be created. Names correspond sequentially to Ports. If naming is not immediately necessary, this parameter need not be provided. Naming rule: 1-80 characters including English letters, Chinese characters, digits, connecting line "-", underscore "_" and other common characters (Unicode supplementary characters such as emoji and rare Chinese characters are forbidden).</p>
                     */
                    std::vector<std::string> m_listenerNames;
                    bool m_listenerNamesHasBeenSet;

                    /**
                     * <p>Health check parameters. This parameter is applicable only to TCP/UDP/TCP_SSL/QUIC listeners.</p>
                     */
                    HealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * <p>Certificate-related information. The limits are as follows:</p><li>This parameter is applicable only to TCP_SSL listeners and HTTPS listeners with SNI feature disabled.</li><li>When creating a TCP_SSL listener or an HTTPS listener with SNI feature disabled, a minimum of this parameter or MultiCertInfo must be specified, but they cannot be specified at the same time.</li>
                     */
                    CertificateInput m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * <p>Session persistence duration, in seconds. Value range: 30–3600. Default value: 0, indicating that session persistence is not enabled by default. This parameter applies only to TCP and UDP listeners.</p>
                     */
                    int64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                    /**
                     * <p>Listener forwarding mode. Available values: WRR (weighted round-robin), LEAST_CONN (least connections).<br>Default WRR. This parameter is applicable only to TCP/UDP/TCP_SSL/QUIC listeners.</p>
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * <p>Whether to enable SNI feature. This parameter applies only to HTTPS listeners. 0: not enabled, 1: enable.</p>
                     */
                    int64_t m_sniSwitch;
                    bool m_sniSwitchHasBeenSet;

                    /**
                     * <p>Backend target type. NODE indicates binding to a general node. TARGETGROUP indicates binding to a target group. This parameter is applicable only to TCP/UDP listeners. For layer-7 (HTTP/HTTPS) listeners, configure it in forwarding rules.</p>
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * <p>Session persistence type. Leaving it blank or passing NORMAL means the default session persistence type. QUIC_CID refers to maintaining the session based on QUIC Connection ID. QUIC_CID supports only UDP Protocol. This parameter is applicable only to TCP/UDP listeners. Layer-7 (HTTP/HTTPS) listeners should set this in forwarding rules. (If QUIC_CID is selected, Protocol must be UDP, Scheduler must be WRR, and it supports only ipv4 concurrently).</p>
                     */
                    std::string m_sessionType;
                    bool m_sessionTypeHasBeenSet;

                    /**
                     * <p>Whether to enable long connections. This parameter is applicable only to HTTP/HTTPS listeners. 0: off by default; 1: enable. <br>If the backend service has a connection limit, enable with caution. This feature is currently in internal testing. If you need to use it, submit a <a href="https://www.tencentcloud.com/apply/p/tsodp6qm21?from_cn_redirect=1">beta application</a>.</p>
                     */
                    int64_t m_keepaliveEnable;
                    bool m_keepaliveEnableHasBeenSet;

                    /**
                     * <p>End port. This parameter is required for creating a listener with a port range. In this case, the input parameter Ports allows only one value to indicate the start port. To experience the port range feature, [submit a ticket for application](https://console.cloud.tencent.com/workorder/category).</p>
                     */
                    uint64_t m_endPort;
                    bool m_endPortHasBeenSet;

                    /**
                     * <p>Rescheduling feature, which provides a switch for scaling out the backend service. If the switch is toggled on, rescheduling is triggered when the backend service is unbound. This parameter is applicable only to TCP/UDP listeners.</p>
                     */
                    bool m_deregisterTargetRst;
                    bool m_deregisterTargetRstHasBeenSet;

                    /**
                     * <p>Certificate information. Multiple server certificates with different algorithm types can be imported at the same time. Parameter constraints are as follows:</p><li>This parameter is applicable only to TCP_SSL listeners and HTTPS listeners with SNI feature disabled.</li><li>When creating a TCP_SSL listener or an HTTPS listener with SNI feature disabled, a minimum of this parameter or Certificate must be specified, but they cannot be specified at the same time.</li>
                     */
                    MultiCertInfo m_multiCertInfo;
                    bool m_multiCertInfoHasBeenSet;

                    /**
                     * <p>Maximum number of connections to a listener. Currently, this parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners of LCU-supported instances. If this parameter is not specified or the value is set to -1, the maximum number of connections is not limited. This parameter is not supported for classic network-based instances.</p>
                     */
                    int64_t m_maxConn;
                    bool m_maxConnHasBeenSet;

                    /**
                     * <p>Maximum number of new connections to a listener. Currently, this parameter applies only to TCP, UDP, TCP_SSL, and QUIC listeners of LCU-supported instances. If this parameter is not specified or the value is set to -1, the maximum number of new connections is not limited. This parameter is not supported for classic network-based instances.</p>
                     */
                    int64_t m_maxCps;
                    bool m_maxCpsHasBeenSet;

                    /**
                     * <p>Idle connection timeout, in seconds. This parameter applies only to TCP/UDP listeners. Default value: 900 for TCP listeners and 300 for UDP listeners. Value range: 10–900 for shared instances and dedicated instances and 10–1980 for LCU-supported instances. To set a value exceeding the permissible range, <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket for application</a>.</p><p>Permissible range: [10, 1980]</p><p>Measurement unit: seconds</p><p>Default value: 900</p><p>Default value: 900 for TCP listeners and 300 for UDP listeners. Value range: 10–900 for shared instances and dedicated instances and 10–1980 for LCU-supported instances.</p>
                     */
                    int64_t m_idleConnectTimeout;
                    bool m_idleConnectTimeoutHasBeenSet;

                    /**
                     * <p>Whether TCP_SSL and QUIC support PP</p>
                     */
                    bool m_proxyProtocol;
                    bool m_proxyProtocolHasBeenSet;

                    /**
                     * <p>Whether SNAT (source IP replacement) is enabled, True (enabled), False (disabled). Disabled by default. Note: When SnatEnable is enabled, the client source IP will be replaced. At this point, the <code>Pass through client source IP</code> option is disabled, and vice versa.</p>
                     */
                    bool m_snatEnable;
                    bool m_snatEnableHasBeenSet;

                    /**
                     * <p>End port of a listener with a port range. Range of the port: 2–65535.</p>
                     */
                    std::vector<int64_t> m_fullEndPorts;
                    bool m_fullEndPortsHasBeenSet;

                    /**
                     * <p>Enable the h2c switch for the private network HTTP listener.<br>True (enabled), False (disabled). Disabled by default.<br>Once enabled, the listener only supports creating layer-7 rules with GRPC or GRPCS as the backend forwarding type. When creating rules, explicitly input GRPC or GRPCS in Rules.N.ForwardType.</p>
                     */
                    bool m_h2cSwitch;
                    bool m_h2cSwitchHasBeenSet;

                    /**
                     * <p>Control whether to remove the SSL encryption layer for TCP_SSL listeners. Once enabled, the listener will run as a normal TCP protocol. Available values:</p><ul><li>True: Disable SSL (protocol downgraded to plain text TCP).</li><li>False (default): Keep SSL enabled.</li></ul>
                     */
                    bool m_sslCloseSwitch;
                    bool m_sslCloseSwitchHasBeenSet;

                    /**
                     * <p>Data compression mode. Valid values: transparent (passthrough mode) and compatibility (compatibility mode).</p>
                     */
                    std::string m_dataCompressMode;
                    bool m_dataCompressModeHasBeenSet;

                    /**
                     * <p>Rescheduling feature, which provides a switch for changing the weight to 0. If the switch is toggled on, rescheduling is triggered when the weight of a real server is changed to 0. This parameter is applicable only to TCP/UDP listeners.</p>
                     */
                    bool m_rescheduleTargetZeroWeight;
                    bool m_rescheduleTargetZeroWeightHasBeenSet;

                    /**
                     * <p>Rescheduling feature, which provides a switch for detecting health check exceptions. If the switch is toggled on, rescheduling is triggered when the real server health check fails. This parameter is applicable only to TCP/UDP listeners.</p>
                     */
                    bool m_rescheduleUnhealthy;
                    bool m_rescheduleUnhealthyHasBeenSet;

                    /**
                     * <p>Rescheduling feature, which provides a switch for scaling out real servers. If the switch is toggled on, rescheduling is triggered when the number of real servers increases or decreases. This parameter is applicable only to TCP/UDP listeners.</p>
                     */
                    bool m_rescheduleExpandTarget;
                    bool m_rescheduleExpandTargetHasBeenSet;

                    /**
                     * <p>Rescheduling trigger start time. Value range: 0–3600. Unit: s. This parameter is applicable only to TCP/UDP listeners.</p>
                     */
                    int64_t m_rescheduleStartTime;
                    bool m_rescheduleStartTimeHasBeenSet;

                    /**
                     * <p>Rescheduling trigger duration. Value range: 0–3600. Unit: s. This parameter is applicable only to TCP/UDP listeners.</p>
                     */
                    int64_t m_rescheduleInterval;
                    bool m_rescheduleIntervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREATELISTENERREQUEST_H_
