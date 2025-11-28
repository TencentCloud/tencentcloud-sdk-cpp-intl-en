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
                     * 获取ID of the CLB instance. You can call the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) API to query the ID.
                     * @return LoadBalancerId ID of the CLB instance. You can call the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) API to query the ID.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置ID of the CLB instance. You can call the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) API to query the ID.
                     * @param _loadBalancerId ID of the CLB instance. You can call the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) API to query the ID.
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
                     * 获取ID of the CLB instance listener. You can call the [DescribeListeners](https://intl.cloud.tencent.com/document/product/214/30686?from_cn_redirect=1) API to query the ID.
                     * @return ListenerId ID of the CLB instance listener. You can call the [DescribeListeners](https://intl.cloud.tencent.com/document/product/214/30686?from_cn_redirect=1) API to query the ID.
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置ID of the CLB instance listener. You can call the [DescribeListeners](https://intl.cloud.tencent.com/document/product/214/30686?from_cn_redirect=1) API to query the ID.
                     * @param _listenerId ID of the CLB instance listener. You can call the [DescribeListeners](https://intl.cloud.tencent.com/document/product/214/30686?from_cn_redirect=1) API to query the ID.
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
                     * 获取New listener name. The maximum length is 255 characters.
                     * @return ListenerName New listener name. The maximum length is 255 characters.
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置New listener name. The maximum length is 255 characters.
                     * @param _listenerName New listener name. The maximum length is 255 characters.
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
                     * 获取Certificate information. This parameter is only applicable to HTTPS/TCP_SSL/QUIC listeners. `Certificate` and `MultiCertInfo` cannot be both specified.
                     * @return Certificate Certificate information. This parameter is only applicable to HTTPS/TCP_SSL/QUIC listeners. `Certificate` and `MultiCertInfo` cannot be both specified.
                     * 
                     */
                    CertificateInput GetCertificate() const;

                    /**
                     * 设置Certificate information. This parameter is only applicable to HTTPS/TCP_SSL/QUIC listeners. `Certificate` and `MultiCertInfo` cannot be both specified.
                     * @param _certificate Certificate information. This parameter is only applicable to HTTPS/TCP_SSL/QUIC listeners. `Certificate` and `MultiCertInfo` cannot be both specified.
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
                     * 获取Listener forwarding method. Valid values: WRR (weighted round-robin), LEAST_CONN (least connections), and IP_HASH (IP address hash).
They indicate weighted round-robin and least connections, respectively. Default value: WRR.
Use cases: This applies to TCP/UDP/TCP_SSL/QUIC listeners. The balancing method for Layer-7 listeners should be modified in the forwarding rules.
                     * @return Scheduler Listener forwarding method. Valid values: WRR (weighted round-robin), LEAST_CONN (least connections), and IP_HASH (IP address hash).
They indicate weighted round-robin and least connections, respectively. Default value: WRR.
Use cases: This applies to TCP/UDP/TCP_SSL/QUIC listeners. The balancing method for Layer-7 listeners should be modified in the forwarding rules.
                     * 
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置Listener forwarding method. Valid values: WRR (weighted round-robin), LEAST_CONN (least connections), and IP_HASH (IP address hash).
They indicate weighted round-robin and least connections, respectively. Default value: WRR.
Use cases: This applies to TCP/UDP/TCP_SSL/QUIC listeners. The balancing method for Layer-7 listeners should be modified in the forwarding rules.
                     * @param _scheduler Listener forwarding method. Valid values: WRR (weighted round-robin), LEAST_CONN (least connections), and IP_HASH (IP address hash).
They indicate weighted round-robin and least connections, respectively. Default value: WRR.
Use cases: This applies to TCP/UDP/TCP_SSL/QUIC listeners. The balancing method for Layer-7 listeners should be modified in the forwarding rules.
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
                     * 获取Whether to enable the SNI feature. This parameter applies only to HTTPS listeners. The default value is 0, indicating disabled, and 1 indicates enabled. Note: The SNI feature can be enabled for listeners that have not enabled SNI, but cannot be disabled for listeners that have enabled SNI.
                     * @return SniSwitch Whether to enable the SNI feature. This parameter applies only to HTTPS listeners. The default value is 0, indicating disabled, and 1 indicates enabled. Note: The SNI feature can be enabled for listeners that have not enabled SNI, but cannot be disabled for listeners that have enabled SNI.
                     * 
                     */
                    int64_t GetSniSwitch() const;

                    /**
                     * 设置Whether to enable the SNI feature. This parameter applies only to HTTPS listeners. The default value is 0, indicating disabled, and 1 indicates enabled. Note: The SNI feature can be enabled for listeners that have not enabled SNI, but cannot be disabled for listeners that have enabled SNI.
                     * @param _sniSwitch Whether to enable the SNI feature. This parameter applies only to HTTPS listeners. The default value is 0, indicating disabled, and 1 indicates enabled. Note: The SNI feature can be enabled for listeners that have not enabled SNI, but cannot be disabled for listeners that have enabled SNI.
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
                     * 获取Target backend type. `NODE`: A single node; `TARGETGROUP`: A target group.
                     * @return TargetType Target backend type. `NODE`: A single node; `TARGETGROUP`: A target group.
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置Target backend type. `NODE`: A single node; `TARGETGROUP`: A target group.
                     * @param _targetType Target backend type. `NODE`: A single node; `TARGETGROUP`: A target group.
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
                     * 获取Whether to enable the persistent connection feature. This parameter applies only to HTTP/HTTPS listeners.
The default value is 0, indicating disabled, and 1 indicates enabled.

Enable this feature with caution if the maximum number of connections is limited for real servers. This feature is in beta testing. To use it, submit a [beta testing application](https://intl.cloud.tencent.com/apply/p/tsodp6qm21?from_cn_redirect=1).
                     * @return KeepaliveEnable Whether to enable the persistent connection feature. This parameter applies only to HTTP/HTTPS listeners.
The default value is 0, indicating disabled, and 1 indicates enabled.

Enable this feature with caution if the maximum number of connections is limited for real servers. This feature is in beta testing. To use it, submit a [beta testing application](https://intl.cloud.tencent.com/apply/p/tsodp6qm21?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetKeepaliveEnable() const;

                    /**
                     * 设置Whether to enable the persistent connection feature. This parameter applies only to HTTP/HTTPS listeners.
The default value is 0, indicating disabled, and 1 indicates enabled.

Enable this feature with caution if the maximum number of connections is limited for real servers. This feature is in beta testing. To use it, submit a [beta testing application](https://intl.cloud.tencent.com/apply/p/tsodp6qm21?from_cn_redirect=1).
                     * @param _keepaliveEnable Whether to enable the persistent connection feature. This parameter applies only to HTTP/HTTPS listeners.
The default value is 0, indicating disabled, and 1 indicates enabled.

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
                     * 获取Session persistence type. NORMAL: default session persistence type; QUIC_CID: perform session persistence based on QUIC connection ID. If the value is set to QUIC_CID, only the UDP protocol is supported.
Use cases: This applies to TCP/UDP/TCP_SSL/QUIC listeners.

Default value: NORMAL.
                     * @return SessionType Session persistence type. NORMAL: default session persistence type; QUIC_CID: perform session persistence based on QUIC connection ID. If the value is set to QUIC_CID, only the UDP protocol is supported.
Use cases: This applies to TCP/UDP/TCP_SSL/QUIC listeners.

Default value: NORMAL.
                     * 
                     */
                    std::string GetSessionType() const;

                    /**
                     * 设置Session persistence type. NORMAL: default session persistence type; QUIC_CID: perform session persistence based on QUIC connection ID. If the value is set to QUIC_CID, only the UDP protocol is supported.
Use cases: This applies to TCP/UDP/TCP_SSL/QUIC listeners.

Default value: NORMAL.
                     * @param _sessionType Session persistence type. NORMAL: default session persistence type; QUIC_CID: perform session persistence based on QUIC connection ID. If the value is set to QUIC_CID, only the UDP protocol is supported.
Use cases: This applies to TCP/UDP/TCP_SSL/QUIC listeners.

Default value: NORMAL.
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
                     * 获取Maximum number of concurrent connections at the listener level. This parameter is supported only for LCU-supported instances with TCP/UDP/TCP_SSL/QUIC listeners currently. Value range: 1 to the maximum number of concurrent connections for the instance specification. -1 indicates that no limit is set on the concurrent connections at the listener level. Classic network instances do not support this parameter.

Default value: -1, which indicates no limit.
                     * @return MaxConn Maximum number of concurrent connections at the listener level. This parameter is supported only for LCU-supported instances with TCP/UDP/TCP_SSL/QUIC listeners currently. Value range: 1 to the maximum number of concurrent connections for the instance specification. -1 indicates that no limit is set on the concurrent connections at the listener level. Classic network instances do not support this parameter.

Default value: -1, which indicates no limit.
                     * 
                     */
                    int64_t GetMaxConn() const;

                    /**
                     * 设置Maximum number of concurrent connections at the listener level. This parameter is supported only for LCU-supported instances with TCP/UDP/TCP_SSL/QUIC listeners currently. Value range: 1 to the maximum number of concurrent connections for the instance specification. -1 indicates that no limit is set on the concurrent connections at the listener level. Classic network instances do not support this parameter.

Default value: -1, which indicates no limit.
                     * @param _maxConn Maximum number of concurrent connections at the listener level. This parameter is supported only for LCU-supported instances with TCP/UDP/TCP_SSL/QUIC listeners currently. Value range: 1 to the maximum number of concurrent connections for the instance specification. -1 indicates that no limit is set on the concurrent connections at the listener level. Classic network instances do not support this parameter.

Default value: -1, which indicates no limit.
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
                     * 获取Maximum number of new connections at the listener level. This parameter is supported only for LCU-supported instances with TCP/UDP/TCP_SSL/QUIC listeners currently. Value range: 1 to the maximum number of new connections for the instance specification. -1 indicates that no limit is set on the new connections at the listener level. Classic network instances do not support this parameter.

Default value: -1, which indicates no limit.
                     * @return MaxCps Maximum number of new connections at the listener level. This parameter is supported only for LCU-supported instances with TCP/UDP/TCP_SSL/QUIC listeners currently. Value range: 1 to the maximum number of new connections for the instance specification. -1 indicates that no limit is set on the new connections at the listener level. Classic network instances do not support this parameter.

Default value: -1, which indicates no limit.
                     * 
                     */
                    int64_t GetMaxCps() const;

                    /**
                     * 设置Maximum number of new connections at the listener level. This parameter is supported only for LCU-supported instances with TCP/UDP/TCP_SSL/QUIC listeners currently. Value range: 1 to the maximum number of new connections for the instance specification. -1 indicates that no limit is set on the new connections at the listener level. Classic network instances do not support this parameter.

Default value: -1, which indicates no limit.
                     * @param _maxCps Maximum number of new connections at the listener level. This parameter is supported only for LCU-supported instances with TCP/UDP/TCP_SSL/QUIC listeners currently. Value range: 1 to the maximum number of new connections for the instance specification. -1 indicates that no limit is set on the new connections at the listener level. Classic network instances do not support this parameter.

Default value: -1, which indicates no limit.
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
                     * 获取Specifies the idle connection timeout in seconds. this parameter applies only to TCP/UDP listeners. default value: 900 for TCP listeners and 300 for UDP listeners. value range: 10–900 for shared instances and dedicated instances and 10–1980 for lcu-supported instances. to set a value exceeding 1980, [submit a ticket application](https://console.cloud.tencent.com/workorder/category). the maximum settable value is 3600.
                     * @return IdleConnectTimeout Specifies the idle connection timeout in seconds. this parameter applies only to TCP/UDP listeners. default value: 900 for TCP listeners and 300 for UDP listeners. value range: 10–900 for shared instances and dedicated instances and 10–1980 for lcu-supported instances. to set a value exceeding 1980, [submit a ticket application](https://console.cloud.tencent.com/workorder/category). the maximum settable value is 3600.
                     * 
                     */
                    int64_t GetIdleConnectTimeout() const;

                    /**
                     * 设置Specifies the idle connection timeout in seconds. this parameter applies only to TCP/UDP listeners. default value: 900 for TCP listeners and 300 for UDP listeners. value range: 10–900 for shared instances and dedicated instances and 10–1980 for lcu-supported instances. to set a value exceeding 1980, [submit a ticket application](https://console.cloud.tencent.com/workorder/category). the maximum settable value is 3600.
                     * @param _idleConnectTimeout Specifies the idle connection timeout in seconds. this parameter applies only to TCP/UDP listeners. default value: 900 for TCP listeners and 300 for UDP listeners. value range: 10–900 for shared instances and dedicated instances and 10–1980 for lcu-supported instances. to set a value exceeding 1980, [submit a ticket application](https://console.cloud.tencent.com/workorder/category). the maximum settable value is 3600.
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
                     * 获取Data compression mode.
                     * @return DataCompressMode Data compression mode.
                     * 
                     */
                    std::string GetDataCompressMode() const;

                    /**
                     * 设置Data compression mode.
                     * @param _dataCompressMode Data compression mode.
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
                     * ID of the CLB instance. You can call the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) API to query the ID.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * ID of the CLB instance listener. You can call the [DescribeListeners](https://intl.cloud.tencent.com/document/product/214/30686?from_cn_redirect=1) API to query the ID.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * New listener name. The maximum length is 255 characters.
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * Session persistence time in seconds. Value range: 30-3,600. The default value is 0, indicating that session persistence is not enabled. This parameter is applicable only to TCP/UDP listeners.
                     */
                    int64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                    /**
                     * Health check parameter. It is only applicable only to TCP, UDP, TCP_SSL and QUIC listeners.
                     */
                    HealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * Certificate information. This parameter is only applicable to HTTPS/TCP_SSL/QUIC listeners. `Certificate` and `MultiCertInfo` cannot be both specified.
                     */
                    CertificateInput m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * Listener forwarding method. Valid values: WRR (weighted round-robin), LEAST_CONN (least connections), and IP_HASH (IP address hash).
They indicate weighted round-robin and least connections, respectively. Default value: WRR.
Use cases: This applies to TCP/UDP/TCP_SSL/QUIC listeners. The balancing method for Layer-7 listeners should be modified in the forwarding rules.
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * Whether to enable the SNI feature. This parameter applies only to HTTPS listeners. The default value is 0, indicating disabled, and 1 indicates enabled. Note: The SNI feature can be enabled for listeners that have not enabled SNI, but cannot be disabled for listeners that have enabled SNI.
                     */
                    int64_t m_sniSwitch;
                    bool m_sniSwitchHasBeenSet;

                    /**
                     * Target backend type. `NODE`: A single node; `TARGETGROUP`: A target group.
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * Whether to enable the persistent connection feature. This parameter applies only to HTTP/HTTPS listeners.
The default value is 0, indicating disabled, and 1 indicates enabled.

Enable this feature with caution if the maximum number of connections is limited for real servers. This feature is in beta testing. To use it, submit a [beta testing application](https://intl.cloud.tencent.com/apply/p/tsodp6qm21?from_cn_redirect=1).
                     */
                    int64_t m_keepaliveEnable;
                    bool m_keepaliveEnableHasBeenSet;

                    /**
                     * Reschedules when unbinding real servers. only supported for TCP/UDP listeners. toggle on to enable this feature.
                     */
                    bool m_deregisterTargetRst;
                    bool m_deregisterTargetRstHasBeenSet;

                    /**
                     * Session persistence type. NORMAL: default session persistence type; QUIC_CID: perform session persistence based on QUIC connection ID. If the value is set to QUIC_CID, only the UDP protocol is supported.
Use cases: This applies to TCP/UDP/TCP_SSL/QUIC listeners.

Default value: NORMAL.
                     */
                    std::string m_sessionType;
                    bool m_sessionTypeHasBeenSet;

                    /**
                     * Certificate information. You can specify multiple server-side certificates with different algorithm types. This parameter is only applicable to HTTPS listeners with the SNI feature not enabled. `Certificate` and `MultiCertInfo` cannot be specified at the same time. 
                     */
                    MultiCertInfo m_multiCertInfo;
                    bool m_multiCertInfoHasBeenSet;

                    /**
                     * Maximum number of concurrent connections at the listener level. This parameter is supported only for LCU-supported instances with TCP/UDP/TCP_SSL/QUIC listeners currently. Value range: 1 to the maximum number of concurrent connections for the instance specification. -1 indicates that no limit is set on the concurrent connections at the listener level. Classic network instances do not support this parameter.

Default value: -1, which indicates no limit.
                     */
                    int64_t m_maxConn;
                    bool m_maxConnHasBeenSet;

                    /**
                     * Maximum number of new connections at the listener level. This parameter is supported only for LCU-supported instances with TCP/UDP/TCP_SSL/QUIC listeners currently. Value range: 1 to the maximum number of new connections for the instance specification. -1 indicates that no limit is set on the new connections at the listener level. Classic network instances do not support this parameter.

Default value: -1, which indicates no limit.
                     */
                    int64_t m_maxCps;
                    bool m_maxCpsHasBeenSet;

                    /**
                     * Specifies the idle connection timeout in seconds. this parameter applies only to TCP/UDP listeners. default value: 900 for TCP listeners and 300 for UDP listeners. value range: 10–900 for shared instances and dedicated instances and 10–1980 for lcu-supported instances. to set a value exceeding 1980, [submit a ticket application](https://console.cloud.tencent.com/workorder/category). the maximum settable value is 3600.
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
                     * Data compression mode.
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

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLISTENERREQUEST_H_
