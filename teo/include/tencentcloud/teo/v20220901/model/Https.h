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
                     * 获取http2 configuration switch. valid values:.
<li>`on`: Enable;</li>

<li>off: Disable.</li>
                     * @return Http2 http2 configuration switch. valid values:.
<li>`on`: Enable;</li>

<li>off: Disable.</li>
                     * 
                     */
                    std::string GetHttp2() const;

                    /**
                     * 设置http2 configuration switch. valid values:.
<li>`on`: Enable;</li>

<li>off: Disable.</li>
                     * @param _http2 http2 configuration switch. valid values:.
<li>`on`: Enable;</li>

<li>off: Disable.</li>
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
                     * 获取OCSP configuration switch. valid values:.
<li>`on`: Enable;</li>

<li>off: Disable.</li>
                     * @return OcspStapling OCSP configuration switch. valid values:.
<li>`on`: Enable;</li>

<li>off: Disable.</li>
                     * 
                     */
                    std::string GetOcspStapling() const;

                    /**
                     * 设置OCSP configuration switch. valid values:.
<li>`on`: Enable;</li>

<li>off: Disable.</li>
                     * @param _ocspStapling OCSP configuration switch. valid values:.
<li>`on`: Enable;</li>

<li>off: Disable.</li>
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
                     * 获取Tls version settings, valid values:.
<Li>`TLSv1`: tlsv1 version;</li>.
<li>`TLSV1.1`: TLSV1.1 version;</li>.
<li>TLSV1.2: specifies the TLSV1.2 version.</li>.
<Li>TLSv1.3: specifies the tlsv1.3 version. consecutive versions must be enabled when modifying.</li>.
                     * @return TlsVersion Tls version settings, valid values:.
<Li>`TLSv1`: tlsv1 version;</li>.
<li>`TLSV1.1`: TLSV1.1 version;</li>.
<li>TLSV1.2: specifies the TLSV1.2 version.</li>.
<Li>TLSv1.3: specifies the tlsv1.3 version. consecutive versions must be enabled when modifying.</li>.
                     * 
                     */
                    std::vector<std::string> GetTlsVersion() const;

                    /**
                     * 设置Tls version settings, valid values:.
<Li>`TLSv1`: tlsv1 version;</li>.
<li>`TLSV1.1`: TLSV1.1 version;</li>.
<li>TLSV1.2: specifies the TLSV1.2 version.</li>.
<Li>TLSv1.3: specifies the tlsv1.3 version. consecutive versions must be enabled when modifying.</li>.
                     * @param _tlsVersion Tls version settings, valid values:.
<Li>`TLSv1`: tlsv1 version;</li>.
<li>`TLSV1.1`: TLSV1.1 version;</li>.
<li>TLSV1.2: specifies the TLSV1.2 version.</li>.
<Li>TLSv1.3: specifies the tlsv1.3 version. consecutive versions must be enabled when modifying.</li>.
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
                     * 获取Application type. valid values:.
<li>`apply`: managed by EdgeOne.</li>.
<li>`none`: not managed by EdgeOne.</li>if it is left empty, the default value `none` is used.
                     * @return ApplyType Application type. valid values:.
<li>`apply`: managed by EdgeOne.</li>.
<li>`none`: not managed by EdgeOne.</li>if it is left empty, the default value `none` is used.
                     * 
                     */
                    std::string GetApplyType() const;

                    /**
                     * 设置Application type. valid values:.
<li>`apply`: managed by EdgeOne.</li>.
<li>`none`: not managed by EdgeOne.</li>if it is left empty, the default value `none` is used.
                     * @param _applyType Application type. valid values:.
<li>`apply`: managed by EdgeOne.</li>.
<li>`none`: not managed by EdgeOne.</li>if it is left empty, the default value `none` is used.
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
                     * 获取The cipher suite, with valid values:.
<li>loose-v2023: provides high compatibility with general security, and supports TLS 1.0-1.3 cipher suites;</li>.
<li>general-v2023: provides relatively high compatibility with moderate security, and supports TLS 1.2-1.3 cipher suites.</li>.
<li>strict-v2023: provides high security, disables all cipher suites with security risks, and supports TLS 1.2-1.3 cipher suites.</li>.
                     * @return CipherSuite The cipher suite, with valid values:.
<li>loose-v2023: provides high compatibility with general security, and supports TLS 1.0-1.3 cipher suites;</li>.
<li>general-v2023: provides relatively high compatibility with moderate security, and supports TLS 1.2-1.3 cipher suites.</li>.
<li>strict-v2023: provides high security, disables all cipher suites with security risks, and supports TLS 1.2-1.3 cipher suites.</li>.
                     * 
                     */
                    std::string GetCipherSuite() const;

                    /**
                     * 设置The cipher suite, with valid values:.
<li>loose-v2023: provides high compatibility with general security, and supports TLS 1.0-1.3 cipher suites;</li>.
<li>general-v2023: provides relatively high compatibility with moderate security, and supports TLS 1.2-1.3 cipher suites.</li>.
<li>strict-v2023: provides high security, disables all cipher suites with security risks, and supports TLS 1.2-1.3 cipher suites.</li>.
                     * @param _cipherSuite The cipher suite, with valid values:.
<li>loose-v2023: provides high compatibility with general security, and supports TLS 1.0-1.3 cipher suites;</li>.
<li>general-v2023: provides relatively high compatibility with moderate security, and supports TLS 1.2-1.3 cipher suites.</li>.
<li>strict-v2023: provides high security, disables all cipher suites with security risks, and supports TLS 1.2-1.3 cipher suites.</li>.
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
                     * http2 configuration switch. valid values:.
<li>`on`: Enable;</li>

<li>off: Disable.</li>
                     */
                    std::string m_http2;
                    bool m_http2HasBeenSet;

                    /**
                     * OCSP configuration switch. valid values:.
<li>`on`: Enable;</li>

<li>off: Disable.</li>
                     */
                    std::string m_ocspStapling;
                    bool m_ocspStaplingHasBeenSet;

                    /**
                     * Tls version settings, valid values:.
<Li>`TLSv1`: tlsv1 version;</li>.
<li>`TLSV1.1`: TLSV1.1 version;</li>.
<li>TLSV1.2: specifies the TLSV1.2 version.</li>.
<Li>TLSv1.3: specifies the tlsv1.3 version. consecutive versions must be enabled when modifying.</li>.
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
                     * Application type. valid values:.
<li>`apply`: managed by EdgeOne.</li>.
<li>`none`: not managed by EdgeOne.</li>if it is left empty, the default value `none` is used.
                     */
                    std::string m_applyType;
                    bool m_applyTypeHasBeenSet;

                    /**
                     * The cipher suite, with valid values:.
<li>loose-v2023: provides high compatibility with general security, and supports TLS 1.0-1.3 cipher suites;</li>.
<li>general-v2023: provides relatively high compatibility with moderate security, and supports TLS 1.2-1.3 cipher suites.</li>.
<li>strict-v2023: provides high security, disables all cipher suites with security risks, and supports TLS 1.2-1.3 cipher suites.</li>.
                     */
                    std::string m_cipherSuite;
                    bool m_cipherSuiteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_HTTPS_H_
