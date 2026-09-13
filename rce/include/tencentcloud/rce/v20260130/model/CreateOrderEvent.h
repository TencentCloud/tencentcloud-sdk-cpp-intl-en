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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_CREATEORDEREVENT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_CREATEORDEREVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Amount.h>
#include <tencentcloud/rce/v20260130/model/Merchant.h>
#include <tencentcloud/rce/v20260130/model/Billing.h>
#include <tencentcloud/rce/v20260130/model/Item.h>
#include <tencentcloud/rce/v20260130/model/Delivery.h>
#include <tencentcloud/rce/v20260130/model/Promotion.h>
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
                * CreateOrder event details
                */
                class CreateOrderEvent : public AbstractModel
                {
                public:
                    CreateOrderEvent();
                    ~CreateOrderEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>The ID of the order</p>
                     * @return OrderId <p>The ID of the order</p>
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置<p>The ID of the order</p>
                     * @param _orderId <p>The ID of the order</p>
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取<p>The amount of the order</p>
                     * @return Amount <p>The amount of the order</p>
                     * 
                     */
                    Amount GetAmount() const;

                    /**
                     * 设置<p>The amount of the order</p>
                     * @param _amount <p>The amount of the order</p>
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
                     * 获取<p>The detail information of the merchant associated with the order</p>
                     * @return Merchant <p>The detail information of the merchant associated with the order</p>
                     * 
                     */
                    Merchant GetMerchant() const;

                    /**
                     * 设置<p>The detail information of the merchant associated with the order</p>
                     * @param _merchant <p>The detail information of the merchant associated with the order</p>
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
                     * 获取<p>The detail information of the bill associated with the order</p>
                     * @return Billing <p>The detail information of the bill associated with the order</p>
                     * 
                     */
                    Billing GetBilling() const;

                    /**
                     * 设置<p>The detail information of the bill associated with the order</p>
                     * @param _billing <p>The detail information of the bill associated with the order</p>
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
                     * 获取<p>The detail information of the items in the order</p>
                     * @return Items <p>The detail information of the items in the order</p>
                     * 
                     */
                    std::vector<Item> GetItems() const;

                    /**
                     * 设置<p>The detail information of the items in the order</p>
                     * @param _items <p>The detail information of the items in the order</p>
                     * 
                     */
                    void SetItems(const std::vector<Item>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取<p>The detail information of the delivery associated with the order</p>
                     * @return Delivery <p>The detail information of the delivery associated with the order</p>
                     * 
                     */
                    Delivery GetDelivery() const;

                    /**
                     * 设置<p>The detail information of the delivery associated with the order</p>
                     * @param _delivery <p>The detail information of the delivery associated with the order</p>
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
                     * 获取<p>The promotion(s) associated with the order</p>
                     * @return Promotions <p>The promotion(s) associated with the order</p>
                     * 
                     */
                    std::vector<Promotion> GetPromotions() const;

                    /**
                     * 设置<p>The promotion(s) associated with the order</p>
                     * @param _promotions <p>The promotion(s) associated with the order</p>
                     * 
                     */
                    void SetPromotions(const std::vector<Promotion>& _promotions);

                    /**
                     * 判断参数 Promotions 是否已赋值
                     * @return Promotions 是否已赋值
                     * 
                     */
                    bool PromotionsHasBeenSet() const;

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
                     * <p>The ID of the order</p>
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * <p>The amount of the order</p>
                     */
                    Amount m_amount;
                    bool m_amountHasBeenSet;

                    /**
                     * <p>The detail information of the merchant associated with the order</p>
                     */
                    Merchant m_merchant;
                    bool m_merchantHasBeenSet;

                    /**
                     * <p>The detail information of the bill associated with the order</p>
                     */
                    Billing m_billing;
                    bool m_billingHasBeenSet;

                    /**
                     * <p>The detail information of the items in the order</p>
                     */
                    std::vector<Item> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * <p>The detail information of the delivery associated with the order</p>
                     */
                    Delivery m_delivery;
                    bool m_deliveryHasBeenSet;

                    /**
                     * <p>The promotion(s) associated with the order</p>
                     */
                    std::vector<Promotion> m_promotions;
                    bool m_promotionsHasBeenSet;

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

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_CREATEORDEREVENT_H_
