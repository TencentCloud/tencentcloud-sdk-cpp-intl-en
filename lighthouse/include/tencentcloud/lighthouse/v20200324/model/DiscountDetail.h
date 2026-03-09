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
                     * 获取<P>Billing duration.</p>.
                     * @return TimeSpan <P>Billing duration.</p>.
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置<P>Billing duration.</p>.
                     * @param _timeSpan <P>Billing duration.</p>.
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取<P>Time unit.<br>value is:</p><ul><li>m - month</li><li>d - day</li></ul>.
                     * @return TimeUnit <P>Time unit.<br>value is:</p><ul><li>m - month</li><li>d - day</li></ul>.
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置<P>Time unit.<br>value is:</p><ul><li>m - month</li><li>d - day</li></ul>.
                     * @param _timeUnit <P>Time unit.<br>value is:</p><ul><li>m - month</li><li>d - day</li></ul>.
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取<P>Total price.</p><p>unit: usd</p>.
                     * @return TotalCost <P>Total price.</p><p>unit: usd</p>.
                     * 
                     */
                    double GetTotalCost() const;

                    /**
                     * 设置<P>Total price.</p><p>unit: usd</p>.
                     * @param _totalCost <P>Total price.</p><p>unit: usd</p>.
                     * 
                     */
                    void SetTotalCost(const double& _totalCost);

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     * 
                     */
                    bool TotalCostHasBeenSet() const;

                    /**
                     * 获取<P>Discounted total price.</p><p>unit: usd</p>.
                     * @return RealTotalCost <P>Discounted total price.</p><p>unit: usd</p>.
                     * 
                     */
                    double GetRealTotalCost() const;

                    /**
                     * 设置<P>Discounted total price.</p><p>unit: usd</p>.
                     * @param _realTotalCost <P>Discounted total price.</p><p>unit: usd</p>.
                     * 
                     */
                    void SetRealTotalCost(const double& _realTotalCost);

                    /**
                     * 判断参数 RealTotalCost 是否已赋值
                     * @return RealTotalCost 是否已赋值
                     * 
                     */
                    bool RealTotalCostHasBeenSet() const;

                    /**
                     * 获取<p>Discount.</p>.
                     * @return Discount <p>Discount.</p>.
                     * 
                     */
                    double GetDiscount() const;

                    /**
                     * 设置<p>Discount.</p>.
                     * @param _discount <p>Discount.</p>.
                     * 
                     */
                    void SetDiscount(const double& _discount);

                    /**
                     * 判断参数 Discount 是否已赋值
                     * @return Discount 是否已赋值
                     * 
                     */
                    bool DiscountHasBeenSet() const;

                    /**
                     * 获取<P>Specific discount details.</p>.
                     * @return PolicyDetail <P>Specific discount details.</p>.
                     * 
                     */
                    PolicyDetail GetPolicyDetail() const;

                    /**
                     * 设置<P>Specific discount details.</p>.
                     * @param _policyDetail <P>Specific discount details.</p>.
                     * 
                     */
                    void SetPolicyDetail(const PolicyDetail& _policyDetail);

                    /**
                     * 判断参数 PolicyDetail 是否已赋值
                     * @return PolicyDetail 是否已赋值
                     * 
                     */
                    bool PolicyDetailHasBeenSet() const;

                private:

                    /**
                     * <P>Billing duration.</p>.
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * <P>Time unit.<br>value is:</p><ul><li>m - month</li><li>d - day</li></ul>.
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * <P>Total price.</p><p>unit: usd</p>.
                     */
                    double m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * <P>Discounted total price.</p><p>unit: usd</p>.
                     */
                    double m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * <p>Discount.</p>.
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * <P>Specific discount details.</p>.
                     */
                    PolicyDetail m_policyDetail;
                    bool m_policyDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISCOUNTDETAIL_H_
