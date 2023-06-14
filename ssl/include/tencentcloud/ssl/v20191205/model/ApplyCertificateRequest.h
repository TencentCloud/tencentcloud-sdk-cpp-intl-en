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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_APPLYCERTIFICATEREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_APPLYCERTIFICATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ApplyCertificate request structure.
                */
                class ApplyCertificateRequest : public AbstractModel
                {
                public:
                    ApplyCertificateRequest();
                    ~ApplyCertificateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Validation type. `DNS_AUTO`: automatic DNS validation; `DNS`: manual DNS validation; `FILE`: file validation
                     * @return DvAuthMethod Validation type. `DNS_AUTO`: automatic DNS validation; `DNS`: manual DNS validation; `FILE`: file validation
                     * 
                     */
                    std::string GetDvAuthMethod() const;

                    /**
                     * 设置Validation type. `DNS_AUTO`: automatic DNS validation; `DNS`: manual DNS validation; `FILE`: file validation
                     * @param _dvAuthMethod Validation type. `DNS_AUTO`: automatic DNS validation; `DNS`: manual DNS validation; `FILE`: file validation
                     * 
                     */
                    void SetDvAuthMethod(const std::string& _dvAuthMethod);

                    /**
                     * 判断参数 DvAuthMethod 是否已赋值
                     * @return DvAuthMethod 是否已赋值
                     * 
                     */
                    bool DvAuthMethodHasBeenSet() const;

                    /**
                     * 获取Domain name
                     * @return DomainName Domain name
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Domain name
                     * @param _domainName Domain name
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Certificate type. Currently, the only supported value is 2, which indicates TrustAsia TLS RSA CA.
                     * @return PackageType Certificate type. Currently, the only supported value is 2, which indicates TrustAsia TLS RSA CA.
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置Certificate type. Currently, the only supported value is 2, which indicates TrustAsia TLS RSA CA.
                     * @param _packageType Certificate type. Currently, the only supported value is 2, which indicates TrustAsia TLS RSA CA.
                     * 
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取Email address
                     * @return ContactEmail Email address
                     * 
                     */
                    std::string GetContactEmail() const;

                    /**
                     * 设置Email address
                     * @param _contactEmail Email address
                     * 
                     */
                    void SetContactEmail(const std::string& _contactEmail);

                    /**
                     * 判断参数 ContactEmail 是否已赋值
                     * @return ContactEmail 是否已赋值
                     * 
                     */
                    bool ContactEmailHasBeenSet() const;

                    /**
                     * 获取Mobile number
                     * @return ContactPhone Mobile number
                     * 
                     */
                    std::string GetContactPhone() const;

                    /**
                     * 设置Mobile number
                     * @param _contactPhone Mobile number
                     * 
                     */
                    void SetContactPhone(const std::string& _contactPhone);

                    /**
                     * 判断参数 ContactPhone 是否已赋值
                     * @return ContactPhone 是否已赋值
                     * 
                     */
                    bool ContactPhoneHasBeenSet() const;

                    /**
                     * 获取Validity period. The default value is 12 months, which is the only supported value currently.
                     * @return ValidityPeriod Validity period. The default value is 12 months, which is the only supported value currently.
                     * 
                     */
                    std::string GetValidityPeriod() const;

                    /**
                     * 设置Validity period. The default value is 12 months, which is the only supported value currently.
                     * @param _validityPeriod Validity period. The default value is 12 months, which is the only supported value currently.
                     * 
                     */
                    void SetValidityPeriod(const std::string& _validityPeriod);

                    /**
                     * 判断参数 ValidityPeriod 是否已赋值
                     * @return ValidityPeriod 是否已赋值
                     * 
                     */
                    bool ValidityPeriodHasBeenSet() const;

                    /**
                     * 获取Encryption algorithm. Only RSA is supported.
                     * @return CsrEncryptAlgo Encryption algorithm. Only RSA is supported.
                     * 
                     */
                    std::string GetCsrEncryptAlgo() const;

                    /**
                     * 设置Encryption algorithm. Only RSA is supported.
                     * @param _csrEncryptAlgo Encryption algorithm. Only RSA is supported.
                     * 
                     */
                    void SetCsrEncryptAlgo(const std::string& _csrEncryptAlgo);

                    /**
                     * 判断参数 CsrEncryptAlgo 是否已赋值
                     * @return CsrEncryptAlgo 是否已赋值
                     * 
                     */
                    bool CsrEncryptAlgoHasBeenSet() const;

                    /**
                     * 获取Key pair parameter. Only the 2048-bit key pair is supported.
                     * @return CsrKeyParameter Key pair parameter. Only the 2048-bit key pair is supported.
                     * 
                     */
                    std::string GetCsrKeyParameter() const;

                    /**
                     * 设置Key pair parameter. Only the 2048-bit key pair is supported.
                     * @param _csrKeyParameter Key pair parameter. Only the 2048-bit key pair is supported.
                     * 
                     */
                    void SetCsrKeyParameter(const std::string& _csrKeyParameter);

                    /**
                     * 判断参数 CsrKeyParameter 是否已赋值
                     * @return CsrKeyParameter 是否已赋值
                     * 
                     */
                    bool CsrKeyParameterHasBeenSet() const;

                    /**
                     * 获取CSR encryption password
                     * @return CsrKeyPassword CSR encryption password
                     * 
                     */
                    std::string GetCsrKeyPassword() const;

                    /**
                     * 设置CSR encryption password
                     * @param _csrKeyPassword CSR encryption password
                     * 
                     */
                    void SetCsrKeyPassword(const std::string& _csrKeyPassword);

                    /**
                     * 判断参数 CsrKeyPassword 是否已赋值
                     * @return CsrKeyPassword 是否已赋值
                     * 
                     */
                    bool CsrKeyPasswordHasBeenSet() const;

                    /**
                     * 获取Alias
                     * @return Alias Alias
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置Alias
                     * @param _alias Alias
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取Original certificate ID, which is used to apply for a new certificate.
                     * @return OldCertificateId Original certificate ID, which is used to apply for a new certificate.
                     * 
                     */
                    std::string GetOldCertificateId() const;

                    /**
                     * 设置Original certificate ID, which is used to apply for a new certificate.
                     * @param _oldCertificateId Original certificate ID, which is used to apply for a new certificate.
                     * 
                     */
                    void SetOldCertificateId(const std::string& _oldCertificateId);

                    /**
                     * 判断参数 OldCertificateId 是否已赋值
                     * @return OldCertificateId 是否已赋值
                     * 
                     */
                    bool OldCertificateIdHasBeenSet() const;

                    /**
                     * 获取Benefit package ID, which is used to expand the free certificate package
                     * @return PackageId Benefit package ID, which is used to expand the free certificate package
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置Benefit package ID, which is used to expand the free certificate package
                     * @param _packageId Benefit package ID, which is used to expand the free certificate package
                     * 
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取Whether to delete the automatic domain name verification record after issuance, which is no by default. This parameter can be passed in only for domain names of the DNS_AUTO verification type.
                     * @return DeleteDnsAutoRecord Whether to delete the automatic domain name verification record after issuance, which is no by default. This parameter can be passed in only for domain names of the DNS_AUTO verification type.
                     * 
                     */
                    bool GetDeleteDnsAutoRecord() const;

                    /**
                     * 设置Whether to delete the automatic domain name verification record after issuance, which is no by default. This parameter can be passed in only for domain names of the DNS_AUTO verification type.
                     * @param _deleteDnsAutoRecord Whether to delete the automatic domain name verification record after issuance, which is no by default. This parameter can be passed in only for domain names of the DNS_AUTO verification type.
                     * 
                     */
                    void SetDeleteDnsAutoRecord(const bool& _deleteDnsAutoRecord);

                    /**
                     * 判断参数 DeleteDnsAutoRecord 是否已赋值
                     * @return DeleteDnsAutoRecord 是否已赋值
                     * 
                     */
                    bool DeleteDnsAutoRecordHasBeenSet() const;

                private:

                    /**
                     * Validation type. `DNS_AUTO`: automatic DNS validation; `DNS`: manual DNS validation; `FILE`: file validation
                     */
                    std::string m_dvAuthMethod;
                    bool m_dvAuthMethodHasBeenSet;

                    /**
                     * Domain name
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Project ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Certificate type. Currently, the only supported value is 2, which indicates TrustAsia TLS RSA CA.
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * Email address
                     */
                    std::string m_contactEmail;
                    bool m_contactEmailHasBeenSet;

                    /**
                     * Mobile number
                     */
                    std::string m_contactPhone;
                    bool m_contactPhoneHasBeenSet;

                    /**
                     * Validity period. The default value is 12 months, which is the only supported value currently.
                     */
                    std::string m_validityPeriod;
                    bool m_validityPeriodHasBeenSet;

                    /**
                     * Encryption algorithm. Only RSA is supported.
                     */
                    std::string m_csrEncryptAlgo;
                    bool m_csrEncryptAlgoHasBeenSet;

                    /**
                     * Key pair parameter. Only the 2048-bit key pair is supported.
                     */
                    std::string m_csrKeyParameter;
                    bool m_csrKeyParameterHasBeenSet;

                    /**
                     * CSR encryption password
                     */
                    std::string m_csrKeyPassword;
                    bool m_csrKeyPasswordHasBeenSet;

                    /**
                     * Alias
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * Original certificate ID, which is used to apply for a new certificate.
                     */
                    std::string m_oldCertificateId;
                    bool m_oldCertificateIdHasBeenSet;

                    /**
                     * Benefit package ID, which is used to expand the free certificate package
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * Whether to delete the automatic domain name verification record after issuance, which is no by default. This parameter can be passed in only for domain names of the DNS_AUTO verification type.
                     */
                    bool m_deleteDnsAutoRecord;
                    bool m_deleteDnsAutoRecordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_APPLYCERTIFICATEREQUEST_H_
