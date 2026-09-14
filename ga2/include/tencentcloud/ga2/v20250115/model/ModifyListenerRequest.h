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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYLISTENERREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYLISTENERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * ModifyListener request structure.
                */
                class ModifyListenerRequest : public AbstractModel
                {
                public:
                    ModifyListenerRequest();
                    ~ModifyListenerRequest() = default;
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
                     * 获取<p>Description. Maximum length cannot exceed 100 bytes.</p>
                     * @return Description <p>Description. Maximum length cannot exceed 100 bytes.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description. Maximum length cannot exceed 100 bytes.</p>
                     * @param _description <p>Description. Maximum length cannot exceed 100 bytes.</p>
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
                     * 获取<p>Connection idle wait time.</p><p>1. For HTTP/HTTPS listener, the supported range is 1-60. 2. For TCP listener, the supported range is 10-900. 3. For UDP listener, the supported range is 10-20.</p>
                     * @return IdleTimeout <p>Connection idle wait time.</p><p>1. For HTTP/HTTPS listener, the supported range is 1-60. 2. For TCP listener, the supported range is 10-900. 3. For UDP listener, the supported range is 10-20.</p>
                     * 
                     */
                    uint64_t GetIdleTimeout() const;

                    /**
                     * 设置<p>Connection idle wait time.</p><p>1. For HTTP/HTTPS listener, the supported range is 1-60. 2. For TCP listener, the supported range is 10-900. 3. For UDP listener, the supported range is 10-20.</p>
                     * @param _idleTimeout <p>Connection idle wait time.</p><p>1. For HTTP/HTTPS listener, the supported range is 1-60. 2. For TCP listener, the supported range is 10-900. 3. For UDP listener, the supported range is 10-20.</p>
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
                     * 获取<p>Whether to enable session persistence.</p><p>Enumeration values:</p><ul><li>Open: on.</li><li>Close: off.</li></ul><p>TCP/UDP listeners support modification of this parameter.</p>
                     * @return ClientAffinity <p>Whether to enable session persistence.</p><p>Enumeration values:</p><ul><li>Open: on.</li><li>Close: off.</li></ul><p>TCP/UDP listeners support modification of this parameter.</p>
                     * 
                     */
                    std::string GetClientAffinity() const;

                    /**
                     * 设置<p>Whether to enable session persistence.</p><p>Enumeration values:</p><ul><li>Open: on.</li><li>Close: off.</li></ul><p>TCP/UDP listeners support modification of this parameter.</p>
                     * @param _clientAffinity <p>Whether to enable session persistence.</p><p>Enumeration values:</p><ul><li>Open: on.</li><li>Close: off.</li></ul><p>TCP/UDP listeners support modification of this parameter.</p>
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
                     * 获取<p>Session persistence duration.</p><p>Value range: [60, 3600]</p>
                     * @return ClientAffinityTime <p>Session persistence duration.</p><p>Value range: [60, 3600]</p>
                     * 
                     */
                    uint64_t GetClientAffinityTime() const;

                    /**
                     * 设置<p>Session persistence duration.</p><p>Value range: [60, 3600]</p>
                     * @param _clientAffinityTime <p>Session persistence duration.</p><p>Value range: [60, 3600]</p>
                     * 
                     */
                    void SetClientAffinityTime(const uint64_t& _clientAffinityTime);

                    /**
                     * 判断参数 ClientAffinityTime 是否已赋值
                     * @return ClientAffinityTime 是否已赋值
                     * 
                     */
                    bool ClientAffinityTimeHasBeenSet() const;

                    /**
                     * 获取<p>Request timeout.</p><p>Value range: [1, 180]</p><p>This parameter can be modified only for HTTPS listeners.</p>
                     * @return RequestTimeout <p>Request timeout.</p><p>Value range: [1, 180]</p><p>This parameter can be modified only for HTTPS listeners.</p>
                     * 
                     */
                    uint64_t GetRequestTimeout() const;

                    /**
                     * 设置<p>Request timeout.</p><p>Value range: [1, 180]</p><p>This parameter can be modified only for HTTPS listeners.</p>
                     * @param _requestTimeout <p>Request timeout.</p><p>Value range: [1, 180]</p><p>This parameter can be modified only for HTTPS listeners.</p>
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
                     * 获取<p>Whether to enable the layer 7 method of obtaining the client IP.</p><p>This parameter modification is supported only for HTTPS/HTTP listeners.</p>
                     * @return XForwardedForRealIp <p>Whether to enable the layer 7 method of obtaining the client IP.</p><p>This parameter modification is supported only for HTTPS/HTTP listeners.</p>
                     * 
                     */
                    bool GetXForwardedForRealIp() const;

                    /**
                     * 设置<p>Whether to enable the layer 7 method of obtaining the client IP.</p><p>This parameter modification is supported only for HTTPS/HTTP listeners.</p>
                     * @param _xForwardedForRealIp <p>Whether to enable the layer 7 method of obtaining the client IP.</p><p>This parameter modification is supported only for HTTPS/HTTP listeners.</p>
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
                     * 获取<p>Parsing method.</p><p>Enumeration values:</p><ul><li>UNIDIRECTIONAL: two-way.</li><li>MUTUAL: one-way.</li></ul><p>Only HTTPS/HTTP listeners support modifying this parameter.</p>
                     * @return CertificationType <p>Parsing method.</p><p>Enumeration values:</p><ul><li>UNIDIRECTIONAL: two-way.</li><li>MUTUAL: one-way.</li></ul><p>Only HTTPS/HTTP listeners support modifying this parameter.</p>
                     * 
                     */
                    std::string GetCertificationType() const;

                    /**
                     * 设置<p>Parsing method.</p><p>Enumeration values:</p><ul><li>UNIDIRECTIONAL: two-way.</li><li>MUTUAL: one-way.</li></ul><p>Only HTTPS/HTTP listeners support modifying this parameter.</p>
                     * @param _certificationType <p>Parsing method.</p><p>Enumeration values:</p><ul><li>UNIDIRECTIONAL: two-way.</li><li>MUTUAL: one-way.</li></ul><p>Only HTTPS/HTTP listeners support modifying this parameter.</p>
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
                     * 获取<p>Encryption algorithm kit.</p><p>Input limits: support selecting tls_policy_1.0-2', 'tls_policy_1.1-2', 'tls_policy_1.2', 'tls_policy_1.2_strict', 'tls_policy_1.2_strict-1.3'.</p><p>Only HTTPS listeners support modifying this parameter.</p>
                     * @return CipherPolicyId <p>Encryption algorithm kit.</p><p>Input limits: support selecting tls_policy_1.0-2', 'tls_policy_1.1-2', 'tls_policy_1.2', 'tls_policy_1.2_strict', 'tls_policy_1.2_strict-1.3'.</p><p>Only HTTPS listeners support modifying this parameter.</p>
                     * 
                     */
                    std::string GetCipherPolicyId() const;

                    /**
                     * 设置<p>Encryption algorithm kit.</p><p>Input limits: support selecting tls_policy_1.0-2', 'tls_policy_1.1-2', 'tls_policy_1.2', 'tls_policy_1.2_strict', 'tls_policy_1.2_strict-1.3'.</p><p>Only HTTPS listeners support modifying this parameter.</p>
                     * @param _cipherPolicyId <p>Encryption algorithm kit.</p><p>Input limits: support selecting tls_policy_1.0-2', 'tls_policy_1.1-2', 'tls_policy_1.2', 'tls_policy_1.2_strict', 'tls_policy_1.2_strict-1.3'.</p><p>Only HTTPS listeners support modifying this parameter.</p>
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
                     * 获取<p>Server certificate.</p><p>Input limit: currently only support importing one cert; to use multiple certs, use the cert api CreateListenerAdditionalCert to add other certs.</p><p>Only HTTPS listeners support modification of this parameter.</p>
                     * @return ServerCertificates <p>Server certificate.</p><p>Input limit: currently only support importing one cert; to use multiple certs, use the cert api CreateListenerAdditionalCert to add other certs.</p><p>Only HTTPS listeners support modification of this parameter.</p>
                     * 
                     */
                    std::vector<std::string> GetServerCertificates() const;

                    /**
                     * 设置<p>Server certificate.</p><p>Input limit: currently only support importing one cert; to use multiple certs, use the cert api CreateListenerAdditionalCert to add other certs.</p><p>Only HTTPS listeners support modification of this parameter.</p>
                     * @param _serverCertificates <p>Server certificate.</p><p>Input limit: currently only support importing one cert; to use multiple certs, use the cert api CreateListenerAdditionalCert to add other certs.</p><p>Only HTTPS listeners support modification of this parameter.</p>
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
                     * 获取<p>Client certificate.</p><p>Input limitations: 1. Currently only support importing one certificate; to use multiple certificates, use the certificate api CreateListenerAdditionalCert to add other certificates. 2. The certificate must be a CA certificate.</p><p>Only HTTPS listeners support modification of this parameter, and mutual authentication must be enabled.</p>
                     * @return ClientCaCertificates <p>Client certificate.</p><p>Input limitations: 1. Currently only support importing one certificate; to use multiple certificates, use the certificate api CreateListenerAdditionalCert to add other certificates. 2. The certificate must be a CA certificate.</p><p>Only HTTPS listeners support modification of this parameter, and mutual authentication must be enabled.</p>
                     * 
                     */
                    std::vector<std::string> GetClientCaCertificates() const;

                    /**
                     * 设置<p>Client certificate.</p><p>Input limitations: 1. Currently only support importing one certificate; to use multiple certificates, use the certificate api CreateListenerAdditionalCert to add other certificates. 2. The certificate must be a CA certificate.</p><p>Only HTTPS listeners support modification of this parameter, and mutual authentication must be enabled.</p>
                     * @param _clientCaCertificates <p>Client certificate.</p><p>Input limitations: 1. Currently only support importing one certificate; to use multiple certificates, use the certificate api CreateListenerAdditionalCert to add other certificates. 2. The certificate must be a CA certificate.</p><p>Only HTTPS listeners support modification of this parameter, and mutual authentication must be enabled.</p>
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
                     * 获取<p>Method of obtaining the source IP.</p><p>Input parameter limits: support selecting 'ProxyProtocol', 'Close', 'ProxyProtocolV2', 'TOA'.</p><p>Only TCP listeners support modification of this parameter.</p>
                     * @return GetRealIpType <p>Method of obtaining the source IP.</p><p>Input parameter limits: support selecting 'ProxyProtocol', 'Close', 'ProxyProtocolV2', 'TOA'.</p><p>Only TCP listeners support modification of this parameter.</p>
                     * 
                     */
                    std::string GetGetRealIpType() const;

                    /**
                     * 设置<p>Method of obtaining the source IP.</p><p>Input parameter limits: support selecting 'ProxyProtocol', 'Close', 'ProxyProtocolV2', 'TOA'.</p><p>Only TCP listeners support modification of this parameter.</p>
                     * @param _getRealIpType <p>Method of obtaining the source IP.</p><p>Input parameter limits: support selecting 'ProxyProtocol', 'Close', 'ProxyProtocolV2', 'TOA'.</p><p>Only TCP listeners support modification of this parameter.</p>
                     * 
                     */
                    void SetGetRealIpType(const std::string& _getRealIpType);

                    /**
                     * 判断参数 GetRealIpType 是否已赋值
                     * @return GetRealIpType 是否已赋值
                     * 
                     */
                    bool GetRealIpTypeHasBeenSet() const;

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
                     * <p>Name.</p><p>Parameter format: starting with a letter or Chinese characters, 2–128 characters in length, supporting letters, digits, Chinese characters, . - _</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Description. Maximum length cannot exceed 100 bytes.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Connection idle wait time.</p><p>1. For HTTP/HTTPS listener, the supported range is 1-60. 2. For TCP listener, the supported range is 10-900. 3. For UDP listener, the supported range is 10-20.</p>
                     */
                    uint64_t m_idleTimeout;
                    bool m_idleTimeoutHasBeenSet;

                    /**
                     * <p>Whether to enable session persistence.</p><p>Enumeration values:</p><ul><li>Open: on.</li><li>Close: off.</li></ul><p>TCP/UDP listeners support modification of this parameter.</p>
                     */
                    std::string m_clientAffinity;
                    bool m_clientAffinityHasBeenSet;

                    /**
                     * <p>Session persistence duration.</p><p>Value range: [60, 3600]</p>
                     */
                    uint64_t m_clientAffinityTime;
                    bool m_clientAffinityTimeHasBeenSet;

                    /**
                     * <p>Request timeout.</p><p>Value range: [1, 180]</p><p>This parameter can be modified only for HTTPS listeners.</p>
                     */
                    uint64_t m_requestTimeout;
                    bool m_requestTimeoutHasBeenSet;

                    /**
                     * <p>Whether to enable the layer 7 method of obtaining the client IP.</p><p>This parameter modification is supported only for HTTPS/HTTP listeners.</p>
                     */
                    bool m_xForwardedForRealIp;
                    bool m_xForwardedForRealIpHasBeenSet;

                    /**
                     * <p>Parsing method.</p><p>Enumeration values:</p><ul><li>UNIDIRECTIONAL: two-way.</li><li>MUTUAL: one-way.</li></ul><p>Only HTTPS/HTTP listeners support modifying this parameter.</p>
                     */
                    std::string m_certificationType;
                    bool m_certificationTypeHasBeenSet;

                    /**
                     * <p>Encryption algorithm kit.</p><p>Input limits: support selecting tls_policy_1.0-2', 'tls_policy_1.1-2', 'tls_policy_1.2', 'tls_policy_1.2_strict', 'tls_policy_1.2_strict-1.3'.</p><p>Only HTTPS listeners support modifying this parameter.</p>
                     */
                    std::string m_cipherPolicyId;
                    bool m_cipherPolicyIdHasBeenSet;

                    /**
                     * <p>Server certificate.</p><p>Input limit: currently only support importing one cert; to use multiple certs, use the cert api CreateListenerAdditionalCert to add other certs.</p><p>Only HTTPS listeners support modification of this parameter.</p>
                     */
                    std::vector<std::string> m_serverCertificates;
                    bool m_serverCertificatesHasBeenSet;

                    /**
                     * <p>Client certificate.</p><p>Input limitations: 1. Currently only support importing one certificate; to use multiple certificates, use the certificate api CreateListenerAdditionalCert to add other certificates. 2. The certificate must be a CA certificate.</p><p>Only HTTPS listeners support modification of this parameter, and mutual authentication must be enabled.</p>
                     */
                    std::vector<std::string> m_clientCaCertificates;
                    bool m_clientCaCertificatesHasBeenSet;

                    /**
                     * <p>Method of obtaining the source IP.</p><p>Input parameter limits: support selecting 'ProxyProtocol', 'Close', 'ProxyProtocolV2', 'TOA'.</p><p>Only TCP listeners support modification of this parameter.</p>
                     */
                    std::string m_getRealIpType;
                    bool m_getRealIpTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYLISTENERREQUEST_H_
