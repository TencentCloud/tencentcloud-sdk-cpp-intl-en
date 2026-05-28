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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_QUOTAINVOICE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_QUOTAINVOICE_H_

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
                * Quota invoice
                */
                class QuotaInvoice : public AbstractModel
                {
                public:
                    QuotaInvoice();
                    ~QuotaInvoice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Invoice title
                     * @return Title Invoice title
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置Invoice title
                     * @param _title Invoice title
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
                     * 获取Invoice code
                     * @return Code Invoice code
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置Invoice code
                     * @param _code Invoice code
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
                     * 获取Invoice number
                     * @return Number Invoice number
                     * 
                     */
                    std::string GetNumber() const;

                    /**
                     * 设置Invoice number
                     * @param _number Invoice number
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
                     * 获取Total amount (in figures)
                     * @return Total Total amount (in figures)
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置Total amount (in figures)
                     * @param _total Total amount (in figures)
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
                     * 获取Total amount (in words)
                     * @return TotalCn Total amount (in words)
                     * 
                     */
                    std::string GetTotalCn() const;

                    /**
                     * 设置Total amount (in words)
                     * @param _totalCn Total amount (in words)
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
                     * 获取Invoice type
                     * @return Kind Invoice type
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置Invoice type
                     * @param _kind Invoice type
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取Province
                     * @return Province Province
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置Province
                     * @param _province Province
                     * 
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取City
                     * @return City City
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置City
                     * @param _city City
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取Whether there is a QR code (0: No, 1: Yes)
                     * @return QRCodeMark Whether there is a QR code (0: No, 1: Yes)
                     * 
                     */
                    int64_t GetQRCodeMark() const;

                    /**
                     * 设置Whether there is a QR code (0: No, 1: Yes)
                     * @param _qRCodeMark Whether there is a QR code (0: No, 1: Yes)
                     * 
                     */
                    void SetQRCodeMark(const int64_t& _qRCodeMark);

                    /**
                     * 判断参数 QRCodeMark 是否已赋值
                     * @return QRCodeMark 是否已赋值
                     * 
                     */
                    bool QRCodeMarkHasBeenSet() const;

                    /**
                     * 获取Whether there is a company seal (0: No, 1: Yes)
                     * @return CompanySealMark Whether there is a company seal (0: No, 1: Yes)
                     * 
                     */
                    int64_t GetCompanySealMark() const;

                    /**
                     * 设置Whether there is a company seal (0: No, 1: Yes)
                     * @param _companySealMark Whether there is a company seal (0: No, 1: Yes)
                     * 
                     */
                    void SetCompanySealMark(const int64_t& _companySealMark);

                    /**
                     * 判断参数 CompanySealMark 是否已赋值
                     * @return CompanySealMark 是否已赋值
                     * 
                     */
                    bool CompanySealMarkHasBeenSet() const;

                private:

                    /**
                     * Invoice title
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Invoice code
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Invoice number
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * Total amount (in figures)
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Total amount (in words)
                     */
                    std::string m_totalCn;
                    bool m_totalCnHasBeenSet;

                    /**
                     * Invoice type
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * Province
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * City
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * Whether there is a QR code (0: No, 1: Yes)
                     */
                    int64_t m_qRCodeMark;
                    bool m_qRCodeMarkHasBeenSet;

                    /**
                     * Whether there is a company seal (0: No, 1: Yes)
                     */
                    int64_t m_companySealMark;
                    bool m_companySealMarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_QUOTAINVOICE_H_
