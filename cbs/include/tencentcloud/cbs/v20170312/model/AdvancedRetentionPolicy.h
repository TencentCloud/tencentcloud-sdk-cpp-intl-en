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
                     * 获取Retains the latest snapshot of each day within the specified number of Days. value range: [0, 100].
                     * @return Days Retains the latest snapshot of each day within the specified number of Days. value range: [0, 100].
                     * 
                     */
                    uint64_t GetDays() const;

                    /**
                     * 设置Retains the latest snapshot of each day within the specified number of Days. value range: [0, 100].
                     * @param _days Retains the latest snapshot of each day within the specified number of Days. value range: [0, 100].
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
                     * 获取Reserve the latest snapshot of each week for Weeks. value range: [0, 100].
                     * @return Weeks Reserve the latest snapshot of each week for Weeks. value range: [0, 100].
                     * 
                     */
                    uint64_t GetWeeks() const;

                    /**
                     * 设置Reserve the latest snapshot of each week for Weeks. value range: [0, 100].
                     * @param _weeks Reserve the latest snapshot of each week for Weeks. value range: [0, 100].
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
                     * 获取Reserve the latest snapshot of each month within Months Months. value range: [0, 100].
                     * @return Months Reserve the latest snapshot of each month within Months Months. value range: [0, 100].
                     * 
                     */
                    uint64_t GetMonths() const;

                    /**
                     * 设置Reserve the latest snapshot of each month within Months Months. value range: [0, 100].
                     * @param _months Reserve the latest snapshot of each month within Months Months. value range: [0, 100].
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
                     * 获取Reserve the latest snapshot of each year within Years Years. value range: [0, 100].
                     * @return Years Reserve the latest snapshot of each year within Years Years. value range: [0, 100].
                     * 
                     */
                    uint64_t GetYears() const;

                    /**
                     * 设置Reserve the latest snapshot of each year within Years Years. value range: [0, 100].
                     * @param _years Reserve the latest snapshot of each year within Years Years. value range: [0, 100].
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
                     * Retains the latest snapshot of each day within the specified number of Days. value range: [0, 100].
                     */
                    uint64_t m_days;
                    bool m_daysHasBeenSet;

                    /**
                     * Reserve the latest snapshot of each week for Weeks. value range: [0, 100].
                     */
                    uint64_t m_weeks;
                    bool m_weeksHasBeenSet;

                    /**
                     * Reserve the latest snapshot of each month within Months Months. value range: [0, 100].
                     */
                    uint64_t m_months;
                    bool m_monthsHasBeenSet;

                    /**
                     * Reserve the latest snapshot of each year within Years Years. value range: [0, 100].
                     */
                    uint64_t m_years;
                    bool m_yearsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_ADVANCEDRETENTIONPOLICY_H_
