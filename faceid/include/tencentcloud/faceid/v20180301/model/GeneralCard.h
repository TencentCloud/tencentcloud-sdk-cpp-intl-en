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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GENERALCARD_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GENERALCARD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/Address.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * General card certificate information
                */
                class GeneralCard : public AbstractModel
                {
                public:
                    GeneralCard();
                    ~GeneralCard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID number
                     * @return LicenseNumber ID number
                     * 
                     */
                    std::string GetLicenseNumber() const;

                    /**
                     * 设置ID number
                     * @param _licenseNumber ID number
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
                     * 获取Personal number. It is returned when the identity document type is a passport.
                     * @return PersonalNumber Personal number. It is returned when the identity document type is a passport.
                     * 
                     */
                    std::string GetPersonalNumber() const;

                    /**
                     * 设置Personal number. It is returned when the identity document type is a passport.
                     * @param _personalNumber Personal number. It is returned when the identity document type is a passport.
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
                     * 获取MRZ line 1 of the passport
                     * @return PassportCodeFirst MRZ line 1 of the passport
                     * 
                     */
                    std::string GetPassportCodeFirst() const;

                    /**
                     * 设置MRZ line 1 of the passport
                     * @param _passportCodeFirst MRZ line 1 of the passport
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
                     * 获取MRZ line 2 of the passport
                     * @return PassportCodeSecond MRZ line 2 of the passport
                     * 
                     */
                    std::string GetPassportCodeSecond() const;

                    /**
                     * 设置MRZ line 2 of the passport
                     * @param _passportCodeSecond MRZ line 2 of the passport
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
                     * 获取Expiration date in YYYY-MM-DD format
                     * @return ExpirationDate Expiration date in YYYY-MM-DD format
                     * 
                     */
                    std::string GetExpirationDate() const;

                    /**
                     * 设置Expiration date in YYYY-MM-DD format
                     * @param _expirationDate Expiration date in YYYY-MM-DD format
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
                     * 获取Expiration date in YYYY-MM-DD format
                     * @return DueDate Expiration date in YYYY-MM-DD format
                     * 
                     */
                    std::string GetDueDate() const;

                    /**
                     * 设置Expiration date in YYYY-MM-DD format
                     * @param _dueDate Expiration date in YYYY-MM-DD format
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
                     * 获取Issue date in YYYY-MM-DD format
                     * @return IssuedDate Issue date in YYYY-MM-DD format
                     * 
                     */
                    std::string GetIssuedDate() const;

                    /**
                     * 设置Issue date in YYYY-MM-DD format
                     * @param _issuedDate Issue date in YYYY-MM-DD format
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
                     * 获取Issuing authority
                     * @return IssuedAuthority Issuing authority
                     * 
                     */
                    std::string GetIssuedAuthority() const;

                    /**
                     * 设置Issuing authority
                     * @param _issuedAuthority Issuing authority
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
                     * 获取Issuing country. Return following the ISO 3166 country coding specification.
                     * @return IssuedCountry Issuing country. Return following the ISO 3166 country coding specification.
                     * 
                     */
                    std::string GetIssuedCountry() const;

                    /**
                     * 设置Issuing country. Return following the ISO 3166 country coding specification.
                     * @param _issuedCountry Issuing country. Return following the ISO 3166 country coding specification.
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
                     * 获取Name
                     * @return FullName Name
                     * 
                     */
                    std::string GetFullName() const;

                    /**
                     * 设置Name
                     * @param _fullName Name
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
                     * 获取Name
                     * @return FirstName Name
                     * 
                     */
                    std::string GetFirstName() const;

                    /**
                     * 设置Name
                     * @param _firstName Name
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
                     * 获取Last name
                     * @return LastName Last name
                     * 
                     */
                    std::string GetLastName() const;

                    /**
                     * 设置Last name
                     * @param _lastName Last name
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
                     * 获取Gender on the document
-M: male
-F: female
- X: Other gender identity
                     * @return Sex Gender on the document
-M: male
-F: female
- X: Other gender identity
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置Gender on the document
-M: male
-F: female
- X: Other gender identity
                     * @param _sex Gender on the document
-M: male
-F: female
- X: Other gender identity
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
                     * 获取Age. 0 indicates no valid info is obtained.
                     * @return Age Age. 0 indicates no valid info is obtained.
                     * 
                     */
                    std::string GetAge() const;

                    /**
                     * 设置Age. 0 indicates no valid info is obtained.
                     * @param _age Age. 0 indicates no valid info is obtained.
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
                     * 获取Date of birth
                     * @return Birthday Date of birth
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 设置Date of birth
                     * @param _birthday Date of birth
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
                     * 获取Birth place
                     * @return BirthPlace Birth place
                     * 
                     */
                    std::string GetBirthPlace() const;

                    /**
                     * 设置Birth place
                     * @param _birthPlace Birth place
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
                     * 获取Document nationality. Return following the ISO 3166 country coding specification.
                     * @return Nationality Document nationality. Return following the ISO 3166 country coding specification.
                     * 
                     */
                    std::string GetNationality() const;

                    /**
                     * 设置Document nationality. Return following the ISO 3166 country coding specification.
                     * @param _nationality Document nationality. Return following the ISO 3166 country coding specification.
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
                     * 获取Registration number
                     * @return RegistrationNumber Registration number
                     * 
                     */
                    std::string GetRegistrationNumber() const;

                    /**
                     * 设置Registration number
                     * @param _registrationNumber Registration number
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
                     * 获取Document address information
                     * @return Address Document address information
                     * 
                     */
                    Address GetAddress() const;

                    /**
                     * 设置Document address information
                     * @param _address Document address information
                     * 
                     */
                    void SetAddress(const Address& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取Localized name
                     * @return FullNameLocal Localized name
                     * 
                     */
                    std::string GetFullNameLocal() const;

                    /**
                     * 设置Localized name
                     * @param _fullNameLocal Localized name
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
                     * 获取Localized name
                     * @return FirstNameLocal Localized name
                     * 
                     */
                    std::string GetFirstNameLocal() const;

                    /**
                     * 设置Localized name
                     * @param _firstNameLocal Localized name
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
                     * 获取Localized last name
                     * @return LastNameLocal Localized last name
                     * 
                     */
                    std::string GetLastNameLocal() const;

                    /**
                     * 设置Localized last name
                     * @param _lastNameLocal Localized last name
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
                     * ID number
                     */
                    std::string m_licenseNumber;
                    bool m_licenseNumberHasBeenSet;

                    /**
                     * Personal number. It is returned when the identity document type is a passport.
                     */
                    std::string m_personalNumber;
                    bool m_personalNumberHasBeenSet;

                    /**
                     * MRZ line 1 of the passport
                     */
                    std::string m_passportCodeFirst;
                    bool m_passportCodeFirstHasBeenSet;

                    /**
                     * MRZ line 2 of the passport
                     */
                    std::string m_passportCodeSecond;
                    bool m_passportCodeSecondHasBeenSet;

                    /**
                     * Expiration date in YYYY-MM-DD format
                     */
                    std::string m_expirationDate;
                    bool m_expirationDateHasBeenSet;

                    /**
                     * Expiration date in YYYY-MM-DD format
                     */
                    std::string m_dueDate;
                    bool m_dueDateHasBeenSet;

                    /**
                     * Issue date in YYYY-MM-DD format
                     */
                    std::string m_issuedDate;
                    bool m_issuedDateHasBeenSet;

                    /**
                     * Issuing authority
                     */
                    std::string m_issuedAuthority;
                    bool m_issuedAuthorityHasBeenSet;

                    /**
                     * Issuing country. Return following the ISO 3166 country coding specification.
                     */
                    std::string m_issuedCountry;
                    bool m_issuedCountryHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_firstName;
                    bool m_firstNameHasBeenSet;

                    /**
                     * Last name
                     */
                    std::string m_lastName;
                    bool m_lastNameHasBeenSet;

                    /**
                     * Gender on the document
-M: male
-F: female
- X: Other gender identity
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Age. 0 indicates no valid info is obtained.
                     */
                    std::string m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * Date of birth
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * Birth place
                     */
                    std::string m_birthPlace;
                    bool m_birthPlaceHasBeenSet;

                    /**
                     * Document nationality. Return following the ISO 3166 country coding specification.
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * Registration number
                     */
                    std::string m_registrationNumber;
                    bool m_registrationNumberHasBeenSet;

                    /**
                     * Document address information
                     */
                    Address m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * Localized name
                     */
                    std::string m_fullNameLocal;
                    bool m_fullNameLocalHasBeenSet;

                    /**
                     * Localized name
                     */
                    std::string m_firstNameLocal;
                    bool m_firstNameLocalHasBeenSet;

                    /**
                     * Localized last name
                     */
                    std::string m_lastNameLocal;
                    bool m_lastNameLocalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GENERALCARD_H_
