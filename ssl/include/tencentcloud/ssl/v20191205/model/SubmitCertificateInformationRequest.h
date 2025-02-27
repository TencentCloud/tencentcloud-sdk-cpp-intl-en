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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_SUBMITCERTIFICATEINFORMATIONREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_SUBMITCERTIFICATEINFORMATIONREQUEST_H_

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
                * SubmitCertificateInformation request structure.
                */
                class SubmitCertificateInformationRequest : public AbstractModel
                {
                public:
                    SubmitCertificateInformationRequest();
                    ~SubmitCertificateInformationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Paid certificate id of materials to be submitted.
                     * @return CertificateId Paid certificate id of materials to be submitted.
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置Paid certificate id of materials to be submitted.
                     * @param _certificateId Paid certificate id of materials to be submitted.
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
                     * 获取This field is required. Generation method of CSR, valid values are:
online: tencent cloud generates the CSR and private key based on the submitted parameter information and stores them encryptedly.
parse: generate the CSR and private key by itself, and apply for a certificate by uploading the CSR.
                     * @return CsrType This field is required. Generation method of CSR, valid values are:
online: tencent cloud generates the CSR and private key based on the submitted parameter information and stores them encryptedly.
parse: generate the CSR and private key by itself, and apply for a certificate by uploading the CSR.
                     * 
                     */
                    std::string GetCsrType() const;

                    /**
                     * 设置This field is required. Generation method of CSR, valid values are:
online: tencent cloud generates the CSR and private key based on the submitted parameter information and stores them encryptedly.
parse: generate the CSR and private key by itself, and apply for a certificate by uploading the CSR.
                     * @param _csrType This field is required. Generation method of CSR, valid values are:
online: tencent cloud generates the CSR and private key based on the submitted parameter information and stores them encryptedly.
parse: generate the CSR and private key by itself, and apply for a certificate by uploading the CSR.
                     * 
                     */
                    void SetCsrType(const std::string& _csrType);

                    /**
                     * 判断参数 CsrType 是否已赋值
                     * @return CsrType 是否已赋值
                     * 
                     */
                    bool CsrTypeHasBeenSet() const;

                    /**
                     * 获取The content of the uploaded csr.
If CsrType is parse, this field is required.
                     * @return CsrContent The content of the uploaded csr.
If CsrType is parse, this field is required.
                     * 
                     */
                    std::string GetCsrContent() const;

                    /**
                     * 设置The content of the uploaded csr.
If CsrType is parse, this field is required.
                     * @param _csrContent The content of the uploaded csr.
If CsrType is parse, this field is required.
                     * 
                     */
                    void SetCsrContent(const std::string& _csrContent);

                    /**
                     * 判断参数 CsrContent 是否已赋值
                     * @return CsrContent 是否已赋值
                     * 
                     */
                    bool CsrContentHasBeenSet() const;

                    /**
                     * 获取The common name bound to the certificate. if a CSR is uploaded, the domain name must be consistent with the common name resolved from the CSR.
                     * @return CertificateDomain The common name bound to the certificate. if a CSR is uploaded, the domain name must be consistent with the common name resolved from the CSR.
                     * 
                     */
                    std::string GetCertificateDomain() const;

                    /**
                     * 设置The common name bound to the certificate. if a CSR is uploaded, the domain name must be consistent with the common name resolved from the CSR.
                     * @param _certificateDomain The common name bound to the certificate. if a CSR is uploaded, the domain name must be consistent with the common name resolved from the CSR.
                     * 
                     */
                    void SetCertificateDomain(const std::string& _certificateDomain);

                    /**
                     * 判断参数 CertificateDomain 是否已赋值
                     * @return CertificateDomain 是否已赋值
                     * 
                     */
                    bool CertificateDomainHasBeenSet() const;

                    /**
                     * 获取Other domain names bound to the certificate. not required for single domain and wildcard domain certificates. required for multiple domain names and multiple wildcard domain names.
                     * @return DomainList Other domain names bound to the certificate. not required for single domain and wildcard domain certificates. required for multiple domain names and multiple wildcard domain names.
                     * 
                     */
                    std::vector<std::string> GetDomainList() const;

                    /**
                     * 设置Other domain names bound to the certificate. not required for single domain and wildcard domain certificates. required for multiple domain names and multiple wildcard domain names.
                     * @param _domainList Other domain names bound to the certificate. not required for single domain and wildcard domain certificates. required for multiple domain names and multiple wildcard domain names.
                     * 
                     */
                    void SetDomainList(const std::vector<std::string>& _domainList);

                    /**
                     * 判断参数 DomainList 是否已赋值
                     * @return DomainList 是否已赋值
                     * 
                     */
                    bool DomainListHasBeenSet() const;

                    /**
                     * 获取Private key password, which is currently only used for the password when generating jks and pfx format certificates; other formats of private key certificates are not encrypted.	
                     * @return KeyPassword Private key password, which is currently only used for the password when generating jks and pfx format certificates; other formats of private key certificates are not encrypted.	
                     * 
                     */
                    std::string GetKeyPassword() const;

                    /**
                     * 设置Private key password, which is currently only used for the password when generating jks and pfx format certificates; other formats of private key certificates are not encrypted.	
                     * @param _keyPassword Private key password, which is currently only used for the password when generating jks and pfx format certificates; other formats of private key certificates are not encrypted.	
                     * 
                     */
                    void SetKeyPassword(const std::string& _keyPassword);

                    /**
                     * 判断参数 KeyPassword 是否已赋值
                     * @return KeyPassword 是否已赋值
                     * 
                     */
                    bool KeyPasswordHasBeenSet() const;

                    /**
                     * 获取This field is required. Company name.
                     * @return OrganizationName This field is required. Company name.
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置This field is required. Company name.
                     * @param _organizationName This field is required. Company name.
                     * 
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     * 
                     */
                    bool OrganizationNameHasBeenSet() const;

                    /**
                     * 获取This field is required.  Department name.
                     * @return OrganizationDivision This field is required.  Department name.
                     * 
                     */
                    std::string GetOrganizationDivision() const;

                    /**
                     * 设置This field is required.  Department name.
                     * @param _organizationDivision This field is required.  Department name.
                     * 
                     */
                    void SetOrganizationDivision(const std::string& _organizationDivision);

                    /**
                     * 判断参数 OrganizationDivision 是否已赋值
                     * @return OrganizationDivision 是否已赋值
                     * 
                     */
                    bool OrganizationDivisionHasBeenSet() const;

                    /**
                     * 获取This field is required. Company's detailed address.
                     * @return OrganizationAddress This field is required. Company's detailed address.
                     * 
                     */
                    std::string GetOrganizationAddress() const;

                    /**
                     * 设置This field is required. Company's detailed address.
                     * @param _organizationAddress This field is required. Company's detailed address.
                     * 
                     */
                    void SetOrganizationAddress(const std::string& _organizationAddress);

                    /**
                     * 判断参数 OrganizationAddress 是否已赋值
                     * @return OrganizationAddress 是否已赋值
                     * 
                     */
                    bool OrganizationAddressHasBeenSet() const;

                    /**
                     * 获取This field is required.Country name such as CN.
                     * @return OrganizationCountry This field is required.Country name such as CN.
                     * 
                     */
                    std::string GetOrganizationCountry() const;

                    /**
                     * 设置This field is required.Country name such as CN.
                     * @param _organizationCountry This field is required.Country name such as CN.
                     * 
                     */
                    void SetOrganizationCountry(const std::string& _organizationCountry);

                    /**
                     * 判断参数 OrganizationCountry 是否已赋值
                     * @return OrganizationCountry 是否已赋值
                     * 
                     */
                    bool OrganizationCountryHasBeenSet() const;

                    /**
                     * 获取This field is required, which specifies the city where the company is located.
                     * @return OrganizationCity This field is required, which specifies the city where the company is located.
                     * 
                     */
                    std::string GetOrganizationCity() const;

                    /**
                     * 设置This field is required, which specifies the city where the company is located.
                     * @param _organizationCity This field is required, which specifies the city where the company is located.
                     * 
                     */
                    void SetOrganizationCity(const std::string& _organizationCity);

                    /**
                     * 判断参数 OrganizationCity 是否已赋值
                     * @return OrganizationCity 是否已赋值
                     * 
                     */
                    bool OrganizationCityHasBeenSet() const;

                    /**
                     * 获取This field is required, specifying the province where the company is located.
                     * @return OrganizationRegion This field is required, specifying the province where the company is located.
                     * 
                     */
                    std::string GetOrganizationRegion() const;

                    /**
                     * 设置This field is required, specifying the province where the company is located.
                     * @param _organizationRegion This field is required, specifying the province where the company is located.
                     * 
                     */
                    void SetOrganizationRegion(const std::string& _organizationRegion);

                    /**
                     * 判断参数 OrganizationRegion 是否已赋值
                     * @return OrganizationRegion 是否已赋值
                     * 
                     */
                    bool OrganizationRegionHasBeenSet() const;

                    /**
                     * 获取Postal code of the organization
                     * @return PostalCode Postal code of the organization
                     * 
                     */
                    std::string GetPostalCode() const;

                    /**
                     * 设置Postal code of the organization
                     * @param _postalCode Postal code of the organization
                     * 
                     */
                    void SetPostalCode(const std::string& _postalCode);

                    /**
                     * 判断参数 PostalCode 是否已赋值
                     * @return PostalCode 是否已赋值
                     * 
                     */
                    bool PostalCodeHasBeenSet() const;

                    /**
                     * 获取This field is required, the company's fixed-line phone area code.
                     * @return PhoneAreaCode This field is required, the company's fixed-line phone area code.
                     * 
                     */
                    std::string GetPhoneAreaCode() const;

                    /**
                     * 设置This field is required, the company's fixed-line phone area code.
                     * @param _phoneAreaCode This field is required, the company's fixed-line phone area code.
                     * 
                     */
                    void SetPhoneAreaCode(const std::string& _phoneAreaCode);

                    /**
                     * 判断参数 PhoneAreaCode 是否已赋值
                     * @return PhoneAreaCode 是否已赋值
                     * 
                     */
                    bool PhoneAreaCodeHasBeenSet() const;

                    /**
                     * 获取This field is required, the company's landline number.
                     * @return PhoneNumber This field is required, the company's landline number.
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置This field is required, the company's landline number.
                     * @param _phoneNumber This field is required, the company's landline number.
                     * 
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     * 
                     */
                    bool PhoneNumberHasBeenSet() const;

                    /**
                     * 获取Certificate validation method. Validation types: DNS_AUTO = Automatic DNS validation (only supported for domains resolved by Tencent Cloud DNS with a normal resolution status), DNS = Manual DNS validation, FILE = File validation.
                     * @return VerifyType Certificate validation method. Validation types: DNS_AUTO = Automatic DNS validation (only supported for domains resolved by Tencent Cloud DNS with a normal resolution status), DNS = Manual DNS validation, FILE = File validation.
                     * 
                     */
                    std::string GetVerifyType() const;

                    /**
                     * 设置Certificate validation method. Validation types: DNS_AUTO = Automatic DNS validation (only supported for domains resolved by Tencent Cloud DNS with a normal resolution status), DNS = Manual DNS validation, FILE = File validation.
                     * @param _verifyType Certificate validation method. Validation types: DNS_AUTO = Automatic DNS validation (only supported for domains resolved by Tencent Cloud DNS with a normal resolution status), DNS = Manual DNS validation, FILE = File validation.
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
                     * 获取This field is required, manager name.
                     * @return AdminFirstName This field is required, manager name.
                     * 
                     */
                    std::string GetAdminFirstName() const;

                    /**
                     * 设置This field is required, manager name.
                     * @param _adminFirstName This field is required, manager name.
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
                     * 获取This field is required, the manager's surname.
                     * @return AdminLastName This field is required, the manager's surname.
                     * 
                     */
                    std::string GetAdminLastName() const;

                    /**
                     * 设置This field is required, the manager's surname.
                     * @param _adminLastName This field is required, the manager's surname.
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
                     * 获取This field is required, the manager's mobile phone number.
                     * @return AdminPhoneNum This field is required, the manager's mobile phone number.
                     * 
                     */
                    std::string GetAdminPhoneNum() const;

                    /**
                     * 设置This field is required, the manager's mobile phone number.
                     * @param _adminPhoneNum This field is required, the manager's mobile phone number.
                     * 
                     */
                    void SetAdminPhoneNum(const std::string& _adminPhoneNum);

                    /**
                     * 判断参数 AdminPhoneNum 是否已赋值
                     * @return AdminPhoneNum 是否已赋值
                     * 
                     */
                    bool AdminPhoneNumHasBeenSet() const;

                    /**
                     * 获取This field is required, the manager's email address.
                     * @return AdminEmail This field is required, the manager's email address.
                     * 
                     */
                    std::string GetAdminEmail() const;

                    /**
                     * 设置This field is required, the manager's email address.
                     * @param _adminEmail This field is required, the manager's email address.
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
                     * 获取This field is required, the manager position.
                     * @return AdminPosition This field is required, the manager position.
                     * 
                     */
                    std::string GetAdminPosition() const;

                    /**
                     * 设置This field is required, the manager position.
                     * @param _adminPosition This field is required, the manager position.
                     * 
                     */
                    void SetAdminPosition(const std::string& _adminPosition);

                    /**
                     * 判断参数 AdminPosition 是否已赋值
                     * @return AdminPosition 是否已赋值
                     * 
                     */
                    bool AdminPositionHasBeenSet() const;

                    /**
                     * 获取This field is required, the contact person name.
                     * @return ContactFirstName This field is required, the contact person name.
                     * 
                     */
                    std::string GetContactFirstName() const;

                    /**
                     * 设置This field is required, the contact person name.
                     * @param _contactFirstName This field is required, the contact person name.
                     * 
                     */
                    void SetContactFirstName(const std::string& _contactFirstName);

                    /**
                     * 判断参数 ContactFirstName 是否已赋值
                     * @return ContactFirstName 是否已赋值
                     * 
                     */
                    bool ContactFirstNameHasBeenSet() const;

                    /**
                     * 获取This field is required, the contact person's surname.
                     * @return ContactLastName This field is required, the contact person's surname.
                     * 
                     */
                    std::string GetContactLastName() const;

                    /**
                     * 设置This field is required, the contact person's surname.
                     * @param _contactLastName This field is required, the contact person's surname.
                     * 
                     */
                    void SetContactLastName(const std::string& _contactLastName);

                    /**
                     * 判断参数 ContactLastName 是否已赋值
                     * @return ContactLastName 是否已赋值
                     * 
                     */
                    bool ContactLastNameHasBeenSet() const;

                    /**
                     * 获取This field is required, the contact person's email address.
                     * @return ContactEmail This field is required, the contact person's email address.
                     * 
                     */
                    std::string GetContactEmail() const;

                    /**
                     * 设置This field is required, the contact person's email address.
                     * @param _contactEmail This field is required, the contact person's email address.
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
                     * 获取This field is required, the contact person's mobile phone number.
                     * @return ContactNumber This field is required, the contact person's mobile phone number.
                     * 
                     */
                    std::string GetContactNumber() const;

                    /**
                     * 设置This field is required, the contact person's mobile phone number.
                     * @param _contactNumber This field is required, the contact person's mobile phone number.
                     * 
                     */
                    void SetContactNumber(const std::string& _contactNumber);

                    /**
                     * 判断参数 ContactNumber 是否已赋值
                     * @return ContactNumber 是否已赋值
                     * 
                     */
                    bool ContactNumberHasBeenSet() const;

                    /**
                     * 获取This field is required, the contact person position.
                     * @return ContactPosition This field is required, the contact person position.
                     * 
                     */
                    std::string GetContactPosition() const;

                    /**
                     * 设置This field is required, the contact person position.
                     * @param _contactPosition This field is required, the contact person position.
                     * 
                     */
                    void SetContactPosition(const std::string& _contactPosition);

                    /**
                     * 判断参数 ContactPosition 是否已赋值
                     * @return ContactPosition 是否已赋值
                     * 
                     */
                    bool ContactPositionHasBeenSet() const;

                    /**
                     * 获取Indicates whether it is a dv certificate. default value is false.
                     * @return IsDV Indicates whether it is a dv certificate. default value is false.
                     * 
                     */
                    bool GetIsDV() const;

                    /**
                     * 设置Indicates whether it is a dv certificate. default value is false.
                     * @param _isDV Indicates whether it is a dv certificate. default value is false.
                     * 
                     */
                    void SetIsDV(const bool& _isDV);

                    /**
                     * 判断参数 IsDV 是否已赋值
                     * @return IsDV 是否已赋值
                     * 
                     */
                    bool IsDVHasBeenSet() const;

                private:

                    /**
                     * Paid certificate id of materials to be submitted.
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * This field is required. Generation method of CSR, valid values are:
online: tencent cloud generates the CSR and private key based on the submitted parameter information and stores them encryptedly.
parse: generate the CSR and private key by itself, and apply for a certificate by uploading the CSR.
                     */
                    std::string m_csrType;
                    bool m_csrTypeHasBeenSet;

                    /**
                     * The content of the uploaded csr.
If CsrType is parse, this field is required.
                     */
                    std::string m_csrContent;
                    bool m_csrContentHasBeenSet;

                    /**
                     * The common name bound to the certificate. if a CSR is uploaded, the domain name must be consistent with the common name resolved from the CSR.
                     */
                    std::string m_certificateDomain;
                    bool m_certificateDomainHasBeenSet;

                    /**
                     * Other domain names bound to the certificate. not required for single domain and wildcard domain certificates. required for multiple domain names and multiple wildcard domain names.
                     */
                    std::vector<std::string> m_domainList;
                    bool m_domainListHasBeenSet;

                    /**
                     * Private key password, which is currently only used for the password when generating jks and pfx format certificates; other formats of private key certificates are not encrypted.	
                     */
                    std::string m_keyPassword;
                    bool m_keyPasswordHasBeenSet;

                    /**
                     * This field is required. Company name.
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * This field is required.  Department name.
                     */
                    std::string m_organizationDivision;
                    bool m_organizationDivisionHasBeenSet;

                    /**
                     * This field is required. Company's detailed address.
                     */
                    std::string m_organizationAddress;
                    bool m_organizationAddressHasBeenSet;

                    /**
                     * This field is required.Country name such as CN.
                     */
                    std::string m_organizationCountry;
                    bool m_organizationCountryHasBeenSet;

                    /**
                     * This field is required, which specifies the city where the company is located.
                     */
                    std::string m_organizationCity;
                    bool m_organizationCityHasBeenSet;

                    /**
                     * This field is required, specifying the province where the company is located.
                     */
                    std::string m_organizationRegion;
                    bool m_organizationRegionHasBeenSet;

                    /**
                     * Postal code of the organization
                     */
                    std::string m_postalCode;
                    bool m_postalCodeHasBeenSet;

                    /**
                     * This field is required, the company's fixed-line phone area code.
                     */
                    std::string m_phoneAreaCode;
                    bool m_phoneAreaCodeHasBeenSet;

                    /**
                     * This field is required, the company's landline number.
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * Certificate validation method. Validation types: DNS_AUTO = Automatic DNS validation (only supported for domains resolved by Tencent Cloud DNS with a normal resolution status), DNS = Manual DNS validation, FILE = File validation.
                     */
                    std::string m_verifyType;
                    bool m_verifyTypeHasBeenSet;

                    /**
                     * This field is required, manager name.
                     */
                    std::string m_adminFirstName;
                    bool m_adminFirstNameHasBeenSet;

                    /**
                     * This field is required, the manager's surname.
                     */
                    std::string m_adminLastName;
                    bool m_adminLastNameHasBeenSet;

                    /**
                     * This field is required, the manager's mobile phone number.
                     */
                    std::string m_adminPhoneNum;
                    bool m_adminPhoneNumHasBeenSet;

                    /**
                     * This field is required, the manager's email address.
                     */
                    std::string m_adminEmail;
                    bool m_adminEmailHasBeenSet;

                    /**
                     * This field is required, the manager position.
                     */
                    std::string m_adminPosition;
                    bool m_adminPositionHasBeenSet;

                    /**
                     * This field is required, the contact person name.
                     */
                    std::string m_contactFirstName;
                    bool m_contactFirstNameHasBeenSet;

                    /**
                     * This field is required, the contact person's surname.
                     */
                    std::string m_contactLastName;
                    bool m_contactLastNameHasBeenSet;

                    /**
                     * This field is required, the contact person's email address.
                     */
                    std::string m_contactEmail;
                    bool m_contactEmailHasBeenSet;

                    /**
                     * This field is required, the contact person's mobile phone number.
                     */
                    std::string m_contactNumber;
                    bool m_contactNumberHasBeenSet;

                    /**
                     * This field is required, the contact person position.
                     */
                    std::string m_contactPosition;
                    bool m_contactPositionHasBeenSet;

                    /**
                     * Indicates whether it is a dv certificate. default value is false.
                     */
                    bool m_isDV;
                    bool m_isDVHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_SUBMITCERTIFICATEINFORMATIONREQUEST_H_
