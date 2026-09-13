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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_REDEEMEVENT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_REDEEMEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Order.h>
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
                * Redeem event details
                */
                class RedeemEvent : public AbstractModel
                {
                public:
                    RedeemEvent();
                    ~RedeemEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>The ID of the promotion</p>
                     * @return PromotionId <p>The ID of the promotion</p>
                     * 
                     */
                    std::string GetPromotionId() const;

                    /**
                     * 设置<p>The ID of the promotion</p>
                     * @param _promotionId <p>The ID of the promotion</p>
                     * 
                     */
                    void SetPromotionId(const std::string& _promotionId);

                    /**
                     * 判断参数 PromotionId 是否已赋值
                     * @return PromotionId 是否已赋值
                     * 
                     */
                    bool PromotionIdHasBeenSet() const;

                    /**
                     * 获取<p>The name of the promotion</p>
                     * @return PromotionName <p>The name of the promotion</p>
                     * 
                     */
                    std::string GetPromotionName() const;

                    /**
                     * 设置<p>The name of the promotion</p>
                     * @param _promotionName <p>The name of the promotion</p>
                     * 
                     */
                    void SetPromotionName(const std::string& _promotionName);

                    /**
                     * 判断参数 PromotionName 是否已赋值
                     * @return PromotionName 是否已赋值
                     * 
                     */
                    bool PromotionNameHasBeenSet() const;

                    /**
                     * 获取<p>The description of the promotion</p>
                     * @return Description <p>The description of the promotion</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>The description of the promotion</p>
                     * @param _description <p>The description of the promotion</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>The ID of the inviter</p>
                     * @return InviterUserId <p>The ID of the inviter</p>
                     * 
                     */
                    std::string GetInviterUserId() const;

                    /**
                     * 设置<p>The ID of the inviter</p>
                     * @param _inviterUserId <p>The ID of the inviter</p>
                     * 
                     */
                    void SetInviterUserId(const std::string& _inviterUserId);

                    /**
                     * 判断参数 InviterUserId 是否已赋值
                     * @return InviterUserId 是否已赋值
                     * 
                     */
                    bool InviterUserIdHasBeenSet() const;

                    /**
                     * 获取<p>Order information associated with the redemption</p>
                     * @return Order <p>Order information associated with the redemption</p>
                     * 
                     */
                    Order GetOrder() const;

                    /**
                     * 设置<p>Order information associated with the redemption</p>
                     * @param _order <p>Order information associated with the redemption</p>
                     * 
                     */
                    void SetOrder(const Order& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取<p>The result of redemption</p>
                     * @return Result <p>The result of redemption</p>
                     * 
                     */
                    Result GetResult() const;

                    /**
                     * 设置<p>The result of redemption</p>
                     * @param _result <p>The result of redemption</p>
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
                     * <p>The ID of the promotion</p>
                     */
                    std::string m_promotionId;
                    bool m_promotionIdHasBeenSet;

                    /**
                     * <p>The name of the promotion</p>
                     */
                    std::string m_promotionName;
                    bool m_promotionNameHasBeenSet;

                    /**
                     * <p>The description of the promotion</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>The ID of the inviter</p>
                     */
                    std::string m_inviterUserId;
                    bool m_inviterUserIdHasBeenSet;

                    /**
                     * <p>Order information associated with the redemption</p>
                     */
                    Order m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>The result of redemption</p>
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

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_REDEEMEVENT_H_
