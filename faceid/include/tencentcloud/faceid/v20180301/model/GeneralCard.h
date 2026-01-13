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
                * General liscense information.
                */
                class GeneralCard : public AbstractModel
                {
                public:
                    GeneralCard();
                    ~GeneralCard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取License number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LicenseNumber License number
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLicenseNumber() const;

                    /**
                     * 设置License number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _licenseNumber License number
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
                     * 获取Personal number, which is returned when it is a passport
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PersonalNumber Personal number, which is returned when it is a passport
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPersonalNumber() const;

                    /**
                     * 设置Personal number, which is returned when it is a passport
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _personalNumber Personal number, which is returned when it is a passport
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
                     * 获取The first line of passport machine reading code
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PassportCodeFirst The first line of passport machine reading code
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPassportCodeFirst() const;

                    /**
                     * 设置The first line of passport machine reading code
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _passportCodeFirst The first line of passport machine reading code
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
                     * 获取The first line of passport machine reading code
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PassportCodeSecond The first line of passport machine reading code
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPassportCodeSecond() const;

                    /**
                     * 设置The first line of passport machine reading code
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _passportCodeSecond The first line of passport machine reading code
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
                     * 获取Date of expiry in the format of YYYY-MM-DD
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpirationDate Date of expiry in the format of YYYY-MM-DD
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpirationDate() const;

                    /**
                     * 设置Date of expiry in the format of YYYY-MM-DD
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expirationDate Date of expiry in the format of YYYY-MM-DD
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
                     * 获取Valid date in the format of YYYY-MM-DD
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DueDate Valid date in the format of YYYY-MM-DD
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDueDate() const;

                    /**
                     * 设置Valid date in the format of YYYY-MM-DD
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dueDate Valid date in the format of YYYY-MM-DD
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
                     * 获取Date of issue in the format of YYYY-MM-DD
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IssuedDate Date of issue in the format of YYYY-MM-DD
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIssuedDate() const;

                    /**
                     * 设置Date of issue in the format of YYYY-MM-DD
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _issuedDate Date of issue in the format of YYYY-MM-DD
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
                     * 获取Issuing authority
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IssuedAuthority Issuing authority
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIssuedAuthority() const;

                    /**
                     * 设置Issuing authority
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _issuedAuthority Issuing authority
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
                     * 获取Issuing country, which is returned following the ISO 3166 country coding specification
Note: This field may return null, indicating that no valid values can be obtained.
Example: MYS
                     * @return IssuedCountry Issuing country, which is returned following the ISO 3166 country coding specification
Note: This field may return null, indicating that no valid values can be obtained.
Example: MYS
                     * 
                     */
                    std::string GetIssuedCountry() const;

                    /**
                     * 设置Issuing country, which is returned following the ISO 3166 country coding specification
Note: This field may return null, indicating that no valid values can be obtained.
Example: MYS
                     * @param _issuedCountry Issuing country, which is returned following the ISO 3166 country coding specification
Note: This field may return null, indicating that no valid values can be obtained.
Example: MYS
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
                     * 获取Full Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FullName Full Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFullName() const;

                    /**
                     * 设置Full Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fullName Full Name
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
                     * 获取First name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FirstName First name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFirstName() const;

                    /**
                     * 设置First name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _firstName First name
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
                     * 获取Last name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastName Last name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastName() const;

                    /**
                     * 设置Last name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastName Last name
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
                     * 获取Gender on the license
- M: male
- F: female
- X: other gender
Note: This field may return null, indicating that no valid values can be obtained.
Example: M
                     * @return Sex Gender on the license
- M: male
- F: female
- X: other gender
Note: This field may return null, indicating that no valid values can be obtained.
Example: M
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置Gender on the license
- M: male
- F: female
- X: other gender
Note: This field may return null, indicating that no valid values can be obtained.
Example: M
                     * @param _sex Gender on the license
- M: male
- F: female
- X: other gender
Note: This field may return null, indicating that no valid values can be obtained.
Example: M
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
                     * 获取Age. 0 indicates that no valid information is obtained.
Example: 0
                     * @return Age Age. 0 indicates that no valid information is obtained.
Example: 0
                     * 
                     */
                    std::string GetAge() const;

                    /**
                     * 设置Age. 0 indicates that no valid information is obtained.
Example: 0
                     * @param _age Age. 0 indicates that no valid information is obtained.
Example: 0
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
                     * 获取Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Birthday Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 设置Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _birthday Birthday
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
                     * 获取Birth place
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BirthPlace Birth place
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBirthPlace() const;

                    /**
                     * 设置Birth place
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _birthPlace Birth place
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
                     * 获取Nationality, which is returned following the ISO 3166 country coding specification
Note: This field may return null, indicating that no valid values can be obtained.
Example: IND
                     * @return Nationality Nationality, which is returned following the ISO 3166 country coding specification
Note: This field may return null, indicating that no valid values can be obtained.
Example: IND
                     * 
                     */
                    std::string GetNationality() const;

                    /**
                     * 设置Nationality, which is returned following the ISO 3166 country coding specification
Note: This field may return null, indicating that no valid values can be obtained.
Example: IND
                     * @param _nationality Nationality, which is returned following the ISO 3166 country coding specification
Note: This field may return null, indicating that no valid values can be obtained.
Example: IND
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegistrationNumber Registration number
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegistrationNumber() const;

                    /**
                     * 设置Registration number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _registrationNumber Registration number
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
                     * 获取Address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Address Address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Address GetAddress() const;

                    /**
                     * 设置Address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _address Address
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Localized name.
                     * @return FullNameLocal Localized name.
                     * 
                     */
                    std::string GetFullNameLocal() const;

                    /**
                     * 设置Localized name.
                     * @param _fullNameLocal Localized name.
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
                     * 获取Localization.
                     * @return FirstNameLocal Localization.
                     * 
                     */
                    std::string GetFirstNameLocal() const;

                    /**
                     * 设置Localization.
                     * @param _firstNameLocal Localization.
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
                     * @return LastNameLocal Localized surname.
                     * 
                     */
                    std::string GetLastNameLocal() const;

                    /**
                     * 设置Localized surname.
                     * @param _lastNameLocal Localized surname.
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
                     * License number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_licenseNumber;
                    bool m_licenseNumberHasBeenSet;

                    /**
                     * Personal number, which is returned when it is a passport
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_personalNumber;
                    bool m_personalNumberHasBeenSet;

                    /**
                     * The first line of passport machine reading code
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_passportCodeFirst;
                    bool m_passportCodeFirstHasBeenSet;

                    /**
                     * The first line of passport machine reading code
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_passportCodeSecond;
                    bool m_passportCodeSecondHasBeenSet;

                    /**
                     * Date of expiry in the format of YYYY-MM-DD
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expirationDate;
                    bool m_expirationDateHasBeenSet;

                    /**
                     * Valid date in the format of YYYY-MM-DD
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dueDate;
                    bool m_dueDateHasBeenSet;

                    /**
                     * Date of issue in the format of YYYY-MM-DD
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_issuedDate;
                    bool m_issuedDateHasBeenSet;

                    /**
                     * Issuing authority
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_issuedAuthority;
                    bool m_issuedAuthorityHasBeenSet;

                    /**
                     * Issuing country, which is returned following the ISO 3166 country coding specification
Note: This field may return null, indicating that no valid values can be obtained.
Example: MYS
                     */
                    std::string m_issuedCountry;
                    bool m_issuedCountryHasBeenSet;

                    /**
                     * Full Name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * First name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_firstName;
                    bool m_firstNameHasBeenSet;

                    /**
                     * Last name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastName;
                    bool m_lastNameHasBeenSet;

                    /**
                     * Gender on the license
- M: male
- F: female
- X: other gender
Note: This field may return null, indicating that no valid values can be obtained.
Example: M
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Age. 0 indicates that no valid information is obtained.
Example: 0
                     */
                    std::string m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * Birth place
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_birthPlace;
                    bool m_birthPlaceHasBeenSet;

                    /**
                     * Nationality, which is returned following the ISO 3166 country coding specification
Note: This field may return null, indicating that no valid values can be obtained.
Example: IND
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * Registration number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_registrationNumber;
                    bool m_registrationNumberHasBeenSet;

                    /**
                     * Address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Address m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * Localized name.
                     */
                    std::string m_fullNameLocal;
                    bool m_fullNameLocalHasBeenSet;

                    /**
                     * Localization.
                     */
                    std::string m_firstNameLocal;
                    bool m_firstNameLocalHasBeenSet;

                    /**
                     * Localized surname.
                     */
                    std::string m_lastNameLocal;
                    bool m_lastNameLocalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GENERALCARD_H_
