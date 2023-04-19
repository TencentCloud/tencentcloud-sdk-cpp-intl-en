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
                     * 获取CLB instance ID
                     * @return LoadBalancerId CLB instance ID
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置CLB instance ID
                     * @param LoadBalancerId CLB instance ID
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取CLB listener ID
                     * @return ListenerId CLB listener ID
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置CLB listener ID
                     * @param ListenerId CLB listener ID
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取New listener name
                     * @return ListenerName New listener name
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置New listener name
                     * @param ListenerName New listener name
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取Session persistence time in seconds. Value range: 30-3,600. The default value is 0, indicating that session persistence is not enabled. This parameter is applicable only to TCP/UDP listeners.
                     * @return SessionExpireTime Session persistence time in seconds. Value range: 30-3,600. The default value is 0, indicating that session persistence is not enabled. This parameter is applicable only to TCP/UDP listeners.
                     */
                    int64_t GetSessionExpireTime() const;

                    /**
                     * 设置Session persistence time in seconds. Value range: 30-3,600. The default value is 0, indicating that session persistence is not enabled. This parameter is applicable only to TCP/UDP listeners.
                     * @param SessionExpireTime Session persistence time in seconds. Value range: 30-3,600. The default value is 0, indicating that session persistence is not enabled. This parameter is applicable only to TCP/UDP listeners.
                     */
                    void SetSessionExpireTime(const int64_t& _sessionExpireTime);

                    /**
                     * 判断参数 SessionExpireTime 是否已赋值
                     * @return SessionExpireTime 是否已赋值
                     */
                    bool SessionExpireTimeHasBeenSet() const;

                    /**
                     * 获取Health check parameter, which is applicable only to TCP, UDP, and TCP_SSL listeners.
                     * @return HealthCheck Health check parameter, which is applicable only to TCP, UDP, and TCP_SSL listeners.
                     */
                    HealthCheck GetHealthCheck() const;

                    /**
                     * 设置Health check parameter, which is applicable only to TCP, UDP, and TCP_SSL listeners.
                     * @param HealthCheck Health check parameter, which is applicable only to TCP, UDP, and TCP_SSL listeners.
                     */
                    void SetHealthCheck(const HealthCheck& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     */
                    bool HealthCheckHasBeenSet() const;

                    /**
                     * 获取Certificate information. This parameter is only applicable to HTTPS/TCP_SSL listeners. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     * @return Certificate Certificate information. This parameter is only applicable to HTTPS/TCP_SSL listeners. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     */
                    CertificateInput GetCertificate() const;

                    /**
                     * 设置Certificate information. This parameter is only applicable to HTTPS/TCP_SSL listeners. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     * @param Certificate Certificate information. This parameter is only applicable to HTTPS/TCP_SSL listeners. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     */
                    void SetCertificate(const CertificateInput& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取Forwarding method of a listener. Value range: WRR, LEAST_CONN.
They represent weighted round robin and least connections, respectively. Default value: WRR.
                     * @return Scheduler Forwarding method of a listener. Value range: WRR, LEAST_CONN.
They represent weighted round robin and least connections, respectively. Default value: WRR.
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置Forwarding method of a listener. Value range: WRR, LEAST_CONN.
They represent weighted round robin and least connections, respectively. Default value: WRR.
                     * @param Scheduler Forwarding method of a listener. Value range: WRR, LEAST_CONN.
They represent weighted round robin and least connections, respectively. Default value: WRR.
                     */
                    void SetScheduler(const std::string& _scheduler);

                    /**
                     * 判断参数 Scheduler 是否已赋值
                     * @return Scheduler 是否已赋值
                     */
                    bool SchedulerHasBeenSet() const;

                    /**
                     * 获取Whether to enable the SNI feature. This parameter is applicable only to HTTPS listeners. Note: The SNI feature can be enabled but cannot be disabled once enabled.
                     * @return SniSwitch Whether to enable the SNI feature. This parameter is applicable only to HTTPS listeners. Note: The SNI feature can be enabled but cannot be disabled once enabled.
                     */
                    int64_t GetSniSwitch() const;

                    /**
                     * 设置Whether to enable the SNI feature. This parameter is applicable only to HTTPS listeners. Note: The SNI feature can be enabled but cannot be disabled once enabled.
                     * @param SniSwitch Whether to enable the SNI feature. This parameter is applicable only to HTTPS listeners. Note: The SNI feature can be enabled but cannot be disabled once enabled.
                     */
                    void SetSniSwitch(const int64_t& _sniSwitch);

                    /**
                     * 判断参数 SniSwitch 是否已赋值
                     * @return SniSwitch 是否已赋值
                     */
                    bool SniSwitchHasBeenSet() const;

                    /**
                     * 获取Target backend type. `NODE`: A single node; `TARGETGROUP`: A target group.
                     * @return TargetType Target backend type. `NODE`: A single node; `TARGETGROUP`: A target group.
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置Target backend type. `NODE`: A single node; `TARGETGROUP`: A target group.
                     * @param TargetType Target backend type. `NODE`: A single node; `TARGETGROUP`: A target group.
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取Whether to enable a persistent connection. This parameter is applicable only to HTTP and HTTPS listeners.
                     * @return KeepaliveEnable Whether to enable a persistent connection. This parameter is applicable only to HTTP and HTTPS listeners.
                     */
                    int64_t GetKeepaliveEnable() const;

                    /**
                     * 设置Whether to enable a persistent connection. This parameter is applicable only to HTTP and HTTPS listeners.
                     * @param KeepaliveEnable Whether to enable a persistent connection. This parameter is applicable only to HTTP and HTTPS listeners.
                     */
                    void SetKeepaliveEnable(const int64_t& _keepaliveEnable);

                    /**
                     * 判断参数 KeepaliveEnable 是否已赋值
                     * @return KeepaliveEnable 是否已赋值
                     */
                    bool KeepaliveEnableHasBeenSet() const;

                    /**
                     * 获取Whether to send the TCP RST packet to the client when unbinding a real server. This parameter is applicable to TCP listeners only.
                     * @return DeregisterTargetRst Whether to send the TCP RST packet to the client when unbinding a real server. This parameter is applicable to TCP listeners only.
                     */
                    bool GetDeregisterTargetRst() const;

                    /**
                     * 设置Whether to send the TCP RST packet to the client when unbinding a real server. This parameter is applicable to TCP listeners only.
                     * @param DeregisterTargetRst Whether to send the TCP RST packet to the client when unbinding a real server. This parameter is applicable to TCP listeners only.
                     */
                    void SetDeregisterTargetRst(const bool& _deregisterTargetRst);

                    /**
                     * 判断参数 DeregisterTargetRst 是否已赋值
                     * @return DeregisterTargetRst 是否已赋值
                     */
                    bool DeregisterTargetRstHasBeenSet() const;

                    /**
                     * 获取Session persistence type. `NORMAL`: default session persistence type (L4/L7 session persistence); `QUIC_CID`: session persistence by QUIC connection ID. The `QUIC_CID` value can only be configured in UDP listeners.
                     * @return SessionType Session persistence type. `NORMAL`: default session persistence type (L4/L7 session persistence); `QUIC_CID`: session persistence by QUIC connection ID. The `QUIC_CID` value can only be configured in UDP listeners.
                     */
                    std::string GetSessionType() const;

                    /**
                     * 设置Session persistence type. `NORMAL`: default session persistence type (L4/L7 session persistence); `QUIC_CID`: session persistence by QUIC connection ID. The `QUIC_CID` value can only be configured in UDP listeners.
                     * @param SessionType Session persistence type. `NORMAL`: default session persistence type (L4/L7 session persistence); `QUIC_CID`: session persistence by QUIC connection ID. The `QUIC_CID` value can only be configured in UDP listeners.
                     */
                    void SetSessionType(const std::string& _sessionType);

                    /**
                     * 判断参数 SessionType 是否已赋值
                     * @return SessionType 是否已赋值
                     */
                    bool SessionTypeHasBeenSet() const;

                    /**
                     * 获取Certificate information. You can specify multiple server-side certificates with different algorithm types. This parameter is only applicable to HTTPS listeners with the SNI feature not enabled. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     * @return MultiCertInfo Certificate information. You can specify multiple server-side certificates with different algorithm types. This parameter is only applicable to HTTPS listeners with the SNI feature not enabled. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     */
                    MultiCertInfo GetMultiCertInfo() const;

                    /**
                     * 设置Certificate information. You can specify multiple server-side certificates with different algorithm types. This parameter is only applicable to HTTPS listeners with the SNI feature not enabled. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     * @param MultiCertInfo Certificate information. You can specify multiple server-side certificates with different algorithm types. This parameter is only applicable to HTTPS listeners with the SNI feature not enabled. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     */
                    void SetMultiCertInfo(const MultiCertInfo& _multiCertInfo);

                    /**
                     * 判断参数 MultiCertInfo 是否已赋值
                     * @return MultiCertInfo 是否已赋值
                     */
                    bool MultiCertInfoHasBeenSet() const;

                    /**
                     * 获取The maximum number of concurrent connections at the listener level. This parameter takes effect only on LCU-supported instances and TCP/UDP/TCP_SSL/QUIC listeners. Value range: 1 to the maximum concurrency of the instance. -1 indicates that no limit is set on concurrent connections.
                     * @return MaxConn The maximum number of concurrent connections at the listener level. This parameter takes effect only on LCU-supported instances and TCP/UDP/TCP_SSL/QUIC listeners. Value range: 1 to the maximum concurrency of the instance. -1 indicates that no limit is set on concurrent connections.
                     */
                    int64_t GetMaxConn() const;

                    /**
                     * 设置The maximum number of concurrent connections at the listener level. This parameter takes effect only on LCU-supported instances and TCP/UDP/TCP_SSL/QUIC listeners. Value range: 1 to the maximum concurrency of the instance. -1 indicates that no limit is set on concurrent connections.
                     * @param MaxConn The maximum number of concurrent connections at the listener level. This parameter takes effect only on LCU-supported instances and TCP/UDP/TCP_SSL/QUIC listeners. Value range: 1 to the maximum concurrency of the instance. -1 indicates that no limit is set on concurrent connections.
                     */
                    void SetMaxConn(const int64_t& _maxConn);

                    /**
                     * 判断参数 MaxConn 是否已赋值
                     * @return MaxConn 是否已赋值
                     */
                    bool MaxConnHasBeenSet() const;

                    /**
                     * 获取The maximum number of new connections at the listener level. This parameter takes effect only on LCU-supported instances and TCP/UDP/TCP_SSL/QUIC listeners. Value range: 1 to the maximum number of new connections of the instance. -1 indicates that no limit is set on concurrent connections.
                     * @return MaxCps The maximum number of new connections at the listener level. This parameter takes effect only on LCU-supported instances and TCP/UDP/TCP_SSL/QUIC listeners. Value range: 1 to the maximum number of new connections of the instance. -1 indicates that no limit is set on concurrent connections.
                     */
                    int64_t GetMaxCps() const;

                    /**
                     * 设置The maximum number of new connections at the listener level. This parameter takes effect only on LCU-supported instances and TCP/UDP/TCP_SSL/QUIC listeners. Value range: 1 to the maximum number of new connections of the instance. -1 indicates that no limit is set on concurrent connections.
                     * @param MaxCps The maximum number of new connections at the listener level. This parameter takes effect only on LCU-supported instances and TCP/UDP/TCP_SSL/QUIC listeners. Value range: 1 to the maximum number of new connections of the instance. -1 indicates that no limit is set on concurrent connections.
                     */
                    void SetMaxCps(const int64_t& _maxCps);

                    /**
                     * 判断参数 MaxCps 是否已赋值
                     * @return MaxCps 是否已赋值
                     */
                    bool MaxCpsHasBeenSet() const;

                    /**
                     * 获取Connection idle timeout period (in seconds). It’s only available to TCP listeners. Value range: 300-900 for shared and dedicated instances; 300-2000 for LCU-supported CLB instances. It defaults to 900. To set a period longer than 2000 seconds (up to 3600 seconds), please submit a [submit](https://console.cloud.tencent.com/workorder/category). 
                     * @return IdleConnectTimeout Connection idle timeout period (in seconds). It’s only available to TCP listeners. Value range: 300-900 for shared and dedicated instances; 300-2000 for LCU-supported CLB instances. It defaults to 900. To set a period longer than 2000 seconds (up to 3600 seconds), please submit a [submit](https://console.cloud.tencent.com/workorder/category). 
                     */
                    int64_t GetIdleConnectTimeout() const;

                    /**
                     * 设置Connection idle timeout period (in seconds). It’s only available to TCP listeners. Value range: 300-900 for shared and dedicated instances; 300-2000 for LCU-supported CLB instances. It defaults to 900. To set a period longer than 2000 seconds (up to 3600 seconds), please submit a [submit](https://console.cloud.tencent.com/workorder/category). 
                     * @param IdleConnectTimeout Connection idle timeout period (in seconds). It’s only available to TCP listeners. Value range: 300-900 for shared and dedicated instances; 300-2000 for LCU-supported CLB instances. It defaults to 900. To set a period longer than 2000 seconds (up to 3600 seconds), please submit a [submit](https://console.cloud.tencent.com/workorder/category). 
                     */
                    void SetIdleConnectTimeout(const int64_t& _idleConnectTimeout);

                    /**
                     * 判断参数 IdleConnectTimeout 是否已赋值
                     * @return IdleConnectTimeout 是否已赋值
                     */
                    bool IdleConnectTimeoutHasBeenSet() const;

                private:

                    /**
                     * CLB instance ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * CLB listener ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * New listener name
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * Session persistence time in seconds. Value range: 30-3,600. The default value is 0, indicating that session persistence is not enabled. This parameter is applicable only to TCP/UDP listeners.
                     */
                    int64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                    /**
                     * Health check parameter, which is applicable only to TCP, UDP, and TCP_SSL listeners.
                     */
                    HealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * Certificate information. This parameter is only applicable to HTTPS/TCP_SSL listeners. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     */
                    CertificateInput m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * Forwarding method of a listener. Value range: WRR, LEAST_CONN.
They represent weighted round robin and least connections, respectively. Default value: WRR.
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * Whether to enable the SNI feature. This parameter is applicable only to HTTPS listeners. Note: The SNI feature can be enabled but cannot be disabled once enabled.
                     */
                    int64_t m_sniSwitch;
                    bool m_sniSwitchHasBeenSet;

                    /**
                     * Target backend type. `NODE`: A single node; `TARGETGROUP`: A target group.
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * Whether to enable a persistent connection. This parameter is applicable only to HTTP and HTTPS listeners.
                     */
                    int64_t m_keepaliveEnable;
                    bool m_keepaliveEnableHasBeenSet;

                    /**
                     * Whether to send the TCP RST packet to the client when unbinding a real server. This parameter is applicable to TCP listeners only.
                     */
                    bool m_deregisterTargetRst;
                    bool m_deregisterTargetRstHasBeenSet;

                    /**
                     * Session persistence type. `NORMAL`: default session persistence type (L4/L7 session persistence); `QUIC_CID`: session persistence by QUIC connection ID. The `QUIC_CID` value can only be configured in UDP listeners.
                     */
                    std::string m_sessionType;
                    bool m_sessionTypeHasBeenSet;

                    /**
                     * Certificate information. You can specify multiple server-side certificates with different algorithm types. This parameter is only applicable to HTTPS listeners with the SNI feature not enabled. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     */
                    MultiCertInfo m_multiCertInfo;
                    bool m_multiCertInfoHasBeenSet;

                    /**
                     * The maximum number of concurrent connections at the listener level. This parameter takes effect only on LCU-supported instances and TCP/UDP/TCP_SSL/QUIC listeners. Value range: 1 to the maximum concurrency of the instance. -1 indicates that no limit is set on concurrent connections.
                     */
                    int64_t m_maxConn;
                    bool m_maxConnHasBeenSet;

                    /**
                     * The maximum number of new connections at the listener level. This parameter takes effect only on LCU-supported instances and TCP/UDP/TCP_SSL/QUIC listeners. Value range: 1 to the maximum number of new connections of the instance. -1 indicates that no limit is set on concurrent connections.
                     */
                    int64_t m_maxCps;
                    bool m_maxCpsHasBeenSet;

                    /**
                     * Connection idle timeout period (in seconds). It’s only available to TCP listeners. Value range: 300-900 for shared and dedicated instances; 300-2000 for LCU-supported CLB instances. It defaults to 900. To set a period longer than 2000 seconds (up to 3600 seconds), please submit a [submit](https://console.cloud.tencent.com/workorder/category). 
                     */
                    int64_t m_idleConnectTimeout;
                    bool m_idleConnectTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLISTENERREQUEST_H_
