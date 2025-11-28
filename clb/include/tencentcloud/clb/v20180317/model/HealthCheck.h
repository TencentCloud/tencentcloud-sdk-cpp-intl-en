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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_HEALTHCHECK_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_HEALTHCHECK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Health check information.
Note: Custom check parameters are currently supported only in certain beta test regions.
                */
                class HealthCheck : public AbstractModel
                {
                public:
                    HealthCheck();
                    ~HealthCheck() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable health check. 1: Enable; 0: Disable.

It is enabled by default.
                     * @return HealthSwitch Whether to enable health check. 1: Enable; 0: Disable.

It is enabled by default.
                     * 
                     */
                    int64_t GetHealthSwitch() const;

                    /**
                     * 设置Whether to enable health check. 1: Enable; 0: Disable.

It is enabled by default.
                     * @param _healthSwitch Whether to enable health check. 1: Enable; 0: Disable.

It is enabled by default.
                     * 
                     */
                    void SetHealthSwitch(const int64_t& _healthSwitch);

                    /**
                     * 判断参数 HealthSwitch 是否已赋值
                     * @return HealthSwitch 是否已赋值
                     * 
                     */
                    bool HealthSwitchHasBeenSet() const;

                    /**
                     * 获取Health check response timeout, in seconds. Value range: 2–60. Default value: 2. The response timeout should be less than the check interval.
                     * @return TimeOut Health check response timeout, in seconds. Value range: 2–60. Default value: 2. The response timeout should be less than the check interval.
                     * 
                     */
                    int64_t GetTimeOut() const;

                    /**
                     * 设置Health check response timeout, in seconds. Value range: 2–60. Default value: 2. The response timeout should be less than the check interval.
                     * @param _timeOut Health check response timeout, in seconds. Value range: 2–60. Default value: 2. The response timeout should be less than the check interval.
                     * 
                     */
                    void SetTimeOut(const int64_t& _timeOut);

                    /**
                     * 判断参数 TimeOut 是否已赋值
                     * @return TimeOut 是否已赋值
                     * 
                     */
                    bool TimeOutHasBeenSet() const;

                    /**
                     * 获取Health check interval, in seconds. Default value: 5. Value range: 2–300 for IPv4 CLB instances and 5–300 for IPv6 CLB instances.
Note: The value range is 5–300 for some IPv4 CLB instances of early versions.
                     * @return IntervalTime Health check interval, in seconds. Default value: 5. Value range: 2–300 for IPv4 CLB instances and 5–300 for IPv6 CLB instances.
Note: The value range is 5–300 for some IPv4 CLB instances of early versions.
                     * 
                     */
                    int64_t GetIntervalTime() const;

                    /**
                     * 设置Health check interval, in seconds. Default value: 5. Value range: 2–300 for IPv4 CLB instances and 5–300 for IPv6 CLB instances.
Note: The value range is 5–300 for some IPv4 CLB instances of early versions.
                     * @param _intervalTime Health check interval, in seconds. Default value: 5. Value range: 2–300 for IPv4 CLB instances and 5–300 for IPv6 CLB instances.
Note: The value range is 5–300 for some IPv4 CLB instances of early versions.
                     * 
                     */
                    void SetIntervalTime(const int64_t& _intervalTime);

                    /**
                     * 判断参数 IntervalTime 是否已赋值
                     * @return IntervalTime 是否已赋值
                     * 
                     */
                    bool IntervalTimeHasBeenSet() const;

                    /**
                     * 获取Healthy threshold. Default: 3, indicating that if a forwarding is found healthy three consecutive times, it is considered to be normal. Value range: 2-10. Unit: times.
                     * @return HealthNum Healthy threshold. Default: 3, indicating that if a forwarding is found healthy three consecutive times, it is considered to be normal. Value range: 2-10. Unit: times.
                     * 
                     */
                    int64_t GetHealthNum() const;

                    /**
                     * 设置Healthy threshold. Default: 3, indicating that if a forwarding is found healthy three consecutive times, it is considered to be normal. Value range: 2-10. Unit: times.
                     * @param _healthNum Healthy threshold. Default: 3, indicating that if a forwarding is found healthy three consecutive times, it is considered to be normal. Value range: 2-10. Unit: times.
                     * 
                     */
                    void SetHealthNum(const int64_t& _healthNum);

                    /**
                     * 判断参数 HealthNum 是否已赋值
                     * @return HealthNum 是否已赋值
                     * 
                     */
                    bool HealthNumHasBeenSet() const;

                    /**
                     * 获取Unhealthy threshold. Default: 3, indicating that if a forwarding is found unhealthy three consecutive times, it is considered to be exceptional. Value range: 2-10. Unit: times.
                     * @return UnHealthNum Unhealthy threshold. Default: 3, indicating that if a forwarding is found unhealthy three consecutive times, it is considered to be exceptional. Value range: 2-10. Unit: times.
                     * 
                     */
                    int64_t GetUnHealthNum() const;

                    /**
                     * 设置Unhealthy threshold. Default: 3, indicating that if a forwarding is found unhealthy three consecutive times, it is considered to be exceptional. Value range: 2-10. Unit: times.
                     * @param _unHealthNum Unhealthy threshold. Default: 3, indicating that if a forwarding is found unhealthy three consecutive times, it is considered to be exceptional. Value range: 2-10. Unit: times.
                     * 
                     */
                    void SetUnHealthNum(const int64_t& _unHealthNum);

                    /**
                     * 判断参数 UnHealthNum 是否已赋值
                     * @return UnHealthNum 是否已赋值
                     * 
                     */
                    bool UnHealthNumHasBeenSet() const;

                    /**
                     * 获取Health check status code. (This parameter applies only to HTTP/HTTPS forwarding rules and the HTTP health check method of TCP listeners.) Value range: 1–31. Default value: 31.
1: return 1xx after the check (healthy); 2: return 2xx after the check (healthy); 4: return 3xx after the check (healthy); 8: return 4xx after the check (healthy); 16: return 5xx after the check (healthy). If you expect that multiple codes represent a healthy real server, set the value to the sum of the corresponding values.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HttpCode Health check status code. (This parameter applies only to HTTP/HTTPS forwarding rules and the HTTP health check method of TCP listeners.) Value range: 1–31. Default value: 31.
1: return 1xx after the check (healthy); 2: return 2xx after the check (healthy); 4: return 3xx after the check (healthy); 8: return 4xx after the check (healthy); 16: return 5xx after the check (healthy). If you expect that multiple codes represent a healthy real server, set the value to the sum of the corresponding values.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetHttpCode() const;

                    /**
                     * 设置Health check status code. (This parameter applies only to HTTP/HTTPS forwarding rules and the HTTP health check method of TCP listeners.) Value range: 1–31. Default value: 31.
1: return 1xx after the check (healthy); 2: return 2xx after the check (healthy); 4: return 3xx after the check (healthy); 8: return 4xx after the check (healthy); 16: return 5xx after the check (healthy). If you expect that multiple codes represent a healthy real server, set the value to the sum of the corresponding values.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _httpCode Health check status code. (This parameter applies only to HTTP/HTTPS forwarding rules and the HTTP health check method of TCP listeners.) Value range: 1–31. Default value: 31.
1: return 1xx after the check (healthy); 2: return 2xx after the check (healthy); 4: return 3xx after the check (healthy); 8: return 4xx after the check (healthy); 16: return 5xx after the check (healthy). If you expect that multiple codes represent a healthy real server, set the value to the sum of the corresponding values.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHttpCode(const int64_t& _httpCode);

                    /**
                     * 判断参数 HttpCode 是否已赋值
                     * @return HttpCode 是否已赋值
                     * 
                     */
                    bool HttpCodeHasBeenSet() const;

                    /**
                     * 获取Health check path (applicable only to HTTP/HTTPS forwarding rules and HTTP health checks of TCP listeners).

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HttpCheckPath Health check path (applicable only to HTTP/HTTPS forwarding rules and HTTP health checks of TCP listeners).

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHttpCheckPath() const;

                    /**
                     * 设置Health check path (applicable only to HTTP/HTTPS forwarding rules and HTTP health checks of TCP listeners).

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _httpCheckPath Health check path (applicable only to HTTP/HTTPS forwarding rules and HTTP health checks of TCP listeners).

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHttpCheckPath(const std::string& _httpCheckPath);

                    /**
                     * 判断参数 HttpCheckPath 是否已赋值
                     * @return HttpCheckPath 是否已赋值
                     * 
                     */
                    bool HttpCheckPathHasBeenSet() const;

                    /**
                     * 获取Health check domain name, which will be contained in a Host header field of the HTTP protocol. (This parameter applies only to HTTP/HTTPS listeners and the HTTP health check method of TCP listeners. For TCP listeners, this parameter is required if the HTTP health check method is used.)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HttpCheckDomain Health check domain name, which will be contained in a Host header field of the HTTP protocol. (This parameter applies only to HTTP/HTTPS listeners and the HTTP health check method of TCP listeners. For TCP listeners, this parameter is required if the HTTP health check method is used.)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHttpCheckDomain() const;

                    /**
                     * 设置Health check domain name, which will be contained in a Host header field of the HTTP protocol. (This parameter applies only to HTTP/HTTPS listeners and the HTTP health check method of TCP listeners. For TCP listeners, this parameter is required if the HTTP health check method is used.)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _httpCheckDomain Health check domain name, which will be contained in a Host header field of the HTTP protocol. (This parameter applies only to HTTP/HTTPS listeners and the HTTP health check method of TCP listeners. For TCP listeners, this parameter is required if the HTTP health check method is used.)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHttpCheckDomain(const std::string& _httpCheckDomain);

                    /**
                     * 判断参数 HttpCheckDomain 是否已赋值
                     * @return HttpCheckDomain 是否已赋值
                     * 
                     */
                    bool HttpCheckDomainHasBeenSet() const;

                    /**
                     * 获取Health check method (applicable only to HTTP/HTTPS forwarding rules and HTTP health checks of TCP listeners). Default: HEAD. Valid values: HEAD and GET.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HttpCheckMethod Health check method (applicable only to HTTP/HTTPS forwarding rules and HTTP health checks of TCP listeners). Default: HEAD. Valid values: HEAD and GET.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHttpCheckMethod() const;

                    /**
                     * 设置Health check method (applicable only to HTTP/HTTPS forwarding rules and HTTP health checks of TCP listeners). Default: HEAD. Valid values: HEAD and GET.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _httpCheckMethod Health check method (applicable only to HTTP/HTTPS forwarding rules and HTTP health checks of TCP listeners). Default: HEAD. Valid values: HEAD and GET.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHttpCheckMethod(const std::string& _httpCheckMethod);

                    /**
                     * 判断参数 HttpCheckMethod 是否已赋值
                     * @return HttpCheckMethod 是否已赋值
                     * 
                     */
                    bool HttpCheckMethodHasBeenSet() const;

                    /**
                     * 获取Custom check parameters. health check port, defaults to the port of the backend service unless you want to specify a specific port, otherwise leave it blank. pass the parameter value -1 to restore default settings. (applicable only to TCP/UDP listener).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CheckPort Custom check parameters. health check port, defaults to the port of the backend service unless you want to specify a specific port, otherwise leave it blank. pass the parameter value -1 to restore default settings. (applicable only to TCP/UDP listener).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCheckPort() const;

                    /**
                     * 设置Custom check parameters. health check port, defaults to the port of the backend service unless you want to specify a specific port, otherwise leave it blank. pass the parameter value -1 to restore default settings. (applicable only to TCP/UDP listener).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _checkPort Custom check parameters. health check port, defaults to the port of the backend service unless you want to specify a specific port, otherwise leave it blank. pass the parameter value -1 to restore default settings. (applicable only to TCP/UDP listener).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCheckPort(const int64_t& _checkPort);

                    /**
                     * 判断参数 CheckPort 是否已赋值
                     * @return CheckPort 是否已赋值
                     * 
                     */
                    bool CheckPortHasBeenSet() const;

                    /**
                     * 获取A custom check parameter, which is required if the value of CheckType (health check protocol) is CUSTOM. This parameter represents the input format of the health check. Valid values: HEX and TEXT. If the value is HEX, the characters of SendContext and RecvContext can only be selected from 0123456789ABCDEF and the length must be an even number. (Applicable only to TCP/UDP listeners.)

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ContextType A custom check parameter, which is required if the value of CheckType (health check protocol) is CUSTOM. This parameter represents the input format of the health check. Valid values: HEX and TEXT. If the value is HEX, the characters of SendContext and RecvContext can only be selected from 0123456789ABCDEF and the length must be an even number. (Applicable only to TCP/UDP listeners.)

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetContextType() const;

                    /**
                     * 设置A custom check parameter, which is required if the value of CheckType (health check protocol) is CUSTOM. This parameter represents the input format of the health check. Valid values: HEX and TEXT. If the value is HEX, the characters of SendContext and RecvContext can only be selected from 0123456789ABCDEF and the length must be an even number. (Applicable only to TCP/UDP listeners.)

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _contextType A custom check parameter, which is required if the value of CheckType (health check protocol) is CUSTOM. This parameter represents the input format of the health check. Valid values: HEX and TEXT. If the value is HEX, the characters of SendContext and RecvContext can only be selected from 0123456789ABCDEF and the length must be an even number. (Applicable only to TCP/UDP listeners.)

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetContextType(const std::string& _contextType);

                    /**
                     * 判断参数 ContextType 是否已赋值
                     * @return ContextType 是否已赋值
                     * 
                     */
                    bool ContextTypeHasBeenSet() const;

                    /**
                     * 获取A custom check parameter, which is required if the value of CheckType (health check protocol) is CUSTOM. This parameter represents the content of the request sent by the health check. Only ASCII visible characters are allowed, and the maximum length is 500. (Applicable only to TCP/UDP listeners.)

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SendContext A custom check parameter, which is required if the value of CheckType (health check protocol) is CUSTOM. This parameter represents the content of the request sent by the health check. Only ASCII visible characters are allowed, and the maximum length is 500. (Applicable only to TCP/UDP listeners.)

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSendContext() const;

                    /**
                     * 设置A custom check parameter, which is required if the value of CheckType (health check protocol) is CUSTOM. This parameter represents the content of the request sent by the health check. Only ASCII visible characters are allowed, and the maximum length is 500. (Applicable only to TCP/UDP listeners.)

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sendContext A custom check parameter, which is required if the value of CheckType (health check protocol) is CUSTOM. This parameter represents the content of the request sent by the health check. Only ASCII visible characters are allowed, and the maximum length is 500. (Applicable only to TCP/UDP listeners.)

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取A custom check parameter, which is required if the value of CheckType (health check protocol) is CUSTOM. This parameter represents the result returned by the health check. Only ASCII visible characters are allowed, and the maximum length is 500. (Applicable only to TCP/UDP listeners.)

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RecvContext A custom check parameter, which is required if the value of CheckType (health check protocol) is CUSTOM. This parameter represents the result returned by the health check. Only ASCII visible characters are allowed, and the maximum length is 500. (Applicable only to TCP/UDP listeners.)

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRecvContext() const;

                    /**
                     * 设置A custom check parameter, which is required if the value of CheckType (health check protocol) is CUSTOM. This parameter represents the result returned by the health check. Only ASCII visible characters are allowed, and the maximum length is 500. (Applicable only to TCP/UDP listeners.)

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _recvContext A custom check parameter, which is required if the value of CheckType (health check protocol) is CUSTOM. This parameter represents the result returned by the health check. Only ASCII visible characters are allowed, and the maximum length is 500. (Applicable only to TCP/UDP listeners.)

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Protocol used for health checks. Valid values: TCP (for TCP listeners, TCP_SSL listeners, and QUIC listeners), HTTP (for TCP listeners, TCP_SSL listeners, QUIC listeners, HTTP rules, and HTTPS rules), HTTPS (for HTTPS rules), GRPC (for HTTP rules and HTTPS rules), PING (for UDP listeners), and CUSTOM (for UDP listeners and TCP listeners). The default value is HTTP for HTTP listeners, TCP for TCP, TCP_SSL, and QUIC listeners, and PING for UDP listeners. For HTTPS listeners, the protocol is the same as the backend forwarding protocol.
                     * @return CheckType Protocol used for health checks. Valid values: TCP (for TCP listeners, TCP_SSL listeners, and QUIC listeners), HTTP (for TCP listeners, TCP_SSL listeners, QUIC listeners, HTTP rules, and HTTPS rules), HTTPS (for HTTPS rules), GRPC (for HTTP rules and HTTPS rules), PING (for UDP listeners), and CUSTOM (for UDP listeners and TCP listeners). The default value is HTTP for HTTP listeners, TCP for TCP, TCP_SSL, and QUIC listeners, and PING for UDP listeners. For HTTPS listeners, the protocol is the same as the backend forwarding protocol.
                     * 
                     */
                    std::string GetCheckType() const;

                    /**
                     * 设置Protocol used for health checks. Valid values: TCP (for TCP listeners, TCP_SSL listeners, and QUIC listeners), HTTP (for TCP listeners, TCP_SSL listeners, QUIC listeners, HTTP rules, and HTTPS rules), HTTPS (for HTTPS rules), GRPC (for HTTP rules and HTTPS rules), PING (for UDP listeners), and CUSTOM (for UDP listeners and TCP listeners). The default value is HTTP for HTTP listeners, TCP for TCP, TCP_SSL, and QUIC listeners, and PING for UDP listeners. For HTTPS listeners, the protocol is the same as the backend forwarding protocol.
                     * @param _checkType Protocol used for health checks. Valid values: TCP (for TCP listeners, TCP_SSL listeners, and QUIC listeners), HTTP (for TCP listeners, TCP_SSL listeners, QUIC listeners, HTTP rules, and HTTPS rules), HTTPS (for HTTPS rules), GRPC (for HTTP rules and HTTPS rules), PING (for UDP listeners), and CUSTOM (for UDP listeners and TCP listeners). The default value is HTTP for HTTP listeners, TCP for TCP, TCP_SSL, and QUIC listeners, and PING for UDP listeners. For HTTPS listeners, the protocol is the same as the backend forwarding protocol.
                     * 
                     */
                    void SetCheckType(const std::string& _checkType);

                    /**
                     * 判断参数 CheckType 是否已赋值
                     * @return CheckType 是否已赋值
                     * 
                     */
                    bool CheckTypeHasBeenSet() const;

                    /**
                     * 获取HTTP version. This field indicates the HTTP version of real servers and is required if the value of CheckType is HTTP. Valid values: HTTP/1.0 and HTTP/1.1. (This field applies only to TCP listeners.)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HttpVersion HTTP version. This field indicates the HTTP version of real servers and is required if the value of CheckType is HTTP. Valid values: HTTP/1.0 and HTTP/1.1. (This field applies only to TCP listeners.)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHttpVersion() const;

                    /**
                     * 设置HTTP version. This field indicates the HTTP version of real servers and is required if the value of CheckType is HTTP. Valid values: HTTP/1.0 and HTTP/1.1. (This field applies only to TCP listeners.)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _httpVersion HTTP version. This field indicates the HTTP version of real servers and is required if the value of CheckType is HTTP. Valid values: HTTP/1.0 and HTTP/1.1. (This field applies only to TCP listeners.)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHttpVersion(const std::string& _httpVersion);

                    /**
                     * 判断参数 HttpVersion 是否已赋值
                     * @return HttpVersion 是否已赋值
                     * 
                     */
                    bool HttpVersionHasBeenSet() const;

                    /**
                     * 获取Source IP address type for health checks. 0: use the LB VIP as the source IP address; 1: use an IP address in the 100.64 range as the source IP address.
                     * @return SourceIpType Source IP address type for health checks. 0: use the LB VIP as the source IP address; 1: use an IP address in the 100.64 range as the source IP address.
                     * 
                     */
                    int64_t GetSourceIpType() const;

                    /**
                     * 设置Source IP address type for health checks. 0: use the LB VIP as the source IP address; 1: use an IP address in the 100.64 range as the source IP address.
                     * @param _sourceIpType Source IP address type for health checks. 0: use the LB VIP as the source IP address; 1: use an IP address in the 100.64 range as the source IP address.
                     * 
                     */
                    void SetSourceIpType(const int64_t& _sourceIpType);

                    /**
                     * 判断参数 SourceIpType 是否已赋值
                     * @return SourceIpType 是否已赋值
                     * 
                     */
                    bool SourceIpTypeHasBeenSet() const;

                    /**
                     * 获取Health check status code when the protocol is GRPC. (This parameter applies only to rules with the backend forwarding protocol of GRPC.) Default value: 12. You can enter a single numerical value, multiple numerical values, or a range. For example, 20, 20,25, or 0-99.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExtendedCode Health check status code when the protocol is GRPC. (This parameter applies only to rules with the backend forwarding protocol of GRPC.) Default value: 12. You can enter a single numerical value, multiple numerical values, or a range. For example, 20, 20,25, or 0-99.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExtendedCode() const;

                    /**
                     * 设置Health check status code when the protocol is GRPC. (This parameter applies only to rules with the backend forwarding protocol of GRPC.) Default value: 12. You can enter a single numerical value, multiple numerical values, or a range. For example, 20, 20,25, or 0-99.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _extendedCode Health check status code when the protocol is GRPC. (This parameter applies only to rules with the backend forwarding protocol of GRPC.) Default value: 12. You can enter a single numerical value, multiple numerical values, or a range. For example, 20, 20,25, or 0-99.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExtendedCode(const std::string& _extendedCode);

                    /**
                     * 判断参数 ExtendedCode 是否已赋值
                     * @return ExtendedCode 是否已赋值
                     * 
                     */
                    bool ExtendedCodeHasBeenSet() const;

                private:

                    /**
                     * Whether to enable health check. 1: Enable; 0: Disable.

It is enabled by default.
                     */
                    int64_t m_healthSwitch;
                    bool m_healthSwitchHasBeenSet;

                    /**
                     * Health check response timeout, in seconds. Value range: 2–60. Default value: 2. The response timeout should be less than the check interval.
                     */
                    int64_t m_timeOut;
                    bool m_timeOutHasBeenSet;

                    /**
                     * Health check interval, in seconds. Default value: 5. Value range: 2–300 for IPv4 CLB instances and 5–300 for IPv6 CLB instances.
Note: The value range is 5–300 for some IPv4 CLB instances of early versions.
                     */
                    int64_t m_intervalTime;
                    bool m_intervalTimeHasBeenSet;

                    /**
                     * Healthy threshold. Default: 3, indicating that if a forwarding is found healthy three consecutive times, it is considered to be normal. Value range: 2-10. Unit: times.
                     */
                    int64_t m_healthNum;
                    bool m_healthNumHasBeenSet;

                    /**
                     * Unhealthy threshold. Default: 3, indicating that if a forwarding is found unhealthy three consecutive times, it is considered to be exceptional. Value range: 2-10. Unit: times.
                     */
                    int64_t m_unHealthNum;
                    bool m_unHealthNumHasBeenSet;

                    /**
                     * Health check status code. (This parameter applies only to HTTP/HTTPS forwarding rules and the HTTP health check method of TCP listeners.) Value range: 1–31. Default value: 31.
1: return 1xx after the check (healthy); 2: return 2xx after the check (healthy); 4: return 3xx after the check (healthy); 8: return 4xx after the check (healthy); 16: return 5xx after the check (healthy). If you expect that multiple codes represent a healthy real server, set the value to the sum of the corresponding values.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_httpCode;
                    bool m_httpCodeHasBeenSet;

                    /**
                     * Health check path (applicable only to HTTP/HTTPS forwarding rules and HTTP health checks of TCP listeners).

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_httpCheckPath;
                    bool m_httpCheckPathHasBeenSet;

                    /**
                     * Health check domain name, which will be contained in a Host header field of the HTTP protocol. (This parameter applies only to HTTP/HTTPS listeners and the HTTP health check method of TCP listeners. For TCP listeners, this parameter is required if the HTTP health check method is used.)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_httpCheckDomain;
                    bool m_httpCheckDomainHasBeenSet;

                    /**
                     * Health check method (applicable only to HTTP/HTTPS forwarding rules and HTTP health checks of TCP listeners). Default: HEAD. Valid values: HEAD and GET.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_httpCheckMethod;
                    bool m_httpCheckMethodHasBeenSet;

                    /**
                     * Custom check parameters. health check port, defaults to the port of the backend service unless you want to specify a specific port, otherwise leave it blank. pass the parameter value -1 to restore default settings. (applicable only to TCP/UDP listener).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_checkPort;
                    bool m_checkPortHasBeenSet;

                    /**
                     * A custom check parameter, which is required if the value of CheckType (health check protocol) is CUSTOM. This parameter represents the input format of the health check. Valid values: HEX and TEXT. If the value is HEX, the characters of SendContext and RecvContext can only be selected from 0123456789ABCDEF and the length must be an even number. (Applicable only to TCP/UDP listeners.)

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_contextType;
                    bool m_contextTypeHasBeenSet;

                    /**
                     * A custom check parameter, which is required if the value of CheckType (health check protocol) is CUSTOM. This parameter represents the content of the request sent by the health check. Only ASCII visible characters are allowed, and the maximum length is 500. (Applicable only to TCP/UDP listeners.)

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sendContext;
                    bool m_sendContextHasBeenSet;

                    /**
                     * A custom check parameter, which is required if the value of CheckType (health check protocol) is CUSTOM. This parameter represents the result returned by the health check. Only ASCII visible characters are allowed, and the maximum length is 500. (Applicable only to TCP/UDP listeners.)

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_recvContext;
                    bool m_recvContextHasBeenSet;

                    /**
                     * Protocol used for health checks. Valid values: TCP (for TCP listeners, TCP_SSL listeners, and QUIC listeners), HTTP (for TCP listeners, TCP_SSL listeners, QUIC listeners, HTTP rules, and HTTPS rules), HTTPS (for HTTPS rules), GRPC (for HTTP rules and HTTPS rules), PING (for UDP listeners), and CUSTOM (for UDP listeners and TCP listeners). The default value is HTTP for HTTP listeners, TCP for TCP, TCP_SSL, and QUIC listeners, and PING for UDP listeners. For HTTPS listeners, the protocol is the same as the backend forwarding protocol.
                     */
                    std::string m_checkType;
                    bool m_checkTypeHasBeenSet;

                    /**
                     * HTTP version. This field indicates the HTTP version of real servers and is required if the value of CheckType is HTTP. Valid values: HTTP/1.0 and HTTP/1.1. (This field applies only to TCP listeners.)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_httpVersion;
                    bool m_httpVersionHasBeenSet;

                    /**
                     * Source IP address type for health checks. 0: use the LB VIP as the source IP address; 1: use an IP address in the 100.64 range as the source IP address.
                     */
                    int64_t m_sourceIpType;
                    bool m_sourceIpTypeHasBeenSet;

                    /**
                     * Health check status code when the protocol is GRPC. (This parameter applies only to rules with the backend forwarding protocol of GRPC.) Default value: 12. You can enter a single numerical value, multiple numerical values, or a range. For example, 20, 20,25, or 0-99.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_extendedCode;
                    bool m_extendedCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_HEALTHCHECK_H_
