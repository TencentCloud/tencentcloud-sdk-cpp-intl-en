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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATEINFOSUBMITREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATEINFOSUBMITREQUEST_H_

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
                * CertificateInfoSubmit request structure.
                */
                class CertificateInfoSubmitRequest : public AbstractModel
                {
                public:
                    CertificateInfoSubmitRequest();
                    ~CertificateInfoSubmitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Paid SSL certificate ID of materials to be submitted.	
                     * @return CertId Paid SSL certificate ID of materials to be submitted.	
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置Paid SSL certificate ID of materials to be submitted.	
                     * @param _certId Paid SSL certificate ID of materials to be submitted.	
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
                     * 获取This field is required. CSR generation method, value is:
-online: Tencent Cloud submits the filled parameter information to generate a CSR and private key, and by Tencent Cloud for encrypted storage.
-parse: Generate CSR and private key manually, and apply for a certificate by uploading CSR.
                     * @return GenCsrType This field is required. CSR generation method, value is:
-online: Tencent Cloud submits the filled parameter information to generate a CSR and private key, and by Tencent Cloud for encrypted storage.
-parse: Generate CSR and private key manually, and apply for a certificate by uploading CSR.
                     * 
                     */
                    std::string GetGenCsrType() const;

                    /**
                     * 设置This field is required. CSR generation method, value is:
-online: Tencent Cloud submits the filled parameter information to generate a CSR and private key, and by Tencent Cloud for encrypted storage.
-parse: Generate CSR and private key manually, and apply for a certificate by uploading CSR.
                     * @param _genCsrType This field is required. CSR generation method, value is:
-online: Tencent Cloud submits the filled parameter information to generate a CSR and private key, and by Tencent Cloud for encrypted storage.
-parse: Generate CSR and private key manually, and apply for a certificate by uploading CSR.
                     * 
                     */
                    void SetGenCsrType(const std::string& _genCsrType);

                    /**
                     * 判断参数 GenCsrType 是否已赋值
                     * @return GenCsrType 是否已赋值
                     * 
                     */
                    bool GenCsrTypeHasBeenSet() const;

                    /**
                     * 获取Common name for certificate binding. If an uploaded CSR is used, that domain name must match the common name resolved by the CSR.
                     * @return CertCommonName Common name for certificate binding. If an uploaded CSR is used, that domain name must match the common name resolved by the CSR.
                     * 
                     */
                    std::string GetCertCommonName() const;

                    /**
                     * 设置Common name for certificate binding. If an uploaded CSR is used, that domain name must match the common name resolved by the CSR.
                     * @param _certCommonName Common name for certificate binding. If an uploaded CSR is used, that domain name must match the common name resolved by the CSR.
                     * 
                     */
                    void SetCertCommonName(const std::string& _certCommonName);

                    /**
                     * 判断参数 CertCommonName 是否已赋值
                     * @return CertCommonName 是否已赋值
                     * 
                     */
                    bool CertCommonNameHasBeenSet() const;

                    /**
                     * 获取Organization information type. Valid values:
1 (Personal): Only DV-type certificates can be set to 1. For personal-type certificates, organization information fields (Org, Admin, Tech) can be omitted.
2 (Company): All types of certificates can be set to 2. Pass organization information fields as needed.
                     * @return CompanyType Organization information type. Valid values:
1 (Personal): Only DV-type certificates can be set to 1. For personal-type certificates, organization information fields (Org, Admin, Tech) can be omitted.
2 (Company): All types of certificates can be set to 2. Pass organization information fields as needed.
                     * 
                     */
                    uint64_t GetCompanyType() const;

                    /**
                     * 设置Organization information type. Valid values:
1 (Personal): Only DV-type certificates can be set to 1. For personal-type certificates, organization information fields (Org, Admin, Tech) can be omitted.
2 (Company): All types of certificates can be set to 2. Pass organization information fields as needed.
                     * @param _companyType Organization information type. Valid values:
1 (Personal): Only DV-type certificates can be set to 1. For personal-type certificates, organization information fields (Org, Admin, Tech) can be omitted.
2 (Company): All types of certificates can be set to 2. Pass organization information fields as needed.
                     * 
                     */
                    void SetCompanyType(const uint64_t& _companyType);

                    /**
                     * 判断参数 CompanyType 是否已赋值
                     * @return CompanyType 是否已赋值
                     * 
                     */
                    bool CompanyTypeHasBeenSet() const;

                    /**
                     * 获取Company ID can be viewed in the [Tencent Cloud Console](https://console.cloud.tencent.com/ssl/info). If no company information is found, set this parameter to 0. If company information matching the current order exists, you can view the company ID via [DescribeCompanies](https://www.tencentcloud.com/document/product/400/90375?from_cn_redirect=1). If a company ID is provided, parameters starting with "Org" can be omitted.


                     * @return CompanyId Company ID can be viewed in the [Tencent Cloud Console](https://console.cloud.tencent.com/ssl/info). If no company information is found, set this parameter to 0. If company information matching the current order exists, you can view the company ID via [DescribeCompanies](https://www.tencentcloud.com/document/product/400/90375?from_cn_redirect=1). If a company ID is provided, parameters starting with "Org" can be omitted.


                     * 
                     */
                    std::string GetCompanyId() const;

                    /**
                     * 设置Company ID can be viewed in the [Tencent Cloud Console](https://console.cloud.tencent.com/ssl/info). If no company information is found, set this parameter to 0. If company information matching the current order exists, you can view the company ID via [DescribeCompanies](https://www.tencentcloud.com/document/product/400/90375?from_cn_redirect=1). If a company ID is provided, parameters starting with "Org" can be omitted.


                     * @param _companyId Company ID can be viewed in the [Tencent Cloud Console](https://console.cloud.tencent.com/ssl/info). If no company information is found, set this parameter to 0. If company information matching the current order exists, you can view the company ID via [DescribeCompanies](https://www.tencentcloud.com/document/product/400/90375?from_cn_redirect=1). If a company ID is provided, parameters starting with "Org" can be omitted.


                     * 
                     */
                    void SetCompanyId(const std::string& _companyId);

                    /**
                     * 判断参数 CompanyId 是否已赋值
                     * @return CompanyId 是否已赋值
                     * 
                     */
                    bool CompanyIdHasBeenSet() const;

                    /**
                     * 获取Company document type. Valid values:
TYDMZ (unified social credit code): This field is required only for CFCA certificates, not required for other types.
OTHERS
                     * @return OrgIdType Company document type. Valid values:
TYDMZ (unified social credit code): This field is required only for CFCA certificates, not required for other types.
OTHERS
                     * 
                     */
                    std::string GetOrgIdType() const;

                    /**
                     * 设置Company document type. Valid values:
TYDMZ (unified social credit code): This field is required only for CFCA certificates, not required for other types.
OTHERS
                     * @param _orgIdType Company document type. Valid values:
TYDMZ (unified social credit code): This field is required only for CFCA certificates, not required for other types.
OTHERS
                     * 
                     */
                    void SetOrgIdType(const std::string& _orgIdType);

                    /**
                     * 判断参数 OrgIdType 是否已赋值
                     * @return OrgIdType 是否已赋值
                     * 
                     */
                    bool OrgIdTypeHasBeenSet() const;

                    /**
                     * 获取Company identification number, value ranges from...to...
TYDMZ (unified social credit code): 11532xxxxxxxx24820

                     * @return OrgIdNumber Company identification number, value ranges from...to...
TYDMZ (unified social credit code): 11532xxxxxxxx24820

                     * 
                     */
                    std::string GetOrgIdNumber() const;

                    /**
                     * 设置Company identification number, value ranges from...to...
TYDMZ (unified social credit code): 11532xxxxxxxx24820

                     * @param _orgIdNumber Company identification number, value ranges from...to...
TYDMZ (unified social credit code): 11532xxxxxxxx24820

                     * 
                     */
                    void SetOrgIdNumber(const std::string& _orgIdNumber);

                    /**
                     * 判断参数 OrgIdNumber 是否已赋值
                     * @return OrgIdNumber 是否已赋值
                     * 
                     */
                    bool OrgIdNumberHasBeenSet() const;

                    /**
                     * 获取Document type of the manager. Valid values:
SFZ (ID card): This field is required only for CFCA certs, not required for other types.
HZ (passport): This field is required only for CFCA certs and not required for other types.
                     * @return AdminIdType Document type of the manager. Valid values:
SFZ (ID card): This field is required only for CFCA certs, not required for other types.
HZ (passport): This field is required only for CFCA certs and not required for other types.
                     * 
                     */
                    std::string GetAdminIdType() const;

                    /**
                     * 设置Document type of the manager. Valid values:
SFZ (ID card): This field is required only for CFCA certs, not required for other types.
HZ (passport): This field is required only for CFCA certs and not required for other types.
                     * @param _adminIdType Document type of the manager. Valid values:
SFZ (ID card): This field is required only for CFCA certs, not required for other types.
HZ (passport): This field is required only for CFCA certs and not required for other types.
                     * 
                     */
                    void SetAdminIdType(const std::string& _adminIdType);

                    /**
                     * 判断参数 AdminIdType 是否已赋值
                     * @return AdminIdType 是否已赋值
                     * 
                     */
                    bool AdminIdTypeHasBeenSet() const;

                    /**
                     * 获取ID number of the manager. This field is required only for CFCA certificates, not required for other types. Value ranges from...to...
ID card: 110000xxxxxxxx1242
HZ (Passport): EFxxxxxxx
                     * @return AdminIdNumber ID number of the manager. This field is required only for CFCA certificates, not required for other types. Value ranges from...to...
ID card: 110000xxxxxxxx1242
HZ (Passport): EFxxxxxxx
                     * 
                     */
                    std::string GetAdminIdNumber() const;

                    /**
                     * 设置ID number of the manager. This field is required only for CFCA certificates, not required for other types. Value ranges from...to...
ID card: 110000xxxxxxxx1242
HZ (Passport): EFxxxxxxx
                     * @param _adminIdNumber ID number of the manager. This field is required only for CFCA certificates, not required for other types. Value ranges from...to...
ID card: 110000xxxxxxxx1242
HZ (Passport): EFxxxxxxx
                     * 
                     */
                    void SetAdminIdNumber(const std::string& _adminIdNumber);

                    /**
                     * 判断参数 AdminIdNumber 是否已赋值
                     * @return AdminIdNumber 是否已赋值
                     * 
                     */
                    bool AdminIdNumberHasBeenSet() const;

                    /**
                     * 获取Contact person document type. Valid values:
SFZ (ID card): This field is required only for CFCA certs, not required for other types.
HZ (passport): This field is required only for CFCA certs and not required for other types.
                     * @return TechIdType Contact person document type. Valid values:
SFZ (ID card): This field is required only for CFCA certs, not required for other types.
HZ (passport): This field is required only for CFCA certs and not required for other types.
                     * 
                     */
                    std::string GetTechIdType() const;

                    /**
                     * 设置Contact person document type. Valid values:
SFZ (ID card): This field is required only for CFCA certs, not required for other types.
HZ (passport): This field is required only for CFCA certs and not required for other types.
                     * @param _techIdType Contact person document type. Valid values:
SFZ (ID card): This field is required only for CFCA certs, not required for other types.
HZ (passport): This field is required only for CFCA certs and not required for other types.
                     * 
                     */
                    void SetTechIdType(const std::string& _techIdType);

                    /**
                     * 判断参数 TechIdType 是否已赋值
                     * @return TechIdType 是否已赋值
                     * 
                     */
                    bool TechIdTypeHasBeenSet() const;

                    /**
                     * 获取ID number of the contact person. This field is required only for CFCA certs and not required for other types. Value ranges from...to...
ID card: 110000xxxxxxxx1242
HZ (Passport): EFxxxxxxx
                     * @return TechIdNumber ID number of the contact person. This field is required only for CFCA certs and not required for other types. Value ranges from...to...
ID card: 110000xxxxxxxx1242
HZ (Passport): EFxxxxxxx
                     * 
                     */
                    std::string GetTechIdNumber() const;

                    /**
                     * 设置ID number of the contact person. This field is required only for CFCA certs and not required for other types. Value ranges from...to...
ID card: 110000xxxxxxxx1242
HZ (Passport): EFxxxxxxx
                     * @param _techIdNumber ID number of the contact person. This field is required only for CFCA certs and not required for other types. Value ranges from...to...
ID card: 110000xxxxxxxx1242
HZ (Passport): EFxxxxxxx
                     * 
                     */
                    void SetTechIdNumber(const std::string& _techIdNumber);

                    /**
                     * 判断参数 TechIdNumber 是否已赋值
                     * @return TechIdNumber 是否已赋值
                     * 
                     */
                    bool TechIdNumberHasBeenSet() const;

                    /**
                     * 获取Uploaded CSR content.
If GenCsrType is parse, this field is required.
                     * @return Csr Uploaded CSR content.
If GenCsrType is parse, this field is required.
                     * 
                     */
                    std::string GetCsr() const;

                    /**
                     * 设置Uploaded CSR content.
If GenCsrType is parse, this field is required.
                     * @param _csr Uploaded CSR content.
If GenCsrType is parse, this field is required.
                     * 
                     */
                    void SetCsr(const std::string& _csr);

                    /**
                     * 判断参数 Csr 是否已赋值
                     * @return Csr 是否已赋值
                     * 
                     */
                    bool CsrHasBeenSet() const;

                    /**
                     * 获取Other domains bound to the certificate. No need to provide for single domain or wildcard certificates. Required for multi-domain names and multiple wildcard certificates.
                     * @return DnsNames Other domains bound to the certificate. No need to provide for single domain or wildcard certificates. Required for multi-domain names and multiple wildcard certificates.
                     * 
                     */
                    std::vector<std::string> GetDnsNames() const;

                    /**
                     * 设置Other domains bound to the certificate. No need to provide for single domain or wildcard certificates. Required for multi-domain names and multiple wildcard certificates.
                     * @param _dnsNames Other domains bound to the certificate. No need to provide for single domain or wildcard certificates. Required for multi-domain names and multiple wildcard certificates.
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
                     * 获取Private key password. Currently used only when generating certs in jks or pfx format; private key certificates in other formats are unencrypted.	
                     * @return KeyPass Private key password. Currently used only when generating certs in jks or pfx format; private key certificates in other formats are unencrypted.	
                     * 
                     */
                    std::string GetKeyPass() const;

                    /**
                     * 设置Private key password. Currently used only when generating certs in jks or pfx format; private key certificates in other formats are unencrypted.	
                     * @param _keyPass Private key password. Currently used only when generating certs in jks or pfx format; private key certificates in other formats are unencrypted.	
                     * 
                     */
                    void SetKeyPass(const std::string& _keyPass);

                    /**
                     * 判断参数 KeyPass 是否已赋值
                     * @return KeyPass 是否已赋值
                     * 
                     */
                    bool KeyPassHasBeenSet() const;

                    /**
                     * 获取Company name. This field is required if CompanyId or ManagerId is not provided.
                     * @return OrgOrganization Company name. This field is required if CompanyId or ManagerId is not provided.
                     * 
                     */
                    std::string GetOrgOrganization() const;

                    /**
                     * 设置Company name. This field is required if CompanyId or ManagerId is not provided.
                     * @param _orgOrganization Company name. This field is required if CompanyId or ManagerId is not provided.
                     * 
                     */
                    void SetOrgOrganization(const std::string& _orgOrganization);

                    /**
                     * 判断参数 OrgOrganization 是否已赋值
                     * @return OrgOrganization 是否已赋值
                     * 
                     */
                    bool OrgOrganizationHasBeenSet() const;

                    /**
                     * 获取Department name. If not passing CompanyId or ManagerId, this field is required.
                     * @return OrgDivision Department name. If not passing CompanyId or ManagerId, this field is required.
                     * 
                     */
                    std::string GetOrgDivision() const;

                    /**
                     * 设置Department name. If not passing CompanyId or ManagerId, this field is required.
                     * @param _orgDivision Department name. If not passing CompanyId or ManagerId, this field is required.
                     * 
                     */
                    void SetOrgDivision(const std::string& _orgDivision);

                    /**
                     * 判断参数 OrgDivision 是否已赋值
                     * @return OrgDivision 是否已赋值
                     * 
                     */
                    bool OrgDivisionHasBeenSet() const;

                    /**
                     * 获取Company detailed address. If not pass CompanyId or ManagerId, this field is required.
                     * @return OrgAddress Company detailed address. If not pass CompanyId or ManagerId, this field is required.
                     * 
                     */
                    std::string GetOrgAddress() const;

                    /**
                     * 设置Company detailed address. If not pass CompanyId or ManagerId, this field is required.
                     * @param _orgAddress Company detailed address. If not pass CompanyId or ManagerId, this field is required.
                     * 
                     */
                    void SetOrgAddress(const std::string& _orgAddress);

                    /**
                     * 判断参数 OrgAddress 是否已赋值
                     * @return OrgAddress 是否已赋值
                     * 
                     */
                    bool OrgAddressHasBeenSet() const;

                    /**
                     * 获取Country/region name, for example China: CN. If not passing CompanyId or ManagerId, this field is required.
                     * @return OrgCountry Country/region name, for example China: CN. If not passing CompanyId or ManagerId, this field is required.
                     * 
                     */
                    std::string GetOrgCountry() const;

                    /**
                     * 设置Country/region name, for example China: CN. If not passing CompanyId or ManagerId, this field is required.
                     * @param _orgCountry Country/region name, for example China: CN. If not passing CompanyId or ManagerId, this field is required.
                     * 
                     */
                    void SetOrgCountry(const std::string& _orgCountry);

                    /**
                     * 判断参数 OrgCountry 是否已赋值
                     * @return OrgCountry 是否已赋值
                     * 
                     */
                    bool OrgCountryHasBeenSet() const;

                    /**
                     * 获取Located city. If not pass CompanyId or ManagerId, this field is required.
                     * @return OrgCity Located city. If not pass CompanyId or ManagerId, this field is required.
                     * 
                     */
                    std::string GetOrgCity() const;

                    /**
                     * 设置Located city. If not pass CompanyId or ManagerId, this field is required.
                     * @param _orgCity Located city. If not pass CompanyId or ManagerId, this field is required.
                     * 
                     */
                    void SetOrgCity(const std::string& _orgCity);

                    /**
                     * 判断参数 OrgCity 是否已赋值
                     * @return OrgCity 是否已赋值
                     * 
                     */
                    bool OrgCityHasBeenSet() const;

                    /**
                     * 获取Province where the company is located. If not passing CompanyId or ManagerId, this field is required.
                     * @return OrgRegion Province where the company is located. If not passing CompanyId or ManagerId, this field is required.
                     * 
                     */
                    std::string GetOrgRegion() const;

                    /**
                     * 设置Province where the company is located. If not passing CompanyId or ManagerId, this field is required.
                     * @param _orgRegion Province where the company is located. If not passing CompanyId or ManagerId, this field is required.
                     * 
                     */
                    void SetOrgRegion(const std::string& _orgRegion);

                    /**
                     * 判断参数 OrgRegion 是否已赋值
                     * @return OrgRegion 是否已赋值
                     * 
                     */
                    bool OrgRegionHasBeenSet() const;

                    /**
                     * 获取Area code of the company. If not passing CompanyId or ManagerId, this field is required.
For example: 021. Pass 86 as the mobile number.
                     * @return OrgPhoneArea Area code of the company. If not passing CompanyId or ManagerId, this field is required.
For example: 021. Pass 86 as the mobile number.
                     * 
                     */
                    std::string GetOrgPhoneArea() const;

                    /**
                     * 设置Area code of the company. If not passing CompanyId or ManagerId, this field is required.
For example: 021. Pass 86 as the mobile number.
                     * @param _orgPhoneArea Area code of the company. If not passing CompanyId or ManagerId, this field is required.
For example: 021. Pass 86 as the mobile number.
                     * 
                     */
                    void SetOrgPhoneArea(const std::string& _orgPhoneArea);

                    /**
                     * 判断参数 OrgPhoneArea 是否已赋值
                     * @return OrgPhoneArea 是否已赋值
                     * 
                     */
                    bool OrgPhoneAreaHasBeenSet() const;

                    /**
                     * 获取Company number. If CompanyId or ManagerId is not provided, this field is required.
                     * @return OrgPhoneNumber Company number. If CompanyId or ManagerId is not provided, this field is required.
                     * 
                     */
                    std::string GetOrgPhoneNumber() const;

                    /**
                     * 设置Company number. If CompanyId or ManagerId is not provided, this field is required.
                     * @param _orgPhoneNumber Company number. If CompanyId or ManagerId is not provided, this field is required.
                     * 
                     */
                    void SetOrgPhoneNumber(const std::string& _orgPhoneNumber);

                    /**
                     * 判断参数 OrgPhoneNumber 是否已赋值
                     * @return OrgPhoneNumber 是否已赋值
                     * 
                     */
                    bool OrgPhoneNumberHasBeenSet() const;

                    /**
                     * 获取Domain validation method of the certificate
DNS: Manually add domain DNS validation. The user needs to manually add the verification value at the DNS service provider.
FILE: Manual addition of domain name FILE verification. Users are advised to manually add a specified path FILE in the root directory of the domain site to perform FILE verification. Either http or https passing is sufficient. The domain site must be accessible by overseas certificate authorities. The specific access allowlist is: 64.78.193.238, 216.168.247.9, 216.168.249.9, 54.189.196.217.
                     * @return VerifyType Domain validation method of the certificate
DNS: Manually add domain DNS validation. The user needs to manually add the verification value at the DNS service provider.
FILE: Manual addition of domain name FILE verification. Users are advised to manually add a specified path FILE in the root directory of the domain site to perform FILE verification. Either http or https passing is sufficient. The domain site must be accessible by overseas certificate authorities. The specific access allowlist is: 64.78.193.238, 216.168.247.9, 216.168.249.9, 54.189.196.217.
                     * 
                     */
                    std::string GetVerifyType() const;

                    /**
                     * 设置Domain validation method of the certificate
DNS: Manually add domain DNS validation. The user needs to manually add the verification value at the DNS service provider.
FILE: Manual addition of domain name FILE verification. Users are advised to manually add a specified path FILE in the root directory of the domain site to perform FILE verification. Either http or https passing is sufficient. The domain site must be accessible by overseas certificate authorities. The specific access allowlist is: 64.78.193.238, 216.168.247.9, 216.168.249.9, 54.189.196.217.
                     * @param _verifyType Domain validation method of the certificate
DNS: Manually add domain DNS validation. The user needs to manually add the verification value at the DNS service provider.
FILE: Manual addition of domain name FILE verification. Users are advised to manually add a specified path FILE in the root directory of the domain site to perform FILE verification. Either http or https passing is sufficient. The domain site must be accessible by overseas certificate authorities. The specific access allowlist is: 64.78.193.238, 216.168.247.9, 216.168.249.9, 54.189.196.217.
                     * 
                     */
                    void SetVerifyType(const std::string& _verifyType);

                    /**
                     * 判断参数 VerifyType 是否已赋值
                     * @return VerifyType 是否已赋值
                     * 
                     */
                    bool VerifyTypeHasBeenSet() const;

                    /**
                     * 获取Manage name. If not passing ManagerId, this field is required.
                     * @return AdminFirstName Manage name. If not passing ManagerId, this field is required.
                     * 
                     */
                    std::string GetAdminFirstName() const;

                    /**
                     * 设置Manage name. If not passing ManagerId, this field is required.
                     * @param _adminFirstName Manage name. If not passing ManagerId, this field is required.
                     * 
                     */
                    void SetAdminFirstName(const std::string& _adminFirstName);

                    /**
                     * 判断参数 AdminFirstName 是否已赋值
                     * @return AdminFirstName 是否已赋值
                     * 
                     */
                    bool AdminFirstNameHasBeenSet() const;

                    /**
                     * 获取Manager name. If not, this field is required when ManagerId is not passed.
                     * @return AdminLastName Manager name. If not, this field is required when ManagerId is not passed.
                     * 
                     */
                    std::string GetAdminLastName() const;

                    /**
                     * 设置Manager name. If not, this field is required when ManagerId is not passed.
                     * @param _adminLastName Manager name. If not, this field is required when ManagerId is not passed.
                     * 
                     */
                    void SetAdminLastName(const std::string& _adminLastName);

                    /**
                     * 判断参数 AdminLastName 是否已赋值
                     * @return AdminLastName 是否已赋值
                     * 
                     */
                    bool AdminLastNameHasBeenSet() const;

                    /**
                     * 获取Manager mobile number. If not passing ManagerId, this field is required.
                     * @return AdminPhone Manager mobile number. If not passing ManagerId, this field is required.
                     * 
                     */
                    std::string GetAdminPhone() const;

                    /**
                     * 设置Manager mobile number. If not passing ManagerId, this field is required.
                     * @param _adminPhone Manager mobile number. If not passing ManagerId, this field is required.
                     * 
                     */
                    void SetAdminPhone(const std::string& _adminPhone);

                    /**
                     * 判断参数 AdminPhone 是否已赋值
                     * @return AdminPhone 是否已赋值
                     * 
                     */
                    bool AdminPhoneHasBeenSet() const;

                    /**
                     * 获取Manager email address. If not passing ManagerId, this field is required.
                     * @return AdminEmail Manager email address. If not passing ManagerId, this field is required.
                     * 
                     */
                    std::string GetAdminEmail() const;

                    /**
                     * 设置Manager email address. If not passing ManagerId, this field is required.
                     * @param _adminEmail Manager email address. If not passing ManagerId, this field is required.
                     * 
                     */
                    void SetAdminEmail(const std::string& _adminEmail);

                    /**
                     * 判断参数 AdminEmail 是否已赋值
                     * @return AdminEmail 是否已赋值
                     * 
                     */
                    bool AdminEmailHasBeenSet() const;

                    /**
                     * 获取Manager position. If not passing ManagerId, this field is required.
                     * @return AdminTitle Manager position. If not passing ManagerId, this field is required.
                     * 
                     */
                    std::string GetAdminTitle() const;

                    /**
                     * 设置Manager position. If not passing ManagerId, this field is required.
                     * @param _adminTitle Manager position. If not passing ManagerId, this field is required.
                     * 
                     */
                    void SetAdminTitle(const std::string& _adminTitle);

                    /**
                     * 判断参数 AdminTitle 是否已赋值
                     * @return AdminTitle 是否已赋值
                     * 
                     */
                    bool AdminTitleHasBeenSet() const;

                    /**
                     * 获取Contact name. If not passing ManagerId, this field is required.
                     * @return TechFirstName Contact name. If not passing ManagerId, this field is required.
                     * 
                     */
                    std::string GetTechFirstName() const;

                    /**
                     * 设置Contact name. If not passing ManagerId, this field is required.
                     * @param _techFirstName Contact name. If not passing ManagerId, this field is required.
                     * 
                     */
                    void SetTechFirstName(const std::string& _techFirstName);

                    /**
                     * 判断参数 TechFirstName 是否已赋值
                     * @return TechFirstName 是否已赋值
                     * 
                     */
                    bool TechFirstNameHasBeenSet() const;

                    /**
                     * 获取Last name of the contact. If not, this field is required when ManagerId is not passed.
                     * @return TechLastName Last name of the contact. If not, this field is required when ManagerId is not passed.
                     * 
                     */
                    std::string GetTechLastName() const;

                    /**
                     * 设置Last name of the contact. If not, this field is required when ManagerId is not passed.
                     * @param _techLastName Last name of the contact. If not, this field is required when ManagerId is not passed.
                     * 
                     */
                    void SetTechLastName(const std::string& _techLastName);

                    /**
                     * 判断参数 TechLastName 是否已赋值
                     * @return TechLastName 是否已赋值
                     * 
                     */
                    bool TechLastNameHasBeenSet() const;

                    /**
                     * 获取Contact email address. This field is required when CompanyType is 1.
                     * @return ContactEmail Contact email address. This field is required when CompanyType is 1.
                     * 
                     */
                    std::string GetContactEmail() const;

                    /**
                     * 设置Contact email address. This field is required when CompanyType is 1.
                     * @param _contactEmail Contact email address. This field is required when CompanyType is 1.
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
                     * 获取Whether to enable auto-renewal: 0, not enabled; 1, enabled; defaults to 0.
                     * @return AutoRenewFlag Whether to enable auto-renewal: 0, not enabled; 1, enabled; defaults to 0.
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Whether to enable auto-renewal: 0, not enabled; 1, enabled; defaults to 0.
                     * @param _autoRenewFlag Whether to enable auto-renewal: 0, not enabled; 1, enabled; defaults to 0.
                     * 
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Key pair parameters. RSA supports 2048 and 4096. ECC is only supported for prime256v1. This parameter is required when the CSR generation method is online.

                     * @return CsrKeyParameter Key pair parameters. RSA supports 2048 and 4096. ECC is only supported for prime256v1. This parameter is required when the CSR generation method is online.

                     * 
                     */
                    std::string GetCsrKeyParameter() const;

                    /**
                     * 设置Key pair parameters. RSA supports 2048 and 4096. ECC is only supported for prime256v1. This parameter is required when the CSR generation method is online.

                     * @param _csrKeyParameter Key pair parameters. RSA supports 2048 and 4096. ECC is only supported for prime256v1. This parameter is required when the CSR generation method is online.

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
                     * 获取Encryption algorithm, value is ECC or RSA, defaults to RSA. This parameter is required when CSR generation method is online.
                     * @return CsrEncryptAlgo Encryption algorithm, value is ECC or RSA, defaults to RSA. This parameter is required when CSR generation method is online.
                     * 
                     */
                    std::string GetCsrEncryptAlgo() const;

                    /**
                     * 设置Encryption algorithm, value is ECC or RSA, defaults to RSA. This parameter is required when CSR generation method is online.
                     * @param _csrEncryptAlgo Encryption algorithm, value is ECC or RSA, defaults to RSA. This parameter is required when CSR generation method is online.
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
                     * 获取Manager ID can be viewed in the [Tencent Cloud Console](https://console.cloud.tencent.com/ssl/info). If no administrator information is found, pass 0 for this parameter. If administrator information exists that meets the current order, the manager ID can be selected based on [DescribeManagers](https://www.tencentcloud.com/document/product/400/52672?from_cn_redirect=1). If the manager ID is passed, parameters beginning with Org, Admin, or Tech can be omitted. The manager ID includes company information.

                     * @return ManagerId Manager ID can be viewed in the [Tencent Cloud Console](https://console.cloud.tencent.com/ssl/info). If no administrator information is found, pass 0 for this parameter. If administrator information exists that meets the current order, the manager ID can be selected based on [DescribeManagers](https://www.tencentcloud.com/document/product/400/52672?from_cn_redirect=1). If the manager ID is passed, parameters beginning with Org, Admin, or Tech can be omitted. The manager ID includes company information.

                     * 
                     */
                    std::string GetManagerId() const;

                    /**
                     * 设置Manager ID can be viewed in the [Tencent Cloud Console](https://console.cloud.tencent.com/ssl/info). If no administrator information is found, pass 0 for this parameter. If administrator information exists that meets the current order, the manager ID can be selected based on [DescribeManagers](https://www.tencentcloud.com/document/product/400/52672?from_cn_redirect=1). If the manager ID is passed, parameters beginning with Org, Admin, or Tech can be omitted. The manager ID includes company information.

                     * @param _managerId Manager ID can be viewed in the [Tencent Cloud Console](https://console.cloud.tencent.com/ssl/info). If no administrator information is found, pass 0 for this parameter. If administrator information exists that meets the current order, the manager ID can be selected based on [DescribeManagers](https://www.tencentcloud.com/document/product/400/52672?from_cn_redirect=1). If the manager ID is passed, parameters beginning with Org, Admin, or Tech can be omitted. The manager ID includes company information.

                     * 
                     */
                    void SetManagerId(const std::string& _managerId);

                    /**
                     * 判断参数 ManagerId 是否已赋值
                     * @return ManagerId 是否已赋值
                     * 
                     */
                    bool ManagerIdHasBeenSet() const;

                    /**
                     * 获取Contact phone. If not passing ManagerId, this field is required.
                     * @return TechPhone Contact phone. If not passing ManagerId, this field is required.
                     * 
                     */
                    std::string GetTechPhone() const;

                    /**
                     * 设置Contact phone. If not passing ManagerId, this field is required.
                     * @param _techPhone Contact phone. If not passing ManagerId, this field is required.
                     * 
                     */
                    void SetTechPhone(const std::string& _techPhone);

                    /**
                     * 判断参数 TechPhone 是否已赋值
                     * @return TechPhone 是否已赋值
                     * 
                     */
                    bool TechPhoneHasBeenSet() const;

                    /**
                     * 获取contact email
                     * @return TechEmail contact email
                     * 
                     */
                    std::string GetTechEmail() const;

                    /**
                     * 设置contact email
                     * @param _techEmail contact email
                     * 
                     */
                    void SetTechEmail(const std::string& _techEmail);

                    /**
                     * 判断参数 TechEmail 是否已赋值
                     * @return TechEmail 是否已赋值
                     * 
                     */
                    bool TechEmailHasBeenSet() const;

                    /**
                     * 获取Contact person position. If not passing ManagerId, this field is required.
                     * @return TechTitle Contact person position. If not passing ManagerId, this field is required.
                     * 
                     */
                    std::string GetTechTitle() const;

                    /**
                     * 设置Contact person position. If not passing ManagerId, this field is required.
                     * @param _techTitle Contact person position. If not passing ManagerId, this field is required.
                     * 
                     */
                    void SetTechTitle(const std::string& _techTitle);

                    /**
                     * 判断参数 TechTitle 是否已赋值
                     * @return TechTitle 是否已赋值
                     * 
                     */
                    bool TechTitleHasBeenSet() const;

                    /**
                     * 获取Certificate type
                     * @return Type Certificate type
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Certificate type
                     * @param _type Certificate type
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Valid only for Dnspod series certs. ca organization kind can be sectigo and digicert.
                     * @return CaType Valid only for Dnspod series certs. ca organization kind can be sectigo and digicert.
                     * 
                     */
                    std::string GetCaType() const;

                    /**
                     * 设置Valid only for Dnspod series certs. ca organization kind can be sectigo and digicert.
                     * @param _caType Valid only for Dnspod series certs. ca organization kind can be sectigo and digicert.
                     * 
                     */
                    void SetCaType(const std::string& _caType);

                    /**
                     * 判断参数 CaType 是否已赋值
                     * @return CaType 是否已赋值
                     * 
                     */
                    bool CaTypeHasBeenSet() const;

                    /**
                     * 获取signature algorithm
                     * @return SignAlgo signature algorithm
                     * 
                     */
                    std::string GetSignAlgo() const;

                    /**
                     * 设置signature algorithm
                     * @param _signAlgo signature algorithm
                     * 
                     */
                    void SetSignAlgo(const std::string& _signAlgo);

                    /**
                     * 判断参数 SignAlgo 是否已赋值
                     * @return SignAlgo 是否已赋值
                     * 
                     */
                    bool SignAlgoHasBeenSet() const;

                    /**
                     * 获取Whether to use intersect root certificate
                     * @return UseCrossSignRoot Whether to use intersect root certificate
                     * 
                     */
                    bool GetUseCrossSignRoot() const;

                    /**
                     * 设置Whether to use intersect root certificate
                     * @param _useCrossSignRoot Whether to use intersect root certificate
                     * 
                     */
                    void SetUseCrossSignRoot(const bool& _useCrossSignRoot);

                    /**
                     * 判断参数 UseCrossSignRoot 是否已赋值
                     * @return UseCrossSignRoot 是否已赋值
                     * 
                     */
                    bool UseCrossSignRootHasBeenSet() const;

                private:

                    /**
                     * Paid SSL certificate ID of materials to be submitted.	
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * This field is required. CSR generation method, value is:
-online: Tencent Cloud submits the filled parameter information to generate a CSR and private key, and by Tencent Cloud for encrypted storage.
-parse: Generate CSR and private key manually, and apply for a certificate by uploading CSR.
                     */
                    std::string m_genCsrType;
                    bool m_genCsrTypeHasBeenSet;

                    /**
                     * Common name for certificate binding. If an uploaded CSR is used, that domain name must match the common name resolved by the CSR.
                     */
                    std::string m_certCommonName;
                    bool m_certCommonNameHasBeenSet;

                    /**
                     * Organization information type. Valid values:
1 (Personal): Only DV-type certificates can be set to 1. For personal-type certificates, organization information fields (Org, Admin, Tech) can be omitted.
2 (Company): All types of certificates can be set to 2. Pass organization information fields as needed.
                     */
                    uint64_t m_companyType;
                    bool m_companyTypeHasBeenSet;

                    /**
                     * Company ID can be viewed in the [Tencent Cloud Console](https://console.cloud.tencent.com/ssl/info). If no company information is found, set this parameter to 0. If company information matching the current order exists, you can view the company ID via [DescribeCompanies](https://www.tencentcloud.com/document/product/400/90375?from_cn_redirect=1). If a company ID is provided, parameters starting with "Org" can be omitted.


                     */
                    std::string m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * Company document type. Valid values:
TYDMZ (unified social credit code): This field is required only for CFCA certificates, not required for other types.
OTHERS
                     */
                    std::string m_orgIdType;
                    bool m_orgIdTypeHasBeenSet;

                    /**
                     * Company identification number, value ranges from...to...
TYDMZ (unified social credit code): 11532xxxxxxxx24820

                     */
                    std::string m_orgIdNumber;
                    bool m_orgIdNumberHasBeenSet;

                    /**
                     * Document type of the manager. Valid values:
SFZ (ID card): This field is required only for CFCA certs, not required for other types.
HZ (passport): This field is required only for CFCA certs and not required for other types.
                     */
                    std::string m_adminIdType;
                    bool m_adminIdTypeHasBeenSet;

                    /**
                     * ID number of the manager. This field is required only for CFCA certificates, not required for other types. Value ranges from...to...
ID card: 110000xxxxxxxx1242
HZ (Passport): EFxxxxxxx
                     */
                    std::string m_adminIdNumber;
                    bool m_adminIdNumberHasBeenSet;

                    /**
                     * Contact person document type. Valid values:
SFZ (ID card): This field is required only for CFCA certs, not required for other types.
HZ (passport): This field is required only for CFCA certs and not required for other types.
                     */
                    std::string m_techIdType;
                    bool m_techIdTypeHasBeenSet;

                    /**
                     * ID number of the contact person. This field is required only for CFCA certs and not required for other types. Value ranges from...to...
ID card: 110000xxxxxxxx1242
HZ (Passport): EFxxxxxxx
                     */
                    std::string m_techIdNumber;
                    bool m_techIdNumberHasBeenSet;

                    /**
                     * Uploaded CSR content.
If GenCsrType is parse, this field is required.
                     */
                    std::string m_csr;
                    bool m_csrHasBeenSet;

                    /**
                     * Other domains bound to the certificate. No need to provide for single domain or wildcard certificates. Required for multi-domain names and multiple wildcard certificates.
                     */
                    std::vector<std::string> m_dnsNames;
                    bool m_dnsNamesHasBeenSet;

                    /**
                     * Private key password. Currently used only when generating certs in jks or pfx format; private key certificates in other formats are unencrypted.	
                     */
                    std::string m_keyPass;
                    bool m_keyPassHasBeenSet;

                    /**
                     * Company name. This field is required if CompanyId or ManagerId is not provided.
                     */
                    std::string m_orgOrganization;
                    bool m_orgOrganizationHasBeenSet;

                    /**
                     * Department name. If not passing CompanyId or ManagerId, this field is required.
                     */
                    std::string m_orgDivision;
                    bool m_orgDivisionHasBeenSet;

                    /**
                     * Company detailed address. If not pass CompanyId or ManagerId, this field is required.
                     */
                    std::string m_orgAddress;
                    bool m_orgAddressHasBeenSet;

                    /**
                     * Country/region name, for example China: CN. If not passing CompanyId or ManagerId, this field is required.
                     */
                    std::string m_orgCountry;
                    bool m_orgCountryHasBeenSet;

                    /**
                     * Located city. If not pass CompanyId or ManagerId, this field is required.
                     */
                    std::string m_orgCity;
                    bool m_orgCityHasBeenSet;

                    /**
                     * Province where the company is located. If not passing CompanyId or ManagerId, this field is required.
                     */
                    std::string m_orgRegion;
                    bool m_orgRegionHasBeenSet;

                    /**
                     * Area code of the company. If not passing CompanyId or ManagerId, this field is required.
For example: 021. Pass 86 as the mobile number.
                     */
                    std::string m_orgPhoneArea;
                    bool m_orgPhoneAreaHasBeenSet;

                    /**
                     * Company number. If CompanyId or ManagerId is not provided, this field is required.
                     */
                    std::string m_orgPhoneNumber;
                    bool m_orgPhoneNumberHasBeenSet;

                    /**
                     * Domain validation method of the certificate
DNS: Manually add domain DNS validation. The user needs to manually add the verification value at the DNS service provider.
FILE: Manual addition of domain name FILE verification. Users are advised to manually add a specified path FILE in the root directory of the domain site to perform FILE verification. Either http or https passing is sufficient. The domain site must be accessible by overseas certificate authorities. The specific access allowlist is: 64.78.193.238, 216.168.247.9, 216.168.249.9, 54.189.196.217.
                     */
                    std::string m_verifyType;
                    bool m_verifyTypeHasBeenSet;

                    /**
                     * Manage name. If not passing ManagerId, this field is required.
                     */
                    std::string m_adminFirstName;
                    bool m_adminFirstNameHasBeenSet;

                    /**
                     * Manager name. If not, this field is required when ManagerId is not passed.
                     */
                    std::string m_adminLastName;
                    bool m_adminLastNameHasBeenSet;

                    /**
                     * Manager mobile number. If not passing ManagerId, this field is required.
                     */
                    std::string m_adminPhone;
                    bool m_adminPhoneHasBeenSet;

                    /**
                     * Manager email address. If not passing ManagerId, this field is required.
                     */
                    std::string m_adminEmail;
                    bool m_adminEmailHasBeenSet;

                    /**
                     * Manager position. If not passing ManagerId, this field is required.
                     */
                    std::string m_adminTitle;
                    bool m_adminTitleHasBeenSet;

                    /**
                     * Contact name. If not passing ManagerId, this field is required.
                     */
                    std::string m_techFirstName;
                    bool m_techFirstNameHasBeenSet;

                    /**
                     * Last name of the contact. If not, this field is required when ManagerId is not passed.
                     */
                    std::string m_techLastName;
                    bool m_techLastNameHasBeenSet;

                    /**
                     * Contact email address. This field is required when CompanyType is 1.
                     */
                    std::string m_contactEmail;
                    bool m_contactEmailHasBeenSet;

                    /**
                     * Whether to enable auto-renewal: 0, not enabled; 1, enabled; defaults to 0.
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Key pair parameters. RSA supports 2048 and 4096. ECC is only supported for prime256v1. This parameter is required when the CSR generation method is online.

                     */
                    std::string m_csrKeyParameter;
                    bool m_csrKeyParameterHasBeenSet;

                    /**
                     * Encryption algorithm, value is ECC or RSA, defaults to RSA. This parameter is required when CSR generation method is online.
                     */
                    std::string m_csrEncryptAlgo;
                    bool m_csrEncryptAlgoHasBeenSet;

                    /**
                     * Manager ID can be viewed in the [Tencent Cloud Console](https://console.cloud.tencent.com/ssl/info). If no administrator information is found, pass 0 for this parameter. If administrator information exists that meets the current order, the manager ID can be selected based on [DescribeManagers](https://www.tencentcloud.com/document/product/400/52672?from_cn_redirect=1). If the manager ID is passed, parameters beginning with Org, Admin, or Tech can be omitted. The manager ID includes company information.

                     */
                    std::string m_managerId;
                    bool m_managerIdHasBeenSet;

                    /**
                     * Contact phone. If not passing ManagerId, this field is required.
                     */
                    std::string m_techPhone;
                    bool m_techPhoneHasBeenSet;

                    /**
                     * contact email
                     */
                    std::string m_techEmail;
                    bool m_techEmailHasBeenSet;

                    /**
                     * Contact person position. If not passing ManagerId, this field is required.
                     */
                    std::string m_techTitle;
                    bool m_techTitleHasBeenSet;

                    /**
                     * Certificate type
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Valid only for Dnspod series certs. ca organization kind can be sectigo and digicert.
                     */
                    std::string m_caType;
                    bool m_caTypeHasBeenSet;

                    /**
                     * signature algorithm
                     */
                    std::string m_signAlgo;
                    bool m_signAlgoHasBeenSet;

                    /**
                     * Whether to use intersect root certificate
                     */
                    bool m_useCrossSignRoot;
                    bool m_useCrossSignRootHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATEINFOSUBMITREQUEST_H_
