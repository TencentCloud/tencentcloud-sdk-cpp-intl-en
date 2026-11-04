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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_TIMERSCHEDULECONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_TIMERSCHEDULECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/CronSchedule.h>
#include <tencentcloud/adp/v20260520/model/DailySchedule.h>
#include <tencentcloud/adp/v20260520/model/IntervalSchedule.h>
#include <tencentcloud/adp/v20260520/model/ManualOnlySchedule.h>
#include <tencentcloud/adp/v20260520/model/OnceSchedule.h>
#include <tencentcloud/adp/v20260520/model/WeeklySchedule.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * TimerScheduleConfig
                */
                class TimerScheduleConfig : public AbstractModel
                {
                public:
                    TimerScheduleConfig();
                    ~TimerScheduleConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cron configuration.
                     * @return Cron Cron configuration.
                     * 
                     */
                    CronSchedule GetCron() const;

                    /**
                     * 设置Cron configuration.
                     * @param _cron Cron configuration.
                     * 
                     */
                    void SetCron(const CronSchedule& _cron);

                    /**
                     * 判断参数 Cron 是否已赋值
                     * @return Cron 是否已赋值
                     * 
                     */
                    bool CronHasBeenSet() const;

                    /**
                     * 获取Daily trigger
                     * @return Daily Daily trigger
                     * 
                     */
                    DailySchedule GetDaily() const;

                    /**
                     * 设置Daily trigger
                     * @param _daily Daily trigger
                     * 
                     */
                    void SetDaily(const DailySchedule& _daily);

                    /**
                     * 判断参数 Daily 是否已赋值
                     * @return Daily 是否已赋值
                     * 
                     */
                    bool DailyHasBeenSet() const;

                    /**
                     * 获取Fixed interval
                     * @return Interval Fixed interval
                     * 
                     */
                    IntervalSchedule GetInterval() const;

                    /**
                     * 设置Fixed interval
                     * @param _interval Fixed interval
                     * 
                     */
                    void SetInterval(const IntervalSchedule& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取Manual only
                     * @return ManualOnly Manual only
                     * 
                     */
                    ManualOnlySchedule GetManualOnly() const;

                    /**
                     * 设置Manual only
                     * @param _manualOnly Manual only
                     * 
                     */
                    void SetManualOnly(const ManualOnlySchedule& _manualOnly);

                    /**
                     * 判断参数 ManualOnly 是否已赋值
                     * @return ManualOnly 是否已赋值
                     * 
                     */
                    bool ManualOnlyHasBeenSet() const;

                    /**
                     * 获取Single time
                     * @return Once Single time
                     * 
                     */
                    OnceSchedule GetOnce() const;

                    /**
                     * 设置Single time
                     * @param _once Single time
                     * 
                     */
                    void SetOnce(const OnceSchedule& _once);

                    /**
                     * 判断参数 Once 是否已赋值
                     * @return Once 是否已赋值
                     * 
                     */
                    bool OnceHasBeenSet() const;

                    /**
                     * 获取Enumeration values:
| uint | Description |
| --- | --- |
| 0 |  |
Manual only
| 2 | Daily |
| 3 | Weekly |
| 4 | By interval |
| 5 | One-time |
| 6 | Cron |
                     * @return ScheduleType Enumeration values:
| uint | Description |
| --- | --- |
| 0 |  |
Manual only
| 2 | Daily |
| 3 | Weekly |
| 4 | By interval |
| 5 | One-time |
| 6 | Cron |
                     * 
                     */
                    int64_t GetScheduleType() const;

                    /**
                     * 设置Enumeration values:
| uint | Description |
| --- | --- |
| 0 |  |
Manual only
| 2 | Daily |
| 3 | Weekly |
| 4 | By interval |
| 5 | One-time |
| 6 | Cron |
                     * @param _scheduleType Enumeration values:
| uint | Description |
| --- | --- |
| 0 |  |
Manual only
| 2 | Daily |
| 3 | Weekly |
| 4 | By interval |
| 5 | One-time |
| 6 | Cron |
                     * 
                     */
                    void SetScheduleType(const int64_t& _scheduleType);

                    /**
                     * 判断参数 ScheduleType 是否已赋值
                     * @return ScheduleType 是否已赋值
                     * 
                     */
                    bool ScheduleTypeHasBeenSet() const;

                    /**
                     * 获取Time zone
                     * @return Timezone Time zone
                     * 
                     */
                    std::string GetTimezone() const;

                    /**
                     * 设置Time zone
                     * @param _timezone Time zone
                     * 
                     */
                    void SetTimezone(const std::string& _timezone);

                    /**
                     * 判断参数 Timezone 是否已赋值
                     * @return Timezone 是否已赋值
                     * 
                     */
                    bool TimezoneHasBeenSet() const;

                    /**
                     * 获取Triggers at a fixed time weekly.
                     * @return Weekly Triggers at a fixed time weekly.
                     * 
                     */
                    WeeklySchedule GetWeekly() const;

                    /**
                     * 设置Triggers at a fixed time weekly.
                     * @param _weekly Triggers at a fixed time weekly.
                     * 
                     */
                    void SetWeekly(const WeeklySchedule& _weekly);

                    /**
                     * 判断参数 Weekly 是否已赋值
                     * @return Weekly 是否已赋值
                     * 
                     */
                    bool WeeklyHasBeenSet() const;

                private:

                    /**
                     * Cron configuration.
                     */
                    CronSchedule m_cron;
                    bool m_cronHasBeenSet;

                    /**
                     * Daily trigger
                     */
                    DailySchedule m_daily;
                    bool m_dailyHasBeenSet;

                    /**
                     * Fixed interval
                     */
                    IntervalSchedule m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Manual only
                     */
                    ManualOnlySchedule m_manualOnly;
                    bool m_manualOnlyHasBeenSet;

                    /**
                     * Single time
                     */
                    OnceSchedule m_once;
                    bool m_onceHasBeenSet;

                    /**
                     * Enumeration values:
| uint | Description |
| --- | --- |
| 0 |  |
Manual only
| 2 | Daily |
| 3 | Weekly |
| 4 | By interval |
| 5 | One-time |
| 6 | Cron |
                     */
                    int64_t m_scheduleType;
                    bool m_scheduleTypeHasBeenSet;

                    /**
                     * Time zone
                     */
                    std::string m_timezone;
                    bool m_timezoneHasBeenSet;

                    /**
                     * Triggers at a fixed time weekly.
                     */
                    WeeklySchedule m_weekly;
                    bool m_weeklyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_TIMERSCHEDULECONFIG_H_
