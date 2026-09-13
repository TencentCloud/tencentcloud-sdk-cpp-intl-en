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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_COUPON_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_COUPON_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Amount.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * The details of the coupon
                */
                class Coupon : public AbstractModel
                {
                public:
                    Coupon();
                    ~Coupon() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>The unique ID of each coupon</p>
                     * @return CouponId <p>The unique ID of each coupon</p>
                     * 
                     */
                    std::string GetCouponId() const;

                    /**
                     * 设置<p>The unique ID of each coupon</p>
                     * @param _couponId <p>The unique ID of each coupon</p>
                     * 
                     */
                    void SetCouponId(const std::string& _couponId);

                    /**
                     * 判断参数 CouponId 是否已赋值
                     * @return CouponId 是否已赋值
                     * 
                     */
                    bool CouponIdHasBeenSet() const;

                    /**
                     * 获取<p>The name of the coupon</p>
                     * @return CouponName <p>The name of the coupon</p>
                     * 
                     */
                    std::string GetCouponName() const;

                    /**
                     * 设置<p>The name of the coupon</p>
                     * @param _couponName <p>The name of the coupon</p>
                     * 
                     */
                    void SetCouponName(const std::string& _couponName);

                    /**
                     * 判断参数 CouponName 是否已赋值
                     * @return CouponName 是否已赋值
                     * 
                     */
                    bool CouponNameHasBeenSet() const;

                    /**
                     * 获取<p>The start time of the coupon</p><p>Parameter format: Millisecond-level time with UTC time zone compliant with ISO 8601.</p>
                     * @return StartTime <p>The start time of the coupon</p><p>Parameter format: Millisecond-level time with UTC time zone compliant with ISO 8601.</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>The start time of the coupon</p><p>Parameter format: Millisecond-level time with UTC time zone compliant with ISO 8601.</p>
                     * @param _startTime <p>The start time of the coupon</p><p>Parameter format: Millisecond-level time with UTC time zone compliant with ISO 8601.</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>The expiration time of the coupon</p><p>Parameter format: Millisecond-level time with UTC time zone compliant with ISO 8601 standard</p>
                     * @return ExpireTime <p>The expiration time of the coupon</p><p>Parameter format: Millisecond-level time with UTC time zone compliant with ISO 8601 standard</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>The expiration time of the coupon</p><p>Parameter format: Millisecond-level time with UTC time zone compliant with ISO 8601 standard</p>
                     * @param _expireTime <p>The expiration time of the coupon</p><p>Parameter format: Millisecond-level time with UTC time zone compliant with ISO 8601 standard</p>
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>The percentage rate of the coupon. If discount off is 10%,please send 0.1</p>
                     * @return PercentageRate <p>The percentage rate of the coupon. If discount off is 10%,please send 0.1</p>
                     * 
                     */
                    double GetPercentageRate() const;

                    /**
                     * 设置<p>The percentage rate of the coupon. If discount off is 10%,please send 0.1</p>
                     * @param _percentageRate <p>The percentage rate of the coupon. If discount off is 10%,please send 0.1</p>
                     * 
                     */
                    void SetPercentageRate(const double& _percentageRate);

                    /**
                     * 判断参数 PercentageRate 是否已赋值
                     * @return PercentageRate 是否已赋值
                     * 
                     */
                    bool PercentageRateHasBeenSet() const;

                    /**
                     * 获取<p>The discount amount of the coupon</p>
                     * @return DiscountAmount <p>The discount amount of the coupon</p>
                     * 
                     */
                    Amount GetDiscountAmount() const;

                    /**
                     * 设置<p>The discount amount of the coupon</p>
                     * @param _discountAmount <p>The discount amount of the coupon</p>
                     * 
                     */
                    void SetDiscountAmount(const Amount& _discountAmount);

                    /**
                     * 判断参数 DiscountAmount 是否已赋值
                     * @return DiscountAmount 是否已赋值
                     * 
                     */
                    bool DiscountAmountHasBeenSet() const;

                    /**
                     * 获取<p>The threshold amount of the coupon</p>
                     * @return Threshold <p>The threshold amount of the coupon</p>
                     * 
                     */
                    double GetThreshold() const;

                    /**
                     * 设置<p>The threshold amount of the coupon</p>
                     * @param _threshold <p>The threshold amount of the coupon</p>
                     * 
                     */
                    void SetThreshold(const double& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                private:

                    /**
                     * <p>The unique ID of each coupon</p>
                     */
                    std::string m_couponId;
                    bool m_couponIdHasBeenSet;

                    /**
                     * <p>The name of the coupon</p>
                     */
                    std::string m_couponName;
                    bool m_couponNameHasBeenSet;

                    /**
                     * <p>The start time of the coupon</p><p>Parameter format: Millisecond-level time with UTC time zone compliant with ISO 8601.</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>The expiration time of the coupon</p><p>Parameter format: Millisecond-level time with UTC time zone compliant with ISO 8601 standard</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>The percentage rate of the coupon. If discount off is 10%,please send 0.1</p>
                     */
                    double m_percentageRate;
                    bool m_percentageRateHasBeenSet;

                    /**
                     * <p>The discount amount of the coupon</p>
                     */
                    Amount m_discountAmount;
                    bool m_discountAmountHasBeenSet;

                    /**
                     * <p>The threshold amount of the coupon</p>
                     */
                    double m_threshold;
                    bool m_thresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_COUPON_H_
