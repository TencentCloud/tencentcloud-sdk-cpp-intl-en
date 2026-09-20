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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_PERSON_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_PERSON_H_

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
                * AML Person object
                */
                class Person : public AbstractModel
                {
                public:
                    Person();
                    ~Person() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Full name (either this or LastName is required). If FullName is filled, FirstName/MiddleName/LastName cannot be filled.</p>
                     * @return FullName <p>Full name (either this or LastName is required). If FullName is filled, FirstName/MiddleName/LastName cannot be filled.</p>
                     * 
                     */
                    std::string GetFullName() const;

                    /**
                     * 设置<p>Full name (either this or LastName is required). If FullName is filled, FirstName/MiddleName/LastName cannot be filled.</p>
                     * @param _fullName <p>Full name (either this or LastName is required). If FullName is filled, FirstName/MiddleName/LastName cannot be filled.</p>
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
                     * 获取<p>name (Either this field or FullName is required)</p>
                     * @return LastName <p>name (Either this field or FullName is required)</p>
                     * 
                     */
                    std::string GetLastName() const;

                    /**
                     * 设置<p>name (Either this field or FullName is required)</p>
                     * @param _lastName <p>name (Either this field or FullName is required)</p>
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
                     * 获取<p>First name (Option)</p>
                     * @return FirstName <p>First name (Option)</p>
                     * 
                     */
                    std::string GetFirstName() const;

                    /**
                     * 设置<p>First name (Option)</p>
                     * @param _firstName <p>First name (Option)</p>
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
                     * 获取<p>Middle name (Option)</p>
                     * @return MiddleName <p>Middle name (Option)</p>
                     * 
                     */
                    std::string GetMiddleName() const;

                    /**
                     * 设置<p>Middle name (Option)</p>
                     * @param _middleName <p>Middle name (Option)</p>
                     * 
                     */
                    void SetMiddleName(const std::string& _middleName);

                    /**
                     * 判断参数 MiddleName 是否已赋值
                     * @return MiddleName 是否已赋值
                     * 
                     */
                    bool MiddleNameHasBeenSet() const;

                    /**
                     * 获取<p>ID number (Option)</p>
                     * @return IdentityNumber <p>ID number (Option)</p>
                     * 
                     */
                    std::string GetIdentityNumber() const;

                    /**
                     * 设置<p>ID number (Option)</p>
                     * @param _identityNumber <p>ID number (Option)</p>
                     * 
                     */
                    void SetIdentityNumber(const std::string& _identityNumber);

                    /**
                     * 判断参数 IdentityNumber 是否已赋值
                     * @return IdentityNumber 是否已赋值
                     * 
                     */
                    bool IdentityNumberHasBeenSet() const;

                    /**
                     * 获取<p>Date of birth, format: YYYY-MM-DD, YYYY-MM, YYYY (Year-Month-Day separated by -)</p><p>Parameter format: YYYY-MM-DD</p>
                     * @return DateOfBirth <p>Date of birth, format: YYYY-MM-DD, YYYY-MM, YYYY (Year-Month-Day separated by -)</p><p>Parameter format: YYYY-MM-DD</p>
                     * 
                     */
                    std::string GetDateOfBirth() const;

                    /**
                     * 设置<p>Date of birth, format: YYYY-MM-DD, YYYY-MM, YYYY (Year-Month-Day separated by -)</p><p>Parameter format: YYYY-MM-DD</p>
                     * @param _dateOfBirth <p>Date of birth, format: YYYY-MM-DD, YYYY-MM, YYYY (Year-Month-Day separated by -)</p><p>Parameter format: YYYY-MM-DD</p>
                     * 
                     */
                    void SetDateOfBirth(const std::string& _dateOfBirth);

                    /**
                     * 判断参数 DateOfBirth 是否已赋值
                     * @return DateOfBirth 是否已赋值
                     * 
                     */
                    bool DateOfBirthHasBeenSet() const;

                    /**
                     * 获取<p>Gender: MALE / FEMALE / OTHER / NOT_KNOWN</p><p>Enumeration values:</p><ul><li>MALE: male</li><li>FEMALE: female</li><li>OTHER: OTHER</li><li>NOT_KNOWN: NOT_KNOWN</li></ul>
                     * @return Gender <p>Gender: MALE / FEMALE / OTHER / NOT_KNOWN</p><p>Enumeration values:</p><ul><li>MALE: male</li><li>FEMALE: female</li><li>OTHER: OTHER</li><li>NOT_KNOWN: NOT_KNOWN</li></ul>
                     * 
                     */
                    std::string GetGender() const;

                    /**
                     * 设置<p>Gender: MALE / FEMALE / OTHER / NOT_KNOWN</p><p>Enumeration values:</p><ul><li>MALE: male</li><li>FEMALE: female</li><li>OTHER: OTHER</li><li>NOT_KNOWN: NOT_KNOWN</li></ul>
                     * @param _gender <p>Gender: MALE / FEMALE / OTHER / NOT_KNOWN</p><p>Enumeration values:</p><ul><li>MALE: male</li><li>FEMALE: female</li><li>OTHER: OTHER</li><li>NOT_KNOWN: NOT_KNOWN</li></ul>
                     * 
                     */
                    void SetGender(const std::string& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取<p>Address</p>
                     * @return Address <p>Address</p>
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置<p>Address</p>
                     * @param _address <p>Address</p>
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取<p>Nationality, ISO 3166-1 alpha-2 country code (Option)</p>
                     * @return Nationality <p>Nationality, ISO 3166-1 alpha-2 country code (Option)</p>
                     * 
                     */
                    std::string GetNationality() const;

                    /**
                     * 设置<p>Nationality, ISO 3166-1 alpha-2 country code (Option)</p>
                     * @param _nationality <p>Nationality, ISO 3166-1 alpha-2 country code (Option)</p>
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
                     * 获取<p>Country of residence, ISO 3166-1 alpha-2 country code (optional)</p>
                     * @return Country <p>Country of residence, ISO 3166-1 alpha-2 country code (optional)</p>
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置<p>Country of residence, ISO 3166-1 alpha-2 country code (optional)</p>
                     * @param _country <p>Country of residence, ISO 3166-1 alpha-2 country code (optional)</p>
                     * 
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                private:

                    /**
                     * <p>Full name (either this or LastName is required). If FullName is filled, FirstName/MiddleName/LastName cannot be filled.</p>
                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * <p>name (Either this field or FullName is required)</p>
                     */
                    std::string m_lastName;
                    bool m_lastNameHasBeenSet;

                    /**
                     * <p>First name (Option)</p>
                     */
                    std::string m_firstName;
                    bool m_firstNameHasBeenSet;

                    /**
                     * <p>Middle name (Option)</p>
                     */
                    std::string m_middleName;
                    bool m_middleNameHasBeenSet;

                    /**
                     * <p>ID number (Option)</p>
                     */
                    std::string m_identityNumber;
                    bool m_identityNumberHasBeenSet;

                    /**
                     * <p>Date of birth, format: YYYY-MM-DD, YYYY-MM, YYYY (Year-Month-Day separated by -)</p><p>Parameter format: YYYY-MM-DD</p>
                     */
                    std::string m_dateOfBirth;
                    bool m_dateOfBirthHasBeenSet;

                    /**
                     * <p>Gender: MALE / FEMALE / OTHER / NOT_KNOWN</p><p>Enumeration values:</p><ul><li>MALE: male</li><li>FEMALE: female</li><li>OTHER: OTHER</li><li>NOT_KNOWN: NOT_KNOWN</li></ul>
                     */
                    std::string m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * <p>Address</p>
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * <p>Nationality, ISO 3166-1 alpha-2 country code (Option)</p>
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * <p>Country of residence, ISO 3166-1 alpha-2 country code (optional)</p>
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_PERSON_H_
