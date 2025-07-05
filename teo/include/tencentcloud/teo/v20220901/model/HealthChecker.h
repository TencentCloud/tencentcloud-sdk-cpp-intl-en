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
                     * 获取Health check policy. Valid values:
<li>HTTP.</li>
<li>HTTPS.</li>
<li>TCP.</li>
<li>UDP.</li>
<li>ICMP Ping.</li>
<li>NoCheck.</li>
Note: NoCheck means the health check policy is not enabled.
                     * @return Type Health check policy. Valid values:
<li>HTTP.</li>
<li>HTTPS.</li>
<li>TCP.</li>
<li>UDP.</li>
<li>ICMP Ping.</li>
<li>NoCheck.</li>
Note: NoCheck means the health check policy is not enabled.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Health check policy. Valid values:
<li>HTTP.</li>
<li>HTTPS.</li>
<li>TCP.</li>
<li>UDP.</li>
<li>ICMP Ping.</li>
<li>NoCheck.</li>
Note: NoCheck means the health check policy is not enabled.
                     * @param _type Health check policy. Valid values:
<li>HTTP.</li>
<li>HTTPS.</li>
<li>TCP.</li>
<li>UDP.</li>
<li>ICMP Ping.</li>
<li>NoCheck.</li>
Note: NoCheck means the health check policy is not enabled.
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
                     * 获取Check port, which is required when Type = HTTP, Type = HTTPS, Type = TCP, or Type = UDP.
                     * @return Port Check port, which is required when Type = HTTP, Type = HTTPS, Type = TCP, or Type = UDP.
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Check port, which is required when Type = HTTP, Type = HTTPS, Type = TCP, or Type = UDP.
                     * @param _port Check port, which is required when Type = HTTP, Type = HTTPS, Type = TCP, or Type = UDP.
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
                     * 获取Check frequency, in seconds. It indicates how often a health check task is initiated. Valid values: 30, 60, 180, 300, 600.
                     * @return Interval Check frequency, in seconds. It indicates how often a health check task is initiated. Valid values: 30, 60, 180, 300, 600.
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置Check frequency, in seconds. It indicates how often a health check task is initiated. Valid values: 30, 60, 180, 300, 600.
                     * @param _interval Check frequency, in seconds. It indicates how often a health check task is initiated. Valid values: 30, 60, 180, 300, 600.
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
                     * 获取Timeout for each health check, in seconds. If the health check time exceeds this value, the check result is determined as "unhealthy". The default value is 5s, and the value should be less than Interval.
                     * @return Timeout Timeout for each health check, in seconds. If the health check time exceeds this value, the check result is determined as "unhealthy". The default value is 5s, and the value should be less than Interval.
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置Timeout for each health check, in seconds. If the health check time exceeds this value, the check result is determined as "unhealthy". The default value is 5s, and the value should be less than Interval.
                     * @param _timeout Timeout for each health check, in seconds. If the health check time exceeds this value, the check result is determined as "unhealthy". The default value is 5s, and the value should be less than Interval.
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
                     * 获取Healthy state threshold, in the number of times. It indicates that if the consecutive health check results are "healthy" for a certain number of times, an origin server is considered "healthy". The default value is 3 times, with the minimum value of 1 time.
                     * @return HealthThreshold Healthy state threshold, in the number of times. It indicates that if the consecutive health check results are "healthy" for a certain number of times, an origin server is considered "healthy". The default value is 3 times, with the minimum value of 1 time.
                     * 
                     */
                    uint64_t GetHealthThreshold() const;

                    /**
                     * 设置Healthy state threshold, in the number of times. It indicates that if the consecutive health check results are "healthy" for a certain number of times, an origin server is considered "healthy". The default value is 3 times, with the minimum value of 1 time.
                     * @param _healthThreshold Healthy state threshold, in the number of times. It indicates that if the consecutive health check results are "healthy" for a certain number of times, an origin server is considered "healthy". The default value is 3 times, with the minimum value of 1 time.
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
                     * 获取Unhealthy state threshold, in the number of times. It indicates that if the consecutive health check results are "unhealthy" for a certain number of times, an origin server is considered "unhealthy". The default value is 2 times.
                     * @return CriticalThreshold Unhealthy state threshold, in the number of times. It indicates that if the consecutive health check results are "unhealthy" for a certain number of times, an origin server is considered "unhealthy". The default value is 2 times.
                     * 
                     */
                    uint64_t GetCriticalThreshold() const;

                    /**
                     * 设置Unhealthy state threshold, in the number of times. It indicates that if the consecutive health check results are "unhealthy" for a certain number of times, an origin server is considered "unhealthy". The default value is 2 times.
                     * @param _criticalThreshold Unhealthy state threshold, in the number of times. It indicates that if the consecutive health check results are "unhealthy" for a certain number of times, an origin server is considered "unhealthy". The default value is 2 times.
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
                     * 获取Probe path. This parameter is valid only when Type = HTTP or Type = HTTPS. It needs to include the complete host/path and should not contain a protocol, for example, www.example.com/test.

                     * @return Path Probe path. This parameter is valid only when Type = HTTP or Type = HTTPS. It needs to include the complete host/path and should not contain a protocol, for example, www.example.com/test.

                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Probe path. This parameter is valid only when Type = HTTP or Type = HTTPS. It needs to include the complete host/path and should not contain a protocol, for example, www.example.com/test.

                     * @param _path Probe path. This parameter is valid only when Type = HTTP or Type = HTTPS. It needs to include the complete host/path and should not contain a protocol, for example, www.example.com/test.

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
                     * 获取Request method. This parameter is valid only when Type = HTTP or Type = HTTPS. Valid values:
<li>GET.</li>
<li>HEAD.</li>
                     * @return Method Request method. This parameter is valid only when Type = HTTP or Type = HTTPS. Valid values:
<li>GET.</li>
<li>HEAD.</li>
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置Request method. This parameter is valid only when Type = HTTP or Type = HTTPS. Valid values:
<li>GET.</li>
<li>HEAD.</li>
                     * @param _method Request method. This parameter is valid only when Type = HTTP or Type = HTTPS. Valid values:
<li>GET.</li>
<li>HEAD.</li>
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
                     * 获取The status codes used to determine that the probe result is healthy when the probe node initiates a health check to an origin server. This parameter is valid only when Type = HTTP or Type = HTTPS.
                     * @return ExpectedCodes The status codes used to determine that the probe result is healthy when the probe node initiates a health check to an origin server. This parameter is valid only when Type = HTTP or Type = HTTPS.
                     * 
                     */
                    std::vector<std::string> GetExpectedCodes() const;

                    /**
                     * 设置The status codes used to determine that the probe result is healthy when the probe node initiates a health check to an origin server. This parameter is valid only when Type = HTTP or Type = HTTPS.
                     * @param _expectedCodes The status codes used to determine that the probe result is healthy when the probe node initiates a health check to an origin server. This parameter is valid only when Type = HTTP or Type = HTTPS.
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
                     * 获取The custom HTTP request header carried by a probe request, with a maximum value of 10. This parameter is valid only when Type = HTTP or Type = HTTPS.
                     * @return Headers The custom HTTP request header carried by a probe request, with a maximum value of 10. This parameter is valid only when Type = HTTP or Type = HTTPS.
                     * 
                     */
                    std::vector<CustomizedHeader> GetHeaders() const;

                    /**
                     * 设置The custom HTTP request header carried by a probe request, with a maximum value of 10. This parameter is valid only when Type = HTTP or Type = HTTPS.
                     * @param _headers The custom HTTP request header carried by a probe request, with a maximum value of 10. This parameter is valid only when Type = HTTP or Type = HTTPS.
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
                     * 获取Whether to follow 301/302 redirect. When enabled, 301/302 is considered a "healthy" status code, redirecting 3 times by default. This parameter is valid only when Type = HTTP or Type = HTTPS.
                     * @return FollowRedirect Whether to follow 301/302 redirect. When enabled, 301/302 is considered a "healthy" status code, redirecting 3 times by default. This parameter is valid only when Type = HTTP or Type = HTTPS.
                     * 
                     */
                    std::string GetFollowRedirect() const;

                    /**
                     * 设置Whether to follow 301/302 redirect. When enabled, 301/302 is considered a "healthy" status code, redirecting 3 times by default. This parameter is valid only when Type = HTTP or Type = HTTPS.
                     * @param _followRedirect Whether to follow 301/302 redirect. When enabled, 301/302 is considered a "healthy" status code, redirecting 3 times by default. This parameter is valid only when Type = HTTP or Type = HTTPS.
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
                     * 获取The content sent by a health check. Only ASCII visible characters are allowed, with up to 500 characters. This parameter is valid only when Type = UDP.
                     * @return SendContext The content sent by a health check. Only ASCII visible characters are allowed, with up to 500 characters. This parameter is valid only when Type = UDP.
                     * 
                     */
                    std::string GetSendContext() const;

                    /**
                     * 设置The content sent by a health check. Only ASCII visible characters are allowed, with up to 500 characters. This parameter is valid only when Type = UDP.
                     * @param _sendContext The content sent by a health check. Only ASCII visible characters are allowed, with up to 500 characters. This parameter is valid only when Type = UDP.
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
                     * 获取The expected return result from an origin server during health check. Only ASCII visible characters are allowed, with up to 500 characters. This parameter is valid only when Type = UDP.
                     * @return RecvContext The expected return result from an origin server during health check. Only ASCII visible characters are allowed, with up to 500 characters. This parameter is valid only when Type = UDP.
                     * 
                     */
                    std::string GetRecvContext() const;

                    /**
                     * 设置The expected return result from an origin server during health check. Only ASCII visible characters are allowed, with up to 500 characters. This parameter is valid only when Type = UDP.
                     * @param _recvContext The expected return result from an origin server during health check. Only ASCII visible characters are allowed, with up to 500 characters. This parameter is valid only when Type = UDP.
                     * 
                     */
                    void SetRecvContext(const std::string& _recvContext);

                    /**
                     * 判断参数 RecvContext 是否已赋值
                     * @return RecvContext 是否已赋值
                     * 
                     */
                    bool RecvContextHasBeenSet() const;

                private:

                    /**
                     * Health check policy. Valid values:
<li>HTTP.</li>
<li>HTTPS.</li>
<li>TCP.</li>
<li>UDP.</li>
<li>ICMP Ping.</li>
<li>NoCheck.</li>
Note: NoCheck means the health check policy is not enabled.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Check port, which is required when Type = HTTP, Type = HTTPS, Type = TCP, or Type = UDP.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Check frequency, in seconds. It indicates how often a health check task is initiated. Valid values: 30, 60, 180, 300, 600.
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Timeout for each health check, in seconds. If the health check time exceeds this value, the check result is determined as "unhealthy". The default value is 5s, and the value should be less than Interval.
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * Healthy state threshold, in the number of times. It indicates that if the consecutive health check results are "healthy" for a certain number of times, an origin server is considered "healthy". The default value is 3 times, with the minimum value of 1 time.
                     */
                    uint64_t m_healthThreshold;
                    bool m_healthThresholdHasBeenSet;

                    /**
                     * Unhealthy state threshold, in the number of times. It indicates that if the consecutive health check results are "unhealthy" for a certain number of times, an origin server is considered "unhealthy". The default value is 2 times.
                     */
                    uint64_t m_criticalThreshold;
                    bool m_criticalThresholdHasBeenSet;

                    /**
                     * Probe path. This parameter is valid only when Type = HTTP or Type = HTTPS. It needs to include the complete host/path and should not contain a protocol, for example, www.example.com/test.

                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Request method. This parameter is valid only when Type = HTTP or Type = HTTPS. Valid values:
<li>GET.</li>
<li>HEAD.</li>
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * The status codes used to determine that the probe result is healthy when the probe node initiates a health check to an origin server. This parameter is valid only when Type = HTTP or Type = HTTPS.
                     */
                    std::vector<std::string> m_expectedCodes;
                    bool m_expectedCodesHasBeenSet;

                    /**
                     * The custom HTTP request header carried by a probe request, with a maximum value of 10. This parameter is valid only when Type = HTTP or Type = HTTPS.
                     */
                    std::vector<CustomizedHeader> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * Whether to follow 301/302 redirect. When enabled, 301/302 is considered a "healthy" status code, redirecting 3 times by default. This parameter is valid only when Type = HTTP or Type = HTTPS.
                     */
                    std::string m_followRedirect;
                    bool m_followRedirectHasBeenSet;

                    /**
                     * The content sent by a health check. Only ASCII visible characters are allowed, with up to 500 characters. This parameter is valid only when Type = UDP.
                     */
                    std::string m_sendContext;
                    bool m_sendContextHasBeenSet;

                    /**
                     * The expected return result from an origin server during health check. Only ASCII visible characters are allowed, with up to 500 characters. This parameter is valid only when Type = UDP.
                     */
                    std::string m_recvContext;
                    bool m_recvContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_HEALTHCHECKER_H_
