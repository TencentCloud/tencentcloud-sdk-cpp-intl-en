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
                * Hong Kong identity card
                */
                class HKIDCard : public AbstractModel
                {
                public:
                    HKIDCard();
                    ~HKIDCard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Chinese name
                     * @return CnName Chinese name
                     * 
                     */
                    std::string GetCnName() const;

                    /**
                     * 设置Chinese name
                     * @param _cnName Chinese name
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
                     * @return EnName English name
                     * 
                     */
                    std::string GetEnName() const;

                    /**
                     * 设置English name
                     * @param _enName English name
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
                     * 获取Chinese name telegraph code
                     * @return TelexCode Chinese name telegraph code
                     * 
                     */
                    std::string GetTelexCode() const;

                    /**
                     * 设置Chinese name telegraph code
                     * @param _telexCode Chinese name telegraph code
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
                     * 获取Gender: "M" (male) or "F" (female)
                     * @return Sex Gender: "M" (male) or "F" (female)
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置Gender: "M" (male) or "F" (female)
                     * @param _sex Gender: "M" (male) or "F" (female)
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
                     * @return IdNum Identity number
                     * 
                     */
                    std::string GetIdNum() const;

                    /**
                     * 设置Identity number
                     * @param _idNum Identity number
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
                     * 获取Document symbol, the symbol below the date of birth, for example, "***AZ"
                     * @return Symbol Document symbol, the symbol below the date of birth, for example, "***AZ"
                     * 
                     */
                    std::string GetSymbol() const;

                    /**
                     * 设置Document symbol, the symbol below the date of birth, for example, "***AZ"
                     * @param _symbol Document symbol, the symbol below the date of birth, for example, "***AZ"
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
                     * @return FirstIssueDate Date of first issue
                     * 
                     */
                    std::string GetFirstIssueDate() const;

                    /**
                     * 设置Date of first issue
                     * @param _firstIssueDate Date of first issue
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

                private:

                    /**
                     * Chinese name
                     */
                    std::string m_cnName;
                    bool m_cnNameHasBeenSet;

                    /**
                     * English name
                     */
                    std::string m_enName;
                    bool m_enNameHasBeenSet;

                    /**
                     * Chinese name telegraph code
                     */
                    std::string m_telexCode;
                    bool m_telexCodeHasBeenSet;

                    /**
                     * Gender: "M" (male) or "F" (female)
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
                    std::string m_idNum;
                    bool m_idNumHasBeenSet;

                    /**
                     * Document symbol, the symbol below the date of birth, for example, "***AZ"
                     */
                    std::string m_symbol;
                    bool m_symbolHasBeenSet;

                    /**
                     * Date of first issue
                     */
                    std::string m_firstIssueDate;
                    bool m_firstIssueDateHasBeenSet;

                    /**
                     * Most recent date of issue
                     */
                    std::string m_currentIssueDate;
                    bool m_currentIssueDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_HKIDCARD_H_
