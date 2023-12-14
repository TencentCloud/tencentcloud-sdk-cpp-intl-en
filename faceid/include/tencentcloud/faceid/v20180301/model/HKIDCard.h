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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_HKIDCARD_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_HKIDCARD_H_

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
                * Hong Kong ID card.
                */
                class HKIDCard : public AbstractModel
                {
                public:
                    HKIDCard();
                    ~HKIDCard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return CnName 
                     * 
                     */
                    std::string GetCnName() const;

                    /**
                     * 设置
                     * @param _cnName 
                     * 
                     */
                    void SetCnName(const std::string& _cnName);

                    /**
                     * 判断参数 CnName 是否已赋值
                     * @return CnName 是否已赋值
                     * 
                     */
                    bool CnNameHasBeenSet() const;

                    /**
                     * 获取English name
Note: This field may return null, indicating that no valid values can be obtained.
Example: SAN, Nan
                     * @return EnName English name
Note: This field may return null, indicating that no valid values can be obtained.
Example: SAN, Nan
                     * 
                     */
                    std::string GetEnName() const;

                    /**
                     * 设置English name
Note: This field may return null, indicating that no valid values can be obtained.
Example: SAN, Nan
                     * @param _enName English name
Note: This field may return null, indicating that no valid values can be obtained.
Example: SAN, Nan
                     * 
                     */
                    void SetEnName(const std::string& _enName);

                    /**
                     * 判断参数 EnName 是否已赋值
                     * @return EnName 是否已赋值
                     * 
                     */
                    bool EnNameHasBeenSet() const;

                    /**
                     * 获取Telex code correspondint to the Chinese name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TelexCode Telex code correspondint to the Chinese name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTelexCode() const;

                    /**
                     * 设置Telex code correspondint to the Chinese name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _telexCode Telex code correspondint to the Chinese name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTelexCode(const std::string& _telexCode);

                    /**
                     * 判断参数 TelexCode 是否已赋值
                     * @return TelexCode 是否已赋值
                     * 
                     */
                    bool TelexCodeHasBeenSet() const;

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
                     * @return IdNum ID card number
Note: This field may return null, indicating that no valid values can be obtained.
Example: C000000(E)
                     * 
                     */
                    std::string GetIdNum() const;

                    /**
                     * 设置ID card number
Note: This field may return null, indicating that no valid values can be obtained.
Example: C000000(E)
                     * @param _idNum ID card number
Note: This field may return null, indicating that no valid values can be obtained.
Example: C000000(E)
                     * 
                     */
                    void SetIdNum(const std::string& _idNum);

                    /**
                     * 判断参数 IdNum 是否已赋值
                     * @return IdNum 是否已赋值
                     * 
                     */
                    bool IdNumHasBeenSet() const;

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
                     * @return FirstIssueDate The first date of issue
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFirstIssueDate() const;

                    /**
                     * 设置The first date of issue
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _firstIssueDate The first date of issue
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFirstIssueDate(const std::string& _firstIssueDate);

                    /**
                     * 判断参数 FirstIssueDate 是否已赋值
                     * @return FirstIssueDate 是否已赋值
                     * 
                     */
                    bool FirstIssueDateHasBeenSet() const;

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

                private:

                    /**
                     * 
                     */
                    std::string m_cnName;
                    bool m_cnNameHasBeenSet;

                    /**
                     * English name
Note: This field may return null, indicating that no valid values can be obtained.
Example: SAN, Nan
                     */
                    std::string m_enName;
                    bool m_enNameHasBeenSet;

                    /**
                     * Telex code correspondint to the Chinese name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_telexCode;
                    bool m_telexCodeHasBeenSet;

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
                    std::string m_idNum;
                    bool m_idNumHasBeenSet;

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
                    std::string m_firstIssueDate;
                    bool m_firstIssueDateHasBeenSet;

                    /**
                     * The current date of issue
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_currentIssueDate;
                    bool m_currentIssueDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_HKIDCARD_H_
