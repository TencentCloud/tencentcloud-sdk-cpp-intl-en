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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEHTTPS_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEHTTPS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ServerCert.h>
#include <tencentcloud/cdn/v20180606/model/ClientCert.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Custom HTTPS forwarding configuration
                */
                class AdvanceHttps : public AbstractModel
                {
                public:
                    AdvanceHttps();
                    ~AdvanceHttps() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Custom TLS data switch
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return CustomTlsStatus Custom TLS data switch
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetCustomTlsStatus() const;

                    /**
                     * 设置Custom TLS data switch
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param CustomTlsStatus Custom TLS data switch
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetCustomTlsStatus(const std::string& _customTlsStatus);

                    /**
                     * 判断参数 CustomTlsStatus 是否已赋值
                     * @return CustomTlsStatus 是否已赋值
                     */
                    bool CustomTlsStatusHasBeenSet() const;

                    /**
                     * 获取Specifies the TLS version. Valid values: `TLSv1`, `TLSV1.1`, `TLSV1.2`, and `TLSv1.3`. Only consecutive versions can be enabled at the same time.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TlsVersion Specifies the TLS version. Valid values: `TLSv1`, `TLSV1.1`, `TLSV1.2`, and `TLSv1.3`. Only consecutive versions can be enabled at the same time.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetTlsVersion() const;

                    /**
                     * 设置Specifies the TLS version. Valid values: `TLSv1`, `TLSV1.1`, `TLSV1.2`, and `TLSv1.3`. Only consecutive versions can be enabled at the same time.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param TlsVersion Specifies the TLS version. Valid values: `TLSv1`, `TLSV1.1`, `TLSV1.2`, and `TLSv1.3`. Only consecutive versions can be enabled at the same time.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetTlsVersion(const std::vector<std::string>& _tlsVersion);

                    /**
                     * 判断参数 TlsVersion 是否已赋值
                     * @return TlsVersion 是否已赋值
                     */
                    bool TlsVersionHasBeenSet() const;

                    /**
                     * 获取Custom encryption suite
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Cipher Custom encryption suite
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetCipher() const;

                    /**
                     * 设置Custom encryption suite
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Cipher Custom encryption suite
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetCipher(const std::string& _cipher);

                    /**
                     * 判断参数 Cipher 是否已赋值
                     * @return Cipher 是否已赋值
                     */
                    bool CipherHasBeenSet() const;

                    /**
                     * 获取Origin authentication type
`off`: disable authentication
`oneWay`: authenticate the origin 
`twoWay`: two-way authentication
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return VerifyOriginType Origin authentication type
`off`: disable authentication
`oneWay`: authenticate the origin 
`twoWay`: two-way authentication
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetVerifyOriginType() const;

                    /**
                     * 设置Origin authentication type
`off`: disable authentication
`oneWay`: authenticate the origin 
`twoWay`: two-way authentication
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param VerifyOriginType Origin authentication type
`off`: disable authentication
`oneWay`: authenticate the origin 
`twoWay`: two-way authentication
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetVerifyOriginType(const std::string& _verifyOriginType);

                    /**
                     * 判断参数 VerifyOriginType 是否已赋值
                     * @return VerifyOriginType 是否已赋值
                     */
                    bool VerifyOriginTypeHasBeenSet() const;

                    /**
                     * 获取Information of the origin-pull certificate
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return CertInfo Information of the origin-pull certificate
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    ServerCert GetCertInfo() const;

                    /**
                     * 设置Information of the origin-pull certificate
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param CertInfo Information of the origin-pull certificate
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetCertInfo(const ServerCert& _certInfo);

                    /**
                     * 判断参数 CertInfo 是否已赋值
                     * @return CertInfo 是否已赋值
                     */
                    bool CertInfoHasBeenSet() const;

                    /**
                     * 获取Information of the origin server certificate
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return OriginCertInfo Information of the origin server certificate
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    ClientCert GetOriginCertInfo() const;

                    /**
                     * 设置Information of the origin server certificate
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param OriginCertInfo Information of the origin server certificate
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetOriginCertInfo(const ClientCert& _originCertInfo);

                    /**
                     * 判断参数 OriginCertInfo 是否已赋值
                     * @return OriginCertInfo 是否已赋值
                     */
                    bool OriginCertInfoHasBeenSet() const;

                private:

                    /**
                     * Custom TLS data switch
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_customTlsStatus;
                    bool m_customTlsStatusHasBeenSet;

                    /**
                     * Specifies the TLS version. Valid values: `TLSv1`, `TLSV1.1`, `TLSV1.2`, and `TLSv1.3`. Only consecutive versions can be enabled at the same time.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_tlsVersion;
                    bool m_tlsVersionHasBeenSet;

                    /**
                     * Custom encryption suite
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_cipher;
                    bool m_cipherHasBeenSet;

                    /**
                     * Origin authentication type
`off`: disable authentication
`oneWay`: authenticate the origin 
`twoWay`: two-way authentication
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_verifyOriginType;
                    bool m_verifyOriginTypeHasBeenSet;

                    /**
                     * Information of the origin-pull certificate
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    ServerCert m_certInfo;
                    bool m_certInfoHasBeenSet;

                    /**
                     * Information of the origin server certificate
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    ClientCert m_originCertInfo;
                    bool m_originCertInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEHTTPS_H_
