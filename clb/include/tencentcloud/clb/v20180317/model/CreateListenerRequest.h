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
                     * 获取Specifies for which ports to create listeners. Each port corresponds to a new listener
                     * @return Ports Specifies for which ports to create listeners. Each port corresponds to a new listener
                     */
                    std::vector<int64_t> GetPorts() const;

                    /**
                     * 设置Specifies for which ports to create listeners. Each port corresponds to a new listener
                     * @param Ports Specifies for which ports to create listeners. Each port corresponds to a new listener
                     */
                    void SetPorts(const std::vector<int64_t>& _ports);

                    /**
                     * 判断参数 Ports 是否已赋值
                     * @return Ports 是否已赋值
                     */
                    bool PortsHasBeenSet() const;

                    /**
                     * 获取Listener protocol: TCP, UDP, HTTP, HTTPS, or TCP_SSL (which is currently in beta test. If you want to use it, please submit a ticket for application)
                     * @return Protocol Listener protocol: TCP, UDP, HTTP, HTTPS, or TCP_SSL (which is currently in beta test. If you want to use it, please submit a ticket for application)
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Listener protocol: TCP, UDP, HTTP, HTTPS, or TCP_SSL (which is currently in beta test. If you want to use it, please submit a ticket for application)
                     * @param Protocol Listener protocol: TCP, UDP, HTTP, HTTPS, or TCP_SSL (which is currently in beta test. If you want to use it, please submit a ticket for application)
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取List of names of the listeners to be created. The array of names and array of ports are in one-to-one correspondence. If you do not want to name them now, you do not need to provide this parameter.
                     * @return ListenerNames List of names of the listeners to be created. The array of names and array of ports are in one-to-one correspondence. If you do not want to name them now, you do not need to provide this parameter.
                     */
                    std::vector<std::string> GetListenerNames() const;

                    /**
                     * 设置List of names of the listeners to be created. The array of names and array of ports are in one-to-one correspondence. If you do not want to name them now, you do not need to provide this parameter.
                     * @param ListenerNames List of names of the listeners to be created. The array of names and array of ports are in one-to-one correspondence. If you do not want to name them now, you do not need to provide this parameter.
                     */
                    void SetListenerNames(const std::vector<std::string>& _listenerNames);

                    /**
                     * 判断参数 ListenerNames 是否已赋值
                     * @return ListenerNames 是否已赋值
                     */
                    bool ListenerNamesHasBeenSet() const;

                    /**
                     * 获取Health check parameter, which is applicable only to TCP/UDP/TCP_SSL listeners
                     * @return HealthCheck Health check parameter, which is applicable only to TCP/UDP/TCP_SSL listeners
                     */
                    HealthCheck GetHealthCheck() const;

                    /**
                     * 设置Health check parameter, which is applicable only to TCP/UDP/TCP_SSL listeners
                     * @param HealthCheck Health check parameter, which is applicable only to TCP/UDP/TCP_SSL listeners
                     */
                    void SetHealthCheck(const HealthCheck& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     */
                    bool HealthCheckHasBeenSet() const;

                    /**
                     * 获取Certificate information. This parameter is applicable only to TCP_SSL listeners and HTTPS listeners with the SNI feature not enabled.
                     * @return Certificate Certificate information. This parameter is applicable only to TCP_SSL listeners and HTTPS listeners with the SNI feature not enabled.
                     */
                    CertificateInput GetCertificate() const;

                    /**
                     * 设置Certificate information. This parameter is applicable only to TCP_SSL listeners and HTTPS listeners with the SNI feature not enabled.
                     * @param Certificate Certificate information. This parameter is applicable only to TCP_SSL listeners and HTTPS listeners with the SNI feature not enabled.
                     */
                    void SetCertificate(const CertificateInput& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     */
                    bool CertificateHasBeenSet() const;

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
                     * 获取Forwarding method of a listener. Value range: WRR, LEAST_CONN.
They represent weighted round robin and least connections, respectively. Default value: WRR. This parameter is applicable only to TCP/UDP/TCP_SSL listeners.
                     * @return Scheduler Forwarding method of a listener. Value range: WRR, LEAST_CONN.
They represent weighted round robin and least connections, respectively. Default value: WRR. This parameter is applicable only to TCP/UDP/TCP_SSL listeners.
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置Forwarding method of a listener. Value range: WRR, LEAST_CONN.
They represent weighted round robin and least connections, respectively. Default value: WRR. This parameter is applicable only to TCP/UDP/TCP_SSL listeners.
                     * @param Scheduler Forwarding method of a listener. Value range: WRR, LEAST_CONN.
They represent weighted round robin and least connections, respectively. Default value: WRR. This parameter is applicable only to TCP/UDP/TCP_SSL listeners.
                     */
                    void SetScheduler(const std::string& _scheduler);

                    /**
                     * 判断参数 Scheduler 是否已赋值
                     * @return Scheduler 是否已赋值
                     */
                    bool SchedulerHasBeenSet() const;

                    /**
                     * 获取Whether to enable the SNI feature. This parameter is applicable only to HTTPS listeners
                     * @return SniSwitch Whether to enable the SNI feature. This parameter is applicable only to HTTPS listeners
                     */
                    int64_t GetSniSwitch() const;

                    /**
                     * 设置Whether to enable the SNI feature. This parameter is applicable only to HTTPS listeners
                     * @param SniSwitch Whether to enable the SNI feature. This parameter is applicable only to HTTPS listeners
                     */
                    void SetSniSwitch(const int64_t& _sniSwitch);

                    /**
                     * 判断参数 SniSwitch 是否已赋值
                     * @return SniSwitch 是否已赋值
                     */
                    bool SniSwitchHasBeenSet() const;

                    /**
                     * 获取Target real server type. `NODE`: binding a general node; `TARGETGROUP`: binding a target group.
                     * @return TargetType Target real server type. `NODE`: binding a general node; `TARGETGROUP`: binding a target group.
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置Target real server type. `NODE`: binding a general node; `TARGETGROUP`: binding a target group.
                     * @param TargetType Target real server type. `NODE`: binding a general node; `TARGETGROUP`: binding a target group.
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     */
                    bool TargetTypeHasBeenSet() const;

                private:

                    /**
                     * CLB instance ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Specifies for which ports to create listeners. Each port corresponds to a new listener
                     */
                    std::vector<int64_t> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * Listener protocol: TCP, UDP, HTTP, HTTPS, or TCP_SSL (which is currently in beta test. If you want to use it, please submit a ticket for application)
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * List of names of the listeners to be created. The array of names and array of ports are in one-to-one correspondence. If you do not want to name them now, you do not need to provide this parameter.
                     */
                    std::vector<std::string> m_listenerNames;
                    bool m_listenerNamesHasBeenSet;

                    /**
                     * Health check parameter, which is applicable only to TCP/UDP/TCP_SSL listeners
                     */
                    HealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * Certificate information. This parameter is applicable only to TCP_SSL listeners and HTTPS listeners with the SNI feature not enabled.
                     */
                    CertificateInput m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * Session persistence time in seconds. Value range: 30-3,600. The default value is 0, indicating that session persistence is not enabled. This parameter is applicable only to TCP/UDP listeners.
                     */
                    int64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                    /**
                     * Forwarding method of a listener. Value range: WRR, LEAST_CONN.
They represent weighted round robin and least connections, respectively. Default value: WRR. This parameter is applicable only to TCP/UDP/TCP_SSL listeners.
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREATELISTENERREQUEST_H_
