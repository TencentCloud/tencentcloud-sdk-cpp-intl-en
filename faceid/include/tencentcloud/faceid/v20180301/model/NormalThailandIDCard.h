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
                * Thai Identity Card (mapped field result)
                */
                class NormalThailandIDCard : public AbstractModel
                {
                public:
                    NormalThailandIDCard();
                    ~NormalThailandIDCard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Thai name
                     * @return FullName Thai name
                     * 
                     */
                    std::string GetFullName() const;

                    /**
                     * 设置Thai name
                     * @param _fullName Thai name
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
                     * 获取English name
                     * @return LastName English name
                     * 
                     */
                    std::string GetLastName() const;

                    /**
                     * 设置English name
                     * @param _lastName English name
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
                     * 获取English name
                     * @return FirstName English name
                     * 
                     */
                    std::string GetFirstName() const;

                    /**
                     * 设置English name
                     * @param _firstName English name
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
                     * 获取English birth date
                     * @return Birthday English birth date
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 设置English birth date
                     * @param _birthday English birth date
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
                     * 获取Address.
                     * @return FormattedAddress Address.
                     * 
                     */
                    std::string GetFormattedAddress() const;

                    /**
                     * 设置Address.
                     * @param _formattedAddress Address.
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
                     * 获取English birth date
                     * @return IssuedDate English birth date
                     * 
                     */
                    std::string GetIssuedDate() const;

                    /**
                     * 设置English birth date
                     * @param _issuedDate English birth date
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
                     * 获取Serial number
                     * @return RegistrationNumber Serial number
                     * 
                     */
                    std::string GetRegistrationNumber() const;

                    /**
                     * 设置Serial number
                     * @param _registrationNumber Serial number
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
                     * 获取Religious belief
                     * @return Religion Religious belief
                     * 
                     */
                    std::string GetReligion() const;

                    /**
                     * 设置Religious belief
                     * @param _religion Religious belief
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
                     * 获取Date of birth in Thai
                     * @return ThaiBirthday Date of birth in Thai
                     * 
                     */
                    std::string GetThaiBirthday() const;

                    /**
                     * 设置Date of birth in Thai
                     * @param _thaiBirthday Date of birth in Thai
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
                     * @return ThaiExpirationDate Expiration date in Thai
                     * 
                     */
                    std::string GetThaiExpirationDate() const;

                    /**
                     * 设置Expiration date in Thai
                     * @param _thaiExpirationDate Expiration date in Thai
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
                     * 获取Date of issue in Thai
                     * @return ThaiIssueDate Date of issue in Thai
                     * 
                     */
                    std::string GetThaiIssueDate() const;

                    /**
                     * 设置Date of issue in Thai
                     * @param _thaiIssueDate Date of issue in Thai
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
                     * Identity number
                     */
                    std::string m_licenseNumber;
                    bool m_licenseNumberHasBeenSet;

                    /**
                     * Thai name
                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * English name
                     */
                    std::string m_lastName;
                    bool m_lastNameHasBeenSet;

                    /**
                     * English name
                     */
                    std::string m_firstName;
                    bool m_firstNameHasBeenSet;

                    /**
                     * English birth date
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * Address.
                     */
                    std::string m_formattedAddress;
                    bool m_formattedAddressHasBeenSet;

                    /**
                     * Expiration date
                     */
                    std::string m_expirationDate;
                    bool m_expirationDateHasBeenSet;

                    /**
                     * English birth date
                     */
                    std::string m_issuedDate;
                    bool m_issuedDateHasBeenSet;

                    /**
                     * Serial number
                     */
                    std::string m_registrationNumber;
                    bool m_registrationNumberHasBeenSet;

                    /**
                     * Religious belief
                     */
                    std::string m_religion;
                    bool m_religionHasBeenSet;

                    /**
                     * Date of birth in Thai
                     */
                    std::string m_thaiBirthday;
                    bool m_thaiBirthdayHasBeenSet;

                    /**
                     * Expiration date in Thai
                     */
                    std::string m_thaiExpirationDate;
                    bool m_thaiExpirationDateHasBeenSet;

                    /**
                     * Date of issue in Thai
                     */
                    std::string m_thaiIssueDate;
                    bool m_thaiIssueDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_NORMALTHAILANDIDCARD_H_
