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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_CREATELISTENERREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_CREATELISTENERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ga2/v20250115/model/PortRanges.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * CreateListener request structure.
                */
                class CreateListenerRequest : public AbstractModel
                {
                public:
                    CreateListenerRequest();
                    ~CreateListenerRequest() = default;
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
                     * 获取<p>Port range.</p>
                     * @return PortRanges <p>Port range.</p>
                     * 
                     */
                    PortRanges GetPortRanges() const;

                    /**
                     * 设置<p>Port range.</p>
                     * @param _portRanges <p>Port range.</p>
                     * 
                     */
                    void SetPortRanges(const PortRanges& _portRanges);

                    /**
                     * 判断参数 PortRanges 是否已赋值
                     * @return PortRanges 是否已赋值
                     * 
                     */
                    bool PortRangesHasBeenSet() const;

                    /**
                     * 获取<p>Description. Maximum length cannot exceed 100 characters.</p>
                     * @return Description <p>Description. Maximum length cannot exceed 100 characters.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description. Maximum length cannot exceed 100 characters.</p>
                     * @param _description <p>Description. Maximum length cannot exceed 100 characters.</p>
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
                     * 获取<p>Listening type, defaults to smart routing.</p><p>Enumeration values:</p><ul><li>Standard: Smart routing.</li></ul>
                     * @return ListenerType <p>Listening type, defaults to smart routing.</p><p>Enumeration values:</p><ul><li>Standard: Smart routing.</li></ul>
                     * 
                     */
                    std::string GetListenerType() const;

                    /**
                     * 设置<p>Listening type, defaults to smart routing.</p><p>Enumeration values:</p><ul><li>Standard: Smart routing.</li></ul>
                     * @param _listenerType <p>Listening type, defaults to smart routing.</p><p>Enumeration values:</p><ul><li>Standard: Smart routing.</li></ul>
                     * 
                     */
                    void SetListenerType(const std::string& _listenerType);

                    /**
                     * 判断参数 ListenerType 是否已赋值
                     * @return ListenerType 是否已赋值
                     * 
                     */
                    bool ListenerTypeHasBeenSet() const;

                    /**
                     * 获取<p>Protocol. Default value: TCP. Supports configuration of 'TCP', 'UDP', 'HTTP', and 'HTTPS'.</p>
                     * @return Protocol <p>Protocol. Default value: TCP. Supports configuration of 'TCP', 'UDP', 'HTTP', and 'HTTPS'.</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>Protocol. Default value: TCP. Supports configuration of 'TCP', 'UDP', 'HTTP', and 'HTTPS'.</p>
                     * @param _protocol <p>Protocol. Default value: TCP. Supports configuration of 'TCP', 'UDP', 'HTTP', and 'HTTPS'.</p>
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
                     * 获取<p>Connection idle wait time.</p><p>1. For HTTP/HTTPS listener, the default value is 15, with a supported range of 1-60.<br>2. For TCP listener, the default value is 900, with a supported range of 10-900.<br>3. For UDP listener, the default value is 20, with a supported range of 10-20.</p>
                     * @return IdleTimeout <p>Connection idle wait time.</p><p>1. For HTTP/HTTPS listener, the default value is 15, with a supported range of 1-60.<br>2. For TCP listener, the default value is 900, with a supported range of 10-900.<br>3. For UDP listener, the default value is 20, with a supported range of 10-20.</p>
                     * 
                     */
                    uint64_t GetIdleTimeout() const;

                    /**
                     * 设置<p>Connection idle wait time.</p><p>1. For HTTP/HTTPS listener, the default value is 15, with a supported range of 1-60.<br>2. For TCP listener, the default value is 900, with a supported range of 10-900.<br>3. For UDP listener, the default value is 20, with a supported range of 10-20.</p>
                     * @param _idleTimeout <p>Connection idle wait time.</p><p>1. For HTTP/HTTPS listener, the default value is 15, with a supported range of 1-60.<br>2. For TCP listener, the default value is 900, with a supported range of 10-900.<br>3. For UDP listener, the default value is 20, with a supported range of 10-20.</p>
                     * 
                     */
                    void SetIdleTimeout(const uint64_t& _idleTimeout);

                    /**
                     * 判断参数 IdleTimeout 是否已赋值
                     * @return IdleTimeout 是否已赋值
                     * 
                     */
                    bool IdleTimeoutHasBeenSet() const;

                    /**
                     * 获取<p>Layer-4 source IP retrieval mode. Supports 'TOA', 'ProxyProtocol', and 'ProxyProtocolV2'.</p><p>This parameter can be filled in only when the Layer-4 source IP retrieval mode is enabled.</p>
                     * @return GetRealIpType <p>Layer-4 source IP retrieval mode. Supports 'TOA', 'ProxyProtocol', and 'ProxyProtocolV2'.</p><p>This parameter can be filled in only when the Layer-4 source IP retrieval mode is enabled.</p>
                     * 
                     */
                    std::string GetGetRealIpType() const;

                    /**
                     * 设置<p>Layer-4 source IP retrieval mode. Supports 'TOA', 'ProxyProtocol', and 'ProxyProtocolV2'.</p><p>This parameter can be filled in only when the Layer-4 source IP retrieval mode is enabled.</p>
                     * @param _getRealIpType <p>Layer-4 source IP retrieval mode. Supports 'TOA', 'ProxyProtocol', and 'ProxyProtocolV2'.</p><p>This parameter can be filled in only when the Layer-4 source IP retrieval mode is enabled.</p>
                     * 
                     */
                    void SetGetRealIpType(const std::string& _getRealIpType);

                    /**
                     * 判断参数 GetRealIpType 是否已赋值
                     * @return GetRealIpType 是否已赋值
                     * 
                     */
                    bool GetRealIpTypeHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable session persistence. Supports configuration of 'Open' and 'Close'.</p><p>Enumeration values:</p><ul><li>Open: enable.</li><li>Close: disable.</li></ul><p>Only supported for layer-4 listeners. For layer-7 listeners, modification is not supported.</p>
                     * @return ClientAffinity <p>Whether to enable session persistence. Supports configuration of 'Open' and 'Close'.</p><p>Enumeration values:</p><ul><li>Open: enable.</li><li>Close: disable.</li></ul><p>Only supported for layer-4 listeners. For layer-7 listeners, modification is not supported.</p>
                     * 
                     */
                    std::string GetClientAffinity() const;

                    /**
                     * 设置<p>Whether to enable session persistence. Supports configuration of 'Open' and 'Close'.</p><p>Enumeration values:</p><ul><li>Open: enable.</li><li>Close: disable.</li></ul><p>Only supported for layer-4 listeners. For layer-7 listeners, modification is not supported.</p>
                     * @param _clientAffinity <p>Whether to enable session persistence. Supports configuration of 'Open' and 'Close'.</p><p>Enumeration values:</p><ul><li>Open: enable.</li><li>Close: disable.</li></ul><p>Only supported for layer-4 listeners. For layer-7 listeners, modification is not supported.</p>
                     * 
                     */
                    void SetClientAffinity(const std::string& _clientAffinity);

                    /**
                     * 判断参数 ClientAffinity 是否已赋值
                     * @return ClientAffinity 是否已赋值
                     * 
                     */
                    bool ClientAffinityHasBeenSet() const;

                    /**
                     * 获取<p>Request timeout.</p><p>Value range: [1, 180]</p><p>Default value: 60</p><p>This parameter is configurable only for HTTPS listeners.</p>
                     * @return RequestTimeout <p>Request timeout.</p><p>Value range: [1, 180]</p><p>Default value: 60</p><p>This parameter is configurable only for HTTPS listeners.</p>
                     * 
                     */
                    uint64_t GetRequestTimeout() const;

                    /**
                     * 设置<p>Request timeout.</p><p>Value range: [1, 180]</p><p>Default value: 60</p><p>This parameter is configurable only for HTTPS listeners.</p>
                     * @param _requestTimeout <p>Request timeout.</p><p>Value range: [1, 180]</p><p>Default value: 60</p><p>This parameter is configurable only for HTTPS listeners.</p>
                     * 
                     */
                    void SetRequestTimeout(const uint64_t& _requestTimeout);

                    /**
                     * 判断参数 RequestTimeout 是否已赋值
                     * @return RequestTimeout 是否已赋值
                     * 
                     */
                    bool RequestTimeoutHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable layer-7 source IP retrieval mode.</p>
                     * @return XForwardedForRealIp <p>Whether to enable layer-7 source IP retrieval mode.</p>
                     * 
                     */
                    bool GetXForwardedForRealIp() const;

                    /**
                     * 设置<p>Whether to enable layer-7 source IP retrieval mode.</p>
                     * @param _xForwardedForRealIp <p>Whether to enable layer-7 source IP retrieval mode.</p>
                     * 
                     */
                    void SetXForwardedForRealIp(const bool& _xForwardedForRealIp);

                    /**
                     * 判断参数 XForwardedForRealIp 是否已赋值
                     * @return XForwardedForRealIp 是否已赋值
                     * 
                     */
                    bool XForwardedForRealIpHasBeenSet() const;

                    /**
                     * 获取<p>Parsing method.</p><p>Enumeration values:</p><ul><li>UNIDIRECTIONAL: two-way.</li><li>U: one-way.</li></ul><p>For an HTTPS listener, this field is required.</p>
                     * @return CertificationType <p>Parsing method.</p><p>Enumeration values:</p><ul><li>UNIDIRECTIONAL: two-way.</li><li>U: one-way.</li></ul><p>For an HTTPS listener, this field is required.</p>
                     * 
                     */
                    std::string GetCertificationType() const;

                    /**
                     * 设置<p>Parsing method.</p><p>Enumeration values:</p><ul><li>UNIDIRECTIONAL: two-way.</li><li>U: one-way.</li></ul><p>For an HTTPS listener, this field is required.</p>
                     * @param _certificationType <p>Parsing method.</p><p>Enumeration values:</p><ul><li>UNIDIRECTIONAL: two-way.</li><li>U: one-way.</li></ul><p>For an HTTPS listener, this field is required.</p>
                     * 
                     */
                    void SetCertificationType(const std::string& _certificationType);

                    /**
                     * 判断参数 CertificationType 是否已赋值
                     * @return CertificationType 是否已赋值
                     * 
                     */
                    bool CertificationTypeHasBeenSet() const;

                    /**
                     * 获取<p>Encryption algorithm kit. Supports configuration of 'tls_policy_1.0-2', 'tls_policy_1.1-2', 'tls_policy_1.2', 'tls_policy_1.2_strict', 'tls_policy_1.2_strict-1.3'.</p>
                     * @return CipherPolicyId <p>Encryption algorithm kit. Supports configuration of 'tls_policy_1.0-2', 'tls_policy_1.1-2', 'tls_policy_1.2', 'tls_policy_1.2_strict', 'tls_policy_1.2_strict-1.3'.</p>
                     * 
                     */
                    std::string GetCipherPolicyId() const;

                    /**
                     * 设置<p>Encryption algorithm kit. Supports configuration of 'tls_policy_1.0-2', 'tls_policy_1.1-2', 'tls_policy_1.2', 'tls_policy_1.2_strict', 'tls_policy_1.2_strict-1.3'.</p>
                     * @param _cipherPolicyId <p>Encryption algorithm kit. Supports configuration of 'tls_policy_1.0-2', 'tls_policy_1.1-2', 'tls_policy_1.2', 'tls_policy_1.2_strict', 'tls_policy_1.2_strict-1.3'.</p>
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
                     * 获取<p>Server certificate.</p><p>Input limit: currently only support importing one cert; to use multiple certs, use the cert api CreateListenerAdditionalCert to add other certs.</p><p>This field is required for HTTPS listeners.</p>
                     * @return ServerCertificates <p>Server certificate.</p><p>Input limit: currently only support importing one cert; to use multiple certs, use the cert api CreateListenerAdditionalCert to add other certs.</p><p>This field is required for HTTPS listeners.</p>
                     * 
                     */
                    std::vector<std::string> GetServerCertificates() const;

                    /**
                     * 设置<p>Server certificate.</p><p>Input limit: currently only support importing one cert; to use multiple certs, use the cert api CreateListenerAdditionalCert to add other certs.</p><p>This field is required for HTTPS listeners.</p>
                     * @param _serverCertificates <p>Server certificate.</p><p>Input limit: currently only support importing one cert; to use multiple certs, use the cert api CreateListenerAdditionalCert to add other certs.</p><p>This field is required for HTTPS listeners.</p>
                     * 
                     */
                    void SetServerCertificates(const std::vector<std::string>& _serverCertificates);

                    /**
                     * 判断参数 ServerCertificates 是否已赋值
                     * @return ServerCertificates 是否已赋值
                     * 
                     */
                    bool ServerCertificatesHasBeenSet() const;

                    /**
                     * 获取<p>Client certificate.</p><p>Input limit: 1. Currently only support importing one cert. To use multiple certs, use the cert api CreateListenerAdditionalCert to add other certs. 2. The cert must be a CA certificate.</p><p>This field is required when HTTPS listener and mutual authentication are enabled.</p>
                     * @return ClientCaCertificates <p>Client certificate.</p><p>Input limit: 1. Currently only support importing one cert. To use multiple certs, use the cert api CreateListenerAdditionalCert to add other certs. 2. The cert must be a CA certificate.</p><p>This field is required when HTTPS listener and mutual authentication are enabled.</p>
                     * 
                     */
                    std::vector<std::string> GetClientCaCertificates() const;

                    /**
                     * 设置<p>Client certificate.</p><p>Input limit: 1. Currently only support importing one cert. To use multiple certs, use the cert api CreateListenerAdditionalCert to add other certs. 2. The cert must be a CA certificate.</p><p>This field is required when HTTPS listener and mutual authentication are enabled.</p>
                     * @param _clientCaCertificates <p>Client certificate.</p><p>Input limit: 1. Currently only support importing one cert. To use multiple certs, use the cert api CreateListenerAdditionalCert to add other certs. 2. The cert must be a CA certificate.</p><p>This field is required when HTTPS listener and mutual authentication are enabled.</p>
                     * 
                     */
                    void SetClientCaCertificates(const std::vector<std::string>& _clientCaCertificates);

                    /**
                     * 判断参数 ClientCaCertificates 是否已赋值
                     * @return ClientCaCertificates 是否已赋值
                     * 
                     */
                    bool ClientCaCertificatesHasBeenSet() const;

                    /**
                     * 获取<p>HTTPS listener supports version selection</p><p>Enumeration values:</p><ul><li>HTTP/1.1: HTTP/1.1</li><li>HTTP/2: HTTP/2</li></ul>
                     * @return HttpVersion <p>HTTPS listener supports version selection</p><p>Enumeration values:</p><ul><li>HTTP/1.1: HTTP/1.1</li><li>HTTP/2: HTTP/2</li></ul>
                     * 
                     */
                    std::string GetHttpVersion() const;

                    /**
                     * 设置<p>HTTPS listener supports version selection</p><p>Enumeration values:</p><ul><li>HTTP/1.1: HTTP/1.1</li><li>HTTP/2: HTTP/2</li></ul>
                     * @param _httpVersion <p>HTTPS listener supports version selection</p><p>Enumeration values:</p><ul><li>HTTP/1.1: HTTP/1.1</li><li>HTTP/2: HTTP/2</li></ul>
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
                     * <p>Name.</p><p>Parameter format: starting with a letter or Chinese characters, 2–128 characters in length, supporting letters, digits, Chinese characters, . - _</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Port range.</p>
                     */
                    PortRanges m_portRanges;
                    bool m_portRangesHasBeenSet;

                    /**
                     * <p>Description. Maximum length cannot exceed 100 characters.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Listening type, defaults to smart routing.</p><p>Enumeration values:</p><ul><li>Standard: Smart routing.</li></ul>
                     */
                    std::string m_listenerType;
                    bool m_listenerTypeHasBeenSet;

                    /**
                     * <p>Protocol. Default value: TCP. Supports configuration of 'TCP', 'UDP', 'HTTP', and 'HTTPS'.</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>Connection idle wait time.</p><p>1. For HTTP/HTTPS listener, the default value is 15, with a supported range of 1-60.<br>2. For TCP listener, the default value is 900, with a supported range of 10-900.<br>3. For UDP listener, the default value is 20, with a supported range of 10-20.</p>
                     */
                    uint64_t m_idleTimeout;
                    bool m_idleTimeoutHasBeenSet;

                    /**
                     * <p>Layer-4 source IP retrieval mode. Supports 'TOA', 'ProxyProtocol', and 'ProxyProtocolV2'.</p><p>This parameter can be filled in only when the Layer-4 source IP retrieval mode is enabled.</p>
                     */
                    std::string m_getRealIpType;
                    bool m_getRealIpTypeHasBeenSet;

                    /**
                     * <p>Whether to enable session persistence. Supports configuration of 'Open' and 'Close'.</p><p>Enumeration values:</p><ul><li>Open: enable.</li><li>Close: disable.</li></ul><p>Only supported for layer-4 listeners. For layer-7 listeners, modification is not supported.</p>
                     */
                    std::string m_clientAffinity;
                    bool m_clientAffinityHasBeenSet;

                    /**
                     * <p>Request timeout.</p><p>Value range: [1, 180]</p><p>Default value: 60</p><p>This parameter is configurable only for HTTPS listeners.</p>
                     */
                    uint64_t m_requestTimeout;
                    bool m_requestTimeoutHasBeenSet;

                    /**
                     * <p>Whether to enable layer-7 source IP retrieval mode.</p>
                     */
                    bool m_xForwardedForRealIp;
                    bool m_xForwardedForRealIpHasBeenSet;

                    /**
                     * <p>Parsing method.</p><p>Enumeration values:</p><ul><li>UNIDIRECTIONAL: two-way.</li><li>U: one-way.</li></ul><p>For an HTTPS listener, this field is required.</p>
                     */
                    std::string m_certificationType;
                    bool m_certificationTypeHasBeenSet;

                    /**
                     * <p>Encryption algorithm kit. Supports configuration of 'tls_policy_1.0-2', 'tls_policy_1.1-2', 'tls_policy_1.2', 'tls_policy_1.2_strict', 'tls_policy_1.2_strict-1.3'.</p>
                     */
                    std::string m_cipherPolicyId;
                    bool m_cipherPolicyIdHasBeenSet;

                    /**
                     * <p>Server certificate.</p><p>Input limit: currently only support importing one cert; to use multiple certs, use the cert api CreateListenerAdditionalCert to add other certs.</p><p>This field is required for HTTPS listeners.</p>
                     */
                    std::vector<std::string> m_serverCertificates;
                    bool m_serverCertificatesHasBeenSet;

                    /**
                     * <p>Client certificate.</p><p>Input limit: 1. Currently only support importing one cert. To use multiple certs, use the cert api CreateListenerAdditionalCert to add other certs. 2. The cert must be a CA certificate.</p><p>This field is required when HTTPS listener and mutual authentication are enabled.</p>
                     */
                    std::vector<std::string> m_clientCaCertificates;
                    bool m_clientCaCertificatesHasBeenSet;

                    /**
                     * <p>HTTPS listener supports version selection</p><p>Enumeration values:</p><ul><li>HTTP/1.1: HTTP/1.1</li><li>HTTP/2: HTTP/2</li></ul>
                     */
                    std::string m_httpVersion;
                    bool m_httpVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_CREATELISTENERREQUEST_H_
