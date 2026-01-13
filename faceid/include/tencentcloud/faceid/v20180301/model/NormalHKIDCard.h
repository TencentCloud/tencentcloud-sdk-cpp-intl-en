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
                * Hong Kong (China) ID card.
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
Example: SAN, Nan
                     * @return FullName English name
Note: This field may return null, indicating that no valid values can be obtained.
Example: SAN, Nan
                     * 
                     */
                    std::string GetFullName() const;

                    /**
                     * 设置English name
Note: This field may return null, indicating that no valid values can be obtained.
Example: SAN, Nan
                     * @param _fullName English name
Note: This field may return null, indicating that no valid values can be obtained.
Example: SAN, Nan
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
                     * 获取Telex code correspondint to the Chinese name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegistrationNumber Telex code correspondint to the Chinese name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegistrationNumber() const;

                    /**
                     * 设置Telex code correspondint to the Chinese name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _registrationNumber Telex code correspondint to the Chinese name
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
                     * 获取Gender: "Male-M" or "Female-F"
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Sex Gender: "Male-M" or "Female-F"
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置Gender: "Male-M" or "Female-F"
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sex Gender: "Male-M" or "Female-F"
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
                     * 获取Birthday
Note: This field may return null, indicating that no valid values can be obtained.
Example: 01-01-2001
                     * @return Birthday Birthday
Note: This field may return null, indicating that no valid values can be obtained.
Example: 01-01-2001
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 设置Birthday
Note: This field may return null, indicating that no valid values can be obtained.
Example: 01-01-2001
                     * @param _birthday Birthday
Note: This field may return null, indicating that no valid values can be obtained.
Example: 01-01-2001
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
                     * 获取Permanent resident ID card: 0-non-permanent; 1-permanent; -1-unknown
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Permanent Permanent resident ID card: 0-non-permanent; 1-permanent; -1-unknown
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPermanent() const;

                    /**
                     * 设置Permanent resident ID card: 0-non-permanent; 1-permanent; -1-unknown
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _permanent Permanent resident ID card: 0-non-permanent; 1-permanent; -1-unknown
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取ID card number
Note: This field may return null, indicating that no valid values can be obtained.
Example: C000000(E)
                     * @return LicenseNumber ID card number
Note: This field may return null, indicating that no valid values can be obtained.
Example: C000000(E)
                     * 
                     */
                    std::string GetLicenseNumber() const;

                    /**
                     * 设置ID card number
Note: This field may return null, indicating that no valid values can be obtained.
Example: C000000(E)
                     * @param _licenseNumber ID card number
Note: This field may return null, indicating that no valid values can be obtained.
Example: C000000(E)
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
                     * 获取Lisence symbol, which is the symbol below Birthday. Example: "***AZ"
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Symbol Lisence symbol, which is the symbol below Birthday. Example: "***AZ"
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSymbol() const;

                    /**
                     * 设置Lisence symbol, which is the symbol below Birthday. Example: "***AZ"
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _symbol Lisence symbol, which is the symbol below Birthday. Example: "***AZ"
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The first date of issue
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IssuedDate The first date of issue
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIssuedDate() const;

                    /**
                     * 设置The first date of issue
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _issuedDate The first date of issue
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
                     * 获取The current date of issue
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CurrentIssueDate The current date of issue
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCurrentIssueDate() const;

                    /**
                     * 设置The current date of issue
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _currentIssueDate The current date of issue
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Hong kong identity card version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HKIDVersion Hong kong identity card version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHKIDVersion() const;

                    /**
                     * 设置Hong kong identity card version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hKIDVersion Hong kong identity card version.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.

                     */
                    std::string m_chineseName;
                    bool m_chineseNameHasBeenSet;

                    /**
                     * English name
Note: This field may return null, indicating that no valid values can be obtained.
Example: SAN, Nan
                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * Telex code correspondint to the Chinese name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_registrationNumber;
                    bool m_registrationNumberHasBeenSet;

                    /**
                     * Gender: "Male-M" or "Female-F"
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Birthday
Note: This field may return null, indicating that no valid values can be obtained.
Example: 01-01-2001
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * Permanent resident ID card: 0-non-permanent; 1-permanent; -1-unknown
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_permanent;
                    bool m_permanentHasBeenSet;

                    /**
                     * ID card number
Note: This field may return null, indicating that no valid values can be obtained.
Example: C000000(E)
                     */
                    std::string m_licenseNumber;
                    bool m_licenseNumberHasBeenSet;

                    /**
                     * Lisence symbol, which is the symbol below Birthday. Example: "***AZ"
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_symbol;
                    bool m_symbolHasBeenSet;

                    /**
                     * The first date of issue
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_issuedDate;
                    bool m_issuedDateHasBeenSet;

                    /**
                     * The current date of issue
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_currentIssueDate;
                    bool m_currentIssueDateHasBeenSet;

                    /**
                     * Hong kong identity card version.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hKIDVersion;
                    bool m_hKIDVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_NORMALHKIDCARD_H_
