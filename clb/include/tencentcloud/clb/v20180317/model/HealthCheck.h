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
                     * 获取Whether to enable health check. 1: enable; 0: disable.
                     * @return HealthSwitch Whether to enable health check. 1: enable; 0: disable.
                     */
                    int64_t GetHealthSwitch() const;

                    /**
                     * 设置Whether to enable health check. 1: enable; 0: disable.
                     * @param HealthSwitch Whether to enable health check. 1: enable; 0: disable.
                     */
                    void SetHealthSwitch(const int64_t& _healthSwitch);

                    /**
                     * 判断参数 HealthSwitch 是否已赋值
                     * @return HealthSwitch 是否已赋值
                     */
                    bool HealthSwitchHasBeenSet() const;

                    /**
                     * 获取Health check response timeout period in seconds (applicable only to layer-4 listeners). Value range: 2-60. Default value: 2. This parameter should be less than the check interval.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TimeOut Health check response timeout period in seconds (applicable only to layer-4 listeners). Value range: 2-60. Default value: 2. This parameter should be less than the check interval.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetTimeOut() const;

                    /**
                     * 设置Health check response timeout period in seconds (applicable only to layer-4 listeners). Value range: 2-60. Default value: 2. This parameter should be less than the check interval.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TimeOut Health check response timeout period in seconds (applicable only to layer-4 listeners). Value range: 2-60. Default value: 2. This parameter should be less than the check interval.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTimeOut(const int64_t& _timeOut);

                    /**
                     * 判断参数 TimeOut 是否已赋值
                     * @return TimeOut 是否已赋值
                     */
                    bool TimeOutHasBeenSet() const;

                    /**
                     * 获取Health check interval in seconds. Value range: 5-300. Default value: 5.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IntervalTime Health check interval in seconds. Value range: 5-300. Default value: 5.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetIntervalTime() const;

                    /**
                     * 设置Health check interval in seconds. Value range: 5-300. Default value: 5.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param IntervalTime Health check interval in seconds. Value range: 5-300. Default value: 5.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIntervalTime(const int64_t& _intervalTime);

                    /**
                     * 判断参数 IntervalTime 是否已赋值
                     * @return IntervalTime 是否已赋值
                     */
                    bool IntervalTimeHasBeenSet() const;

                    /**
                     * 获取Health threshold. Default value: 3, indicating that if a forward is found healthy three consecutive times, it is considered to be normal. Value range: 2-10
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HealthNum Health threshold. Default value: 3, indicating that if a forward is found healthy three consecutive times, it is considered to be normal. Value range: 2-10
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetHealthNum() const;

                    /**
                     * 设置Health threshold. Default value: 3, indicating that if a forward is found healthy three consecutive times, it is considered to be normal. Value range: 2-10
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param HealthNum Health threshold. Default value: 3, indicating that if a forward is found healthy three consecutive times, it is considered to be normal. Value range: 2-10
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHealthNum(const int64_t& _healthNum);

                    /**
                     * 判断参数 HealthNum 是否已赋值
                     * @return HealthNum 是否已赋值
                     */
                    bool HealthNumHasBeenSet() const;

                    /**
                     * 获取Unhealthy threshold. Default value: 3, indicating that if a forward is found unhealthy three consecutive times, it is considered to be exceptional. Value range: 2-10
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UnHealthNum Unhealthy threshold. Default value: 3, indicating that if a forward is found unhealthy three consecutive times, it is considered to be exceptional. Value range: 2-10
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetUnHealthNum() const;

                    /**
                     * 设置Unhealthy threshold. Default value: 3, indicating that if a forward is found unhealthy three consecutive times, it is considered to be exceptional. Value range: 2-10
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param UnHealthNum Unhealthy threshold. Default value: 3, indicating that if a forward is found unhealthy three consecutive times, it is considered to be exceptional. Value range: 2-10
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUnHealthNum(const int64_t& _unHealthNum);

                    /**
                     * 判断参数 UnHealthNum 是否已赋值
                     * @return UnHealthNum 是否已赋值
                     */
                    bool UnHealthNumHasBeenSet() const;

                    /**
                     * 获取Health check status code (applicable only to HTTP/HTTPS forwarding rules and HTTP health checks of TCP listeners). Value range: 1-31. Default value: 31.
1 means that the return value of 1xx after detection means healthy, 2 for returning 2xx for healthy, 4 for returning 3xx for healthy, 8 for returning 4xx for healthy, and 16 for returning 5xx for healthy. If you want multiple return codes to represent healthy, sum up the corresponding values. Note: The HTTP health check mode of TCP listeners only supports specifying one kind of health check status code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HttpCode Health check status code (applicable only to HTTP/HTTPS forwarding rules and HTTP health checks of TCP listeners). Value range: 1-31. Default value: 31.
1 means that the return value of 1xx after detection means healthy, 2 for returning 2xx for healthy, 4 for returning 3xx for healthy, 8 for returning 4xx for healthy, and 16 for returning 5xx for healthy. If you want multiple return codes to represent healthy, sum up the corresponding values. Note: The HTTP health check mode of TCP listeners only supports specifying one kind of health check status code.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetHttpCode() const;

                    /**
                     * 设置Health check status code (applicable only to HTTP/HTTPS forwarding rules and HTTP health checks of TCP listeners). Value range: 1-31. Default value: 31.
1 means that the return value of 1xx after detection means healthy, 2 for returning 2xx for healthy, 4 for returning 3xx for healthy, 8 for returning 4xx for healthy, and 16 for returning 5xx for healthy. If you want multiple return codes to represent healthy, sum up the corresponding values. Note: The HTTP health check mode of TCP listeners only supports specifying one kind of health check status code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param HttpCode Health check status code (applicable only to HTTP/HTTPS forwarding rules and HTTP health checks of TCP listeners). Value range: 1-31. Default value: 31.
1 means that the return value of 1xx after detection means healthy, 2 for returning 2xx for healthy, 4 for returning 3xx for healthy, 8 for returning 4xx for healthy, and 16 for returning 5xx for healthy. If you want multiple return codes to represent healthy, sum up the corresponding values. Note: The HTTP health check mode of TCP listeners only supports specifying one kind of health check status code.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHttpCode(const int64_t& _httpCode);

                    /**
                     * 判断参数 HttpCode 是否已赋值
                     * @return HttpCode 是否已赋值
                     */
                    bool HttpCodeHasBeenSet() const;

                    /**
                     * 获取Health check path (applicable only to HTTP/HTTPS forwarding rules and HTTP health checks of TCP listeners).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HttpCheckPath Health check path (applicable only to HTTP/HTTPS forwarding rules and HTTP health checks of TCP listeners).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetHttpCheckPath() const;

                    /**
                     * 设置Health check path (applicable only to HTTP/HTTPS forwarding rules and HTTP health checks of TCP listeners).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param HttpCheckPath Health check path (applicable only to HTTP/HTTPS forwarding rules and HTTP health checks of TCP listeners).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHttpCheckPath(const std::string& _httpCheckPath);

                    /**
                     * 判断参数 HttpCheckPath 是否已赋值
                     * @return HttpCheckPath 是否已赋值
                     */
                    bool HttpCheckPathHasBeenSet() const;

                    /**
                     * 获取Health check domain name (applicable only to HTTP/HTTPS forwarding rules and HTTP health checks of TCP listeners).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HttpCheckDomain Health check domain name (applicable only to HTTP/HTTPS forwarding rules and HTTP health checks of TCP listeners).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetHttpCheckDomain() const;

                    /**
                     * 设置Health check domain name (applicable only to HTTP/HTTPS forwarding rules and HTTP health checks of TCP listeners).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param HttpCheckDomain Health check domain name (applicable only to HTTP/HTTPS forwarding rules and HTTP health checks of TCP listeners).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHttpCheckDomain(const std::string& _httpCheckDomain);

                    /**
                     * 判断参数 HttpCheckDomain 是否已赋值
                     * @return HttpCheckDomain 是否已赋值
                     */
                    bool HttpCheckDomainHasBeenSet() const;

                    /**
                     * 获取Health check method (applicable only to HTTP/HTTPS forwarding rules and HTTP health checks of TCP listeners). Value range: HEAD, GET. Default value: HEAD.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HttpCheckMethod Health check method (applicable only to HTTP/HTTPS forwarding rules and HTTP health checks of TCP listeners). Value range: HEAD, GET. Default value: HEAD.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetHttpCheckMethod() const;

                    /**
                     * 设置Health check method (applicable only to HTTP/HTTPS forwarding rules and HTTP health checks of TCP listeners). Value range: HEAD, GET. Default value: HEAD.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param HttpCheckMethod Health check method (applicable only to HTTP/HTTPS forwarding rules and HTTP health checks of TCP listeners). Value range: HEAD, GET. Default value: HEAD.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHttpCheckMethod(const std::string& _httpCheckMethod);

                    /**
                     * 判断参数 HttpCheckMethod 是否已赋值
                     * @return HttpCheckMethod 是否已赋值
                     */
                    bool HttpCheckMethodHasBeenSet() const;

                    /**
                     * 获取Health check port (a custom check parameter), which is the port of the real server by default. Unless you want to specify a port, it is recommended to leave it empty. (Applicable only to TCP/UDP listeners.)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CheckPort Health check port (a custom check parameter), which is the port of the real server by default. Unless you want to specify a port, it is recommended to leave it empty. (Applicable only to TCP/UDP listeners.)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetCheckPort() const;

                    /**
                     * 设置Health check port (a custom check parameter), which is the port of the real server by default. Unless you want to specify a port, it is recommended to leave it empty. (Applicable only to TCP/UDP listeners.)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CheckPort Health check port (a custom check parameter), which is the port of the real server by default. Unless you want to specify a port, it is recommended to leave it empty. (Applicable only to TCP/UDP listeners.)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCheckPort(const int64_t& _checkPort);

                    /**
                     * 判断参数 CheckPort 是否已赋值
                     * @return CheckPort 是否已赋值
                     */
                    bool CheckPortHasBeenSet() const;

                    /**
                     * 获取Health check protocol (a custom check parameter), which is required if the value of CheckType is CUSTOM. This parameter represents the input format of the health check. Value range: HEX, TEXT. If the value is HEX, the characters of SendContext and RecvContext can only be selected from 0123456789ABCDEF and the length must be an even number. (Applicable only to TCP/UDP listeners.)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ContextType Health check protocol (a custom check parameter), which is required if the value of CheckType is CUSTOM. This parameter represents the input format of the health check. Value range: HEX, TEXT. If the value is HEX, the characters of SendContext and RecvContext can only be selected from 0123456789ABCDEF and the length must be an even number. (Applicable only to TCP/UDP listeners.)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetContextType() const;

                    /**
                     * 设置Health check protocol (a custom check parameter), which is required if the value of CheckType is CUSTOM. This parameter represents the input format of the health check. Value range: HEX, TEXT. If the value is HEX, the characters of SendContext and RecvContext can only be selected from 0123456789ABCDEF and the length must be an even number. (Applicable only to TCP/UDP listeners.)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ContextType Health check protocol (a custom check parameter), which is required if the value of CheckType is CUSTOM. This parameter represents the input format of the health check. Value range: HEX, TEXT. If the value is HEX, the characters of SendContext and RecvContext can only be selected from 0123456789ABCDEF and the length must be an even number. (Applicable only to TCP/UDP listeners.)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetContextType(const std::string& _contextType);

                    /**
                     * 判断参数 ContextType 是否已赋值
                     * @return ContextType 是否已赋值
                     */
                    bool ContextTypeHasBeenSet() const;

                    /**
                     * 获取Health check protocol (a custom check parameter), which is required if the value of CheckType is CUSTOM. This parameter represents the content of the request sent by the health check. Only ASCII visible characters are allowed, and the maximum length is 500. (Applicable only to TCP/UDP listeners.)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SendContext Health check protocol (a custom check parameter), which is required if the value of CheckType is CUSTOM. This parameter represents the content of the request sent by the health check. Only ASCII visible characters are allowed, and the maximum length is 500. (Applicable only to TCP/UDP listeners.)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSendContext() const;

                    /**
                     * 设置Health check protocol (a custom check parameter), which is required if the value of CheckType is CUSTOM. This parameter represents the content of the request sent by the health check. Only ASCII visible characters are allowed, and the maximum length is 500. (Applicable only to TCP/UDP listeners.)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SendContext Health check protocol (a custom check parameter), which is required if the value of CheckType is CUSTOM. This parameter represents the content of the request sent by the health check. Only ASCII visible characters are allowed, and the maximum length is 500. (Applicable only to TCP/UDP listeners.)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSendContext(const std::string& _sendContext);

                    /**
                     * 判断参数 SendContext 是否已赋值
                     * @return SendContext 是否已赋值
                     */
                    bool SendContextHasBeenSet() const;

                    /**
                     * 获取Health check protocol (a custom check parameter), which is required if the value of CheckType is CUSTOM. This parameter represents the result returned by the health check. Only ASCII visible characters are allowed, and the maximum length is 500. (Applicable only to TCP/UDP listeners.)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RecvContext Health check protocol (a custom check parameter), which is required if the value of CheckType is CUSTOM. This parameter represents the result returned by the health check. Only ASCII visible characters are allowed, and the maximum length is 500. (Applicable only to TCP/UDP listeners.)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRecvContext() const;

                    /**
                     * 设置Health check protocol (a custom check parameter), which is required if the value of CheckType is CUSTOM. This parameter represents the result returned by the health check. Only ASCII visible characters are allowed, and the maximum length is 500. (Applicable only to TCP/UDP listeners.)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RecvContext Health check protocol (a custom check parameter), which is required if the value of CheckType is CUSTOM. This parameter represents the result returned by the health check. Only ASCII visible characters are allowed, and the maximum length is 500. (Applicable only to TCP/UDP listeners.)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRecvContext(const std::string& _recvContext);

                    /**
                     * 判断参数 RecvContext 是否已赋值
                     * @return RecvContext 是否已赋值
                     */
                    bool RecvContextHasBeenSet() const;

                    /**
                     * 获取Health check protocol (a custom check parameter). Value range: TCP, HTTP, CUSTOM (applicable only to TCP/UDP listeners, where UDP listeners only support CUSTOM. If custom health check is used, this parameter is required).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CheckType Health check protocol (a custom check parameter). Value range: TCP, HTTP, CUSTOM (applicable only to TCP/UDP listeners, where UDP listeners only support CUSTOM. If custom health check is used, this parameter is required).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCheckType() const;

                    /**
                     * 设置Health check protocol (a custom check parameter). Value range: TCP, HTTP, CUSTOM (applicable only to TCP/UDP listeners, where UDP listeners only support CUSTOM. If custom health check is used, this parameter is required).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CheckType Health check protocol (a custom check parameter). Value range: TCP, HTTP, CUSTOM (applicable only to TCP/UDP listeners, where UDP listeners only support CUSTOM. If custom health check is used, this parameter is required).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCheckType(const std::string& _checkType);

                    /**
                     * 判断参数 CheckType 是否已赋值
                     * @return CheckType 是否已赋值
                     */
                    bool CheckTypeHasBeenSet() const;

                    /**
                     * 获取Health check protocol (a custom check parameter), which is required if the value of CheckType is HTTP. This parameter represents the HTTP version of the real server. Value range: HTTP/1.0, HTTP/1.1. (Applicable only to TCP listeners.)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HttpVersion Health check protocol (a custom check parameter), which is required if the value of CheckType is HTTP. This parameter represents the HTTP version of the real server. Value range: HTTP/1.0, HTTP/1.1. (Applicable only to TCP listeners.)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetHttpVersion() const;

                    /**
                     * 设置Health check protocol (a custom check parameter), which is required if the value of CheckType is HTTP. This parameter represents the HTTP version of the real server. Value range: HTTP/1.0, HTTP/1.1. (Applicable only to TCP listeners.)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param HttpVersion Health check protocol (a custom check parameter), which is required if the value of CheckType is HTTP. This parameter represents the HTTP version of the real server. Value range: HTTP/1.0, HTTP/1.1. (Applicable only to TCP listeners.)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHttpVersion(const std::string& _httpVersion);

                    /**
                     * 判断参数 HttpVersion 是否已赋值
                     * @return HttpVersion 是否已赋值
                     */
                    bool HttpVersionHasBeenSet() const;

                    /**
                     * 获取Specifies the source IP for health check. `0`: use the CLB VIP as the source IP; `1`: IP range starting with 100.64 serving as the source IP. Default: `0`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return SourceIpType Specifies the source IP for health check. `0`: use the CLB VIP as the source IP; `1`: IP range starting with 100.64 serving as the source IP. Default: `0`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetSourceIpType() const;

                    /**
                     * 设置Specifies the source IP for health check. `0`: use the CLB VIP as the source IP; `1`: IP range starting with 100.64 serving as the source IP. Default: `0`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param SourceIpType Specifies the source IP for health check. `0`: use the CLB VIP as the source IP; `1`: IP range starting with 100.64 serving as the source IP. Default: `0`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetSourceIpType(const int64_t& _sourceIpType);

                    /**
                     * 判断参数 SourceIpType 是否已赋值
                     * @return SourceIpType 是否已赋值
                     */
                    bool SourceIpTypeHasBeenSet() const;

                private:

                    /**
                     * Whether to enable health check. 1: enable; 0: disable.
                     */
                    int64_t m_healthSwitch;
                    bool m_healthSwitchHasBeenSet;

                    /**
                     * Health check response timeout period in seconds (applicable only to layer-4 listeners). Value range: 2-60. Default value: 2. This parameter should be less than the check interval.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_timeOut;
                    bool m_timeOutHasBeenSet;

                    /**
                     * Health check interval in seconds. Value range: 5-300. Default value: 5.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_intervalTime;
                    bool m_intervalTimeHasBeenSet;

                    /**
                     * Health threshold. Default value: 3, indicating that if a forward is found healthy three consecutive times, it is considered to be normal. Value range: 2-10
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_healthNum;
                    bool m_healthNumHasBeenSet;

                    /**
                     * Unhealthy threshold. Default value: 3, indicating that if a forward is found unhealthy three consecutive times, it is considered to be exceptional. Value range: 2-10
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_unHealthNum;
                    bool m_unHealthNumHasBeenSet;

                    /**
                     * Health check status code (applicable only to HTTP/HTTPS forwarding rules and HTTP health checks of TCP listeners). Value range: 1-31. Default value: 31.
1 means that the return value of 1xx after detection means healthy, 2 for returning 2xx for healthy, 4 for returning 3xx for healthy, 8 for returning 4xx for healthy, and 16 for returning 5xx for healthy. If you want multiple return codes to represent healthy, sum up the corresponding values. Note: The HTTP health check mode of TCP listeners only supports specifying one kind of health check status code.
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
                     * Health check domain name (applicable only to HTTP/HTTPS forwarding rules and HTTP health checks of TCP listeners).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_httpCheckDomain;
                    bool m_httpCheckDomainHasBeenSet;

                    /**
                     * Health check method (applicable only to HTTP/HTTPS forwarding rules and HTTP health checks of TCP listeners). Value range: HEAD, GET. Default value: HEAD.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_httpCheckMethod;
                    bool m_httpCheckMethodHasBeenSet;

                    /**
                     * Health check port (a custom check parameter), which is the port of the real server by default. Unless you want to specify a port, it is recommended to leave it empty. (Applicable only to TCP/UDP listeners.)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_checkPort;
                    bool m_checkPortHasBeenSet;

                    /**
                     * Health check protocol (a custom check parameter), which is required if the value of CheckType is CUSTOM. This parameter represents the input format of the health check. Value range: HEX, TEXT. If the value is HEX, the characters of SendContext and RecvContext can only be selected from 0123456789ABCDEF and the length must be an even number. (Applicable only to TCP/UDP listeners.)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_contextType;
                    bool m_contextTypeHasBeenSet;

                    /**
                     * Health check protocol (a custom check parameter), which is required if the value of CheckType is CUSTOM. This parameter represents the content of the request sent by the health check. Only ASCII visible characters are allowed, and the maximum length is 500. (Applicable only to TCP/UDP listeners.)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sendContext;
                    bool m_sendContextHasBeenSet;

                    /**
                     * Health check protocol (a custom check parameter), which is required if the value of CheckType is CUSTOM. This parameter represents the result returned by the health check. Only ASCII visible characters are allowed, and the maximum length is 500. (Applicable only to TCP/UDP listeners.)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_recvContext;
                    bool m_recvContextHasBeenSet;

                    /**
                     * Health check protocol (a custom check parameter). Value range: TCP, HTTP, CUSTOM (applicable only to TCP/UDP listeners, where UDP listeners only support CUSTOM. If custom health check is used, this parameter is required).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_checkType;
                    bool m_checkTypeHasBeenSet;

                    /**
                     * Health check protocol (a custom check parameter), which is required if the value of CheckType is HTTP. This parameter represents the HTTP version of the real server. Value range: HTTP/1.0, HTTP/1.1. (Applicable only to TCP listeners.)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_httpVersion;
                    bool m_httpVersionHasBeenSet;

                    /**
                     * Specifies the source IP for health check. `0`: use the CLB VIP as the source IP; `1`: IP range starting with 100.64 serving as the source IP. Default: `0`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_sourceIpType;
                    bool m_sourceIpTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_HEALTHCHECK_H_
