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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_MACHINEPRINTEDINVOICE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_MACHINEPRINTEDINVOICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/GeneralMachineItem.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * General machine-printed invoice
                */
                class MachinePrintedInvoice : public AbstractModel
                {
                public:
                    MachinePrintedInvoice();
                    ~MachinePrintedInvoice() = default;
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
                     * 获取Time
                     * @return Time Time
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Time
                     * @param _time Time
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

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
                     * 获取Ciphertext
                     * @return Ciphertext Ciphertext
                     * 
                     */
                    std::string GetCiphertext() const;

                    /**
                     * 设置Ciphertext
                     * @param _ciphertext Ciphertext
                     * 
                     */
                    void SetCiphertext(const std::string& _ciphertext);

                    /**
                     * 判断参数 Ciphertext 是否已赋值
                     * @return Ciphertext 是否已赋值
                     * 
                     */
                    bool CiphertextHasBeenSet() const;

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
                     * 获取Industry
                     * @return IndustryClass Industry
                     * 
                     */
                    std::string GetIndustryClass() const;

                    /**
                     * 设置Industry
                     * @param _industryClass Industry
                     * 
                     */
                    void SetIndustryClass(const std::string& _industryClass);

                    /**
                     * 判断参数 IndustryClass 是否已赋值
                     * @return IndustryClass 是否已赋值
                     * 
                     */
                    bool IndustryClassHasBeenSet() const;

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
                     * 获取Seller's address and phone number
                     * @return SellerAddrTel Seller's address and phone number
                     * 
                     */
                    std::string GetSellerAddrTel() const;

                    /**
                     * 设置Seller's address and phone number
                     * @param _sellerAddrTel Seller's address and phone number
                     * 
                     */
                    void SetSellerAddrTel(const std::string& _sellerAddrTel);

                    /**
                     * 判断参数 SellerAddrTel 是否已赋值
                     * @return SellerAddrTel 是否已赋值
                     * 
                     */
                    bool SellerAddrTelHasBeenSet() const;

                    /**
                     * 获取Seller's bank account number
                     * @return SellerBankAccount Seller's bank account number
                     * 
                     */
                    std::string GetSellerBankAccount() const;

                    /**
                     * 设置Seller's bank account number
                     * @param _sellerBankAccount Seller's bank account number
                     * 
                     */
                    void SetSellerBankAccount(const std::string& _sellerBankAccount);

                    /**
                     * 判断参数 SellerBankAccount 是否已赋值
                     * @return SellerBankAccount 是否已赋值
                     * 
                     */
                    bool SellerBankAccountHasBeenSet() const;

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
                     * 获取Buyer's address and phone number
                     * @return BuyerAddrTel Buyer's address and phone number
                     * 
                     */
                    std::string GetBuyerAddrTel() const;

                    /**
                     * 设置Buyer's address and phone number
                     * @param _buyerAddrTel Buyer's address and phone number
                     * 
                     */
                    void SetBuyerAddrTel(const std::string& _buyerAddrTel);

                    /**
                     * 判断参数 BuyerAddrTel 是否已赋值
                     * @return BuyerAddrTel 是否已赋值
                     * 
                     */
                    bool BuyerAddrTelHasBeenSet() const;

                    /**
                     * 获取Buyer's bank account number
                     * @return BuyerBankAccount Buyer's bank account number
                     * 
                     */
                    std::string GetBuyerBankAccount() const;

                    /**
                     * 设置Buyer's bank account number
                     * @param _buyerBankAccount Buyer's bank account number
                     * 
                     */
                    void SetBuyerBankAccount(const std::string& _buyerBankAccount);

                    /**
                     * 判断参数 BuyerBankAccount 是否已赋值
                     * @return BuyerBankAccount 是否已赋值
                     * 
                     */
                    bool BuyerBankAccountHasBeenSet() const;

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
                     * 获取Whether it is a general machine-printed invoice issued by Zhejiang or Guangdong province (0: No, 1: Yes)
                     * @return ElectronicMark Whether it is a general machine-printed invoice issued by Zhejiang or Guangdong province (0: No, 1: Yes)
                     * 
                     */
                    int64_t GetElectronicMark() const;

                    /**
                     * 设置Whether it is a general machine-printed invoice issued by Zhejiang or Guangdong province (0: No, 1: Yes)
                     * @param _electronicMark Whether it is a general machine-printed invoice issued by Zhejiang or Guangdong province (0: No, 1: Yes)
                     * 
                     */
                    void SetElectronicMark(const int64_t& _electronicMark);

                    /**
                     * 判断参数 ElectronicMark 是否已赋值
                     * @return ElectronicMark 是否已赋值
                     * 
                     */
                    bool ElectronicMarkHasBeenSet() const;

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
                     * 获取Payee
                     * @return Receiptor Payee
                     * 
                     */
                    std::string GetReceiptor() const;

                    /**
                     * 设置Payee
                     * @param _receiptor Payee
                     * 
                     */
                    void SetReceiptor(const std::string& _receiptor);

                    /**
                     * 判断参数 Receiptor 是否已赋值
                     * @return Receiptor 是否已赋值
                     * 
                     */
                    bool ReceiptorHasBeenSet() const;

                    /**
                     * 获取Reviewer
                     * @return Reviewer Reviewer
                     * 
                     */
                    std::string GetReviewer() const;

                    /**
                     * 设置Reviewer
                     * @param _reviewer Reviewer
                     * 
                     */
                    void SetReviewer(const std::string& _reviewer);

                    /**
                     * 判断参数 Reviewer 是否已赋值
                     * @return Reviewer 是否已赋值
                     * 
                     */
                    bool ReviewerHasBeenSet() const;

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
                     * 获取Operator's payment information
                     * @return PaymentInfo Operator's payment information
                     * 
                     */
                    std::string GetPaymentInfo() const;

                    /**
                     * 设置Operator's payment information
                     * @param _paymentInfo Operator's payment information
                     * 
                     */
                    void SetPaymentInfo(const std::string& _paymentInfo);

                    /**
                     * 判断参数 PaymentInfo 是否已赋值
                     * @return PaymentInfo 是否已赋值
                     * 
                     */
                    bool PaymentInfoHasBeenSet() const;

                    /**
                     * 获取Operator-assigned invoice pickup user
                     * @return TicketPickupUser Operator-assigned invoice pickup user
                     * 
                     */
                    std::string GetTicketPickupUser() const;

                    /**
                     * 设置Operator-assigned invoice pickup user
                     * @param _ticketPickupUser Operator-assigned invoice pickup user
                     * 
                     */
                    void SetTicketPickupUser(const std::string& _ticketPickupUser);

                    /**
                     * 判断参数 TicketPickupUser 是否已赋值
                     * @return TicketPickupUser 是否已赋值
                     * 
                     */
                    bool TicketPickupUserHasBeenSet() const;

                    /**
                     * 获取Operator's merchant number
                     * @return MerchantNumber Operator's merchant number
                     * 
                     */
                    std::string GetMerchantNumber() const;

                    /**
                     * 设置Operator's merchant number
                     * @param _merchantNumber Operator's merchant number
                     * 
                     */
                    void SetMerchantNumber(const std::string& _merchantNumber);

                    /**
                     * 判断参数 MerchantNumber 是否已赋值
                     * @return MerchantNumber 是否已赋值
                     * 
                     */
                    bool MerchantNumberHasBeenSet() const;

                    /**
                     * 获取Operator's order number
                     * @return OrderNumber Operator's order number
                     * 
                     */
                    std::string GetOrderNumber() const;

                    /**
                     * 设置Operator's order number
                     * @param _orderNumber Operator's order number
                     * 
                     */
                    void SetOrderNumber(const std::string& _orderNumber);

                    /**
                     * 判断参数 OrderNumber 是否已赋值
                     * @return OrderNumber 是否已赋值
                     * 
                     */
                    bool OrderNumberHasBeenSet() const;

                    /**
                     * 获取Items
                     * @return GeneralMachineItems Items
                     * 
                     */
                    std::vector<GeneralMachineItem> GetGeneralMachineItems() const;

                    /**
                     * 设置Items
                     * @param _generalMachineItems Items
                     * 
                     */
                    void SetGeneralMachineItems(const std::vector<GeneralMachineItem>& _generalMachineItems);

                    /**
                     * 判断参数 GeneralMachineItems 是否已赋值
                     * @return GeneralMachineItems 是否已赋值
                     * 
                     */
                    bool GeneralMachineItemsHasBeenSet() const;

                private:

                    /**
                     * Invoice title
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Whether there is a QR code (0: No, 1: Yes)
                     */
                    int64_t m_qRCodeMark;
                    bool m_qRCodeMarkHasBeenSet;

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
                     * Date of issue
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * Time
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Check code
                     */
                    std::string m_checkCode;
                    bool m_checkCodeHasBeenSet;

                    /**
                     * Ciphertext
                     */
                    std::string m_ciphertext;
                    bool m_ciphertextHasBeenSet;

                    /**
                     * Category
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * Amount before tax
                     */
                    std::string m_pretaxAmount;
                    bool m_pretaxAmountHasBeenSet;

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
                     * Tax
                     */
                    std::string m_tax;
                    bool m_taxHasBeenSet;

                    /**
                     * Industry
                     */
                    std::string m_industryClass;
                    bool m_industryClassHasBeenSet;

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
                     * Seller's address and phone number
                     */
                    std::string m_sellerAddrTel;
                    bool m_sellerAddrTelHasBeenSet;

                    /**
                     * Seller's bank account number
                     */
                    std::string m_sellerBankAccount;
                    bool m_sellerBankAccountHasBeenSet;

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
                     * Buyer's address and phone number
                     */
                    std::string m_buyerAddrTel;
                    bool m_buyerAddrTelHasBeenSet;

                    /**
                     * Buyer's bank account number
                     */
                    std::string m_buyerBankAccount;
                    bool m_buyerBankAccountHasBeenSet;

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
                     * Whether it is a general machine-printed invoice issued by Zhejiang or Guangdong province (0: No, 1: Yes)
                     */
                    int64_t m_electronicMark;
                    bool m_electronicMarkHasBeenSet;

                    /**
                     * Issuer
                     */
                    std::string m_issuer;
                    bool m_issuerHasBeenSet;

                    /**
                     * Payee
                     */
                    std::string m_receiptor;
                    bool m_receiptorHasBeenSet;

                    /**
                     * Reviewer
                     */
                    std::string m_reviewer;
                    bool m_reviewerHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Operator's payment information
                     */
                    std::string m_paymentInfo;
                    bool m_paymentInfoHasBeenSet;

                    /**
                     * Operator-assigned invoice pickup user
                     */
                    std::string m_ticketPickupUser;
                    bool m_ticketPickupUserHasBeenSet;

                    /**
                     * Operator's merchant number
                     */
                    std::string m_merchantNumber;
                    bool m_merchantNumberHasBeenSet;

                    /**
                     * Operator's order number
                     */
                    std::string m_orderNumber;
                    bool m_orderNumberHasBeenSet;

                    /**
                     * Items
                     */
                    std::vector<GeneralMachineItem> m_generalMachineItems;
                    bool m_generalMachineItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_MACHINEPRINTEDINVOICE_H_
