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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_POLICYDETAIL_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_POLICYDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * Discount details.
                */
                class PolicyDetail : public AbstractModel
                {
                public:
                    PolicyDetail();
                    ~PolicyDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User discount.
                     * @return UserDiscount User discount.
                     * 
                     */
                    int64_t GetUserDiscount() const;

                    /**
                     * 设置User discount.
                     * @param _userDiscount User discount.
                     * 
                     */
                    void SetUserDiscount(const int64_t& _userDiscount);

                    /**
                     * 判断参数 UserDiscount 是否已赋值
                     * @return UserDiscount 是否已赋值
                     * 
                     */
                    bool UserDiscountHasBeenSet() const;

                    /**
                     * 获取Public discount.
                     * @return CommonDiscount Public discount.
                     * 
                     */
                    int64_t GetCommonDiscount() const;

                    /**
                     * 设置Public discount.
                     * @param _commonDiscount Public discount.
                     * 
                     */
                    void SetCommonDiscount(const int64_t& _commonDiscount);

                    /**
                     * 判断参数 CommonDiscount 是否已赋值
                     * @return CommonDiscount 是否已赋值
                     * 
                     */
                    bool CommonDiscountHasBeenSet() const;

                    /**
                     * 获取Final discount.
                     * @return FinalDiscount Final discount.
                     * 
                     */
                    int64_t GetFinalDiscount() const;

                    /**
                     * 设置Final discount.
                     * @param _finalDiscount Final discount.
                     * 
                     */
                    void SetFinalDiscount(const int64_t& _finalDiscount);

                    /**
                     * 判断参数 FinalDiscount 是否已赋值
                     * @return FinalDiscount 是否已赋值
                     * 
                     */
                    bool FinalDiscountHasBeenSet() const;

                    /**
                     * 获取Activity discount. The value `null` indicates no discount.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ActivityDiscount Activity discount. The value `null` indicates no discount.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetActivityDiscount() const;

                    /**
                     * 设置Activity discount. The value `null` indicates no discount.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _activityDiscount Activity discount. The value `null` indicates no discount.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetActivityDiscount(const double& _activityDiscount);

                    /**
                     * 判断参数 ActivityDiscount 是否已赋值
                     * @return ActivityDiscount 是否已赋值
                     * 
                     */
                    bool ActivityDiscountHasBeenSet() const;

                    /**
                     * 获取Discount type.
Valid values: `user` (user discount), `common` (discount displayed on the official website), `activity` (activity discount), `null` (no discount).
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return DiscountType Discount type.
Valid values: `user` (user discount), `common` (discount displayed on the official website), `activity` (activity discount), `null` (no discount).
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDiscountType() const;

                    /**
                     * 设置Discount type.
Valid values: `user` (user discount), `common` (discount displayed on the official website), `activity` (activity discount), `null` (no discount).
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _discountType Discount type.
Valid values: `user` (user discount), `common` (discount displayed on the official website), `activity` (activity discount), `null` (no discount).
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDiscountType(const std::string& _discountType);

                    /**
                     * 判断参数 DiscountType 是否已赋值
                     * @return DiscountType 是否已赋值
                     * 
                     */
                    bool DiscountTypeHasBeenSet() const;

                private:

                    /**
                     * User discount.
                     */
                    int64_t m_userDiscount;
                    bool m_userDiscountHasBeenSet;

                    /**
                     * Public discount.
                     */
                    int64_t m_commonDiscount;
                    bool m_commonDiscountHasBeenSet;

                    /**
                     * Final discount.
                     */
                    int64_t m_finalDiscount;
                    bool m_finalDiscountHasBeenSet;

                    /**
                     * Activity discount. The value `null` indicates no discount.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    double m_activityDiscount;
                    bool m_activityDiscountHasBeenSet;

                    /**
                     * Discount type.
Valid values: `user` (user discount), `common` (discount displayed on the official website), `activity` (activity discount), `null` (no discount).
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_discountType;
                    bool m_discountTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_POLICYDETAIL_H_
