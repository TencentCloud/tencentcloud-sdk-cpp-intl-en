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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEMACAOIDCARDOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEMACAOIDCARDOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * RecognizeMacaoIDCardOCR response structure.
                */
                class RecognizeMacaoIDCardOCRResponse : public AbstractModel
                {
                public:
                    RecognizeMacaoIDCardOCRResponse();
                    ~RecognizeMacaoIDCardOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Last name in Chinese
                     * @return CnLastName Last name in Chinese
                     * 
                     */
                    std::string GetCnLastName() const;

                    /**
                     * 判断参数 CnLastName 是否已赋值
                     * @return CnLastName 是否已赋值
                     * 
                     */
                    bool CnLastNameHasBeenSet() const;

                    /**
                     * 获取Last name in English
                     * @return EnLastName Last name in English
                     * 
                     */
                    std::string GetEnLastName() const;

                    /**
                     * 判断参数 EnLastName 是否已赋值
                     * @return EnLastName 是否已赋值
                     * 
                     */
                    bool EnLastNameHasBeenSet() const;

                    /**
                     * 获取Telecode of the last name in Chinese
                     * @return LastNameCode Telecode of the last name in Chinese
                     * 
                     */
                    std::string GetLastNameCode() const;

                    /**
                     * 判断参数 LastNameCode 是否已赋值
                     * @return LastNameCode 是否已赋值
                     * 
                     */
                    bool LastNameCodeHasBeenSet() const;

                    /**
                     * 获取First name in Chinese
                     * @return CnFirstName First name in Chinese
                     * 
                     */
                    std::string GetCnFirstName() const;

                    /**
                     * 判断参数 CnFirstName 是否已赋值
                     * @return CnFirstName 是否已赋值
                     * 
                     */
                    bool CnFirstNameHasBeenSet() const;

                    /**
                     * 获取First name in English
                     * @return EnFirstName First name in English
                     * 
                     */
                    std::string GetEnFirstName() const;

                    /**
                     * 判断参数 EnFirstName 是否已赋值
                     * @return EnFirstName 是否已赋值
                     * 
                     */
                    bool EnFirstNameHasBeenSet() const;

                    /**
                     * 获取Telecode of the first name in Chinese
                     * @return FirstNameCode Telecode of the first name in Chinese
                     * 
                     */
                    std::string GetFirstNameCode() const;

                    /**
                     * 判断参数 FirstNameCode 是否已赋值
                     * @return FirstNameCode 是否已赋值
                     * 
                     */
                    bool FirstNameCodeHasBeenSet() const;

                    /**
                     * 获取Identity card number
                     * @return ID Identity card number
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Date of birth (DD-MM-YYYY)
                     * @return Birthday Date of birth (DD-MM-YYYY)
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 判断参数 Birthday 是否已赋值
                     * @return Birthday 是否已赋值
                     * 
                     */
                    bool BirthdayHasBeenSet() const;

                    /**
                     * 获取Gender
                     * @return Sex Gender
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 判断参数 Sex 是否已赋值
                     * @return Sex 是否已赋值
                     * 
                     */
                    bool SexHasBeenSet() const;

                    /**
                     * 获取Date of first issue (DD-MM-YYYY)
                     * @return FirstIssueDate Date of first issue (DD-MM-YYYY)
                     * 
                     */
                    std::string GetFirstIssueDate() const;

                    /**
                     * 判断参数 FirstIssueDate 是否已赋值
                     * @return FirstIssueDate 是否已赋值
                     * 
                     */
                    bool FirstIssueDateHasBeenSet() const;

                    /**
                     * 获取Date of issue (DD-MM-YYYY)
                     * @return CurrentIssueDate Date of issue (DD-MM-YYYY)
                     * 
                     */
                    std::string GetCurrentIssueDate() const;

                    /**
                     * 判断参数 CurrentIssueDate 是否已赋值
                     * @return CurrentIssueDate 是否已赋值
                     * 
                     */
                    bool CurrentIssueDateHasBeenSet() const;

                    /**
                     * 获取Validity period (DD-MM-YYYY)
                     * @return ValidityPeriod Validity period (DD-MM-YYYY)
                     * 
                     */
                    std::string GetValidityPeriod() const;

                    /**
                     * 判断参数 ValidityPeriod 是否已赋值
                     * @return ValidityPeriod 是否已赋值
                     * 
                     */
                    bool ValidityPeriodHasBeenSet() const;

                    /**
                     * 获取Document symbol
                     * @return Symbol Document symbol
                     * 
                     */
                    std::string GetSymbol() const;

                    /**
                     * 判断参数 Symbol 是否已赋值
                     * @return Symbol 是否已赋值
                     * 
                     */
                    bool SymbolHasBeenSet() const;

                    /**
                     * 获取Height (unit: meters)
                     * @return Height Height (unit: meters)
                     * 
                     */
                    std::string GetHeight() const;

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Processed image (Base64)
                     * @return RetImage Processed image (Base64)
                     * 
                     */
                    std::string GetRetImage() const;

                    /**
                     * 判断参数 RetImage 是否已赋值
                     * @return RetImage 是否已赋值
                     * 
                     */
                    bool RetImageHasBeenSet() const;

                    /**
                     * 获取This field is deprecated and will always return null. Usage is not recommended.
                     * @return Angle This field is deprecated and will always return null. Usage is not recommended.
                     * @deprecated
                     */
                    std::string GetAngle() const;

                    /**
                     * 判断参数 Angle 是否已赋值
                     * @return Angle 是否已赋值
                     * @deprecated
                     */
                    bool AngleHasBeenSet() const;

                    /**
                     * 获取Resident type. 
Valid values: Permanent Resident Identity Card, Non-permanent Resident Identity Card.
                     * @return ResidentType Resident type. 
Valid values: Permanent Resident Identity Card, Non-permanent Resident Identity Card.
                     * 
                     */
                    std::string GetResidentType() const;

                    /**
                     * 判断参数 ResidentType 是否已赋值
                     * @return ResidentType 是否已赋值
                     * 
                     */
                    bool ResidentTypeHasBeenSet() const;

                    /**
                     * 获取Card Warning Information

-9101 Alarm for covered certificate,
-9102 Alarm for photocopied certificate,
-9103 Alarm for photographed certificate,
-9104 Alarm for PS certificate,
-9107 Alarm for reflective certificate,
-9108 Alarm for blurry image,
-9109 This capability is not enabled.
                     * @return WarnCardInfos Card Warning Information

-9101 Alarm for covered certificate,
-9102 Alarm for photocopied certificate,
-9103 Alarm for photographed certificate,
-9104 Alarm for PS certificate,
-9107 Alarm for reflective certificate,
-9108 Alarm for blurry image,
-9109 This capability is not enabled.
                     * 
                     */
                    std::vector<int64_t> GetWarnCardInfos() const;

                    /**
                     * 判断参数 WarnCardInfos 是否已赋值
                     * @return WarnCardInfos 是否已赋值
                     * 
                     */
                    bool WarnCardInfosHasBeenSet() const;

                private:

                    /**
                     * Last name in Chinese
                     */
                    std::string m_cnLastName;
                    bool m_cnLastNameHasBeenSet;

                    /**
                     * Last name in English
                     */
                    std::string m_enLastName;
                    bool m_enLastNameHasBeenSet;

                    /**
                     * Telecode of the last name in Chinese
                     */
                    std::string m_lastNameCode;
                    bool m_lastNameCodeHasBeenSet;

                    /**
                     * First name in Chinese
                     */
                    std::string m_cnFirstName;
                    bool m_cnFirstNameHasBeenSet;

                    /**
                     * First name in English
                     */
                    std::string m_enFirstName;
                    bool m_enFirstNameHasBeenSet;

                    /**
                     * Telecode of the first name in Chinese
                     */
                    std::string m_firstNameCode;
                    bool m_firstNameCodeHasBeenSet;

                    /**
                     * Identity card number
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Date of birth (DD-MM-YYYY)
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * Gender
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Date of first issue (DD-MM-YYYY)
                     */
                    std::string m_firstIssueDate;
                    bool m_firstIssueDateHasBeenSet;

                    /**
                     * Date of issue (DD-MM-YYYY)
                     */
                    std::string m_currentIssueDate;
                    bool m_currentIssueDateHasBeenSet;

                    /**
                     * Validity period (DD-MM-YYYY)
                     */
                    std::string m_validityPeriod;
                    bool m_validityPeriodHasBeenSet;

                    /**
                     * Document symbol
                     */
                    std::string m_symbol;
                    bool m_symbolHasBeenSet;

                    /**
                     * Height (unit: meters)
                     */
                    std::string m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Processed image (Base64)
                     */
                    std::string m_retImage;
                    bool m_retImageHasBeenSet;

                    /**
                     * This field is deprecated and will always return null. Usage is not recommended.
                     */
                    std::string m_angle;
                    bool m_angleHasBeenSet;

                    /**
                     * Resident type. 
Valid values: Permanent Resident Identity Card, Non-permanent Resident Identity Card.
                     */
                    std::string m_residentType;
                    bool m_residentTypeHasBeenSet;

                    /**
                     * Card Warning Information

-9101 Alarm for covered certificate,
-9102 Alarm for photocopied certificate,
-9103 Alarm for photographed certificate,
-9104 Alarm for PS certificate,
-9107 Alarm for reflective certificate,
-9108 Alarm for blurry image,
-9109 This capability is not enabled.
                     */
                    std::vector<int64_t> m_warnCardInfos;
                    bool m_warnCardInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEMACAOIDCARDOCRRESPONSE_H_
