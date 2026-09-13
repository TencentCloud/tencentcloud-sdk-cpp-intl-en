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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_PROMOTION_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_PROMOTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Coupon.h>
#include <tencentcloud/rce/v20260130/model/CreditPoint.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * The details of the promotion
                */
                class Promotion : public AbstractModel
                {
                public:
                    Promotion();
                    ~Promotion() = default;
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
                     * 获取<p>The coupon(s) associated with the promotion</p>
                     * @return Coupon <p>The coupon(s) associated with the promotion</p>
                     * 
                     */
                    Coupon GetCoupon() const;

                    /**
                     * 设置<p>The coupon(s) associated with the promotion</p>
                     * @param _coupon <p>The coupon(s) associated with the promotion</p>
                     * 
                     */
                    void SetCoupon(const Coupon& _coupon);

                    /**
                     * 判断参数 Coupon 是否已赋值
                     * @return Coupon 是否已赋值
                     * 
                     */
                    bool CouponHasBeenSet() const;

                    /**
                     * 获取<p>The point(s) associated with the promotion</p>
                     * @return CreditPoint <p>The point(s) associated with the promotion</p>
                     * 
                     */
                    CreditPoint GetCreditPoint() const;

                    /**
                     * 设置<p>The point(s) associated with the promotion</p>
                     * @param _creditPoint <p>The point(s) associated with the promotion</p>
                     * 
                     */
                    void SetCreditPoint(const CreditPoint& _creditPoint);

                    /**
                     * 判断参数 CreditPoint 是否已赋值
                     * @return CreditPoint 是否已赋值
                     * 
                     */
                    bool CreditPointHasBeenSet() const;

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
                     * <p>The coupon(s) associated with the promotion</p>
                     */
                    Coupon m_coupon;
                    bool m_couponHasBeenSet;

                    /**
                     * <p>The point(s) associated with the promotion</p>
                     */
                    CreditPoint m_creditPoint;
                    bool m_creditPointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_PROMOTION_H_
