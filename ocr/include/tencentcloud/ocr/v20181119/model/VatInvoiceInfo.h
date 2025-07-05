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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/VatInvoiceItemInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * Return values for a VAT invoice
                */
                class VatInvoiceInfo : public AbstractModel
                {
                public:
                    VatInvoiceInfo();
                    ~VatInvoiceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Form type
                     * @return FormType Form type
                     * 
                     */
                    std::string GetFormType() const;

                    /**
                     * 设置Form type
                     * @param _formType Form type
                     * 
                     */
                    void SetFormType(const std::string& _formType);

                    /**
                     * 判断参数 FormType 是否已赋值
                     * @return FormType 是否已赋值
                     * 
                     */
                    bool FormTypeHasBeenSet() const;

                    /**
                     * 获取Vehicle and vessel tax
                     * @return TravelTax Vehicle and vessel tax
                     * 
                     */
                    std::string GetTravelTax() const;

                    /**
                     * 设置Vehicle and vessel tax
                     * @param _travelTax Vehicle and vessel tax
                     * 
                     */
                    void SetTravelTax(const std::string& _travelTax);

                    /**
                     * 判断参数 TravelTax 是否已赋值
                     * @return TravelTax 是否已赋值
                     * 
                     */
                    bool TravelTaxHasBeenSet() const;

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
                     * 获取Whether there is an agent (0: No, 1: Yes)
                     * @return AgentMark Whether there is an agent (0: No, 1: Yes)
                     * 
                     */
                    int64_t GetAgentMark() const;

                    /**
                     * 设置Whether there is an agent (0: No, 1: Yes)
                     * @param _agentMark Whether there is an agent (0: No, 1: Yes)
                     * 
                     */
                    void SetAgentMark(const int64_t& _agentMark);

                    /**
                     * 判断参数 AgentMark 是否已赋值
                     * @return AgentMark 是否已赋值
                     * 
                     */
                    bool AgentMarkHasBeenSet() const;

                    /**
                     * 获取Whether there is a toll (0: No, 1: Yes)
                     * @return TransitMark Whether there is a toll (0: No, 1: Yes)
                     * 
                     */
                    int64_t GetTransitMark() const;

                    /**
                     * 设置Whether there is a toll (0: No, 1: Yes)
                     * @param _transitMark Whether there is a toll (0: No, 1: Yes)
                     * 
                     */
                    void SetTransitMark(const int64_t& _transitMark);

                    /**
                     * 判断参数 TransitMark 是否已赋值
                     * @return TransitMark 是否已赋值
                     * 
                     */
                    bool TransitMarkHasBeenSet() const;

                    /**
                     * 获取Whether there is refined oil (0: No, 1: Yes)
                     * @return OilMark Whether there is refined oil (0: No, 1: Yes)
                     * 
                     */
                    int64_t GetOilMark() const;

                    /**
                     * 设置Whether there is refined oil (0: No, 1: Yes)
                     * @param _oilMark Whether there is refined oil (0: No, 1: Yes)
                     * 
                     */
                    void SetOilMark(const int64_t& _oilMark);

                    /**
                     * 判断参数 OilMark 是否已赋值
                     * @return OilMark 是否已赋值
                     * 
                     */
                    bool OilMarkHasBeenSet() const;

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
                     * 获取Machine No.
                     * @return MachineCode Machine No.
                     * 
                     */
                    std::string GetMachineCode() const;

                    /**
                     * 设置Machine No.
                     * @param _machineCode Machine No.
                     * 
                     */
                    void SetMachineCode(const std::string& _machineCode);

                    /**
                     * 判断参数 MachineCode 是否已赋值
                     * @return MachineCode 是否已赋值
                     * 
                     */
                    bool MachineCodeHasBeenSet() const;

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
                     * 获取Information about VAT invoice items
                     * @return VatInvoiceItemInfos Information about VAT invoice items
                     * 
                     */
                    std::vector<VatInvoiceItemInfo> GetVatInvoiceItemInfos() const;

                    /**
                     * 设置Information about VAT invoice items
                     * @param _vatInvoiceItemInfos Information about VAT invoice items
                     * 
                     */
                    void SetVatInvoiceItemInfos(const std::vector<VatInvoiceItemInfo>& _vatInvoiceItemInfos);

                    /**
                     * 判断参数 VatInvoiceItemInfos 是否已赋值
                     * @return VatInvoiceItemInfos 是否已赋值
                     * 
                     */
                    bool VatInvoiceItemInfosHasBeenSet() const;

                    /**
                     * 获取Machine-printed invoice code
                     * @return CodeConfirm Machine-printed invoice code
                     * 
                     */
                    std::string GetCodeConfirm() const;

                    /**
                     * 设置Machine-printed invoice code
                     * @param _codeConfirm Machine-printed invoice code
                     * 
                     */
                    void SetCodeConfirm(const std::string& _codeConfirm);

                    /**
                     * 判断参数 CodeConfirm 是否已赋值
                     * @return CodeConfirm 是否已赋值
                     * 
                     */
                    bool CodeConfirmHasBeenSet() const;

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
                     * 获取
                     * @return ElectronicFullMark 
                     * 
                     */
                    int64_t GetElectronicFullMark() const;

                    /**
                     * 设置
                     * @param _electronicFullMark 
                     * 
                     */
                    void SetElectronicFullMark(const int64_t& _electronicFullMark);

                    /**
                     * 判断参数 ElectronicFullMark 是否已赋值
                     * @return ElectronicFullMark 是否已赋值
                     * 
                     */
                    bool ElectronicFullMarkHasBeenSet() const;

                    /**
                     * 获取
                     * @return ElectronicFullNumber 
                     * 
                     */
                    std::string GetElectronicFullNumber() const;

                    /**
                     * 设置
                     * @param _electronicFullNumber 
                     * 
                     */
                    void SetElectronicFullNumber(const std::string& _electronicFullNumber);

                    /**
                     * 判断参数 ElectronicFullNumber 是否已赋值
                     * @return ElectronicFullNumber 是否已赋值
                     * 
                     */
                    bool ElectronicFullNumberHasBeenSet() const;

                    /**
                     * 获取
                     * @return FormName 
                     * 
                     */
                    std::string GetFormName() const;

                    /**
                     * 设置
                     * @param _formName 
                     * 
                     */
                    void SetFormName(const std::string& _formName);

                    /**
                     * 判断参数 FormName 是否已赋值
                     * @return FormName 是否已赋值
                     * 
                     */
                    bool FormNameHasBeenSet() const;

                private:

                    /**
                     * Check code
                     */
                    std::string m_checkCode;
                    bool m_checkCodeHasBeenSet;

                    /**
                     * Form type
                     */
                    std::string m_formType;
                    bool m_formTypeHasBeenSet;

                    /**
                     * Vehicle and vessel tax
                     */
                    std::string m_travelTax;
                    bool m_travelTaxHasBeenSet;

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
                     * Service type
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

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
                     * Whether there is an agent (0: No, 1: Yes)
                     */
                    int64_t m_agentMark;
                    bool m_agentMarkHasBeenSet;

                    /**
                     * Whether there is a toll (0: No, 1: Yes)
                     */
                    int64_t m_transitMark;
                    bool m_transitMarkHasBeenSet;

                    /**
                     * Whether there is refined oil (0: No, 1: Yes)
                     */
                    int64_t m_oilMark;
                    bool m_oilMarkHasBeenSet;

                    /**
                     * Invoice title
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Invoice type
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

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
                     * Machine No.
                     */
                    std::string m_machineCode;
                    bool m_machineCodeHasBeenSet;

                    /**
                     * Ciphertext
                     */
                    std::string m_ciphertext;
                    bool m_ciphertextHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

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
                     * Whether there is a company seal (0: No, 1: Yes)
                     */
                    int64_t m_companySealMark;
                    bool m_companySealMarkHasBeenSet;

                    /**
                     * Issuer
                     */
                    std::string m_issuer;
                    bool m_issuerHasBeenSet;

                    /**
                     * Reviewer
                     */
                    std::string m_reviewer;
                    bool m_reviewerHasBeenSet;

                    /**
                     * Province
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * Information about VAT invoice items
                     */
                    std::vector<VatInvoiceItemInfo> m_vatInvoiceItemInfos;
                    bool m_vatInvoiceItemInfosHasBeenSet;

                    /**
                     * Machine-printed invoice code
                     */
                    std::string m_codeConfirm;
                    bool m_codeConfirmHasBeenSet;

                    /**
                     * Payee
                     */
                    std::string m_receiptor;
                    bool m_receiptorHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_electronicFullMark;
                    bool m_electronicFullMarkHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_electronicFullNumber;
                    bool m_electronicFullNumberHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_formName;
                    bool m_formNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEINFO_H_
