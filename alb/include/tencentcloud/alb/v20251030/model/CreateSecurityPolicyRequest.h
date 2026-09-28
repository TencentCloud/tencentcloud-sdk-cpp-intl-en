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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_CREATESECURITYPOLICYREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_CREATESECURITYPOLICYREQUEST_H_

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
                * CreateSecurityPolicy request structure.
                */
                class CreateSecurityPolicyRequest : public AbstractModel
                {
                public:
                    CreateSecurityPolicyRequest();
                    ~CreateSecurityPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>List of encryption suites supported by the security policy. Encryption suites are used to negotiate the encryption algorithm between client and server.</p><p><strong>Configuration instructions:</strong></p><ul><li>The optional range of encryption suites depends on the selected TLS protocol version (TLSVersions parameter).</li><li>An encryption suite can be added to the list as long as it is supported by any one of the selected TLS versions.</li><li>If TLSVersions includes TLSv1.3: you can add TLSv1.3 exclusive encryption suites without specifying them (the system will auto-complete all TLSv1.3 suites); if specified, all TLSv1.3 exclusive encryption suites must be included. Specifying only part of them is not supported.</li></ul><p><strong>Get available encryption suites:</strong><br>Call the <a href="https://www.tencentcloud.com/document/api/1822/133718?from_cn_redirect=1">DescribeSecurityPolicyCapabilities</a> API to query the encryption suite list supported by each TLS version.</p>
                     * @return Ciphers <p>List of encryption suites supported by the security policy. Encryption suites are used to negotiate the encryption algorithm between client and server.</p><p><strong>Configuration instructions:</strong></p><ul><li>The optional range of encryption suites depends on the selected TLS protocol version (TLSVersions parameter).</li><li>An encryption suite can be added to the list as long as it is supported by any one of the selected TLS versions.</li><li>If TLSVersions includes TLSv1.3: you can add TLSv1.3 exclusive encryption suites without specifying them (the system will auto-complete all TLSv1.3 suites); if specified, all TLSv1.3 exclusive encryption suites must be included. Specifying only part of them is not supported.</li></ul><p><strong>Get available encryption suites:</strong><br>Call the <a href="https://www.tencentcloud.com/document/api/1822/133718?from_cn_redirect=1">DescribeSecurityPolicyCapabilities</a> API to query the encryption suite list supported by each TLS version.</p>
                     * 
                     */
                    std::vector<std::string> GetCiphers() const;

                    /**
                     * 设置<p>List of encryption suites supported by the security policy. Encryption suites are used to negotiate the encryption algorithm between client and server.</p><p><strong>Configuration instructions:</strong></p><ul><li>The optional range of encryption suites depends on the selected TLS protocol version (TLSVersions parameter).</li><li>An encryption suite can be added to the list as long as it is supported by any one of the selected TLS versions.</li><li>If TLSVersions includes TLSv1.3: you can add TLSv1.3 exclusive encryption suites without specifying them (the system will auto-complete all TLSv1.3 suites); if specified, all TLSv1.3 exclusive encryption suites must be included. Specifying only part of them is not supported.</li></ul><p><strong>Get available encryption suites:</strong><br>Call the <a href="https://www.tencentcloud.com/document/api/1822/133718?from_cn_redirect=1">DescribeSecurityPolicyCapabilities</a> API to query the encryption suite list supported by each TLS version.</p>
                     * @param _ciphers <p>List of encryption suites supported by the security policy. Encryption suites are used to negotiate the encryption algorithm between client and server.</p><p><strong>Configuration instructions:</strong></p><ul><li>The optional range of encryption suites depends on the selected TLS protocol version (TLSVersions parameter).</li><li>An encryption suite can be added to the list as long as it is supported by any one of the selected TLS versions.</li><li>If TLSVersions includes TLSv1.3: you can add TLSv1.3 exclusive encryption suites without specifying them (the system will auto-complete all TLSv1.3 suites); if specified, all TLSv1.3 exclusive encryption suites must be included. Specifying only part of them is not supported.</li></ul><p><strong>Get available encryption suites:</strong><br>Call the <a href="https://www.tencentcloud.com/document/api/1822/133718?from_cn_redirect=1">DescribeSecurityPolicyCapabilities</a> API to query the encryption suite list supported by each TLS version.</p>
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
                     * 获取<p>List of TLS protocol versions supported by the security policy. TLS (Transport Layer Security) is used to ensure communication security between clients and load balancing.</p><p><strong>Available values:</strong></p><ul><li><strong>TLSv1.0</strong>: Best compatibility, but low security level. Not recommended for production environment.</li><li><strong>TLSv1.1</strong>: Slightly better security than TLSv1.0, but still not recommended.</li><li><strong>TLSv1.2</strong>: Current mainstream security protocol version, balancing security and compatibility.</li><li><strong>TLSv1.3</strong>: Latest version with the highest security and better performance. Recommended for priority use.</li></ul><p><strong>Recommendation:</strong> For production environment, at least select TLSv1.2. If client support is available, preferentially enable TLSv1.3.</p>
                     * @return TLSVersions <p>List of TLS protocol versions supported by the security policy. TLS (Transport Layer Security) is used to ensure communication security between clients and load balancing.</p><p><strong>Available values:</strong></p><ul><li><strong>TLSv1.0</strong>: Best compatibility, but low security level. Not recommended for production environment.</li><li><strong>TLSv1.1</strong>: Slightly better security than TLSv1.0, but still not recommended.</li><li><strong>TLSv1.2</strong>: Current mainstream security protocol version, balancing security and compatibility.</li><li><strong>TLSv1.3</strong>: Latest version with the highest security and better performance. Recommended for priority use.</li></ul><p><strong>Recommendation:</strong> For production environment, at least select TLSv1.2. If client support is available, preferentially enable TLSv1.3.</p>
                     * 
                     */
                    std::vector<std::string> GetTLSVersions() const;

                    /**
                     * 设置<p>List of TLS protocol versions supported by the security policy. TLS (Transport Layer Security) is used to ensure communication security between clients and load balancing.</p><p><strong>Available values:</strong></p><ul><li><strong>TLSv1.0</strong>: Best compatibility, but low security level. Not recommended for production environment.</li><li><strong>TLSv1.1</strong>: Slightly better security than TLSv1.0, but still not recommended.</li><li><strong>TLSv1.2</strong>: Current mainstream security protocol version, balancing security and compatibility.</li><li><strong>TLSv1.3</strong>: Latest version with the highest security and better performance. Recommended for priority use.</li></ul><p><strong>Recommendation:</strong> For production environment, at least select TLSv1.2. If client support is available, preferentially enable TLSv1.3.</p>
                     * @param _tLSVersions <p>List of TLS protocol versions supported by the security policy. TLS (Transport Layer Security) is used to ensure communication security between clients and load balancing.</p><p><strong>Available values:</strong></p><ul><li><strong>TLSv1.0</strong>: Best compatibility, but low security level. Not recommended for production environment.</li><li><strong>TLSv1.1</strong>: Slightly better security than TLSv1.0, but still not recommended.</li><li><strong>TLSv1.2</strong>: Current mainstream security protocol version, balancing security and compatibility.</li><li><strong>TLSv1.3</strong>: Latest version with the highest security and better performance. Recommended for priority use.</li></ul><p><strong>Recommendation:</strong> For production environment, at least select TLSv1.2. If client support is available, preferentially enable TLSv1.3.</p>
                     * 
                     */
                    void SetTLSVersions(const std::vector<std::string>& _tLSVersions);

                    /**
                     * 判断参数 TLSVersions 是否已赋值
                     * @return TLSVersions 是否已赋值
                     * 
                     */
                    bool TLSVersionsHasBeenSet() const;

                    /**
                     * 获取<p>Client idempotency token.</p><p>Used for ensuring request idempotency and preventing duplicate creation caused by network timeout or client retry. We recommend using a UUID as the token value. When the same ClientToken is used for repeated requests within its validity period, the server will return the same result.</p>
                     * @return ClientToken <p>Client idempotency token.</p><p>Used for ensuring request idempotency and preventing duplicate creation caused by network timeout or client retry. We recommend using a UUID as the token value. When the same ClientToken is used for repeated requests within its validity period, the server will return the same result.</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>Client idempotency token.</p><p>Used for ensuring request idempotency and preventing duplicate creation caused by network timeout or client retry. We recommend using a UUID as the token value. When the same ClientToken is used for repeated requests within its validity period, the server will return the same result.</p>
                     * @param _clientToken <p>Client idempotency token.</p><p>Used for ensuring request idempotency and preventing duplicate creation caused by network timeout or client retry. We recommend using a UUID as the token value. When the same ClientToken is used for repeated requests within its validity period, the server will return the same result.</p>
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取<p>Whether to only execute a preflight request. Values:</p><ul><li><strong>true</strong>: Only execute a preflight request without creating resources. The preflight request will verify parameter format, permission, and resource quota, helping you identify potential issues before proceeding with any operations.</li><li><strong>false</strong> (default): Execute a normal request. After the preflight passes, a security policy will be created directly.</li></ul>
                     * @return DryRun <p>Whether to only execute a preflight request. Values:</p><ul><li><strong>true</strong>: Only execute a preflight request without creating resources. The preflight request will verify parameter format, permission, and resource quota, helping you identify potential issues before proceeding with any operations.</li><li><strong>false</strong> (default): Execute a normal request. After the preflight passes, a security policy will be created directly.</li></ul>
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置<p>Whether to only execute a preflight request. Values:</p><ul><li><strong>true</strong>: Only execute a preflight request without creating resources. The preflight request will verify parameter format, permission, and resource quota, helping you identify potential issues before proceeding with any operations.</li><li><strong>false</strong> (default): Execute a normal request. After the preflight passes, a security policy will be created directly.</li></ul>
                     * @param _dryRun <p>Whether to only execute a preflight request. Values:</p><ul><li><strong>true</strong>: Only execute a preflight request without creating resources. The preflight request will verify parameter format, permission, and resource quota, helping you identify potential issues before proceeding with any operations.</li><li><strong>false</strong> (default): Execute a normal request. After the preflight passes, a security policy will be created directly.</li></ul>
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
                     * 获取<p>security policy name. Used to identify and distinguish different security policies.</p><p><strong>Naming rule:</strong></p><ul><li>2–128 characters in length.</li><li>Must start with English letters or Chinese characters.</li><li>Can contain English letters, Chinese characters, digits, half-width periods (.), underscores (_), and dashes (-).</li></ul><p><strong>Recommendation:</strong> Use a name with business meaning, such as "prod-high-security" or "test environment policy".</p>
                     * @return SecurityPolicyName <p>security policy name. Used to identify and distinguish different security policies.</p><p><strong>Naming rule:</strong></p><ul><li>2–128 characters in length.</li><li>Must start with English letters or Chinese characters.</li><li>Can contain English letters, Chinese characters, digits, half-width periods (.), underscores (_), and dashes (-).</li></ul><p><strong>Recommendation:</strong> Use a name with business meaning, such as "prod-high-security" or "test environment policy".</p>
                     * 
                     */
                    std::string GetSecurityPolicyName() const;

                    /**
                     * 设置<p>security policy name. Used to identify and distinguish different security policies.</p><p><strong>Naming rule:</strong></p><ul><li>2–128 characters in length.</li><li>Must start with English letters or Chinese characters.</li><li>Can contain English letters, Chinese characters, digits, half-width periods (.), underscores (_), and dashes (-).</li></ul><p><strong>Recommendation:</strong> Use a name with business meaning, such as "prod-high-security" or "test environment policy".</p>
                     * @param _securityPolicyName <p>security policy name. Used to identify and distinguish different security policies.</p><p><strong>Naming rule:</strong></p><ul><li>2–128 characters in length.</li><li>Must start with English letters or Chinese characters.</li><li>Can contain English letters, Chinese characters, digits, half-width periods (.), underscores (_), and dashes (-).</li></ul><p><strong>Recommendation:</strong> Use a name with business meaning, such as "prod-high-security" or "test environment policy".</p>
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
                     * 获取<p>Tag list of the security policy. Tags are used for resource classification and management, making it easy to filter and organize resources by business, environment, department, and other dimensions.</p><p>Each tag consists of a Key-Value pair, and tag keys cannot be repeated under the same resource.</p>
                     * @return Tags <p>Tag list of the security policy. Tags are used for resource classification and management, making it easy to filter and organize resources by business, environment, department, and other dimensions.</p><p>Each tag consists of a Key-Value pair, and tag keys cannot be repeated under the same resource.</p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>Tag list of the security policy. Tags are used for resource classification and management, making it easy to filter and organize resources by business, environment, department, and other dimensions.</p><p>Each tag consists of a Key-Value pair, and tag keys cannot be repeated under the same resource.</p>
                     * @param _tags <p>Tag list of the security policy. Tags are used for resource classification and management, making it easy to filter and organize resources by business, environment, department, and other dimensions.</p><p>Each tag consists of a Key-Value pair, and tag keys cannot be repeated under the same resource.</p>
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
                     * <p>List of encryption suites supported by the security policy. Encryption suites are used to negotiate the encryption algorithm between client and server.</p><p><strong>Configuration instructions:</strong></p><ul><li>The optional range of encryption suites depends on the selected TLS protocol version (TLSVersions parameter).</li><li>An encryption suite can be added to the list as long as it is supported by any one of the selected TLS versions.</li><li>If TLSVersions includes TLSv1.3: you can add TLSv1.3 exclusive encryption suites without specifying them (the system will auto-complete all TLSv1.3 suites); if specified, all TLSv1.3 exclusive encryption suites must be included. Specifying only part of them is not supported.</li></ul><p><strong>Get available encryption suites:</strong><br>Call the <a href="https://www.tencentcloud.com/document/api/1822/133718?from_cn_redirect=1">DescribeSecurityPolicyCapabilities</a> API to query the encryption suite list supported by each TLS version.</p>
                     */
                    std::vector<std::string> m_ciphers;
                    bool m_ciphersHasBeenSet;

                    /**
                     * <p>List of TLS protocol versions supported by the security policy. TLS (Transport Layer Security) is used to ensure communication security between clients and load balancing.</p><p><strong>Available values:</strong></p><ul><li><strong>TLSv1.0</strong>: Best compatibility, but low security level. Not recommended for production environment.</li><li><strong>TLSv1.1</strong>: Slightly better security than TLSv1.0, but still not recommended.</li><li><strong>TLSv1.2</strong>: Current mainstream security protocol version, balancing security and compatibility.</li><li><strong>TLSv1.3</strong>: Latest version with the highest security and better performance. Recommended for priority use.</li></ul><p><strong>Recommendation:</strong> For production environment, at least select TLSv1.2. If client support is available, preferentially enable TLSv1.3.</p>
                     */
                    std::vector<std::string> m_tLSVersions;
                    bool m_tLSVersionsHasBeenSet;

                    /**
                     * <p>Client idempotency token.</p><p>Used for ensuring request idempotency and preventing duplicate creation caused by network timeout or client retry. We recommend using a UUID as the token value. When the same ClientToken is used for repeated requests within its validity period, the server will return the same result.</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>Whether to only execute a preflight request. Values:</p><ul><li><strong>true</strong>: Only execute a preflight request without creating resources. The preflight request will verify parameter format, permission, and resource quota, helping you identify potential issues before proceeding with any operations.</li><li><strong>false</strong> (default): Execute a normal request. After the preflight passes, a security policy will be created directly.</li></ul>
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * <p>security policy name. Used to identify and distinguish different security policies.</p><p><strong>Naming rule:</strong></p><ul><li>2–128 characters in length.</li><li>Must start with English letters or Chinese characters.</li><li>Can contain English letters, Chinese characters, digits, half-width periods (.), underscores (_), and dashes (-).</li></ul><p><strong>Recommendation:</strong> Use a name with business meaning, such as "prod-high-security" or "test environment policy".</p>
                     */
                    std::string m_securityPolicyName;
                    bool m_securityPolicyNameHasBeenSet;

                    /**
                     * <p>Tag list of the security policy. Tags are used for resource classification and management, making it easy to filter and organize resources by business, environment, department, and other dimensions.</p><p>Each tag consists of a Key-Value pair, and tag keys cannot be repeated under the same resource.</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_CREATESECURITYPOLICYREQUEST_H_
