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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_HTTPS_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_HTTPS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ServerCert.h>
#include <tencentcloud/cdn/v20180606/model/ClientCert.h>
#include <tencentcloud/cdn/v20180606/model/Hsts.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
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
                     * 获取HTTPS configuration switch
`on`: Enable
`off`: Disable
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Switch HTTPS configuration switch
`on`: Enable
`off`: Disable
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置HTTPS configuration switch
`on`: Enable
`off`: Disable
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Switch HTTPS configuration switch
`on`: Enable
`off`: Disable
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Whether to enable HTTP2
`on`: Enable
`off`: Disable
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Http2 Whether to enable HTTP2
`on`: Enable
`off`: Disable
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetHttp2() const;

                    /**
                     * 设置Whether to enable HTTP2
`on`: Enable
`off`: Disable
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Http2 Whether to enable HTTP2
`on`: Enable
`off`: Disable
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetHttp2(const std::string& _http2);

                    /**
                     * 判断参数 Http2 是否已赋值
                     * @return Http2 是否已赋值
                     */
                    bool Http2HasBeenSet() const;

                    /**
                     * 获取OCSP configuration switch
`on`: Enable
`off`: Disable
It is disabled by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return OcspStapling OCSP configuration switch
`on`: Enable
`off`: Disable
It is disabled by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetOcspStapling() const;

                    /**
                     * 设置OCSP configuration switch
`on`: Enable
`off`: Disable
It is disabled by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param OcspStapling OCSP configuration switch
`on`: Enable
`off`: Disable
It is disabled by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetOcspStapling(const std::string& _ocspStapling);

                    /**
                     * 判断参数 OcspStapling 是否已赋值
                     * @return OcspStapling 是否已赋值
                     */
                    bool OcspStaplingHasBeenSet() const;

                    /**
                     * 获取Client certificate authentication feature
`on`: Enable
`off`: Disable
This is disabled by default. The client certificate information is needed when enabled. This is still in beta and not generally available yet.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return VerifyClient Client certificate authentication feature
`on`: Enable
`off`: Disable
This is disabled by default. The client certificate information is needed when enabled. This is still in beta and not generally available yet.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetVerifyClient() const;

                    /**
                     * 设置Client certificate authentication feature
`on`: Enable
`off`: Disable
This is disabled by default. The client certificate information is needed when enabled. This is still in beta and not generally available yet.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param VerifyClient Client certificate authentication feature
`on`: Enable
`off`: Disable
This is disabled by default. The client certificate information is needed when enabled. This is still in beta and not generally available yet.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetVerifyClient(const std::string& _verifyClient);

                    /**
                     * 判断参数 VerifyClient 是否已赋值
                     * @return VerifyClient 是否已赋值
                     */
                    bool VerifyClientHasBeenSet() const;

                    /**
                     * 获取Server certificate configuration information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return CertInfo Server certificate configuration information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    ServerCert GetCertInfo() const;

                    /**
                     * 设置Server certificate configuration information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param CertInfo Server certificate configuration information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetCertInfo(const ServerCert& _certInfo);

                    /**
                     * 判断参数 CertInfo 是否已赋值
                     * @return CertInfo 是否已赋值
                     */
                    bool CertInfoHasBeenSet() const;

                    /**
                     * 获取Client certificate configuration information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ClientCertInfo Client certificate configuration information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    ClientCert GetClientCertInfo() const;

                    /**
                     * 设置Client certificate configuration information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param ClientCertInfo Client certificate configuration information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetClientCertInfo(const ClientCert& _clientCertInfo);

                    /**
                     * 判断参数 ClientCertInfo 是否已赋值
                     * @return ClientCertInfo 是否已赋值
                     */
                    bool ClientCertInfoHasBeenSet() const;

                    /**
                     * 获取Spdy configuration switch
`on`: Enable
`off`: Disable
It is disabled by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Spdy Spdy configuration switch
`on`: Enable
`off`: Disable
It is disabled by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetSpdy() const;

                    /**
                     * 设置Spdy configuration switch
`on`: Enable
`off`: Disable
It is disabled by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Spdy Spdy configuration switch
`on`: Enable
`off`: Disable
It is disabled by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetSpdy(const std::string& _spdy);

                    /**
                     * 判断参数 Spdy 是否已赋值
                     * @return Spdy 是否已赋值
                     */
                    bool SpdyHasBeenSet() const;

                    /**
                     * 获取HTTPS certificate deployment status
closed: already closed
deploying: in deployment
deployed: successfully deployed
failed: deployment failed
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return SslStatus HTTPS certificate deployment status
closed: already closed
deploying: in deployment
deployed: successfully deployed
failed: deployment failed
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetSslStatus() const;

                    /**
                     * 设置HTTPS certificate deployment status
closed: already closed
deploying: in deployment
deployed: successfully deployed
failed: deployment failed
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param SslStatus HTTPS certificate deployment status
closed: already closed
deploying: in deployment
deployed: successfully deployed
failed: deployment failed
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetSslStatus(const std::string& _sslStatus);

                    /**
                     * 判断参数 SslStatus 是否已赋值
                     * @return SslStatus 是否已赋值
                     */
                    bool SslStatusHasBeenSet() const;

                    /**
                     * 获取HSTS configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Hsts HSTS configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    Hsts GetHsts() const;

                    /**
                     * 设置HSTS configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Hsts HSTS configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetHsts(const Hsts& _hsts);

                    /**
                     * 判断参数 Hsts 是否已赋值
                     * @return Hsts 是否已赋值
                     */
                    bool HstsHasBeenSet() const;

                    /**
                     * 获取TLS version settings, which only support certain advanced domain names. Valid values: `TLSv1`, `TLSV1.1`, `TLSV1.2`, and `TLSv1.3`. Only consecutive versions can be enabled at the same time.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return TlsVersion TLS version settings, which only support certain advanced domain names. Valid values: `TLSv1`, `TLSV1.1`, `TLSV1.2`, and `TLSv1.3`. Only consecutive versions can be enabled at the same time.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> GetTlsVersion() const;

                    /**
                     * 设置TLS version settings, which only support certain advanced domain names. Valid values: `TLSv1`, `TLSV1.1`, `TLSV1.2`, and `TLSv1.3`. Only consecutive versions can be enabled at the same time.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param TlsVersion TLS version settings, which only support certain advanced domain names. Valid values: `TLSv1`, `TLSV1.1`, `TLSV1.2`, and `TLSv1.3`. Only consecutive versions can be enabled at the same time.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetTlsVersion(const std::vector<std::string>& _tlsVersion);

                    /**
                     * 判断参数 TlsVersion 是否已赋值
                     * @return TlsVersion 是否已赋值
                     */
                    bool TlsVersionHasBeenSet() const;

                private:

                    /**
                     * HTTPS configuration switch
`on`: Enable
`off`: Disable
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Whether to enable HTTP2
`on`: Enable
`off`: Disable
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_http2;
                    bool m_http2HasBeenSet;

                    /**
                     * OCSP configuration switch
`on`: Enable
`off`: Disable
It is disabled by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_ocspStapling;
                    bool m_ocspStaplingHasBeenSet;

                    /**
                     * Client certificate authentication feature
`on`: Enable
`off`: Disable
This is disabled by default. The client certificate information is needed when enabled. This is still in beta and not generally available yet.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_verifyClient;
                    bool m_verifyClientHasBeenSet;

                    /**
                     * Server certificate configuration information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    ServerCert m_certInfo;
                    bool m_certInfoHasBeenSet;

                    /**
                     * Client certificate configuration information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    ClientCert m_clientCertInfo;
                    bool m_clientCertInfoHasBeenSet;

                    /**
                     * Spdy configuration switch
`on`: Enable
`off`: Disable
It is disabled by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_spdy;
                    bool m_spdyHasBeenSet;

                    /**
                     * HTTPS certificate deployment status
closed: already closed
deploying: in deployment
deployed: successfully deployed
failed: deployment failed
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_sslStatus;
                    bool m_sslStatusHasBeenSet;

                    /**
                     * HSTS configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    Hsts m_hsts;
                    bool m_hstsHasBeenSet;

                    /**
                     * TLS version settings, which only support certain advanced domain names. Valid values: `TLSv1`, `TLSV1.1`, `TLSV1.2`, and `TLSv1.3`. Only consecutive versions can be enabled at the same time.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_tlsVersion;
                    bool m_tlsVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_HTTPS_H_
