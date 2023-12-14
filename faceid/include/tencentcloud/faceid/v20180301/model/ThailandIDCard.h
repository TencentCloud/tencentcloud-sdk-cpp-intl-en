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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_THAILANDIDCARD_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_THAILANDIDCARD_H_

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
                * Thailand ID Card
                */
                class ThailandIDCard : public AbstractModel
                {
                public:
                    ThailandIDCard();
                    ~ThailandIDCard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DateOfBirth Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDateOfBirth() const;

                    /**
                     * 设置Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dateOfBirth Birthday
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Date of expiry
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DateOfExpiry Date of expiry
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDateOfExpiry() const;

                    /**
                     * 设置Date of expiry
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dateOfExpiry Date of expiry
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDateOfExpiry(const std::string& _dateOfExpiry);

                    /**
                     * 判断参数 DateOfExpiry 是否已赋值
                     * @return DateOfExpiry 是否已赋值
                     * 
                     */
                    bool DateOfExpiryHasBeenSet() const;

                    /**
                     * 获取Date of issue
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DateOfIssue Date of issue
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDateOfIssue() const;

                    /**
                     * 设置Date of issue
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dateOfIssue Date of issue
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDateOfIssue(const std::string& _dateOfIssue);

                    /**
                     * 判断参数 DateOfIssue 是否已赋值
                     * @return DateOfIssue 是否已赋值
                     * 
                     */
                    bool DateOfIssueHasBeenSet() const;

                    /**
                     * 获取Issuing country
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IssuedCountry Issuing country
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIssuedCountry() const;

                    /**
                     * 设置Issuing country
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _issuedCountry Issuing country
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

                private:

                    /**
                     * Last name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastName;
                    bool m_lastNameHasBeenSet;

                    /**
                     * First name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_firstName;
                    bool m_firstNameHasBeenSet;

                    /**
                     * License number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_licenseNumber;
                    bool m_licenseNumberHasBeenSet;

                    /**
                     * Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dateOfBirth;
                    bool m_dateOfBirthHasBeenSet;

                    /**
                     * Date of expiry
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dateOfExpiry;
                    bool m_dateOfExpiryHasBeenSet;

                    /**
                     * Date of issue
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dateOfIssue;
                    bool m_dateOfIssueHasBeenSet;

                    /**
                     * Issuing country
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_issuedCountry;
                    bool m_issuedCountryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_THAILANDIDCARD_H_
