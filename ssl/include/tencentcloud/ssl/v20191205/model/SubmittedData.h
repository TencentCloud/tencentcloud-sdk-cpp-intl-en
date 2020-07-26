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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_SUBMITTEDDATA_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_SUBMITTEDDATA_H_

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
                * Content of the SubmittedData parameter returned by DescribeCertificates.
                */
                class SubmittedData : public AbstractModel
                {
                public:
                    SubmittedData();
                    ~SubmittedData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CSR type. Online: CSR generated online; parse: CSR pasted.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CsrType CSR type. Online: CSR generated online; parse: CSR pasted.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCsrType() const;

                    /**
                     * 设置CSR type. Online: CSR generated online; parse: CSR pasted.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CsrType CSR type. Online: CSR generated online; parse: CSR pasted.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCsrType(const std::string& _csrType);

                    /**
                     * 判断参数 CsrType 是否已赋值
                     * @return CsrType 是否已赋值
                     */
                    bool CsrTypeHasBeenSet() const;

                    /**
                     * 获取CSR content.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CsrContent CSR content.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCsrContent() const;

                    /**
                     * 设置CSR content.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CsrContent CSR content.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCsrContent(const std::string& _csrContent);

                    /**
                     * 判断参数 CsrContent 是否已赋值
                     * @return CsrContent 是否已赋值
                     */
                    bool CsrContentHasBeenSet() const;

                    /**
                     * 获取Domain name information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CertificateDomain Domain name information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCertificateDomain() const;

                    /**
                     * 设置Domain name information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CertificateDomain Domain name information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCertificateDomain(const std::string& _certificateDomain);

                    /**
                     * 判断参数 CertificateDomain 是否已赋值
                     * @return CertificateDomain 是否已赋值
                     */
                    bool CertificateDomainHasBeenSet() const;

                    /**
                     * 获取DNS information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DomainList DNS information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetDomainList() const;

                    /**
                     * 设置DNS information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param DomainList DNS information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDomainList(const std::vector<std::string>& _domainList);

                    /**
                     * 判断参数 DomainList 是否已赋值
                     * @return DomainList 是否已赋值
                     */
                    bool DomainListHasBeenSet() const;

                    /**
                     * 获取Password of the private key.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return KeyPassword Password of the private key.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetKeyPassword() const;

                    /**
                     * 设置Password of the private key.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param KeyPassword Password of the private key.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetKeyPassword(const std::string& _keyPassword);

                    /**
                     * 判断参数 KeyPassword 是否已赋值
                     * @return KeyPassword 是否已赋值
                     */
                    bool KeyPasswordHasBeenSet() const;

                    /**
                     * 获取Enterprise or unit name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OrganizationName Enterprise or unit name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置Enterprise or unit name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param OrganizationName Enterprise or unit name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     */
                    bool OrganizationNameHasBeenSet() const;

                    /**
                     * 获取Division.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OrganizationDivision Division.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetOrganizationDivision() const;

                    /**
                     * 设置Division.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param OrganizationDivision Division.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOrganizationDivision(const std::string& _organizationDivision);

                    /**
                     * 判断参数 OrganizationDivision 是否已赋值
                     * @return OrganizationDivision 是否已赋值
                     */
                    bool OrganizationDivisionHasBeenSet() const;

                    /**
                     * 获取Address.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OrganizationAddress Address.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetOrganizationAddress() const;

                    /**
                     * 设置Address.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param OrganizationAddress Address.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOrganizationAddress(const std::string& _organizationAddress);

                    /**
                     * 判断参数 OrganizationAddress 是否已赋值
                     * @return OrganizationAddress 是否已赋值
                     */
                    bool OrganizationAddressHasBeenSet() const;

                    /**
                     * 获取Country.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OrganizationCountry Country.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetOrganizationCountry() const;

                    /**
                     * 设置Country.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param OrganizationCountry Country.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOrganizationCountry(const std::string& _organizationCountry);

                    /**
                     * 判断参数 OrganizationCountry 是否已赋值
                     * @return OrganizationCountry 是否已赋值
                     */
                    bool OrganizationCountryHasBeenSet() const;

                    /**
                     * 获取City.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OrganizationCity City.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetOrganizationCity() const;

                    /**
                     * 设置City.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param OrganizationCity City.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOrganizationCity(const std::string& _organizationCity);

                    /**
                     * 判断参数 OrganizationCity 是否已赋值
                     * @return OrganizationCity 是否已赋值
                     */
                    bool OrganizationCityHasBeenSet() const;

                    /**
                     * 获取Province.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OrganizationRegion Province.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetOrganizationRegion() const;

                    /**
                     * 设置Province.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param OrganizationRegion Province.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOrganizationRegion(const std::string& _organizationRegion);

                    /**
                     * 判断参数 OrganizationRegion 是否已赋值
                     * @return OrganizationRegion 是否已赋值
                     */
                    bool OrganizationRegionHasBeenSet() const;

                    /**
                     * 获取Postal code.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PostalCode Postal code.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPostalCode() const;

                    /**
                     * 设置Postal code.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param PostalCode Postal code.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPostalCode(const std::string& _postalCode);

                    /**
                     * 判断参数 PostalCode 是否已赋值
                     * @return PostalCode 是否已赋值
                     */
                    bool PostalCodeHasBeenSet() const;

                    /**
                     * 获取Area code of the fixed-line phone number.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PhoneAreaCode Area code of the fixed-line phone number.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPhoneAreaCode() const;

                    /**
                     * 设置Area code of the fixed-line phone number.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param PhoneAreaCode Area code of the fixed-line phone number.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPhoneAreaCode(const std::string& _phoneAreaCode);

                    /**
                     * 判断参数 PhoneAreaCode 是否已赋值
                     * @return PhoneAreaCode 是否已赋值
                     */
                    bool PhoneAreaCodeHasBeenSet() const;

                    /**
                     * 获取Fixed-line phone number.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PhoneNumber Fixed-line phone number.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置Fixed-line phone number.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param PhoneNumber Fixed-line phone number.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     */
                    bool PhoneNumberHasBeenSet() const;

                    /**
                     * 获取First name of the admin.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AdminFirstName First name of the admin.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAdminFirstName() const;

                    /**
                     * 设置First name of the admin.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AdminFirstName First name of the admin.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAdminFirstName(const std::string& _adminFirstName);

                    /**
                     * 判断参数 AdminFirstName 是否已赋值
                     * @return AdminFirstName 是否已赋值
                     */
                    bool AdminFirstNameHasBeenSet() const;

                    /**
                     * 获取Last name of the admin.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AdminLastName Last name of the admin.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAdminLastName() const;

                    /**
                     * 设置Last name of the admin.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AdminLastName Last name of the admin.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAdminLastName(const std::string& _adminLastName);

                    /**
                     * 判断参数 AdminLastName 是否已赋值
                     * @return AdminLastName 是否已赋值
                     */
                    bool AdminLastNameHasBeenSet() const;

                    /**
                     * 获取Phone number of the admin.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AdminPhoneNum Phone number of the admin.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAdminPhoneNum() const;

                    /**
                     * 设置Phone number of the admin.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AdminPhoneNum Phone number of the admin.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAdminPhoneNum(const std::string& _adminPhoneNum);

                    /**
                     * 判断参数 AdminPhoneNum 是否已赋值
                     * @return AdminPhoneNum 是否已赋值
                     */
                    bool AdminPhoneNumHasBeenSet() const;

                    /**
                     * 获取Email of the admin.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AdminEmail Email of the admin.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAdminEmail() const;

                    /**
                     * 设置Email of the admin.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AdminEmail Email of the admin.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAdminEmail(const std::string& _adminEmail);

                    /**
                     * 判断参数 AdminEmail 是否已赋值
                     * @return AdminEmail 是否已赋值
                     */
                    bool AdminEmailHasBeenSet() const;

                    /**
                     * 获取Position of the admin.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AdminPosition Position of the admin.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAdminPosition() const;

                    /**
                     * 设置Position of the admin.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AdminPosition Position of the admin.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAdminPosition(const std::string& _adminPosition);

                    /**
                     * 判断参数 AdminPosition 是否已赋值
                     * @return AdminPosition 是否已赋值
                     */
                    bool AdminPositionHasBeenSet() const;

                    /**
                     * 获取First name of the contact.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ContactFirstName First name of the contact.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetContactFirstName() const;

                    /**
                     * 设置First name of the contact.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ContactFirstName First name of the contact.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetContactFirstName(const std::string& _contactFirstName);

                    /**
                     * 判断参数 ContactFirstName 是否已赋值
                     * @return ContactFirstName 是否已赋值
                     */
                    bool ContactFirstNameHasBeenSet() const;

                    /**
                     * 获取Last name of the contact.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ContactLastName Last name of the contact.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetContactLastName() const;

                    /**
                     * 设置Last name of the contact.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ContactLastName Last name of the contact.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetContactLastName(const std::string& _contactLastName);

                    /**
                     * 判断参数 ContactLastName 是否已赋值
                     * @return ContactLastName 是否已赋值
                     */
                    bool ContactLastNameHasBeenSet() const;

                    /**
                     * 获取Phone number of the contact.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ContactNumber Phone number of the contact.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetContactNumber() const;

                    /**
                     * 设置Phone number of the contact.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ContactNumber Phone number of the contact.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetContactNumber(const std::string& _contactNumber);

                    /**
                     * 判断参数 ContactNumber 是否已赋值
                     * @return ContactNumber 是否已赋值
                     */
                    bool ContactNumberHasBeenSet() const;

                    /**
                     * 获取Email of the contact.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ContactEmail Email of the contact.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetContactEmail() const;

                    /**
                     * 设置Email of the contact.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ContactEmail Email of the contact.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetContactEmail(const std::string& _contactEmail);

                    /**
                     * 判断参数 ContactEmail 是否已赋值
                     * @return ContactEmail 是否已赋值
                     */
                    bool ContactEmailHasBeenSet() const;

                    /**
                     * 获取Position of the contact.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ContactPosition Position of the contact.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetContactPosition() const;

                    /**
                     * 设置Position of the contact.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ContactPosition Position of the contact.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetContactPosition(const std::string& _contactPosition);

                    /**
                     * 判断参数 ContactPosition 是否已赋值
                     * @return ContactPosition 是否已赋值
                     */
                    bool ContactPositionHasBeenSet() const;

                    /**
                     * 获取Verification type.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VerifyType Verification type.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetVerifyType() const;

                    /**
                     * 设置Verification type.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param VerifyType Verification type.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVerifyType(const std::string& _verifyType);

                    /**
                     * 判断参数 VerifyType 是否已赋值
                     * @return VerifyType 是否已赋值
                     */
                    bool VerifyTypeHasBeenSet() const;

                private:

                    /**
                     * CSR type. Online: CSR generated online; parse: CSR pasted.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_csrType;
                    bool m_csrTypeHasBeenSet;

                    /**
                     * CSR content.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_csrContent;
                    bool m_csrContentHasBeenSet;

                    /**
                     * Domain name information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_certificateDomain;
                    bool m_certificateDomainHasBeenSet;

                    /**
                     * DNS information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_domainList;
                    bool m_domainListHasBeenSet;

                    /**
                     * Password of the private key.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_keyPassword;
                    bool m_keyPasswordHasBeenSet;

                    /**
                     * Enterprise or unit name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * Division.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_organizationDivision;
                    bool m_organizationDivisionHasBeenSet;

                    /**
                     * Address.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_organizationAddress;
                    bool m_organizationAddressHasBeenSet;

                    /**
                     * Country.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_organizationCountry;
                    bool m_organizationCountryHasBeenSet;

                    /**
                     * City.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_organizationCity;
                    bool m_organizationCityHasBeenSet;

                    /**
                     * Province.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_organizationRegion;
                    bool m_organizationRegionHasBeenSet;

                    /**
                     * Postal code.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_postalCode;
                    bool m_postalCodeHasBeenSet;

                    /**
                     * Area code of the fixed-line phone number.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_phoneAreaCode;
                    bool m_phoneAreaCodeHasBeenSet;

                    /**
                     * Fixed-line phone number.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * First name of the admin.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_adminFirstName;
                    bool m_adminFirstNameHasBeenSet;

                    /**
                     * Last name of the admin.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_adminLastName;
                    bool m_adminLastNameHasBeenSet;

                    /**
                     * Phone number of the admin.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_adminPhoneNum;
                    bool m_adminPhoneNumHasBeenSet;

                    /**
                     * Email of the admin.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_adminEmail;
                    bool m_adminEmailHasBeenSet;

                    /**
                     * Position of the admin.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_adminPosition;
                    bool m_adminPositionHasBeenSet;

                    /**
                     * First name of the contact.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_contactFirstName;
                    bool m_contactFirstNameHasBeenSet;

                    /**
                     * Last name of the contact.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_contactLastName;
                    bool m_contactLastNameHasBeenSet;

                    /**
                     * Phone number of the contact.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_contactNumber;
                    bool m_contactNumberHasBeenSet;

                    /**
                     * Email of the contact.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_contactEmail;
                    bool m_contactEmailHasBeenSet;

                    /**
                     * Position of the contact.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_contactPosition;
                    bool m_contactPositionHasBeenSet;

                    /**
                     * Verification type.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_verifyType;
                    bool m_verifyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_SUBMITTEDDATA_H_
