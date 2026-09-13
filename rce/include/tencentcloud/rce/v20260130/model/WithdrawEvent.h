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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_WITHDRAWEVENT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_WITHDRAWEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Amount.h>
#include <tencentcloud/rce/v20260130/model/Card.h>
#include <tencentcloud/rce/v20260130/model/Wallet.h>
#include <tencentcloud/rce/v20260130/model/Result.h>
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
                * Withdraw event details
                */
                class WithdrawEvent : public AbstractModel
                {
                public:
                    WithdrawEvent();
                    ~WithdrawEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>The amount of the withdraw</p>
                     * @return Amount <p>The amount of the withdraw</p>
                     * 
                     */
                    Amount GetAmount() const;

                    /**
                     * 设置<p>The amount of the withdraw</p>
                     * @param _amount <p>The amount of the withdraw</p>
                     * 
                     */
                    void SetAmount(const Amount& _amount);

                    /**
                     * 判断参数 Amount 是否已赋值
                     * @return Amount 是否已赋值
                     * 
                     */
                    bool AmountHasBeenSet() const;

                    /**
                     * 获取<p>The method of the withdraw</p><p>Enumeration value:</p><ul><li>card: bank card</li><li>wallet: digital wallet</li></ul>
                     * @return Method <p>The method of the withdraw</p><p>Enumeration value:</p><ul><li>card: bank card</li><li>wallet: digital wallet</li></ul>
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置<p>The method of the withdraw</p><p>Enumeration value:</p><ul><li>card: bank card</li><li>wallet: digital wallet</li></ul>
                     * @param _method <p>The method of the withdraw</p><p>Enumeration value:</p><ul><li>card: bank card</li><li>wallet: digital wallet</li></ul>
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取<p>The detail information of the card withdrawn to.Required while the withdraw method is card</p>
                     * @return Card <p>The detail information of the card withdrawn to.Required while the withdraw method is card</p>
                     * 
                     */
                    Card GetCard() const;

                    /**
                     * 设置<p>The detail information of the card withdrawn to.Required while the withdraw method is card</p>
                     * @param _card <p>The detail information of the card withdrawn to.Required while the withdraw method is card</p>
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
                     * 获取<p>The detail information of the wallet withdrawn to.Required while the withdraw method is wallet</p>
                     * @return Wallet <p>The detail information of the wallet withdrawn to.Required while the withdraw method is wallet</p>
                     * 
                     */
                    Wallet GetWallet() const;

                    /**
                     * 设置<p>The detail information of the wallet withdrawn to.Required while the withdraw method is wallet</p>
                     * @param _wallet <p>The detail information of the wallet withdrawn to.Required while the withdraw method is wallet</p>
                     * 
                     */
                    void SetWallet(const Wallet& _wallet);

                    /**
                     * 判断参数 Wallet 是否已赋值
                     * @return Wallet 是否已赋值
                     * 
                     */
                    bool WalletHasBeenSet() const;

                    /**
                     * 获取<p>Withdraw result</p>
                     * @return Result <p>Withdraw result</p>
                     * 
                     */
                    Result GetResult() const;

                    /**
                     * 设置<p>Withdraw result</p>
                     * @param _result <p>Withdraw result</p>
                     * 
                     */
                    void SetResult(const Result& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

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
                     * <p>The amount of the withdraw</p>
                     */
                    Amount m_amount;
                    bool m_amountHasBeenSet;

                    /**
                     * <p>The method of the withdraw</p><p>Enumeration value:</p><ul><li>card: bank card</li><li>wallet: digital wallet</li></ul>
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * <p>The detail information of the card withdrawn to.Required while the withdraw method is card</p>
                     */
                    Card m_card;
                    bool m_cardHasBeenSet;

                    /**
                     * <p>The detail information of the wallet withdrawn to.Required while the withdraw method is wallet</p>
                     */
                    Wallet m_wallet;
                    bool m_walletHasBeenSet;

                    /**
                     * <p>Withdraw result</p>
                     */
                    Result m_result;
                    bool m_resultHasBeenSet;

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

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_WITHDRAWEVENT_H_
