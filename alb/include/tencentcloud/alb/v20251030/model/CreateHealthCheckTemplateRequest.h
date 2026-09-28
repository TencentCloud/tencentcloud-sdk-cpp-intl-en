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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_CREATEHEALTHCHECKTEMPLATEREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_CREATEHEALTHCHECKTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/TagInfo.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * CreateHealthCheckTemplate request structure.
                */
                class CreateHealthCheckTemplateRequest : public AbstractModel
                {
                public:
                    CreateHealthCheckTemplateRequest();
                    ~CreateHealthCheckTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether to preview this request.
- **false** (default): Send a normal request to directly modify the health check template.
- **true**: Send a preview request to check whether the parameters, format, and service limits of the health check template to modify meet the requirements.
                     * @return DryRun Whether to preview this request.
- **false** (default): Send a normal request to directly modify the health check template.
- **true**: Send a preview request to check whether the parameters, format, and service limits of the health check template to modify meet the requirements.
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置Whether to preview this request.
- **false** (default): Send a normal request to directly modify the health check template.
- **true**: Send a preview request to check whether the parameters, format, and service limits of the health check template to modify meet the requirements.
                     * @param _dryRun Whether to preview this request.
- **false** (default): Send a normal request to directly modify the health check template.
- **true**: Send a preview request to check whether the parameters, format, and service limits of the health check template to modify meet the requirements.
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取Health check status code. Value:
- When the health check protocol is **HTTP/HTTPS**:
	- **http_1xx**
	- **http_2xx** (default value)
	-  **http_3xx**
	-  **http_4xx**
	-  **http_5xx**
- When the health check protocol is **GRPC/GRPCS**: the default value is **12**, the value range is **0-99**, and the input value can be a numerical value, multiple values, a range, or a composite, for example:
	- **"20"**
	- **"0-99"**
                     * @return HealthCheckCodes Health check status code. Value:
- When the health check protocol is **HTTP/HTTPS**:
	- **http_1xx**
	- **http_2xx** (default value)
	-  **http_3xx**
	-  **http_4xx**
	-  **http_5xx**
- When the health check protocol is **GRPC/GRPCS**: the default value is **12**, the value range is **0-99**, and the input value can be a numerical value, multiple values, a range, or a composite, for example:
	- **"20"**
	- **"0-99"**
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
- When the health check protocol is **GRPC/GRPCS**: the default value is **12**, the value range is **0-99**, and the input value can be a numerical value, multiple values, a range, or a composite, for example:
	- **"20"**
	- **"0-99"**
                     * @param _healthCheckCodes Health check status code. Value:
- When the health check protocol is **HTTP/HTTPS**:
	- **http_1xx**
	- **http_2xx** (default value)
	-  **http_3xx**
	-  **http_4xx**
	-  **http_5xx**
- When the health check protocol is **GRPC/GRPCS**: the default value is **12**, the value range is **0-99**, and the input value can be a numerical value, multiple values, a range, or a composite, for example:
	- **"20"**
	- **"0-99"**
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
                     * 获取Threshold for determining backend service health. After the health check succeeds consecutively for this number of times, the backend service status changes from **unhealthy** to **healthy**.
Value range: **2**-**10**.
Default value: **2**.
                     * @return HealthCheckHealthyThreshold Threshold for determining backend service health. After the health check succeeds consecutively for this number of times, the backend service status changes from **unhealthy** to **healthy**.
Value range: **2**-**10**.
Default value: **2**.
                     * 
                     */
                    uint64_t GetHealthCheckHealthyThreshold() const;

                    /**
                     * 设置Threshold for determining backend service health. After the health check succeeds consecutively for this number of times, the backend service status changes from **unhealthy** to **healthy**.
Value range: **2**-**10**.
Default value: **2**.
                     * @param _healthCheckHealthyThreshold Threshold for determining backend service health. After the health check succeeds consecutively for this number of times, the backend service status changes from **unhealthy** to **healthy**.
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
                     * 获取Health check domain name.
Length limit: **1–255** characters.
It can contain lowercase letters, digits, dashes (-), and half-width periods (.).

> This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP/HTTPS/GRPC/GRPCS**.
                     * @return HealthCheckHost Health check domain name.
Length limit: **1–255** characters.
It can contain lowercase letters, digits, dashes (-), and half-width periods (.).

> This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP/HTTPS/GRPC/GRPCS**.
                     * 
                     */
                    std::string GetHealthCheckHost() const;

                    /**
                     * 设置Health check domain name.
Length limit: **1–255** characters.
It can contain lowercase letters, digits, dashes (-), and half-width periods (.).

> This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP/HTTPS/GRPC/GRPCS**.
                     * @param _healthCheckHost Health check domain name.
Length limit: **1–255** characters.
It can contain lowercase letters, digits, dashes (-), and half-width periods (.).

> This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP/HTTPS/GRPC/GRPCS**.
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
                     * 获取HTTP version for health check. Value:
- **HTTP1.1** (default)
- **HTTP1.0** 
> This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP** or **HTTPS**.
                     * @return HealthCheckHttpVersion HTTP version for health check. Value:
- **HTTP1.1** (default)
- **HTTP1.0** 
> This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP** or **HTTPS**.
                     * 
                     */
                    std::string GetHealthCheckHttpVersion() const;

                    /**
                     * 设置HTTP version for health check. Value:
- **HTTP1.1** (default)
- **HTTP1.0** 
> This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP** or **HTTPS**.
                     * @param _healthCheckHttpVersion HTTP version for health check. Value:
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
                     * 获取The interval of health check. Unit: second. Value range: **2**-**300**. Default value: **5**.
                     * @return HealthCheckInterval The interval of health check. Unit: second. Value range: **2**-**300**. Default value: **5**.
                     * 
                     */
                    uint64_t GetHealthCheckInterval() const;

                    /**
                     * 设置The interval of health check. Unit: second. Value range: **2**-**300**. Default value: **5**.
                     * @param _healthCheckInterval The interval of health check. Unit: second. Value range: **2**-**300**. Default value: **5**.
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
                     * 获取Health check method. Valid values: - **GET** - **HEAD** (default value) 
> This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP** or **HTTPS**.
                     * @return HealthCheckMethod Health check method. Valid values: - **GET** - **HEAD** (default value) 
> This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP** or **HTTPS**.
                     * 
                     */
                    std::string GetHealthCheckMethod() const;

                    /**
                     * 设置Health check method. Valid values: - **GET** - **HEAD** (default value) 
> This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP** or **HTTPS**.
                     * @param _healthCheckMethod Health check method. Valid values: - **GET** - **HEAD** (default value) 
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
                     * 获取Forwarding rule path for health check. Length: **1-80** characters. Only can use letters, numbers, characters `-/.%?#&=` as well as extended characters `_;~!（)*[]@$^:',+`. The URL must start with a forward slash (/). 
> The forwarding rule path parameter takes effect only when **HealthCheckProtocol** is **HTTP/HTTPS/GRPC/GRPCS**.
                     * @return HealthCheckPath Forwarding rule path for health check. Length: **1-80** characters. Only can use letters, numbers, characters `-/.%?#&=` as well as extended characters `_;~!（)*[]@$^:',+`. The URL must start with a forward slash (/). 
> The forwarding rule path parameter takes effect only when **HealthCheckProtocol** is **HTTP/HTTPS/GRPC/GRPCS**.
                     * 
                     */
                    std::string GetHealthCheckPath() const;

                    /**
                     * 设置Forwarding rule path for health check. Length: **1-80** characters. Only can use letters, numbers, characters `-/.%?#&=` as well as extended characters `_;~!（)*[]@$^:',+`. The URL must start with a forward slash (/). 
> The forwarding rule path parameter takes effect only when **HealthCheckProtocol** is **HTTP/HTTPS/GRPC/GRPCS**.
                     * @param _healthCheckPath Forwarding rule path for health check. Length: **1-80** characters. Only can use letters, numbers, characters `-/.%?#&=` as well as extended characters `_;~!（)*[]@$^:',+`. The URL must start with a forward slash (/). 
> The forwarding rule path parameter takes effect only when **HealthCheckProtocol** is **HTTP/HTTPS/GRPC/GRPCS**.
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
                     * 获取Health check access to the backend server port. Value range: **0-65535**. Default value: **0**, which means the backend server port.
                     * @return HealthCheckPort Health check access to the backend server port. Value range: **0-65535**. Default value: **0**, which means the backend server port.
                     * 
                     */
                    uint64_t GetHealthCheckPort() const;

                    /**
                     * 设置Health check access to the backend server port. Value range: **0-65535**. Default value: **0**, which means the backend server port.
                     * @param _healthCheckPort Health check access to the backend server port. Value range: **0-65535**. Default value: **0**, which means the backend server port.
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
- **HTTP** (default): Check whether the server application is healthy by sending HEAD or GET requests to simulate browser access requests.
- **HTTPS**: Check whether the server application is healthy by sending HEAD or GET requests to simulate browser access requests. (Data encryption, more secure compared with HTTP.)
- **TCP**: Detect whether the server port is alive by sending SYN handshake messages.
- **GRPC**: Check whether the server application is healthy by sending a POST or GET request.
- **GRPCS**: Check whether the server application is healthy by sending a POST or GET request.
                     * @return HealthCheckProtocol Health check protocol. Valid values:
- **HTTP** (default): Check whether the server application is healthy by sending HEAD or GET requests to simulate browser access requests.
- **HTTPS**: Check whether the server application is healthy by sending HEAD or GET requests to simulate browser access requests. (Data encryption, more secure compared with HTTP.)
- **TCP**: Detect whether the server port is alive by sending SYN handshake messages.
- **GRPC**: Check whether the server application is healthy by sending a POST or GET request.
- **GRPCS**: Check whether the server application is healthy by sending a POST or GET request.
                     * 
                     */
                    std::string GetHealthCheckProtocol() const;

                    /**
                     * 设置Health check protocol. Valid values:
- **HTTP** (default): Check whether the server application is healthy by sending HEAD or GET requests to simulate browser access requests.
- **HTTPS**: Check whether the server application is healthy by sending HEAD or GET requests to simulate browser access requests. (Data encryption, more secure compared with HTTP.)
- **TCP**: Detect whether the server port is alive by sending SYN handshake messages.
- **GRPC**: Check whether the server application is healthy by sending a POST or GET request.
- **GRPCS**: Check whether the server application is healthy by sending a POST or GET request.
                     * @param _healthCheckProtocol Health check protocol. Valid values:
- **HTTP** (default): Check whether the server application is healthy by sending HEAD or GET requests to simulate browser access requests.
- **HTTPS**: Check whether the server application is healthy by sending HEAD or GET requests to simulate browser access requests. (Data encryption, more secure compared with HTTP.)
- **TCP**: Detect whether the server port is alive by sending SYN handshake messages.
- **GRPC**: Check whether the server application is healthy by sending a POST or GET request.
- **GRPCS**: Check whether the server application is healthy by sending a POST or GET request.
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
                     * 获取Health check template name. It must be 1-255 characters long and can contain digits, upper- and lower-case letters, Chinese characters, half-width periods (.), underscores (_), and dashes (-).
                     * @return HealthCheckTemplateName Health check template name. It must be 1-255 characters long and can contain digits, upper- and lower-case letters, Chinese characters, half-width periods (.), underscores (_), and dashes (-).
                     * 
                     */
                    std::string GetHealthCheckTemplateName() const;

                    /**
                     * 设置Health check template name. It must be 1-255 characters long and can contain digits, upper- and lower-case letters, Chinese characters, half-width periods (.), underscores (_), and dashes (-).
                     * @param _healthCheckTemplateName Health check template name. It must be 1-255 characters long and can contain digits, upper- and lower-case letters, Chinese characters, half-width periods (.), underscores (_), and dashes (-).
                     * 
                     */
                    void SetHealthCheckTemplateName(const std::string& _healthCheckTemplateName);

                    /**
                     * 判断参数 HealthCheckTemplateName 是否已赋值
                     * @return HealthCheckTemplateName 是否已赋值
                     * 
                     */
                    bool HealthCheckTemplateNameHasBeenSet() const;

                    /**
                     * 获取timeout period for the health check. Unit: seconds.
Valid values: **2**-**60**.
Default value: **2**.
                     * @return HealthCheckTimeout timeout period for the health check. Unit: seconds.
Valid values: **2**-**60**.
Default value: **2**.
                     * 
                     */
                    uint64_t GetHealthCheckTimeout() const;

                    /**
                     * 设置timeout period for the health check. Unit: seconds.
Valid values: **2**-**60**.
Default value: **2**.
                     * @param _healthCheckTimeout timeout period for the health check. Unit: seconds.
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
                     * 获取Threshold for determining an unhealthy backend service. The backend service status changes from healthy to unhealthy after the health check fails consecutively for this number of times.
Value range: **2**-**10**.
Default value: **2**.
                     * @return HealthCheckUnhealthyThreshold Threshold for determining an unhealthy backend service. The backend service status changes from healthy to unhealthy after the health check fails consecutively for this number of times.
Value range: **2**-**10**.
Default value: **2**.
                     * 
                     */
                    uint64_t GetHealthCheckUnhealthyThreshold() const;

                    /**
                     * 设置Threshold for determining an unhealthy backend service. The backend service status changes from healthy to unhealthy after the health check fails consecutively for this number of times.
Value range: **2**-**10**.
Default value: **2**.
                     * @param _healthCheckUnhealthyThreshold Threshold for determining an unhealthy backend service. The backend service status changes from healthy to unhealthy after the health check fails consecutively for this number of times.
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

                    /**
                     * 获取Tag.
                     * @return Tags Tag.
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置Tag.
                     * @param _tags Tag.
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Whether to preview this request.
- **false** (default): Send a normal request to directly modify the health check template.
- **true**: Send a preview request to check whether the parameters, format, and service limits of the health check template to modify meet the requirements.
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * Health check status code. Value:
- When the health check protocol is **HTTP/HTTPS**:
	- **http_1xx**
	- **http_2xx** (default value)
	-  **http_3xx**
	-  **http_4xx**
	-  **http_5xx**
- When the health check protocol is **GRPC/GRPCS**: the default value is **12**, the value range is **0-99**, and the input value can be a numerical value, multiple values, a range, or a composite, for example:
	- **"20"**
	- **"0-99"**
                     */
                    std::vector<std::string> m_healthCheckCodes;
                    bool m_healthCheckCodesHasBeenSet;

                    /**
                     * Threshold for determining backend service health. After the health check succeeds consecutively for this number of times, the backend service status changes from **unhealthy** to **healthy**.
Value range: **2**-**10**.
Default value: **2**.
                     */
                    uint64_t m_healthCheckHealthyThreshold;
                    bool m_healthCheckHealthyThresholdHasBeenSet;

                    /**
                     * Health check domain name.
Length limit: **1–255** characters.
It can contain lowercase letters, digits, dashes (-), and half-width periods (.).

> This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP/HTTPS/GRPC/GRPCS**.
                     */
                    std::string m_healthCheckHost;
                    bool m_healthCheckHostHasBeenSet;

                    /**
                     * HTTP version for health check. Value:
- **HTTP1.1** (default)
- **HTTP1.0** 
> This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP** or **HTTPS**.
                     */
                    std::string m_healthCheckHttpVersion;
                    bool m_healthCheckHttpVersionHasBeenSet;

                    /**
                     * The interval of health check. Unit: second. Value range: **2**-**300**. Default value: **5**.
                     */
                    uint64_t m_healthCheckInterval;
                    bool m_healthCheckIntervalHasBeenSet;

                    /**
                     * Health check method. Valid values: - **GET** - **HEAD** (default value) 
> This parameter takes effect only when **HealthCheckProtocol** is set to **HTTP** or **HTTPS**.
                     */
                    std::string m_healthCheckMethod;
                    bool m_healthCheckMethodHasBeenSet;

                    /**
                     * Forwarding rule path for health check. Length: **1-80** characters. Only can use letters, numbers, characters `-/.%?#&=` as well as extended characters `_;~!（)*[]@$^:',+`. The URL must start with a forward slash (/). 
> The forwarding rule path parameter takes effect only when **HealthCheckProtocol** is **HTTP/HTTPS/GRPC/GRPCS**.
                     */
                    std::string m_healthCheckPath;
                    bool m_healthCheckPathHasBeenSet;

                    /**
                     * Health check access to the backend server port. Value range: **0-65535**. Default value: **0**, which means the backend server port.
                     */
                    uint64_t m_healthCheckPort;
                    bool m_healthCheckPortHasBeenSet;

                    /**
                     * Health check protocol. Valid values:
- **HTTP** (default): Check whether the server application is healthy by sending HEAD or GET requests to simulate browser access requests.
- **HTTPS**: Check whether the server application is healthy by sending HEAD or GET requests to simulate browser access requests. (Data encryption, more secure compared with HTTP.)
- **TCP**: Detect whether the server port is alive by sending SYN handshake messages.
- **GRPC**: Check whether the server application is healthy by sending a POST or GET request.
- **GRPCS**: Check whether the server application is healthy by sending a POST or GET request.
                     */
                    std::string m_healthCheckProtocol;
                    bool m_healthCheckProtocolHasBeenSet;

                    /**
                     * Health check template name. It must be 1-255 characters long and can contain digits, upper- and lower-case letters, Chinese characters, half-width periods (.), underscores (_), and dashes (-).
                     */
                    std::string m_healthCheckTemplateName;
                    bool m_healthCheckTemplateNameHasBeenSet;

                    /**
                     * timeout period for the health check. Unit: seconds.
Valid values: **2**-**60**.
Default value: **2**.
                     */
                    uint64_t m_healthCheckTimeout;
                    bool m_healthCheckTimeoutHasBeenSet;

                    /**
                     * Threshold for determining an unhealthy backend service. The backend service status changes from healthy to unhealthy after the health check fails consecutively for this number of times.
Value range: **2**-**10**.
Default value: **2**.
                     */
                    uint64_t m_healthCheckUnhealthyThreshold;
                    bool m_healthCheckUnhealthyThresholdHasBeenSet;

                    /**
                     * Tag.
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_CREATEHEALTHCHECKTEMPLATEREQUEST_H_
