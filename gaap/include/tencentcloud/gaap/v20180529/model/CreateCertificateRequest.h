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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CREATECERTIFICATEREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CREATECERTIFICATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * CreateCertificate request structure.
                */
                class CreateCertificateRequest : public AbstractModel
                {
                public:
                    CreateCertificateRequest();
                    ~CreateCertificateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Certificate type. Where:
0: basic authentication configuration;
1: indicates client CA certificate;
2: server SSL certificate;
3: origin server CA certificate;
4: connection SSL certificate.
                     * @return CertificateType Certificate type. Where:
0: basic authentication configuration;
1: indicates client CA certificate;
2: server SSL certificate;
3: origin server CA certificate;
4: connection SSL certificate.
                     */
                    int64_t GetCertificateType() const;

                    /**
                     * 设置Certificate type. Where:
0: basic authentication configuration;
1: indicates client CA certificate;
2: server SSL certificate;
3: origin server CA certificate;
4: connection SSL certificate.
                     * @param CertificateType Certificate type. Where:
0: basic authentication configuration;
1: indicates client CA certificate;
2: server SSL certificate;
3: origin server CA certificate;
4: connection SSL certificate.
                     */
                    void SetCertificateType(const int64_t& _certificateType);

                    /**
                     * 判断参数 CertificateType 是否已赋值
                     * @return CertificateType 是否已赋值
                     */
                    bool CertificateTypeHasBeenSet() const;

                    /**
                     * 获取Certificate content. URL encoding. Where:
If the certificate type is basic authentication, enter username/password pair for this parameter. Format: 'username:password', for example, root:FSGdT. The password is `htpasswd` or `openssl`, for example, openssl passwd -crypt 123456.
When the certificate type is CA/SSL certificate, enter the certificate content for this parameter in the format of `pem`.
                     * @return CertificateContent Certificate content. URL encoding. Where:
If the certificate type is basic authentication, enter username/password pair for this parameter. Format: 'username:password', for example, root:FSGdT. The password is `htpasswd` or `openssl`, for example, openssl passwd -crypt 123456.
When the certificate type is CA/SSL certificate, enter the certificate content for this parameter in the format of `pem`.
                     */
                    std::string GetCertificateContent() const;

                    /**
                     * 设置Certificate content. URL encoding. Where:
If the certificate type is basic authentication, enter username/password pair for this parameter. Format: 'username:password', for example, root:FSGdT. The password is `htpasswd` or `openssl`, for example, openssl passwd -crypt 123456.
When the certificate type is CA/SSL certificate, enter the certificate content for this parameter in the format of `pem`.
                     * @param CertificateContent Certificate content. URL encoding. Where:
If the certificate type is basic authentication, enter username/password pair for this parameter. Format: 'username:password', for example, root:FSGdT. The password is `htpasswd` or `openssl`, for example, openssl passwd -crypt 123456.
When the certificate type is CA/SSL certificate, enter the certificate content for this parameter in the format of `pem`.
                     */
                    void SetCertificateContent(const std::string& _certificateContent);

                    /**
                     * 判断参数 CertificateContent 是否已赋值
                     * @return CertificateContent 是否已赋值
                     */
                    bool CertificateContentHasBeenSet() const;

                    /**
                     * 获取Certificate name
                     * @return CertificateAlias Certificate name
                     */
                    std::string GetCertificateAlias() const;

                    /**
                     * 设置Certificate name
                     * @param CertificateAlias Certificate name
                     */
                    void SetCertificateAlias(const std::string& _certificateAlias);

                    /**
                     * 判断参数 CertificateAlias 是否已赋值
                     * @return CertificateAlias 是否已赋值
                     */
                    bool CertificateAliasHasBeenSet() const;

                    /**
                     * 获取Key content. URL encoding. This parameter is required only when the certificate type is SSL certificate. The format is `pem`.
                     * @return CertificateKey Key content. URL encoding. This parameter is required only when the certificate type is SSL certificate. The format is `pem`.
                     */
                    std::string GetCertificateKey() const;

                    /**
                     * 设置Key content. URL encoding. This parameter is required only when the certificate type is SSL certificate. The format is `pem`.
                     * @param CertificateKey Key content. URL encoding. This parameter is required only when the certificate type is SSL certificate. The format is `pem`.
                     */
                    void SetCertificateKey(const std::string& _certificateKey);

                    /**
                     * 判断参数 CertificateKey 是否已赋值
                     * @return CertificateKey 是否已赋值
                     */
                    bool CertificateKeyHasBeenSet() const;

                private:

                    /**
                     * Certificate type. Where:
0: basic authentication configuration;
1: indicates client CA certificate;
2: server SSL certificate;
3: origin server CA certificate;
4: connection SSL certificate.
                     */
                    int64_t m_certificateType;
                    bool m_certificateTypeHasBeenSet;

                    /**
                     * Certificate content. URL encoding. Where:
If the certificate type is basic authentication, enter username/password pair for this parameter. Format: 'username:password', for example, root:FSGdT. The password is `htpasswd` or `openssl`, for example, openssl passwd -crypt 123456.
When the certificate type is CA/SSL certificate, enter the certificate content for this parameter in the format of `pem`.
                     */
                    std::string m_certificateContent;
                    bool m_certificateContentHasBeenSet;

                    /**
                     * Certificate name
                     */
                    std::string m_certificateAlias;
                    bool m_certificateAliasHasBeenSet;

                    /**
                     * Key content. URL encoding. This parameter is required only when the certificate type is SSL certificate. The format is `pem`.
                     */
                    std::string m_certificateKey;
                    bool m_certificateKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CREATECERTIFICATEREQUEST_H_
