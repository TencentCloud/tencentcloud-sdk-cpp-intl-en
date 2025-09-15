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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_REPEATSTRATEGY_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_REPEATSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/DayRepeatStrategy.h>
#include <tencentcloud/emr/v20190103/model/WeekRepeatStrategy.h>
#include <tencentcloud/emr/v20190103/model/MonthRepeatStrategy.h>
#include <tencentcloud/emr/v20190103/model/NotRepeatStrategy.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Scheduled scaling task policy
                */
                class RepeatStrategy : public AbstractModel
                {
                public:
                    RepeatStrategy();
                    ~RepeatStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The valid values DAY, DOW, DOM, and NONE respectively indicate repetition by day, repetition by week, repetition by month, and one-time execution. This parameter is required.
                     * @return RepeatType The valid values DAY, DOW, DOM, and NONE respectively indicate repetition by day, repetition by week, repetition by month, and one-time execution. This parameter is required.
                     * 
                     */
                    std::string GetRepeatType() const;

                    /**
                     * 设置The valid values DAY, DOW, DOM, and NONE respectively indicate repetition by day, repetition by week, repetition by month, and one-time execution. This parameter is required.
                     * @param _repeatType The valid values DAY, DOW, DOM, and NONE respectively indicate repetition by day, repetition by week, repetition by month, and one-time execution. This parameter is required.
                     * 
                     */
                    void SetRepeatType(const std::string& _repeatType);

                    /**
                     * 判断参数 RepeatType 是否已赋值
                     * @return RepeatType 是否已赋值
                     * 
                     */
                    bool RepeatTypeHasBeenSet() const;

                    /**
                     * 获取Daily repetition rule, which is effective when RepeatType is set to DAY

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DayRepeat Daily repetition rule, which is effective when RepeatType is set to DAY

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DayRepeatStrategy GetDayRepeat() const;

                    /**
                     * 设置Daily repetition rule, which is effective when RepeatType is set to DAY

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dayRepeat Daily repetition rule, which is effective when RepeatType is set to DAY

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDayRepeat(const DayRepeatStrategy& _dayRepeat);

                    /**
                     * 判断参数 DayRepeat 是否已赋值
                     * @return DayRepeat 是否已赋值
                     * 
                     */
                    bool DayRepeatHasBeenSet() const;

                    /**
                     * 获取Weekly repetition rule, effective when RepeatType is DOW

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WeekRepeat Weekly repetition rule, effective when RepeatType is DOW

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    WeekRepeatStrategy GetWeekRepeat() const;

                    /**
                     * 设置Weekly repetition rule, effective when RepeatType is DOW

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _weekRepeat Weekly repetition rule, effective when RepeatType is DOW

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWeekRepeat(const WeekRepeatStrategy& _weekRepeat);

                    /**
                     * 判断参数 WeekRepeat 是否已赋值
                     * @return WeekRepeat 是否已赋值
                     * 
                     */
                    bool WeekRepeatHasBeenSet() const;

                    /**
                     * 获取Monthly repetition rule, valid when RepeatType is DOM

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MonthRepeat Monthly repetition rule, valid when RepeatType is DOM

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MonthRepeatStrategy GetMonthRepeat() const;

                    /**
                     * 设置Monthly repetition rule, valid when RepeatType is DOM

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _monthRepeat Monthly repetition rule, valid when RepeatType is DOM

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMonthRepeat(const MonthRepeatStrategy& _monthRepeat);

                    /**
                     * 判断参数 MonthRepeat 是否已赋值
                     * @return MonthRepeat 是否已赋值
                     * 
                     */
                    bool MonthRepeatHasBeenSet() const;

                    /**
                     * 获取One-time execution rule, valid when RepeatType is NONE

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NotRepeat One-time execution rule, valid when RepeatType is NONE

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    NotRepeatStrategy GetNotRepeat() const;

                    /**
                     * 设置One-time execution rule, valid when RepeatType is NONE

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _notRepeat One-time execution rule, valid when RepeatType is NONE

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNotRepeat(const NotRepeatStrategy& _notRepeat);

                    /**
                     * 判断参数 NotRepeat 是否已赋值
                     * @return NotRepeat 是否已赋值
                     * 
                     */
                    bool NotRepeatHasBeenSet() const;

                    /**
                     * 获取Rule expiration time. After this time is due, the rule will be automatically set to the status "suspended". The format is "2020-07-23 00:00:00". It is required.
                     * @return Expire Rule expiration time. After this time is due, the rule will be automatically set to the status "suspended". The format is "2020-07-23 00:00:00". It is required.
                     * 
                     */
                    std::string GetExpire() const;

                    /**
                     * 设置Rule expiration time. After this time is due, the rule will be automatically set to the status "suspended". The format is "2020-07-23 00:00:00". It is required.
                     * @param _expire Rule expiration time. After this time is due, the rule will be automatically set to the status "suspended". The format is "2020-07-23 00:00:00". It is required.
                     * 
                     */
                    void SetExpire(const std::string& _expire);

                    /**
                     * 判断参数 Expire 是否已赋值
                     * @return Expire 是否已赋值
                     * 
                     */
                    bool ExpireHasBeenSet() const;

                    /**
                     * 获取Periodic rule start time.
                     * @return StartTime Periodic rule start time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Periodic rule start time.
                     * @param _startTime Periodic rule start time.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                private:

                    /**
                     * The valid values DAY, DOW, DOM, and NONE respectively indicate repetition by day, repetition by week, repetition by month, and one-time execution. This parameter is required.
                     */
                    std::string m_repeatType;
                    bool m_repeatTypeHasBeenSet;

                    /**
                     * Daily repetition rule, which is effective when RepeatType is set to DAY

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DayRepeatStrategy m_dayRepeat;
                    bool m_dayRepeatHasBeenSet;

                    /**
                     * Weekly repetition rule, effective when RepeatType is DOW

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    WeekRepeatStrategy m_weekRepeat;
                    bool m_weekRepeatHasBeenSet;

                    /**
                     * Monthly repetition rule, valid when RepeatType is DOM

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MonthRepeatStrategy m_monthRepeat;
                    bool m_monthRepeatHasBeenSet;

                    /**
                     * One-time execution rule, valid when RepeatType is NONE

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    NotRepeatStrategy m_notRepeat;
                    bool m_notRepeatHasBeenSet;

                    /**
                     * Rule expiration time. After this time is due, the rule will be automatically set to the status "suspended". The format is "2020-07-23 00:00:00". It is required.
                     */
                    std::string m_expire;
                    bool m_expireHasBeenSet;

                    /**
                     * Periodic rule start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_REPEATSTRATEGY_H_
