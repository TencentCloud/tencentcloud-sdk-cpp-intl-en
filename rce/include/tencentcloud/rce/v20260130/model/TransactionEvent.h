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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_TRANSACTIONEVENT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_TRANSACTIONEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Amount.h>
#include <tencentcloud/rce/v20260130/model/PaymentMethod.h>
#include <tencentcloud/rce/v20260130/model/Billing.h>
#include <tencentcloud/rce/v20260130/model/Delivery.h>
#include <tencentcloud/rce/v20260130/model/Merchant.h>
#include <tencentcloud/rce/v20260130/model/PaymentResult.h>
#include <tencentcloud/rce/v20260130/model/Address.h>
#include <tencentcloud/rce/v20260130/model/DigitalOrder.h>
#include <tencentcloud/rce/v20260130/model/Wallet.h>
#include <tencentcloud/rce/v20260130/model/Cust.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * Transaction event details
                */
                class TransactionEvent : public AbstractModel
                {
                public:
                    TransactionEvent();
                    ~TransactionEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>The unique ID of the transaction</p>
                     * @return TransactionId <p>The unique ID of the transaction</p>
                     * 
                     */
                    std::string GetTransactionId() const;

                    /**
                     * 设置<p>The unique ID of the transaction</p>
                     * @param _transactionId <p>The unique ID of the transaction</p>
                     * 
                     */
                    void SetTransactionId(const std::string& _transactionId);

                    /**
                     * 判断参数 TransactionId 是否已赋值
                     * @return TransactionId 是否已赋值
                     * 
                     */
                    bool TransactionIdHasBeenSet() const;

                    /**
                     * 获取<p>The ID(s) of the order associated with the transaction</p>
                     * @return OrderId <p>The ID(s) of the order associated with the transaction</p>
                     * 
                     */
                    std::vector<std::string> GetOrderId() const;

                    /**
                     * 设置<p>The ID(s) of the order associated with the transaction</p>
                     * @param _orderId <p>The ID(s) of the order associated with the transaction</p>
                     * 
                     */
                    void SetOrderId(const std::vector<std::string>& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取<p>The amount of the transaction</p>
                     * @return PaymentAmount <p>The amount of the transaction</p>
                     * 
                     */
                    Amount GetPaymentAmount() const;

                    /**
                     * 设置<p>The amount of the transaction</p>
                     * @param _paymentAmount <p>The amount of the transaction</p>
                     * 
                     */
                    void SetPaymentAmount(const Amount& _paymentAmount);

                    /**
                     * 判断参数 PaymentAmount 是否已赋值
                     * @return PaymentAmount 是否已赋值
                     * 
                     */
                    bool PaymentAmountHasBeenSet() const;

                    /**
                     * 获取<p>The detail information of the payment method associated with the transaction</p>
                     * @return PaymentMethod <p>The detail information of the payment method associated with the transaction</p>
                     * 
                     */
                    PaymentMethod GetPaymentMethod() const;

                    /**
                     * 设置<p>The detail information of the payment method associated with the transaction</p>
                     * @param _paymentMethod <p>The detail information of the payment method associated with the transaction</p>
                     * 
                     */
                    void SetPaymentMethod(const PaymentMethod& _paymentMethod);

                    /**
                     * 判断参数 PaymentMethod 是否已赋值
                     * @return PaymentMethod 是否已赋值
                     * 
                     */
                    bool PaymentMethodHasBeenSet() const;

                    /**
                     * 获取<p>Transaction type</p><p>Enumeration value:</p><ul><li>sale: One-time authorization and deduction (most common)</li><li>authorize: Authorization only (frozen amount)</li><li>capture: Execute deduction (after authorization)</li><li>void: Cancel pending authorization or deduction</li><li>refund: Refund (part or all)</li><li>deposit: Deposit to account</li><li>withdrawal: Withdrawal from account</li><li>transfer: Fund transfer between accounts</li><li>buy: Purchase asset (for example, crypto currency)</li><li>sell: Sell asset</li><li>send: Send fund/asset (for example, cross-wallet transfer)</li><li>receive: Receive fund/asset</li></ul><p>Default value: sale</p>
                     * @return TransactionType <p>Transaction type</p><p>Enumeration value:</p><ul><li>sale: One-time authorization and deduction (most common)</li><li>authorize: Authorization only (frozen amount)</li><li>capture: Execute deduction (after authorization)</li><li>void: Cancel pending authorization or deduction</li><li>refund: Refund (part or all)</li><li>deposit: Deposit to account</li><li>withdrawal: Withdrawal from account</li><li>transfer: Fund transfer between accounts</li><li>buy: Purchase asset (for example, crypto currency)</li><li>sell: Sell asset</li><li>send: Send fund/asset (for example, cross-wallet transfer)</li><li>receive: Receive fund/asset</li></ul><p>Default value: sale</p>
                     * 
                     */
                    std::string GetTransactionType() const;

                    /**
                     * 设置<p>Transaction type</p><p>Enumeration value:</p><ul><li>sale: One-time authorization and deduction (most common)</li><li>authorize: Authorization only (frozen amount)</li><li>capture: Execute deduction (after authorization)</li><li>void: Cancel pending authorization or deduction</li><li>refund: Refund (part or all)</li><li>deposit: Deposit to account</li><li>withdrawal: Withdrawal from account</li><li>transfer: Fund transfer between accounts</li><li>buy: Purchase asset (for example, crypto currency)</li><li>sell: Sell asset</li><li>send: Send fund/asset (for example, cross-wallet transfer)</li><li>receive: Receive fund/asset</li></ul><p>Default value: sale</p>
                     * @param _transactionType <p>Transaction type</p><p>Enumeration value:</p><ul><li>sale: One-time authorization and deduction (most common)</li><li>authorize: Authorization only (frozen amount)</li><li>capture: Execute deduction (after authorization)</li><li>void: Cancel pending authorization or deduction</li><li>refund: Refund (part or all)</li><li>deposit: Deposit to account</li><li>withdrawal: Withdrawal from account</li><li>transfer: Fund transfer between accounts</li><li>buy: Purchase asset (for example, crypto currency)</li><li>sell: Sell asset</li><li>send: Send fund/asset (for example, cross-wallet transfer)</li><li>receive: Receive fund/asset</li></ul><p>Default value: sale</p>
                     * 
                     */
                    void SetTransactionType(const std::string& _transactionType);

                    /**
                     * 判断参数 TransactionType 是否已赋值
                     * @return TransactionType 是否已赋值
                     * 
                     */
                    bool TransactionTypeHasBeenSet() const;

                    /**
                     * 获取<p>Bill information</p>
                     * @return Billing <p>Bill information</p>
                     * 
                     */
                    Billing GetBilling() const;

                    /**
                     * 设置<p>Bill information</p>
                     * @param _billing <p>Bill information</p>
                     * 
                     */
                    void SetBilling(const Billing& _billing);

                    /**
                     * 判断参数 Billing 是否已赋值
                     * @return Billing 是否已赋值
                     * 
                     */
                    bool BillingHasBeenSet() const;

                    /**
                     * 获取<p>Delivery information</p>
                     * @return Delivery <p>Delivery information</p>
                     * 
                     */
                    Delivery GetDelivery() const;

                    /**
                     * 设置<p>Delivery information</p>
                     * @param _delivery <p>Delivery information</p>
                     * 
                     */
                    void SetDelivery(const Delivery& _delivery);

                    /**
                     * 判断参数 Delivery 是否已赋值
                     * @return Delivery 是否已赋值
                     * 
                     */
                    bool DeliveryHasBeenSet() const;

                    /**
                     * 获取<p>Merchant information</p>
                     * @return Merchant <p>Merchant information</p>
                     * 
                     */
                    Merchant GetMerchant() const;

                    /**
                     * 设置<p>Merchant information</p>
                     * @param _merchant <p>Merchant information</p>
                     * 
                     */
                    void SetMerchant(const Merchant& _merchant);

                    /**
                     * 判断参数 Merchant 是否已赋值
                     * @return Merchant 是否已赋值
                     * 
                     */
                    bool MerchantHasBeenSet() const;

                    /**
                     * 获取<p>Payment result</p>
                     * @return PaymentResult <p>Payment result</p>
                     * 
                     */
                    PaymentResult GetPaymentResult() const;

                    /**
                     * 设置<p>Payment result</p>
                     * @param _paymentResult <p>Payment result</p>
                     * 
                     */
                    void SetPaymentResult(const PaymentResult& _paymentResult);

                    /**
                     * 判断参数 PaymentResult 是否已赋值
                     * @return PaymentResult 是否已赋值
                     * 
                     */
                    bool PaymentResultHasBeenSet() const;

                    /**
                     * 获取<p>The ID of the recipent in transfer transaction</p>
                     * @return TransferRecipientUserId <p>The ID of the recipent in transfer transaction</p>
                     * 
                     */
                    std::string GetTransferRecipientUserId() const;

                    /**
                     * 设置<p>The ID of the recipent in transfer transaction</p>
                     * @param _transferRecipientUserId <p>The ID of the recipent in transfer transaction</p>
                     * 
                     */
                    void SetTransferRecipientUserId(const std::string& _transferRecipientUserId);

                    /**
                     * 判断参数 TransferRecipientUserId 是否已赋值
                     * @return TransferRecipientUserId 是否已赋值
                     * 
                     */
                    bool TransferRecipientUserIdHasBeenSet() const;

                    /**
                     * 获取<p>The address of the sender in transfer transaction</p>
                     * @return TransferSentAddress <p>The address of the sender in transfer transaction</p>
                     * 
                     */
                    Address GetTransferSentAddress() const;

                    /**
                     * 设置<p>The address of the sender in transfer transaction</p>
                     * @param _transferSentAddress <p>The address of the sender in transfer transaction</p>
                     * 
                     */
                    void SetTransferSentAddress(const Address& _transferSentAddress);

                    /**
                     * 判断参数 TransferSentAddress 是否已赋值
                     * @return TransferSentAddress 是否已赋值
                     * 
                     */
                    bool TransferSentAddressHasBeenSet() const;

                    /**
                     * 获取<p>Physical address of the recipient, applicable to the transfer transaction type.</p>
                     * @return TransferReceivedAddress <p>Physical address of the recipient, applicable to the transfer transaction type.</p>
                     * 
                     */
                    Address GetTransferReceivedAddress() const;

                    /**
                     * 设置<p>Physical address of the recipient, applicable to the transfer transaction type.</p>
                     * @param _transferReceivedAddress <p>Physical address of the recipient, applicable to the transfer transaction type.</p>
                     * 
                     */
                    void SetTransferReceivedAddress(const Address& _transferReceivedAddress);

                    /**
                     * 判断参数 TransferReceivedAddress 是否已赋值
                     * @return TransferReceivedAddress 是否已赋值
                     * 
                     */
                    bool TransferReceivedAddressHasBeenSet() const;

                    /**
                     * 获取<p>The digital order(s) associated with the transaction</p>
                     * @return DigitalOrders <p>The digital order(s) associated with the transaction</p>
                     * 
                     */
                    std::vector<DigitalOrder> GetDigitalOrders() const;

                    /**
                     * 设置<p>The digital order(s) associated with the transaction</p>
                     * @param _digitalOrders <p>The digital order(s) associated with the transaction</p>
                     * 
                     */
                    void SetDigitalOrders(const std::vector<DigitalOrder>& _digitalOrders);

                    /**
                     * 判断参数 DigitalOrders 是否已赋值
                     * @return DigitalOrders 是否已赋值
                     * 
                     */
                    bool DigitalOrdersHasBeenSet() const;

                    /**
                     * 获取<p>Wallet to receive crypto currency</p>
                     * @return ReceiverWallet <p>Wallet to receive crypto currency</p>
                     * 
                     */
                    Wallet GetReceiverWallet() const;

                    /**
                     * 设置<p>Wallet to receive crypto currency</p>
                     * @param _receiverWallet <p>Wallet to receive crypto currency</p>
                     * 
                     */
                    void SetReceiverWallet(const Wallet& _receiverWallet);

                    /**
                     * 判断参数 ReceiverWallet 是否已赋值
                     * @return ReceiverWallet 是否已赋值
                     * 
                     */
                    bool ReceiverWalletHasBeenSet() const;

                    /**
                     * 获取<p>The custom parameters agreed with RCE. An array of objects in K:V format. e.g.[{"Key": "ApproverName", "Value": "bob"},{"Key":"ApproverPhone","Value": "+86131****5678"}]</p>
                     * @return Cust <p>The custom parameters agreed with RCE. An array of objects in K:V format. e.g.[{"Key": "ApproverName", "Value": "bob"},{"Key":"ApproverPhone","Value": "+86131****5678"}]</p>
                     * 
                     */
                    std::vector<Cust> GetCust() const;

                    /**
                     * 设置<p>The custom parameters agreed with RCE. An array of objects in K:V format. e.g.[{"Key": "ApproverName", "Value": "bob"},{"Key":"ApproverPhone","Value": "+86131****5678"}]</p>
                     * @param _cust <p>The custom parameters agreed with RCE. An array of objects in K:V format. e.g.[{"Key": "ApproverName", "Value": "bob"},{"Key":"ApproverPhone","Value": "+86131****5678"}]</p>
                     * 
                     */
                    void SetCust(const std::vector<Cust>& _cust);

                    /**
                     * 判断参数 Cust 是否已赋值
                     * @return Cust 是否已赋值
                     * 
                     */
                    bool CustHasBeenSet() const;

                private:

                    /**
                     * <p>The unique ID of the transaction</p>
                     */
                    std::string m_transactionId;
                    bool m_transactionIdHasBeenSet;

                    /**
                     * <p>The ID(s) of the order associated with the transaction</p>
                     */
                    std::vector<std::string> m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * <p>The amount of the transaction</p>
                     */
                    Amount m_paymentAmount;
                    bool m_paymentAmountHasBeenSet;

                    /**
                     * <p>The detail information of the payment method associated with the transaction</p>
                     */
                    PaymentMethod m_paymentMethod;
                    bool m_paymentMethodHasBeenSet;

                    /**
                     * <p>Transaction type</p><p>Enumeration value:</p><ul><li>sale: One-time authorization and deduction (most common)</li><li>authorize: Authorization only (frozen amount)</li><li>capture: Execute deduction (after authorization)</li><li>void: Cancel pending authorization or deduction</li><li>refund: Refund (part or all)</li><li>deposit: Deposit to account</li><li>withdrawal: Withdrawal from account</li><li>transfer: Fund transfer between accounts</li><li>buy: Purchase asset (for example, crypto currency)</li><li>sell: Sell asset</li><li>send: Send fund/asset (for example, cross-wallet transfer)</li><li>receive: Receive fund/asset</li></ul><p>Default value: sale</p>
                     */
                    std::string m_transactionType;
                    bool m_transactionTypeHasBeenSet;

                    /**
                     * <p>Bill information</p>
                     */
                    Billing m_billing;
                    bool m_billingHasBeenSet;

                    /**
                     * <p>Delivery information</p>
                     */
                    Delivery m_delivery;
                    bool m_deliveryHasBeenSet;

                    /**
                     * <p>Merchant information</p>
                     */
                    Merchant m_merchant;
                    bool m_merchantHasBeenSet;

                    /**
                     * <p>Payment result</p>
                     */
                    PaymentResult m_paymentResult;
                    bool m_paymentResultHasBeenSet;

                    /**
                     * <p>The ID of the recipent in transfer transaction</p>
                     */
                    std::string m_transferRecipientUserId;
                    bool m_transferRecipientUserIdHasBeenSet;

                    /**
                     * <p>The address of the sender in transfer transaction</p>
                     */
                    Address m_transferSentAddress;
                    bool m_transferSentAddressHasBeenSet;

                    /**
                     * <p>Physical address of the recipient, applicable to the transfer transaction type.</p>
                     */
                    Address m_transferReceivedAddress;
                    bool m_transferReceivedAddressHasBeenSet;

                    /**
                     * <p>The digital order(s) associated with the transaction</p>
                     */
                    std::vector<DigitalOrder> m_digitalOrders;
                    bool m_digitalOrdersHasBeenSet;

                    /**
                     * <p>Wallet to receive crypto currency</p>
                     */
                    Wallet m_receiverWallet;
                    bool m_receiverWalletHasBeenSet;

                    /**
                     * <p>The custom parameters agreed with RCE. An array of objects in K:V format. e.g.[{"Key": "ApproverName", "Value": "bob"},{"Key":"ApproverPhone","Value": "+86131****5678"}]</p>
                     */
                    std::vector<Cust> m_cust;
                    bool m_custHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_TRANSACTIONEVENT_H_
