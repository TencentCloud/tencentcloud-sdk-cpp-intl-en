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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPHEALTHCHECK_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPHEALTHCHECK_H_

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
                * Details of target group health check
                */
                class TargetGroupHealthCheck : public AbstractModel
                {
                public:
                    TargetGroupHealthCheck();
                    ~TargetGroupHealthCheck() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable the health check.
                     * @return HealthSwitch Whether to enable the health check.
                     * 
                     */
                    bool GetHealthSwitch() const;

                    /**
                     * 设置Whether to enable the health check.
                     * @param _healthSwitch Whether to enable the health check.
                     * 
                     */
                    void SetHealthSwitch(const bool& _healthSwitch);

                    /**
                     * 判断参数 HealthSwitch 是否已赋值
                     * @return HealthSwitch 是否已赋值
                     * 
                     */
                    bool HealthSwitchHasBeenSet() const;

                    /**
                     * 获取Health check method. among them, only the new version V2 target group type supports this parameter. valid values: TCP | HTTP | HTTPS | PING | CUSTOM. among them:.
<ur><li>When the backend forwarding protocol of the target group is TCP, the health check method supports TCP/HTTP/CUSTOM, with a default value of TCP.</li><li>when the backend forwarding protocol of the target group is UDP, the health check method supports PING/CUSTOM, with a default value of PING.</li><li>when the backend forwarding protocol of the target group is HTTP, the health check method supports HTTP/TCP, with a default value of HTTP.</li><li>when the backend forwarding protocol of the target group is HTTPS, the health check method supports HTTPS/TCP, with a default value of HTTPS.</li><li>when the backend forwarding protocol of the target group is GRPC, the health check method supports GRPC/TCP, with a default value of GRPC.</li></ur>.
                     * @return Protocol Health check method. among them, only the new version V2 target group type supports this parameter. valid values: TCP | HTTP | HTTPS | PING | CUSTOM. among them:.
<ur><li>When the backend forwarding protocol of the target group is TCP, the health check method supports TCP/HTTP/CUSTOM, with a default value of TCP.</li><li>when the backend forwarding protocol of the target group is UDP, the health check method supports PING/CUSTOM, with a default value of PING.</li><li>when the backend forwarding protocol of the target group is HTTP, the health check method supports HTTP/TCP, with a default value of HTTP.</li><li>when the backend forwarding protocol of the target group is HTTPS, the health check method supports HTTPS/TCP, with a default value of HTTPS.</li><li>when the backend forwarding protocol of the target group is GRPC, the health check method supports GRPC/TCP, with a default value of GRPC.</li></ur>.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Health check method. among them, only the new version V2 target group type supports this parameter. valid values: TCP | HTTP | HTTPS | PING | CUSTOM. among them:.
<ur><li>When the backend forwarding protocol of the target group is TCP, the health check method supports TCP/HTTP/CUSTOM, with a default value of TCP.</li><li>when the backend forwarding protocol of the target group is UDP, the health check method supports PING/CUSTOM, with a default value of PING.</li><li>when the backend forwarding protocol of the target group is HTTP, the health check method supports HTTP/TCP, with a default value of HTTP.</li><li>when the backend forwarding protocol of the target group is HTTPS, the health check method supports HTTPS/TCP, with a default value of HTTPS.</li><li>when the backend forwarding protocol of the target group is GRPC, the health check method supports GRPC/TCP, with a default value of GRPC.</li></ur>.
                     * @param _protocol Health check method. among them, only the new version V2 target group type supports this parameter. valid values: TCP | HTTP | HTTPS | PING | CUSTOM. among them:.
<ur><li>When the backend forwarding protocol of the target group is TCP, the health check method supports TCP/HTTP/CUSTOM, with a default value of TCP.</li><li>when the backend forwarding protocol of the target group is UDP, the health check method supports PING/CUSTOM, with a default value of PING.</li><li>when the backend forwarding protocol of the target group is HTTP, the health check method supports HTTP/TCP, with a default value of HTTP.</li><li>when the backend forwarding protocol of the target group is HTTPS, the health check method supports HTTPS/TCP, with a default value of HTTPS.</li><li>when the backend forwarding protocol of the target group is GRPC, the health check method supports GRPC/TCP, with a default value of GRPC.</li></ur>.
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
                     * 获取Custom check parameters. health check port, defaults to the port of the backend service unless you want to specify a specific port, otherwise leave it blank. (applicable only to TCP/UDP target group).

                     * @return Port Custom check parameters. health check port, defaults to the port of the backend service unless you want to specify a specific port, otherwise leave it blank. (applicable only to TCP/UDP target group).

                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Custom check parameters. health check port, defaults to the port of the backend service unless you want to specify a specific port, otherwise leave it blank. (applicable only to TCP/UDP target group).

                     * @param _port Custom check parameters. health check port, defaults to the port of the backend service unless you want to specify a specific port, otherwise leave it blank. (applicable only to TCP/UDP target group).

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
                     * 获取Health check timeout. The default is 2 seconds. Value range: 2-30 seconds.
                     * @return Timeout Health check timeout. The default is 2 seconds. Value range: 2-30 seconds.
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置Health check timeout. The default is 2 seconds. Value range: 2-30 seconds.
                     * @param _timeout Health check timeout. The default is 2 seconds. Value range: 2-30 seconds.
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取Detection interval time. The default is 5 seconds. Value range: 2-300 seconds.
                     * @return GapTime Detection interval time. The default is 5 seconds. Value range: 2-300 seconds.
                     * 
                     */
                    int64_t GetGapTime() const;

                    /**
                     * 设置Detection interval time. The default is 5 seconds. Value range: 2-300 seconds.
                     * @param _gapTime Detection interval time. The default is 5 seconds. Value range: 2-300 seconds.
                     * 
                     */
                    void SetGapTime(const int64_t& _gapTime);

                    /**
                     * 判断参数 GapTime 是否已赋值
                     * @return GapTime 是否已赋值
                     * 
                     */
                    bool GapTimeHasBeenSet() const;

                    /**
                     * 获取Health detection threshold. The default is 3 times. Value range: 2-10 times.
                     * @return GoodLimit Health detection threshold. The default is 3 times. Value range: 2-10 times.
                     * 
                     */
                    int64_t GetGoodLimit() const;

                    /**
                     * 设置Health detection threshold. The default is 3 times. Value range: 2-10 times.
                     * @param _goodLimit Health detection threshold. The default is 3 times. Value range: 2-10 times.
                     * 
                     */
                    void SetGoodLimit(const int64_t& _goodLimit);

                    /**
                     * 判断参数 GoodLimit 是否已赋值
                     * @return GoodLimit 是否已赋值
                     * 
                     */
                    bool GoodLimitHasBeenSet() const;

                    /**
                     * 获取Unhealth detection threshold. The default is 3 times. Value range: 2-10 times.
                     * @return BadLimit Unhealth detection threshold. The default is 3 times. Value range: 2-10 times.
                     * 
                     */
                    int64_t GetBadLimit() const;

                    /**
                     * 设置Unhealth detection threshold. The default is 3 times. Value range: 2-10 times.
                     * @param _badLimit Unhealth detection threshold. The default is 3 times. Value range: 2-10 times.
                     * 
                     */
                    void SetBadLimit(const int64_t& _badLimit);

                    /**
                     * 判断参数 BadLimit 是否已赋值
                     * @return BadLimit 是否已赋值
                     * 
                     */
                    bool BadLimitHasBeenSet() const;

                    /**
                     * 获取Indicates whether jumbo frames are enabled for probe packets of all rss in the target group. enabled by default. this parameter is supported only for GWLB type target groups.
                     * @return JumboFrame Indicates whether jumbo frames are enabled for probe packets of all rss in the target group. enabled by default. this parameter is supported only for GWLB type target groups.
                     * 
                     */
                    bool GetJumboFrame() const;

                    /**
                     * 设置Indicates whether jumbo frames are enabled for probe packets of all rss in the target group. enabled by default. this parameter is supported only for GWLB type target groups.
                     * @param _jumboFrame Indicates whether jumbo frames are enabled for probe packets of all rss in the target group. enabled by default. this parameter is supported only for GWLB type target groups.
                     * 
                     */
                    void SetJumboFrame(const bool& _jumboFrame);

                    /**
                     * 判断参数 JumboFrame 是否已赋值
                     * @return JumboFrame 是否已赋值
                     * 
                     */
                    bool JumboFrameHasBeenSet() const;

                    /**
                     * 获取Health check status code (applicable only to HTTP/HTTPS target group and HTTP health check method of TCP target group). value range: 1~31. default: 31. among them: <url> <li>1 means post-detection return value 1xx represents health.</li> <li>2 means return 2xx represents health.</li> <li>4 means return 3xx represents health.</li> <li>8 means return 4xx represents health.</li> <li>16 means return 5xx represents health.</li></url> to have multiple return codes represent health, sum up corresponding values.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HttpCode Health check status code (applicable only to HTTP/HTTPS target group and HTTP health check method of TCP target group). value range: 1~31. default: 31. among them: <url> <li>1 means post-detection return value 1xx represents health.</li> <li>2 means return 2xx represents health.</li> <li>4 means return 3xx represents health.</li> <li>8 means return 4xx represents health.</li> <li>16 means return 5xx represents health.</li></url> to have multiple return codes represent health, sum up corresponding values.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetHttpCode() const;

                    /**
                     * 设置Health check status code (applicable only to HTTP/HTTPS target group and HTTP health check method of TCP target group). value range: 1~31. default: 31. among them: <url> <li>1 means post-detection return value 1xx represents health.</li> <li>2 means return 2xx represents health.</li> <li>4 means return 3xx represents health.</li> <li>8 means return 4xx represents health.</li> <li>16 means return 5xx represents health.</li></url> to have multiple return codes represent health, sum up corresponding values.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _httpCode Health check status code (applicable only to HTTP/HTTPS target group and HTTP health check method of TCP target group). value range: 1~31. default: 31. among them: <url> <li>1 means post-detection return value 1xx represents health.</li> <li>2 means return 2xx represents health.</li> <li>4 means return 3xx represents health.</li> <li>8 means return 4xx represents health.</li> <li>16 means return 5xx represents health.</li></url> to have multiple return codes represent health, sum up corresponding values.
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
                     * 获取Health check domain name. among them: <ur><li>applicable only to HTTP/HTTPS target groups and TCP target groups when using HTTP health check method.</li><li>targeting HTTP/HTTPS target groups, this parameter is required when using HTTP health check method.</li></ur>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HttpCheckDomain Health check domain name. among them: <ur><li>applicable only to HTTP/HTTPS target groups and TCP target groups when using HTTP health check method.</li><li>targeting HTTP/HTTPS target groups, this parameter is required when using HTTP health check method.</li></ur>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHttpCheckDomain() const;

                    /**
                     * 设置Health check domain name. among them: <ur><li>applicable only to HTTP/HTTPS target groups and TCP target groups when using HTTP health check method.</li><li>targeting HTTP/HTTPS target groups, this parameter is required when using HTTP health check method.</li></ur>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _httpCheckDomain Health check domain name. among them: <ur><li>applicable only to HTTP/HTTPS target groups and TCP target groups when using HTTP health check method.</li><li>targeting HTTP/HTTPS target groups, this parameter is required when using HTTP health check method.</li></ur>.
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
                     * 获取Input format of health check. required when health check method is CUSTOM. valid values: HEX or TEXT. among them:<ur><li>TEXT: TEXT format.</li><li>HEX: hexadecimal format. characters of SendContext and RecvContext can only be selected from 0123456789ABCDEF and the length must be an even number.</li><li>applicable only to TCP/UDP target group.</li></ur>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ContextType Input format of health check. required when health check method is CUSTOM. valid values: HEX or TEXT. among them:<ur><li>TEXT: TEXT format.</li><li>HEX: hexadecimal format. characters of SendContext and RecvContext can only be selected from 0123456789ABCDEF and the length must be an even number.</li><li>applicable only to TCP/UDP target group.</li></ur>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetContextType() const;

                    /**
                     * 设置Input format of health check. required when health check method is CUSTOM. valid values: HEX or TEXT. among them:<ur><li>TEXT: TEXT format.</li><li>HEX: hexadecimal format. characters of SendContext and RecvContext can only be selected from 0123456789ABCDEF and the length must be an even number.</li><li>applicable only to TCP/UDP target group.</li></ur>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _contextType Input format of health check. required when health check method is CUSTOM. valid values: HEX or TEXT. among them:<ur><li>TEXT: TEXT format.</li><li>HEX: hexadecimal format. characters of SendContext and RecvContext can only be selected from 0123456789ABCDEF and the length must be an even number.</li><li>applicable only to TCP/UDP target group.</li></ur>.
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
                     * 获取CUSTOM check parameters. required when the CheckType value is CUSTOM, represents the content of the request sent by the health check, only ASCII visible characters, maximum length limit 500. applicable only to TCP/UDP target group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SendContext CUSTOM check parameters. required when the CheckType value is CUSTOM, represents the content of the request sent by the health check, only ASCII visible characters, maximum length limit 500. applicable only to TCP/UDP target group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSendContext() const;

                    /**
                     * 设置CUSTOM check parameters. required when the CheckType value is CUSTOM, represents the content of the request sent by the health check, only ASCII visible characters, maximum length limit 500. applicable only to TCP/UDP target group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sendContext CUSTOM check parameters. required when the CheckType value is CUSTOM, represents the content of the request sent by the health check, only ASCII visible characters, maximum length limit 500. applicable only to TCP/UDP target group.
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
                     * 获取CUSTOM check parameters. required when the CheckType value is CUSTOM. represents the result returned by the health check. only ASCII visible characters are allowed. maximum length limit is 500. (applicable only to TCP/UDP target group).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RecvContext CUSTOM check parameters. required when the CheckType value is CUSTOM. represents the result returned by the health check. only ASCII visible characters are allowed. maximum length limit is 500. (applicable only to TCP/UDP target group).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRecvContext() const;

                    /**
                     * 设置CUSTOM check parameters. required when the CheckType value is CUSTOM. represents the result returned by the health check. only ASCII visible characters are allowed. maximum length limit is 500. (applicable only to TCP/UDP target group).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _recvContext CUSTOM check parameters. required when the CheckType value is CUSTOM. represents the result returned by the health check. only ASCII visible characters are allowed. maximum length limit is 500. (applicable only to TCP/UDP target group).
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
                     * 获取HTTP version, where: <ur><li>this field is required if the value of CheckType is HTTP.</li><li>supports configuration options: HTTP/1.0, HTTP/1.1.</li><li>applicable only to TCP target group.</li></ur>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HttpVersion HTTP version, where: <ur><li>this field is required if the value of CheckType is HTTP.</li><li>supports configuration options: HTTP/1.0, HTTP/1.1.</li><li>applicable only to TCP target group.</li></ur>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHttpVersion() const;

                    /**
                     * 设置HTTP version, where: <ur><li>this field is required if the value of CheckType is HTTP.</li><li>supports configuration options: HTTP/1.0, HTTP/1.1.</li><li>applicable only to TCP target group.</li></ur>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _httpVersion HTTP version, where: <ur><li>this field is required if the value of CheckType is HTTP.</li><li>supports configuration options: HTTP/1.0, HTTP/1.1.</li><li>applicable only to TCP target group.</li></ur>.
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
                     * 获取Health check status code when the protocol is GRPC. (this parameter applies only to target groups with the backend forwarding protocol of GRPC.) default value: 12. valid values: a single numerical value, multiple numerical values, or a range. for example, 20, 20,25, or 0-99.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExtendedCode Health check status code when the protocol is GRPC. (this parameter applies only to target groups with the backend forwarding protocol of GRPC.) default value: 12. valid values: a single numerical value, multiple numerical values, or a range. for example, 20, 20,25, or 0-99.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExtendedCode() const;

                    /**
                     * 设置Health check status code when the protocol is GRPC. (this parameter applies only to target groups with the backend forwarding protocol of GRPC.) default value: 12. valid values: a single numerical value, multiple numerical values, or a range. for example, 20, 20,25, or 0-99.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _extendedCode Health check status code when the protocol is GRPC. (this parameter applies only to target groups with the backend forwarding protocol of GRPC.) default value: 12. valid values: a single numerical value, multiple numerical values, or a range. for example, 20, 20,25, or 0-99.
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
                     * Whether to enable the health check.
                     */
                    bool m_healthSwitch;
                    bool m_healthSwitchHasBeenSet;

                    /**
                     * Health check method. among them, only the new version V2 target group type supports this parameter. valid values: TCP | HTTP | HTTPS | PING | CUSTOM. among them:.
<ur><li>When the backend forwarding protocol of the target group is TCP, the health check method supports TCP/HTTP/CUSTOM, with a default value of TCP.</li><li>when the backend forwarding protocol of the target group is UDP, the health check method supports PING/CUSTOM, with a default value of PING.</li><li>when the backend forwarding protocol of the target group is HTTP, the health check method supports HTTP/TCP, with a default value of HTTP.</li><li>when the backend forwarding protocol of the target group is HTTPS, the health check method supports HTTPS/TCP, with a default value of HTTPS.</li><li>when the backend forwarding protocol of the target group is GRPC, the health check method supports GRPC/TCP, with a default value of GRPC.</li></ur>.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Custom check parameters. health check port, defaults to the port of the backend service unless you want to specify a specific port, otherwise leave it blank. (applicable only to TCP/UDP target group).

                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Health check timeout. The default is 2 seconds. Value range: 2-30 seconds.
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * Detection interval time. The default is 5 seconds. Value range: 2-300 seconds.
                     */
                    int64_t m_gapTime;
                    bool m_gapTimeHasBeenSet;

                    /**
                     * Health detection threshold. The default is 3 times. Value range: 2-10 times.
                     */
                    int64_t m_goodLimit;
                    bool m_goodLimitHasBeenSet;

                    /**
                     * Unhealth detection threshold. The default is 3 times. Value range: 2-10 times.
                     */
                    int64_t m_badLimit;
                    bool m_badLimitHasBeenSet;

                    /**
                     * Indicates whether jumbo frames are enabled for probe packets of all rss in the target group. enabled by default. this parameter is supported only for GWLB type target groups.
                     */
                    bool m_jumboFrame;
                    bool m_jumboFrameHasBeenSet;

                    /**
                     * Health check status code (applicable only to HTTP/HTTPS target group and HTTP health check method of TCP target group). value range: 1~31. default: 31. among them: <url> <li>1 means post-detection return value 1xx represents health.</li> <li>2 means return 2xx represents health.</li> <li>4 means return 3xx represents health.</li> <li>8 means return 4xx represents health.</li> <li>16 means return 5xx represents health.</li></url> to have multiple return codes represent health, sum up corresponding values.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_httpCode;
                    bool m_httpCodeHasBeenSet;

                    /**
                     * Health check domain name. among them: <ur><li>applicable only to HTTP/HTTPS target groups and TCP target groups when using HTTP health check method.</li><li>targeting HTTP/HTTPS target groups, this parameter is required when using HTTP health check method.</li></ur>.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_httpCheckDomain;
                    bool m_httpCheckDomainHasBeenSet;

                    /**
                     * Health check path (applicable only to HTTP/HTTPS forwarding rules and HTTP health checks of TCP listeners).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_httpCheckPath;
                    bool m_httpCheckPathHasBeenSet;

                    /**
                     * Health check method (applicable only to HTTP/HTTPS forwarding rules and HTTP health checks of TCP listeners). Default: HEAD. Valid values: HEAD and GET.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_httpCheckMethod;
                    bool m_httpCheckMethodHasBeenSet;

                    /**
                     * Input format of health check. required when health check method is CUSTOM. valid values: HEX or TEXT. among them:<ur><li>TEXT: TEXT format.</li><li>HEX: hexadecimal format. characters of SendContext and RecvContext can only be selected from 0123456789ABCDEF and the length must be an even number.</li><li>applicable only to TCP/UDP target group.</li></ur>.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_contextType;
                    bool m_contextTypeHasBeenSet;

                    /**
                     * CUSTOM check parameters. required when the CheckType value is CUSTOM, represents the content of the request sent by the health check, only ASCII visible characters, maximum length limit 500. applicable only to TCP/UDP target group.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sendContext;
                    bool m_sendContextHasBeenSet;

                    /**
                     * CUSTOM check parameters. required when the CheckType value is CUSTOM. represents the result returned by the health check. only ASCII visible characters are allowed. maximum length limit is 500. (applicable only to TCP/UDP target group).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_recvContext;
                    bool m_recvContextHasBeenSet;

                    /**
                     * HTTP version, where: <ur><li>this field is required if the value of CheckType is HTTP.</li><li>supports configuration options: HTTP/1.0, HTTP/1.1.</li><li>applicable only to TCP target group.</li></ur>.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_httpVersion;
                    bool m_httpVersionHasBeenSet;

                    /**
                     * Health check status code when the protocol is GRPC. (this parameter applies only to target groups with the backend forwarding protocol of GRPC.) default value: 12. valid values: a single numerical value, multiple numerical values, or a range. for example, 20, 20,25, or 0-99.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_extendedCode;
                    bool m_extendedCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPHEALTHCHECK_H_
