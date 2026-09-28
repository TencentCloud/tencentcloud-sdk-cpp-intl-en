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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_HEALTHCHECKCONFIG_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_HEALTHCHECKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * Health check configuration
                */
                class HealthCheckConfig : public AbstractModel
                {
                public:
                    HealthCheckConfig();
                    ~HealthCheckConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable the health check.
- **true**: enable.
- **false**: not enabled.
                     * @return HealthCheckEnabled Whether to enable the health check.
- **true**: enable.
- **false**: not enabled.
                     * 
                     */
                    bool GetHealthCheckEnabled() const;

                    /**
                     * 设置Whether to enable the health check.
- **true**: enable.
- **false**: not enabled.
                     * @param _healthCheckEnabled Whether to enable the health check.
- **true**: enable.
- **false**: not enabled.
                     * 
                     */
                    void SetHealthCheckEnabled(const bool& _healthCheckEnabled);

                    /**
                     * 判断参数 HealthCheckEnabled 是否已赋值
                     * @return HealthCheckEnabled 是否已赋值
                     * 
                     */
                    bool HealthCheckEnabledHasBeenSet() const;

                    /**
                     * 获取Health check status code. Value:
- When the health check protocol is **HTTP/HTTPS**:
	- **http_1xx**
	- **http_2xx** (default value)
	-  **http_3xx**
	-  **http_4xx**
	-  **http_5xx**
- When the health check protocol is **gRPC**: default value: 12, value range: 0-99. The input value can be a numerical value, multiple values, a range, or a composite of these, for example:
	- **"20"**
	- **"0-99"**
> This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP**, **HTTPS**, **GRPC**, or **GRPCS**.
                     * @return HealthCheckCodes Health check status code. Value:
- When the health check protocol is **HTTP/HTTPS**:
	- **http_1xx**
	- **http_2xx** (default value)
	-  **http_3xx**
	-  **http_4xx**
	-  **http_5xx**
- When the health check protocol is **gRPC**: default value: 12, value range: 0-99. The input value can be a numerical value, multiple values, a range, or a composite of these, for example:
	- **"20"**
	- **"0-99"**
> This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP**, **HTTPS**, **GRPC**, or **GRPCS**.
                     * 
                     */
                    std::vector<std::string> GetHealthCheckCodes() const;

                    /**
                     * 设置Health check status code. Value:
- When the health check protocol is **HTTP/HTTPS**:
	- **http_1xx**
	- **http_2xx** (default value)
	-  **http_3xx**
	-  **http_4xx**
	-  **http_5xx**
- When the health check protocol is **gRPC**: default value: 12, value range: 0-99. The input value can be a numerical value, multiple values, a range, or a composite of these, for example:
	- **"20"**
	- **"0-99"**
> This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP**, **HTTPS**, **GRPC**, or **GRPCS**.
                     * @param _healthCheckCodes Health check status code. Value:
- When the health check protocol is **HTTP/HTTPS**:
	- **http_1xx**
	- **http_2xx** (default value)
	-  **http_3xx**
	-  **http_4xx**
	-  **http_5xx**
- When the health check protocol is **gRPC**: default value: 12, value range: 0-99. The input value can be a numerical value, multiple values, a range, or a composite of these, for example:
	- **"20"**
	- **"0-99"**
> This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP**, **HTTPS**, **GRPC**, or **GRPCS**.
                     * 
                     */
                    void SetHealthCheckCodes(const std::vector<std::string>& _healthCheckCodes);

                    /**
                     * 判断参数 HealthCheckCodes 是否已赋值
                     * @return HealthCheckCodes 是否已赋值
                     * 
                     */
                    bool HealthCheckCodesHasBeenSet() const;

                    /**
                     * 获取Threshold for determining backend service health. After the number of consecutive successful health checks reaches this value, the backend service status changes from **unhealthy** to **healthy**.
Value range: **2**-**10**.
Default value: **2**.
                     * @return HealthCheckHealthyThreshold Threshold for determining backend service health. After the number of consecutive successful health checks reaches this value, the backend service status changes from **unhealthy** to **healthy**.
Value range: **2**-**10**.
Default value: **2**.
                     * 
                     */
                    uint64_t GetHealthCheckHealthyThreshold() const;

                    /**
                     * 设置Threshold for determining backend service health. After the number of consecutive successful health checks reaches this value, the backend service status changes from **unhealthy** to **healthy**.
Value range: **2**-**10**.
Default value: **2**.
                     * @param _healthCheckHealthyThreshold Threshold for determining backend service health. After the number of consecutive successful health checks reaches this value, the backend service status changes from **unhealthy** to **healthy**.
Value range: **2**-**10**.
Default value: **2**.
                     * 
                     */
                    void SetHealthCheckHealthyThreshold(const uint64_t& _healthCheckHealthyThreshold);

                    /**
                     * 判断参数 HealthCheckHealthyThreshold 是否已赋值
                     * @return HealthCheckHealthyThreshold 是否已赋值
                     * 
                     */
                    bool HealthCheckHealthyThresholdHasBeenSet() const;

                    /**
                     * 获取Health check domain. If this parameter is not set, the intranet IP of the backend service is used as the health check address by default.
Domain restriction:
-Length limit: **1-255** characters.
- It can contain lowercase letters, digits, hyphens (-), and half-width periods (.).
-At least one half-width period (.) is required, and it cannot appear at the beginning or end.
-The rightmost domain tag can only contain letters. It cannot contain digits or en dashes (-).
-En dash (-) cannot appear at the beginning or end.
>This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP**, **HTTPS**, **GRPC**, or **GRPCS**.
                     * @return HealthCheckHost Health check domain. If this parameter is not set, the intranet IP of the backend service is used as the health check address by default.
Domain restriction:
-Length limit: **1-255** characters.
- It can contain lowercase letters, digits, hyphens (-), and half-width periods (.).
-At least one half-width period (.) is required, and it cannot appear at the beginning or end.
-The rightmost domain tag can only contain letters. It cannot contain digits or en dashes (-).
-En dash (-) cannot appear at the beginning or end.
>This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP**, **HTTPS**, **GRPC**, or **GRPCS**.
                     * 
                     */
                    std::string GetHealthCheckHost() const;

                    /**
                     * 设置Health check domain. If this parameter is not set, the intranet IP of the backend service is used as the health check address by default.
Domain restriction:
-Length limit: **1-255** characters.
- It can contain lowercase letters, digits, hyphens (-), and half-width periods (.).
-At least one half-width period (.) is required, and it cannot appear at the beginning or end.
-The rightmost domain tag can only contain letters. It cannot contain digits or en dashes (-).
-En dash (-) cannot appear at the beginning or end.
>This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP**, **HTTPS**, **GRPC**, or **GRPCS**.
                     * @param _healthCheckHost Health check domain. If this parameter is not set, the intranet IP of the backend service is used as the health check address by default.
Domain restriction:
-Length limit: **1-255** characters.
- It can contain lowercase letters, digits, hyphens (-), and half-width periods (.).
-At least one half-width period (.) is required, and it cannot appear at the beginning or end.
-The rightmost domain tag can only contain letters. It cannot contain digits or en dashes (-).
-En dash (-) cannot appear at the beginning or end.
>This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP**, **HTTPS**, **GRPC**, or **GRPCS**.
                     * 
                     */
                    void SetHealthCheckHost(const std::string& _healthCheckHost);

                    /**
                     * 判断参数 HealthCheckHost 是否已赋值
                     * @return HealthCheckHost 是否已赋值
                     * 
                     */
                    bool HealthCheckHostHasBeenSet() const;

                    /**
                     * 获取HTTP version for health check.
- **HTTP1.1** (default)
- **HTTP1.0** 
> This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP** or **HTTPS**.
                     * @return HealthCheckHttpVersion HTTP version for health check.
- **HTTP1.1** (default)
- **HTTP1.0** 
> This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP** or **HTTPS**.
                     * 
                     */
                    std::string GetHealthCheckHttpVersion() const;

                    /**
                     * 设置HTTP version for health check.
- **HTTP1.1** (default)
- **HTTP1.0** 
> This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP** or **HTTPS**.
                     * @param _healthCheckHttpVersion HTTP version for health check.
- **HTTP1.1** (default)
- **HTTP1.0** 
> This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP** or **HTTPS**.
                     * 
                     */
                    void SetHealthCheckHttpVersion(const std::string& _healthCheckHttpVersion);

                    /**
                     * 判断参数 HealthCheckHttpVersion 是否已赋值
                     * @return HealthCheckHttpVersion 是否已赋值
                     * 
                     */
                    bool HealthCheckHttpVersionHasBeenSet() const;

                    /**
                     * 获取Health check interval. Unit: second.
Valid values: **2**-**300**.
Default value: **5**.
                     * @return HealthCheckInterval Health check interval. Unit: second.
Valid values: **2**-**300**.
Default value: **5**.
                     * 
                     */
                    uint64_t GetHealthCheckInterval() const;

                    /**
                     * 设置Health check interval. Unit: second.
Valid values: **2**-**300**.
Default value: **5**.
                     * @param _healthCheckInterval Health check interval. Unit: second.
Valid values: **2**-**300**.
Default value: **5**.
                     * 
                     */
                    void SetHealthCheckInterval(const uint64_t& _healthCheckInterval);

                    /**
                     * 判断参数 HealthCheckInterval 是否已赋值
                     * @return HealthCheckInterval 是否已赋值
                     * 
                     */
                    bool HealthCheckIntervalHasBeenSet() const;

                    /**
                     * 获取Health check method. Valid values:
- **GET**
- **HEAD** (default value)
> This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP** or **HTTPS**.
                     * @return HealthCheckMethod Health check method. Valid values:
- **GET**
- **HEAD** (default value)
> This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP** or **HTTPS**.
                     * 
                     */
                    std::string GetHealthCheckMethod() const;

                    /**
                     * 设置Health check method. Valid values:
- **GET**
- **HEAD** (default value)
> This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP** or **HTTPS**.
                     * @param _healthCheckMethod Health check method. Valid values:
- **GET**
- **HEAD** (default value)
> This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP** or **HTTPS**.
                     * 
                     */
                    void SetHealthCheckMethod(const std::string& _healthCheckMethod);

                    /**
                     * 判断参数 HealthCheckMethod 是否已赋值
                     * @return HealthCheckMethod 是否已赋值
                     * 
                     */
                    bool HealthCheckMethodHasBeenSet() const;

                    /**
                     * 获取Forwarding rule path for health check.
Length: 1–80 characters. Only letters, digits, characters `-/.%?#&=` and extended characters `_;~!()*[]@$^:',+` can be used. The URL must start with a forward slash (/).
> The forwarding rule path parameter takes effect only when **HealthCheckProtocol** is set to **HTTP**, **HTTPS**, **GRPC**, or **GRPCS**.
                     * @return HealthCheckPath Forwarding rule path for health check.
Length: 1–80 characters. Only letters, digits, characters `-/.%?#&=` and extended characters `_;~!()*[]@$^:',+` can be used. The URL must start with a forward slash (/).
> The forwarding rule path parameter takes effect only when **HealthCheckProtocol** is set to **HTTP**, **HTTPS**, **GRPC**, or **GRPCS**.
                     * 
                     */
                    std::string GetHealthCheckPath() const;

                    /**
                     * 设置Forwarding rule path for health check.
Length: 1–80 characters. Only letters, digits, characters `-/.%?#&=` and extended characters `_;~!()*[]@$^:',+` can be used. The URL must start with a forward slash (/).
> The forwarding rule path parameter takes effect only when **HealthCheckProtocol** is set to **HTTP**, **HTTPS**, **GRPC**, or **GRPCS**.
                     * @param _healthCheckPath Forwarding rule path for health check.
Length: 1–80 characters. Only letters, digits, characters `-/.%?#&=` and extended characters `_;~!()*[]@$^:',+` can be used. The URL must start with a forward slash (/).
> The forwarding rule path parameter takes effect only when **HealthCheckProtocol** is set to **HTTP**, **HTTPS**, **GRPC**, or **GRPCS**.
                     * 
                     */
                    void SetHealthCheckPath(const std::string& _healthCheckPath);

                    /**
                     * 判断参数 HealthCheckPath 是否已赋值
                     * @return HealthCheckPath 是否已赋值
                     * 
                     */
                    bool HealthCheckPathHasBeenSet() const;

                    /**
                     * 获取Health check accesses the backend server port.

Valid values: **0-65535**.

Default value: **0**, which indicates the backend server port.
                     * @return HealthCheckPort Health check accesses the backend server port.

Valid values: **0-65535**.

Default value: **0**, which indicates the backend server port.
                     * 
                     */
                    uint64_t GetHealthCheckPort() const;

                    /**
                     * 设置Health check accesses the backend server port.

Valid values: **0-65535**.

Default value: **0**, which indicates the backend server port.
                     * @param _healthCheckPort Health check accesses the backend server port.

Valid values: **0-65535**.

Default value: **0**, which indicates the backend server port.
                     * 
                     */
                    void SetHealthCheckPort(const uint64_t& _healthCheckPort);

                    /**
                     * 判断参数 HealthCheckPort 是否已赋值
                     * @return HealthCheckPort 是否已赋值
                     * 
                     */
                    bool HealthCheckPortHasBeenSet() const;

                    /**
                     * 获取Health check protocol. Valid values:
- **HTTP** (default): Simulate browser access requests by sending HEAD or GET requests to check whether the server application is healthy.
- **HTTPS**: Checks the health of a server application by sending HEAD or GET requests to simulate browser access requests. (Encrypts data and is more secure compared with HTTP.)
- **TCP**: Detect whether the server port is alive by sending SYN handshake messages.
- **GRPC**: Check whether the server application is healthy by sending a POST request.
- **GRPCS**: Send a POST request to check whether the server application is healthy.
                     * @return HealthCheckProtocol Health check protocol. Valid values:
- **HTTP** (default): Simulate browser access requests by sending HEAD or GET requests to check whether the server application is healthy.
- **HTTPS**: Checks the health of a server application by sending HEAD or GET requests to simulate browser access requests. (Encrypts data and is more secure compared with HTTP.)
- **TCP**: Detect whether the server port is alive by sending SYN handshake messages.
- **GRPC**: Check whether the server application is healthy by sending a POST request.
- **GRPCS**: Send a POST request to check whether the server application is healthy.
                     * 
                     */
                    std::string GetHealthCheckProtocol() const;

                    /**
                     * 设置Health check protocol. Valid values:
- **HTTP** (default): Simulate browser access requests by sending HEAD or GET requests to check whether the server application is healthy.
- **HTTPS**: Checks the health of a server application by sending HEAD or GET requests to simulate browser access requests. (Encrypts data and is more secure compared with HTTP.)
- **TCP**: Detect whether the server port is alive by sending SYN handshake messages.
- **GRPC**: Check whether the server application is healthy by sending a POST request.
- **GRPCS**: Send a POST request to check whether the server application is healthy.
                     * @param _healthCheckProtocol Health check protocol. Valid values:
- **HTTP** (default): Simulate browser access requests by sending HEAD or GET requests to check whether the server application is healthy.
- **HTTPS**: Checks the health of a server application by sending HEAD or GET requests to simulate browser access requests. (Encrypts data and is more secure compared with HTTP.)
- **TCP**: Detect whether the server port is alive by sending SYN handshake messages.
- **GRPC**: Check whether the server application is healthy by sending a POST request.
- **GRPCS**: Send a POST request to check whether the server application is healthy.
                     * 
                     */
                    void SetHealthCheckProtocol(const std::string& _healthCheckProtocol);

                    /**
                     * 判断参数 HealthCheckProtocol 是否已赋值
                     * @return HealthCheckProtocol 是否已赋值
                     * 
                     */
                    bool HealthCheckProtocolHasBeenSet() const;

                    /**
                     * 获取timeout period for health check. Unit: seconds.
Valid values: **2**-**60**.
Default value: **2**.
                     * @return HealthCheckTimeout timeout period for health check. Unit: seconds.
Valid values: **2**-**60**.
Default value: **2**.
                     * 
                     */
                    uint64_t GetHealthCheckTimeout() const;

                    /**
                     * 设置timeout period for health check. Unit: seconds.
Valid values: **2**-**60**.
Default value: **2**.
                     * @param _healthCheckTimeout timeout period for health check. Unit: seconds.
Valid values: **2**-**60**.
Default value: **2**.
                     * 
                     */
                    void SetHealthCheckTimeout(const uint64_t& _healthCheckTimeout);

                    /**
                     * 判断参数 HealthCheckTimeout 是否已赋值
                     * @return HealthCheckTimeout 是否已赋值
                     * 
                     */
                    bool HealthCheckTimeoutHasBeenSet() const;

                    /**
                     * 获取Threshold for determining an unhealthy backend service. The backend service status changes from **healthy** to **unhealthy** after the health check fails this number of consecutive times.
Value range: **2**-**10**.
Default value: **2**.
                     * @return HealthCheckUnhealthyThreshold Threshold for determining an unhealthy backend service. The backend service status changes from **healthy** to **unhealthy** after the health check fails this number of consecutive times.
Value range: **2**-**10**.
Default value: **2**.
                     * 
                     */
                    uint64_t GetHealthCheckUnhealthyThreshold() const;

                    /**
                     * 设置Threshold for determining an unhealthy backend service. The backend service status changes from **healthy** to **unhealthy** after the health check fails this number of consecutive times.
Value range: **2**-**10**.
Default value: **2**.
                     * @param _healthCheckUnhealthyThreshold Threshold for determining an unhealthy backend service. The backend service status changes from **healthy** to **unhealthy** after the health check fails this number of consecutive times.
Value range: **2**-**10**.
Default value: **2**.
                     * 
                     */
                    void SetHealthCheckUnhealthyThreshold(const uint64_t& _healthCheckUnhealthyThreshold);

                    /**
                     * 判断参数 HealthCheckUnhealthyThreshold 是否已赋值
                     * @return HealthCheckUnhealthyThreshold 是否已赋值
                     * 
                     */
                    bool HealthCheckUnhealthyThresholdHasBeenSet() const;

                private:

                    /**
                     * Whether to enable the health check.
- **true**: enable.
- **false**: not enabled.
                     */
                    bool m_healthCheckEnabled;
                    bool m_healthCheckEnabledHasBeenSet;

                    /**
                     * Health check status code. Value:
- When the health check protocol is **HTTP/HTTPS**:
	- **http_1xx**
	- **http_2xx** (default value)
	-  **http_3xx**
	-  **http_4xx**
	-  **http_5xx**
- When the health check protocol is **gRPC**: default value: 12, value range: 0-99. The input value can be a numerical value, multiple values, a range, or a composite of these, for example:
	- **"20"**
	- **"0-99"**
> This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP**, **HTTPS**, **GRPC**, or **GRPCS**.
                     */
                    std::vector<std::string> m_healthCheckCodes;
                    bool m_healthCheckCodesHasBeenSet;

                    /**
                     * Threshold for determining backend service health. After the number of consecutive successful health checks reaches this value, the backend service status changes from **unhealthy** to **healthy**.
Value range: **2**-**10**.
Default value: **2**.
                     */
                    uint64_t m_healthCheckHealthyThreshold;
                    bool m_healthCheckHealthyThresholdHasBeenSet;

                    /**
                     * Health check domain. If this parameter is not set, the intranet IP of the backend service is used as the health check address by default.
Domain restriction:
-Length limit: **1-255** characters.
- It can contain lowercase letters, digits, hyphens (-), and half-width periods (.).
-At least one half-width period (.) is required, and it cannot appear at the beginning or end.
-The rightmost domain tag can only contain letters. It cannot contain digits or en dashes (-).
-En dash (-) cannot appear at the beginning or end.
>This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP**, **HTTPS**, **GRPC**, or **GRPCS**.
                     */
                    std::string m_healthCheckHost;
                    bool m_healthCheckHostHasBeenSet;

                    /**
                     * HTTP version for health check.
- **HTTP1.1** (default)
- **HTTP1.0** 
> This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP** or **HTTPS**.
                     */
                    std::string m_healthCheckHttpVersion;
                    bool m_healthCheckHttpVersionHasBeenSet;

                    /**
                     * Health check interval. Unit: second.
Valid values: **2**-**300**.
Default value: **5**.
                     */
                    uint64_t m_healthCheckInterval;
                    bool m_healthCheckIntervalHasBeenSet;

                    /**
                     * Health check method. Valid values:
- **GET**
- **HEAD** (default value)
> This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP** or **HTTPS**.
                     */
                    std::string m_healthCheckMethod;
                    bool m_healthCheckMethodHasBeenSet;

                    /**
                     * Forwarding rule path for health check.
Length: 1–80 characters. Only letters, digits, characters `-/.%?#&=` and extended characters `_;~!()*[]@$^:',+` can be used. The URL must start with a forward slash (/).
> The forwarding rule path parameter takes effect only when **HealthCheckProtocol** is set to **HTTP**, **HTTPS**, **GRPC**, or **GRPCS**.
                     */
                    std::string m_healthCheckPath;
                    bool m_healthCheckPathHasBeenSet;

                    /**
                     * Health check accesses the backend server port.

Valid values: **0-65535**.

Default value: **0**, which indicates the backend server port.
                     */
                    uint64_t m_healthCheckPort;
                    bool m_healthCheckPortHasBeenSet;

                    /**
                     * Health check protocol. Valid values:
- **HTTP** (default): Simulate browser access requests by sending HEAD or GET requests to check whether the server application is healthy.
- **HTTPS**: Checks the health of a server application by sending HEAD or GET requests to simulate browser access requests. (Encrypts data and is more secure compared with HTTP.)
- **TCP**: Detect whether the server port is alive by sending SYN handshake messages.
- **GRPC**: Check whether the server application is healthy by sending a POST request.
- **GRPCS**: Send a POST request to check whether the server application is healthy.
                     */
                    std::string m_healthCheckProtocol;
                    bool m_healthCheckProtocolHasBeenSet;

                    /**
                     * timeout period for health check. Unit: seconds.
Valid values: **2**-**60**.
Default value: **2**.
                     */
                    uint64_t m_healthCheckTimeout;
                    bool m_healthCheckTimeoutHasBeenSet;

                    /**
                     * Threshold for determining an unhealthy backend service. The backend service status changes from **healthy** to **unhealthy** after the health check fails this number of consecutive times.
Value range: **2**-**10**.
Default value: **2**.
                     */
                    uint64_t m_healthCheckUnhealthyThreshold;
                    bool m_healthCheckUnhealthyThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_HEALTHCHECKCONFIG_H_
