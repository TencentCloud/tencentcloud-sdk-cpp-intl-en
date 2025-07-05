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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * Details of a CLB certificate
                */
                class Certificate : public AbstractModel
                {
                public:
                    Certificate();
                    ~Certificate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The certificate ID.
                     * @return CertId The certificate ID.
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置The certificate ID.
                     * @param _certId The certificate ID.
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取The list of domains bound to the certificate.
                     * @return DnsNames The list of domains bound to the certificate.
                     * 
                     */
                    std::vector<std::string> GetDnsNames() const;

                    /**
                     * 设置The list of domains bound to the certificate.
                     * @param _dnsNames The list of domains bound to the certificate.
                     * 
                     */
                    void SetDnsNames(const std::vector<std::string>& _dnsNames);

                    /**
                     * 判断参数 DnsNames 是否已赋值
                     * @return DnsNames 是否已赋值
                     * 
                     */
                    bool DnsNamesHasBeenSet() const;

                    /**
                     * 获取Root certificate id.
                     * @return CertCaId Root certificate id.
                     * 
                     */
                    std::string GetCertCaId() const;

                    /**
                     * 设置Root certificate id.
                     * @param _certCaId Root certificate id.
                     * 
                     */
                    void SetCertCaId(const std::string& _certCaId);

                    /**
                     * 判断参数 CertCaId 是否已赋值
                     * @return CertCaId 是否已赋值
                     * 
                     */
                    bool CertCaIdHasBeenSet() const;

                    /**
                     * 获取Certificate authentication mode: unidirectional one-way authentication, mutual mutual authentication.
                     * @return SSLMode Certificate authentication mode: unidirectional one-way authentication, mutual mutual authentication.
                     * 
                     */
                    std::string GetSSLMode() const;

                    /**
                     * 设置Certificate authentication mode: unidirectional one-way authentication, mutual mutual authentication.
                     * @param _sSLMode Certificate authentication mode: unidirectional one-way authentication, mutual mutual authentication.
                     * 
                     */
                    void SetSSLMode(const std::string& _sSLMode);

                    /**
                     * 判断参数 SSLMode 是否已赋值
                     * @return SSLMode 是否已赋值
                     * 
                     */
                    bool SSLModeHasBeenSet() const;

                private:

                    /**
                     * The certificate ID.
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * The list of domains bound to the certificate.
                     */
                    std::vector<std::string> m_dnsNames;
                    bool m_dnsNamesHasBeenSet;

                    /**
                     * Root certificate id.
                     */
                    std::string m_certCaId;
                    bool m_certCaIdHasBeenSet;

                    /**
                     * Certificate authentication mode: unidirectional one-way authentication, mutual mutual authentication.
                     */
                    std::string m_sSLMode;
                    bool m_sSLModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATE_H_
