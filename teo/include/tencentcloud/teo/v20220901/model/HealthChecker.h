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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_HEALTHCHECKER_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_HEALTHCHECKER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CustomizedHeader.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * LoadBalancer health check policy.
                */
                class HealthChecker : public AbstractModel
                {
                public:
                    HealthChecker();
                    ~HealthChecker() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Health check policy. Valid values:</p><li>HTTP;</li><li>HTTPS;</li><li>TCP;</li><li>UDP;</li><li>ICMP Ping;</li><li>NoCheck.</li>Note: NoCheck means health check policy is not enabled.
                     * @return Type <p>Health check policy. Valid values:</p><li>HTTP;</li><li>HTTPS;</li><li>TCP;</li><li>UDP;</li><li>ICMP Ping;</li><li>NoCheck.</li>Note: NoCheck means health check policy is not enabled.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Health check policy. Valid values:</p><li>HTTP;</li><li>HTTPS;</li><li>TCP;</li><li>UDP;</li><li>ICMP Ping;</li><li>NoCheck.</li>Note: NoCheck means health check policy is not enabled.
                     * @param _type <p>Health check policy. Valid values:</p><li>HTTP;</li><li>HTTPS;</li><li>TCP;</li><li>UDP;</li><li>ICMP Ping;</li><li>NoCheck.</li>Note: NoCheck means health check policy is not enabled.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Check port, which is required when Type = HTTP, Type = HTTPS, Type = TCP, or Type = UDP.</p>
                     * @return Port <p>Check port, which is required when Type = HTTP, Type = HTTPS, Type = TCP, or Type = UDP.</p>
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置<p>Check port, which is required when Type = HTTP, Type = HTTPS, Type = TCP, or Type = UDP.</p>
                     * @param _port <p>Check port, which is required when Type = HTTP, Type = HTTPS, Type = TCP, or Type = UDP.</p>
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取<p>Check frequency, in seconds. It indicates how often a health check task is initiated. Configurable range: 10-600 seconds.</p>
                     * @return Interval <p>Check frequency, in seconds. It indicates how often a health check task is initiated. Configurable range: 10-600 seconds.</p>
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置<p>Check frequency, in seconds. It indicates how often a health check task is initiated. Configurable range: 10-600 seconds.</p>
                     * @param _interval <p>Check frequency, in seconds. It indicates how often a health check task is initiated. Configurable range: 10-600 seconds.</p>
                     * 
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取<p>Timeout for each health check, in seconds. If the health check time exceeds this value, the check result is determined as "unhealthy". The default value is 5s, and the value should be less than Interval.</p>
                     * @return Timeout <p>Timeout for each health check, in seconds. If the health check time exceeds this value, the check result is determined as "unhealthy". The default value is 5s, and the value should be less than Interval.</p>
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置<p>Timeout for each health check, in seconds. If the health check time exceeds this value, the check result is determined as "unhealthy". The default value is 5s, and the value should be less than Interval.</p>
                     * @param _timeout <p>Timeout for each health check, in seconds. If the health check time exceeds this value, the check result is determined as "unhealthy". The default value is 5s, and the value should be less than Interval.</p>
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取<p>Health threshold, in the number of times. It indicates that if the consecutive health check results are "healthy" for a certain number of times, an origin server is considered "healthy". The default value is 3 times, with the minimum value of 1 time.</p>
                     * @return HealthThreshold <p>Health threshold, in the number of times. It indicates that if the consecutive health check results are "healthy" for a certain number of times, an origin server is considered "healthy". The default value is 3 times, with the minimum value of 1 time.</p>
                     * 
                     */
                    uint64_t GetHealthThreshold() const;

                    /**
                     * 设置<p>Health threshold, in the number of times. It indicates that if the consecutive health check results are "healthy" for a certain number of times, an origin server is considered "healthy". The default value is 3 times, with the minimum value of 1 time.</p>
                     * @param _healthThreshold <p>Health threshold, in the number of times. It indicates that if the consecutive health check results are "healthy" for a certain number of times, an origin server is considered "healthy". The default value is 3 times, with the minimum value of 1 time.</p>
                     * 
                     */
                    void SetHealthThreshold(const uint64_t& _healthThreshold);

                    /**
                     * 判断参数 HealthThreshold 是否已赋值
                     * @return HealthThreshold 是否已赋值
                     * 
                     */
                    bool HealthThresholdHasBeenSet() const;

                    /**
                     * 获取<p>Unhealthy state threshold, in the number of times. It indicates that if the consecutive health check results are "unhealthy" for a certain number of times, an origin server is considered "unhealthy". The default value is 2 times.</p>
                     * @return CriticalThreshold <p>Unhealthy state threshold, in the number of times. It indicates that if the consecutive health check results are "unhealthy" for a certain number of times, an origin server is considered "unhealthy". The default value is 2 times.</p>
                     * 
                     */
                    uint64_t GetCriticalThreshold() const;

                    /**
                     * 设置<p>Unhealthy state threshold, in the number of times. It indicates that if the consecutive health check results are "unhealthy" for a certain number of times, an origin server is considered "unhealthy". The default value is 2 times.</p>
                     * @param _criticalThreshold <p>Unhealthy state threshold, in the number of times. It indicates that if the consecutive health check results are "unhealthy" for a certain number of times, an origin server is considered "unhealthy". The default value is 2 times.</p>
                     * 
                     */
                    void SetCriticalThreshold(const uint64_t& _criticalThreshold);

                    /**
                     * 判断参数 CriticalThreshold 是否已赋值
                     * @return CriticalThreshold 是否已赋值
                     * 
                     */
                    bool CriticalThresholdHasBeenSet() const;

                    /**
                     * 获取<p>Probe path. This parameter is valid only when Type = HTTP or Type = HTTPS. It needs to include the complete host/path and should not contain a protocol, for example, www.example.com/test.</p>
                     * @return Path <p>Probe path. This parameter is valid only when Type = HTTP or Type = HTTPS. It needs to include the complete host/path and should not contain a protocol, for example, www.example.com/test.</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>Probe path. This parameter is valid only when Type = HTTP or Type = HTTPS. It needs to include the complete host/path and should not contain a protocol, for example, www.example.com/test.</p>
                     * @param _path <p>Probe path. This parameter is valid only when Type = HTTP or Type = HTTPS. It needs to include the complete host/path and should not contain a protocol, for example, www.example.com/test.</p>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>Probe request Host Header policy. It takes effect only when Type=HTTP or Type=HTTPS and the instance type is HTTP-dedicated (V2). Valid values:</p><li>FollowCheckURL: Follows the Host specified by the probe URL, that is, the Host part in the HealthChecker.Path field will be used as the Host address for probing;</li><li>FollowOriginGroup: Follows the origin-pull Host Header configured in the origin group, that is, the OriginGroup.HostHeader field value of the origin group where the probed origin resides will be used as the Host address for probing. If the origin group has no HostHeader configured, the Host part in the HealthChecker.Path field will be used as the Host address for probing;</li><li>FollowOrigin: Follows the origin address, that is, the OriginGroup.Records[N].Record field value (the origin address itself) of the corresponding origin record in the origin group where the probed origin resides will be used as the Host address for probing.</li>Default: FollowCheckURL.
                     * @return HostHeaderPolicy <p>Probe request Host Header policy. It takes effect only when Type=HTTP or Type=HTTPS and the instance type is HTTP-dedicated (V2). Valid values:</p><li>FollowCheckURL: Follows the Host specified by the probe URL, that is, the Host part in the HealthChecker.Path field will be used as the Host address for probing;</li><li>FollowOriginGroup: Follows the origin-pull Host Header configured in the origin group, that is, the OriginGroup.HostHeader field value of the origin group where the probed origin resides will be used as the Host address for probing. If the origin group has no HostHeader configured, the Host part in the HealthChecker.Path field will be used as the Host address for probing;</li><li>FollowOrigin: Follows the origin address, that is, the OriginGroup.Records[N].Record field value (the origin address itself) of the corresponding origin record in the origin group where the probed origin resides will be used as the Host address for probing.</li>Default: FollowCheckURL.
                     * 
                     */
                    std::string GetHostHeaderPolicy() const;

                    /**
                     * 设置<p>Probe request Host Header policy. It takes effect only when Type=HTTP or Type=HTTPS and the instance type is HTTP-dedicated (V2). Valid values:</p><li>FollowCheckURL: Follows the Host specified by the probe URL, that is, the Host part in the HealthChecker.Path field will be used as the Host address for probing;</li><li>FollowOriginGroup: Follows the origin-pull Host Header configured in the origin group, that is, the OriginGroup.HostHeader field value of the origin group where the probed origin resides will be used as the Host address for probing. If the origin group has no HostHeader configured, the Host part in the HealthChecker.Path field will be used as the Host address for probing;</li><li>FollowOrigin: Follows the origin address, that is, the OriginGroup.Records[N].Record field value (the origin address itself) of the corresponding origin record in the origin group where the probed origin resides will be used as the Host address for probing.</li>Default: FollowCheckURL.
                     * @param _hostHeaderPolicy <p>Probe request Host Header policy. It takes effect only when Type=HTTP or Type=HTTPS and the instance type is HTTP-dedicated (V2). Valid values:</p><li>FollowCheckURL: Follows the Host specified by the probe URL, that is, the Host part in the HealthChecker.Path field will be used as the Host address for probing;</li><li>FollowOriginGroup: Follows the origin-pull Host Header configured in the origin group, that is, the OriginGroup.HostHeader field value of the origin group where the probed origin resides will be used as the Host address for probing. If the origin group has no HostHeader configured, the Host part in the HealthChecker.Path field will be used as the Host address for probing;</li><li>FollowOrigin: Follows the origin address, that is, the OriginGroup.Records[N].Record field value (the origin address itself) of the corresponding origin record in the origin group where the probed origin resides will be used as the Host address for probing.</li>Default: FollowCheckURL.
                     * 
                     */
                    void SetHostHeaderPolicy(const std::string& _hostHeaderPolicy);

                    /**
                     * 判断参数 HostHeaderPolicy 是否已赋值
                     * @return HostHeaderPolicy 是否已赋值
                     * 
                     */
                    bool HostHeaderPolicyHasBeenSet() const;

                    /**
                     * 获取<p>Request method. This parameter is valid only when Type = HTTP or Type = HTTPS. Valid values:</p><li>GET;</li><li>HEAD.</li>
                     * @return Method <p>Request method. This parameter is valid only when Type = HTTP or Type = HTTPS. Valid values:</p><li>GET;</li><li>HEAD.</li>
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置<p>Request method. This parameter is valid only when Type = HTTP or Type = HTTPS. Valid values:</p><li>GET;</li><li>HEAD.</li>
                     * @param _method <p>Request method. This parameter is valid only when Type = HTTP or Type = HTTPS. Valid values:</p><li>GET;</li><li>HEAD.</li>
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取<p>The status codes used to determine that the probe result is healthy when the probe node initiates a health check to an origin server. This parameter is valid only when Type = HTTP or Type = HTTPS.</p>
                     * @return ExpectedCodes <p>The status codes used to determine that the probe result is healthy when the probe node initiates a health check to an origin server. This parameter is valid only when Type = HTTP or Type = HTTPS.</p>
                     * 
                     */
                    std::vector<std::string> GetExpectedCodes() const;

                    /**
                     * 设置<p>The status codes used to determine that the probe result is healthy when the probe node initiates a health check to an origin server. This parameter is valid only when Type = HTTP or Type = HTTPS.</p>
                     * @param _expectedCodes <p>The status codes used to determine that the probe result is healthy when the probe node initiates a health check to an origin server. This parameter is valid only when Type = HTTP or Type = HTTPS.</p>
                     * 
                     */
                    void SetExpectedCodes(const std::vector<std::string>& _expectedCodes);

                    /**
                     * 判断参数 ExpectedCodes 是否已赋值
                     * @return ExpectedCodes 是否已赋值
                     * 
                     */
                    bool ExpectedCodesHasBeenSet() const;

                    /**
                     * 获取<p>This parameter is valid only when Type=HTTP or Type=HTTPS. It refers to the custom HTTP request header carried in the probe request. Up to 10 can be configured.</p>
                     * @return Headers <p>This parameter is valid only when Type=HTTP or Type=HTTPS. It refers to the custom HTTP request header carried in the probe request. Up to 10 can be configured.</p>
                     * 
                     */
                    std::vector<CustomizedHeader> GetHeaders() const;

                    /**
                     * 设置<p>This parameter is valid only when Type=HTTP or Type=HTTPS. It refers to the custom HTTP request header carried in the probe request. Up to 10 can be configured.</p>
                     * @param _headers <p>This parameter is valid only when Type=HTTP or Type=HTTPS. It refers to the custom HTTP request header carried in the probe request. Up to 10 can be configured.</p>
                     * 
                     */
                    void SetHeaders(const std::vector<CustomizedHeader>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                    /**
                     * 获取<p>Whether to follow 301/302 redirect. When enabled, 301/302 is considered a "healthy" status code, redirecting 3 times by default. This parameter is valid only when Type = HTTP or Type = HTTPS.</p>
                     * @return FollowRedirect <p>Whether to follow 301/302 redirect. When enabled, 301/302 is considered a "healthy" status code, redirecting 3 times by default. This parameter is valid only when Type = HTTP or Type = HTTPS.</p>
                     * 
                     */
                    std::string GetFollowRedirect() const;

                    /**
                     * 设置<p>Whether to follow 301/302 redirect. When enabled, 301/302 is considered a "healthy" status code, redirecting 3 times by default. This parameter is valid only when Type = HTTP or Type = HTTPS.</p>
                     * @param _followRedirect <p>Whether to follow 301/302 redirect. When enabled, 301/302 is considered a "healthy" status code, redirecting 3 times by default. This parameter is valid only when Type = HTTP or Type = HTTPS.</p>
                     * 
                     */
                    void SetFollowRedirect(const std::string& _followRedirect);

                    /**
                     * 判断参数 FollowRedirect 是否已赋值
                     * @return FollowRedirect 是否已赋值
                     * 
                     */
                    bool FollowRedirectHasBeenSet() const;

                    /**
                     * 获取<p>The content sent by a health check. Only ASCII visible characters are allowed, with up to 500 characters. This parameter is valid only when Type = UDP.</p>
                     * @return SendContext <p>The content sent by a health check. Only ASCII visible characters are allowed, with up to 500 characters. This parameter is valid only when Type = UDP.</p>
                     * 
                     */
                    std::string GetSendContext() const;

                    /**
                     * 设置<p>The content sent by a health check. Only ASCII visible characters are allowed, with up to 500 characters. This parameter is valid only when Type = UDP.</p>
                     * @param _sendContext <p>The content sent by a health check. Only ASCII visible characters are allowed, with up to 500 characters. This parameter is valid only when Type = UDP.</p>
                     * 
                     */
                    void SetSendContext(const std::string& _sendContext);

                    /**
                     * 判断参数 SendContext 是否已赋值
                     * @return SendContext 是否已赋值
                     * 
                     */
                    bool SendContextHasBeenSet() const;

                    /**
                     * 获取<p>The expected return result from an origin server during health check. Only ASCII visible characters are allowed, with up to 500 characters. This parameter is valid only when Type = UDP.</p>
                     * @return RecvContext <p>The expected return result from an origin server during health check. Only ASCII visible characters are allowed, with up to 500 characters. This parameter is valid only when Type = UDP.</p>
                     * 
                     */
                    std::string GetRecvContext() const;

                    /**
                     * 设置<p>The expected return result from an origin server during health check. Only ASCII visible characters are allowed, with up to 500 characters. This parameter is valid only when Type = UDP.</p>
                     * @param _recvContext <p>The expected return result from an origin server during health check. Only ASCII visible characters are allowed, with up to 500 characters. This parameter is valid only when Type = UDP.</p>
                     * 
                     */
                    void SetRecvContext(const std::string& _recvContext);

                    /**
                     * 判断参数 RecvContext 是否已赋值
                     * @return RecvContext 是否已赋值
                     * 
                     */
                    bool RecvContextHasBeenSet() const;

                    /**
                     * 获取<p>Health check probe cluster. Specifies the cluster region scope from which this load balancer instance initiates health probes. For details on the regional distribution of probe clusters, see <a href="https://www.tencentcloud.com/document/product/1552/104228?from_cn_redirect=1">Health Check Policy Introduction</a>. This can be configured only for HTTP-dedicated (V2) load balancer instances. Valid values:</p><li>global: Probes are initiated by probe clusters in all regions worldwide, including the Chinese mainland and regions outside the Chinese mainland. Clusters in each region independently maintain their own probe results;</li><li>mainland_china: Probes are initiated only by probe clusters in the Chinese mainland. Currently, the Chinese mainland shares one probe cluster, and probe results are maintained by the probe cluster in the Chinese mainland. Other regions follow the probe results of the cluster in the Chinese mainland;</li><li>overseas: Probes are initiated only by probe clusters in regions outside the Chinese mainland. Currently, regions outside the Chinese mainland contain probe clusters in multiple areas, and probe results are independently maintained by the probe clusters in each area. Probe results for the Chinese mainland are generated by aggregating the probe results of the probe clusters in all other areas.</li>Default: global.
                     * @return ProbeCluster <p>Health check probe cluster. Specifies the cluster region scope from which this load balancer instance initiates health probes. For details on the regional distribution of probe clusters, see <a href="https://www.tencentcloud.com/document/product/1552/104228?from_cn_redirect=1">Health Check Policy Introduction</a>. This can be configured only for HTTP-dedicated (V2) load balancer instances. Valid values:</p><li>global: Probes are initiated by probe clusters in all regions worldwide, including the Chinese mainland and regions outside the Chinese mainland. Clusters in each region independently maintain their own probe results;</li><li>mainland_china: Probes are initiated only by probe clusters in the Chinese mainland. Currently, the Chinese mainland shares one probe cluster, and probe results are maintained by the probe cluster in the Chinese mainland. Other regions follow the probe results of the cluster in the Chinese mainland;</li><li>overseas: Probes are initiated only by probe clusters in regions outside the Chinese mainland. Currently, regions outside the Chinese mainland contain probe clusters in multiple areas, and probe results are independently maintained by the probe clusters in each area. Probe results for the Chinese mainland are generated by aggregating the probe results of the probe clusters in all other areas.</li>Default: global.
                     * 
                     */
                    std::string GetProbeCluster() const;

                    /**
                     * 设置<p>Health check probe cluster. Specifies the cluster region scope from which this load balancer instance initiates health probes. For details on the regional distribution of probe clusters, see <a href="https://www.tencentcloud.com/document/product/1552/104228?from_cn_redirect=1">Health Check Policy Introduction</a>. This can be configured only for HTTP-dedicated (V2) load balancer instances. Valid values:</p><li>global: Probes are initiated by probe clusters in all regions worldwide, including the Chinese mainland and regions outside the Chinese mainland. Clusters in each region independently maintain their own probe results;</li><li>mainland_china: Probes are initiated only by probe clusters in the Chinese mainland. Currently, the Chinese mainland shares one probe cluster, and probe results are maintained by the probe cluster in the Chinese mainland. Other regions follow the probe results of the cluster in the Chinese mainland;</li><li>overseas: Probes are initiated only by probe clusters in regions outside the Chinese mainland. Currently, regions outside the Chinese mainland contain probe clusters in multiple areas, and probe results are independently maintained by the probe clusters in each area. Probe results for the Chinese mainland are generated by aggregating the probe results of the probe clusters in all other areas.</li>Default: global.
                     * @param _probeCluster <p>Health check probe cluster. Specifies the cluster region scope from which this load balancer instance initiates health probes. For details on the regional distribution of probe clusters, see <a href="https://www.tencentcloud.com/document/product/1552/104228?from_cn_redirect=1">Health Check Policy Introduction</a>. This can be configured only for HTTP-dedicated (V2) load balancer instances. Valid values:</p><li>global: Probes are initiated by probe clusters in all regions worldwide, including the Chinese mainland and regions outside the Chinese mainland. Clusters in each region independently maintain their own probe results;</li><li>mainland_china: Probes are initiated only by probe clusters in the Chinese mainland. Currently, the Chinese mainland shares one probe cluster, and probe results are maintained by the probe cluster in the Chinese mainland. Other regions follow the probe results of the cluster in the Chinese mainland;</li><li>overseas: Probes are initiated only by probe clusters in regions outside the Chinese mainland. Currently, regions outside the Chinese mainland contain probe clusters in multiple areas, and probe results are independently maintained by the probe clusters in each area. Probe results for the Chinese mainland are generated by aggregating the probe results of the probe clusters in all other areas.</li>Default: global.
                     * 
                     */
                    void SetProbeCluster(const std::string& _probeCluster);

                    /**
                     * 判断参数 ProbeCluster 是否已赋值
                     * @return ProbeCluster 是否已赋值
                     * 
                     */
                    bool ProbeClusterHasBeenSet() const;

                private:

                    /**
                     * <p>Health check policy. Valid values:</p><li>HTTP;</li><li>HTTPS;</li><li>TCP;</li><li>UDP;</li><li>ICMP Ping;</li><li>NoCheck.</li>Note: NoCheck means health check policy is not enabled.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Check port, which is required when Type = HTTP, Type = HTTPS, Type = TCP, or Type = UDP.</p>
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>Check frequency, in seconds. It indicates how often a health check task is initiated. Configurable range: 10-600 seconds.</p>
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p>Timeout for each health check, in seconds. If the health check time exceeds this value, the check result is determined as "unhealthy". The default value is 5s, and the value should be less than Interval.</p>
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>Health threshold, in the number of times. It indicates that if the consecutive health check results are "healthy" for a certain number of times, an origin server is considered "healthy". The default value is 3 times, with the minimum value of 1 time.</p>
                     */
                    uint64_t m_healthThreshold;
                    bool m_healthThresholdHasBeenSet;

                    /**
                     * <p>Unhealthy state threshold, in the number of times. It indicates that if the consecutive health check results are "unhealthy" for a certain number of times, an origin server is considered "unhealthy". The default value is 2 times.</p>
                     */
                    uint64_t m_criticalThreshold;
                    bool m_criticalThresholdHasBeenSet;

                    /**
                     * <p>Probe path. This parameter is valid only when Type = HTTP or Type = HTTPS. It needs to include the complete host/path and should not contain a protocol, for example, www.example.com/test.</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>Probe request Host Header policy. It takes effect only when Type=HTTP or Type=HTTPS and the instance type is HTTP-dedicated (V2). Valid values:</p><li>FollowCheckURL: Follows the Host specified by the probe URL, that is, the Host part in the HealthChecker.Path field will be used as the Host address for probing;</li><li>FollowOriginGroup: Follows the origin-pull Host Header configured in the origin group, that is, the OriginGroup.HostHeader field value of the origin group where the probed origin resides will be used as the Host address for probing. If the origin group has no HostHeader configured, the Host part in the HealthChecker.Path field will be used as the Host address for probing;</li><li>FollowOrigin: Follows the origin address, that is, the OriginGroup.Records[N].Record field value (the origin address itself) of the corresponding origin record in the origin group where the probed origin resides will be used as the Host address for probing.</li>Default: FollowCheckURL.
                     */
                    std::string m_hostHeaderPolicy;
                    bool m_hostHeaderPolicyHasBeenSet;

                    /**
                     * <p>Request method. This parameter is valid only when Type = HTTP or Type = HTTPS. Valid values:</p><li>GET;</li><li>HEAD.</li>
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * <p>The status codes used to determine that the probe result is healthy when the probe node initiates a health check to an origin server. This parameter is valid only when Type = HTTP or Type = HTTPS.</p>
                     */
                    std::vector<std::string> m_expectedCodes;
                    bool m_expectedCodesHasBeenSet;

                    /**
                     * <p>This parameter is valid only when Type=HTTP or Type=HTTPS. It refers to the custom HTTP request header carried in the probe request. Up to 10 can be configured.</p>
                     */
                    std::vector<CustomizedHeader> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * <p>Whether to follow 301/302 redirect. When enabled, 301/302 is considered a "healthy" status code, redirecting 3 times by default. This parameter is valid only when Type = HTTP or Type = HTTPS.</p>
                     */
                    std::string m_followRedirect;
                    bool m_followRedirectHasBeenSet;

                    /**
                     * <p>The content sent by a health check. Only ASCII visible characters are allowed, with up to 500 characters. This parameter is valid only when Type = UDP.</p>
                     */
                    std::string m_sendContext;
                    bool m_sendContextHasBeenSet;

                    /**
                     * <p>The expected return result from an origin server during health check. Only ASCII visible characters are allowed, with up to 500 characters. This parameter is valid only when Type = UDP.</p>
                     */
                    std::string m_recvContext;
                    bool m_recvContextHasBeenSet;

                    /**
                     * <p>Health check probe cluster. Specifies the cluster region scope from which this load balancer instance initiates health probes. For details on the regional distribution of probe clusters, see <a href="https://www.tencentcloud.com/document/product/1552/104228?from_cn_redirect=1">Health Check Policy Introduction</a>. This can be configured only for HTTP-dedicated (V2) load balancer instances. Valid values:</p><li>global: Probes are initiated by probe clusters in all regions worldwide, including the Chinese mainland and regions outside the Chinese mainland. Clusters in each region independently maintain their own probe results;</li><li>mainland_china: Probes are initiated only by probe clusters in the Chinese mainland. Currently, the Chinese mainland shares one probe cluster, and probe results are maintained by the probe cluster in the Chinese mainland. Other regions follow the probe results of the cluster in the Chinese mainland;</li><li>overseas: Probes are initiated only by probe clusters in regions outside the Chinese mainland. Currently, regions outside the Chinese mainland contain probe clusters in multiple areas, and probe results are independently maintained by the probe clusters in each area. Probe results for the Chinese mainland are generated by aggregating the probe results of the probe clusters in all other areas.</li>Default: global.
                     */
                    std::string m_probeCluster;
                    bool m_probeClusterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_HEALTHCHECKER_H_
