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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_ENDPOINTGROUPCONFIGURATION_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_ENDPOINTGROUPCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ga2/v20250115/model/EndpointConfigurations.h>
#include <tencentcloud/ga2/v20250115/model/PortOverride.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * Terminal node group configuration
                */
                class EndpointGroupConfiguration : public AbstractModel
                {
                public:
                    EndpointGroupConfiguration();
                    ~EndpointGroupConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Terminal node group name.</p><p>Parameter format: starting with a letter or Chinese characters, 2–128 characters in length, supporting letters, digits, Chinese characters, . - _</p>
                     * @return Name <p>Terminal node group name.</p><p>Parameter format: starting with a letter or Chinese characters, 2–128 characters in length, supporting letters, digits, Chinese characters, . - _</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Terminal node group name.</p><p>Parameter format: starting with a letter or Chinese characters, 2–128 characters in length, supporting letters, digits, Chinese characters, . - _</p>
                     * @param _name <p>Terminal node group name.</p><p>Parameter format: starting with a letter or Chinese characters, 2–128 characters in length, supporting letters, digits, Chinese characters, . - _</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Region of the terminal node group.</p>
                     * @return EndpointGroupRegion <p>Region of the terminal node group.</p>
                     * 
                     */
                    std::string GetEndpointGroupRegion() const;

                    /**
                     * 设置<p>Region of the terminal node group.</p>
                     * @param _endpointGroupRegion <p>Region of the terminal node group.</p>
                     * 
                     */
                    void SetEndpointGroupRegion(const std::string& _endpointGroupRegion);

                    /**
                     * 判断参数 EndpointGroupRegion 是否已赋值
                     * @return EndpointGroupRegion 是否已赋值
                     * 
                     */
                    bool EndpointGroupRegionHasBeenSet() const;

                    /**
                     * 获取<p>Terminal node configuration.</p>
                     * @return EndpointConfigurations <p>Terminal node configuration.</p>
                     * 
                     */
                    std::vector<EndpointConfigurations> GetEndpointConfigurations() const;

                    /**
                     * 设置<p>Terminal node configuration.</p>
                     * @param _endpointConfigurations <p>Terminal node configuration.</p>
                     * 
                     */
                    void SetEndpointConfigurations(const std::vector<EndpointConfigurations>& _endpointConfigurations);

                    /**
                     * 判断参数 EndpointConfigurations 是否已赋值
                     * @return EndpointConfigurations 是否已赋值
                     * 
                     */
                    bool EndpointConfigurationsHasBeenSet() const;

                    /**
                     * 获取<p>Check protocol. Supports configuration of 'TCP', 'HTTP', 'PING', and 'CUSTOM'.</p><p>Enumeration values:</p><ul><li>TCP: When the CLB listener protocol where the terminal node group resides is TCP, choose TCP as the check protocol.</li><li>HTTP: When the CLB listener protocol where the terminal node group resides is HTTP or HTTPS, choose HTTP as the check protocol.</li><li>PING: When the CLB listener protocol where the terminal node group resides is UDP, choose PING as the check protocol.</li><li>CUSTOM: When the CLB listener protocol where the terminal node group resides is UDP or TCP, choose CUSTOM as the check protocol.</li></ul><p>This field is required when health check is enabled.</p>
                     * @return CheckType <p>Check protocol. Supports configuration of 'TCP', 'HTTP', 'PING', and 'CUSTOM'.</p><p>Enumeration values:</p><ul><li>TCP: When the CLB listener protocol where the terminal node group resides is TCP, choose TCP as the check protocol.</li><li>HTTP: When the CLB listener protocol where the terminal node group resides is HTTP or HTTPS, choose HTTP as the check protocol.</li><li>PING: When the CLB listener protocol where the terminal node group resides is UDP, choose PING as the check protocol.</li><li>CUSTOM: When the CLB listener protocol where the terminal node group resides is UDP or TCP, choose CUSTOM as the check protocol.</li></ul><p>This field is required when health check is enabled.</p>
                     * 
                     */
                    std::string GetCheckType() const;

                    /**
                     * 设置<p>Check protocol. Supports configuration of 'TCP', 'HTTP', 'PING', and 'CUSTOM'.</p><p>Enumeration values:</p><ul><li>TCP: When the CLB listener protocol where the terminal node group resides is TCP, choose TCP as the check protocol.</li><li>HTTP: When the CLB listener protocol where the terminal node group resides is HTTP or HTTPS, choose HTTP as the check protocol.</li><li>PING: When the CLB listener protocol where the terminal node group resides is UDP, choose PING as the check protocol.</li><li>CUSTOM: When the CLB listener protocol where the terminal node group resides is UDP or TCP, choose CUSTOM as the check protocol.</li></ul><p>This field is required when health check is enabled.</p>
                     * @param _checkType <p>Check protocol. Supports configuration of 'TCP', 'HTTP', 'PING', and 'CUSTOM'.</p><p>Enumeration values:</p><ul><li>TCP: When the CLB listener protocol where the terminal node group resides is TCP, choose TCP as the check protocol.</li><li>HTTP: When the CLB listener protocol where the terminal node group resides is HTTP or HTTPS, choose HTTP as the check protocol.</li><li>PING: When the CLB listener protocol where the terminal node group resides is UDP, choose PING as the check protocol.</li><li>CUSTOM: When the CLB listener protocol where the terminal node group resides is UDP or TCP, choose CUSTOM as the check protocol.</li></ul><p>This field is required when health check is enabled.</p>
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
                     * 获取<p>Description.</p><p>Default value: empty by default, representing no configuration description.</p><p>Maximum length: 100 bytes.</p>
                     * @return Description <p>Description.</p><p>Default value: empty by default, representing no configuration description.</p><p>Maximum length: 100 bytes.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description.</p><p>Default value: empty by default, representing no configuration description.</p><p>Maximum length: 100 bytes.</p>
                     * @param _description <p>Description.</p><p>Default value: empty by default, representing no configuration description.</p><p>Maximum length: 100 bytes.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Check port.</p><p>Input limit: range 1-65535.</p><p>This field is required when CheckType is CUSTOM.</p>
                     * @return CheckPort <p>Check port.</p><p>Input limit: range 1-65535.</p><p>This field is required when CheckType is CUSTOM.</p>
                     * 
                     */
                    std::string GetCheckPort() const;

                    /**
                     * 设置<p>Check port.</p><p>Input limit: range 1-65535.</p><p>This field is required when CheckType is CUSTOM.</p>
                     * @param _checkPort <p>Check port.</p><p>Input limit: range 1-65535.</p><p>This field is required when CheckType is CUSTOM.</p>
                     * 
                     */
                    void SetCheckPort(const std::string& _checkPort);

                    /**
                     * 判断参数 CheckPort 是否已赋值
                     * @return CheckPort 是否已赋值
                     * 
                     */
                    bool CheckPortHasBeenSet() const;

                    /**
                     * 获取<p>Check content. Supports configuration 'TEXT'.</p><p>Enumeration values:</p><ul><li>TEXT: Text content.</li></ul><p>This field is required when CheckType is CUSTOM.</p>
                     * @return ContextType <p>Check content. Supports configuration 'TEXT'.</p><p>Enumeration values:</p><ul><li>TEXT: Text content.</li></ul><p>This field is required when CheckType is CUSTOM.</p>
                     * 
                     */
                    std::string GetContextType() const;

                    /**
                     * 设置<p>Check content. Supports configuration 'TEXT'.</p><p>Enumeration values:</p><ul><li>TEXT: Text content.</li></ul><p>This field is required when CheckType is CUSTOM.</p>
                     * @param _contextType <p>Check content. Supports configuration 'TEXT'.</p><p>Enumeration values:</p><ul><li>TEXT: Text content.</li></ul><p>This field is required when CheckType is CUSTOM.</p>
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
                     * 获取<p>Check request.</p><p>Input parameter limit: The byte length must be within 1-500.</p><p>This field is required when CheckType is CUSTOM.</p>
                     * @return CheckSendContext <p>Check request.</p><p>Input parameter limit: The byte length must be within 1-500.</p><p>This field is required when CheckType is CUSTOM.</p>
                     * 
                     */
                    std::string GetCheckSendContext() const;

                    /**
                     * 设置<p>Check request.</p><p>Input parameter limit: The byte length must be within 1-500.</p><p>This field is required when CheckType is CUSTOM.</p>
                     * @param _checkSendContext <p>Check request.</p><p>Input parameter limit: The byte length must be within 1-500.</p><p>This field is required when CheckType is CUSTOM.</p>
                     * 
                     */
                    void SetCheckSendContext(const std::string& _checkSendContext);

                    /**
                     * 判断参数 CheckSendContext 是否已赋值
                     * @return CheckSendContext 是否已赋值
                     * 
                     */
                    bool CheckSendContextHasBeenSet() const;

                    /**
                     * 获取<p>Check returned results.</p><p>Input parameter limit: The byte length must be within 1-500.</p><p>When CheckType is CUSTOM, this field is required.</p>
                     * @return CheckRecvContext <p>Check returned results.</p><p>Input parameter limit: The byte length must be within 1-500.</p><p>When CheckType is CUSTOM, this field is required.</p>
                     * 
                     */
                    std::string GetCheckRecvContext() const;

                    /**
                     * 设置<p>Check returned results.</p><p>Input parameter limit: The byte length must be within 1-500.</p><p>When CheckType is CUSTOM, this field is required.</p>
                     * @param _checkRecvContext <p>Check returned results.</p><p>Input parameter limit: The byte length must be within 1-500.</p><p>When CheckType is CUSTOM, this field is required.</p>
                     * 
                     */
                    void SetCheckRecvContext(const std::string& _checkRecvContext);

                    /**
                     * 判断参数 CheckRecvContext 是否已赋值
                     * @return CheckRecvContext 是否已赋值
                     * 
                     */
                    bool CheckRecvContextHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable health check.</p><p>Default value: False</p>
                     * @return EnableHealthCheck <p>Whether to enable health check.</p><p>Default value: False</p>
                     * 
                     */
                    bool GetEnableHealthCheck() const;

                    /**
                     * 设置<p>Whether to enable health check.</p><p>Default value: False</p>
                     * @param _enableHealthCheck <p>Whether to enable health check.</p><p>Default value: False</p>
                     * 
                     */
                    void SetEnableHealthCheck(const bool& _enableHealthCheck);

                    /**
                     * 判断参数 EnableHealthCheck 是否已赋值
                     * @return EnableHealthCheck 是否已赋值
                     * 
                     */
                    bool EnableHealthCheckHasBeenSet() const;

                    /**
                     * 获取<p>Response timeout.</p><p>Value range: [1, 100]</p><p>Default value: 2</p><p>This field is required when health check is enabled.</p>
                     * @return ConnectTimeout <p>Response timeout.</p><p>Value range: [1, 100]</p><p>Default value: 2</p><p>This field is required when health check is enabled.</p>
                     * 
                     */
                    uint64_t GetConnectTimeout() const;

                    /**
                     * 设置<p>Response timeout.</p><p>Value range: [1, 100]</p><p>Default value: 2</p><p>This field is required when health check is enabled.</p>
                     * @param _connectTimeout <p>Response timeout.</p><p>Value range: [1, 100]</p><p>Default value: 2</p><p>This field is required when health check is enabled.</p>
                     * 
                     */
                    void SetConnectTimeout(const uint64_t& _connectTimeout);

                    /**
                     * 判断参数 ConnectTimeout 是否已赋值
                     * @return ConnectTimeout 是否已赋值
                     * 
                     */
                    bool ConnectTimeoutHasBeenSet() const;

                    /**
                     * 获取<p>Health check interval.</p><p>Value range: [5, 300].</p><p>Default value: 30.</p><p>This field is required when health check is enabled.</p>
                     * @return HealthCheckInterval <p>Health check interval.</p><p>Value range: [5, 300].</p><p>Default value: 30.</p><p>This field is required when health check is enabled.</p>
                     * 
                     */
                    uint64_t GetHealthCheckInterval() const;

                    /**
                     * 设置<p>Health check interval.</p><p>Value range: [5, 300].</p><p>Default value: 30.</p><p>This field is required when health check is enabled.</p>
                     * @param _healthCheckInterval <p>Health check interval.</p><p>Value range: [5, 300].</p><p>Default value: 30.</p><p>This field is required when health check is enabled.</p>
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
                     * 获取<p>Unhealthy threshold.</p><p>Value range: [1, 10]</p><p>Default value: 3</p><p>This field is required when health check is enabled.</p>
                     * @return UnhealthyThreshold <p>Unhealthy threshold.</p><p>Value range: [1, 10]</p><p>Default value: 3</p><p>This field is required when health check is enabled.</p>
                     * 
                     */
                    uint64_t GetUnhealthyThreshold() const;

                    /**
                     * 设置<p>Unhealthy threshold.</p><p>Value range: [1, 10]</p><p>Default value: 3</p><p>This field is required when health check is enabled.</p>
                     * @param _unhealthyThreshold <p>Unhealthy threshold.</p><p>Value range: [1, 10]</p><p>Default value: 3</p><p>This field is required when health check is enabled.</p>
                     * 
                     */
                    void SetUnhealthyThreshold(const uint64_t& _unhealthyThreshold);

                    /**
                     * 判断参数 UnhealthyThreshold 是否已赋值
                     * @return UnhealthyThreshold 是否已赋值
                     * 
                     */
                    bool UnhealthyThresholdHasBeenSet() const;

                    /**
                     * 获取<p>Health threshold.</p><p>Value range: [1, 10]</p><p>Default value: 3</p><p>This field is required when health check is enabled.</p>
                     * @return HealthyThreshold <p>Health threshold.</p><p>Value range: [1, 10]</p><p>Default value: 3</p><p>This field is required when health check is enabled.</p>
                     * 
                     */
                    uint64_t GetHealthyThreshold() const;

                    /**
                     * 设置<p>Health threshold.</p><p>Value range: [1, 10]</p><p>Default value: 3</p><p>This field is required when health check is enabled.</p>
                     * @param _healthyThreshold <p>Health threshold.</p><p>Value range: [1, 10]</p><p>Default value: 3</p><p>This field is required when health check is enabled.</p>
                     * 
                     */
                    void SetHealthyThreshold(const uint64_t& _healthyThreshold);

                    /**
                     * 判断参数 HealthyThreshold 是否已赋值
                     * @return HealthyThreshold 是否已赋值
                     * 
                     */
                    bool HealthyThresholdHasBeenSet() const;

                    /**
                     * 获取<p>Origin-pull protocol. HTTP and HTTPS can be configured.</p><p>Enumeration values:</p><ul><li>HTTP: HTTP origin-pull. HTTP can be configured when the listener protocol where the terminal node group resides is HTTP or HTTPS.</li><li>HTTPS: HTTPS origin-pull. HTTPS can be configured when the listener protocol where the terminal node group resides is HTTPS.</li></ul><p>This field is required when the listener protocol where the terminal node group resides is HTTP or HTTPS.</p>
                     * @return ForwardProtocol <p>Origin-pull protocol. HTTP and HTTPS can be configured.</p><p>Enumeration values:</p><ul><li>HTTP: HTTP origin-pull. HTTP can be configured when the listener protocol where the terminal node group resides is HTTP or HTTPS.</li><li>HTTPS: HTTPS origin-pull. HTTPS can be configured when the listener protocol where the terminal node group resides is HTTPS.</li></ul><p>This field is required when the listener protocol where the terminal node group resides is HTTP or HTTPS.</p>
                     * 
                     */
                    std::string GetForwardProtocol() const;

                    /**
                     * 设置<p>Origin-pull protocol. HTTP and HTTPS can be configured.</p><p>Enumeration values:</p><ul><li>HTTP: HTTP origin-pull. HTTP can be configured when the listener protocol where the terminal node group resides is HTTP or HTTPS.</li><li>HTTPS: HTTPS origin-pull. HTTPS can be configured when the listener protocol where the terminal node group resides is HTTPS.</li></ul><p>This field is required when the listener protocol where the terminal node group resides is HTTP or HTTPS.</p>
                     * @param _forwardProtocol <p>Origin-pull protocol. HTTP and HTTPS can be configured.</p><p>Enumeration values:</p><ul><li>HTTP: HTTP origin-pull. HTTP can be configured when the listener protocol where the terminal node group resides is HTTP or HTTPS.</li><li>HTTPS: HTTPS origin-pull. HTTPS can be configured when the listener protocol where the terminal node group resides is HTTPS.</li></ul><p>This field is required when the listener protocol where the terminal node group resides is HTTP or HTTPS.</p>
                     * 
                     */
                    void SetForwardProtocol(const std::string& _forwardProtocol);

                    /**
                     * 判断参数 ForwardProtocol 是否已赋值
                     * @return ForwardProtocol 是否已赋值
                     * 
                     */
                    bool ForwardProtocolHasBeenSet() const;

                    /**
                     * 获取<p>Check domain name.</p><p>Input parameter limit: The byte length range is 3-80.</p><p>This field is required when CheckType is HTTP.</p>
                     * @return CheckDomain <p>Check domain name.</p><p>Input parameter limit: The byte length range is 3-80.</p><p>This field is required when CheckType is HTTP.</p>
                     * 
                     */
                    std::string GetCheckDomain() const;

                    /**
                     * 设置<p>Check domain name.</p><p>Input parameter limit: The byte length range is 3-80.</p><p>This field is required when CheckType is HTTP.</p>
                     * @param _checkDomain <p>Check domain name.</p><p>Input parameter limit: The byte length range is 3-80.</p><p>This field is required when CheckType is HTTP.</p>
                     * 
                     */
                    void SetCheckDomain(const std::string& _checkDomain);

                    /**
                     * 判断参数 CheckDomain 是否已赋值
                     * @return CheckDomain 是否已赋值
                     * 
                     */
                    bool CheckDomainHasBeenSet() const;

                    /**
                     * 获取<p>Check the URL.</p><p>Parameter format: must match the regular expression: ^[a-zA-Z0-9_.\-\/]{1,80}$</p><p>This field is required when CheckType is HTTP.</p>
                     * @return CheckPath <p>Check the URL.</p><p>Parameter format: must match the regular expression: ^[a-zA-Z0-9_.\-\/]{1,80}$</p><p>This field is required when CheckType is HTTP.</p>
                     * 
                     */
                    std::string GetCheckPath() const;

                    /**
                     * 设置<p>Check the URL.</p><p>Parameter format: must match the regular expression: ^[a-zA-Z0-9_.\-\/]{1,80}$</p><p>This field is required when CheckType is HTTP.</p>
                     * @param _checkPath <p>Check the URL.</p><p>Parameter format: must match the regular expression: ^[a-zA-Z0-9_.\-\/]{1,80}$</p><p>This field is required when CheckType is HTTP.</p>
                     * 
                     */
                    void SetCheckPath(const std::string& _checkPath);

                    /**
                     * 判断参数 CheckPath 是否已赋值
                     * @return CheckPath 是否已赋值
                     * 
                     */
                    bool CheckPathHasBeenSet() const;

                    /**
                     * 获取<p>Request method. Supports configuration of 'GET' and 'HEAD'.</p><p>Enumeration values:</p><ul><li>GET: The request method is GET.</li><li>HEAD: The request method is HEAD.</li></ul><p>When CheckType is HTTP, this field is required.</p>
                     * @return CheckMethod <p>Request method. Supports configuration of 'GET' and 'HEAD'.</p><p>Enumeration values:</p><ul><li>GET: The request method is GET.</li><li>HEAD: The request method is HEAD.</li></ul><p>When CheckType is HTTP, this field is required.</p>
                     * 
                     */
                    std::string GetCheckMethod() const;

                    /**
                     * 设置<p>Request method. Supports configuration of 'GET' and 'HEAD'.</p><p>Enumeration values:</p><ul><li>GET: The request method is GET.</li><li>HEAD: The request method is HEAD.</li></ul><p>When CheckType is HTTP, this field is required.</p>
                     * @param _checkMethod <p>Request method. Supports configuration of 'GET' and 'HEAD'.</p><p>Enumeration values:</p><ul><li>GET: The request method is GET.</li><li>HEAD: The request method is HEAD.</li></ul><p>When CheckType is HTTP, this field is required.</p>
                     * 
                     */
                    void SetCheckMethod(const std::string& _checkMethod);

                    /**
                     * 判断参数 CheckMethod 是否已赋值
                     * @return CheckMethod 是否已赋值
                     * 
                     */
                    bool CheckMethodHasBeenSet() const;

                    /**
                     * 获取<p>Status check code. Supports configuring 'http_2xx', 'http_3xx', 'http_4xx', 'http_5xx'.</p><p>Enumeration values:</p><ul><li>http_2xx: HTTP codes beginning with 2.</li><li>http_3xx: HTTP codes beginning with 3.</li><li>http_4xx: HTTP codes beginning with 4.</li><li>http_5xx: HTTP codes beginning with 5.</li></ul><p>This field is required when CheckType is HTTP.</p>
                     * @return StatusMask <p>Status check code. Supports configuring 'http_2xx', 'http_3xx', 'http_4xx', 'http_5xx'.</p><p>Enumeration values:</p><ul><li>http_2xx: HTTP codes beginning with 2.</li><li>http_3xx: HTTP codes beginning with 3.</li><li>http_4xx: HTTP codes beginning with 4.</li><li>http_5xx: HTTP codes beginning with 5.</li></ul><p>This field is required when CheckType is HTTP.</p>
                     * 
                     */
                    std::vector<std::string> GetStatusMask() const;

                    /**
                     * 设置<p>Status check code. Supports configuring 'http_2xx', 'http_3xx', 'http_4xx', 'http_5xx'.</p><p>Enumeration values:</p><ul><li>http_2xx: HTTP codes beginning with 2.</li><li>http_3xx: HTTP codes beginning with 3.</li><li>http_4xx: HTTP codes beginning with 4.</li><li>http_5xx: HTTP codes beginning with 5.</li></ul><p>This field is required when CheckType is HTTP.</p>
                     * @param _statusMask <p>Status check code. Supports configuring 'http_2xx', 'http_3xx', 'http_4xx', 'http_5xx'.</p><p>Enumeration values:</p><ul><li>http_2xx: HTTP codes beginning with 2.</li><li>http_3xx: HTTP codes beginning with 3.</li><li>http_4xx: HTTP codes beginning with 4.</li><li>http_5xx: HTTP codes beginning with 5.</li></ul><p>This field is required when CheckType is HTTP.</p>
                     * 
                     */
                    void SetStatusMask(const std::vector<std::string>& _statusMask);

                    /**
                     * 判断参数 StatusMask 是否已赋值
                     * @return StatusMask 是否已赋值
                     * 
                     */
                    bool StatusMaskHasBeenSet() const;

                    /**
                     * 获取<p>Port mapping.</p><p>Input limits: Layer 7 supports 1 port mapping, and Layer 4 supports up to 30 port mappings.</p>
                     * @return PortOverrides <p>Port mapping.</p><p>Input limits: Layer 7 supports 1 port mapping, and Layer 4 supports up to 30 port mappings.</p>
                     * 
                     */
                    std::vector<PortOverride> GetPortOverrides() const;

                    /**
                     * 设置<p>Port mapping.</p><p>Input limits: Layer 7 supports 1 port mapping, and Layer 4 supports up to 30 port mappings.</p>
                     * @param _portOverrides <p>Port mapping.</p><p>Input limits: Layer 7 supports 1 port mapping, and Layer 4 supports up to 30 port mappings.</p>
                     * 
                     */
                    void SetPortOverrides(const std::vector<PortOverride>& _portOverrides);

                    /**
                     * 判断参数 PortOverrides 是否已赋值
                     * @return PortOverrides 是否已赋值
                     * 
                     */
                    bool PortOverridesHasBeenSet() const;

                    /**
                     * 获取<p>Operator type. Supports configuration 'CMCC', 'CTCC', 'CUCC'.</p><p>Enumeration values:</p><ul><li>CMCC: China Mobile</li><li>CUCC: China Unicom</li><li>CTCC: China Telecom</li></ul><p>This field is required when the terminal node group region is a triple-network region.</p>
                     * @return IspType <p>Operator type. Supports configuration 'CMCC', 'CTCC', 'CUCC'.</p><p>Enumeration values:</p><ul><li>CMCC: China Mobile</li><li>CUCC: China Unicom</li><li>CTCC: China Telecom</li></ul><p>This field is required when the terminal node group region is a triple-network region.</p>
                     * 
                     */
                    std::string GetIspType() const;

                    /**
                     * 设置<p>Operator type. Supports configuration 'CMCC', 'CTCC', 'CUCC'.</p><p>Enumeration values:</p><ul><li>CMCC: China Mobile</li><li>CUCC: China Unicom</li><li>CTCC: China Telecom</li></ul><p>This field is required when the terminal node group region is a triple-network region.</p>
                     * @param _ispType <p>Operator type. Supports configuration 'CMCC', 'CTCC', 'CUCC'.</p><p>Enumeration values:</p><ul><li>CMCC: China Mobile</li><li>CUCC: China Unicom</li><li>CTCC: China Telecom</li></ul><p>This field is required when the terminal node group region is a triple-network region.</p>
                     * 
                     */
                    void SetIspType(const std::string& _ispType);

                    /**
                     * 判断参数 IspType 是否已赋值
                     * @return IspType 是否已赋值
                     * 
                     */
                    bool IspTypeHasBeenSet() const;

                    /**
                     * 获取<p>HPPTS encryption algorithm suite; supports configuration 'tls_policy_1.0-2', 'tls_policy_1.1-2', 'tls_policy_1.2', 'tls_policy_1.2_strict', 'tls_policy_1.2_strict-1.3';</p><p>Enumeration values:</p><ul><li>tls_policy_1.0-2: encryption algorithm suite.</li><li>tls_policy_1.1-2: encryption algorithm suite.</li><li>tls_policy_1.2: encryption algorithm suite.</li><li>tls_policy_1.2_strict: encryption algorithm suite.</li><li>tls_policy_1.2_strict-1.3: encryption algorithm suite.</li></ul><p>This field is required when the origin-pull protocol is HTTPS.</p>
                     * @return CipherPolicyId <p>HPPTS encryption algorithm suite; supports configuration 'tls_policy_1.0-2', 'tls_policy_1.1-2', 'tls_policy_1.2', 'tls_policy_1.2_strict', 'tls_policy_1.2_strict-1.3';</p><p>Enumeration values:</p><ul><li>tls_policy_1.0-2: encryption algorithm suite.</li><li>tls_policy_1.1-2: encryption algorithm suite.</li><li>tls_policy_1.2: encryption algorithm suite.</li><li>tls_policy_1.2_strict: encryption algorithm suite.</li><li>tls_policy_1.2_strict-1.3: encryption algorithm suite.</li></ul><p>This field is required when the origin-pull protocol is HTTPS.</p>
                     * 
                     */
                    std::string GetCipherPolicyId() const;

                    /**
                     * 设置<p>HPPTS encryption algorithm suite; supports configuration 'tls_policy_1.0-2', 'tls_policy_1.1-2', 'tls_policy_1.2', 'tls_policy_1.2_strict', 'tls_policy_1.2_strict-1.3';</p><p>Enumeration values:</p><ul><li>tls_policy_1.0-2: encryption algorithm suite.</li><li>tls_policy_1.1-2: encryption algorithm suite.</li><li>tls_policy_1.2: encryption algorithm suite.</li><li>tls_policy_1.2_strict: encryption algorithm suite.</li><li>tls_policy_1.2_strict-1.3: encryption algorithm suite.</li></ul><p>This field is required when the origin-pull protocol is HTTPS.</p>
                     * @param _cipherPolicyId <p>HPPTS encryption algorithm suite; supports configuration 'tls_policy_1.0-2', 'tls_policy_1.1-2', 'tls_policy_1.2', 'tls_policy_1.2_strict', 'tls_policy_1.2_strict-1.3';</p><p>Enumeration values:</p><ul><li>tls_policy_1.0-2: encryption algorithm suite.</li><li>tls_policy_1.1-2: encryption algorithm suite.</li><li>tls_policy_1.2: encryption algorithm suite.</li><li>tls_policy_1.2_strict: encryption algorithm suite.</li><li>tls_policy_1.2_strict-1.3: encryption algorithm suite.</li></ul><p>This field is required when the origin-pull protocol is HTTPS.</p>
                     * 
                     */
                    void SetCipherPolicyId(const std::string& _cipherPolicyId);

                    /**
                     * 判断参数 CipherPolicyId 是否已赋值
                     * @return CipherPolicyId 是否已赋值
                     * 
                     */
                    bool CipherPolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>Origin-pull protocol. Supports configuration of 'HTTP/1.1' and 'HTTP/2'.</p><p>Enumeration values:</p><ul><li>HTTP/1.1: version HTTP/1.1</li><li>HTTP/2: version HTTP/2</li></ul><p>This field is required when the origin-pull protocol is HTTPS.</p>
                     * @return HttpVersion <p>Origin-pull protocol. Supports configuration of 'HTTP/1.1' and 'HTTP/2'.</p><p>Enumeration values:</p><ul><li>HTTP/1.1: version HTTP/1.1</li><li>HTTP/2: version HTTP/2</li></ul><p>This field is required when the origin-pull protocol is HTTPS.</p>
                     * 
                     */
                    std::string GetHttpVersion() const;

                    /**
                     * 设置<p>Origin-pull protocol. Supports configuration of 'HTTP/1.1' and 'HTTP/2'.</p><p>Enumeration values:</p><ul><li>HTTP/1.1: version HTTP/1.1</li><li>HTTP/2: version HTTP/2</li></ul><p>This field is required when the origin-pull protocol is HTTPS.</p>
                     * @param _httpVersion <p>Origin-pull protocol. Supports configuration of 'HTTP/1.1' and 'HTTP/2'.</p><p>Enumeration values:</p><ul><li>HTTP/1.1: version HTTP/1.1</li><li>HTTP/2: version HTTP/2</li></ul><p>This field is required when the origin-pull protocol is HTTPS.</p>
                     * 
                     */
                    void SetHttpVersion(const std::string& _httpVersion);

                    /**
                     * 判断参数 HttpVersion 是否已赋值
                     * @return HttpVersion 是否已赋值
                     * 
                     */
                    bool HttpVersionHasBeenSet() const;

                private:

                    /**
                     * <p>Terminal node group name.</p><p>Parameter format: starting with a letter or Chinese characters, 2–128 characters in length, supporting letters, digits, Chinese characters, . - _</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Region of the terminal node group.</p>
                     */
                    std::string m_endpointGroupRegion;
                    bool m_endpointGroupRegionHasBeenSet;

                    /**
                     * <p>Terminal node configuration.</p>
                     */
                    std::vector<EndpointConfigurations> m_endpointConfigurations;
                    bool m_endpointConfigurationsHasBeenSet;

                    /**
                     * <p>Check protocol. Supports configuration of 'TCP', 'HTTP', 'PING', and 'CUSTOM'.</p><p>Enumeration values:</p><ul><li>TCP: When the CLB listener protocol where the terminal node group resides is TCP, choose TCP as the check protocol.</li><li>HTTP: When the CLB listener protocol where the terminal node group resides is HTTP or HTTPS, choose HTTP as the check protocol.</li><li>PING: When the CLB listener protocol where the terminal node group resides is UDP, choose PING as the check protocol.</li><li>CUSTOM: When the CLB listener protocol where the terminal node group resides is UDP or TCP, choose CUSTOM as the check protocol.</li></ul><p>This field is required when health check is enabled.</p>
                     */
                    std::string m_checkType;
                    bool m_checkTypeHasBeenSet;

                    /**
                     * <p>Description.</p><p>Default value: empty by default, representing no configuration description.</p><p>Maximum length: 100 bytes.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Check port.</p><p>Input limit: range 1-65535.</p><p>This field is required when CheckType is CUSTOM.</p>
                     */
                    std::string m_checkPort;
                    bool m_checkPortHasBeenSet;

                    /**
                     * <p>Check content. Supports configuration 'TEXT'.</p><p>Enumeration values:</p><ul><li>TEXT: Text content.</li></ul><p>This field is required when CheckType is CUSTOM.</p>
                     */
                    std::string m_contextType;
                    bool m_contextTypeHasBeenSet;

                    /**
                     * <p>Check request.</p><p>Input parameter limit: The byte length must be within 1-500.</p><p>This field is required when CheckType is CUSTOM.</p>
                     */
                    std::string m_checkSendContext;
                    bool m_checkSendContextHasBeenSet;

                    /**
                     * <p>Check returned results.</p><p>Input parameter limit: The byte length must be within 1-500.</p><p>When CheckType is CUSTOM, this field is required.</p>
                     */
                    std::string m_checkRecvContext;
                    bool m_checkRecvContextHasBeenSet;

                    /**
                     * <p>Whether to enable health check.</p><p>Default value: False</p>
                     */
                    bool m_enableHealthCheck;
                    bool m_enableHealthCheckHasBeenSet;

                    /**
                     * <p>Response timeout.</p><p>Value range: [1, 100]</p><p>Default value: 2</p><p>This field is required when health check is enabled.</p>
                     */
                    uint64_t m_connectTimeout;
                    bool m_connectTimeoutHasBeenSet;

                    /**
                     * <p>Health check interval.</p><p>Value range: [5, 300].</p><p>Default value: 30.</p><p>This field is required when health check is enabled.</p>
                     */
                    uint64_t m_healthCheckInterval;
                    bool m_healthCheckIntervalHasBeenSet;

                    /**
                     * <p>Unhealthy threshold.</p><p>Value range: [1, 10]</p><p>Default value: 3</p><p>This field is required when health check is enabled.</p>
                     */
                    uint64_t m_unhealthyThreshold;
                    bool m_unhealthyThresholdHasBeenSet;

                    /**
                     * <p>Health threshold.</p><p>Value range: [1, 10]</p><p>Default value: 3</p><p>This field is required when health check is enabled.</p>
                     */
                    uint64_t m_healthyThreshold;
                    bool m_healthyThresholdHasBeenSet;

                    /**
                     * <p>Origin-pull protocol. HTTP and HTTPS can be configured.</p><p>Enumeration values:</p><ul><li>HTTP: HTTP origin-pull. HTTP can be configured when the listener protocol where the terminal node group resides is HTTP or HTTPS.</li><li>HTTPS: HTTPS origin-pull. HTTPS can be configured when the listener protocol where the terminal node group resides is HTTPS.</li></ul><p>This field is required when the listener protocol where the terminal node group resides is HTTP or HTTPS.</p>
                     */
                    std::string m_forwardProtocol;
                    bool m_forwardProtocolHasBeenSet;

                    /**
                     * <p>Check domain name.</p><p>Input parameter limit: The byte length range is 3-80.</p><p>This field is required when CheckType is HTTP.</p>
                     */
                    std::string m_checkDomain;
                    bool m_checkDomainHasBeenSet;

                    /**
                     * <p>Check the URL.</p><p>Parameter format: must match the regular expression: ^[a-zA-Z0-9_.\-\/]{1,80}$</p><p>This field is required when CheckType is HTTP.</p>
                     */
                    std::string m_checkPath;
                    bool m_checkPathHasBeenSet;

                    /**
                     * <p>Request method. Supports configuration of 'GET' and 'HEAD'.</p><p>Enumeration values:</p><ul><li>GET: The request method is GET.</li><li>HEAD: The request method is HEAD.</li></ul><p>When CheckType is HTTP, this field is required.</p>
                     */
                    std::string m_checkMethod;
                    bool m_checkMethodHasBeenSet;

                    /**
                     * <p>Status check code. Supports configuring 'http_2xx', 'http_3xx', 'http_4xx', 'http_5xx'.</p><p>Enumeration values:</p><ul><li>http_2xx: HTTP codes beginning with 2.</li><li>http_3xx: HTTP codes beginning with 3.</li><li>http_4xx: HTTP codes beginning with 4.</li><li>http_5xx: HTTP codes beginning with 5.</li></ul><p>This field is required when CheckType is HTTP.</p>
                     */
                    std::vector<std::string> m_statusMask;
                    bool m_statusMaskHasBeenSet;

                    /**
                     * <p>Port mapping.</p><p>Input limits: Layer 7 supports 1 port mapping, and Layer 4 supports up to 30 port mappings.</p>
                     */
                    std::vector<PortOverride> m_portOverrides;
                    bool m_portOverridesHasBeenSet;

                    /**
                     * <p>Operator type. Supports configuration 'CMCC', 'CTCC', 'CUCC'.</p><p>Enumeration values:</p><ul><li>CMCC: China Mobile</li><li>CUCC: China Unicom</li><li>CTCC: China Telecom</li></ul><p>This field is required when the terminal node group region is a triple-network region.</p>
                     */
                    std::string m_ispType;
                    bool m_ispTypeHasBeenSet;

                    /**
                     * <p>HPPTS encryption algorithm suite; supports configuration 'tls_policy_1.0-2', 'tls_policy_1.1-2', 'tls_policy_1.2', 'tls_policy_1.2_strict', 'tls_policy_1.2_strict-1.3';</p><p>Enumeration values:</p><ul><li>tls_policy_1.0-2: encryption algorithm suite.</li><li>tls_policy_1.1-2: encryption algorithm suite.</li><li>tls_policy_1.2: encryption algorithm suite.</li><li>tls_policy_1.2_strict: encryption algorithm suite.</li><li>tls_policy_1.2_strict-1.3: encryption algorithm suite.</li></ul><p>This field is required when the origin-pull protocol is HTTPS.</p>
                     */
                    std::string m_cipherPolicyId;
                    bool m_cipherPolicyIdHasBeenSet;

                    /**
                     * <p>Origin-pull protocol. Supports configuration of 'HTTP/1.1' and 'HTTP/2'.</p><p>Enumeration values:</p><ul><li>HTTP/1.1: version HTTP/1.1</li><li>HTTP/2: version HTTP/2</li></ul><p>This field is required when the origin-pull protocol is HTTPS.</p>
                     */
                    std::string m_httpVersion;
                    bool m_httpVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_ENDPOINTGROUPCONFIGURATION_H_
