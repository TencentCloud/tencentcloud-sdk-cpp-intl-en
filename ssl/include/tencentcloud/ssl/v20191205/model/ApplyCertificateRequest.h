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
                     * 获取Certificate domain validation methods:

DNS_AUTO: Automatically add domain DNS validation. Requires the user's domain to be hosted on 'Cloud DNS' and associated with the same Tencent Cloud account as the certificate application.

DNS: Manually add domain DNS validation. Requires the user to manually add the validation value at their domain's DNS service provider.

FILE: Manually add domain file validation. Requires the user to manually add a specified path file in the root directory of the domain site for file validation. Either HTTP or HTTPS validation will suffice; the domain site must be accessible by overseas CA institutions. The specific access whitelist is: 64.78.193.238, 216.168.247.9, 216.168.249.9, 54.189.196.217.
                     * @return DvAuthMethod Certificate domain validation methods:

DNS_AUTO: Automatically add domain DNS validation. Requires the user's domain to be hosted on 'Cloud DNS' and associated with the same Tencent Cloud account as the certificate application.

DNS: Manually add domain DNS validation. Requires the user to manually add the validation value at their domain's DNS service provider.

FILE: Manually add domain file validation. Requires the user to manually add a specified path file in the root directory of the domain site for file validation. Either HTTP or HTTPS validation will suffice; the domain site must be accessible by overseas CA institutions. The specific access whitelist is: 64.78.193.238, 216.168.247.9, 216.168.249.9, 54.189.196.217.
                     * 
                     */
                    std::string GetDvAuthMethod() const;

                    /**
                     * 设置Certificate domain validation methods:

DNS_AUTO: Automatically add domain DNS validation. Requires the user's domain to be hosted on 'Cloud DNS' and associated with the same Tencent Cloud account as the certificate application.

DNS: Manually add domain DNS validation. Requires the user to manually add the validation value at their domain's DNS service provider.

FILE: Manually add domain file validation. Requires the user to manually add a specified path file in the root directory of the domain site for file validation. Either HTTP or HTTPS validation will suffice; the domain site must be accessible by overseas CA institutions. The specific access whitelist is: 64.78.193.238, 216.168.247.9, 216.168.249.9, 54.189.196.217.
                     * @param _dvAuthMethod Certificate domain validation methods:

DNS_AUTO: Automatically add domain DNS validation. Requires the user's domain to be hosted on 'Cloud DNS' and associated with the same Tencent Cloud account as the certificate application.

DNS: Manually add domain DNS validation. Requires the user to manually add the validation value at their domain's DNS service provider.

FILE: Manually add domain file validation. Requires the user to manually add a specified path file in the root directory of the domain site for file validation. Either HTTP or HTTPS validation will suffice; the domain site must be accessible by overseas CA institutions. The specific access whitelist is: 64.78.193.238, 216.168.247.9, 216.168.249.9, 54.189.196.217.
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
                     * 获取The domain bound to the certificate.
                     * @return DomainName The domain bound to the certificate.
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置The domain bound to the certificate.
                     * @param _domainName The domain bound to the certificate.
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
                     * 获取The project ID associated with the certificate. Default is 0 (default project)
                     * @return ProjectId The project ID associated with the certificate. Default is 0 (default project)
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置The project ID associated with the certificate. Default is 0 (default project)
                     * @param _projectId The project ID associated with the certificate. Default is 0 (default project)
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
                     * 获取Certificate type, optional, currently only type 83 is supported. 83 = trustasia c1 dv free.
                     * @return PackageType Certificate type, optional, currently only type 83 is supported. 83 = trustasia c1 dv free.
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置Certificate type, optional, currently only type 83 is supported. 83 = trustasia c1 dv free.
                     * @param _packageType Certificate type, optional, currently only type 83 is supported. 83 = trustasia c1 dv free.
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
                     * 获取The email associated with the certificate order, By default, it uses the Tencent Cloud account email. If it does not exist, a fixed email address will be used.
                     * @return ContactEmail The email associated with the certificate order, By default, it uses the Tencent Cloud account email. If it does not exist, a fixed email address will be used.
                     * 
                     */
                    std::string GetContactEmail() const;

                    /**
                     * 设置The email associated with the certificate order, By default, it uses the Tencent Cloud account email. If it does not exist, a fixed email address will be used.
                     * @param _contactEmail The email associated with the certificate order, By default, it uses the Tencent Cloud account email. If it does not exist, a fixed email address will be used.
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
                     * 获取The mobile phone number associated with the certificate. If it does not exist, a fixed mobile phone number will be used.
                     * @return ContactPhone The mobile phone number associated with the certificate. If it does not exist, a fixed mobile phone number will be used.
                     * 
                     */
                    std::string GetContactPhone() const;

                    /**
                     * 设置The mobile phone number associated with the certificate. If it does not exist, a fixed mobile phone number will be used.
                     * @param _contactPhone The mobile phone number associated with the certificate. If it does not exist, a fixed mobile phone number will be used.
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
                     * 获取Certificate valid period, 3 months by default, currently only 3 months is supported.
                     * @return ValidityPeriod Certificate valid period, 3 months by default, currently only 3 months is supported.
                     * 
                     */
                    std::string GetValidityPeriod() const;

                    /**
                     * 设置Certificate valid period, 3 months by default, currently only 3 months is supported.
                     * @param _validityPeriod Certificate valid period, 3 months by default, currently only 3 months is supported.
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
                     * 获取Encryption algorithm, values can be ECC or RSA, default is RSA.
                     * @return CsrEncryptAlgo Encryption algorithm, values can be ECC or RSA, default is RSA.
                     * 
                     */
                    std::string GetCsrEncryptAlgo() const;

                    /**
                     * 设置Encryption algorithm, values can be ECC or RSA, default is RSA.
                     * @param _csrEncryptAlgo Encryption algorithm, values can be ECC or RSA, default is RSA.
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
                     * 获取Key pair parameters. RSA supports only 2048. ECC supports only prime256v1. When the encryption algorithm is set to ECC, this parameter is mandatory.
                     * @return CsrKeyParameter Key pair parameters. RSA supports only 2048. ECC supports only prime256v1. When the encryption algorithm is set to ECC, this parameter is mandatory.
                     * 
                     */
                    std::string GetCsrKeyParameter() const;

                    /**
                     * 设置Key pair parameters. RSA supports only 2048. ECC supports only prime256v1. When the encryption algorithm is set to ECC, this parameter is mandatory.
                     * @param _csrKeyParameter Key pair parameters. RSA supports only 2048. ECC supports only prime256v1. When the encryption algorithm is set to ECC, this parameter is mandatory.
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
                     * 获取Private key password, currently only used when generating jks, pfx format certificates; private key certificates of other formats are not encrypted.
                     * @return CsrKeyPassword Private key password, currently only used when generating jks, pfx format certificates; private key certificates of other formats are not encrypted.
                     * 
                     */
                    std::string GetCsrKeyPassword() const;

                    /**
                     * 设置Private key password, currently only used when generating jks, pfx format certificates; private key certificates of other formats are not encrypted.
                     * @param _csrKeyPassword Private key password, currently only used when generating jks, pfx format certificates; private key certificates of other formats are not encrypted.
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
                     * 获取Certificate alias.
                     * @return Alias Certificate alias.
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置Certificate alias.
                     * @param _alias Certificate alias.
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
                     * 获取Old certificate id, used for certificate renewal (the certificate valid period is within 30 days and not expired), a renewal relationship will be established, which can be hosted; not providing it means applying for a new certificate.
                     * @return OldCertificateId Old certificate id, used for certificate renewal (the certificate valid period is within 30 days and not expired), a renewal relationship will be established, which can be hosted; not providing it means applying for a new certificate.
                     * 
                     */
                    std::string GetOldCertificateId() const;

                    /**
                     * 设置Old certificate id, used for certificate renewal (the certificate valid period is within 30 days and not expired), a renewal relationship will be established, which can be hosted; not providing it means applying for a new certificate.
                     * @param _oldCertificateId Old certificate id, used for certificate renewal (the certificate valid period is within 30 days and not expired), a renewal relationship will be established, which can be hosted; not providing it means applying for a new certificate.
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
                     * 获取Benefit package ID, used for free certificate expansion package, the free certificate expansion package has been discontinued.
                     * @return PackageId Benefit package ID, used for free certificate expansion package, the free certificate expansion package has been discontinued.
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置Benefit package ID, used for free certificate expansion package, the free certificate expansion package has been discontinued.
                     * @param _packageId Benefit package ID, used for free certificate expansion package, the free certificate expansion package has been discontinued.
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
                     * 获取Whether to delete the automatic domain name verification record after issuance, which is fasle by default. This parameter can be passed in only for domain names of the DNS_AUTO verification type.
                     * @return DeleteDnsAutoRecord Whether to delete the automatic domain name verification record after issuance, which is fasle by default. This parameter can be passed in only for domain names of the DNS_AUTO verification type.
                     * 
                     */
                    bool GetDeleteDnsAutoRecord() const;

                    /**
                     * 设置Whether to delete the automatic domain name verification record after issuance, which is fasle by default. This parameter can be passed in only for domain names of the DNS_AUTO verification type.
                     * @param _deleteDnsAutoRecord Whether to delete the automatic domain name verification record after issuance, which is fasle by default. This parameter can be passed in only for domain names of the DNS_AUTO verification type.
                     * 
                     */
                    void SetDeleteDnsAutoRecord(const bool& _deleteDnsAutoRecord);

                    /**
                     * 判断参数 DeleteDnsAutoRecord 是否已赋值
                     * @return DeleteDnsAutoRecord 是否已赋值
                     * 
                     */
                    bool DeleteDnsAutoRecordHasBeenSet() const;

                    /**
                     * 获取Other domains bound to the certificate, to be opened. This parameter is not currently supported.
                     * @return DnsNames Other domains bound to the certificate, to be opened. This parameter is not currently supported.
                     * 
                     */
                    std::vector<std::string> GetDnsNames() const;

                    /**
                     * 设置Other domains bound to the certificate, to be opened. This parameter is not currently supported.
                     * @param _dnsNames Other domains bound to the certificate, to be opened. This parameter is not currently supported.
                     * 
                     */
                    void SetDnsNames(const std::vector<std::string>& _dnsNames);

                    /**
                     * 判断参数 DnsNames 是否已赋值
                     * @return DnsNames 是否已赋值
                     * 
                     */
                    bool DnsNamesHasBeenSet() const;

                private:

                    /**
                     * Certificate domain validation methods:

DNS_AUTO: Automatically add domain DNS validation. Requires the user's domain to be hosted on 'Cloud DNS' and associated with the same Tencent Cloud account as the certificate application.

DNS: Manually add domain DNS validation. Requires the user to manually add the validation value at their domain's DNS service provider.

FILE: Manually add domain file validation. Requires the user to manually add a specified path file in the root directory of the domain site for file validation. Either HTTP or HTTPS validation will suffice; the domain site must be accessible by overseas CA institutions. The specific access whitelist is: 64.78.193.238, 216.168.247.9, 216.168.249.9, 54.189.196.217.
                     */
                    std::string m_dvAuthMethod;
                    bool m_dvAuthMethodHasBeenSet;

                    /**
                     * The domain bound to the certificate.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * The project ID associated with the certificate. Default is 0 (default project)
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Certificate type, optional, currently only type 83 is supported. 83 = trustasia c1 dv free.
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * The email associated with the certificate order, By default, it uses the Tencent Cloud account email. If it does not exist, a fixed email address will be used.
                     */
                    std::string m_contactEmail;
                    bool m_contactEmailHasBeenSet;

                    /**
                     * The mobile phone number associated with the certificate. If it does not exist, a fixed mobile phone number will be used.
                     */
                    std::string m_contactPhone;
                    bool m_contactPhoneHasBeenSet;

                    /**
                     * Certificate valid period, 3 months by default, currently only 3 months is supported.
                     */
                    std::string m_validityPeriod;
                    bool m_validityPeriodHasBeenSet;

                    /**
                     * Encryption algorithm, values can be ECC or RSA, default is RSA.
                     */
                    std::string m_csrEncryptAlgo;
                    bool m_csrEncryptAlgoHasBeenSet;

                    /**
                     * Key pair parameters. RSA supports only 2048. ECC supports only prime256v1. When the encryption algorithm is set to ECC, this parameter is mandatory.
                     */
                    std::string m_csrKeyParameter;
                    bool m_csrKeyParameterHasBeenSet;

                    /**
                     * Private key password, currently only used when generating jks, pfx format certificates; private key certificates of other formats are not encrypted.
                     */
                    std::string m_csrKeyPassword;
                    bool m_csrKeyPasswordHasBeenSet;

                    /**
                     * Certificate alias.
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * Old certificate id, used for certificate renewal (the certificate valid period is within 30 days and not expired), a renewal relationship will be established, which can be hosted; not providing it means applying for a new certificate.
                     */
                    std::string m_oldCertificateId;
                    bool m_oldCertificateIdHasBeenSet;

                    /**
                     * Benefit package ID, used for free certificate expansion package, the free certificate expansion package has been discontinued.
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * Whether to delete the automatic domain name verification record after issuance, which is fasle by default. This parameter can be passed in only for domain names of the DNS_AUTO verification type.
                     */
                    bool m_deleteDnsAutoRecord;
                    bool m_deleteDnsAutoRecordHasBeenSet;

                    /**
                     * Other domains bound to the certificate, to be opened. This parameter is not currently supported.
                     */
                    std::vector<std::string> m_dnsNames;
                    bool m_dnsNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_APPLYCERTIFICATEREQUEST_H_
