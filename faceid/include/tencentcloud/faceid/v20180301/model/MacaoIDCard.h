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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_MACAOIDCARD_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_MACAOIDCARD_H_

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
                * Macao identity card
                */
                class MacaoIDCard : public AbstractModel
                {
                public:
                    MacaoIDCard();
                    ~MacaoIDCard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取First name
                     * @return FirstName First name
                     * 
                     */
                    std::string GetFirstName() const;

                    /**
                     * 设置First name
                     * @param _firstName First name
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
                     * 获取Birthday
                     * @return Birthday Birthday
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 设置Birthday
                     * @param _birthday Birthday
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
                     * 获取Expiration date
                     * @return ExpirationDate Expiration date
                     * 
                     */
                    std::string GetExpirationDate() const;

                    /**
                     * 设置Expiration date
                     * @param _expirationDate Expiration date
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
                     * 获取Identity number
                     * @return LicenseNumber Identity number
                     * 
                     */
                    std::string GetLicenseNumber() const;

                    /**
                     * 设置Identity number
                     * @param _licenseNumber Identity number
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
                     * 获取Sex
                     * @return Sex Sex
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置Sex
                     * @param _sex Sex
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
                     * 获取Age
                     * @return Age Age
                     * 
                     */
                    std::string GetAge() const;

                    /**
                     * 设置Age
                     * @param _age Age
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
                     * 获取Issuing country
                     * @return IssuedCountry Issuing country
                     * 
                     */
                    std::string GetIssuedCountry() const;

                    /**
                     * 设置Issuing country
                     * @param _issuedCountry Issuing country
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
                     * 获取mrz field 1
                     * @return Field1 mrz field 1
                     * 
                     */
                    std::string GetField1() const;

                    /**
                     * 设置mrz field 1
                     * @param _field1 mrz field 1
                     * 
                     */
                    void SetField1(const std::string& _field1);

                    /**
                     * 判断参数 Field1 是否已赋值
                     * @return Field1 是否已赋值
                     * 
                     */
                    bool Field1HasBeenSet() const;

                    /**
                     * 获取mrz field 2
                     * @return Field2 mrz field 2
                     * 
                     */
                    std::string GetField2() const;

                    /**
                     * 设置mrz field 2
                     * @param _field2 mrz field 2
                     * 
                     */
                    void SetField2(const std::string& _field2);

                    /**
                     * 判断参数 Field2 是否已赋值
                     * @return Field2 是否已赋值
                     * 
                     */
                    bool Field2HasBeenSet() const;

                private:

                    /**
                     * First name
                     */
                    std::string m_firstName;
                    bool m_firstNameHasBeenSet;

                    /**
                     * Last name
                     */
                    std::string m_lastName;
                    bool m_lastNameHasBeenSet;

                    /**
                     * Birthday
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * Expiration date
                     */
                    std::string m_expirationDate;
                    bool m_expirationDateHasBeenSet;

                    /**
                     * Identity number
                     */
                    std::string m_licenseNumber;
                    bool m_licenseNumberHasBeenSet;

                    /**
                     * Sex
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Age
                     */
                    std::string m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * Issuing country
                     */
                    std::string m_issuedCountry;
                    bool m_issuedCountryHasBeenSet;

                    /**
                     * mrz field 1
                     */
                    std::string m_field1;
                    bool m_field1HasBeenSet;

                    /**
                     * mrz field 2
                     */
                    std::string m_field2;
                    bool m_field2HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_MACAOIDCARD_H_
