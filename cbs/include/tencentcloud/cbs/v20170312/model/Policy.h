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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_POLICY_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_POLICY_H_

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
                * Execution policy for scheduled snapshot. It indicates that a scheduled snapshot policy is executed at the specified `Hour` in the days specified by `DayOfWeek` or `DayOfMonth` or once every `IntervalDays` days. Note: `DayOfWeek`, `DayOfMonth`, and `IntervalDays` are mutually exclusive, and only one policy rule can be set.
                */
                class Policy : public AbstractModel
                {
                public:
                    Policy();
                    ~Policy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the time that that the scheduled snapshot policy will be triggered. The unit is hour. The value range is [0-23]. 00:00-23:00 is a total of 24 time points that can be selected. 1 indicates 01:00, and so on.
                     * @return Hour Specifies the time that that the scheduled snapshot policy will be triggered. The unit is hour. The value range is [0-23]. 00:00-23:00 is a total of 24 time points that can be selected. 1 indicates 01:00, and so on.
                     * 
                     */
                    std::vector<uint64_t> GetHour() const;

                    /**
                     * 设置Specifies the time that that the scheduled snapshot policy will be triggered. The unit is hour. The value range is [0-23]. 00:00-23:00 is a total of 24 time points that can be selected. 1 indicates 01:00, and so on.
                     * @param _hour Specifies the time that that the scheduled snapshot policy will be triggered. The unit is hour. The value range is [0-23]. 00:00-23:00 is a total of 24 time points that can be selected. 1 indicates 01:00, and so on.
                     * 
                     */
                    void SetHour(const std::vector<uint64_t>& _hour);

                    /**
                     * 判断参数 Hour 是否已赋值
                     * @return Hour 是否已赋值
                     * 
                     */
                    bool HourHasBeenSet() const;

                    /**
                     * 获取Specifies the days of the week, from Monday to Sunday, on which a scheduled snapshot will be triggered. Value range: [0, 6]. 0 indicates triggering on Sunday, 1-6 indicate triggering on Monday-Saturday.
                     * @return DayOfWeek Specifies the days of the week, from Monday to Sunday, on which a scheduled snapshot will be triggered. Value range: [0, 6]. 0 indicates triggering on Sunday, 1-6 indicate triggering on Monday-Saturday.
                     * 
                     */
                    std::vector<uint64_t> GetDayOfWeek() const;

                    /**
                     * 设置Specifies the days of the week, from Monday to Sunday, on which a scheduled snapshot will be triggered. Value range: [0, 6]. 0 indicates triggering on Sunday, 1-6 indicate triggering on Monday-Saturday.
                     * @param _dayOfWeek Specifies the days of the week, from Monday to Sunday, on which a scheduled snapshot will be triggered. Value range: [0, 6]. 0 indicates triggering on Sunday, 1-6 indicate triggering on Monday-Saturday.
                     * 
                     */
                    void SetDayOfWeek(const std::vector<uint64_t>& _dayOfWeek);

                    /**
                     * 判断参数 DayOfWeek 是否已赋值
                     * @return DayOfWeek 是否已赋值
                     * 
                     */
                    bool DayOfWeekHasBeenSet() const;

                    /**
                     * 获取Specifies the dates of the month on which a scheduled snapshot will be triggered. Value range: [1, 31]. `1` to `31` indicate the specific dates of the month; for example, `5` indicates the 5th day of the month. Note: If you set a date that does not exist in some months such as 29, 30, and 31, these months will be skipped for scheduled snapshot creation.
                     * @return DayOfMonth Specifies the dates of the month on which a scheduled snapshot will be triggered. Value range: [1, 31]. `1` to `31` indicate the specific dates of the month; for example, `5` indicates the 5th day of the month. Note: If you set a date that does not exist in some months such as 29, 30, and 31, these months will be skipped for scheduled snapshot creation.
                     * 
                     */
                    std::vector<uint64_t> GetDayOfMonth() const;

                    /**
                     * 设置Specifies the dates of the month on which a scheduled snapshot will be triggered. Value range: [1, 31]. `1` to `31` indicate the specific dates of the month; for example, `5` indicates the 5th day of the month. Note: If you set a date that does not exist in some months such as 29, 30, and 31, these months will be skipped for scheduled snapshot creation.
                     * @param _dayOfMonth Specifies the dates of the month on which a scheduled snapshot will be triggered. Value range: [1, 31]. `1` to `31` indicate the specific dates of the month; for example, `5` indicates the 5th day of the month. Note: If you set a date that does not exist in some months such as 29, 30, and 31, these months will be skipped for scheduled snapshot creation.
                     * 
                     */
                    void SetDayOfMonth(const std::vector<uint64_t>& _dayOfMonth);

                    /**
                     * 判断参数 DayOfMonth 是否已赋值
                     * @return DayOfMonth 是否已赋值
                     * 
                     */
                    bool DayOfMonthHasBeenSet() const;

                    /**
                     * 获取Specifies the interval for creating scheduled snapshots in days. Value range: [1, 365]. For example, if it is set to `5`, scheduled snapshots will be created every 5 days. Note: If you choose to back up by day, the time for the first backup is theoretically the day when the backup policy is created. If the backup policy creation time on the current day is later than the set backup time, the first backup will be performed in the second backup cycle.
                     * @return IntervalDays Specifies the interval for creating scheduled snapshots in days. Value range: [1, 365]. For example, if it is set to `5`, scheduled snapshots will be created every 5 days. Note: If you choose to back up by day, the time for the first backup is theoretically the day when the backup policy is created. If the backup policy creation time on the current day is later than the set backup time, the first backup will be performed in the second backup cycle.
                     * 
                     */
                    uint64_t GetIntervalDays() const;

                    /**
                     * 设置Specifies the interval for creating scheduled snapshots in days. Value range: [1, 365]. For example, if it is set to `5`, scheduled snapshots will be created every 5 days. Note: If you choose to back up by day, the time for the first backup is theoretically the day when the backup policy is created. If the backup policy creation time on the current day is later than the set backup time, the first backup will be performed in the second backup cycle.
                     * @param _intervalDays Specifies the interval for creating scheduled snapshots in days. Value range: [1, 365]. For example, if it is set to `5`, scheduled snapshots will be created every 5 days. Note: If you choose to back up by day, the time for the first backup is theoretically the day when the backup policy is created. If the backup policy creation time on the current day is later than the set backup time, the first backup will be performed in the second backup cycle.
                     * 
                     */
                    void SetIntervalDays(const uint64_t& _intervalDays);

                    /**
                     * 判断参数 IntervalDays 是否已赋值
                     * @return IntervalDays 是否已赋值
                     * 
                     */
                    bool IntervalDaysHasBeenSet() const;

                private:

                    /**
                     * Specifies the time that that the scheduled snapshot policy will be triggered. The unit is hour. The value range is [0-23]. 00:00-23:00 is a total of 24 time points that can be selected. 1 indicates 01:00, and so on.
                     */
                    std::vector<uint64_t> m_hour;
                    bool m_hourHasBeenSet;

                    /**
                     * Specifies the days of the week, from Monday to Sunday, on which a scheduled snapshot will be triggered. Value range: [0, 6]. 0 indicates triggering on Sunday, 1-6 indicate triggering on Monday-Saturday.
                     */
                    std::vector<uint64_t> m_dayOfWeek;
                    bool m_dayOfWeekHasBeenSet;

                    /**
                     * Specifies the dates of the month on which a scheduled snapshot will be triggered. Value range: [1, 31]. `1` to `31` indicate the specific dates of the month; for example, `5` indicates the 5th day of the month. Note: If you set a date that does not exist in some months such as 29, 30, and 31, these months will be skipped for scheduled snapshot creation.
                     */
                    std::vector<uint64_t> m_dayOfMonth;
                    bool m_dayOfMonthHasBeenSet;

                    /**
                     * Specifies the interval for creating scheduled snapshots in days. Value range: [1, 365]. For example, if it is set to `5`, scheduled snapshots will be created every 5 days. Note: If you choose to back up by day, the time for the first backup is theoretically the day when the backup policy is created. If the backup policy creation time on the current day is later than the set backup time, the first backup will be performed in the second backup cycle.
                     */
                    uint64_t m_intervalDays;
                    bool m_intervalDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_POLICY_H_
