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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_APPLYFREECERTIFICATEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_APPLYFREECERTIFICATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ApplyFreeCertificate request structure.
                */
                class ApplyFreeCertificateRequest : public AbstractModel
                {
                public:
                    ApplyFreeCertificateRequest();
                    ~ApplyFreeCertificateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Site ID.
                     * @return ZoneId Site ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID.
                     * @param _zoneId Site ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Specifies the target domain name for free certificate application.
                     * @return Domain Specifies the target domain name for free certificate application.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Specifies the target domain name for free certificate application.
                     * @param _domain Specifies the target domain name for free certificate application.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Specifies the verification method for applying for a free certificate. for detailed verification methods, refer to the [free certificate application documentation](https://www.tencentcloud.com/document/product/1552/90437?from_cn_redirect=1). valid values:.
<li>http_challenge: specifies the file validation mode for http access. verifies by getting file information from the specified URL of the access domain to complete free certificate application.</li>
<li>dns_challenge: specifies the dns delegation verification method. verifies the free certificate application by adding the designated host record pointing to EdgeOne.</li>

Note: after triggering this api, you need to complete the verification content configuration based on the returned verification information. once configured, you must also verify by calling the <a href = 'https://www.tencentcloud.com/document/product/1552/124806?from_cn_redirect=1'>check free certificate application result</a> api. after verification passes, the application succeeds. once the application is successful, you can call the <a href = 'https://www.tencentcloud.com/document/product/1552/80764?from_cn_redirect=1'>configure domain name certificate</a> API to deploy a free certificate for the current domain name.
                     * @return VerificationMethod Specifies the verification method for applying for a free certificate. for detailed verification methods, refer to the [free certificate application documentation](https://www.tencentcloud.com/document/product/1552/90437?from_cn_redirect=1). valid values:.
<li>http_challenge: specifies the file validation mode for http access. verifies by getting file information from the specified URL of the access domain to complete free certificate application.</li>
<li>dns_challenge: specifies the dns delegation verification method. verifies the free certificate application by adding the designated host record pointing to EdgeOne.</li>

Note: after triggering this api, you need to complete the verification content configuration based on the returned verification information. once configured, you must also verify by calling the <a href = 'https://www.tencentcloud.com/document/product/1552/124806?from_cn_redirect=1'>check free certificate application result</a> api. after verification passes, the application succeeds. once the application is successful, you can call the <a href = 'https://www.tencentcloud.com/document/product/1552/80764?from_cn_redirect=1'>configure domain name certificate</a> API to deploy a free certificate for the current domain name.
                     * 
                     */
                    std::string GetVerificationMethod() const;

                    /**
                     * 设置Specifies the verification method for applying for a free certificate. for detailed verification methods, refer to the [free certificate application documentation](https://www.tencentcloud.com/document/product/1552/90437?from_cn_redirect=1). valid values:.
<li>http_challenge: specifies the file validation mode for http access. verifies by getting file information from the specified URL of the access domain to complete free certificate application.</li>
<li>dns_challenge: specifies the dns delegation verification method. verifies the free certificate application by adding the designated host record pointing to EdgeOne.</li>

Note: after triggering this api, you need to complete the verification content configuration based on the returned verification information. once configured, you must also verify by calling the <a href = 'https://www.tencentcloud.com/document/product/1552/124806?from_cn_redirect=1'>check free certificate application result</a> api. after verification passes, the application succeeds. once the application is successful, you can call the <a href = 'https://www.tencentcloud.com/document/product/1552/80764?from_cn_redirect=1'>configure domain name certificate</a> API to deploy a free certificate for the current domain name.
                     * @param _verificationMethod Specifies the verification method for applying for a free certificate. for detailed verification methods, refer to the [free certificate application documentation](https://www.tencentcloud.com/document/product/1552/90437?from_cn_redirect=1). valid values:.
<li>http_challenge: specifies the file validation mode for http access. verifies by getting file information from the specified URL of the access domain to complete free certificate application.</li>
<li>dns_challenge: specifies the dns delegation verification method. verifies the free certificate application by adding the designated host record pointing to EdgeOne.</li>

Note: after triggering this api, you need to complete the verification content configuration based on the returned verification information. once configured, you must also verify by calling the <a href = 'https://www.tencentcloud.com/document/product/1552/124806?from_cn_redirect=1'>check free certificate application result</a> api. after verification passes, the application succeeds. once the application is successful, you can call the <a href = 'https://www.tencentcloud.com/document/product/1552/80764?from_cn_redirect=1'>configure domain name certificate</a> API to deploy a free certificate for the current domain name.
                     * 
                     */
                    void SetVerificationMethod(const std::string& _verificationMethod);

                    /**
                     * 判断参数 VerificationMethod 是否已赋值
                     * @return VerificationMethod 是否已赋值
                     * 
                     */
                    bool VerificationMethodHasBeenSet() const;

                private:

                    /**
                     * Site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Specifies the target domain name for free certificate application.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Specifies the verification method for applying for a free certificate. for detailed verification methods, refer to the [free certificate application documentation](https://www.tencentcloud.com/document/product/1552/90437?from_cn_redirect=1). valid values:.
<li>http_challenge: specifies the file validation mode for http access. verifies by getting file information from the specified URL of the access domain to complete free certificate application.</li>
<li>dns_challenge: specifies the dns delegation verification method. verifies the free certificate application by adding the designated host record pointing to EdgeOne.</li>

Note: after triggering this api, you need to complete the verification content configuration based on the returned verification information. once configured, you must also verify by calling the <a href = 'https://www.tencentcloud.com/document/product/1552/124806?from_cn_redirect=1'>check free certificate application result</a> api. after verification passes, the application succeeds. once the application is successful, you can call the <a href = 'https://www.tencentcloud.com/document/product/1552/80764?from_cn_redirect=1'>configure domain name certificate</a> API to deploy a free certificate for the current domain name.
                     */
                    std::string m_verificationMethod;
                    bool m_verificationMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_APPLYFREECERTIFICATEREQUEST_H_
