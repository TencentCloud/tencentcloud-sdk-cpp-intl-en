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
                     * 获取Chinese last name
                     * @return CnLastName Chinese last name
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
                     * 获取English last name
                     * @return EnLastName English last name
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
                     * 获取Last name code
                     * @return LastNameCode Last name code
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
                     * 获取Chinese first name
                     * @return CnFirstName Chinese first name
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
                     * 获取English first name
                     * @return EnFirstName English first name
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
                     * 获取First name code
                     * @return FirstNameCode First name code
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
                     * 获取ID Number
                     * @return ID ID Number
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
                     * 获取Birthday(DD-MM-YYYY)
                     * @return Birthday Birthday(DD-MM-YYYY)
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
                     * 获取gender
                     * @return Sex gender
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
                     * 获取First issue Date (DD-MM-YYYY)
                     * @return FirstIssueDate First issue Date (DD-MM-YYYY)
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
                     * 获取Issue date (DD-MM-YYYY)
                     * @return CurrentIssueDate Issue date (DD-MM-YYYY)
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
                     * 获取ID symbol
                     * @return Symbol ID symbol
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
                     * 获取Image rotation angle, the horizontal direction of the text is 0, clockwise is positive, counterclockwise is negative
                     * @return Angle Image rotation angle, the horizontal direction of the text is 0, clockwise is positive, counterclockwise is negative
                     * 
                     */
                    std::string GetAngle() const;

                    /**
                     * 判断参数 Angle 是否已赋值
                     * @return Angle 是否已赋值
                     * 
                     */
                    bool AngleHasBeenSet() const;

                private:

                    /**
                     * Chinese last name
                     */
                    std::string m_cnLastName;
                    bool m_cnLastNameHasBeenSet;

                    /**
                     * English last name
                     */
                    std::string m_enLastName;
                    bool m_enLastNameHasBeenSet;

                    /**
                     * Last name code
                     */
                    std::string m_lastNameCode;
                    bool m_lastNameCodeHasBeenSet;

                    /**
                     * Chinese first name
                     */
                    std::string m_cnFirstName;
                    bool m_cnFirstNameHasBeenSet;

                    /**
                     * English first name
                     */
                    std::string m_enFirstName;
                    bool m_enFirstNameHasBeenSet;

                    /**
                     * First name code
                     */
                    std::string m_firstNameCode;
                    bool m_firstNameCodeHasBeenSet;

                    /**
                     * ID Number
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Birthday(DD-MM-YYYY)
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * gender
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * First issue Date (DD-MM-YYYY)
                     */
                    std::string m_firstIssueDate;
                    bool m_firstIssueDateHasBeenSet;

                    /**
                     * Issue date (DD-MM-YYYY)
                     */
                    std::string m_currentIssueDate;
                    bool m_currentIssueDateHasBeenSet;

                    /**
                     * Validity period (DD-MM-YYYY)
                     */
                    std::string m_validityPeriod;
                    bool m_validityPeriodHasBeenSet;

                    /**
                     * ID symbol
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
                     * Image rotation angle, the horizontal direction of the text is 0, clockwise is positive, counterclockwise is negative
                     */
                    std::string m_angle;
                    bool m_angleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEMACAOIDCARDOCRRESPONSE_H_
