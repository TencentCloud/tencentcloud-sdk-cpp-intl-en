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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_MEDICALINVOICE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_MEDICALINVOICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 
                */
                class MedicalInvoice : public AbstractModel
                {
                public:
                    MedicalInvoice();
                    ~MedicalInvoice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Title 
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置
                     * @param _title 
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取
                     * @return Code 
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置
                     * @param _code 
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Number 
                     * 
                     */
                    std::string GetNumber() const;

                    /**
                     * 设置
                     * @param _number 
                     * 
                     */
                    void SetNumber(const std::string& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取
                     * @return Total 
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置
                     * @param _total 
                     * 
                     */
                    void SetTotal(const std::string& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取
                     * @return TotalCn 
                     * 
                     */
                    std::string GetTotalCn() const;

                    /**
                     * 设置
                     * @param _totalCn 
                     * 
                     */
                    void SetTotalCn(const std::string& _totalCn);

                    /**
                     * 判断参数 TotalCn 是否已赋值
                     * @return TotalCn 是否已赋值
                     * 
                     */
                    bool TotalCnHasBeenSet() const;

                    /**
                     * 获取
                     * @return Date 
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置
                     * @param _date 
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取
                     * @return CheckCode 
                     * 
                     */
                    std::string GetCheckCode() const;

                    /**
                     * 设置
                     * @param _checkCode 
                     * 
                     */
                    void SetCheckCode(const std::string& _checkCode);

                    /**
                     * 判断参数 CheckCode 是否已赋值
                     * @return CheckCode 是否已赋值
                     * 
                     */
                    bool CheckCodeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Place 
                     * 
                     */
                    std::string GetPlace() const;

                    /**
                     * 设置
                     * @param _place 
                     * 
                     */
                    void SetPlace(const std::string& _place);

                    /**
                     * 判断参数 Place 是否已赋值
                     * @return Place 是否已赋值
                     * 
                     */
                    bool PlaceHasBeenSet() const;

                    /**
                     * 获取
                     * @return Reviewer 
                     * 
                     */
                    std::string GetReviewer() const;

                    /**
                     * 设置
                     * @param _reviewer 
                     * 
                     */
                    void SetReviewer(const std::string& _reviewer);

                    /**
                     * 判断参数 Reviewer 是否已赋值
                     * @return Reviewer 是否已赋值
                     * 
                     */
                    bool ReviewerHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_totalCn;
                    bool m_totalCnHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_checkCode;
                    bool m_checkCodeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_place;
                    bool m_placeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_reviewer;
                    bool m_reviewerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_MEDICALINVOICE_H_
