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
                * ID cards of Hong Kong (China), Macao (China) and Taiwan (China), and international passport.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LicenseNumber Passport ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLicenseNumber() const;

                    /**
                     * 设置Passport ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _licenseNumber Passport ID
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
                     * 获取Full name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FullName Full name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFullName() const;

                    /**
                     * 设置Full name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fullName Full name
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
                     * 获取Last name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Surname Last name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSurname() const;

                    /**
                     * 设置Last name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _surname Last name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取First name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GivenName First name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGivenName() const;

                    /**
                     * 设置First name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _givenName First name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Gender (F-Female, M-Male)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Sex Gender (F-Female, M-Male)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置Gender (F-Female, M-Male)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sex Gender (F-Female, M-Male)
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
                     * 获取Expiration date
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DateOfExpiration Expiration date
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDateOfExpiration() const;

                    /**
                     * 设置Expiration date
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dateOfExpiration Expiration date
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IssuingCountry Issuing country
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIssuingCountry() const;

                    /**
                     * 设置Issuing country
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _issuingCountry Issuing country
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Nationality code
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NationalityCode Nationality code
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNationalityCode() const;

                    /**
                     * 设置Nationality code
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nationalityCode Nationality code
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The first line at the bottom, the MRZ Code sequence
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PassportCodeFirst The first line at the bottom, the MRZ Code sequence
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPassportCodeFirst() const;

                    /**
                     * 设置The first line at the bottom, the MRZ Code sequence
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _passportCodeFirst The first line at the bottom, the MRZ Code sequence
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
                     * 获取The second line at the bottom, the MRZ Code sequence
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PassportCodeSecond The second line at the bottom, the MRZ Code sequence
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPassportCodeSecond() const;

                    /**
                     * 设置The second line at the bottom, the MRZ Code sequence
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _passportCodeSecond The second line at the bottom, the MRZ Code sequence
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

                private:

                    /**
                     * Passport ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_licenseNumber;
                    bool m_licenseNumberHasBeenSet;

                    /**
                     * Full name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * Last name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_surname;
                    bool m_surnameHasBeenSet;

                    /**
                     * First name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_givenName;
                    bool m_givenNameHasBeenSet;

                    /**
                     * Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * Gender (F-Female, M-Male)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Expiration date
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dateOfExpiration;
                    bool m_dateOfExpirationHasBeenSet;

                    /**
                     * Issuing country
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_issuingCountry;
                    bool m_issuingCountryHasBeenSet;

                    /**
                     * Nationality code
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nationalityCode;
                    bool m_nationalityCodeHasBeenSet;

                    /**
                     * The first line at the bottom, the MRZ Code sequence
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_passportCodeFirst;
                    bool m_passportCodeFirstHasBeenSet;

                    /**
                     * The second line at the bottom, the MRZ Code sequence
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_passportCodeSecond;
                    bool m_passportCodeSecondHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_INTERNATIONALIDPASSPORT_H_
