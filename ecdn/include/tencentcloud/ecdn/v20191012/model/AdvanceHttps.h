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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_ADVANCEHTTPS_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_ADVANCEHTTPS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecdn/v20191012/model/ServerCert.h>
#include <tencentcloud/ecdn/v20191012/model/ClientCert.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * Custom HTTPS configuration for origin-pull
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
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CustomTlsStatus Custom TLS data switch
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCustomTlsStatus() const;

                    /**
                     * 设置Custom TLS data switch
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _customTlsStatus Custom TLS data switch
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCustomTlsStatus(const std::string& _customTlsStatus);

                    /**
                     * 判断参数 CustomTlsStatus 是否已赋值
                     * @return CustomTlsStatus 是否已赋值
                     * 
                     */
                    bool CustomTlsStatusHasBeenSet() const;

                    /**
                     * 获取TLS version settings. Valid values: `TLSv1`, `TLSV1.1`, `TLSV1.2`, and `TLSv1.3`. Only consecutive versions can be enabled at the same time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return TlsVersion TLS version settings. Valid values: `TLSv1`, `TLSV1.1`, `TLSV1.2`, and `TLSv1.3`. Only consecutive versions can be enabled at the same time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetTlsVersion() const;

                    /**
                     * 设置TLS version settings. Valid values: `TLSv1`, `TLSV1.1`, `TLSV1.2`, and `TLSv1.3`. Only consecutive versions can be enabled at the same time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _tlsVersion TLS version settings. Valid values: `TLSv1`, `TLSV1.1`, `TLSV1.2`, and `TLSv1.3`. Only consecutive versions can be enabled at the same time.
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
                     * 获取Custom encryption suite
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Cipher Custom encryption suite
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCipher() const;

                    /**
                     * 设置Custom encryption suite
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _cipher Custom encryption suite
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCipher(const std::string& _cipher);

                    /**
                     * 判断参数 Cipher 是否已赋值
                     * @return Cipher 是否已赋值
                     * 
                     */
                    bool CipherHasBeenSet() const;

                    /**
                     * 获取Origin-pull verification status
`off`: Disables origin-pull verification
`oneWay`: Only verify the origin
`twoWay`: Enables two-way origin-pull verification
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return VerifyOriginType Origin-pull verification status
`off`: Disables origin-pull verification
`oneWay`: Only verify the origin
`twoWay`: Enables two-way origin-pull verification
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVerifyOriginType() const;

                    /**
                     * 设置Origin-pull verification status
`off`: Disables origin-pull verification
`oneWay`: Only verify the origin
`twoWay`: Enables two-way origin-pull verification
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _verifyOriginType Origin-pull verification status
`off`: Disables origin-pull verification
`oneWay`: Only verify the origin
`twoWay`: Enables two-way origin-pull verification
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVerifyOriginType(const std::string& _verifyOriginType);

                    /**
                     * 判断参数 VerifyOriginType 是否已赋值
                     * @return VerifyOriginType 是否已赋值
                     * 
                     */
                    bool VerifyOriginTypeHasBeenSet() const;

                    /**
                     * 获取Configuration information of the origin-pull certificate
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CertInfo Configuration information of the origin-pull certificate
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    ServerCert GetCertInfo() const;

                    /**
                     * 设置Configuration information of the origin-pull certificate
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _certInfo Configuration information of the origin-pull certificate
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCertInfo(const ServerCert& _certInfo);

                    /**
                     * 判断参数 CertInfo 是否已赋值
                     * @return CertInfo 是否已赋值
                     * 
                     */
                    bool CertInfoHasBeenSet() const;

                    /**
                     * 获取Configuration information of the origin server certificate
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return OriginCertInfo Configuration information of the origin server certificate
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    ClientCert GetOriginCertInfo() const;

                    /**
                     * 设置Configuration information of the origin server certificate
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _originCertInfo Configuration information of the origin server certificate
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOriginCertInfo(const ClientCert& _originCertInfo);

                    /**
                     * 判断参数 OriginCertInfo 是否已赋值
                     * @return OriginCertInfo 是否已赋值
                     * 
                     */
                    bool OriginCertInfoHasBeenSet() const;

                private:

                    /**
                     * Custom TLS data switch
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_customTlsStatus;
                    bool m_customTlsStatusHasBeenSet;

                    /**
                     * TLS version settings. Valid values: `TLSv1`, `TLSV1.1`, `TLSV1.2`, and `TLSv1.3`. Only consecutive versions can be enabled at the same time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_tlsVersion;
                    bool m_tlsVersionHasBeenSet;

                    /**
                     * Custom encryption suite
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_cipher;
                    bool m_cipherHasBeenSet;

                    /**
                     * Origin-pull verification status
`off`: Disables origin-pull verification
`oneWay`: Only verify the origin
`twoWay`: Enables two-way origin-pull verification
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_verifyOriginType;
                    bool m_verifyOriginTypeHasBeenSet;

                    /**
                     * Configuration information of the origin-pull certificate
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    ServerCert m_certInfo;
                    bool m_certInfoHasBeenSet;

                    /**
                     * Configuration information of the origin server certificate
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    ClientCert m_originCertInfo;
                    bool m_originCertInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_ADVANCEHTTPS_H_
