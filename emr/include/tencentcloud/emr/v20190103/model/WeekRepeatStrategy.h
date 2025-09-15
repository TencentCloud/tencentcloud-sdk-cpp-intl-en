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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_WEEKREPEATSTRATEGY_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_WEEKREPEATSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Scheduled scaling-out of weekly recurring tasks policy
                */
                class WeekRepeatStrategy : public AbstractModel
                {
                public:
                    WeekRepeatStrategy();
                    ~WeekRepeatStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specific time for repetition task execution, such as 01:02:00.
                     * @return ExecuteAtTimeOfDay Specific time for repetition task execution, such as 01:02:00.
                     * 
                     */
                    std::string GetExecuteAtTimeOfDay() const;

                    /**
                     * 设置Specific time for repetition task execution, such as 01:02:00.
                     * @param _executeAtTimeOfDay Specific time for repetition task execution, such as 01:02:00.
                     * 
                     */
                    void SetExecuteAtTimeOfDay(const std::string& _executeAtTimeOfDay);

                    /**
                     * 判断参数 ExecuteAtTimeOfDay 是否已赋值
                     * @return ExecuteAtTimeOfDay 是否已赋值
                     * 
                     */
                    bool ExecuteAtTimeOfDayHasBeenSet() const;

                    /**
                     * 获取Ordinal number description of the day of a week, for example, [1,3,4] indicates Monday, Wednesday, and Thursday.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DaysOfWeek Ordinal number description of the day of a week, for example, [1,3,4] indicates Monday, Wednesday, and Thursday.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<uint64_t> GetDaysOfWeek() const;

                    /**
                     * 设置Ordinal number description of the day of a week, for example, [1,3,4] indicates Monday, Wednesday, and Thursday.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _daysOfWeek Ordinal number description of the day of a week, for example, [1,3,4] indicates Monday, Wednesday, and Thursday.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDaysOfWeek(const std::vector<uint64_t>& _daysOfWeek);

                    /**
                     * 判断参数 DaysOfWeek 是否已赋值
                     * @return DaysOfWeek 是否已赋值
                     * 
                     */
                    bool DaysOfWeekHasBeenSet() const;

                private:

                    /**
                     * Specific time for repetition task execution, such as 01:02:00.
                     */
                    std::string m_executeAtTimeOfDay;
                    bool m_executeAtTimeOfDayHasBeenSet;

                    /**
                     * Ordinal number description of the day of a week, for example, [1,3,4] indicates Monday, Wednesday, and Thursday.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<uint64_t> m_daysOfWeek;
                    bool m_daysOfWeekHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_WEEKREPEATSTRATEGY_H_
