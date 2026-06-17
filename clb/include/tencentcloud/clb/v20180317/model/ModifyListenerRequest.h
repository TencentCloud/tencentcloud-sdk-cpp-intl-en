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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLISTENERREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLISTENERREQUEST_H_

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
                * ModifyListener request structure.
                */
                class ModifyListenerRequest : public AbstractModel
                {
                public:
                    ModifyListenerRequest();
                    ~ModifyListenerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ID of the Cloud Load Balancer (CLB) instance. You can call the <a href="https://www.tencentcloud.com/document/product/214/30685?from_cn_redirect=1">DescribeLoadBalancers</a> API to query the ID.</p>
                     * @return LoadBalancerId <p>ID of the Cloud Load Balancer (CLB) instance. You can call the <a href="https://www.tencentcloud.com/document/product/214/30685?from_cn_redirect=1">DescribeLoadBalancers</a> API to query the ID.</p>
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置<p>ID of the Cloud Load Balancer (CLB) instance. You can call the <a href="https://www.tencentcloud.com/document/product/214/30685?from_cn_redirect=1">DescribeLoadBalancers</a> API to query the ID.</p>
                     * @param _loadBalancerId <p>ID of the Cloud Load Balancer (CLB) instance. You can call the <a href="https://www.tencentcloud.com/document/product/214/30685?from_cn_redirect=1">DescribeLoadBalancers</a> API to query the ID.</p>
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
                     * 获取<p>ID of the CLB listener. You can call the <a href="https://www.tencentcloud.com/document/product/214/30686?from_cn_redirect=1">DescribeListeners</a> API to query the ID.</p>
                     * @return ListenerId <p>ID of the CLB listener. You can call the <a href="https://www.tencentcloud.com/document/product/214/30686?from_cn_redirect=1">DescribeListeners</a> API to query the ID.</p>
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置<p>ID of the CLB listener. You can call the <a href="https://www.tencentcloud.com/document/product/214/30686?from_cn_redirect=1">DescribeListeners</a> API to query the ID.</p>
                     * @param _listenerId <p>ID of the CLB listener. You can call the <a href="https://www.tencentcloud.com/document/product/214/30686?from_cn_redirect=1">DescribeListeners</a> API to query the ID.</p>
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
                     * 获取<p>New listener name. Naming rule: 1-80 characters including English letters, Chinese characters, digits, connecting line "-", underscore "_" and other common characters (Unicode supplementary characters such as emoji and rare Chinese characters are forbidden).</p>
                     * @return ListenerName <p>New listener name. Naming rule: 1-80 characters including English letters, Chinese characters, digits, connecting line "-", underscore "_" and other common characters (Unicode supplementary characters such as emoji and rare Chinese characters are forbidden).</p>
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置<p>New listener name. Naming rule: 1-80 characters including English letters, Chinese characters, digits, connecting line "-", underscore "_" and other common characters (Unicode supplementary characters such as emoji and rare Chinese characters are forbidden).</p>
                     * @param _listenerName <p>New listener name. Naming rule: 1-80 characters including English letters, Chinese characters, digits, connecting line "-", underscore "_" and other common characters (Unicode supplementary characters such as emoji and rare Chinese characters are forbidden).</p>
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
                     * 获取<p>Session persistence time, unit: second. Available values: 30-3600, default 0, disabled. This parameter is applicable only to TCP/UDP listener.</p>
                     * @return SessionExpireTime <p>Session persistence time, unit: second. Available values: 30-3600, default 0, disabled. This parameter is applicable only to TCP/UDP listener.</p>
                     * 
                     */
                    int64_t GetSessionExpireTime() const;

                    /**
                     * 设置<p>Session persistence time, unit: second. Available values: 30-3600, default 0, disabled. This parameter is applicable only to TCP/UDP listener.</p>
                     * @param _sessionExpireTime <p>Session persistence time, unit: second. Available values: 30-3600, default 0, disabled. This parameter is applicable only to TCP/UDP listener.</p>
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
                     * 获取<p>Certificate-related information. This parameter is applicable only to HTTPS/TCP_SSL/QUIC listeners. This parameter and MultiCertInfo cannot be specified at the same time.</p>
                     * @return Certificate <p>Certificate-related information. This parameter is applicable only to HTTPS/TCP_SSL/QUIC listeners. This parameter and MultiCertInfo cannot be specified at the same time.</p>
                     * 
                     */
                    CertificateInput GetCertificate() const;

                    /**
                     * 设置<p>Certificate-related information. This parameter is applicable only to HTTPS/TCP_SSL/QUIC listeners. This parameter and MultiCertInfo cannot be specified at the same time.</p>
                     * @param _certificate <p>Certificate-related information. This parameter is applicable only to HTTPS/TCP_SSL/QUIC listeners. This parameter and MultiCertInfo cannot be specified at the same time.</p>
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
                     * 获取<p>Listener forwarding method. Valid values: WRR (weighted round-robin), LEAST_CONN (least connections), and IP_HASH (IP address hash).<br>They indicate weighted round-robin and least connection respectively. Default is WRR.<br>Usage scenario: Suitable for TCP/UDP/TCP_SSL/QUIC listeners. The balancing method for Layer-7 listeners should be modified in the forwarding rules.</p>
                     * @return Scheduler <p>Listener forwarding method. Valid values: WRR (weighted round-robin), LEAST_CONN (least connections), and IP_HASH (IP address hash).<br>They indicate weighted round-robin and least connection respectively. Default is WRR.<br>Usage scenario: Suitable for TCP/UDP/TCP_SSL/QUIC listeners. The balancing method for Layer-7 listeners should be modified in the forwarding rules.</p>
                     * 
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置<p>Listener forwarding method. Valid values: WRR (weighted round-robin), LEAST_CONN (least connections), and IP_HASH (IP address hash).<br>They indicate weighted round-robin and least connection respectively. Default is WRR.<br>Usage scenario: Suitable for TCP/UDP/TCP_SSL/QUIC listeners. The balancing method for Layer-7 listeners should be modified in the forwarding rules.</p>
                     * @param _scheduler <p>Listener forwarding method. Valid values: WRR (weighted round-robin), LEAST_CONN (least connections), and IP_HASH (IP address hash).<br>They indicate weighted round-robin and least connection respectively. Default is WRR.<br>Usage scenario: Suitable for TCP/UDP/TCP_SSL/QUIC listeners. The balancing method for Layer-7 listeners should be modified in the forwarding rules.</p>
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
                     * 获取<p>Whether to enable SNI feature. This parameter applies only to HTTPS listeners. Default is 0 (disabled) or 1 (enable). Note: You can enable SNI for listeners without SNI. SNI cannot be disabled for listeners with SNI enabled.</p>
                     * @return SniSwitch <p>Whether to enable SNI feature. This parameter applies only to HTTPS listeners. Default is 0 (disabled) or 1 (enable). Note: You can enable SNI for listeners without SNI. SNI cannot be disabled for listeners with SNI enabled.</p>
                     * 
                     */
                    int64_t GetSniSwitch() const;

                    /**
                     * 设置<p>Whether to enable SNI feature. This parameter applies only to HTTPS listeners. Default is 0 (disabled) or 1 (enable). Note: You can enable SNI for listeners without SNI. SNI cannot be disabled for listeners with SNI enabled.</p>
                     * @param _sniSwitch <p>Whether to enable SNI feature. This parameter applies only to HTTPS listeners. Default is 0 (disabled) or 1 (enable). Note: You can enable SNI for listeners without SNI. SNI cannot be disabled for listeners with SNI enabled.</p>
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
                     * 获取<p>Backend target type. NODE indicates binding to a general node. TARGETGROUP indicates binding to a target group.</p>
                     * @return TargetType <p>Backend target type. NODE indicates binding to a general node. TARGETGROUP indicates binding to a target group.</p>
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置<p>Backend target type. NODE indicates binding to a general node. TARGETGROUP indicates binding to a target group.</p>
                     * @param _targetType <p>Backend target type. NODE indicates binding to a general node. TARGETGROUP indicates binding to a target group.</p>
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
                     * 获取<p>Whether to enable long connections. This parameter is applicable only to HTTP/HTTPS listeners.<br>The default value 0 means disabled, and 1 means enable.<br>If the backend service has a connection limit, enable with caution. This feature is currently in internal testing. If needed, submit a <a href="https://www.tencentcloud.com/apply/p/tsodp6qm21?from_cn_redirect=1">beta application</a>.</p>
                     * @return KeepaliveEnable <p>Whether to enable long connections. This parameter is applicable only to HTTP/HTTPS listeners.<br>The default value 0 means disabled, and 1 means enable.<br>If the backend service has a connection limit, enable with caution. This feature is currently in internal testing. If needed, submit a <a href="https://www.tencentcloud.com/apply/p/tsodp6qm21?from_cn_redirect=1">beta application</a>.</p>
                     * 
                     */
                    int64_t GetKeepaliveEnable() const;

                    /**
                     * 设置<p>Whether to enable long connections. This parameter is applicable only to HTTP/HTTPS listeners.<br>The default value 0 means disabled, and 1 means enable.<br>If the backend service has a connection limit, enable with caution. This feature is currently in internal testing. If needed, submit a <a href="https://www.tencentcloud.com/apply/p/tsodp6qm21?from_cn_redirect=1">beta application</a>.</p>
                     * @param _keepaliveEnable <p>Whether to enable long connections. This parameter is applicable only to HTTP/HTTPS listeners.<br>The default value 0 means disabled, and 1 means enable.<br>If the backend service has a connection limit, enable with caution. This feature is currently in internal testing. If needed, submit a <a href="https://www.tencentcloud.com/apply/p/tsodp6qm21?from_cn_redirect=1">beta application</a>.</p>
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
                     * 获取<p>Session persistence type. NORMAL means the default session persistence type. QUIC_CID refers to maintaining the session based on Quic Connection ID. QUIC_CID supports only UDP Protocol.<br>Usage scenario: Applicable to TCP/UDP/TCP_SSL/QUIC listeners.<br>Default is NORMAL.</p>
                     * @return SessionType <p>Session persistence type. NORMAL means the default session persistence type. QUIC_CID refers to maintaining the session based on Quic Connection ID. QUIC_CID supports only UDP Protocol.<br>Usage scenario: Applicable to TCP/UDP/TCP_SSL/QUIC listeners.<br>Default is NORMAL.</p>
                     * 
                     */
                    std::string GetSessionType() const;

                    /**
                     * 设置<p>Session persistence type. NORMAL means the default session persistence type. QUIC_CID refers to maintaining the session based on Quic Connection ID. QUIC_CID supports only UDP Protocol.<br>Usage scenario: Applicable to TCP/UDP/TCP_SSL/QUIC listeners.<br>Default is NORMAL.</p>
                     * @param _sessionType <p>Session persistence type. NORMAL means the default session persistence type. QUIC_CID refers to maintaining the session based on Quic Connection ID. QUIC_CID supports only UDP Protocol.<br>Usage scenario: Applicable to TCP/UDP/TCP_SSL/QUIC listeners.<br>Default is NORMAL.</p>
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
                     * 获取<p>Certificate information. Multiple server certificates with different algorithm types can be imported at the same time. This parameter is applicable only to HTTPS listeners with SNI feature disabled. This parameter and Certificate cannot be specified at the same time.</p>
                     * @return MultiCertInfo <p>Certificate information. Multiple server certificates with different algorithm types can be imported at the same time. This parameter is applicable only to HTTPS listeners with SNI feature disabled. This parameter and Certificate cannot be specified at the same time.</p>
                     * 
                     */
                    MultiCertInfo GetMultiCertInfo() const;

                    /**
                     * 设置<p>Certificate information. Multiple server certificates with different algorithm types can be imported at the same time. This parameter is applicable only to HTTPS listeners with SNI feature disabled. This parameter and Certificate cannot be specified at the same time.</p>
                     * @param _multiCertInfo <p>Certificate information. Multiple server certificates with different algorithm types can be imported at the same time. This parameter is applicable only to HTTPS listeners with SNI feature disabled. This parameter and Certificate cannot be specified at the same time.</p>
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
                     * 获取<p>Maximum number of concurrent connections at the listener level. This parameter is supported only for LCU-supported instances with TCP/UDP/TCP_SSL/QUIC listeners currently. Value range: 1 to the maximum number of concurrent connections for the instance specification. -1 indicates no speed limit on the concurrent connections at the listener level. Classic network instances do not support this parameter.<br>Default value is -1, which means unlimited speed.</p>
                     * @return MaxConn <p>Maximum number of concurrent connections at the listener level. This parameter is supported only for LCU-supported instances with TCP/UDP/TCP_SSL/QUIC listeners currently. Value range: 1 to the maximum number of concurrent connections for the instance specification. -1 indicates no speed limit on the concurrent connections at the listener level. Classic network instances do not support this parameter.<br>Default value is -1, which means unlimited speed.</p>
                     * 
                     */
                    int64_t GetMaxConn() const;

                    /**
                     * 设置<p>Maximum number of concurrent connections at the listener level. This parameter is supported only for LCU-supported instances with TCP/UDP/TCP_SSL/QUIC listeners currently. Value range: 1 to the maximum number of concurrent connections for the instance specification. -1 indicates no speed limit on the concurrent connections at the listener level. Classic network instances do not support this parameter.<br>Default value is -1, which means unlimited speed.</p>
                     * @param _maxConn <p>Maximum number of concurrent connections at the listener level. This parameter is supported only for LCU-supported instances with TCP/UDP/TCP_SSL/QUIC listeners currently. Value range: 1 to the maximum number of concurrent connections for the instance specification. -1 indicates no speed limit on the concurrent connections at the listener level. Classic network instances do not support this parameter.<br>Default value is -1, which means unlimited speed.</p>
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
                     * 获取<p>Maximum number of new connections at the listener level. This parameter is supported only for LCU-supported instances with TCP/UDP/TCP_SSL/QUIC listeners currently. Value range: 1 to the maximum number of new connections for the instance specification. -1 indicates no speed limit on new connections at the listener level. Classic network instances do not support this parameter.<br>Default is -1, which means unlimited speed.</p>
                     * @return MaxCps <p>Maximum number of new connections at the listener level. This parameter is supported only for LCU-supported instances with TCP/UDP/TCP_SSL/QUIC listeners currently. Value range: 1 to the maximum number of new connections for the instance specification. -1 indicates no speed limit on new connections at the listener level. Classic network instances do not support this parameter.<br>Default is -1, which means unlimited speed.</p>
                     * 
                     */
                    int64_t GetMaxCps() const;

                    /**
                     * 设置<p>Maximum number of new connections at the listener level. This parameter is supported only for LCU-supported instances with TCP/UDP/TCP_SSL/QUIC listeners currently. Value range: 1 to the maximum number of new connections for the instance specification. -1 indicates no speed limit on new connections at the listener level. Classic network instances do not support this parameter.<br>Default is -1, which means unlimited speed.</p>
                     * @param _maxCps <p>Maximum number of new connections at the listener level. This parameter is supported only for LCU-supported instances with TCP/UDP/TCP_SSL/QUIC listeners currently. Value range: 1 to the maximum number of new connections for the instance specification. -1 indicates no speed limit on new connections at the listener level. Classic network instances do not support this parameter.<br>Default is -1, which means unlimited speed.</p>
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
                     * 获取<p>Idle connection timeout. This parameter applies only to TCP/UDP listeners. To set a value exceeding 1980, <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket for application</a>. The maximum value can be 3600.</p><p>Range of values: [10, 1980]</p><p>Unit: seconds</p><p>Default value: 900</p><p>Default value for TCP listeners: 900. Default value for UDP listeners: 300. Value range: 10–900 for shared instances and dedicated instances and 10–1980 for LCU-supported instances.</p>
                     * @return IdleConnectTimeout <p>Idle connection timeout. This parameter applies only to TCP/UDP listeners. To set a value exceeding 1980, <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket for application</a>. The maximum value can be 3600.</p><p>Range of values: [10, 1980]</p><p>Unit: seconds</p><p>Default value: 900</p><p>Default value for TCP listeners: 900. Default value for UDP listeners: 300. Value range: 10–900 for shared instances and dedicated instances and 10–1980 for LCU-supported instances.</p>
                     * 
                     */
                    int64_t GetIdleConnectTimeout() const;

                    /**
                     * 设置<p>Idle connection timeout. This parameter applies only to TCP/UDP listeners. To set a value exceeding 1980, <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket for application</a>. The maximum value can be 3600.</p><p>Range of values: [10, 1980]</p><p>Unit: seconds</p><p>Default value: 900</p><p>Default value for TCP listeners: 900. Default value for UDP listeners: 300. Value range: 10–900 for shared instances and dedicated instances and 10–1980 for LCU-supported instances.</p>
                     * @param _idleConnectTimeout <p>Idle connection timeout. This parameter applies only to TCP/UDP listeners. To set a value exceeding 1980, <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket for application</a>. The maximum value can be 3600.</p><p>Range of values: [10, 1980]</p><p>Unit: seconds</p><p>Default value: 900</p><p>Default value for TCP listeners: 900. Default value for UDP listeners: 300. Value range: 10–900 for shared instances and dedicated instances and 10–1980 for LCU-supported instances.</p>
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
                     * 获取<p>Data compression mode</p><p>Enumeration value:</p><ul><li>transparent: Transparent mode (default value)</li><li>compatibility: Compatible mode (enable gzip compression configuration)</li></ul>
                     * @return DataCompressMode <p>Data compression mode</p><p>Enumeration value:</p><ul><li>transparent: Transparent mode (default value)</li><li>compatibility: Compatible mode (enable gzip compression configuration)</li></ul>
                     * 
                     */
                    std::string GetDataCompressMode() const;

                    /**
                     * 设置<p>Data compression mode</p><p>Enumeration value:</p><ul><li>transparent: Transparent mode (default value)</li><li>compatibility: Compatible mode (enable gzip compression configuration)</li></ul>
                     * @param _dataCompressMode <p>Data compression mode</p><p>Enumeration value:</p><ul><li>transparent: Transparent mode (default value)</li><li>compatibility: Compatible mode (enable gzip compression configuration)</li></ul>
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
                     * <p>ID of the Cloud Load Balancer (CLB) instance. You can call the <a href="https://www.tencentcloud.com/document/product/214/30685?from_cn_redirect=1">DescribeLoadBalancers</a> API to query the ID.</p>
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * <p>ID of the CLB listener. You can call the <a href="https://www.tencentcloud.com/document/product/214/30686?from_cn_redirect=1">DescribeListeners</a> API to query the ID.</p>
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * <p>New listener name. Naming rule: 1-80 characters including English letters, Chinese characters, digits, connecting line "-", underscore "_" and other common characters (Unicode supplementary characters such as emoji and rare Chinese characters are forbidden).</p>
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * <p>Session persistence time, unit: second. Available values: 30-3600, default 0, disabled. This parameter is applicable only to TCP/UDP listener.</p>
                     */
                    int64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                    /**
                     * <p>Health check parameters. This parameter is applicable only to TCP/UDP/TCP_SSL/QUIC listeners.</p>
                     */
                    HealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * <p>Certificate-related information. This parameter is applicable only to HTTPS/TCP_SSL/QUIC listeners. This parameter and MultiCertInfo cannot be specified at the same time.</p>
                     */
                    CertificateInput m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * <p>Listener forwarding method. Valid values: WRR (weighted round-robin), LEAST_CONN (least connections), and IP_HASH (IP address hash).<br>They indicate weighted round-robin and least connection respectively. Default is WRR.<br>Usage scenario: Suitable for TCP/UDP/TCP_SSL/QUIC listeners. The balancing method for Layer-7 listeners should be modified in the forwarding rules.</p>
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * <p>Whether to enable SNI feature. This parameter applies only to HTTPS listeners. Default is 0 (disabled) or 1 (enable). Note: You can enable SNI for listeners without SNI. SNI cannot be disabled for listeners with SNI enabled.</p>
                     */
                    int64_t m_sniSwitch;
                    bool m_sniSwitchHasBeenSet;

                    /**
                     * <p>Backend target type. NODE indicates binding to a general node. TARGETGROUP indicates binding to a target group.</p>
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * <p>Whether to enable long connections. This parameter is applicable only to HTTP/HTTPS listeners.<br>The default value 0 means disabled, and 1 means enable.<br>If the backend service has a connection limit, enable with caution. This feature is currently in internal testing. If needed, submit a <a href="https://www.tencentcloud.com/apply/p/tsodp6qm21?from_cn_redirect=1">beta application</a>.</p>
                     */
                    int64_t m_keepaliveEnable;
                    bool m_keepaliveEnableHasBeenSet;

                    /**
                     * <p>Rescheduling feature, which provides a switch for scaling out the backend service. If the switch is toggled on, rescheduling is triggered when the backend service is unbound. This parameter is applicable only to TCP/UDP listeners.</p>
                     */
                    bool m_deregisterTargetRst;
                    bool m_deregisterTargetRstHasBeenSet;

                    /**
                     * <p>Session persistence type. NORMAL means the default session persistence type. QUIC_CID refers to maintaining the session based on Quic Connection ID. QUIC_CID supports only UDP Protocol.<br>Usage scenario: Applicable to TCP/UDP/TCP_SSL/QUIC listeners.<br>Default is NORMAL.</p>
                     */
                    std::string m_sessionType;
                    bool m_sessionTypeHasBeenSet;

                    /**
                     * <p>Certificate information. Multiple server certificates with different algorithm types can be imported at the same time. This parameter is applicable only to HTTPS listeners with SNI feature disabled. This parameter and Certificate cannot be specified at the same time.</p>
                     */
                    MultiCertInfo m_multiCertInfo;
                    bool m_multiCertInfoHasBeenSet;

                    /**
                     * <p>Maximum number of concurrent connections at the listener level. This parameter is supported only for LCU-supported instances with TCP/UDP/TCP_SSL/QUIC listeners currently. Value range: 1 to the maximum number of concurrent connections for the instance specification. -1 indicates no speed limit on the concurrent connections at the listener level. Classic network instances do not support this parameter.<br>Default value is -1, which means unlimited speed.</p>
                     */
                    int64_t m_maxConn;
                    bool m_maxConnHasBeenSet;

                    /**
                     * <p>Maximum number of new connections at the listener level. This parameter is supported only for LCU-supported instances with TCP/UDP/TCP_SSL/QUIC listeners currently. Value range: 1 to the maximum number of new connections for the instance specification. -1 indicates no speed limit on new connections at the listener level. Classic network instances do not support this parameter.<br>Default is -1, which means unlimited speed.</p>
                     */
                    int64_t m_maxCps;
                    bool m_maxCpsHasBeenSet;

                    /**
                     * <p>Idle connection timeout. This parameter applies only to TCP/UDP listeners. To set a value exceeding 1980, <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket for application</a>. The maximum value can be 3600.</p><p>Range of values: [10, 1980]</p><p>Unit: seconds</p><p>Default value: 900</p><p>Default value for TCP listeners: 900. Default value for UDP listeners: 300. Value range: 10–900 for shared instances and dedicated instances and 10–1980 for LCU-supported instances.</p>
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
                     * <p>Data compression mode</p><p>Enumeration value:</p><ul><li>transparent: Transparent mode (default value)</li><li>compatibility: Compatible mode (enable gzip compression configuration)</li></ul>
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

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLISTENERREQUEST_H_
