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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SPARSEPERIODTIME_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SPARSEPERIODTIME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/MonthDay.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Sparse backup cycle info
                */
                class SparsePeriodTime : public AbstractModel
                {
                public:
                    SparsePeriodTime();
                    ~SparsePeriodTime() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Weekly: List of days of the week, 1-7, 1=Monday, 7=Sunday (Only used for weekly cycle, up to 7).
                     * @return WeekDays Weekly: List of days of the week, 1-7, 1=Monday, 7=Sunday (Only used for weekly cycle, up to 7).
                     * 
                     */
                    std::vector<int64_t> GetWeekDays() const;

                    /**
                     * 设置Weekly: List of days of the week, 1-7, 1=Monday, 7=Sunday (Only used for weekly cycle, up to 7).
                     * @param _weekDays Weekly: List of days of the week, 1-7, 1=Monday, 7=Sunday (Only used for weekly cycle, up to 7).
                     * 
                     */
                    void SetWeekDays(const std::vector<int64_t>& _weekDays);

                    /**
                     * 判断参数 WeekDays 是否已赋值
                     * @return WeekDays 是否已赋值
                     * 
                     */
                    bool WeekDaysHasBeenSet() const;

                    /**
                     * 获取By month: Date list, 1-31 (for monthly cycle only, up to 7)
                     * @return Days By month: Date list, 1-31 (for monthly cycle only, up to 7)
                     * 
                     */
                    std::vector<int64_t> GetDays() const;

                    /**
                     * 设置By month: Date list, 1-31 (for monthly cycle only, up to 7)
                     * @param _days By month: Date list, 1-31 (for monthly cycle only, up to 7)
                     * 
                     */
                    void SetDays(const std::vector<int64_t>& _days);

                    /**
                     * 判断参数 Days 是否已赋值
                     * @return Days 是否已赋值
                     * 
                     */
                    bool DaysHasBeenSet() const;

                    /**
                     * 获取Yearly: Month-day composite column (Only for yearly cycle, up to 7)
                     * @return MonthDays Yearly: Month-day composite column (Only for yearly cycle, up to 7)
                     * 
                     */
                    std::vector<MonthDay> GetMonthDays() const;

                    /**
                     * 设置Yearly: Month-day composite column (Only for yearly cycle, up to 7)
                     * @param _monthDays Yearly: Month-day composite column (Only for yearly cycle, up to 7)
                     * 
                     */
                    void SetMonthDays(const std::vector<MonthDay>& _monthDays);

                    /**
                     * 判断参数 MonthDays 是否已赋值
                     * @return MonthDays 是否已赋值
                     * 
                     */
                    bool MonthDaysHasBeenSet() const;

                private:

                    /**
                     * Weekly: List of days of the week, 1-7, 1=Monday, 7=Sunday (Only used for weekly cycle, up to 7).
                     */
                    std::vector<int64_t> m_weekDays;
                    bool m_weekDaysHasBeenSet;

                    /**
                     * By month: Date list, 1-31 (for monthly cycle only, up to 7)
                     */
                    std::vector<int64_t> m_days;
                    bool m_daysHasBeenSet;

                    /**
                     * Yearly: Month-day composite column (Only for yearly cycle, up to 7)
                     */
                    std::vector<MonthDay> m_monthDays;
                    bool m_monthDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SPARSEPERIODTIME_H_
