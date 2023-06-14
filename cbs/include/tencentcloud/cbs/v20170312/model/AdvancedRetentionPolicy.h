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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_ADVANCEDRETENTIONPOLICY_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_ADVANCEDRETENTIONPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Retention policy for scheduled snapshots. All four parameters are required.
                */
                class AdvancedRetentionPolicy : public AbstractModel
                {
                public:
                    AdvancedRetentionPolicy();
                    ~AdvancedRetentionPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Retains one latest snapshot each day within `Days` days. Value range: [0, 100].
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Days Retains one latest snapshot each day within `Days` days. Value range: [0, 100].
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDays() const;

                    /**
                     * 设置Retains one latest snapshot each day within `Days` days. Value range: [0, 100].
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _days Retains one latest snapshot each day within `Days` days. Value range: [0, 100].
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDays(const uint64_t& _days);

                    /**
                     * 判断参数 Days 是否已赋值
                     * @return Days 是否已赋值
                     * 
                     */
                    bool DaysHasBeenSet() const;

                    /**
                     * 获取Retains one latest snapshot each week within `Weeks` weeks. Value range: [0, 100].
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Weeks Retains one latest snapshot each week within `Weeks` weeks. Value range: [0, 100].
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetWeeks() const;

                    /**
                     * 设置Retains one latest snapshot each week within `Weeks` weeks. Value range: [0, 100].
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _weeks Retains one latest snapshot each week within `Weeks` weeks. Value range: [0, 100].
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWeeks(const uint64_t& _weeks);

                    /**
                     * 判断参数 Weeks 是否已赋值
                     * @return Weeks 是否已赋值
                     * 
                     */
                    bool WeeksHasBeenSet() const;

                    /**
                     * 获取Retains one latest snapshot each month within `Months` months. Value range: [0, 100].
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Months Retains one latest snapshot each month within `Months` months. Value range: [0, 100].
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMonths() const;

                    /**
                     * 设置Retains one latest snapshot each month within `Months` months. Value range: [0, 100].
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _months Retains one latest snapshot each month within `Months` months. Value range: [0, 100].
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMonths(const uint64_t& _months);

                    /**
                     * 判断参数 Months 是否已赋值
                     * @return Months 是否已赋值
                     * 
                     */
                    bool MonthsHasBeenSet() const;

                    /**
                     * 获取Retains one latest snapshot each year within `Years` years. Value range: [0, 100].
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Years Retains one latest snapshot each year within `Years` years. Value range: [0, 100].
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetYears() const;

                    /**
                     * 设置Retains one latest snapshot each year within `Years` years. Value range: [0, 100].
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _years Retains one latest snapshot each year within `Years` years. Value range: [0, 100].
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetYears(const uint64_t& _years);

                    /**
                     * 判断参数 Years 是否已赋值
                     * @return Years 是否已赋值
                     * 
                     */
                    bool YearsHasBeenSet() const;

                private:

                    /**
                     * Retains one latest snapshot each day within `Days` days. Value range: [0, 100].
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_days;
                    bool m_daysHasBeenSet;

                    /**
                     * Retains one latest snapshot each week within `Weeks` weeks. Value range: [0, 100].
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_weeks;
                    bool m_weeksHasBeenSet;

                    /**
                     * Retains one latest snapshot each month within `Months` months. Value range: [0, 100].
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_months;
                    bool m_monthsHasBeenSet;

                    /**
                     * Retains one latest snapshot each year within `Years` years. Value range: [0, 100].
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_years;
                    bool m_yearsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_ADVANCEDRETENTIONPOLICY_H_
