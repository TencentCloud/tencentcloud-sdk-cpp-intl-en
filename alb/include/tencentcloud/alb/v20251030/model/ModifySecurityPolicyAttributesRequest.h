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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_MODIFYSECURITYPOLICYATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_MODIFYSECURITYPOLICYATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifySecurityPolicyAttributes request structure.
                */
                class ModifySecurityPolicyAttributesRequest : public AbstractModel
                {
                public:
                    ModifySecurityPolicyAttributesRequest();
                    ~ModifySecurityPolicyAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Security policy ID, format: tls- followed by 8 alphanumeric characters.</p>
                     * @return SecurityPolicyId <p>Security policy ID, format: tls- followed by 8 alphanumeric characters.</p>
                     * 
                     */
                    std::string GetSecurityPolicyId() const;

                    /**
                     * 设置<p>Security policy ID, format: tls- followed by 8 alphanumeric characters.</p>
                     * @param _securityPolicyId <p>Security policy ID, format: tls- followed by 8 alphanumeric characters.</p>
                     * 
                     */
                    void SetSecurityPolicyId(const std::string& _securityPolicyId);

                    /**
                     * 判断参数 SecurityPolicyId 是否已赋值
                     * @return SecurityPolicyId 是否已赋值
                     * 
                     */
                    bool SecurityPolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>Modified encryption suite list. The encryption suite is used to negotiate the encryption algorithm between client and server.</p><p><strong>Configuration instructions:</strong></p><ul><li>The optional range of encryption suites depends on the selected TLS protocol version (TLSVersions parameter).</li><li>As long as an encryption suite is supported by any one of the selected TLS versions, it can be added to the list.</li><li>If TLSVersions contains TLSv1.3: TLSv1.3 exclusive encryption suites can be unspecified (the system will auto-complete all TLSv1.3 suites); if specified, all TLSv1.3 exclusive encryption suites must be included. Specifying only part is not supported.</li></ul><p><strong>Get available encryption suites:</strong><br>Call the <a href="https://www.tencentcloud.com/document/api/1822/133718?from_cn_redirect=1">DescribeSecurityPolicyCapabilities</a> API to query the encryption suite list supported by each TLS version.</p><p><strong>Note:</strong> If this parameter is not specified, the original configuration remains unchanged.</p>
                     * @return Ciphers <p>Modified encryption suite list. The encryption suite is used to negotiate the encryption algorithm between client and server.</p><p><strong>Configuration instructions:</strong></p><ul><li>The optional range of encryption suites depends on the selected TLS protocol version (TLSVersions parameter).</li><li>As long as an encryption suite is supported by any one of the selected TLS versions, it can be added to the list.</li><li>If TLSVersions contains TLSv1.3: TLSv1.3 exclusive encryption suites can be unspecified (the system will auto-complete all TLSv1.3 suites); if specified, all TLSv1.3 exclusive encryption suites must be included. Specifying only part is not supported.</li></ul><p><strong>Get available encryption suites:</strong><br>Call the <a href="https://www.tencentcloud.com/document/api/1822/133718?from_cn_redirect=1">DescribeSecurityPolicyCapabilities</a> API to query the encryption suite list supported by each TLS version.</p><p><strong>Note:</strong> If this parameter is not specified, the original configuration remains unchanged.</p>
                     * 
                     */
                    std::vector<std::string> GetCiphers() const;

                    /**
                     * 设置<p>Modified encryption suite list. The encryption suite is used to negotiate the encryption algorithm between client and server.</p><p><strong>Configuration instructions:</strong></p><ul><li>The optional range of encryption suites depends on the selected TLS protocol version (TLSVersions parameter).</li><li>As long as an encryption suite is supported by any one of the selected TLS versions, it can be added to the list.</li><li>If TLSVersions contains TLSv1.3: TLSv1.3 exclusive encryption suites can be unspecified (the system will auto-complete all TLSv1.3 suites); if specified, all TLSv1.3 exclusive encryption suites must be included. Specifying only part is not supported.</li></ul><p><strong>Get available encryption suites:</strong><br>Call the <a href="https://www.tencentcloud.com/document/api/1822/133718?from_cn_redirect=1">DescribeSecurityPolicyCapabilities</a> API to query the encryption suite list supported by each TLS version.</p><p><strong>Note:</strong> If this parameter is not specified, the original configuration remains unchanged.</p>
                     * @param _ciphers <p>Modified encryption suite list. The encryption suite is used to negotiate the encryption algorithm between client and server.</p><p><strong>Configuration instructions:</strong></p><ul><li>The optional range of encryption suites depends on the selected TLS protocol version (TLSVersions parameter).</li><li>As long as an encryption suite is supported by any one of the selected TLS versions, it can be added to the list.</li><li>If TLSVersions contains TLSv1.3: TLSv1.3 exclusive encryption suites can be unspecified (the system will auto-complete all TLSv1.3 suites); if specified, all TLSv1.3 exclusive encryption suites must be included. Specifying only part is not supported.</li></ul><p><strong>Get available encryption suites:</strong><br>Call the <a href="https://www.tencentcloud.com/document/api/1822/133718?from_cn_redirect=1">DescribeSecurityPolicyCapabilities</a> API to query the encryption suite list supported by each TLS version.</p><p><strong>Note:</strong> If this parameter is not specified, the original configuration remains unchanged.</p>
                     * 
                     */
                    void SetCiphers(const std::vector<std::string>& _ciphers);

                    /**
                     * 判断参数 Ciphers 是否已赋值
                     * @return Ciphers 是否已赋值
                     * 
                     */
                    bool CiphersHasBeenSet() const;

                    /**
                     * 获取<p>Whether to only execute a preflight request. Values:</p><ul><li><strong>true</strong>: Only execute a preflight request without actually modifying resources. The preflight request will verify parameter format, permission, and configuration validity, helping you identify potential issues before proceeding with any operations.</li><li><strong>false</strong> (default): Execute a normal request. After passing the preflight, the security policy will be directly modified.</li></ul>
                     * @return DryRun <p>Whether to only execute a preflight request. Values:</p><ul><li><strong>true</strong>: Only execute a preflight request without actually modifying resources. The preflight request will verify parameter format, permission, and configuration validity, helping you identify potential issues before proceeding with any operations.</li><li><strong>false</strong> (default): Execute a normal request. After passing the preflight, the security policy will be directly modified.</li></ul>
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置<p>Whether to only execute a preflight request. Values:</p><ul><li><strong>true</strong>: Only execute a preflight request without actually modifying resources. The preflight request will verify parameter format, permission, and configuration validity, helping you identify potential issues before proceeding with any operations.</li><li><strong>false</strong> (default): Execute a normal request. After passing the preflight, the security policy will be directly modified.</li></ul>
                     * @param _dryRun <p>Whether to only execute a preflight request. Values:</p><ul><li><strong>true</strong>: Only execute a preflight request without actually modifying resources. The preflight request will verify parameter format, permission, and configuration validity, helping you identify potential issues before proceeding with any operations.</li><li><strong>false</strong> (default): Execute a normal request. After passing the preflight, the security policy will be directly modified.</li></ul>
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
                     * 获取<p>Modified security policy name, used to identify and distinguish different security policies.</p><p><strong>Naming rule:</strong></p><ul><li>Length: 2–128 characters.</li><li>Must start with English letters or Chinese characters.</li><li>Can contain English letters, Chinese characters, digits, half-width periods (.), underscores (_), and dashes (-).</li></ul><p><strong>Note:</strong> If this parameter is not specified, the original name remains unchanged.</p>
                     * @return SecurityPolicyName <p>Modified security policy name, used to identify and distinguish different security policies.</p><p><strong>Naming rule:</strong></p><ul><li>Length: 2–128 characters.</li><li>Must start with English letters or Chinese characters.</li><li>Can contain English letters, Chinese characters, digits, half-width periods (.), underscores (_), and dashes (-).</li></ul><p><strong>Note:</strong> If this parameter is not specified, the original name remains unchanged.</p>
                     * 
                     */
                    std::string GetSecurityPolicyName() const;

                    /**
                     * 设置<p>Modified security policy name, used to identify and distinguish different security policies.</p><p><strong>Naming rule:</strong></p><ul><li>Length: 2–128 characters.</li><li>Must start with English letters or Chinese characters.</li><li>Can contain English letters, Chinese characters, digits, half-width periods (.), underscores (_), and dashes (-).</li></ul><p><strong>Note:</strong> If this parameter is not specified, the original name remains unchanged.</p>
                     * @param _securityPolicyName <p>Modified security policy name, used to identify and distinguish different security policies.</p><p><strong>Naming rule:</strong></p><ul><li>Length: 2–128 characters.</li><li>Must start with English letters or Chinese characters.</li><li>Can contain English letters, Chinese characters, digits, half-width periods (.), underscores (_), and dashes (-).</li></ul><p><strong>Note:</strong> If this parameter is not specified, the original name remains unchanged.</p>
                     * 
                     */
                    void SetSecurityPolicyName(const std::string& _securityPolicyName);

                    /**
                     * 判断参数 SecurityPolicyName 是否已赋值
                     * @return SecurityPolicyName 是否已赋值
                     * 
                     */
                    bool SecurityPolicyNameHasBeenSet() const;

                    /**
                     * 获取<p>List of TLS protocol versions after modification. TLS (Transport Layer Security) is used to guarantee the security of communication between clients and the load balancer.</p><p><strong>Available values:</strong></p><ul><li><strong>TLSv1.0</strong>: Best compatibility, but low security level. Not recommended for production environment.</li><li><strong>TLSv1.1</strong>: Slightly better security than TLSv1.0, but still not recommended.</li><li><strong>TLSv1.2</strong>: Current mainstream security protocol version, balancing security and compatibility.</li><li><strong>TLSv1.3</strong>: Latest version, highest security and better performance. Recommended to prioritize.</li></ul><p><strong>Note:</strong> </p><ul><li>If this parameter is not specified, the original configuration remains unchanged.</li><li>When modifying the TLS version, check whether the Ciphers parameter configuration is compatible.</li></ul>
                     * @return TLSVersions <p>List of TLS protocol versions after modification. TLS (Transport Layer Security) is used to guarantee the security of communication between clients and the load balancer.</p><p><strong>Available values:</strong></p><ul><li><strong>TLSv1.0</strong>: Best compatibility, but low security level. Not recommended for production environment.</li><li><strong>TLSv1.1</strong>: Slightly better security than TLSv1.0, but still not recommended.</li><li><strong>TLSv1.2</strong>: Current mainstream security protocol version, balancing security and compatibility.</li><li><strong>TLSv1.3</strong>: Latest version, highest security and better performance. Recommended to prioritize.</li></ul><p><strong>Note:</strong> </p><ul><li>If this parameter is not specified, the original configuration remains unchanged.</li><li>When modifying the TLS version, check whether the Ciphers parameter configuration is compatible.</li></ul>
                     * 
                     */
                    std::vector<std::string> GetTLSVersions() const;

                    /**
                     * 设置<p>List of TLS protocol versions after modification. TLS (Transport Layer Security) is used to guarantee the security of communication between clients and the load balancer.</p><p><strong>Available values:</strong></p><ul><li><strong>TLSv1.0</strong>: Best compatibility, but low security level. Not recommended for production environment.</li><li><strong>TLSv1.1</strong>: Slightly better security than TLSv1.0, but still not recommended.</li><li><strong>TLSv1.2</strong>: Current mainstream security protocol version, balancing security and compatibility.</li><li><strong>TLSv1.3</strong>: Latest version, highest security and better performance. Recommended to prioritize.</li></ul><p><strong>Note:</strong> </p><ul><li>If this parameter is not specified, the original configuration remains unchanged.</li><li>When modifying the TLS version, check whether the Ciphers parameter configuration is compatible.</li></ul>
                     * @param _tLSVersions <p>List of TLS protocol versions after modification. TLS (Transport Layer Security) is used to guarantee the security of communication between clients and the load balancer.</p><p><strong>Available values:</strong></p><ul><li><strong>TLSv1.0</strong>: Best compatibility, but low security level. Not recommended for production environment.</li><li><strong>TLSv1.1</strong>: Slightly better security than TLSv1.0, but still not recommended.</li><li><strong>TLSv1.2</strong>: Current mainstream security protocol version, balancing security and compatibility.</li><li><strong>TLSv1.3</strong>: Latest version, highest security and better performance. Recommended to prioritize.</li></ul><p><strong>Note:</strong> </p><ul><li>If this parameter is not specified, the original configuration remains unchanged.</li><li>When modifying the TLS version, check whether the Ciphers parameter configuration is compatible.</li></ul>
                     * 
                     */
                    void SetTLSVersions(const std::vector<std::string>& _tLSVersions);

                    /**
                     * 判断参数 TLSVersions 是否已赋值
                     * @return TLSVersions 是否已赋值
                     * 
                     */
                    bool TLSVersionsHasBeenSet() const;

                private:

                    /**
                     * <p>Security policy ID, format: tls- followed by 8 alphanumeric characters.</p>
                     */
                    std::string m_securityPolicyId;
                    bool m_securityPolicyIdHasBeenSet;

                    /**
                     * <p>Modified encryption suite list. The encryption suite is used to negotiate the encryption algorithm between client and server.</p><p><strong>Configuration instructions:</strong></p><ul><li>The optional range of encryption suites depends on the selected TLS protocol version (TLSVersions parameter).</li><li>As long as an encryption suite is supported by any one of the selected TLS versions, it can be added to the list.</li><li>If TLSVersions contains TLSv1.3: TLSv1.3 exclusive encryption suites can be unspecified (the system will auto-complete all TLSv1.3 suites); if specified, all TLSv1.3 exclusive encryption suites must be included. Specifying only part is not supported.</li></ul><p><strong>Get available encryption suites:</strong><br>Call the <a href="https://www.tencentcloud.com/document/api/1822/133718?from_cn_redirect=1">DescribeSecurityPolicyCapabilities</a> API to query the encryption suite list supported by each TLS version.</p><p><strong>Note:</strong> If this parameter is not specified, the original configuration remains unchanged.</p>
                     */
                    std::vector<std::string> m_ciphers;
                    bool m_ciphersHasBeenSet;

                    /**
                     * <p>Whether to only execute a preflight request. Values:</p><ul><li><strong>true</strong>: Only execute a preflight request without actually modifying resources. The preflight request will verify parameter format, permission, and configuration validity, helping you identify potential issues before proceeding with any operations.</li><li><strong>false</strong> (default): Execute a normal request. After passing the preflight, the security policy will be directly modified.</li></ul>
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * <p>Modified security policy name, used to identify and distinguish different security policies.</p><p><strong>Naming rule:</strong></p><ul><li>Length: 2–128 characters.</li><li>Must start with English letters or Chinese characters.</li><li>Can contain English letters, Chinese characters, digits, half-width periods (.), underscores (_), and dashes (-).</li></ul><p><strong>Note:</strong> If this parameter is not specified, the original name remains unchanged.</p>
                     */
                    std::string m_securityPolicyName;
                    bool m_securityPolicyNameHasBeenSet;

                    /**
                     * <p>List of TLS protocol versions after modification. TLS (Transport Layer Security) is used to guarantee the security of communication between clients and the load balancer.</p><p><strong>Available values:</strong></p><ul><li><strong>TLSv1.0</strong>: Best compatibility, but low security level. Not recommended for production environment.</li><li><strong>TLSv1.1</strong>: Slightly better security than TLSv1.0, but still not recommended.</li><li><strong>TLSv1.2</strong>: Current mainstream security protocol version, balancing security and compatibility.</li><li><strong>TLSv1.3</strong>: Latest version, highest security and better performance. Recommended to prioritize.</li></ul><p><strong>Note:</strong> </p><ul><li>If this parameter is not specified, the original configuration remains unchanged.</li><li>When modifying the TLS version, check whether the Ciphers parameter configuration is compatible.</li></ul>
                     */
                    std::vector<std::string> m_tLSVersions;
                    bool m_tLSVersionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_MODIFYSECURITYPOLICYATTRIBUTESREQUEST_H_
