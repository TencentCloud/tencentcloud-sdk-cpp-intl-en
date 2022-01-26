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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISCOUNTDETAIL_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISCOUNTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/PolicyDetail.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * Package discount details (only returned for price query APIs called in the console).
                */
                class DiscountDetail : public AbstractModel
                {
                public:
                    DiscountDetail();
                    ~DiscountDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Billing duration.
                     * @return TimeSpan Billing duration.
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置Billing duration.
                     * @param TimeSpan Billing duration.
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取Billing unit.
                     * @return TimeUnit Billing unit.
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Billing unit.
                     * @param TimeUnit Billing unit.
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取Total price.
                     * @return TotalCost Total price.
                     */
                    double GetTotalCost() const;

                    /**
                     * 设置Total price.
                     * @param TotalCost Total price.
                     */
                    void SetTotalCost(const double& _totalCost);

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     */
                    bool TotalCostHasBeenSet() const;

                    /**
                     * 获取Discounted total price.
                     * @return RealTotalCost Discounted total price.
                     */
                    double GetRealTotalCost() const;

                    /**
                     * 设置Discounted total price.
                     * @param RealTotalCost Discounted total price.
                     */
                    void SetRealTotalCost(const double& _realTotalCost);

                    /**
                     * 判断参数 RealTotalCost 是否已赋值
                     * @return RealTotalCost 是否已赋值
                     */
                    bool RealTotalCostHasBeenSet() const;

                    /**
                     * 获取Discount.
                     * @return Discount Discount.
                     */
                    int64_t GetDiscount() const;

                    /**
                     * 设置Discount.
                     * @param Discount Discount.
                     */
                    void SetDiscount(const int64_t& _discount);

                    /**
                     * 判断参数 Discount 是否已赋值
                     * @return Discount 是否已赋值
                     */
                    bool DiscountHasBeenSet() const;

                    /**
                     * 获取Discount details.
                     * @return PolicyDetail Discount details.
                     */
                    PolicyDetail GetPolicyDetail() const;

                    /**
                     * 设置Discount details.
                     * @param PolicyDetail Discount details.
                     */
                    void SetPolicyDetail(const PolicyDetail& _policyDetail);

                    /**
                     * 判断参数 PolicyDetail 是否已赋值
                     * @return PolicyDetail 是否已赋值
                     */
                    bool PolicyDetailHasBeenSet() const;

                private:

                    /**
                     * Billing duration.
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Billing unit.
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Total price.
                     */
                    double m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * Discounted total price.
                     */
                    double m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * Discount.
                     */
                    int64_t m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * Discount details.
                     */
                    PolicyDetail m_policyDetail;
                    bool m_policyDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISCOUNTDETAIL_H_
