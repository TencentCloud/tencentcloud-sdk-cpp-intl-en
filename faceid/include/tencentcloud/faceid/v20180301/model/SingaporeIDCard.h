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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_SINGAPOREIDCARD_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_SINGAPOREIDCARD_H_

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
                * Singapore ID Card
                */
                class SingaporeIDCard : public AbstractModel
                {
                public:
                    SingaporeIDCard();
                    ~SingaporeIDCard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Chinese name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ChName Chinese name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetChName() const;

                    /**
                     * 设置Chinese name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _chName Chinese name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetChName(const std::string& _chName);

                    /**
                     * 判断参数 ChName 是否已赋值
                     * @return ChName 是否已赋值
                     * @deprecated
                     */
                    bool ChNameHasBeenSet() const;

                    /**
                     * 获取Chinese name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ChineseName Chinese name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetChineseName() const;

                    /**
                     * 设置Chinese name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _chineseName Chinese name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetChineseName(const std::string& _chineseName);

                    /**
                     * 判断参数 ChineseName 是否已赋值
                     * @return ChineseName 是否已赋值
                     * 
                     */
                    bool ChineseNameHasBeenSet() const;

                    /**
                     * 获取English name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnName English name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetEnName() const;

                    /**
                     * 设置English name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enName English name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetEnName(const std::string& _enName);

                    /**
                     * 判断参数 EnName 是否已赋值
                     * @return EnName 是否已赋值
                     * @deprecated
                     */
                    bool EnNameHasBeenSet() const;

                    /**
                     * 获取English name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FullName English name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFullName() const;

                    /**
                     * 设置English name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fullName English name
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
                     * 获取License number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ID License number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetID() const;

                    /**
                     * 设置License number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _iD License number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * @deprecated
                     */
                    bool IDHasBeenSet() const;

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
                     * 获取Gender
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Sex Gender
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置Gender
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sex Gender
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
                     * 获取Country of birth
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CountryOfBirth Country of birth
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetCountryOfBirth() const;

                    /**
                     * 设置Country of birth
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _countryOfBirth Country of birth
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetCountryOfBirth(const std::string& _countryOfBirth);

                    /**
                     * 判断参数 CountryOfBirth 是否已赋值
                     * @return CountryOfBirth 是否已赋值
                     * @deprecated
                     */
                    bool CountryOfBirthHasBeenSet() const;

                    /**
                     * 获取Nationality
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Nationality Nationality
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNationality() const;

                    /**
                     * 设置Nationality
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nationality Nationality
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Address (on the back)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Address Address (on the back)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置Address (on the back)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _address Address (on the back)
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Race (on the back)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Race Race (on the back)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRace() const;

                    /**
                     * 设置Race (on the back)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _race Race (on the back)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRace(const std::string& _race);

                    /**
                     * 判断参数 Race 是否已赋值
                     * @return Race 是否已赋值
                     * 
                     */
                    bool RaceHasBeenSet() const;

                    /**
                     * 获取 NRIC number (on the back)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NRICCode  NRIC number (on the back)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNRICCode() const;

                    /**
                     * 设置 NRIC number (on the back)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nRICCode  NRIC number (on the back)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNRICCode(const std::string& _nRICCode);

                    /**
                     * 判断参数 NRICCode 是否已赋值
                     * @return NRICCode 是否已赋值
                     * 
                     */
                    bool NRICCodeHasBeenSet() const;

                    /**
                     * 获取Post number (on the front)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PostCode Post number (on the front)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPostCode() const;

                    /**
                     * 设置Post number (on the front)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _postCode Post number (on the front)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPostCode(const std::string& _postCode);

                    /**
                     * 判断参数 PostCode 是否已赋值
                     * @return PostCode 是否已赋值
                     * 
                     */
                    bool PostCodeHasBeenSet() const;

                    /**
                     * 获取Date of expiry (on the back)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DateOfExpiration Date of expiry (on the back)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDateOfExpiration() const;

                    /**
                     * 设置Date of expiry (on the back)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dateOfExpiration Date of expiry (on the back)
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
                     * 获取Date of issue (on the back)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DateOfIssue Date of issue (on the back)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDateOfIssue() const;

                    /**
                     * 设置Date of issue (on the back)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dateOfIssue Date of issue (on the back)
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

                private:

                    /**
                     * Chinese name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_chName;
                    bool m_chNameHasBeenSet;

                    /**
                     * Chinese name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_chineseName;
                    bool m_chineseNameHasBeenSet;

                    /**
                     * English name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_enName;
                    bool m_enNameHasBeenSet;

                    /**
                     * English name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * License number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * License number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_licenseNumber;
                    bool m_licenseNumberHasBeenSet;

                    /**
                     * Gender
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Country of birth
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_countryOfBirth;
                    bool m_countryOfBirthHasBeenSet;

                    /**
                     * Nationality
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * Address (on the back)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * Race (on the back)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_race;
                    bool m_raceHasBeenSet;

                    /**
                     *  NRIC number (on the back)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nRICCode;
                    bool m_nRICCodeHasBeenSet;

                    /**
                     * Post number (on the front)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_postCode;
                    bool m_postCodeHasBeenSet;

                    /**
                     * Date of expiry (on the back)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dateOfExpiration;
                    bool m_dateOfExpirationHasBeenSet;

                    /**
                     * Date of issue (on the back)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dateOfIssue;
                    bool m_dateOfIssueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_SINGAPOREIDCARD_H_
