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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SAMLIDPCERTIFICATE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SAMLIDPCERTIFICATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * SAML signing certificate information.
                */
                class SAMLIdPCertificate : public AbstractModel
                {
                public:
                    SAMLIdPCertificate();
                    ~SAMLIdPCertificate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Certificate serial number.
                     * @return SerialNumber Certificate serial number.
                     * 
                     */
                    std::string GetSerialNumber() const;

                    /**
                     * 设置Certificate serial number.
                     * @param _serialNumber Certificate serial number.
                     * 
                     */
                    void SetSerialNumber(const std::string& _serialNumber);

                    /**
                     * 判断参数 SerialNumber 是否已赋值
                     * @return SerialNumber 是否已赋值
                     * 
                     */
                    bool SerialNumberHasBeenSet() const;

                    /**
                     * 获取Certificate issuer.
                     * @return Issuer Certificate issuer.
                     * 
                     */
                    std::string GetIssuer() const;

                    /**
                     * 设置Certificate issuer.
                     * @param _issuer Certificate issuer.
                     * 
                     */
                    void SetIssuer(const std::string& _issuer);

                    /**
                     * 判断参数 Issuer 是否已赋值
                     * @return Issuer 是否已赋值
                     * 
                     */
                    bool IssuerHasBeenSet() const;

                    /**
                     * 获取Certificate version.
                     * @return Version Certificate version.
                     * 
                     */
                    int64_t GetVersion() const;

                    /**
                     * 设置Certificate version.
                     * @param _version Certificate version.
                     * 
                     */
                    void SetVersion(const int64_t& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Certificate ID.
                     * @return CertificateId Certificate ID.
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置Certificate ID.
                     * @param _certificateId Certificate ID.
                     * 
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     * 
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取Public key certificate in PEM format (Base64 encoded).
                     * @return PublicKey Public key certificate in PEM format (Base64 encoded).
                     * 
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 设置Public key certificate in PEM format (Base64 encoded).
                     * @param _publicKey Public key certificate in PEM format (Base64 encoded).
                     * 
                     */
                    void SetPublicKey(const std::string& _publicKey);

                    /**
                     * 判断参数 PublicKey 是否已赋值
                     * @return PublicKey 是否已赋值
                     * 
                     */
                    bool PublicKeyHasBeenSet() const;

                    /**
                     * 获取Signature algorithm of the certificate.
                     * @return SignatureAlgorithm Signature algorithm of the certificate.
                     * 
                     */
                    std::string GetSignatureAlgorithm() const;

                    /**
                     * 设置Signature algorithm of the certificate.
                     * @param _signatureAlgorithm Signature algorithm of the certificate.
                     * 
                     */
                    void SetSignatureAlgorithm(const std::string& _signatureAlgorithm);

                    /**
                     * 判断参数 SignatureAlgorithm 是否已赋值
                     * @return SignatureAlgorithm 是否已赋值
                     * 
                     */
                    bool SignatureAlgorithmHasBeenSet() const;

                    /**
                     * 获取Expiration time of the certificate.
                     * @return NotAfter Expiration time of the certificate.
                     * 
                     */
                    std::string GetNotAfter() const;

                    /**
                     * 设置Expiration time of the certificate.
                     * @param _notAfter Expiration time of the certificate.
                     * 
                     */
                    void SetNotAfter(const std::string& _notAfter);

                    /**
                     * 判断参数 NotAfter 是否已赋值
                     * @return NotAfter 是否已赋值
                     * 
                     */
                    bool NotAfterHasBeenSet() const;

                    /**
                     * 获取Creation time of the certificate.
                     * @return NotBefore Creation time of the certificate.
                     * 
                     */
                    std::string GetNotBefore() const;

                    /**
                     * 设置Creation time of the certificate.
                     * @param _notBefore Creation time of the certificate.
                     * 
                     */
                    void SetNotBefore(const std::string& _notBefore);

                    /**
                     * 判断参数 NotBefore 是否已赋值
                     * @return NotBefore 是否已赋值
                     * 
                     */
                    bool NotBeforeHasBeenSet() const;

                    /**
                     * 获取Certificate subject.
                     * @return Subject Certificate subject.
                     * 
                     */
                    std::string GetSubject() const;

                    /**
                     * 设置Certificate subject.
                     * @param _subject Certificate subject.
                     * 
                     */
                    void SetSubject(const std::string& _subject);

                    /**
                     * 判断参数 Subject 是否已赋值
                     * @return Subject 是否已赋值
                     * 
                     */
                    bool SubjectHasBeenSet() const;

                    /**
                     * 获取X509 certificate in PEM format.
                     * @return X509Certificate X509 certificate in PEM format.
                     * 
                     */
                    std::string GetX509Certificate() const;

                    /**
                     * 设置X509 certificate in PEM format.
                     * @param _x509Certificate X509 certificate in PEM format.
                     * 
                     */
                    void SetX509Certificate(const std::string& _x509Certificate);

                    /**
                     * 判断参数 X509Certificate 是否已赋值
                     * @return X509Certificate 是否已赋值
                     * 
                     */
                    bool X509CertificateHasBeenSet() const;

                private:

                    /**
                     * Certificate serial number.
                     */
                    std::string m_serialNumber;
                    bool m_serialNumberHasBeenSet;

                    /**
                     * Certificate issuer.
                     */
                    std::string m_issuer;
                    bool m_issuerHasBeenSet;

                    /**
                     * Certificate version.
                     */
                    int64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Certificate ID.
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * Public key certificate in PEM format (Base64 encoded).
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                    /**
                     * Signature algorithm of the certificate.
                     */
                    std::string m_signatureAlgorithm;
                    bool m_signatureAlgorithmHasBeenSet;

                    /**
                     * Expiration time of the certificate.
                     */
                    std::string m_notAfter;
                    bool m_notAfterHasBeenSet;

                    /**
                     * Creation time of the certificate.
                     */
                    std::string m_notBefore;
                    bool m_notBeforeHasBeenSet;

                    /**
                     * Certificate subject.
                     */
                    std::string m_subject;
                    bool m_subjectHasBeenSet;

                    /**
                     * X509 certificate in PEM format.
                     */
                    std::string m_x509Certificate;
                    bool m_x509CertificateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SAMLIDPCERTIFICATE_H_
