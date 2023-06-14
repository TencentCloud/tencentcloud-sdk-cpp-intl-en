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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_TIMERVALUE_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_TIMERVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * Details of the recurrence pattern of the scheduled scaling policy
                */
                class TimerValue : public AbstractModel
                {
                public:
                    TimerValue();
                    ~TimerValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Execute once every X day(s)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Day Execute once every X day(s)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDay() const;

                    /**
                     * 设置Execute once every X day(s)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _day Execute once every X day(s)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDay(const int64_t& _day);

                    /**
                     * 判断参数 Day 是否已赋值
                     * @return Day 是否已赋值
                     * 
                     */
                    bool DayHasBeenSet() const;

                    /**
                     * 获取Specify the first day to execute the scaling action in a month (execute once per day)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return FromDay Specify the first day to execute the scaling action in a month (execute once per day)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetFromDay() const;

                    /**
                     * 设置Specify the first day to execute the scaling action in a month (execute once per day)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _fromDay Specify the first day to execute the scaling action in a month (execute once per day)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFromDay(const int64_t& _fromDay);

                    /**
                     * 判断参数 FromDay 是否已赋值
                     * @return FromDay 是否已赋值
                     * 
                     */
                    bool FromDayHasBeenSet() const;

                    /**
                     * 获取Specify the last day to execute the scaling action in a month
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ToDay Specify the last day to execute the scaling action in a month
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetToDay() const;

                    /**
                     * 设置Specify the last day to execute the scaling action in a month
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _toDay Specify the last day to execute the scaling action in a month
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetToDay(const int64_t& _toDay);

                    /**
                     * 判断参数 ToDay 是否已赋值
                     * @return ToDay 是否已赋值
                     * 
                     */
                    bool ToDayHasBeenSet() const;

                    /**
                     * 获取Specify the week days to repeat the scaling action. Multiple values are supported. Valid values: `1` (Monday), `2` (Tuesday), `3` (Wednesday), `4` (Thursday), `5` (Friday), `6` (Saturday), `7` (Sunday). 
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return WeekDays Specify the week days to repeat the scaling action. Multiple values are supported. Valid values: `1` (Monday), `2` (Tuesday), `3` (Wednesday), `4` (Thursday), `5` (Friday), `6` (Saturday), `7` (Sunday). 
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetWeekDays() const;

                    /**
                     * 设置Specify the week days to repeat the scaling action. Multiple values are supported. Valid values: `1` (Monday), `2` (Tuesday), `3` (Wednesday), `4` (Thursday), `5` (Friday), `6` (Saturday), `7` (Sunday). 
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _weekDays Specify the week days to repeat the scaling action. Multiple values are supported. Valid values: `1` (Monday), `2` (Tuesday), `3` (Wednesday), `4` (Thursday), `5` (Friday), `6` (Saturday), `7` (Sunday). 
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWeekDays(const std::vector<int64_t>& _weekDays);

                    /**
                     * 判断参数 WeekDays 是否已赋值
                     * @return WeekDays 是否已赋值
                     * 
                     */
                    bool WeekDaysHasBeenSet() const;

                private:

                    /**
                     * Execute once every X day(s)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_day;
                    bool m_dayHasBeenSet;

                    /**
                     * Specify the first day to execute the scaling action in a month (execute once per day)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_fromDay;
                    bool m_fromDayHasBeenSet;

                    /**
                     * Specify the last day to execute the scaling action in a month
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_toDay;
                    bool m_toDayHasBeenSet;

                    /**
                     * Specify the week days to repeat the scaling action. Multiple values are supported. Valid values: `1` (Monday), `2` (Tuesday), `3` (Wednesday), `4` (Thursday), `5` (Friday), `6` (Saturday), `7` (Sunday). 
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_weekDays;
                    bool m_weekDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_TIMERVALUE_H_
