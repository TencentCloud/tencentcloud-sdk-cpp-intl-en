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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_CHARGEBACKEVENT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_CHARGEBACKEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Amount.h>
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
                * ChargeBack event details
                */
                class ChargeBackEvent : public AbstractModel
                {
                public:
                    ChargeBackEvent();
                    ~ChargeBackEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>The ID of the transaction</p>
                     * @return TransactionId <p>The ID of the transaction</p>
                     * 
                     */
                    std::string GetTransactionId() const;

                    /**
                     * 设置<p>The ID of the transaction</p>
                     * @param _transactionId <p>The ID of the transaction</p>
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
                     * 获取<p>The code of the chargeback defined by the card organization, for example: 10.1, 13.1, 4870, 4871</p>
                     * @return ChargeBackCode <p>The code of the chargeback defined by the card organization, for example: 10.1, 13.1, 4870, 4871</p>
                     * 
                     */
                    std::string GetChargeBackCode() const;

                    /**
                     * 设置<p>The code of the chargeback defined by the card organization, for example: 10.1, 13.1, 4870, 4871</p>
                     * @param _chargeBackCode <p>The code of the chargeback defined by the card organization, for example: 10.1, 13.1, 4870, 4871</p>
                     * 
                     */
                    void SetChargeBackCode(const std::string& _chargeBackCode);

                    /**
                     * 判断参数 ChargeBackCode 是否已赋值
                     * @return ChargeBackCode 是否已赋值
                     * 
                     */
                    bool ChargeBackCodeHasBeenSet() const;

                    /**
                     * 获取<p>The reason of the chargeback defined by the card organization, for example: non-receipt of goods, fraud</p>
                     * @return ChargeBackReason <p>The reason of the chargeback defined by the card organization, for example: non-receipt of goods, fraud</p>
                     * 
                     */
                    std::string GetChargeBackReason() const;

                    /**
                     * 设置<p>The reason of the chargeback defined by the card organization, for example: non-receipt of goods, fraud</p>
                     * @param _chargeBackReason <p>The reason of the chargeback defined by the card organization, for example: non-receipt of goods, fraud</p>
                     * 
                     */
                    void SetChargeBackReason(const std::string& _chargeBackReason);

                    /**
                     * 判断参数 ChargeBackReason 是否已赋值
                     * @return ChargeBackReason 是否已赋值
                     * 
                     */
                    bool ChargeBackReasonHasBeenSet() const;

                    /**
                     * 获取<p>The process of the chargeback defined by the card organization</p><p>Enumeration values:</p><ul><li>need_response: Merchant needs to respond</li><li>information_supplied: Merchant has provided information</li><li>chargeback_reversed: Chargeback has been canceled</li><li>chargeback_sustained: Chargeback has been established</li></ul>
                     * @return ChargeBackProcess <p>The process of the chargeback defined by the card organization</p><p>Enumeration values:</p><ul><li>need_response: Merchant needs to respond</li><li>information_supplied: Merchant has provided information</li><li>chargeback_reversed: Chargeback has been canceled</li><li>chargeback_sustained: Chargeback has been established</li></ul>
                     * 
                     */
                    std::string GetChargeBackProcess() const;

                    /**
                     * 设置<p>The process of the chargeback defined by the card organization</p><p>Enumeration values:</p><ul><li>need_response: Merchant needs to respond</li><li>information_supplied: Merchant has provided information</li><li>chargeback_reversed: Chargeback has been canceled</li><li>chargeback_sustained: Chargeback has been established</li></ul>
                     * @param _chargeBackProcess <p>The process of the chargeback defined by the card organization</p><p>Enumeration values:</p><ul><li>need_response: Merchant needs to respond</li><li>information_supplied: Merchant has provided information</li><li>chargeback_reversed: Chargeback has been canceled</li><li>chargeback_sustained: Chargeback has been established</li></ul>
                     * 
                     */
                    void SetChargeBackProcess(const std::string& _chargeBackProcess);

                    /**
                     * 判断参数 ChargeBackProcess 是否已赋值
                     * @return ChargeBackProcess 是否已赋值
                     * 
                     */
                    bool ChargeBackProcessHasBeenSet() const;

                    /**
                     * 获取<p>The amount of the chargeback</p>
                     * @return ChargeBackAmount <p>The amount of the chargeback</p>
                     * 
                     */
                    Amount GetChargeBackAmount() const;

                    /**
                     * 设置<p>The amount of the chargeback</p>
                     * @param _chargeBackAmount <p>The amount of the chargeback</p>
                     * 
                     */
                    void SetChargeBackAmount(const Amount& _chargeBackAmount);

                    /**
                     * 判断参数 ChargeBackAmount 是否已赋值
                     * @return ChargeBackAmount 是否已赋值
                     * 
                     */
                    bool ChargeBackAmountHasBeenSet() const;

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
                     * <p>The ID of the transaction</p>
                     */
                    std::string m_transactionId;
                    bool m_transactionIdHasBeenSet;

                    /**
                     * <p>The ID(s) of the order associated with the transaction</p>
                     */
                    std::vector<std::string> m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * <p>The code of the chargeback defined by the card organization, for example: 10.1, 13.1, 4870, 4871</p>
                     */
                    std::string m_chargeBackCode;
                    bool m_chargeBackCodeHasBeenSet;

                    /**
                     * <p>The reason of the chargeback defined by the card organization, for example: non-receipt of goods, fraud</p>
                     */
                    std::string m_chargeBackReason;
                    bool m_chargeBackReasonHasBeenSet;

                    /**
                     * <p>The process of the chargeback defined by the card organization</p><p>Enumeration values:</p><ul><li>need_response: Merchant needs to respond</li><li>information_supplied: Merchant has provided information</li><li>chargeback_reversed: Chargeback has been canceled</li><li>chargeback_sustained: Chargeback has been established</li></ul>
                     */
                    std::string m_chargeBackProcess;
                    bool m_chargeBackProcessHasBeenSet;

                    /**
                     * <p>The amount of the chargeback</p>
                     */
                    Amount m_chargeBackAmount;
                    bool m_chargeBackAmountHasBeenSet;

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

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_CHARGEBACKEVENT_H_
