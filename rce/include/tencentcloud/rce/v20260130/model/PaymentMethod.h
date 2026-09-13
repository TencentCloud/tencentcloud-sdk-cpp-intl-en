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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_PAYMENTMETHOD_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_PAYMENTMETHOD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Card.h>
#include <tencentcloud/rce/v20260130/model/Wallet.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * Payment method
                */
                class PaymentMethod : public AbstractModel
                {
                public:
                    PaymentMethod();
                    ~PaymentMethod() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Payment method</p><p>Enumeration value:</p><ul><li>cash</li><li>check</li><li>credit_card</li><li>debit_card</li><li>crypto_currency</li><li>digital_wallet</li><li>gift_card</li><li>points</li><li>in_app_purchase</li><li>electronic_fund_transfer</li><li>financing</li><li>invoice</li><li>prepaid_card</li><li>sepa_credit</li></ul>
                     * @return PaymentType <p>Payment method</p><p>Enumeration value:</p><ul><li>cash</li><li>check</li><li>credit_card</li><li>debit_card</li><li>crypto_currency</li><li>digital_wallet</li><li>gift_card</li><li>points</li><li>in_app_purchase</li><li>electronic_fund_transfer</li><li>financing</li><li>invoice</li><li>prepaid_card</li><li>sepa_credit</li></ul>
                     * 
                     */
                    std::string GetPaymentType() const;

                    /**
                     * 设置<p>Payment method</p><p>Enumeration value:</p><ul><li>cash</li><li>check</li><li>credit_card</li><li>debit_card</li><li>crypto_currency</li><li>digital_wallet</li><li>gift_card</li><li>points</li><li>in_app_purchase</li><li>electronic_fund_transfer</li><li>financing</li><li>invoice</li><li>prepaid_card</li><li>sepa_credit</li></ul>
                     * @param _paymentType <p>Payment method</p><p>Enumeration value:</p><ul><li>cash</li><li>check</li><li>credit_card</li><li>debit_card</li><li>crypto_currency</li><li>digital_wallet</li><li>gift_card</li><li>points</li><li>in_app_purchase</li><li>electronic_fund_transfer</li><li>financing</li><li>invoice</li><li>prepaid_card</li><li>sepa_credit</li></ul>
                     * 
                     */
                    void SetPaymentType(const std::string& _paymentType);

                    /**
                     * 判断参数 PaymentType 是否已赋值
                     * @return PaymentType 是否已赋值
                     * 
                     */
                    bool PaymentTypeHasBeenSet() const;

                    /**
                     * 获取<p>The channel of the payment</p>
                     * @return PaymentChannel <p>The channel of the payment</p>
                     * 
                     */
                    std::string GetPaymentChannel() const;

                    /**
                     * 设置<p>The channel of the payment</p>
                     * @param _paymentChannel <p>The channel of the payment</p>
                     * 
                     */
                    void SetPaymentChannel(const std::string& _paymentChannel);

                    /**
                     * 判断参数 PaymentChannel 是否已赋值
                     * @return PaymentChannel 是否已赋值
                     * 
                     */
                    bool PaymentChannelHasBeenSet() const;

                    /**
                     * 获取<p>The details of the card.Required while PaymentMethod is "credit_card","debit_card"</p>
                     * @return Card <p>The details of the card.Required while PaymentMethod is "credit_card","debit_card"</p>
                     * 
                     */
                    Card GetCard() const;

                    /**
                     * 设置<p>The details of the card.Required while PaymentMethod is "credit_card","debit_card"</p>
                     * @param _card <p>The details of the card.Required while PaymentMethod is "credit_card","debit_card"</p>
                     * 
                     */
                    void SetCard(const Card& _card);

                    /**
                     * 判断参数 Card 是否已赋值
                     * @return Card 是否已赋值
                     * 
                     */
                    bool CardHasBeenSet() const;

                    /**
                     * 获取<p>SEPA direct debit mandate</p><p>Enumeration value:</p><ul><li>true: Yes</li><li>false: No</li></ul>
                     * @return SEPADirectDebitMandate <p>SEPA direct debit mandate</p><p>Enumeration value:</p><ul><li>true: Yes</li><li>false: No</li></ul>
                     * 
                     */
                    bool GetSEPADirectDebitMandate() const;

                    /**
                     * 设置<p>SEPA direct debit mandate</p><p>Enumeration value:</p><ul><li>true: Yes</li><li>false: No</li></ul>
                     * @param _sEPADirectDebitMandate <p>SEPA direct debit mandate</p><p>Enumeration value:</p><ul><li>true: Yes</li><li>false: No</li></ul>
                     * 
                     */
                    void SetSEPADirectDebitMandate(const bool& _sEPADirectDebitMandate);

                    /**
                     * 判断参数 SEPADirectDebitMandate 是否已赋值
                     * @return SEPADirectDebitMandate 是否已赋值
                     * 
                     */
                    bool SEPADirectDebitMandateHasBeenSet() const;

                    /**
                     * 获取<p>The details of the digital wallet when involved digital trade</p>
                     * @return DigitalWallet <p>The details of the digital wallet when involved digital trade</p>
                     * 
                     */
                    Wallet GetDigitalWallet() const;

                    /**
                     * 设置<p>The details of the digital wallet when involved digital trade</p>
                     * @param _digitalWallet <p>The details of the digital wallet when involved digital trade</p>
                     * 
                     */
                    void SetDigitalWallet(const Wallet& _digitalWallet);

                    /**
                     * 判断参数 DigitalWallet 是否已赋值
                     * @return DigitalWallet 是否已赋值
                     * 
                     */
                    bool DigitalWalletHasBeenSet() const;

                private:

                    /**
                     * <p>Payment method</p><p>Enumeration value:</p><ul><li>cash</li><li>check</li><li>credit_card</li><li>debit_card</li><li>crypto_currency</li><li>digital_wallet</li><li>gift_card</li><li>points</li><li>in_app_purchase</li><li>electronic_fund_transfer</li><li>financing</li><li>invoice</li><li>prepaid_card</li><li>sepa_credit</li></ul>
                     */
                    std::string m_paymentType;
                    bool m_paymentTypeHasBeenSet;

                    /**
                     * <p>The channel of the payment</p>
                     */
                    std::string m_paymentChannel;
                    bool m_paymentChannelHasBeenSet;

                    /**
                     * <p>The details of the card.Required while PaymentMethod is "credit_card","debit_card"</p>
                     */
                    Card m_card;
                    bool m_cardHasBeenSet;

                    /**
                     * <p>SEPA direct debit mandate</p><p>Enumeration value:</p><ul><li>true: Yes</li><li>false: No</li></ul>
                     */
                    bool m_sEPADirectDebitMandate;
                    bool m_sEPADirectDebitMandateHasBeenSet;

                    /**
                     * <p>The details of the digital wallet when involved digital trade</p>
                     */
                    Wallet m_digitalWallet;
                    bool m_digitalWalletHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_PAYMENTMETHOD_H_
