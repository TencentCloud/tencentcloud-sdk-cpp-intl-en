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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_INTERNATIONALIDPASSPORT_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_INTERNATIONALIDPASSPORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * Hong Kong, Macao, and Taiwan region as well as overseas passport
                */
                class InternationalIDPassport : public AbstractModel
                {
                public:
                    InternationalIDPassport();
                    ~InternationalIDPassport() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Passport ID
                     * @return LicenseNumber Passport ID
                     * 
                     */
                    std::string GetLicenseNumber() const;

                    /**
                     * 设置Passport ID
                     * @param _licenseNumber Passport ID
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
                     * 获取Last name
                     * @return Surname Last name
                     * 
                     */
                    std::string GetSurname() const;

                    /**
                     * 设置Last name
                     * @param _surname Last name
                     * 
                     */
                    void SetSurname(const std::string& _surname);

                    /**
                     * 判断参数 Surname 是否已赋值
                     * @return Surname 是否已赋值
                     * 
                     */
                    bool SurnameHasBeenSet() const;

                    /**
                     * 获取Name
                     * @return GivenName Name
                     * 
                     */
                    std::string GetGivenName() const;

                    /**
                     * 设置Name
                     * @param _givenName Name
                     * 
                     */
                    void SetGivenName(const std::string& _givenName);

                    /**
                     * 判断参数 GivenName 是否已赋值
                     * @return GivenName 是否已赋值
                     * 
                     */
                    bool GivenNameHasBeenSet() const;

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
                     * 获取Gender (F: female, M: male).
                     * @return Sex Gender (F: female, M: male).
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置Gender (F: female, M: male).
                     * @param _sex Gender (F: female, M: male).
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
                     * 获取Validity period.
                     * @return DateOfExpiration Validity period.
                     * 
                     */
                    std::string GetDateOfExpiration() const;

                    /**
                     * 设置Validity period.
                     * @param _dateOfExpiration Validity period.
                     * 
                     */
                    void SetDateOfExpiration(const std::string& _dateOfExpiration);

                    /**
                     * 判断参数 DateOfExpiration 是否已赋值
                     * @return DateOfExpiration 是否已赋值
                     * 
                     */
                    bool DateOfExpirationHasBeenSet() const;

                    /**
                     * 获取Issuing country
                     * @return IssuingCountry Issuing country
                     * 
                     */
                    std::string GetIssuingCountry() const;

                    /**
                     * 设置Issuing country
                     * @param _issuingCountry Issuing country
                     * 
                     */
                    void SetIssuingCountry(const std::string& _issuingCountry);

                    /**
                     * 判断参数 IssuingCountry 是否已赋值
                     * @return IssuingCountry 是否已赋值
                     * 
                     */
                    bool IssuingCountryHasBeenSet() const;

                    /**
                     * 获取Country region code
                     * @return NationalityCode Country region code
                     * 
                     */
                    std::string GetNationalityCode() const;

                    /**
                     * 设置Country region code
                     * @param _nationalityCode Country region code
                     * 
                     */
                    void SetNationalityCode(const std::string& _nationalityCode);

                    /**
                     * 判断参数 NationalityCode 是否已赋值
                     * @return NationalityCode 是否已赋值
                     * 
                     */
                    bool NationalityCodeHasBeenSet() const;

                    /**
                     * 获取MRZ Code sequence in the first row at the bottom
                     * @return PassportCodeFirst MRZ Code sequence in the first row at the bottom
                     * 
                     */
                    std::string GetPassportCodeFirst() const;

                    /**
                     * 设置MRZ Code sequence in the first row at the bottom
                     * @param _passportCodeFirst MRZ Code sequence in the first row at the bottom
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
                     * 获取MRZ Code sequence in the second line from the bottom
                     * @return PassportCodeSecond MRZ Code sequence in the second line from the bottom
                     * 
                     */
                    std::string GetPassportCodeSecond() const;

                    /**
                     * 设置MRZ Code sequence in the second line from the bottom
                     * @param _passportCodeSecond MRZ Code sequence in the second line from the bottom
                     * 
                     */
                    void SetPassportCodeSecond(const std::string& _passportCodeSecond);

                    /**
                     * 判断参数 PassportCodeSecond 是否已赋值
                     * @return PassportCodeSecond 是否已赋值
                     * 
                     */
                    bool PassportCodeSecondHasBeenSet() const;

                private:

                    /**
                     * Passport ID
                     */
                    std::string m_licenseNumber;
                    bool m_licenseNumberHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * Last name
                     */
                    std::string m_surname;
                    bool m_surnameHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_givenName;
                    bool m_givenNameHasBeenSet;

                    /**
                     * Date of birth
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * Gender (F: female, M: male).
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Validity period.
                     */
                    std::string m_dateOfExpiration;
                    bool m_dateOfExpirationHasBeenSet;

                    /**
                     * Issuing country
                     */
                    std::string m_issuingCountry;
                    bool m_issuingCountryHasBeenSet;

                    /**
                     * Country region code
                     */
                    std::string m_nationalityCode;
                    bool m_nationalityCodeHasBeenSet;

                    /**
                     * MRZ Code sequence in the first row at the bottom
                     */
                    std::string m_passportCodeFirst;
                    bool m_passportCodeFirstHasBeenSet;

                    /**
                     * MRZ Code sequence in the second line from the bottom
                     */
                    std::string m_passportCodeSecond;
                    bool m_passportCodeSecondHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_INTERNATIONALIDPASSPORT_H_
