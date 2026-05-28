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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEROLL_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEROLL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/VatRollItem.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * General VAT invoice (roll)
                */
                class VatInvoiceRoll : public AbstractModel
                {
                public:
                    VatInvoiceRoll();
                    ~VatInvoiceRoll() = default;
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
                     * 获取Machine-printed invoice number
                     * @return NumberConfirm Machine-printed invoice number
                     * 
                     */
                    std::string GetNumberConfirm() const;

                    /**
                     * 设置Machine-printed invoice number
                     * @param _numberConfirm Machine-printed invoice number
                     * 
                     */
                    void SetNumberConfirm(const std::string& _numberConfirm);

                    /**
                     * 判断参数 NumberConfirm 是否已赋值
                     * @return NumberConfirm 是否已赋值
                     * 
                     */
                    bool NumberConfirmHasBeenSet() const;

                    /**
                     * 获取Date of issue
                     * @return Date Date of issue
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置Date of issue
                     * @param _date Date of issue
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
                     * 获取Check code
                     * @return CheckCode Check code
                     * 
                     */
                    std::string GetCheckCode() const;

                    /**
                     * 设置Check code
                     * @param _checkCode Check code
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
                     * 获取Seller's name
                     * @return Seller Seller's name
                     * 
                     */
                    std::string GetSeller() const;

                    /**
                     * 设置Seller's name
                     * @param _seller Seller's name
                     * 
                     */
                    void SetSeller(const std::string& _seller);

                    /**
                     * 判断参数 Seller 是否已赋值
                     * @return Seller 是否已赋值
                     * 
                     */
                    bool SellerHasBeenSet() const;

                    /**
                     * 获取Seller's taxpayer identification number
                     * @return SellerTaxID Seller's taxpayer identification number
                     * 
                     */
                    std::string GetSellerTaxID() const;

                    /**
                     * 设置Seller's taxpayer identification number
                     * @param _sellerTaxID Seller's taxpayer identification number
                     * 
                     */
                    void SetSellerTaxID(const std::string& _sellerTaxID);

                    /**
                     * 判断参数 SellerTaxID 是否已赋值
                     * @return SellerTaxID 是否已赋值
                     * 
                     */
                    bool SellerTaxIDHasBeenSet() const;

                    /**
                     * 获取Buyer's name
                     * @return Buyer Buyer's name
                     * 
                     */
                    std::string GetBuyer() const;

                    /**
                     * 设置Buyer's name
                     * @param _buyer Buyer's name
                     * 
                     */
                    void SetBuyer(const std::string& _buyer);

                    /**
                     * 判断参数 Buyer 是否已赋值
                     * @return Buyer 是否已赋值
                     * 
                     */
                    bool BuyerHasBeenSet() const;

                    /**
                     * 获取Buyer's taxpayer identification number
                     * @return BuyerTaxID Buyer's taxpayer identification number
                     * 
                     */
                    std::string GetBuyerTaxID() const;

                    /**
                     * 设置Buyer's taxpayer identification number
                     * @param _buyerTaxID Buyer's taxpayer identification number
                     * 
                     */
                    void SetBuyerTaxID(const std::string& _buyerTaxID);

                    /**
                     * 判断参数 BuyerTaxID 是否已赋值
                     * @return BuyerTaxID 是否已赋值
                     * 
                     */
                    bool BuyerTaxIDHasBeenSet() const;

                    /**
                     * 获取Category
                     * @return Category Category
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Category
                     * @param _category Category
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

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
                     * 获取Service type
                     * @return ServiceName Service type
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Service type
                     * @param _serviceName Service type
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取Company seal content
                     * @return CompanySealContent Company seal content
                     * 
                     */
                    std::string GetCompanySealContent() const;

                    /**
                     * 设置Company seal content
                     * @param _companySealContent Company seal content
                     * 
                     */
                    void SetCompanySealContent(const std::string& _companySealContent);

                    /**
                     * 判断参数 CompanySealContent 是否已赋值
                     * @return CompanySealContent 是否已赋值
                     * 
                     */
                    bool CompanySealContentHasBeenSet() const;

                    /**
                     * 获取Tax authority seal content
                     * @return TaxSealContent Tax authority seal content
                     * 
                     */
                    std::string GetTaxSealContent() const;

                    /**
                     * 设置Tax authority seal content
                     * @param _taxSealContent Tax authority seal content
                     * 
                     */
                    void SetTaxSealContent(const std::string& _taxSealContent);

                    /**
                     * 判断参数 TaxSealContent 是否已赋值
                     * @return TaxSealContent 是否已赋值
                     * 
                     */
                    bool TaxSealContentHasBeenSet() const;

                    /**
                     * 获取Items
                     * @return VatRollItems Items
                     * 
                     */
                    std::vector<VatRollItem> GetVatRollItems() const;

                    /**
                     * 设置Items
                     * @param _vatRollItems Items
                     * 
                     */
                    void SetVatRollItems(const std::vector<VatRollItem>& _vatRollItems);

                    /**
                     * 判断参数 VatRollItems 是否已赋值
                     * @return VatRollItems 是否已赋值
                     * 
                     */
                    bool VatRollItemsHasBeenSet() const;

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
                     * Machine-printed invoice number
                     */
                    std::string m_numberConfirm;
                    bool m_numberConfirmHasBeenSet;

                    /**
                     * Date of issue
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * Check code
                     */
                    std::string m_checkCode;
                    bool m_checkCodeHasBeenSet;

                    /**
                     * Seller's name
                     */
                    std::string m_seller;
                    bool m_sellerHasBeenSet;

                    /**
                     * Seller's taxpayer identification number
                     */
                    std::string m_sellerTaxID;
                    bool m_sellerTaxIDHasBeenSet;

                    /**
                     * Buyer's name
                     */
                    std::string m_buyer;
                    bool m_buyerHasBeenSet;

                    /**
                     * Buyer's taxpayer identification number
                     */
                    std::string m_buyerTaxID;
                    bool m_buyerTaxIDHasBeenSet;

                    /**
                     * Category
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

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
                     * Whether there is a company seal (0: No, 1: Yes)
                     */
                    int64_t m_companySealMark;
                    bool m_companySealMarkHasBeenSet;

                    /**
                     * Whether there is a QR code (0: No, 1: Yes)
                     */
                    int64_t m_qRCodeMark;
                    bool m_qRCodeMarkHasBeenSet;

                    /**
                     * Service type
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * Company seal content
                     */
                    std::string m_companySealContent;
                    bool m_companySealContentHasBeenSet;

                    /**
                     * Tax authority seal content
                     */
                    std::string m_taxSealContent;
                    bool m_taxSealContentHasBeenSet;

                    /**
                     * Items
                     */
                    std::vector<VatRollItem> m_vatRollItems;
                    bool m_vatRollItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEROLL_H_
