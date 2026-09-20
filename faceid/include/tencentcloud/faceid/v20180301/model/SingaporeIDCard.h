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
                * Singapore ID card
                */
                class SingaporeIDCard : public AbstractModel
                {
                public:
                    SingaporeIDCard();
                    ~SingaporeIDCard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Chinese Name
                     * @return ChName Chinese Name
                     * @deprecated
                     */
                    std::string GetChName() const;

                    /**
                     * 设置Chinese Name
                     * @param _chName Chinese Name
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
                     * 获取Chinese Name
                     * @return ChineseName Chinese Name
                     * 
                     */
                    std::string GetChineseName() const;

                    /**
                     * 设置Chinese Name
                     * @param _chineseName Chinese Name
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
                     * @return EnName English name
                     * @deprecated
                     */
                    std::string GetEnName() const;

                    /**
                     * 设置English name
                     * @param _enName English name
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
                     * @return FullName English name
                     * 
                     */
                    std::string GetFullName() const;

                    /**
                     * 设置English name
                     * @param _fullName English name
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
                     * 获取Identity card number
                     * @return ID Identity card number
                     * @deprecated
                     */
                    std::string GetID() const;

                    /**
                     * 设置Identity card number
                     * @param _iD Identity card number
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
                     * 获取Country of birth
                     * @return CountryOfBirth Country of birth
                     * @deprecated
                     */
                    std::string GetCountryOfBirth() const;

                    /**
                     * 设置Country of birth
                     * @param _countryOfBirth Country of birth
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
                     * 获取Country of birth
                     * @return Nationality Country of birth
                     * 
                     */
                    std::string GetNationality() const;

                    /**
                     * 设置Country of birth
                     * @param _nationality Country of birth
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
                     * 获取Address (back field)
                     * @return Address Address (back field)
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置Address (back field)
                     * @param _address Address (back field)
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
                     * 获取Nationality (back field)
                     * @return Race Nationality (back field)
                     * 
                     */
                    std::string GetRace() const;

                    /**
                     * 设置Nationality (back field)
                     * @param _race Nationality (back field)
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
                     * 获取Nric number (back field)
                     * @return NRICCode Nric number (back field)
                     * 
                     */
                    std::string GetNRICCode() const;

                    /**
                     * 设置Nric number (back field)
                     * @param _nRICCode Nric number (back field)
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
                     * 获取Post number (back field)
                     * @return PostCode Post number (back field)
                     * 
                     */
                    std::string GetPostCode() const;

                    /**
                     * 设置Post number (back field)
                     * @param _postCode Post number (back field)
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
                     * 获取Expires on (back field)
                     * @return DateOfExpiration Expires on (back field)
                     * 
                     */
                    std::string GetDateOfExpiration() const;

                    /**
                     * 设置Expires on (back field)
                     * @param _dateOfExpiration Expires on (back field)
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
                     * 获取Issue date (field on the back)
                     * @return DateOfIssue Issue date (field on the back)
                     * 
                     */
                    std::string GetDateOfIssue() const;

                    /**
                     * 设置Issue date (field on the back)
                     * @param _dateOfIssue Issue date (field on the back)
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
                     * Chinese Name
                     */
                    std::string m_chName;
                    bool m_chNameHasBeenSet;

                    /**
                     * Chinese Name
                     */
                    std::string m_chineseName;
                    bool m_chineseNameHasBeenSet;

                    /**
                     * English name
                     */
                    std::string m_enName;
                    bool m_enNameHasBeenSet;

                    /**
                     * English name
                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * Identity card number
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

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
                     * Country of birth
                     */
                    std::string m_countryOfBirth;
                    bool m_countryOfBirthHasBeenSet;

                    /**
                     * Country of birth
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * Birthday
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * Address (back field)
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * Nationality (back field)
                     */
                    std::string m_race;
                    bool m_raceHasBeenSet;

                    /**
                     * Nric number (back field)
                     */
                    std::string m_nRICCode;
                    bool m_nRICCodeHasBeenSet;

                    /**
                     * Post number (back field)
                     */
                    std::string m_postCode;
                    bool m_postCodeHasBeenSet;

                    /**
                     * Expires on (back field)
                     */
                    std::string m_dateOfExpiration;
                    bool m_dateOfExpirationHasBeenSet;

                    /**
                     * Issue date (field on the back)
                     */
                    std::string m_dateOfIssue;
                    bool m_dateOfIssueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_SINGAPOREIDCARD_H_
