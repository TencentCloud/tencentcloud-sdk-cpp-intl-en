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
                * Thai Identity Card
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
                     * 获取No.
                     * @return LicenseNumber No.
                     * 
                     */
                    std::string GetLicenseNumber() const;

                    /**
                     * 设置No.
                     * @param _licenseNumber No.
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
                     * 获取Date of birth
                     * @return DateOfBirth Date of birth
                     * 
                     */
                    std::string GetDateOfBirth() const;

                    /**
                     * 设置Date of birth
                     * @param _dateOfBirth Date of birth
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
                     * 获取Expiration date
                     * @return DateOfExpiry Expiration date
                     * 
                     */
                    std::string GetDateOfExpiry() const;

                    /**
                     * 设置Expiration date
                     * @param _dateOfExpiry Expiration date
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
                     * 获取Issue date
                     * @return DateOfIssue Issue date
                     * 
                     */
                    std::string GetDateOfIssue() const;

                    /**
                     * 设置Issue date
                     * @param _dateOfIssue Issue date
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

                private:

                    /**
                     * Last name
                     */
                    std::string m_lastName;
                    bool m_lastNameHasBeenSet;

                    /**
                     * First name
                     */
                    std::string m_firstName;
                    bool m_firstNameHasBeenSet;

                    /**
                     * No.
                     */
                    std::string m_licenseNumber;
                    bool m_licenseNumberHasBeenSet;

                    /**
                     * Date of birth
                     */
                    std::string m_dateOfBirth;
                    bool m_dateOfBirthHasBeenSet;

                    /**
                     * Expiration date
                     */
                    std::string m_dateOfExpiry;
                    bool m_dateOfExpiryHasBeenSet;

                    /**
                     * Issue date
                     */
                    std::string m_dateOfIssue;
                    bool m_dateOfIssueHasBeenSet;

                    /**
                     * Issuing country
                     */
                    std::string m_issuedCountry;
                    bool m_issuedCountryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_THAILANDIDCARD_H_
