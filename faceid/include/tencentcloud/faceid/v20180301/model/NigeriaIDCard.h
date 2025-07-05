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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_NIGERIAIDCARD_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_NIGERIAIDCARD_H_

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
                * Nigeria ID card
                */
                class NigeriaIDCard : public AbstractModel
                {
                public:
                    NigeriaIDCard();
                    ~NigeriaIDCard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Last name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastName Last name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastName() const;

                    /**
                     * 设置Last name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastName Last name.
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
                     * 获取First name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FirstName First name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFirstName() const;

                    /**
                     * 设置First name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _firstName First name.
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
                     * 获取License number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LicenseNumber License number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLicenseNumber() const;

                    /**
                     * 设置License number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _licenseNumber License number.
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
                     * 获取Age.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Age Age.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAge() const;

                    /**
                     * 设置Age.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _age Age.
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
                     * 获取Birthday.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Birthday Birthday.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 设置Birthday.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _birthday Birthday.
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
                     * 获取Issued country.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IssuedCountry Issued country.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIssuedCountry() const;

                    /**
                     * 设置Issued country.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _issuedCountry Issued country.
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
                     * 获取Gender.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Sex Gender.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置Gender.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sex Gender.
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

                private:

                    /**
                     * Last name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastName;
                    bool m_lastNameHasBeenSet;

                    /**
                     * First name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_firstName;
                    bool m_firstNameHasBeenSet;

                    /**
                     * License number.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_licenseNumber;
                    bool m_licenseNumberHasBeenSet;

                    /**
                     * Age.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * Birthday.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * Issued country.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_issuedCountry;
                    bool m_issuedCountryHasBeenSet;

                    /**
                     * Gender.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_NIGERIAIDCARD_H_
