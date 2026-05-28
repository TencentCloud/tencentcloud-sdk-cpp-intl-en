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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_GENERALCARD_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_GENERALCARD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/AddressInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * General card certificate information.
                */
                class GeneralCard : public AbstractModel
                {
                public:
                    GeneralCard();
                    ~GeneralCard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LicenseNumber ID number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLicenseNumber() const;

                    /**
                     * 设置ID number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _licenseNumber ID number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLicenseNumber(const std::string& _licenseNumber);

                    /**
                     * 判断参数 LicenseNumber 是否已赋值
                     * @return LicenseNumber 是否已赋值
                     * 
                     */
                    bool LicenseNumberHasBeenSet() const;

                    /**
                     * 获取Personal number. returned when the identity document type is passport.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PersonalNumber Personal number. returned when the identity document type is passport.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPersonalNumber() const;

                    /**
                     * 设置Personal number. returned when the identity document type is passport.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _personalNumber Personal number. returned when the identity document type is passport.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPersonalNumber(const std::string& _personalNumber);

                    /**
                     * 判断参数 PersonalNumber 是否已赋值
                     * @return PersonalNumber 是否已赋值
                     * 
                     */
                    bool PersonalNumberHasBeenSet() const;

                    /**
                     * 获取Passport mrz line 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PassportCodeFirst Passport mrz line 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPassportCodeFirst() const;

                    /**
                     * 设置Passport mrz line 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _passportCodeFirst Passport mrz line 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPassportCodeFirst(const std::string& _passportCodeFirst);

                    /**
                     * 判断参数 PassportCodeFirst 是否已赋值
                     * @return PassportCodeFirst 是否已赋值
                     * 
                     */
                    bool PassportCodeFirstHasBeenSet() const;

                    /**
                     * 获取Passport mrz line 2.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PassportCodeSecond Passport mrz line 2.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPassportCodeSecond() const;

                    /**
                     * 设置Passport mrz line 2.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _passportCodeSecond Passport mrz line 2.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPassportCodeSecond(const std::string& _passportCodeSecond);

                    /**
                     * 判断参数 PassportCodeSecond 是否已赋值
                     * @return PassportCodeSecond 是否已赋值
                     * 
                     */
                    bool PassportCodeSecondHasBeenSet() const;

                    /**
                     * 获取Expiration date, in YYYY-MM-DD format.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpirationDate Expiration date, in YYYY-MM-DD format.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpirationDate() const;

                    /**
                     * 设置Expiration date, in YYYY-MM-DD format.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expirationDate Expiration date, in YYYY-MM-DD format.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpirationDate(const std::string& _expirationDate);

                    /**
                     * 判断参数 ExpirationDate 是否已赋值
                     * @return ExpirationDate 是否已赋值
                     * 
                     */
                    bool ExpirationDateHasBeenSet() const;

                    /**
                     * 获取Expiration date in YYYY-MM-DD format.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DueDate Expiration date in YYYY-MM-DD format.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDueDate() const;

                    /**
                     * 设置Expiration date in YYYY-MM-DD format.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dueDate Expiration date in YYYY-MM-DD format.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDueDate(const std::string& _dueDate);

                    /**
                     * 判断参数 DueDate 是否已赋值
                     * @return DueDate 是否已赋值
                     * 
                     */
                    bool DueDateHasBeenSet() const;

                    /**
                     * 获取Issue date, in YYYY-MM-DD format.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IssuedDate Issue date, in YYYY-MM-DD format.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIssuedDate() const;

                    /**
                     * 设置Issue date, in YYYY-MM-DD format.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _issuedDate Issue date, in YYYY-MM-DD format.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIssuedDate(const std::string& _issuedDate);

                    /**
                     * 判断参数 IssuedDate 是否已赋值
                     * @return IssuedDate 是否已赋值
                     * 
                     */
                    bool IssuedDateHasBeenSet() const;

                    /**
                     * 获取Issuing authority.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IssuedAuthority Issuing authority.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIssuedAuthority() const;

                    /**
                     * 设置Issuing authority.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _issuedAuthority Issuing authority.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIssuedAuthority(const std::string& _issuedAuthority);

                    /**
                     * 判断参数 IssuedAuthority 是否已赋值
                     * @return IssuedAuthority 是否已赋值
                     * 
                     */
                    bool IssuedAuthorityHasBeenSet() const;

                    /**
                     * 获取Issuing country, following the ISO 3166 country coding specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IssuedCountry Issuing country, following the ISO 3166 country coding specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIssuedCountry() const;

                    /**
                     * 设置Issuing country, following the ISO 3166 country coding specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _issuedCountry Issuing country, following the ISO 3166 country coding specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIssuedCountry(const std::string& _issuedCountry);

                    /**
                     * 判断参数 IssuedCountry 是否已赋值
                     * @return IssuedCountry 是否已赋值
                     * 
                     */
                    bool IssuedCountryHasBeenSet() const;

                    /**
                     * 获取Specifies the name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FullName Specifies the name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFullName() const;

                    /**
                     * 设置Specifies the name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fullName Specifies the name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFullName(const std::string& _fullName);

                    /**
                     * 判断参数 FullName 是否已赋值
                     * @return FullName 是否已赋值
                     * 
                     */
                    bool FullNameHasBeenSet() const;

                    /**
                     * 获取Name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FirstName Name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFirstName() const;

                    /**
                     * 设置Name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _firstName Name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFirstName(const std::string& _firstName);

                    /**
                     * 判断参数 FirstName 是否已赋值
                     * @return FirstName 是否已赋值
                     * 
                     */
                    bool FirstNameHasBeenSet() const;

                    /**
                     * 获取Name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastName Name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastName() const;

                    /**
                     * 设置Name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastName Name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastName(const std::string& _lastName);

                    /**
                     * 判断参数 LastName 是否已赋值
                     * @return LastName 是否已赋值
                     * 
                     */
                    bool LastNameHasBeenSet() const;

                    /**
                     * 获取Gender on the document.
-M: man.
-F: woman.
-X: other gender identity.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Sex Gender on the document.
-M: man.
-F: woman.
-X: other gender identity.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置Gender on the document.
-M: man.
-F: woman.
-X: other gender identity.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sex Gender on the document.
-M: man.
-F: woman.
-X: other gender identity.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSex(const std::string& _sex);

                    /**
                     * 判断参数 Sex 是否已赋值
                     * @return Sex 是否已赋值
                     * 
                     */
                    bool SexHasBeenSet() const;

                    /**
                     * 获取Age. 0 means no valid info.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Age Age. 0 means no valid info.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAge() const;

                    /**
                     * 设置Age. 0 means no valid info.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _age Age. 0 means no valid info.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAge(const std::string& _age);

                    /**
                     * 判断参数 Age 是否已赋值
                     * @return Age 是否已赋值
                     * 
                     */
                    bool AgeHasBeenSet() const;

                    /**
                     * 获取Date of birth.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Birthday Date of birth.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 设置Date of birth.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _birthday Date of birth.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBirthday(const std::string& _birthday);

                    /**
                     * 判断参数 Birthday 是否已赋值
                     * @return Birthday 是否已赋值
                     * 
                     */
                    bool BirthdayHasBeenSet() const;

                    /**
                     * 获取Birth place.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BirthPlace Birth place.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBirthPlace() const;

                    /**
                     * 设置Birth place.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _birthPlace Birth place.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBirthPlace(const std::string& _birthPlace);

                    /**
                     * 判断参数 BirthPlace 是否已赋值
                     * @return BirthPlace 是否已赋值
                     * 
                     */
                    bool BirthPlaceHasBeenSet() const;

                    /**
                     * 获取Document nationality, following ISO 3166 country coding specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Nationality Document nationality, following ISO 3166 country coding specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNationality() const;

                    /**
                     * 设置Document nationality, following ISO 3166 country coding specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nationality Document nationality, following ISO 3166 country coding specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNationality(const std::string& _nationality);

                    /**
                     * 判断参数 Nationality 是否已赋值
                     * @return Nationality 是否已赋值
                     * 
                     */
                    bool NationalityHasBeenSet() const;

                    /**
                     * 获取Registration number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegistrationNumber Registration number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegistrationNumber() const;

                    /**
                     * 设置Registration number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _registrationNumber Registration number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegistrationNumber(const std::string& _registrationNumber);

                    /**
                     * 判断参数 RegistrationNumber 是否已赋值
                     * @return RegistrationNumber 是否已赋值
                     * 
                     */
                    bool RegistrationNumberHasBeenSet() const;

                    /**
                     * 获取Specifies the address information of the document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Address Specifies the address information of the document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AddressInfo GetAddress() const;

                    /**
                     * 设置Specifies the address information of the document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _address Specifies the address information of the document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAddress(const AddressInfo& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取Localized name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FullNameLocal Localized name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFullNameLocal() const;

                    /**
                     * 设置Localized name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fullNameLocal Localized name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFullNameLocal(const std::string& _fullNameLocal);

                    /**
                     * 判断参数 FullNameLocal 是否已赋值
                     * @return FullNameLocal 是否已赋值
                     * 
                     */
                    bool FullNameLocalHasBeenSet() const;

                    /**
                     * 获取Localization name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FirstNameLocal Localization name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFirstNameLocal() const;

                    /**
                     * 设置Localization name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _firstNameLocal Localization name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFirstNameLocal(const std::string& _firstNameLocal);

                    /**
                     * 判断参数 FirstNameLocal 是否已赋值
                     * @return FirstNameLocal 是否已赋值
                     * 
                     */
                    bool FirstNameLocalHasBeenSet() const;

                    /**
                     * 获取Localized surname.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastNameLocal Localized surname.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastNameLocal() const;

                    /**
                     * 设置Localized surname.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastNameLocal Localized surname.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastNameLocal(const std::string& _lastNameLocal);

                    /**
                     * 判断参数 LastNameLocal 是否已赋值
                     * @return LastNameLocal 是否已赋值
                     * 
                     */
                    bool LastNameLocalHasBeenSet() const;

                private:

                    /**
                     * ID number.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_licenseNumber;
                    bool m_licenseNumberHasBeenSet;

                    /**
                     * Personal number. returned when the identity document type is passport.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_personalNumber;
                    bool m_personalNumberHasBeenSet;

                    /**
                     * Passport mrz line 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_passportCodeFirst;
                    bool m_passportCodeFirstHasBeenSet;

                    /**
                     * Passport mrz line 2.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_passportCodeSecond;
                    bool m_passportCodeSecondHasBeenSet;

                    /**
                     * Expiration date, in YYYY-MM-DD format.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expirationDate;
                    bool m_expirationDateHasBeenSet;

                    /**
                     * Expiration date in YYYY-MM-DD format.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dueDate;
                    bool m_dueDateHasBeenSet;

                    /**
                     * Issue date, in YYYY-MM-DD format.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_issuedDate;
                    bool m_issuedDateHasBeenSet;

                    /**
                     * Issuing authority.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_issuedAuthority;
                    bool m_issuedAuthorityHasBeenSet;

                    /**
                     * Issuing country, following the ISO 3166 country coding specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_issuedCountry;
                    bool m_issuedCountryHasBeenSet;

                    /**
                     * Specifies the name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * Name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_firstName;
                    bool m_firstNameHasBeenSet;

                    /**
                     * Name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastName;
                    bool m_lastNameHasBeenSet;

                    /**
                     * Gender on the document.
-M: man.
-F: woman.
-X: other gender identity.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Age. 0 means no valid info.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * Date of birth.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * Birth place.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_birthPlace;
                    bool m_birthPlaceHasBeenSet;

                    /**
                     * Document nationality, following ISO 3166 country coding specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * Registration number.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_registrationNumber;
                    bool m_registrationNumberHasBeenSet;

                    /**
                     * Specifies the address information of the document.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AddressInfo m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * Localized name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fullNameLocal;
                    bool m_fullNameLocalHasBeenSet;

                    /**
                     * Localization name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_firstNameLocal;
                    bool m_firstNameLocalHasBeenSet;

                    /**
                     * Localized surname.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastNameLocal;
                    bool m_lastNameLocalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_GENERALCARD_H_
