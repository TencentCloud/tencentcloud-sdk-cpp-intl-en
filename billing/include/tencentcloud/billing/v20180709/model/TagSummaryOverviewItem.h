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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_TAGSUMMARYOVERVIEWITEM_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_TAGSUMMARYOVERVIEWITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Details about cost distribution over different tags.
                */
                class TagSummaryOverviewItem : public AbstractModel
                {
                public:
                    TagSummaryOverviewItem();
                    ~TagSummaryOverviewItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tag value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TagValue Tag value
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置Tag value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TagValue Tag value
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTagValue(const std::string& _tagValue);

                    /**
                     * 判断参数 TagValue 是否已赋值
                     * @return TagValue 是否已赋值
                     */
                    bool TagValueHasBeenSet() const;

                    /**
                     * 获取Actual cost
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RealTotalCost Actual cost
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRealTotalCost() const;

                    /**
                     * 设置Actual cost
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RealTotalCost Actual cost
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRealTotalCost(const std::string& _realTotalCost);

                    /**
                     * 判断参数 RealTotalCost 是否已赋值
                     * @return RealTotalCost 是否已赋值
                     */
                    bool RealTotalCostHasBeenSet() const;

                    /**
                     * 获取Cost percentage rounded to two decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RealTotalCostRatio Cost percentage rounded to two decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRealTotalCostRatio() const;

                    /**
                     * 设置Cost percentage rounded to two decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RealTotalCostRatio Cost percentage rounded to two decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRealTotalCostRatio(const std::string& _realTotalCostRatio);

                    /**
                     * 判断参数 RealTotalCostRatio 是否已赋值
                     * @return RealTotalCostRatio 是否已赋值
                     */
                    bool RealTotalCostRatioHasBeenSet() const;

                    /**
                     * 获取The original cost in USD. This parameter has become valid since v3.0 bills took effect in May 2021, and before that `-` was returned for this parameter. If a customer uses a contract price different from the published price, `-` will also be returned for this parameter.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TotalCost The original cost in USD. This parameter has become valid since v3.0 bills took effect in May 2021, and before that `-` was returned for this parameter. If a customer uses a contract price different from the published price, `-` will also be returned for this parameter.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetTotalCost() const;

                    /**
                     * 设置The original cost in USD. This parameter has become valid since v3.0 bills took effect in May 2021, and before that `-` was returned for this parameter. If a customer uses a contract price different from the published price, `-` will also be returned for this parameter.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param TotalCost The original cost in USD. This parameter has become valid since v3.0 bills took effect in May 2021, and before that `-` was returned for this parameter. If a customer uses a contract price different from the published price, `-` will also be returned for this parameter.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetTotalCost(const std::string& _totalCost);

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     */
                    bool TotalCostHasBeenSet() const;

                private:

                    /**
                     * Tag value
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                    /**
                     * Actual cost
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * Cost percentage rounded to two decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_realTotalCostRatio;
                    bool m_realTotalCostRatioHasBeenSet;

                    /**
                     * The original cost in USD. This parameter has become valid since v3.0 bills took effect in May 2021, and before that `-` was returned for this parameter. If a customer uses a contract price different from the published price, `-` will also be returned for this parameter.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_totalCost;
                    bool m_totalCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_TAGSUMMARYOVERVIEWITEM_H_
