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
                * 
                */
                class MacaoIDCard : public AbstractModel
                {
                public:
                    MacaoIDCard();
                    ~MacaoIDCard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return FirstName 
                     * 
                     */
                    std::string GetFirstName() const;

                    /**
                     * 设置
                     * @param _firstName 
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
                     * 获取
                     * @return LastName 
                     * 
                     */
                    std::string GetLastName() const;

                    /**
                     * 设置
                     * @param _lastName 
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
                     * 获取
                     * @return Birthday 
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 设置
                     * @param _birthday 
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
                     * 获取
                     * @return ExpirationDate 
                     * 
                     */
                    std::string GetExpirationDate() const;

                    /**
                     * 设置
                     * @param _expirationDate 
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
                     * 获取
                     * @return LicenseNumber 
                     * 
                     */
                    std::string GetLicenseNumber() const;

                    /**
                     * 设置
                     * @param _licenseNumber 
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
                     * 获取
                     * @return Sex 
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置
                     * @param _sex 
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
                     * 获取
                     * @return Age 
                     * 
                     */
                    std::string GetAge() const;

                    /**
                     * 设置
                     * @param _age 
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
                     * 获取
                     * @return IssuedCountry 
                     * 
                     */
                    std::string GetIssuedCountry() const;

                    /**
                     * 设置
                     * @param _issuedCountry 
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
                     * 获取
                     * @return Field1 
                     * 
                     */
                    std::string GetField1() const;

                    /**
                     * 设置
                     * @param _field1 
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
                     * 获取
                     * @return Field2 
                     * 
                     */
                    std::string GetField2() const;

                    /**
                     * 设置
                     * @param _field2 
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
                     * 
                     */
                    std::string m_firstName;
                    bool m_firstNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_lastName;
                    bool m_lastNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_expirationDate;
                    bool m_expirationDateHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_licenseNumber;
                    bool m_licenseNumberHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_issuedCountry;
                    bool m_issuedCountryHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_field1;
                    bool m_field1HasBeenSet;

                    /**
                     * 
                     */
                    std::string m_field2;
                    bool m_field2HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_MACAOIDCARD_H_
