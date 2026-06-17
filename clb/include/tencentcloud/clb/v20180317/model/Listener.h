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
                     * 获取<p>CLB listener ID</p>
                     * @return ListenerId <p>CLB listener ID</p>
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置<p>CLB listener ID</p>
                     * @param _listenerId <p>CLB listener ID</p>
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
                     * 获取<p>Listener protocol. Available values: TCP, UDP, HTTP, HTTPS, TCP_SSL, QUIC</p>
                     * @return Protocol <p>Listener protocol. Available values: TCP, UDP, HTTP, HTTPS, TCP_SSL, QUIC</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>Listener protocol. Available values: TCP, UDP, HTTP, HTTPS, TCP_SSL, QUIC</p>
                     * @param _protocol <p>Listener protocol. Available values: TCP, UDP, HTTP, HTTPS, TCP_SSL, QUIC</p>
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
                     * 获取<p>Listener port, port range: 1–65535</p>
                     * @return Port <p>Listener port, port range: 1–65535</p>
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置<p>Listener port, port range: 1–65535</p>
                     * @param _port <p>Listener port, port range: 1–65535</p>
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取<p>Listener bound certificate information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Certificate <p>Listener bound certificate information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    CertificateOutput GetCertificate() const;

                    /**
                     * 设置<p>Listener bound certificate information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _certificate <p>Listener bound certificate information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCertificate(const CertificateOutput& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     * 
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取<p>Health check information of the listener</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HealthCheck <p>Health check information of the listener</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    HealthCheck GetHealthCheck() const;

                    /**
                     * 设置<p>Health check information of the listener</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _healthCheck <p>Health check information of the listener</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Requested scheduling method. WRR, LEAST_CONN, and IP_HASH indicate weighted round-robin, least connection, and IP Hash respectively.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Scheduler <p>Requested scheduling method. WRR, LEAST_CONN, and IP_HASH indicate weighted round-robin, least connection, and IP Hash respectively.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置<p>Requested scheduling method. WRR, LEAST_CONN, and IP_HASH indicate weighted round-robin, least connection, and IP Hash respectively.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scheduler <p>Requested scheduling method. WRR, LEAST_CONN, and IP_HASH indicate weighted round-robin, least connection, and IP Hash respectively.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Session persistence time, unit: second. Available values: 30-3600, default 0, disabled by default. This parameter is applicable only to TCP/UDP listener.</p><p>Unit: second</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SessionExpireTime <p>Session persistence time, unit: second. Available values: 30-3600, default 0, disabled by default. This parameter is applicable only to TCP/UDP listener.</p><p>Unit: second</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSessionExpireTime() const;

                    /**
                     * 设置<p>Session persistence time, unit: second. Available values: 30-3600, default 0, disabled by default. This parameter is applicable only to TCP/UDP listener.</p><p>Unit: second</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sessionExpireTime <p>Session persistence time, unit: second. Available values: 30-3600, default 0, disabled by default. This parameter is applicable only to TCP/UDP listener.</p><p>Unit: second</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Whether to enable SNI feature. 1: enable, 0: disabled (this parameter is applicable only to HTTPS listeners)</p>
                     * @return SniSwitch <p>Whether to enable SNI feature. 1: enable, 0: disabled (this parameter is applicable only to HTTPS listeners)</p>
                     * 
                     */
                    int64_t GetSniSwitch() const;

                    /**
                     * 设置<p>Whether to enable SNI feature. 1: enable, 0: disabled (this parameter is applicable only to HTTPS listeners)</p>
                     * @param _sniSwitch <p>Whether to enable SNI feature. 1: enable, 0: disabled (this parameter is applicable only to HTTPS listeners)</p>
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
                     * 获取<p>All forwarding rules under a listener (this parameter is only meaningful for HTTP/HTTPS listeners)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Rules <p>All forwarding rules under a listener (this parameter is only meaningful for HTTP/HTTPS listeners)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<RuleOutput> GetRules() const;

                    /**
                     * 设置<p>All forwarding rules under a listener (this parameter is only meaningful for HTTP/HTTPS listeners)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rules <p>All forwarding rules under a listener (this parameter is only meaningful for HTTP/HTTPS listeners)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRules(const std::vector<RuleOutput>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取<p>Listener name</p>
                     * @return ListenerName <p>Listener name</p>
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置<p>Listener name</p>
                     * @param _listenerName <p>Listener name</p>
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
                     * 获取<p>Listener creation time.</p>
                     * @return CreateTime <p>Listener creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Listener creation time.</p>
                     * @param _createTime <p>Listener creation time.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>End port of the port range: 2–65535</p>
                     * @return EndPort <p>End port of the port range: 2–65535</p>
                     * 
                     */
                    int64_t GetEndPort() const;

                    /**
                     * 设置<p>End port of the port range: 2–65535</p>
                     * @param _endPort <p>End port of the port range: 2–65535</p>
                     * 
                     */
                    void SetEndPort(const int64_t& _endPort);

                    /**
                     * 判断参数 EndPort 是否已赋值
                     * @return EndPort 是否已赋值
                     * 
                     */
                    bool EndPortHasBeenSet() const;

                    /**
                     * 获取<p>Backend server type. Available values: NODE, POLARIS, TARGETGROUP, TARGETGROUP-V2.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TargetType <p>Backend server type. Available values: NODE, POLARIS, TARGETGROUP, TARGETGROUP-V2.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置<p>Backend server type. Available values: NODE, POLARIS, TARGETGROUP, TARGETGROUP-V2.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _targetType <p>Backend server type. Available values: NODE, POLARIS, TARGETGROUP, TARGETGROUP-V2.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Bound target group basic information; return this field when listener binding target group.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TargetGroup <p>Bound target group basic information; return this field when listener binding target group.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    BasicTargetGroupInfo GetTargetGroup() const;

                    /**
                     * 设置<p>Bound target group basic information; return this field when listener binding target group.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _targetGroup <p>Bound target group basic information; return this field when listener binding target group.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTargetGroup(const BasicTargetGroupInfo& _targetGroup);

                    /**
                     * 判断参数 TargetGroup 是否已赋值
                     * @return TargetGroup 是否已赋值
                     * 
                     */
                    bool TargetGroupHasBeenSet() const;

                    /**
                     * 获取<p>Session persistence type. NORMAL means the default session persistence type. QUIC_CID refers to maintaining the session based on Quic Connection ID.</p>
                     * @return SessionType <p>Session persistence type. NORMAL means the default session persistence type. QUIC_CID refers to maintaining the session based on Quic Connection ID.</p>
                     * 
                     */
                    std::string GetSessionType() const;

                    /**
                     * 设置<p>Session persistence type. NORMAL means the default session persistence type. QUIC_CID refers to maintaining the session based on Quic Connection ID.</p>
                     * @param _sessionType <p>Session persistence type. NORMAL means the default session persistence type. QUIC_CID refers to maintaining the session based on Quic Connection ID.</p>
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
                     * 获取<p>Whether to enable long connections. 1: enable, 0: disable (this parameter is applicable only to HTTP/HTTPS listeners)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return KeepaliveEnable <p>Whether to enable long connections. 1: enable, 0: disable (this parameter is applicable only to HTTP/HTTPS listeners)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetKeepaliveEnable() const;

                    /**
                     * 设置<p>Whether to enable long connections. 1: enable, 0: disable (this parameter is applicable only to HTTP/HTTPS listeners)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _keepaliveEnable <p>Whether to enable long connections. 1: enable, 0: disable (this parameter is applicable only to HTTP/HTTPS listeners)</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Only supports Nat64 CLB TCP listener</p>
                     * @return Toa <p>Only supports Nat64 CLB TCP listener</p>
                     * 
                     */
                    bool GetToa() const;

                    /**
                     * 设置<p>Only supports Nat64 CLB TCP listener</p>
                     * @param _toa <p>Only supports Nat64 CLB TCP listener</p>
                     * 
                     */
                    void SetToa(const bool& _toa);

                    /**
                     * 判断参数 Toa 是否已赋值
                     * @return Toa 是否已赋值
                     * 
                     */
                    bool ToaHasBeenSet() const;

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
                     * 获取<p>Listener attribute.</p>
                     * @return AttrFlags <p>Listener attribute.</p>
                     * 
                     */
                    std::vector<std::string> GetAttrFlags() const;

                    /**
                     * 设置<p>Listener attribute.</p>
                     * @param _attrFlags <p>Listener attribute.</p>
                     * 
                     */
                    void SetAttrFlags(const std::vector<std::string>& _attrFlags);

                    /**
                     * 判断参数 AttrFlags 是否已赋值
                     * @return AttrFlags 是否已赋值
                     * 
                     */
                    bool AttrFlagsHasBeenSet() const;

                    /**
                     * 获取<p>List of bound target groups</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TargetGroupList <p>List of bound target groups</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BasicTargetGroupInfo> GetTargetGroupList() const;

                    /**
                     * 设置<p>List of bound target groups</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _targetGroupList <p>List of bound target groups</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTargetGroupList(const std::vector<BasicTargetGroupInfo>& _targetGroupList);

                    /**
                     * 判断参数 TargetGroupList 是否已赋值
                     * @return TargetGroupList 是否已赋值
                     * 
                     */
                    bool TargetGroupListHasBeenSet() const;

                    /**
                     * 获取<p>Maximum number of connections to a listener. -1 means no speed limit at the listener dimension.</p>
                     * @return MaxConn <p>Maximum number of connections to a listener. -1 means no speed limit at the listener dimension.</p>
                     * 
                     */
                    int64_t GetMaxConn() const;

                    /**
                     * 设置<p>Maximum number of connections to a listener. -1 means no speed limit at the listener dimension.</p>
                     * @param _maxConn <p>Maximum number of connections to a listener. -1 means no speed limit at the listener dimension.</p>
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
                     * 获取<p>Maximum number of new connections to a listener. -1 means no speed limit at the listener dimension.</p>
                     * @return MaxCps <p>Maximum number of new connections to a listener. -1 means no speed limit at the listener dimension.</p>
                     * 
                     */
                    int64_t GetMaxCps() const;

                    /**
                     * 设置<p>Maximum number of new connections to a listener. -1 means no speed limit at the listener dimension.</p>
                     * @param _maxCps <p>Maximum number of new connections to a listener. -1 means no speed limit at the listener dimension.</p>
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
                     * 获取<p>Idle connection timeout is only supported for TCP listeners. Default value: 900. Value range: 300–900 for shared instances and dedicated instances and 300–1980 for LCU-supported instances.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IdleConnectTimeout <p>Idle connection timeout is only supported for TCP listeners. Default value: 900. Value range: 300–900 for shared instances and dedicated instances and 300–1980 for LCU-supported instances.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIdleConnectTimeout() const;

                    /**
                     * 设置<p>Idle connection timeout is only supported for TCP listeners. Default value: 900. Value range: 300–900 for shared instances and dedicated instances and 300–1980 for LCU-supported instances.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _idleConnectTimeout <p>Idle connection timeout is only supported for TCP listeners. Default value: 900. Value range: 300–900 for shared instances and dedicated instances and 300–1980 for LCU-supported instances.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Rescheduling trigger duration. Value range: 0–3600. Unit: s. This parameter is applicable only to TCP/UDP listeners. After rescheduling is triggered, persistent connections will be disconnected and reassigned within the scheduled time window. </p><p>Unit: s.</p>
                     * @return RescheduleInterval <p>Rescheduling trigger duration. Value range: 0–3600. Unit: s. This parameter is applicable only to TCP/UDP listeners. After rescheduling is triggered, persistent connections will be disconnected and reassigned within the scheduled time window. </p><p>Unit: s.</p>
                     * 
                     */
                    uint64_t GetRescheduleInterval() const;

                    /**
                     * 设置<p>Rescheduling trigger duration. Value range: 0–3600. Unit: s. This parameter is applicable only to TCP/UDP listeners. After rescheduling is triggered, persistent connections will be disconnected and reassigned within the scheduled time window. </p><p>Unit: s.</p>
                     * @param _rescheduleInterval <p>Rescheduling trigger duration. Value range: 0–3600. Unit: s. This parameter is applicable only to TCP/UDP listeners. After rescheduling is triggered, persistent connections will be disconnected and reassigned within the scheduled time window. </p><p>Unit: s.</p>
                     * 
                     */
                    void SetRescheduleInterval(const uint64_t& _rescheduleInterval);

                    /**
                     * 判断参数 RescheduleInterval 是否已赋值
                     * @return RescheduleInterval 是否已赋值
                     * 
                     */
                    bool RescheduleIntervalHasBeenSet() const;

                    /**
                     * 获取<p>Data compression mode</p>
                     * @return DataCompressMode <p>Data compression mode</p>
                     * 
                     */
                    std::string GetDataCompressMode() const;

                    /**
                     * 设置<p>Data compression mode</p>
                     * @param _dataCompressMode <p>Data compression mode</p>
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
                     * 获取<p>Rescheduling startup time: After the rescheduling startup time is configured, rescheduling is triggered when the startup time is arrived.</p>
                     * @return RescheduleStartTime <p>Rescheduling startup time: After the rescheduling startup time is configured, rescheduling is triggered when the startup time is arrived.</p>
                     * 
                     */
                    int64_t GetRescheduleStartTime() const;

                    /**
                     * 设置<p>Rescheduling startup time: After the rescheduling startup time is configured, rescheduling is triggered when the startup time is arrived.</p>
                     * @param _rescheduleStartTime <p>Rescheduling startup time: After the rescheduling startup time is configured, rescheduling is triggered when the startup time is arrived.</p>
                     * 
                     */
                    void SetRescheduleStartTime(const int64_t& _rescheduleStartTime);

                    /**
                     * 判断参数 RescheduleStartTime 是否已赋值
                     * @return RescheduleStartTime 是否已赋值
                     * 
                     */
                    bool RescheduleStartTimeHasBeenSet() const;

                private:

                    /**
                     * <p>CLB listener ID</p>
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * <p>Listener protocol. Available values: TCP, UDP, HTTP, HTTPS, TCP_SSL, QUIC</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>Listener port, port range: 1–65535</p>
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>Listener bound certificate information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CertificateOutput m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * <p>Health check information of the listener</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    HealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * <p>Requested scheduling method. WRR, LEAST_CONN, and IP_HASH indicate weighted round-robin, least connection, and IP Hash respectively.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * <p>Session persistence time, unit: second. Available values: 30-3600, default 0, disabled by default. This parameter is applicable only to TCP/UDP listener.</p><p>Unit: second</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                    /**
                     * <p>Whether to enable SNI feature. 1: enable, 0: disabled (this parameter is applicable only to HTTPS listeners)</p>
                     */
                    int64_t m_sniSwitch;
                    bool m_sniSwitchHasBeenSet;

                    /**
                     * <p>All forwarding rules under a listener (this parameter is only meaningful for HTTP/HTTPS listeners)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RuleOutput> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * <p>Listener name</p>
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * <p>Listener creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>End port of the port range: 2–65535</p>
                     */
                    int64_t m_endPort;
                    bool m_endPortHasBeenSet;

                    /**
                     * <p>Backend server type. Available values: NODE, POLARIS, TARGETGROUP, TARGETGROUP-V2.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * <p>Bound target group basic information; return this field when listener binding target group.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    BasicTargetGroupInfo m_targetGroup;
                    bool m_targetGroupHasBeenSet;

                    /**
                     * <p>Session persistence type. NORMAL means the default session persistence type. QUIC_CID refers to maintaining the session based on Quic Connection ID.</p>
                     */
                    std::string m_sessionType;
                    bool m_sessionTypeHasBeenSet;

                    /**
                     * <p>Whether to enable long connections. 1: enable, 0: disable (this parameter is applicable only to HTTP/HTTPS listeners)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_keepaliveEnable;
                    bool m_keepaliveEnableHasBeenSet;

                    /**
                     * <p>Only supports Nat64 CLB TCP listener</p>
                     */
                    bool m_toa;
                    bool m_toaHasBeenSet;

                    /**
                     * <p>Rescheduling feature, which provides a switch for scaling out the backend service. If the switch is toggled on, rescheduling is triggered when the backend service is unbound. This parameter is applicable only to TCP/UDP listeners.</p>
                     */
                    bool m_deregisterTargetRst;
                    bool m_deregisterTargetRstHasBeenSet;

                    /**
                     * <p>Listener attribute.</p>
                     */
                    std::vector<std::string> m_attrFlags;
                    bool m_attrFlagsHasBeenSet;

                    /**
                     * <p>List of bound target groups</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<BasicTargetGroupInfo> m_targetGroupList;
                    bool m_targetGroupListHasBeenSet;

                    /**
                     * <p>Maximum number of connections to a listener. -1 means no speed limit at the listener dimension.</p>
                     */
                    int64_t m_maxConn;
                    bool m_maxConnHasBeenSet;

                    /**
                     * <p>Maximum number of new connections to a listener. -1 means no speed limit at the listener dimension.</p>
                     */
                    int64_t m_maxCps;
                    bool m_maxCpsHasBeenSet;

                    /**
                     * <p>Idle connection timeout is only supported for TCP listeners. Default value: 900. Value range: 300–900 for shared instances and dedicated instances and 300–1980 for LCU-supported instances.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_idleConnectTimeout;
                    bool m_idleConnectTimeoutHasBeenSet;

                    /**
                     * <p>Rescheduling trigger duration. Value range: 0–3600. Unit: s. This parameter is applicable only to TCP/UDP listeners. After rescheduling is triggered, persistent connections will be disconnected and reassigned within the scheduled time window. </p><p>Unit: s.</p>
                     */
                    uint64_t m_rescheduleInterval;
                    bool m_rescheduleIntervalHasBeenSet;

                    /**
                     * <p>Data compression mode</p>
                     */
                    std::string m_dataCompressMode;
                    bool m_dataCompressModeHasBeenSet;

                    /**
                     * <p>Rescheduling startup time: After the rescheduling startup time is configured, rescheduling is triggered when the startup time is arrived.</p>
                     */
                    int64_t m_rescheduleStartTime;
                    bool m_rescheduleStartTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_LISTENER_H_
