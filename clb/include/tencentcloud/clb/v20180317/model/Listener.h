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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_LISTENER_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_LISTENER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/CertificateOutput.h>
#include <tencentcloud/clb/v20180317/model/HealthCheck.h>
#include <tencentcloud/clb/v20180317/model/RuleOutput.h>
#include <tencentcloud/clb/v20180317/model/BasicTargetGroupInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Listener information
                */
                class Listener : public AbstractModel
                {
                public:
                    Listener();
                    ~Listener() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Listener protocol
                     * @return Protocol Listener protocol
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Listener protocol
                     * @param Protocol Listener protocol
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Listener port
                     * @return Port Listener port
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Listener port
                     * @param Port Listener port
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Information of certificates bound to the listener
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Certificate Information of certificates bound to the listener
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CertificateOutput GetCertificate() const;

                    /**
                     * 设置Information of certificates bound to the listener
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Certificate Information of certificates bound to the listener
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCertificate(const CertificateOutput& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取Health check information of the listener
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HealthCheck Health check information of the listener
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    HealthCheck GetHealthCheck() const;

                    /**
                     * 设置Health check information of the listener
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param HealthCheck Health check information of the listener
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHealthCheck(const HealthCheck& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     */
                    bool HealthCheckHasBeenSet() const;

                    /**
                     * 获取Request scheduling method
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Scheduler Request scheduling method
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置Request scheduling method
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Scheduler Request scheduling method
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetScheduler(const std::string& _scheduler);

                    /**
                     * 判断参数 Scheduler 是否已赋值
                     * @return Scheduler 是否已赋值
                     */
                    bool SchedulerHasBeenSet() const;

                    /**
                     * 获取Session persistence time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SessionExpireTime Session persistence time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetSessionExpireTime() const;

                    /**
                     * 设置Session persistence time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SessionExpireTime Session persistence time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSessionExpireTime(const int64_t& _sessionExpireTime);

                    /**
                     * 判断参数 SessionExpireTime 是否已赋值
                     * @return SessionExpireTime 是否已赋值
                     */
                    bool SessionExpireTimeHasBeenSet() const;

                    /**
                     * 获取Whether to enable the SNI feature (this parameter is only meaningful for HTTPS listeners)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SniSwitch Whether to enable the SNI feature (this parameter is only meaningful for HTTPS listeners)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetSniSwitch() const;

                    /**
                     * 设置Whether to enable the SNI feature (this parameter is only meaningful for HTTPS listeners)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SniSwitch Whether to enable the SNI feature (this parameter is only meaningful for HTTPS listeners)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSniSwitch(const int64_t& _sniSwitch);

                    /**
                     * 判断参数 SniSwitch 是否已赋值
                     * @return SniSwitch 是否已赋值
                     */
                    bool SniSwitchHasBeenSet() const;

                    /**
                     * 获取All forwarding rules under a listener (this parameter is meaningful only for HTTP/HTTPS listeners)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Rules All forwarding rules under a listener (this parameter is meaningful only for HTTP/HTTPS listeners)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RuleOutput> GetRules() const;

                    /**
                     * 设置All forwarding rules under a listener (this parameter is meaningful only for HTTP/HTTPS listeners)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Rules All forwarding rules under a listener (this parameter is meaningful only for HTTP/HTTPS listeners)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRules(const std::vector<RuleOutput>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取Listener name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ListenerName Listener name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置Listener name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ListenerName Listener name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取Listener creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Listener creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Listener creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CreateTime Listener creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取End port of a port range
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndPort End port of a port range
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetEndPort() const;

                    /**
                     * 设置End port of a port range
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param EndPort End port of a port range
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEndPort(const int64_t& _endPort);

                    /**
                     * 判断参数 EndPort 是否已赋值
                     * @return EndPort 是否已赋值
                     */
                    bool EndPortHasBeenSet() const;

                    /**
                     * 获取Real server type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TargetType Real server type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置Real server type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TargetType Real server type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取Basic information of a bound target group. This field will be returned when a target group is bound to a listener.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TargetGroup Basic information of a bound target group. This field will be returned when a target group is bound to a listener.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    BasicTargetGroupInfo GetTargetGroup() const;

                    /**
                     * 设置Basic information of a bound target group. This field will be returned when a target group is bound to a listener.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TargetGroup Basic information of a bound target group. This field will be returned when a target group is bound to a listener.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTargetGroup(const BasicTargetGroupInfo& _targetGroup);

                    /**
                     * 判断参数 TargetGroup 是否已赋值
                     * @return TargetGroup 是否已赋值
                     */
                    bool TargetGroupHasBeenSet() const;

                private:

                    /**
                     * CLB listener ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Listener protocol
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Listener port
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Information of certificates bound to the listener
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CertificateOutput m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * Health check information of the listener
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    HealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * Request scheduling method
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * Session persistence time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                    /**
                     * Whether to enable the SNI feature (this parameter is only meaningful for HTTPS listeners)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_sniSwitch;
                    bool m_sniSwitchHasBeenSet;

                    /**
                     * All forwarding rules under a listener (this parameter is meaningful only for HTTP/HTTPS listeners)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RuleOutput> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * Listener name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * Listener creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * End port of a port range
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_endPort;
                    bool m_endPortHasBeenSet;

                    /**
                     * Real server type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * Basic information of a bound target group. This field will be returned when a target group is bound to a listener.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    BasicTargetGroupInfo m_targetGroup;
                    bool m_targetGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_LISTENER_H_
