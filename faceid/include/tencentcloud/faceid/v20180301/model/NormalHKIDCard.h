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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_NORMALHKIDCARD_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_NORMALHKIDCARD_H_

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
                * Hong Kong identity card (mapped field result)
                */
                class NormalHKIDCard : public AbstractModel
                {
                public:
                    NormalHKIDCard();
                    ~NormalHKIDCard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Chinese name
                     * @return ChineseName Chinese name
                     * 
                     */
                    std::string GetChineseName() const;

                    /**
                     * 设置Chinese name
                     * @param _chineseName Chinese name
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
                     * 获取Chinese telegraph code corresponding to the Chinese name
                     * @return RegistrationNumber Chinese telegraph code corresponding to the Chinese name
                     * 
                     */
                    std::string GetRegistrationNumber() const;

                    /**
                     * 设置Chinese telegraph code corresponding to the Chinese name
                     * @param _registrationNumber Chinese telegraph code corresponding to the Chinese name
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
                     * 获取Gender: "M" (male) or "F" (female).
                     * @return Sex Gender: "M" (male) or "F" (female).
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置Gender: "M" (male) or "F" (female).
                     * @param _sex Gender: "M" (male) or "F" (female).
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
                     * 获取Date of birth
                     * @return Birthday Date of birth
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 设置Date of birth
                     * @param _birthday Date of birth
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
                     * 获取Permanent resident ID card: 0: non-permanent; 1: permanent; -1: unknown
                     * @return Permanent Permanent resident ID card: 0: non-permanent; 1: permanent; -1: unknown
                     * 
                     */
                    std::string GetPermanent() const;

                    /**
                     * 设置Permanent resident ID card: 0: non-permanent; 1: permanent; -1: unknown
                     * @param _permanent Permanent resident ID card: 0: non-permanent; 1: permanent; -1: unknown
                     * 
                     */
                    void SetPermanent(const std::string& _permanent);

                    /**
                     * 判断参数 Permanent 是否已赋值
                     * @return Permanent 是否已赋值
                     * 
                     */
                    bool PermanentHasBeenSet() const;

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
                     * 获取Document symbol, the symbol under the date of birth, for example, "***AZ"
                     * @return Symbol Document symbol, the symbol under the date of birth, for example, "***AZ"
                     * 
                     */
                    std::string GetSymbol() const;

                    /**
                     * 设置Document symbol, the symbol under the date of birth, for example, "***AZ"
                     * @param _symbol Document symbol, the symbol under the date of birth, for example, "***AZ"
                     * 
                     */
                    void SetSymbol(const std::string& _symbol);

                    /**
                     * 判断参数 Symbol 是否已赋值
                     * @return Symbol 是否已赋值
                     * 
                     */
                    bool SymbolHasBeenSet() const;

                    /**
                     * 获取Date of first issue
                     * @return IssuedDate Date of first issue
                     * 
                     */
                    std::string GetIssuedDate() const;

                    /**
                     * 设置Date of first issue
                     * @param _issuedDate Date of first issue
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
                     * 获取Most recent date of issue
                     * @return CurrentIssueDate Most recent date of issue
                     * 
                     */
                    std::string GetCurrentIssueDate() const;

                    /**
                     * 设置Most recent date of issue
                     * @param _currentIssueDate Most recent date of issue
                     * 
                     */
                    void SetCurrentIssueDate(const std::string& _currentIssueDate);

                    /**
                     * 判断参数 CurrentIssueDate 是否已赋值
                     * @return CurrentIssueDate 是否已赋值
                     * 
                     */
                    bool CurrentIssueDateHasBeenSet() const;

                    /**
                     * 获取Hong Kong identity card version. HKID-2003: 2003 edition identity card. HKID-2018: 2018 edition identity card.
                     * @return HKIDVersion Hong Kong identity card version. HKID-2003: 2003 edition identity card. HKID-2018: 2018 edition identity card.
                     * 
                     */
                    std::string GetHKIDVersion() const;

                    /**
                     * 设置Hong Kong identity card version. HKID-2003: 2003 edition identity card. HKID-2018: 2018 edition identity card.
                     * @param _hKIDVersion Hong Kong identity card version. HKID-2003: 2003 edition identity card. HKID-2018: 2018 edition identity card.
                     * 
                     */
                    void SetHKIDVersion(const std::string& _hKIDVersion);

                    /**
                     * 判断参数 HKIDVersion 是否已赋值
                     * @return HKIDVersion 是否已赋值
                     * 
                     */
                    bool HKIDVersionHasBeenSet() const;

                private:

                    /**
                     * Chinese name
                     */
                    std::string m_chineseName;
                    bool m_chineseNameHasBeenSet;

                    /**
                     * English name
                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * Chinese telegraph code corresponding to the Chinese name
                     */
                    std::string m_registrationNumber;
                    bool m_registrationNumberHasBeenSet;

                    /**
                     * Gender: "M" (male) or "F" (female).
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Date of birth
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * Permanent resident ID card: 0: non-permanent; 1: permanent; -1: unknown
                     */
                    std::string m_permanent;
                    bool m_permanentHasBeenSet;

                    /**
                     * Identity number
                     */
                    std::string m_licenseNumber;
                    bool m_licenseNumberHasBeenSet;

                    /**
                     * Document symbol, the symbol under the date of birth, for example, "***AZ"
                     */
                    std::string m_symbol;
                    bool m_symbolHasBeenSet;

                    /**
                     * Date of first issue
                     */
                    std::string m_issuedDate;
                    bool m_issuedDateHasBeenSet;

                    /**
                     * Most recent date of issue
                     */
                    std::string m_currentIssueDate;
                    bool m_currentIssueDateHasBeenSet;

                    /**
                     * Hong Kong identity card version. HKID-2003: 2003 edition identity card. HKID-2018: 2018 edition identity card.
                     */
                    std::string m_hKIDVersion;
                    bool m_hKIDVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_NORMALHKIDCARD_H_
