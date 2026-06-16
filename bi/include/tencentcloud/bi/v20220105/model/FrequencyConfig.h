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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_FREQUENCYCONFIG_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_FREQUENCYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * Scheduled task execution frequency configuration
                */
                class FrequencyConfig : public AbstractModel
                {
                public:
                    FrequencyConfig();
                    ~FrequencyConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cycle
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Frequency Cycle
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFrequency() const;

                    /**
                     * 设置Cycle
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _frequency Cycle
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFrequency(const std::string& _frequency);

                    /**
                     * 判断参数 Frequency 是否已赋值
                     * @return Frequency 是否已赋值
                     * 
                     */
                    bool FrequencyHasBeenSet() const;

                    /**
                     * 获取Date
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Dates Date
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetDates() const;

                    /**
                     * 设置Date
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dates Date
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDates(const std::vector<int64_t>& _dates);

                    /**
                     * 判断参数 Dates 是否已赋值
                     * @return Dates 是否已赋值
                     * 
                     */
                    bool DatesHasBeenSet() const;

                    /**
                     * 获取Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Time Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _time Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Interval
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IntervalTime Interval
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIntervalTime() const;

                    /**
                     * 设置Interval
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _intervalTime Interval
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIntervalTime(const uint64_t& _intervalTime);

                    /**
                     * 判断参数 IntervalTime 是否已赋值
                     * @return IntervalTime 是否已赋值
                     * 
                     */
                    bool IntervalTimeHasBeenSet() const;

                    /**
                     * 获取1:SECOND,2:MINUTE,3:HOUR,4:DAY
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IntervalTimeUnit 1:SECOND,2:MINUTE,3:HOUR,4:DAY
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIntervalTimeUnit() const;

                    /**
                     * 设置1:SECOND,2:MINUTE,3:HOUR,4:DAY
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _intervalTimeUnit 1:SECOND,2:MINUTE,3:HOUR,4:DAY
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIntervalTimeUnit(const uint64_t& _intervalTimeUnit);

                    /**
                     * 判断参数 IntervalTimeUnit 是否已赋值
                     * @return IntervalTimeUnit 是否已赋值
                     * 
                     */
                    bool IntervalTimeUnitHasBeenSet() const;

                    /**
                     * 获取hourly list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Hours hourly list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetHours() const;

                    /**
                     * 设置hourly list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hours hourly list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHours(const std::vector<int64_t>& _hours);

                    /**
                     * 判断参数 Hours 是否已赋值
                     * @return Hours 是否已赋值
                     * 
                     */
                    bool HoursHasBeenSet() const;

                    /**
                     * 获取Minute list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Minute Minute list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetMinute() const;

                    /**
                     * 设置Minute list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _minute Minute list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMinute(const std::vector<int64_t>& _minute);

                    /**
                     * 判断参数 Minute 是否已赋值
                     * @return Minute 是否已赋值
                     * 
                     */
                    bool MinuteHasBeenSet() const;

                private:

                    /**
                     * Cycle
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_frequency;
                    bool m_frequencyHasBeenSet;

                    /**
                     * Date
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_dates;
                    bool m_datesHasBeenSet;

                    /**
                     * Time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Interval
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_intervalTime;
                    bool m_intervalTimeHasBeenSet;

                    /**
                     * 1:SECOND,2:MINUTE,3:HOUR,4:DAY
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_intervalTimeUnit;
                    bool m_intervalTimeUnitHasBeenSet;

                    /**
                     * hourly list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_hours;
                    bool m_hoursHasBeenSet;

                    /**
                     * Minute list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_minute;
                    bool m_minuteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_FREQUENCYCONFIG_H_
