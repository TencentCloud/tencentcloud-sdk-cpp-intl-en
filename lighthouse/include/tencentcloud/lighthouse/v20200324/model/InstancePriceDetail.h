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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCEPRICEDETAIL_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCEPRICEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/InstancePrice.h>
#include <tencentcloud/lighthouse/v20200324/model/DiscountDetail.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * Instance price details
                */
                class InstancePriceDetail : public AbstractModel
                {
                public:
                    InstancePriceDetail();
                    ~InstancePriceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return InstanceId Instance ID.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _instanceId Instance ID.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Price query information.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return InstancePrice Price query information.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    InstancePrice GetInstancePrice() const;

                    /**
                     * 设置Price query information.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _instancePrice Price query information.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetInstancePrice(const InstancePrice& _instancePrice);

                    /**
                     * 判断参数 InstancePrice 是否已赋值
                     * @return InstancePrice 是否已赋值
                     * 
                     */
                    bool InstancePriceHasBeenSet() const;

                    /**
                     * 获取Tiered-pricing details. The information of each tier includes the billable period, discount percentage, total price, discounted price, and discount details (`UserDiscount`, `CommonDiscount` and `FinalDiscount`).
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return DiscountDetail Tiered-pricing details. The information of each tier includes the billable period, discount percentage, total price, discounted price, and discount details (`UserDiscount`, `CommonDiscount` and `FinalDiscount`).
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DiscountDetail> GetDiscountDetail() const;

                    /**
                     * 设置Tiered-pricing details. The information of each tier includes the billable period, discount percentage, total price, discounted price, and discount details (`UserDiscount`, `CommonDiscount` and `FinalDiscount`).
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _discountDetail Tiered-pricing details. The information of each tier includes the billable period, discount percentage, total price, discounted price, and discount details (`UserDiscount`, `CommonDiscount` and `FinalDiscount`).
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDiscountDetail(const std::vector<DiscountDetail>& _discountDetail);

                    /**
                     * 判断参数 DiscountDetail 是否已赋值
                     * @return DiscountDetail 是否已赋值
                     * 
                     */
                    bool DiscountDetailHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Price query information.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    InstancePrice m_instancePrice;
                    bool m_instancePriceHasBeenSet;

                    /**
                     * Tiered-pricing details. The information of each tier includes the billable period, discount percentage, total price, discounted price, and discount details (`UserDiscount`, `CommonDiscount` and `FinalDiscount`).
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<DiscountDetail> m_discountDetail;
                    bool m_discountDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCEPRICEDETAIL_H_
