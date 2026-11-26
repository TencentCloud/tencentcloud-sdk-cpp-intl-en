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
                     * 获取Target domain name for free certificate application.
                     * @return Domain Target domain name for free certificate application.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Target domain name for free certificate application.
                     * @param _domain Target domain name for free certificate application.
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
                     * 获取Verification methods for applying for a free certificate. For detailed verification method descriptions, see [Free Certificate Application Method Documentation](https://www.tencentcloud.com/document/product/1552/90437?from_cn_redirect=1). Valid values:
<li>http_challenge: HTTP access file validation mode, which gets file information by accessing the specified URL of the domain over HTTP to complete the free certificate application verification;</li>
<li>dns_challenge: DNS delegation verification method, which completes free certificate application verification by adding a designated host record to point to EdgeOne.</li>
Note: After triggering this API, you need to complete the verification content configuration based on the returned verification information. Once configured, you also need to verify through the <a href = 'https://www.tencentcloud.com/document/product/1552/124806?from_cn_redirect=1'>Check Free Certificate Application Result</a> API. After verification passes, the application succeeds. Once the free certificate application is successful, you can call the <a href = 'https://www.tencentcloud.com/document/product/1552/80764?from_cn_redirect=1'>Configure Domain Name Certificate</a> API to deploy the free certificate for the current domain name.
                     * @return VerificationMethod Verification methods for applying for a free certificate. For detailed verification method descriptions, see [Free Certificate Application Method Documentation](https://www.tencentcloud.com/document/product/1552/90437?from_cn_redirect=1). Valid values:
<li>http_challenge: HTTP access file validation mode, which gets file information by accessing the specified URL of the domain over HTTP to complete the free certificate application verification;</li>
<li>dns_challenge: DNS delegation verification method, which completes free certificate application verification by adding a designated host record to point to EdgeOne.</li>
Note: After triggering this API, you need to complete the verification content configuration based on the returned verification information. Once configured, you also need to verify through the <a href = 'https://www.tencentcloud.com/document/product/1552/124806?from_cn_redirect=1'>Check Free Certificate Application Result</a> API. After verification passes, the application succeeds. Once the free certificate application is successful, you can call the <a href = 'https://www.tencentcloud.com/document/product/1552/80764?from_cn_redirect=1'>Configure Domain Name Certificate</a> API to deploy the free certificate for the current domain name.
                     * 
                     */
                    std::string GetVerificationMethod() const;

                    /**
                     * 设置Verification methods for applying for a free certificate. For detailed verification method descriptions, see [Free Certificate Application Method Documentation](https://www.tencentcloud.com/document/product/1552/90437?from_cn_redirect=1). Valid values:
<li>http_challenge: HTTP access file validation mode, which gets file information by accessing the specified URL of the domain over HTTP to complete the free certificate application verification;</li>
<li>dns_challenge: DNS delegation verification method, which completes free certificate application verification by adding a designated host record to point to EdgeOne.</li>
Note: After triggering this API, you need to complete the verification content configuration based on the returned verification information. Once configured, you also need to verify through the <a href = 'https://www.tencentcloud.com/document/product/1552/124806?from_cn_redirect=1'>Check Free Certificate Application Result</a> API. After verification passes, the application succeeds. Once the free certificate application is successful, you can call the <a href = 'https://www.tencentcloud.com/document/product/1552/80764?from_cn_redirect=1'>Configure Domain Name Certificate</a> API to deploy the free certificate for the current domain name.
                     * @param _verificationMethod Verification methods for applying for a free certificate. For detailed verification method descriptions, see [Free Certificate Application Method Documentation](https://www.tencentcloud.com/document/product/1552/90437?from_cn_redirect=1). Valid values:
<li>http_challenge: HTTP access file validation mode, which gets file information by accessing the specified URL of the domain over HTTP to complete the free certificate application verification;</li>
<li>dns_challenge: DNS delegation verification method, which completes free certificate application verification by adding a designated host record to point to EdgeOne.</li>
Note: After triggering this API, you need to complete the verification content configuration based on the returned verification information. Once configured, you also need to verify through the <a href = 'https://www.tencentcloud.com/document/product/1552/124806?from_cn_redirect=1'>Check Free Certificate Application Result</a> API. After verification passes, the application succeeds. Once the free certificate application is successful, you can call the <a href = 'https://www.tencentcloud.com/document/product/1552/80764?from_cn_redirect=1'>Configure Domain Name Certificate</a> API to deploy the free certificate for the current domain name.
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
                     * Target domain name for free certificate application.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Verification methods for applying for a free certificate. For detailed verification method descriptions, see [Free Certificate Application Method Documentation](https://www.tencentcloud.com/document/product/1552/90437?from_cn_redirect=1). Valid values:
<li>http_challenge: HTTP access file validation mode, which gets file information by accessing the specified URL of the domain over HTTP to complete the free certificate application verification;</li>
<li>dns_challenge: DNS delegation verification method, which completes free certificate application verification by adding a designated host record to point to EdgeOne.</li>
Note: After triggering this API, you need to complete the verification content configuration based on the returned verification information. Once configured, you also need to verify through the <a href = 'https://www.tencentcloud.com/document/product/1552/124806?from_cn_redirect=1'>Check Free Certificate Application Result</a> API. After verification passes, the application succeeds. Once the free certificate application is successful, you can call the <a href = 'https://www.tencentcloud.com/document/product/1552/80764?from_cn_redirect=1'>Configure Domain Name Certificate</a> API to deploy the free certificate for the current domain name.
                     */
                    std::string m_verificationMethod;
                    bool m_verificationMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_APPLYFREECERTIFICATEREQUEST_H_
