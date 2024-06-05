/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_HTTPS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_HTTPS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Hsts.h>
#include <tencentcloud/teo/v20220901/model/ServerCertInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Domain name HTTPS acceleration configuration. This is disabled by default.
                */
                class Https : public AbstractModel
                {
                public:
                    Https();
                    ~Https() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable HTTP2. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Http2 Whether to enable HTTP2. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHttp2() const;

                    /**
                     * 设置Whether to enable HTTP2. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _http2 Whether to enable HTTP2. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHttp2(const std::string& _http2);

                    /**
                     * 判断参数 Http2 是否已赋值
                     * @return Http2 是否已赋值
                     * 
                     */
                    bool Http2HasBeenSet() const;

                    /**
                     * 获取Whether to enable OCSP. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OcspStapling Whether to enable OCSP. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOcspStapling() const;

                    /**
                     * 设置Whether to enable OCSP. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ocspStapling Whether to enable OCSP. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOcspStapling(const std::string& _ocspStapling);

                    /**
                     * 判断参数 OcspStapling 是否已赋值
                     * @return OcspStapling 是否已赋值
                     * 
                     */
                    bool OcspStaplingHasBeenSet() const;

                    /**
                     * 获取TLS version. Valid values: 
<li>`TLSv1`: TLSv1 version;</li>
<li>`TLSV1.1`: TLSv1.1 version;</li>
<li>`TLSV1.2`: TLSv1.2 version;</li>
<li>`TLSv1.3`: TLSv1.3 version.</li>Only consecutive versions can be enabled at the same time. 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return TlsVersion TLS version. Valid values: 
<li>`TLSv1`: TLSv1 version;</li>
<li>`TLSV1.1`: TLSv1.1 version;</li>
<li>`TLSV1.2`: TLSv1.2 version;</li>
<li>`TLSv1.3`: TLSv1.3 version.</li>Only consecutive versions can be enabled at the same time. 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetTlsVersion() const;

                    /**
                     * 设置TLS version. Valid values: 
<li>`TLSv1`: TLSv1 version;</li>
<li>`TLSV1.1`: TLSv1.1 version;</li>
<li>`TLSV1.2`: TLSv1.2 version;</li>
<li>`TLSv1.3`: TLSv1.3 version.</li>Only consecutive versions can be enabled at the same time. 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _tlsVersion TLS version. Valid values: 
<li>`TLSv1`: TLSv1 version;</li>
<li>`TLSV1.1`: TLSv1.1 version;</li>
<li>`TLSV1.2`: TLSv1.2 version;</li>
<li>`TLSv1.3`: TLSv1.3 version.</li>Only consecutive versions can be enabled at the same time. 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTlsVersion(const std::vector<std::string>& _tlsVersion);

                    /**
                     * 判断参数 TlsVersion 是否已赋值
                     * @return TlsVersion 是否已赋值
                     * 
                     */
                    bool TlsVersionHasBeenSet() const;

                    /**
                     * 获取HSTS Configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Hsts HSTS Configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Hsts GetHsts() const;

                    /**
                     * 设置HSTS Configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hsts HSTS Configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHsts(const Hsts& _hsts);

                    /**
                     * 判断参数 Hsts 是否已赋值
                     * @return Hsts 是否已赋值
                     * 
                     */
                    bool HstsHasBeenSet() const;

                    /**
                     * 获取The certificate configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CertInfo The certificate configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ServerCertInfo> GetCertInfo() const;

                    /**
                     * 设置The certificate configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _certInfo The certificate configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCertInfo(const std::vector<ServerCertInfo>& _certInfo);

                    /**
                     * 判断参数 CertInfo 是否已赋值
                     * @return CertInfo 是否已赋值
                     * 
                     */
                    bool CertInfoHasBeenSet() const;

                    /**
                     * 获取Whether the certificate is managed by EdgeOne. Values:
<li>`apply`: Managed by EdgeOne.</li>
<li>`none`: Not managed by EdgeOne.</li>If it is left empty, the default value `none` is used.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ApplyType Whether the certificate is managed by EdgeOne. Values:
<li>`apply`: Managed by EdgeOne.</li>
<li>`none`: Not managed by EdgeOne.</li>If it is left empty, the default value `none` is used.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetApplyType() const;

                    /**
                     * 设置Whether the certificate is managed by EdgeOne. Values:
<li>`apply`: Managed by EdgeOne.</li>
<li>`none`: Not managed by EdgeOne.</li>If it is left empty, the default value `none` is used.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _applyType Whether the certificate is managed by EdgeOne. Values:
<li>`apply`: Managed by EdgeOne.</li>
<li>`none`: Not managed by EdgeOne.</li>If it is left empty, the default value `none` is used.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetApplyType(const std::string& _applyType);

                    /**
                     * 判断参数 ApplyType 是否已赋值
                     * @return ApplyType 是否已赋值
                     * 
                     */
                    bool ApplyTypeHasBeenSet() const;

                    /**
                     * 获取The cipher suite, with values:
<li>loose-v2023: Provides high compatibility with general security, and supports TLS 1.0-1.3 cipher suites;</li>
<li>general-v2023: Provides relatively high compatibility with moderate security, and supports TLS 1.2-1.3 cipher suites;</li>
<li>strict-v2023: Provides high security, disables all cipher suites with security risks, and supports TLS 1.2-1.3 cipher suites.</li>
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return CipherSuite The cipher suite, with values:
<li>loose-v2023: Provides high compatibility with general security, and supports TLS 1.0-1.3 cipher suites;</li>
<li>general-v2023: Provides relatively high compatibility with moderate security, and supports TLS 1.2-1.3 cipher suites;</li>
<li>strict-v2023: Provides high security, disables all cipher suites with security risks, and supports TLS 1.2-1.3 cipher suites.</li>
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    std::string GetCipherSuite() const;

                    /**
                     * 设置The cipher suite, with values:
<li>loose-v2023: Provides high compatibility with general security, and supports TLS 1.0-1.3 cipher suites;</li>
<li>general-v2023: Provides relatively high compatibility with moderate security, and supports TLS 1.2-1.3 cipher suites;</li>
<li>strict-v2023: Provides high security, disables all cipher suites with security risks, and supports TLS 1.2-1.3 cipher suites.</li>
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _cipherSuite The cipher suite, with values:
<li>loose-v2023: Provides high compatibility with general security, and supports TLS 1.0-1.3 cipher suites;</li>
<li>general-v2023: Provides relatively high compatibility with moderate security, and supports TLS 1.2-1.3 cipher suites;</li>
<li>strict-v2023: Provides high security, disables all cipher suites with security risks, and supports TLS 1.2-1.3 cipher suites.</li>
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetCipherSuite(const std::string& _cipherSuite);

                    /**
                     * 判断参数 CipherSuite 是否已赋值
                     * @return CipherSuite 是否已赋值
                     * 
                     */
                    bool CipherSuiteHasBeenSet() const;

                private:

                    /**
                     * Whether to enable HTTP2. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_http2;
                    bool m_http2HasBeenSet;

                    /**
                     * Whether to enable OCSP. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ocspStapling;
                    bool m_ocspStaplingHasBeenSet;

                    /**
                     * TLS version. Valid values: 
<li>`TLSv1`: TLSv1 version;</li>
<li>`TLSV1.1`: TLSv1.1 version;</li>
<li>`TLSV1.2`: TLSv1.2 version;</li>
<li>`TLSv1.3`: TLSv1.3 version.</li>Only consecutive versions can be enabled at the same time. 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_tlsVersion;
                    bool m_tlsVersionHasBeenSet;

                    /**
                     * HSTS Configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Hsts m_hsts;
                    bool m_hstsHasBeenSet;

                    /**
                     * The certificate configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ServerCertInfo> m_certInfo;
                    bool m_certInfoHasBeenSet;

                    /**
                     * Whether the certificate is managed by EdgeOne. Values:
<li>`apply`: Managed by EdgeOne.</li>
<li>`none`: Not managed by EdgeOne.</li>If it is left empty, the default value `none` is used.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_applyType;
                    bool m_applyTypeHasBeenSet;

                    /**
                     * The cipher suite, with values:
<li>loose-v2023: Provides high compatibility with general security, and supports TLS 1.0-1.3 cipher suites;</li>
<li>general-v2023: Provides relatively high compatibility with moderate security, and supports TLS 1.2-1.3 cipher suites;</li>
<li>strict-v2023: Provides high security, disables all cipher suites with security risks, and supports TLS 1.2-1.3 cipher suites.</li>
Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    std::string m_cipherSuite;
                    bool m_cipherSuiteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_HTTPS_H_
