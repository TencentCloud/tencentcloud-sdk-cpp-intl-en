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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECERTIFICATEVERIFYRESULTREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECERTIFICATEVERIFYRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeCertificateVerifyResult request structure.
                */
                class DescribeCertificateVerifyResultRequest : public AbstractModel
                {
                public:
                    DescribeCertificateVerifyResultRequest();
                    ~DescribeCertificateVerifyResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain name
                     * @return Domain Domain name
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name
                     * @param _domain Domain name
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
                     * 获取Certificate type. 0: Do not check international standard certificates; 1: The certificate is a self-owned certificate; 2: The certificate is a managed certificate.
                     * @return CertType Certificate type. 0: Do not check international standard certificates; 1: The certificate is a self-owned certificate; 2: The certificate is a managed certificate.
                     * 
                     */
                    int64_t GetCertType() const;

                    /**
                     * 设置Certificate type. 0: Do not check international standard certificates; 1: The certificate is a self-owned certificate; 2: The certificate is a managed certificate.
                     * @param _certType Certificate type. 0: Do not check international standard certificates; 1: The certificate is a self-owned certificate; 2: The certificate is a managed certificate.
                     * 
                     */
                    void SetCertType(const int64_t& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     * 
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取When CertType is 1, this parameter is required, indicating the self-owned certificate chain
                     * @return Certificate When CertType is 1, this parameter is required, indicating the self-owned certificate chain
                     * 
                     */
                    std::string GetCertificate() const;

                    /**
                     * 设置When CertType is 1, this parameter is required, indicating the self-owned certificate chain
                     * @param _certificate When CertType is 1, this parameter is required, indicating the self-owned certificate chain
                     * 
                     */
                    void SetCertificate(const std::string& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     * 
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取When CertType is 2, this parameter must be filled, indicating the certificate ID hosted on Tencent Cloud's SSL platform
                     * @return CertID When CertType is 2, this parameter must be filled, indicating the certificate ID hosted on Tencent Cloud's SSL platform
                     * 
                     */
                    std::string GetCertID() const;

                    /**
                     * 设置When CertType is 2, this parameter must be filled, indicating the certificate ID hosted on Tencent Cloud's SSL platform
                     * @param _certID When CertType is 2, this parameter must be filled, indicating the certificate ID hosted on Tencent Cloud's SSL platform
                     * 
                     */
                    void SetCertID(const std::string& _certID);

                    /**
                     * 判断参数 CertID 是否已赋值
                     * @return CertID 是否已赋值
                     * 
                     */
                    bool CertIDHasBeenSet() const;

                    /**
                     * 获取When CertType=1, this parameter is required, indicating the private key of the self-owned certificate.
                     * @return PrivateKey When CertType=1, this parameter is required, indicating the private key of the self-owned certificate.
                     * 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 设置When CertType=1, this parameter is required, indicating the private key of the self-owned certificate.
                     * @param _privateKey When CertType=1, this parameter is required, indicating the private key of the self-owned certificate.
                     * 
                     */
                    void SetPrivateKey(const std::string& _privateKey);

                    /**
                     * 判断参数 PrivateKey 是否已赋值
                     * @return PrivateKey 是否已赋值
                     * 
                     */
                    bool PrivateKeyHasBeenSet() const;

                    /**
                     * 获取SM certificate type. 0: Do not check SM certificates; 1: The certificate is a self-owned SM certificate; 2: The certificate is a managed SM certificate.
                     * @return GmCertType SM certificate type. 0: Do not check SM certificates; 1: The certificate is a self-owned SM certificate; 2: The certificate is a managed SM certificate.
                     * 
                     */
                    int64_t GetGmCertType() const;

                    /**
                     * 设置SM certificate type. 0: Do not check SM certificates; 1: The certificate is a self-owned SM certificate; 2: The certificate is a managed SM certificate.
                     * @param _gmCertType SM certificate type. 0: Do not check SM certificates; 1: The certificate is a self-owned SM certificate; 2: The certificate is a managed SM certificate.
                     * 
                     */
                    void SetGmCertType(const int64_t& _gmCertType);

                    /**
                     * 判断参数 GmCertType 是否已赋值
                     * @return GmCertType 是否已赋值
                     * 
                     */
                    bool GmCertTypeHasBeenSet() const;

                    /**
                     * 获取When GmCertType is 1, this parameter needs to be set, indicating the certificate chain of the self-owned SM certificate.
                     * @return GmCert When GmCertType is 1, this parameter needs to be set, indicating the certificate chain of the self-owned SM certificate.
                     * 
                     */
                    std::string GetGmCert() const;

                    /**
                     * 设置When GmCertType is 1, this parameter needs to be set, indicating the certificate chain of the self-owned SM certificate.
                     * @param _gmCert When GmCertType is 1, this parameter needs to be set, indicating the certificate chain of the self-owned SM certificate.
                     * 
                     */
                    void SetGmCert(const std::string& _gmCert);

                    /**
                     * 判断参数 GmCert 是否已赋值
                     * @return GmCert 是否已赋值
                     * 
                     */
                    bool GmCertHasBeenSet() const;

                    /**
                     * 获取When GmCertType is 1, this parameter needs to be set, indicating the private key of the self-owned SM certificate.
                     * @return GmPrivateKey When GmCertType is 1, this parameter needs to be set, indicating the private key of the self-owned SM certificate.
                     * 
                     */
                    std::string GetGmPrivateKey() const;

                    /**
                     * 设置When GmCertType is 1, this parameter needs to be set, indicating the private key of the self-owned SM certificate.
                     * @param _gmPrivateKey When GmCertType is 1, this parameter needs to be set, indicating the private key of the self-owned SM certificate.
                     * 
                     */
                    void SetGmPrivateKey(const std::string& _gmPrivateKey);

                    /**
                     * 判断参数 GmPrivateKey 是否已赋值
                     * @return GmPrivateKey 是否已赋值
                     * 
                     */
                    bool GmPrivateKeyHasBeenSet() const;

                    /**
                     * 获取When GmCertType is 1, this parameter needs to be set, indicating the encryption certificate of the self-owned SM certificate.
                     * @return GmEncCert When GmCertType is 1, this parameter needs to be set, indicating the encryption certificate of the self-owned SM certificate.
                     * 
                     */
                    std::string GetGmEncCert() const;

                    /**
                     * 设置When GmCertType is 1, this parameter needs to be set, indicating the encryption certificate of the self-owned SM certificate.
                     * @param _gmEncCert When GmCertType is 1, this parameter needs to be set, indicating the encryption certificate of the self-owned SM certificate.
                     * 
                     */
                    void SetGmEncCert(const std::string& _gmEncCert);

                    /**
                     * 判断参数 GmEncCert 是否已赋值
                     * @return GmEncCert 是否已赋值
                     * 
                     */
                    bool GmEncCertHasBeenSet() const;

                    /**
                     * 获取When GmCertType is 1, this parameter needs to be set, indicating the private key of the encryption certificate for the self-owned SM certificate.
                     * @return GmEncPrivateKey When GmCertType is 1, this parameter needs to be set, indicating the private key of the encryption certificate for the self-owned SM certificate.
                     * 
                     */
                    std::string GetGmEncPrivateKey() const;

                    /**
                     * 设置When GmCertType is 1, this parameter needs to be set, indicating the private key of the encryption certificate for the self-owned SM certificate.
                     * @param _gmEncPrivateKey When GmCertType is 1, this parameter needs to be set, indicating the private key of the encryption certificate for the self-owned SM certificate.
                     * 
                     */
                    void SetGmEncPrivateKey(const std::string& _gmEncPrivateKey);

                    /**
                     * 判断参数 GmEncPrivateKey 是否已赋值
                     * @return GmEncPrivateKey 是否已赋值
                     * 
                     */
                    bool GmEncPrivateKeyHasBeenSet() const;

                    /**
                     * 获取When GmCertType is 2, this parameter needs to be set, indicating the ID of the certificate managed by the Tencent Cloud SSL platform.
                     * @return GmSSLId When GmCertType is 2, this parameter needs to be set, indicating the ID of the certificate managed by the Tencent Cloud SSL platform.
                     * 
                     */
                    std::string GetGmSSLId() const;

                    /**
                     * 设置When GmCertType is 2, this parameter needs to be set, indicating the ID of the certificate managed by the Tencent Cloud SSL platform.
                     * @param _gmSSLId When GmCertType is 2, this parameter needs to be set, indicating the ID of the certificate managed by the Tencent Cloud SSL platform.
                     * 
                     */
                    void SetGmSSLId(const std::string& _gmSSLId);

                    /**
                     * 判断参数 GmSSLId 是否已赋值
                     * @return GmSSLId 是否已赋值
                     * 
                     */
                    bool GmSSLIdHasBeenSet() const;

                private:

                    /**
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Certificate type. 0: Do not check international standard certificates; 1: The certificate is a self-owned certificate; 2: The certificate is a managed certificate.
                     */
                    int64_t m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * When CertType is 1, this parameter is required, indicating the self-owned certificate chain
                     */
                    std::string m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * When CertType is 2, this parameter must be filled, indicating the certificate ID hosted on Tencent Cloud's SSL platform
                     */
                    std::string m_certID;
                    bool m_certIDHasBeenSet;

                    /**
                     * When CertType=1, this parameter is required, indicating the private key of the self-owned certificate.
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                    /**
                     * SM certificate type. 0: Do not check SM certificates; 1: The certificate is a self-owned SM certificate; 2: The certificate is a managed SM certificate.
                     */
                    int64_t m_gmCertType;
                    bool m_gmCertTypeHasBeenSet;

                    /**
                     * When GmCertType is 1, this parameter needs to be set, indicating the certificate chain of the self-owned SM certificate.
                     */
                    std::string m_gmCert;
                    bool m_gmCertHasBeenSet;

                    /**
                     * When GmCertType is 1, this parameter needs to be set, indicating the private key of the self-owned SM certificate.
                     */
                    std::string m_gmPrivateKey;
                    bool m_gmPrivateKeyHasBeenSet;

                    /**
                     * When GmCertType is 1, this parameter needs to be set, indicating the encryption certificate of the self-owned SM certificate.
                     */
                    std::string m_gmEncCert;
                    bool m_gmEncCertHasBeenSet;

                    /**
                     * When GmCertType is 1, this parameter needs to be set, indicating the private key of the encryption certificate for the self-owned SM certificate.
                     */
                    std::string m_gmEncPrivateKey;
                    bool m_gmEncPrivateKeyHasBeenSet;

                    /**
                     * When GmCertType is 2, this parameter needs to be set, indicating the ID of the certificate managed by the Tencent Cloud SSL platform.
                     */
                    std::string m_gmSSLId;
                    bool m_gmSSLIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECERTIFICATEVERIFYRESULTREQUEST_H_
