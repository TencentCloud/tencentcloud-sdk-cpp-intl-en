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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_NONTAXINCOMEBILL_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_NONTAXINCOMEBILL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/NonTaxItem.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * Non-tax revenue
                */
                class NonTaxIncomeBill : public AbstractModel
                {
                public:
                    NonTaxIncomeBill();
                    ~NonTaxIncomeBill() = default;
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
                     * 获取Payer's name
                     * @return Buyer Payer's name
                     * 
                     */
                    std::string GetBuyer() const;

                    /**
                     * 设置Payer's name
                     * @param _buyer Payer's name
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
                     * 获取Payer's taxpayer identification number
                     * @return BuyerTaxID Payer's taxpayer identification number
                     * 
                     */
                    std::string GetBuyerTaxID() const;

                    /**
                     * 设置Payer's taxpayer identification number
                     * @param _buyerTaxID Payer's taxpayer identification number
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
                     * 获取Payee's name
                     * @return Seller Payee's name
                     * 
                     */
                    std::string GetSeller() const;

                    /**
                     * 设置Payee's name
                     * @param _seller Payee's name
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
                     * 获取Payee's company name
                     * @return SellerCompany Payee's company name
                     * 
                     */
                    std::string GetSellerCompany() const;

                    /**
                     * 设置Payee's company name
                     * @param _sellerCompany Payee's company name
                     * 
                     */
                    void SetSellerCompany(const std::string& _sellerCompany);

                    /**
                     * 判断参数 SellerCompany 是否已赋值
                     * @return SellerCompany 是否已赋值
                     * 
                     */
                    bool SellerCompanyHasBeenSet() const;

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
                     * 获取Currency
                     * @return CurrencyCode Currency
                     * 
                     */
                    std::string GetCurrencyCode() const;

                    /**
                     * 设置Currency
                     * @param _currencyCode Currency
                     * 
                     */
                    void SetCurrencyCode(const std::string& _currencyCode);

                    /**
                     * 判断参数 CurrencyCode 是否已赋值
                     * @return CurrencyCode 是否已赋值
                     * 
                     */
                    bool CurrencyCodeHasBeenSet() const;

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
                     * 获取Other information
                     * @return OtherInfo Other information
                     * 
                     */
                    std::string GetOtherInfo() const;

                    /**
                     * 设置Other information
                     * @param _otherInfo Other information
                     * 
                     */
                    void SetOtherInfo(const std::string& _otherInfo);

                    /**
                     * 判断参数 OtherInfo 是否已赋值
                     * @return OtherInfo 是否已赋值
                     * 
                     */
                    bool OtherInfoHasBeenSet() const;

                    /**
                     * 获取Payment code
                     * @return PaymentCode Payment code
                     * 
                     */
                    std::string GetPaymentCode() const;

                    /**
                     * 设置Payment code
                     * @param _paymentCode Payment code
                     * 
                     */
                    void SetPaymentCode(const std::string& _paymentCode);

                    /**
                     * 判断参数 PaymentCode 是否已赋值
                     * @return PaymentCode 是否已赋值
                     * 
                     */
                    bool PaymentCodeHasBeenSet() const;

                    /**
                     * 获取Collecting organization's code
                     * @return ReceiveUnitCode Collecting organization's code
                     * 
                     */
                    std::string GetReceiveUnitCode() const;

                    /**
                     * 设置Collecting organization's code
                     * @param _receiveUnitCode Collecting organization's code
                     * 
                     */
                    void SetReceiveUnitCode(const std::string& _receiveUnitCode);

                    /**
                     * 判断参数 ReceiveUnitCode 是否已赋值
                     * @return ReceiveUnitCode 是否已赋值
                     * 
                     */
                    bool ReceiveUnitCodeHasBeenSet() const;

                    /**
                     * 获取Collecting organization's name
                     * @return Receiver Collecting organization's name
                     * 
                     */
                    std::string GetReceiver() const;

                    /**
                     * 设置Collecting organization's name
                     * @param _receiver Collecting organization's name
                     * 
                     */
                    void SetReceiver(const std::string& _receiver);

                    /**
                     * 判断参数 Receiver 是否已赋值
                     * @return Receiver 是否已赋值
                     * 
                     */
                    bool ReceiverHasBeenSet() const;

                    /**
                     * 获取Operator
                     * @return Operator Operator
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Operator
                     * @param _operator Operator
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Payer's account
                     * @return PayerAccount Payer's account
                     * 
                     */
                    std::string GetPayerAccount() const;

                    /**
                     * 设置Payer's account
                     * @param _payerAccount Payer's account
                     * 
                     */
                    void SetPayerAccount(const std::string& _payerAccount);

                    /**
                     * 判断参数 PayerAccount 是否已赋值
                     * @return PayerAccount 是否已赋值
                     * 
                     */
                    bool PayerAccountHasBeenSet() const;

                    /**
                     * 获取Payer's account opening bank
                     * @return PayerBank Payer's account opening bank
                     * 
                     */
                    std::string GetPayerBank() const;

                    /**
                     * 设置Payer's account opening bank
                     * @param _payerBank Payer's account opening bank
                     * 
                     */
                    void SetPayerBank(const std::string& _payerBank);

                    /**
                     * 判断参数 PayerBank 是否已赋值
                     * @return PayerBank 是否已赋值
                     * 
                     */
                    bool PayerBankHasBeenSet() const;

                    /**
                     * 获取Payee's account
                     * @return ReceiverAccount Payee's account
                     * 
                     */
                    std::string GetReceiverAccount() const;

                    /**
                     * 设置Payee's account
                     * @param _receiverAccount Payee's account
                     * 
                     */
                    void SetReceiverAccount(const std::string& _receiverAccount);

                    /**
                     * 判断参数 ReceiverAccount 是否已赋值
                     * @return ReceiverAccount 是否已赋值
                     * 
                     */
                    bool ReceiverAccountHasBeenSet() const;

                    /**
                     * 获取Payee's account opening bank
                     * @return ReceiverBank Payee's account opening bank
                     * 
                     */
                    std::string GetReceiverBank() const;

                    /**
                     * 设置Payee's account opening bank
                     * @param _receiverBank Payee's account opening bank
                     * 
                     */
                    void SetReceiverBank(const std::string& _receiverBank);

                    /**
                     * 判断参数 ReceiverBank 是否已赋值
                     * @return ReceiverBank 是否已赋值
                     * 
                     */
                    bool ReceiverBankHasBeenSet() const;

                    /**
                     * 获取Items
                     * @return NonTaxItems Items
                     * 
                     */
                    std::vector<NonTaxItem> GetNonTaxItems() const;

                    /**
                     * 设置Items
                     * @param _nonTaxItems Items
                     * 
                     */
                    void SetNonTaxItems(const std::vector<NonTaxItem>& _nonTaxItems);

                    /**
                     * 判断参数 NonTaxItems 是否已赋值
                     * @return NonTaxItems 是否已赋值
                     * 
                     */
                    bool NonTaxItemsHasBeenSet() const;

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
                     * Invoice code
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Check code
                     */
                    std::string m_checkCode;
                    bool m_checkCodeHasBeenSet;

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
                     * Payer's name
                     */
                    std::string m_buyer;
                    bool m_buyerHasBeenSet;

                    /**
                     * Payer's taxpayer identification number
                     */
                    std::string m_buyerTaxID;
                    bool m_buyerTaxIDHasBeenSet;

                    /**
                     * Payee's name
                     */
                    std::string m_seller;
                    bool m_sellerHasBeenSet;

                    /**
                     * Payee's company name
                     */
                    std::string m_sellerCompany;
                    bool m_sellerCompanyHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Currency
                     */
                    std::string m_currencyCode;
                    bool m_currencyCodeHasBeenSet;

                    /**
                     * Reviewer
                     */
                    std::string m_reviewer;
                    bool m_reviewerHasBeenSet;

                    /**
                     * Whether there is a QR code (0: No, 1: Yes)
                     */
                    int64_t m_qRCodeMark;
                    bool m_qRCodeMarkHasBeenSet;

                    /**
                     * Other information
                     */
                    std::string m_otherInfo;
                    bool m_otherInfoHasBeenSet;

                    /**
                     * Payment code
                     */
                    std::string m_paymentCode;
                    bool m_paymentCodeHasBeenSet;

                    /**
                     * Collecting organization's code
                     */
                    std::string m_receiveUnitCode;
                    bool m_receiveUnitCodeHasBeenSet;

                    /**
                     * Collecting organization's name
                     */
                    std::string m_receiver;
                    bool m_receiverHasBeenSet;

                    /**
                     * Operator
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Payer's account
                     */
                    std::string m_payerAccount;
                    bool m_payerAccountHasBeenSet;

                    /**
                     * Payer's account opening bank
                     */
                    std::string m_payerBank;
                    bool m_payerBankHasBeenSet;

                    /**
                     * Payee's account
                     */
                    std::string m_receiverAccount;
                    bool m_receiverAccountHasBeenSet;

                    /**
                     * Payee's account opening bank
                     */
                    std::string m_receiverBank;
                    bool m_receiverBankHasBeenSet;

                    /**
                     * Items
                     */
                    std::vector<NonTaxItem> m_nonTaxItems;
                    bool m_nonTaxItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_NONTAXINCOMEBILL_H_
