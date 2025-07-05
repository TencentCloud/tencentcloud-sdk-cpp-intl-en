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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_NORMALTHAILANDIDCARD_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_NORMALTHAILANDIDCARD_H_

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
                class NormalThailandIDCard : public AbstractModel
                {
                public:
                    NormalThailandIDCard();
                    ~NormalThailandIDCard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取LicenseNumber
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LicenseNumber LicenseNumber
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLicenseNumber() const;

                    /**
                     * 设置LicenseNumber
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _licenseNumber LicenseNumber
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
                     * 获取Thailand name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FullName Thailand name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFullName() const;

                    /**
                     * 设置Thailand name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fullName Thailand name
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
                     * 获取Address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FormattedAddress Address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFormattedAddress() const;

                    /**
                     * 设置Address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _formattedAddress Address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFormattedAddress(const std::string& _formattedAddress);

                    /**
                     * 判断参数 FormattedAddress 是否已赋值
                     * @return FormattedAddress 是否已赋值
                     * 
                     */
                    bool FormattedAddressHasBeenSet() const;

                    /**
                     * 获取Expiration date
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpirationDate Expiration date
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpirationDate() const;

                    /**
                     * 设置Expiration date
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expirationDate Expiration date
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
                     * 获取Issued date
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IssuedDate Issued date
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIssuedDate() const;

                    /**
                     * 设置Issued date
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _issuedDate Issued date
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
                     * 获取Religion
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Religion Religion
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReligion() const;

                    /**
                     * 设置Religion
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _religion Religion
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReligion(const std::string& _religion);

                    /**
                     * 判断参数 Religion 是否已赋值
                     * @return Religion 是否已赋值
                     * 
                     */
                    bool ReligionHasBeenSet() const;

                    /**
                     * 获取Birthday in Thai
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ThaiBirthday Birthday in Thai
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetThaiBirthday() const;

                    /**
                     * 设置Birthday in Thai
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _thaiBirthday Birthday in Thai
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetThaiBirthday(const std::string& _thaiBirthday);

                    /**
                     * 判断参数 ThaiBirthday 是否已赋值
                     * @return ThaiBirthday 是否已赋值
                     * 
                     */
                    bool ThaiBirthdayHasBeenSet() const;

                    /**
                     * 获取Expiration date in Thai
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ThaiExpirationDate Expiration date in Thai
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetThaiExpirationDate() const;

                    /**
                     * 设置Expiration date in Thai
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _thaiExpirationDate Expiration date in Thai
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetThaiExpirationDate(const std::string& _thaiExpirationDate);

                    /**
                     * 判断参数 ThaiExpirationDate 是否已赋值
                     * @return ThaiExpirationDate 是否已赋值
                     * 
                     */
                    bool ThaiExpirationDateHasBeenSet() const;

                    /**
                     * 获取Issued date in Thai
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ThaiIssueDate Issued date in Thai
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetThaiIssueDate() const;

                    /**
                     * 设置Issued date in Thai
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _thaiIssueDate Issued date in Thai
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetThaiIssueDate(const std::string& _thaiIssueDate);

                    /**
                     * 判断参数 ThaiIssueDate 是否已赋值
                     * @return ThaiIssueDate 是否已赋值
                     * 
                     */
                    bool ThaiIssueDateHasBeenSet() const;

                private:

                    /**
                     * LicenseNumber
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_licenseNumber;
                    bool m_licenseNumberHasBeenSet;

                    /**
                     * Thailand name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

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
                     * Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * Address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_formattedAddress;
                    bool m_formattedAddressHasBeenSet;

                    /**
                     * Expiration date
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expirationDate;
                    bool m_expirationDateHasBeenSet;

                    /**
                     * Issued date
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_issuedDate;
                    bool m_issuedDateHasBeenSet;

                    /**
                     * Registration number 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_registrationNumber;
                    bool m_registrationNumberHasBeenSet;

                    /**
                     * Religion
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_religion;
                    bool m_religionHasBeenSet;

                    /**
                     * Birthday in Thai
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_thaiBirthday;
                    bool m_thaiBirthdayHasBeenSet;

                    /**
                     * Expiration date in Thai
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_thaiExpirationDate;
                    bool m_thaiExpirationDateHasBeenSet;

                    /**
                     * Issued date in Thai
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_thaiIssueDate;
                    bool m_thaiIssueDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_NORMALTHAILANDIDCARD_H_
