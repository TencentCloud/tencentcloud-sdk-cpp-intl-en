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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VATELECTRONICINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VATELECTRONICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/VatElectronicItemInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * Return values for an electronic invoice
                */
                class VatElectronicInfo : public AbstractModel
                {
                public:
                    VatElectronicInfo();
                    ~VatElectronicInfo() = default;
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
                     * 获取Amount before tax
                     * @return PretaxAmount Amount before tax
                     * 
                     */
                    std::string GetPretaxAmount() const;

                    /**
                     * 设置Amount before tax
                     * @param _pretaxAmount Amount before tax
                     * 
                     */
                    void SetPretaxAmount(const std::string& _pretaxAmount);

                    /**
                     * 判断参数 PretaxAmount 是否已赋值
                     * @return PretaxAmount 是否已赋值
                     * 
                     */
                    bool PretaxAmountHasBeenSet() const;

                    /**
                     * 获取Tax
                     * @return Tax Tax
                     * 
                     */
                    std::string GetTax() const;

                    /**
                     * 设置Tax
                     * @param _tax Tax
                     * 
                     */
                    void SetTax(const std::string& _tax);

                    /**
                     * 判断参数 Tax 是否已赋值
                     * @return Tax 是否已赋值
                     * 
                     */
                    bool TaxHasBeenSet() const;

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
                     * 获取Issuer
                     * @return Issuer Issuer
                     * 
                     */
                    std::string GetIssuer() const;

                    /**
                     * 设置Issuer
                     * @param _issuer Issuer
                     * 
                     */
                    void SetIssuer(const std::string& _issuer);

                    /**
                     * 判断参数 Issuer 是否已赋值
                     * @return Issuer 是否已赋值
                     * 
                     */
                    bool IssuerHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param _remark Remarks
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Subtotal amount
                     * @return SubTotal Subtotal amount
                     * 
                     */
                    std::string GetSubTotal() const;

                    /**
                     * 设置Subtotal amount
                     * @param _subTotal Subtotal amount
                     * 
                     */
                    void SetSubTotal(const std::string& _subTotal);

                    /**
                     * 判断参数 SubTotal 是否已赋值
                     * @return SubTotal 是否已赋值
                     * 
                     */
                    bool SubTotalHasBeenSet() const;

                    /**
                     * 获取Subtotal tax
                     * @return SubTax Subtotal tax
                     * 
                     */
                    std::string GetSubTax() const;

                    /**
                     * 设置Subtotal tax
                     * @param _subTax Subtotal tax
                     * 
                     */
                    void SetSubTax(const std::string& _subTax);

                    /**
                     * 判断参数 SubTax 是否已赋值
                     * @return SubTax 是否已赋值
                     * 
                     */
                    bool SubTaxHasBeenSet() const;

                    /**
                     * 获取Detailed items of an electronic invoice
                     * @return VatElectronicItems Detailed items of an electronic invoice
                     * 
                     */
                    std::vector<VatElectronicItemInfo> GetVatElectronicItems() const;

                    /**
                     * 设置Detailed items of an electronic invoice
                     * @param _vatElectronicItems Detailed items of an electronic invoice
                     * 
                     */
                    void SetVatElectronicItems(const std::vector<VatElectronicItemInfo>& _vatElectronicItems);

                    /**
                     * 判断参数 VatElectronicItems 是否已赋值
                     * @return VatElectronicItems 是否已赋值
                     * 
                     */
                    bool VatElectronicItemsHasBeenSet() const;

                private:

                    /**
                     * Invoice title
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Invoice number
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * Date of issue
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * Amount before tax
                     */
                    std::string m_pretaxAmount;
                    bool m_pretaxAmountHasBeenSet;

                    /**
                     * Tax
                     */
                    std::string m_tax;
                    bool m_taxHasBeenSet;

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
                     * Issuer
                     */
                    std::string m_issuer;
                    bool m_issuerHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Subtotal amount
                     */
                    std::string m_subTotal;
                    bool m_subTotalHasBeenSet;

                    /**
                     * Subtotal tax
                     */
                    std::string m_subTax;
                    bool m_subTaxHasBeenSet;

                    /**
                     * Detailed items of an electronic invoice
                     */
                    std::vector<VatElectronicItemInfo> m_vatElectronicItems;
                    bool m_vatElectronicItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VATELECTRONICINFO_H_
