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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_ENDPOINTGROUPCONFIGURATIONSET_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_ENDPOINTGROUPCONFIGURATIONSET_H_

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
                * Terminal node group information
                */
                class EndpointGroupConfigurationSet : public AbstractModel
                {
                public:
                    EndpointGroupConfigurationSet();
                    ~EndpointGroupConfigurationSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>Listener instance ID.</p>
                     * @return ListenerId <p>Listener instance ID.</p>
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置<p>Listener instance ID.</p>
                     * @param _listenerId <p>Listener instance ID.</p>
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
                     * 获取<p>Name.</p>
                     * @return Name <p>Name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Name.</p>
                     * @param _name <p>Name.</p>
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
                     * 获取<p>Region.</p>
                     * @return EndpointGroupRegion <p>Region.</p>
                     * 
                     */
                    std::string GetEndpointGroupRegion() const;

                    /**
                     * 设置<p>Region.</p>
                     * @param _endpointGroupRegion <p>Region.</p>
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
                     * 获取<p>Description.</p>
                     * @return Description <p>Description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description.</p>
                     * @param _description <p>Description.</p>
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
                     * 获取<p>Endpoint information.</p>
                     * @return EndpointConfigurations <p>Endpoint information.</p>
                     * 
                     */
                    std::vector<EndpointConfigurations> GetEndpointConfigurations() const;

                    /**
                     * 设置<p>Endpoint information.</p>
                     * @param _endpointConfigurations <p>Endpoint information.</p>
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
                     * 获取<p>Response timeout.</p>
                     * @return ConnectTimeout <p>Response timeout.</p>
                     * 
                     */
                    uint64_t GetConnectTimeout() const;

                    /**
                     * 设置<p>Response timeout.</p>
                     * @param _connectTimeout <p>Response timeout.</p>
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
                     * 获取<p>Health check interval.</p>
                     * @return HealthCheckInterval <p>Health check interval.</p>
                     * 
                     */
                    uint64_t GetHealthCheckInterval() const;

                    /**
                     * 设置<p>Health check interval.</p>
                     * @param _healthCheckInterval <p>Health check interval.</p>
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
                     * 获取<p>Unhealthy threshold.</p>
                     * @return UnhealthyThreshold <p>Unhealthy threshold.</p>
                     * 
                     */
                    uint64_t GetUnhealthyThreshold() const;

                    /**
                     * 设置<p>Unhealthy threshold.</p>
                     * @param _unhealthyThreshold <p>Unhealthy threshold.</p>
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
                     * 获取<p>Health threshold.</p>
                     * @return HealthyThreshold <p>Health threshold.</p>
                     * 
                     */
                    uint64_t GetHealthyThreshold() const;

                    /**
                     * 设置<p>Health threshold.</p>
                     * @param _healthyThreshold <p>Health threshold.</p>
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
                     * 获取<p>Select the protocol.</p>
                     * @return CheckType <p>Select the protocol.</p>
                     * 
                     */
                    std::string GetCheckType() const;

                    /**
                     * 设置<p>Select the protocol.</p>
                     * @param _checkType <p>Select the protocol.</p>
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
                     * 获取<p>Check port.</p>
                     * @return CheckPort <p>Check port.</p>
                     * 
                     */
                    uint64_t GetCheckPort() const;

                    /**
                     * 设置<p>Check port.</p>
                     * @param _checkPort <p>Check port.</p>
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
                     * 获取<p>Check content.</p>
                     * @return ContextType <p>Check content.</p>
                     * 
                     */
                    std::string GetContextType() const;

                    /**
                     * 设置<p>Check content.</p>
                     * @param _contextType <p>Check content.</p>
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
                     * 获取<p>Check request.</p>
                     * @return CheckSendContext <p>Check request.</p>
                     * 
                     */
                    std::string GetCheckSendContext() const;

                    /**
                     * 设置<p>Check request.</p>
                     * @param _checkSendContext <p>Check request.</p>
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
                     * 获取<p>Check returned results.</p>
                     * @return CheckRecvContext <p>Check returned results.</p>
                     * 
                     */
                    std::string GetCheckRecvContext() const;

                    /**
                     * 设置<p>Check returned results.</p>
                     * @param _checkRecvContext <p>Check returned results.</p>
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
                     * 获取<p>Check domain name.</p>
                     * @return CheckDomain <p>Check domain name.</p>
                     * 
                     */
                    std::string GetCheckDomain() const;

                    /**
                     * 设置<p>Check domain name.</p>
                     * @param _checkDomain <p>Check domain name.</p>
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
                     * 获取<p>Check the URL.</p>
                     * @return CheckPath <p>Check the URL.</p>
                     * 
                     */
                    std::string GetCheckPath() const;

                    /**
                     * 设置<p>Check the URL.</p>
                     * @param _checkPath <p>Check the URL.</p>
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
                     * 获取<p>Request method.</p>
                     * @return CheckMethod <p>Request method.</p>
                     * 
                     */
                    std::string GetCheckMethod() const;

                    /**
                     * 设置<p>Request method.</p>
                     * @param _checkMethod <p>Request method.</p>
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
                     * 获取<p>Status check code.</p>
                     * @return StatusMask <p>Status check code.</p>
                     * 
                     */
                    std::vector<std::string> GetStatusMask() const;

                    /**
                     * 设置<p>Status check code.</p>
                     * @param _statusMask <p>Status check code.</p>
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
                     * 获取<p>Terminal node group type.</p>
                     * @return EndpointGroupType <p>Terminal node group type.</p>
                     * 
                     */
                    std::string GetEndpointGroupType() const;

                    /**
                     * 设置<p>Terminal node group type.</p>
                     * @param _endpointGroupType <p>Terminal node group type.</p>
                     * 
                     */
                    void SetEndpointGroupType(const std::string& _endpointGroupType);

                    /**
                     * 判断参数 EndpointGroupType 是否已赋值
                     * @return EndpointGroupType 是否已赋值
                     * 
                     */
                    bool EndpointGroupTypeHasBeenSet() const;

                    /**
                     * 获取<p>Origin-pull protocol.</p>
                     * @return ForwardProtocol <p>Origin-pull protocol.</p>
                     * 
                     */
                    std::string GetForwardProtocol() const;

                    /**
                     * 设置<p>Origin-pull protocol.</p>
                     * @param _forwardProtocol <p>Origin-pull protocol.</p>
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
                     * 获取<p>Port mapping info.</p>
                     * @return PortOverrides <p>Port mapping info.</p>
                     * 
                     */
                    std::vector<PortOverride> GetPortOverrides() const;

                    /**
                     * 设置<p>Port mapping info.</p>
                     * @param _portOverrides <p>Port mapping info.</p>
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
                     * 获取<p>Whether the custom endpoint group is bound to a Layer 7 forwarding rule.</p>
                     * @return VirtualExistForwardingRuleFlag <p>Whether the custom endpoint group is bound to a Layer 7 forwarding rule.</p>
                     * 
                     */
                    bool GetVirtualExistForwardingRuleFlag() const;

                    /**
                     * 设置<p>Whether the custom endpoint group is bound to a Layer 7 forwarding rule.</p>
                     * @param _virtualExistForwardingRuleFlag <p>Whether the custom endpoint group is bound to a Layer 7 forwarding rule.</p>
                     * 
                     */
                    void SetVirtualExistForwardingRuleFlag(const bool& _virtualExistForwardingRuleFlag);

                    /**
                     * 判断参数 VirtualExistForwardingRuleFlag 是否已赋值
                     * @return VirtualExistForwardingRuleFlag 是否已赋值
                     * 
                     */
                    bool VirtualExistForwardingRuleFlagHasBeenSet() const;

                    /**
                     * 获取<p>Public IP address of the egress terminal node group.</p>
                     * @return OriginPublicIps <p>Public IP address of the egress terminal node group.</p>
                     * 
                     */
                    std::vector<std::string> GetOriginPublicIps() const;

                    /**
                     * 设置<p>Public IP address of the egress terminal node group.</p>
                     * @param _originPublicIps <p>Public IP address of the egress terminal node group.</p>
                     * 
                     */
                    void SetOriginPublicIps(const std::vector<std::string>& _originPublicIps);

                    /**
                     * 判断参数 OriginPublicIps 是否已赋值
                     * @return OriginPublicIps 是否已赋值
                     * 
                     */
                    bool OriginPublicIpsHasBeenSet() const;

                    /**
                     * 获取<p>Operator type. China Mobile (CMCC), China Unicom (CUCC), China Telecom (CTCC).</p>
                     * @return IspType <p>Operator type. China Mobile (CMCC), China Unicom (CUCC), China Telecom (CTCC).</p>
                     * 
                     */
                    std::string GetIspType() const;

                    /**
                     * 设置<p>Operator type. China Mobile (CMCC), China Unicom (CUCC), China Telecom (CTCC).</p>
                     * @param _ispType <p>Operator type. China Mobile (CMCC), China Unicom (CUCC), China Telecom (CTCC).</p>
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
                     * 获取<p>HPPTS encryption algorithm kit</p>
                     * @return CipherPolicyId <p>HPPTS encryption algorithm kit</p>
                     * 
                     */
                    std::string GetCipherPolicyId() const;

                    /**
                     * 设置<p>HPPTS encryption algorithm kit</p>
                     * @param _cipherPolicyId <p>HPPTS encryption algorithm kit</p>
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
                     * 获取<p>Only the HTTPS back-to-source protocol supports selecting ['HTTP/1.1', 'HTTP/2']</p><p>Enumeration values:</p><ul><li>HTTP/1.1: Version HTTP/1.1</li><li>HTTP/2: Version HTTP/2</li></ul>
                     * @return HttpVersion <p>Only the HTTPS back-to-source protocol supports selecting ['HTTP/1.1', 'HTTP/2']</p><p>Enumeration values:</p><ul><li>HTTP/1.1: Version HTTP/1.1</li><li>HTTP/2: Version HTTP/2</li></ul>
                     * 
                     */
                    std::string GetHttpVersion() const;

                    /**
                     * 设置<p>Only the HTTPS back-to-source protocol supports selecting ['HTTP/1.1', 'HTTP/2']</p><p>Enumeration values:</p><ul><li>HTTP/1.1: Version HTTP/1.1</li><li>HTTP/2: Version HTTP/2</li></ul>
                     * @param _httpVersion <p>Only the HTTPS back-to-source protocol supports selecting ['HTTP/1.1', 'HTTP/2']</p><p>Enumeration values:</p><ul><li>HTTP/1.1: Version HTTP/1.1</li><li>HTTP/2: Version HTTP/2</li></ul>
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
                     * <p>Listener instance ID.</p>
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * <p>Terminal node group ID.</p>
                     */
                    std::string m_endpointGroupId;
                    bool m_endpointGroupIdHasBeenSet;

                    /**
                     * <p>Name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Region.</p>
                     */
                    std::string m_endpointGroupRegion;
                    bool m_endpointGroupRegionHasBeenSet;

                    /**
                     * <p>Description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Endpoint information.</p>
                     */
                    std::vector<EndpointConfigurations> m_endpointConfigurations;
                    bool m_endpointConfigurationsHasBeenSet;

                    /**
                     * <p>Whether to enable health check.</p>
                     */
                    bool m_enableHealthCheck;
                    bool m_enableHealthCheckHasBeenSet;

                    /**
                     * <p>Response timeout.</p>
                     */
                    uint64_t m_connectTimeout;
                    bool m_connectTimeoutHasBeenSet;

                    /**
                     * <p>Health check interval.</p>
                     */
                    uint64_t m_healthCheckInterval;
                    bool m_healthCheckIntervalHasBeenSet;

                    /**
                     * <p>Unhealthy threshold.</p>
                     */
                    uint64_t m_unhealthyThreshold;
                    bool m_unhealthyThresholdHasBeenSet;

                    /**
                     * <p>Health threshold.</p>
                     */
                    uint64_t m_healthyThreshold;
                    bool m_healthyThresholdHasBeenSet;

                    /**
                     * <p>Select the protocol.</p>
                     */
                    std::string m_checkType;
                    bool m_checkTypeHasBeenSet;

                    /**
                     * <p>Check port.</p>
                     */
                    uint64_t m_checkPort;
                    bool m_checkPortHasBeenSet;

                    /**
                     * <p>Check content.</p>
                     */
                    std::string m_contextType;
                    bool m_contextTypeHasBeenSet;

                    /**
                     * <p>Check request.</p>
                     */
                    std::string m_checkSendContext;
                    bool m_checkSendContextHasBeenSet;

                    /**
                     * <p>Check returned results.</p>
                     */
                    std::string m_checkRecvContext;
                    bool m_checkRecvContextHasBeenSet;

                    /**
                     * <p>Check domain name.</p>
                     */
                    std::string m_checkDomain;
                    bool m_checkDomainHasBeenSet;

                    /**
                     * <p>Check the URL.</p>
                     */
                    std::string m_checkPath;
                    bool m_checkPathHasBeenSet;

                    /**
                     * <p>Request method.</p>
                     */
                    std::string m_checkMethod;
                    bool m_checkMethodHasBeenSet;

                    /**
                     * <p>Status check code.</p>
                     */
                    std::vector<std::string> m_statusMask;
                    bool m_statusMaskHasBeenSet;

                    /**
                     * <p>Terminal node group type.</p>
                     */
                    std::string m_endpointGroupType;
                    bool m_endpointGroupTypeHasBeenSet;

                    /**
                     * <p>Origin-pull protocol.</p>
                     */
                    std::string m_forwardProtocol;
                    bool m_forwardProtocolHasBeenSet;

                    /**
                     * <p>Port mapping info.</p>
                     */
                    std::vector<PortOverride> m_portOverrides;
                    bool m_portOverridesHasBeenSet;

                    /**
                     * <p>Whether the custom endpoint group is bound to a Layer 7 forwarding rule.</p>
                     */
                    bool m_virtualExistForwardingRuleFlag;
                    bool m_virtualExistForwardingRuleFlagHasBeenSet;

                    /**
                     * <p>Public IP address of the egress terminal node group.</p>
                     */
                    std::vector<std::string> m_originPublicIps;
                    bool m_originPublicIpsHasBeenSet;

                    /**
                     * <p>Operator type. China Mobile (CMCC), China Unicom (CUCC), China Telecom (CTCC).</p>
                     */
                    std::string m_ispType;
                    bool m_ispTypeHasBeenSet;

                    /**
                     * <p>HPPTS encryption algorithm kit</p>
                     */
                    std::string m_cipherPolicyId;
                    bool m_cipherPolicyIdHasBeenSet;

                    /**
                     * <p>Only the HTTPS back-to-source protocol supports selecting ['HTTP/1.1', 'HTTP/2']</p><p>Enumeration values:</p><ul><li>HTTP/1.1: Version HTTP/1.1</li><li>HTTP/2: Version HTTP/2</li></ul>
                     */
                    std::string m_httpVersion;
                    bool m_httpVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_ENDPOINTGROUPCONFIGURATIONSET_H_
