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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYENDPOINTGROUPREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYENDPOINTGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyEndpointGroup request structure.
                */
                class ModifyEndpointGroupRequest : public AbstractModel
                {
                public:
                    ModifyEndpointGroupRequest();
                    ~ModifyEndpointGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Global acceleration instance ID.</p>
                     * @return GlobalAcceleratorId <p>Global acceleration instance ID.</p>
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置<p>Global acceleration instance ID.</p>
                     * @param _globalAcceleratorId <p>Global acceleration instance ID.</p>
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                    /**
                     * 获取<p>Listener ID.</p>
                     * @return ListenerId <p>Listener ID.</p>
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置<p>Listener ID.</p>
                     * @param _listenerId <p>Listener ID.</p>
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
                     * 获取<p>Terminal node group ID.</p>
                     * @return EndpointGroupId <p>Terminal node group ID.</p>
                     * 
                     */
                    std::string GetEndpointGroupId() const;

                    /**
                     * 设置<p>Terminal node group ID.</p>
                     * @param _endpointGroupId <p>Terminal node group ID.</p>
                     * 
                     */
                    void SetEndpointGroupId(const std::string& _endpointGroupId);

                    /**
                     * 判断参数 EndpointGroupId 是否已赋值
                     * @return EndpointGroupId 是否已赋值
                     * 
                     */
                    bool EndpointGroupIdHasBeenSet() const;

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
                     * 获取<p>Name.</p><p>Parameter format: starting with a letter or Chinese characters, 2–128 characters in length, supporting letters, digits, Chinese characters, . - _</p>
                     * @return Name <p>Name.</p><p>Parameter format: starting with a letter or Chinese characters, 2–128 characters in length, supporting letters, digits, Chinese characters, . - _</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Name.</p><p>Parameter format: starting with a letter or Chinese characters, 2–128 characters in length, supporting letters, digits, Chinese characters, . - _</p>
                     * @param _name <p>Name.</p><p>Parameter format: starting with a letter or Chinese characters, 2–128 characters in length, supporting letters, digits, Chinese characters, . - _</p>
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
                     * 获取<p>Description.</p><p>Input limit: maximum length cannot exceed 100 bytes.</p>
                     * @return Description <p>Description.</p><p>Input limit: maximum length cannot exceed 100 bytes.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description.</p><p>Input limit: maximum length cannot exceed 100 bytes.</p>
                     * @param _description <p>Description.</p><p>Input limit: maximum length cannot exceed 100 bytes.</p>
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
                     * 获取<p>Whether to enable health check.</p>
                     * @return EnableHealthCheck <p>Whether to enable health check.</p>
                     * 
                     */
                    bool GetEnableHealthCheck() const;

                    /**
                     * 设置<p>Whether to enable health check.</p>
                     * @param _enableHealthCheck <p>Whether to enable health check.</p>
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
                     * 获取<p>Response timeout.</p><p>Value range: [1, 100]</p><p>This parameter is required when health check is enabled.</p>
                     * @return ConnectTimeout <p>Response timeout.</p><p>Value range: [1, 100]</p><p>This parameter is required when health check is enabled.</p>
                     * 
                     */
                    uint64_t GetConnectTimeout() const;

                    /**
                     * 设置<p>Response timeout.</p><p>Value range: [1, 100]</p><p>This parameter is required when health check is enabled.</p>
                     * @param _connectTimeout <p>Response timeout.</p><p>Value range: [1, 100]</p><p>This parameter is required when health check is enabled.</p>
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
                     * 获取<p>Health check interval.</p><p>Value range: [5, 300].</p><p>This parameter is required when health check is enabled.</p>
                     * @return HealthCheckInterval <p>Health check interval.</p><p>Value range: [5, 300].</p><p>This parameter is required when health check is enabled.</p>
                     * 
                     */
                    uint64_t GetHealthCheckInterval() const;

                    /**
                     * 设置<p>Health check interval.</p><p>Value range: [5, 300].</p><p>This parameter is required when health check is enabled.</p>
                     * @param _healthCheckInterval <p>Health check interval.</p><p>Value range: [5, 300].</p><p>This parameter is required when health check is enabled.</p>
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
                     * 获取<p>Unhealthy threshold.</p><p>Value range: [1, 10]</p><p>This field is required when health check is enabled.</p>
                     * @return UnhealthyThreshold <p>Unhealthy threshold.</p><p>Value range: [1, 10]</p><p>This field is required when health check is enabled.</p>
                     * 
                     */
                    uint64_t GetUnhealthyThreshold() const;

                    /**
                     * 设置<p>Unhealthy threshold.</p><p>Value range: [1, 10]</p><p>This field is required when health check is enabled.</p>
                     * @param _unhealthyThreshold <p>Unhealthy threshold.</p><p>Value range: [1, 10]</p><p>This field is required when health check is enabled.</p>
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
                     * 获取<p>Health threshold.</p><p>Value range: [1, 10]</p><p>This field is required when health check is enabled.</p>
                     * @return HealthyThreshold <p>Health threshold.</p><p>Value range: [1, 10]</p><p>This field is required when health check is enabled.</p>
                     * 
                     */
                    uint64_t GetHealthyThreshold() const;

                    /**
                     * 设置<p>Health threshold.</p><p>Value range: [1, 10]</p><p>This field is required when health check is enabled.</p>
                     * @param _healthyThreshold <p>Health threshold.</p><p>Value range: [1, 10]</p><p>This field is required when health check is enabled.</p>
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
                     * 获取<p>Select the protocol.</p><p>Input parameter limits: support filling in: 'TCP', 'HTTP', 'PING', 'CUSTOM'.</p><p>1. When the listener is TCP, you can choose CUSTOM+TCP.<br>2. When the listener is UDP, you can choose PING+CUSTOM.<br>3. When the listener is HTTP or HTTPS, you can choose HTTP.</p>
                     * @return CheckType <p>Select the protocol.</p><p>Input parameter limits: support filling in: 'TCP', 'HTTP', 'PING', 'CUSTOM'.</p><p>1. When the listener is TCP, you can choose CUSTOM+TCP.<br>2. When the listener is UDP, you can choose PING+CUSTOM.<br>3. When the listener is HTTP or HTTPS, you can choose HTTP.</p>
                     * 
                     */
                    std::string GetCheckType() const;

                    /**
                     * 设置<p>Select the protocol.</p><p>Input parameter limits: support filling in: 'TCP', 'HTTP', 'PING', 'CUSTOM'.</p><p>1. When the listener is TCP, you can choose CUSTOM+TCP.<br>2. When the listener is UDP, you can choose PING+CUSTOM.<br>3. When the listener is HTTP or HTTPS, you can choose HTTP.</p>
                     * @param _checkType <p>Select the protocol.</p><p>Input parameter limits: support filling in: 'TCP', 'HTTP', 'PING', 'CUSTOM'.</p><p>1. When the listener is TCP, you can choose CUSTOM+TCP.<br>2. When the listener is UDP, you can choose PING+CUSTOM.<br>3. When the listener is HTTP or HTTPS, you can choose HTTP.</p>
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
                     * 获取<p>Check port.</p><p>Value range: [1, 65535]</p><p>This field is required when CheckType is CUSTOM.</p>
                     * @return CheckPort <p>Check port.</p><p>Value range: [1, 65535]</p><p>This field is required when CheckType is CUSTOM.</p>
                     * 
                     */
                    uint64_t GetCheckPort() const;

                    /**
                     * 设置<p>Check port.</p><p>Value range: [1, 65535]</p><p>This field is required when CheckType is CUSTOM.</p>
                     * @param _checkPort <p>Check port.</p><p>Value range: [1, 65535]</p><p>This field is required when CheckType is CUSTOM.</p>
                     * 
                     */
                    void SetCheckPort(const uint64_t& _checkPort);

                    /**
                     * 判断参数 CheckPort 是否已赋值
                     * @return CheckPort 是否已赋值
                     * 
                     */
                    bool CheckPortHasBeenSet() const;

                    /**
                     * 获取<p>Check content.</p><p>Input parameter limit: Only TEXT is supported.</p><p>This field is required when CheckType is CUSTOM.</p>
                     * @return ContextType <p>Check content.</p><p>Input parameter limit: Only TEXT is supported.</p><p>This field is required when CheckType is CUSTOM.</p>
                     * 
                     */
                    std::string GetContextType() const;

                    /**
                     * 设置<p>Check content.</p><p>Input parameter limit: Only TEXT is supported.</p><p>This field is required when CheckType is CUSTOM.</p>
                     * @param _contextType <p>Check content.</p><p>Input parameter limit: Only TEXT is supported.</p><p>This field is required when CheckType is CUSTOM.</p>
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
                     * 获取<p>Check request.</p><p>Input parameter limit: The length range is 1-500.</p><p>This field is required when CheckType is CUSTOM.</p>
                     * @return CheckSendContext <p>Check request.</p><p>Input parameter limit: The length range is 1-500.</p><p>This field is required when CheckType is CUSTOM.</p>
                     * 
                     */
                    std::string GetCheckSendContext() const;

                    /**
                     * 设置<p>Check request.</p><p>Input parameter limit: The length range is 1-500.</p><p>This field is required when CheckType is CUSTOM.</p>
                     * @param _checkSendContext <p>Check request.</p><p>Input parameter limit: The length range is 1-500.</p><p>This field is required when CheckType is CUSTOM.</p>
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
                     * 获取<p>Check returned results.</p><p>Input parameter limit: length range is 1-500.</p><p>When CheckType is CUSTOM, this field is required.</p>
                     * @return CheckRecvContext <p>Check returned results.</p><p>Input parameter limit: length range is 1-500.</p><p>When CheckType is CUSTOM, this field is required.</p>
                     * 
                     */
                    std::string GetCheckRecvContext() const;

                    /**
                     * 设置<p>Check returned results.</p><p>Input parameter limit: length range is 1-500.</p><p>When CheckType is CUSTOM, this field is required.</p>
                     * @param _checkRecvContext <p>Check returned results.</p><p>Input parameter limit: length range is 1-500.</p><p>When CheckType is CUSTOM, this field is required.</p>
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
                     * 获取<p>Check domain name.</p><p>Input parameter limit: The length range is 3-80.</p><p>This field is required when CheckType is HTTP.</p>
                     * @return CheckDomain <p>Check domain name.</p><p>Input parameter limit: The length range is 3-80.</p><p>This field is required when CheckType is HTTP.</p>
                     * 
                     */
                    std::string GetCheckDomain() const;

                    /**
                     * 设置<p>Check domain name.</p><p>Input parameter limit: The length range is 3-80.</p><p>This field is required when CheckType is HTTP.</p>
                     * @param _checkDomain <p>Check domain name.</p><p>Input parameter limit: The length range is 3-80.</p><p>This field is required when CheckType is HTTP.</p>
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
                     * 获取<p>Check the URL.</p><p>Input parameter limit: length range 3-80.</p><p>This field is required when CheckType is HTTP.</p>
                     * @return CheckPath <p>Check the URL.</p><p>Input parameter limit: length range 3-80.</p><p>This field is required when CheckType is HTTP.</p>
                     * 
                     */
                    std::string GetCheckPath() const;

                    /**
                     * 设置<p>Check the URL.</p><p>Input parameter limit: length range 3-80.</p><p>This field is required when CheckType is HTTP.</p>
                     * @param _checkPath <p>Check the URL.</p><p>Input parameter limit: length range 3-80.</p><p>This field is required when CheckType is HTTP.</p>
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
                     * 获取<p>Request method.</p><p>Input parameter limit: support filling in 'GET', 'HEAD'.</p><p>This field is required when CheckType is HTTP.</p>
                     * @return CheckMethod <p>Request method.</p><p>Input parameter limit: support filling in 'GET', 'HEAD'.</p><p>This field is required when CheckType is HTTP.</p>
                     * 
                     */
                    std::string GetCheckMethod() const;

                    /**
                     * 设置<p>Request method.</p><p>Input parameter limit: support filling in 'GET', 'HEAD'.</p><p>This field is required when CheckType is HTTP.</p>
                     * @param _checkMethod <p>Request method.</p><p>Input parameter limit: support filling in 'GET', 'HEAD'.</p><p>This field is required when CheckType is HTTP.</p>
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
                     * 获取<p>Status check code.</p><p>Input parameter limits: support selecting 'http_2xx', 'http_3xx', 'http_4xx', 'http_5xx'.</p><p>This field is required when CheckType is HTTP.</p>
                     * @return StatusMask <p>Status check code.</p><p>Input parameter limits: support selecting 'http_2xx', 'http_3xx', 'http_4xx', 'http_5xx'.</p><p>This field is required when CheckType is HTTP.</p>
                     * 
                     */
                    std::vector<std::string> GetStatusMask() const;

                    /**
                     * 设置<p>Status check code.</p><p>Input parameter limits: support selecting 'http_2xx', 'http_3xx', 'http_4xx', 'http_5xx'.</p><p>This field is required when CheckType is HTTP.</p>
                     * @param _statusMask <p>Status check code.</p><p>Input parameter limits: support selecting 'http_2xx', 'http_3xx', 'http_4xx', 'http_5xx'.</p><p>This field is required when CheckType is HTTP.</p>
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
                     * 获取<p>Origin-pull protocol.</p><p>Input parameter limits. Supported values: 'HTTP', 'HTTPS'.</p><p>When the CLB listener protocol is HTTP, only HTTP can be configured. When it is HTTPS, HTTP or HTTPS can be configured.</p>
                     * @return ForwardProtocol <p>Origin-pull protocol.</p><p>Input parameter limits. Supported values: 'HTTP', 'HTTPS'.</p><p>When the CLB listener protocol is HTTP, only HTTP can be configured. When it is HTTPS, HTTP or HTTPS can be configured.</p>
                     * 
                     */
                    std::string GetForwardProtocol() const;

                    /**
                     * 设置<p>Origin-pull protocol.</p><p>Input parameter limits. Supported values: 'HTTP', 'HTTPS'.</p><p>When the CLB listener protocol is HTTP, only HTTP can be configured. When it is HTTPS, HTTP or HTTPS can be configured.</p>
                     * @param _forwardProtocol <p>Origin-pull protocol.</p><p>Input parameter limits. Supported values: 'HTTP', 'HTTPS'.</p><p>When the CLB listener protocol is HTTP, only HTTP can be configured. When it is HTTPS, HTTP or HTTPS can be configured.</p>
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
                     * 获取<p>Port mapping.</p><p>When the CLB listener protocol is HTTP or HTTPS, one pair can be configured. When the CLB listener protocol is UDP or TCP, up to 30 pairs can be configured.</p>
                     * @return PortOverrides <p>Port mapping.</p><p>When the CLB listener protocol is HTTP or HTTPS, one pair can be configured. When the CLB listener protocol is UDP or TCP, up to 30 pairs can be configured.</p>
                     * 
                     */
                    std::vector<PortOverride> GetPortOverrides() const;

                    /**
                     * 设置<p>Port mapping.</p><p>When the CLB listener protocol is HTTP or HTTPS, one pair can be configured. When the CLB listener protocol is UDP or TCP, up to 30 pairs can be configured.</p>
                     * @param _portOverrides <p>Port mapping.</p><p>When the CLB listener protocol is HTTP or HTTPS, one pair can be configured. When the CLB listener protocol is UDP or TCP, up to 30 pairs can be configured.</p>
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
                     * 获取<p>HPPTS encryption algorithm kit</p><p>Input parameter limit: support selecting 'tls_policy_1.0-2', 'tls_policy_1.1-2', 'tls_policy_1.2', 'tls_policy_1.2_strict', 'tls_policy_1.2_strict-1.3'.</p><p>This parameter can be modified only when the CLB listener protocol is HTTPS.</p>
                     * @return CipherPolicyId <p>HPPTS encryption algorithm kit</p><p>Input parameter limit: support selecting 'tls_policy_1.0-2', 'tls_policy_1.1-2', 'tls_policy_1.2', 'tls_policy_1.2_strict', 'tls_policy_1.2_strict-1.3'.</p><p>This parameter can be modified only when the CLB listener protocol is HTTPS.</p>
                     * 
                     */
                    std::string GetCipherPolicyId() const;

                    /**
                     * 设置<p>HPPTS encryption algorithm kit</p><p>Input parameter limit: support selecting 'tls_policy_1.0-2', 'tls_policy_1.1-2', 'tls_policy_1.2', 'tls_policy_1.2_strict', 'tls_policy_1.2_strict-1.3'.</p><p>This parameter can be modified only when the CLB listener protocol is HTTPS.</p>
                     * @param _cipherPolicyId <p>HPPTS encryption algorithm kit</p><p>Input parameter limit: support selecting 'tls_policy_1.0-2', 'tls_policy_1.1-2', 'tls_policy_1.2', 'tls_policy_1.2_strict', 'tls_policy_1.2_strict-1.3'.</p><p>This parameter can be modified only when the CLB listener protocol is HTTPS.</p>
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
                     * 获取<p>Only the HTTPS back-to-source protocol supports selecting ['HTTP/1.1', 'HTTP/2']</p><p>Enumeration values:</p><ul><li>HTTP/1.1: version HTTP/1.1</li><li>HTTP/2: version HTTP/2</li></ul>
                     * @return HttpVersion <p>Only the HTTPS back-to-source protocol supports selecting ['HTTP/1.1', 'HTTP/2']</p><p>Enumeration values:</p><ul><li>HTTP/1.1: version HTTP/1.1</li><li>HTTP/2: version HTTP/2</li></ul>
                     * 
                     */
                    std::string GetHttpVersion() const;

                    /**
                     * 设置<p>Only the HTTPS back-to-source protocol supports selecting ['HTTP/1.1', 'HTTP/2']</p><p>Enumeration values:</p><ul><li>HTTP/1.1: version HTTP/1.1</li><li>HTTP/2: version HTTP/2</li></ul>
                     * @param _httpVersion <p>Only the HTTPS back-to-source protocol supports selecting ['HTTP/1.1', 'HTTP/2']</p><p>Enumeration values:</p><ul><li>HTTP/1.1: version HTTP/1.1</li><li>HTTP/2: version HTTP/2</li></ul>
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
                     * <p>Global acceleration instance ID.</p>
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * <p>Listener ID.</p>
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * <p>Terminal node group ID.</p>
                     */
                    std::string m_endpointGroupId;
                    bool m_endpointGroupIdHasBeenSet;

                    /**
                     * <p>Terminal node configuration.</p>
                     */
                    std::vector<EndpointConfigurations> m_endpointConfigurations;
                    bool m_endpointConfigurationsHasBeenSet;

                    /**
                     * <p>Name.</p><p>Parameter format: starting with a letter or Chinese characters, 2–128 characters in length, supporting letters, digits, Chinese characters, . - _</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Description.</p><p>Input limit: maximum length cannot exceed 100 bytes.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Whether to enable health check.</p>
                     */
                    bool m_enableHealthCheck;
                    bool m_enableHealthCheckHasBeenSet;

                    /**
                     * <p>Response timeout.</p><p>Value range: [1, 100]</p><p>This parameter is required when health check is enabled.</p>
                     */
                    uint64_t m_connectTimeout;
                    bool m_connectTimeoutHasBeenSet;

                    /**
                     * <p>Health check interval.</p><p>Value range: [5, 300].</p><p>This parameter is required when health check is enabled.</p>
                     */
                    uint64_t m_healthCheckInterval;
                    bool m_healthCheckIntervalHasBeenSet;

                    /**
                     * <p>Unhealthy threshold.</p><p>Value range: [1, 10]</p><p>This field is required when health check is enabled.</p>
                     */
                    uint64_t m_unhealthyThreshold;
                    bool m_unhealthyThresholdHasBeenSet;

                    /**
                     * <p>Health threshold.</p><p>Value range: [1, 10]</p><p>This field is required when health check is enabled.</p>
                     */
                    uint64_t m_healthyThreshold;
                    bool m_healthyThresholdHasBeenSet;

                    /**
                     * <p>Select the protocol.</p><p>Input parameter limits: support filling in: 'TCP', 'HTTP', 'PING', 'CUSTOM'.</p><p>1. When the listener is TCP, you can choose CUSTOM+TCP.<br>2. When the listener is UDP, you can choose PING+CUSTOM.<br>3. When the listener is HTTP or HTTPS, you can choose HTTP.</p>
                     */
                    std::string m_checkType;
                    bool m_checkTypeHasBeenSet;

                    /**
                     * <p>Check port.</p><p>Value range: [1, 65535]</p><p>This field is required when CheckType is CUSTOM.</p>
                     */
                    uint64_t m_checkPort;
                    bool m_checkPortHasBeenSet;

                    /**
                     * <p>Check content.</p><p>Input parameter limit: Only TEXT is supported.</p><p>This field is required when CheckType is CUSTOM.</p>
                     */
                    std::string m_contextType;
                    bool m_contextTypeHasBeenSet;

                    /**
                     * <p>Check request.</p><p>Input parameter limit: The length range is 1-500.</p><p>This field is required when CheckType is CUSTOM.</p>
                     */
                    std::string m_checkSendContext;
                    bool m_checkSendContextHasBeenSet;

                    /**
                     * <p>Check returned results.</p><p>Input parameter limit: length range is 1-500.</p><p>When CheckType is CUSTOM, this field is required.</p>
                     */
                    std::string m_checkRecvContext;
                    bool m_checkRecvContextHasBeenSet;

                    /**
                     * <p>Check domain name.</p><p>Input parameter limit: The length range is 3-80.</p><p>This field is required when CheckType is HTTP.</p>
                     */
                    std::string m_checkDomain;
                    bool m_checkDomainHasBeenSet;

                    /**
                     * <p>Check the URL.</p><p>Input parameter limit: length range 3-80.</p><p>This field is required when CheckType is HTTP.</p>
                     */
                    std::string m_checkPath;
                    bool m_checkPathHasBeenSet;

                    /**
                     * <p>Request method.</p><p>Input parameter limit: support filling in 'GET', 'HEAD'.</p><p>This field is required when CheckType is HTTP.</p>
                     */
                    std::string m_checkMethod;
                    bool m_checkMethodHasBeenSet;

                    /**
                     * <p>Status check code.</p><p>Input parameter limits: support selecting 'http_2xx', 'http_3xx', 'http_4xx', 'http_5xx'.</p><p>This field is required when CheckType is HTTP.</p>
                     */
                    std::vector<std::string> m_statusMask;
                    bool m_statusMaskHasBeenSet;

                    /**
                     * <p>Origin-pull protocol.</p><p>Input parameter limits. Supported values: 'HTTP', 'HTTPS'.</p><p>When the CLB listener protocol is HTTP, only HTTP can be configured. When it is HTTPS, HTTP or HTTPS can be configured.</p>
                     */
                    std::string m_forwardProtocol;
                    bool m_forwardProtocolHasBeenSet;

                    /**
                     * <p>Port mapping.</p><p>When the CLB listener protocol is HTTP or HTTPS, one pair can be configured. When the CLB listener protocol is UDP or TCP, up to 30 pairs can be configured.</p>
                     */
                    std::vector<PortOverride> m_portOverrides;
                    bool m_portOverridesHasBeenSet;

                    /**
                     * <p>HPPTS encryption algorithm kit</p><p>Input parameter limit: support selecting 'tls_policy_1.0-2', 'tls_policy_1.1-2', 'tls_policy_1.2', 'tls_policy_1.2_strict', 'tls_policy_1.2_strict-1.3'.</p><p>This parameter can be modified only when the CLB listener protocol is HTTPS.</p>
                     */
                    std::string m_cipherPolicyId;
                    bool m_cipherPolicyIdHasBeenSet;

                    /**
                     * <p>Only the HTTPS back-to-source protocol supports selecting ['HTTP/1.1', 'HTTP/2']</p><p>Enumeration values:</p><ul><li>HTTP/1.1: version HTTP/1.1</li><li>HTTP/2: version HTTP/2</li></ul>
                     */
                    std::string m_httpVersion;
                    bool m_httpVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYENDPOINTGROUPREQUEST_H_
