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
                     * 获取Certificate ID
                     * @return CertificateId Certificate ID
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置Certificate ID
                     * @param _certificateId Certificate ID
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
                     * 获取CSR generation mode. `online`: generated online; `parse`: uploaded manually
                     * @return CsrType CSR generation mode. `online`: generated online; `parse`: uploaded manually
                     * 
                     */
                    std::string GetCsrType() const;

                    /**
                     * 设置CSR generation mode. `online`: generated online; `parse`: uploaded manually
                     * @param _csrType CSR generation mode. `online`: generated online; `parse`: uploaded manually
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
                     * 获取Uploaded CSR content
                     * @return CsrContent Uploaded CSR content
                     * 
                     */
                    std::string GetCsrContent() const;

                    /**
                     * 设置Uploaded CSR content
                     * @param _csrContent Uploaded CSR content
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
                     * 获取Domain name bound with the certificate
                     * @return CertificateDomain Domain name bound with the certificate
                     * 
                     */
                    std::string GetCertificateDomain() const;

                    /**
                     * 设置Domain name bound with the certificate
                     * @param _certificateDomain Domain name bound with the certificate
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
                     * 获取Uploaded domain name array (can be uploaded for a multi-domain certificate)
                     * @return DomainList Uploaded domain name array (can be uploaded for a multi-domain certificate)
                     * 
                     */
                    std::vector<std::string> GetDomainList() const;

                    /**
                     * 设置Uploaded domain name array (can be uploaded for a multi-domain certificate)
                     * @param _domainList Uploaded domain name array (can be uploaded for a multi-domain certificate)
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
                     * 获取Password of the private key
                     * @return KeyPassword Password of the private key
                     * 
                     */
                    std::string GetKeyPassword() const;

                    /**
                     * 设置Password of the private key
                     * @param _keyPassword Password of the private key
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
                     * 获取Organization name
                     * @return OrganizationName Organization name
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置Organization name
                     * @param _organizationName Organization name
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
                     * 获取Division name
                     * @return OrganizationDivision Division name
                     * 
                     */
                    std::string GetOrganizationDivision() const;

                    /**
                     * 设置Division name
                     * @param _organizationDivision Division name
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
                     * 获取Detailed address of the organization
                     * @return OrganizationAddress Detailed address of the organization
                     * 
                     */
                    std::string GetOrganizationAddress() const;

                    /**
                     * 设置Detailed address of the organization
                     * @param _organizationAddress Detailed address of the organization
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
                     * 获取Country where the organization is located, for example, CN (China)
                     * @return OrganizationCountry Country where the organization is located, for example, CN (China)
                     * 
                     */
                    std::string GetOrganizationCountry() const;

                    /**
                     * 设置Country where the organization is located, for example, CN (China)
                     * @param _organizationCountry Country where the organization is located, for example, CN (China)
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
                     * 获取City where the organization is located
                     * @return OrganizationCity City where the organization is located
                     * 
                     */
                    std::string GetOrganizationCity() const;

                    /**
                     * 设置City where the organization is located
                     * @param _organizationCity City where the organization is located
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
                     * 获取Province where the organization is located
                     * @return OrganizationRegion Province where the organization is located
                     * 
                     */
                    std::string GetOrganizationRegion() const;

                    /**
                     * 设置Province where the organization is located
                     * @param _organizationRegion Province where the organization is located
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
                     * 获取Area code of the fixed-line phone number of the organization
                     * @return PhoneAreaCode Area code of the fixed-line phone number of the organization
                     * 
                     */
                    std::string GetPhoneAreaCode() const;

                    /**
                     * 设置Area code of the fixed-line phone number of the organization
                     * @param _phoneAreaCode Area code of the fixed-line phone number of the organization
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
                     * 获取Fixed-line phone number of the organization
                     * @return PhoneNumber Fixed-line phone number of the organization
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置Fixed-line phone number of the organization
                     * @param _phoneNumber Fixed-line phone number of the organization
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
                     * 获取Certificate validation method
                     * @return VerifyType Certificate validation method
                     * 
                     */
                    std::string GetVerifyType() const;

                    /**
                     * 设置Certificate validation method
                     * @param _verifyType Certificate validation method
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
                     * 获取Last name of the administrator
                     * @return AdminFirstName Last name of the administrator
                     * 
                     */
                    std::string GetAdminFirstName() const;

                    /**
                     * 设置Last name of the administrator
                     * @param _adminFirstName Last name of the administrator
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
                     * 获取First name of the administrator
                     * @return AdminLastName First name of the administrator
                     * 
                     */
                    std::string GetAdminLastName() const;

                    /**
                     * 设置First name of the administrator
                     * @param _adminLastName First name of the administrator
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
                     * 获取Mobile number of the administrator
                     * @return AdminPhoneNum Mobile number of the administrator
                     * 
                     */
                    std::string GetAdminPhoneNum() const;

                    /**
                     * 设置Mobile number of the administrator
                     * @param _adminPhoneNum Mobile number of the administrator
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
                     * 获取Email of the administrator
                     * @return AdminEmail Email of the administrator
                     * 
                     */
                    std::string GetAdminEmail() const;

                    /**
                     * 设置Email of the administrator
                     * @param _adminEmail Email of the administrator
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
                     * 获取Position of the administrator
                     * @return AdminPosition Position of the administrator
                     * 
                     */
                    std::string GetAdminPosition() const;

                    /**
                     * 设置Position of the administrator
                     * @param _adminPosition Position of the administrator
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
                     * 获取Last name of the contact
                     * @return ContactFirstName Last name of the contact
                     * 
                     */
                    std::string GetContactFirstName() const;

                    /**
                     * 设置Last name of the contact
                     * @param _contactFirstName Last name of the contact
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
                     * 获取First name of the contact
                     * @return ContactLastName First name of the contact
                     * 
                     */
                    std::string GetContactLastName() const;

                    /**
                     * 设置First name of the contact
                     * @param _contactLastName First name of the contact
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
                     * 获取Email of the contact
                     * @return ContactEmail Email of the contact
                     * 
                     */
                    std::string GetContactEmail() const;

                    /**
                     * 设置Email of the contact
                     * @param _contactEmail Email of the contact
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
                     * 获取Mobile number of the contact
                     * @return ContactNumber Mobile number of the contact
                     * 
                     */
                    std::string GetContactNumber() const;

                    /**
                     * 设置Mobile number of the contact
                     * @param _contactNumber Mobile number of the contact
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
                     * 获取Position of the contact
                     * @return ContactPosition Position of the contact
                     * 
                     */
                    std::string GetContactPosition() const;

                    /**
                     * 设置Position of the contact
                     * @param _contactPosition Position of the contact
                     * 
                     */
                    void SetContactPosition(const std::string& _contactPosition);

                    /**
                     * 判断参数 ContactPosition 是否已赋值
                     * @return ContactPosition 是否已赋值
                     * 
                     */
                    bool ContactPositionHasBeenSet() const;

                private:

                    /**
                     * Certificate ID
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * CSR generation mode. `online`: generated online; `parse`: uploaded manually
                     */
                    std::string m_csrType;
                    bool m_csrTypeHasBeenSet;

                    /**
                     * Uploaded CSR content
                     */
                    std::string m_csrContent;
                    bool m_csrContentHasBeenSet;

                    /**
                     * Domain name bound with the certificate
                     */
                    std::string m_certificateDomain;
                    bool m_certificateDomainHasBeenSet;

                    /**
                     * Uploaded domain name array (can be uploaded for a multi-domain certificate)
                     */
                    std::vector<std::string> m_domainList;
                    bool m_domainListHasBeenSet;

                    /**
                     * Password of the private key
                     */
                    std::string m_keyPassword;
                    bool m_keyPasswordHasBeenSet;

                    /**
                     * Organization name
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * Division name
                     */
                    std::string m_organizationDivision;
                    bool m_organizationDivisionHasBeenSet;

                    /**
                     * Detailed address of the organization
                     */
                    std::string m_organizationAddress;
                    bool m_organizationAddressHasBeenSet;

                    /**
                     * Country where the organization is located, for example, CN (China)
                     */
                    std::string m_organizationCountry;
                    bool m_organizationCountryHasBeenSet;

                    /**
                     * City where the organization is located
                     */
                    std::string m_organizationCity;
                    bool m_organizationCityHasBeenSet;

                    /**
                     * Province where the organization is located
                     */
                    std::string m_organizationRegion;
                    bool m_organizationRegionHasBeenSet;

                    /**
                     * Postal code of the organization
                     */
                    std::string m_postalCode;
                    bool m_postalCodeHasBeenSet;

                    /**
                     * Area code of the fixed-line phone number of the organization
                     */
                    std::string m_phoneAreaCode;
                    bool m_phoneAreaCodeHasBeenSet;

                    /**
                     * Fixed-line phone number of the organization
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * Certificate validation method
                     */
                    std::string m_verifyType;
                    bool m_verifyTypeHasBeenSet;

                    /**
                     * Last name of the administrator
                     */
                    std::string m_adminFirstName;
                    bool m_adminFirstNameHasBeenSet;

                    /**
                     * First name of the administrator
                     */
                    std::string m_adminLastName;
                    bool m_adminLastNameHasBeenSet;

                    /**
                     * Mobile number of the administrator
                     */
                    std::string m_adminPhoneNum;
                    bool m_adminPhoneNumHasBeenSet;

                    /**
                     * Email of the administrator
                     */
                    std::string m_adminEmail;
                    bool m_adminEmailHasBeenSet;

                    /**
                     * Position of the administrator
                     */
                    std::string m_adminPosition;
                    bool m_adminPositionHasBeenSet;

                    /**
                     * Last name of the contact
                     */
                    std::string m_contactFirstName;
                    bool m_contactFirstNameHasBeenSet;

                    /**
                     * First name of the contact
                     */
                    std::string m_contactLastName;
                    bool m_contactLastNameHasBeenSet;

                    /**
                     * Email of the contact
                     */
                    std::string m_contactEmail;
                    bool m_contactEmailHasBeenSet;

                    /**
                     * Mobile number of the contact
                     */
                    std::string m_contactNumber;
                    bool m_contactNumberHasBeenSet;

                    /**
                     * Position of the contact
                     */
                    std::string m_contactPosition;
                    bool m_contactPositionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_SUBMITCERTIFICATEINFORMATIONREQUEST_H_
