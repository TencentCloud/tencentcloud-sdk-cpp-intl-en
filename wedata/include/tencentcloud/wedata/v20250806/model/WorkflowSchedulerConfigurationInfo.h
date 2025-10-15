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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWSCHEDULERCONFIGURATIONINFO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWSCHEDULERCONFIGURATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Workflow Unified Scheduling Parameter Input - Dependency Task Value Reference:

Value description table:
| Current Task Cycle Type | Upstream Task Cycle Type | Configuration Mode | MainCyclicConfig Value | Time Dimension / Instance Scope        | SubordinateCyclicConfig Value     | offset Value                         |
| ----------------------- | ------------------------ | ------------------ | ---------------------- | -------------------------------------- | --------------------------------- | ------------------------------------ |
| HOUR_CYCLE              | YEAR_CYCLE               | Recommended Policy | YEAR                   | By Year / Current Year                 | CURRENT_YEAR                      | None                                 |
| MINUTE_CYCLE            | MONTH_CYCLE              | Recommended Policy | MONTH                  | By Month / Current Month               | CURRENT_MONTH                     | None                                 |
| DAY_CYCLE               | WEEK_CYCLE               | Recommended Policy | WEEK                   | By Week / Current Week                 | CURRENT_WEEK                      | None                                 |
| DAY_CYCLE               | WEEK_CYCLE               | Recommended Policy | DAY                    | By Day / Instance of Latest Data Time  | RECENT_DATE                       | None                                 |
| HOUR_CYCLE              | HOUR_CYCLE               | Recommended Policy | HOUR                   | By Hour / Latest Instance              | CURRENT_HOUR                      | None                                 |
| HOUR_CYCLE              | HOUR_CYCLE               | Recommended Policy | HOUR                   | By Hour / Previous Cycle               | PREVIOUS_HOUR_CYCLE               | None                                 |
| HOUR_CYCLE              | DAY_CYCLE                | Recommended Policy | DAY                    | By Day / Current Day                   | CURRENT_DAY                       | None                                 |
| WEEK_CYCLE              | DAY_CYCLE                | Recommended Policy | WEEK                   | By Week / Previous Week                | PREVIOUS_WEEK                     | None                                 |
| WEEK_CYCLE              | DAY_CYCLE                | Recommended Policy | WEEK                   | By Week / Previous Friday              | PREVIOUS_FRIDAY                   | None                                 |
| WEEK_CYCLE              | DAY_CYCLE                | Recommended Policy | WEEK                   | By Week / Previous Sunday              | PREVIOUS_WEEKEND                  | None                                 |
| WEEK_CYCLE              | DAY_CYCLE                | Recommended Policy | WEEK                   | By Week / Current Week                 | CURRENT_WEEK                      | None                                 |
| WEEK_CYCLE              | DAY_CYCLE                | Recommended Policy | DAY                    | By Day / Current Day                   | CURRENT_DAY                       | None                                 |
| WEEK_CYCLE              | DAY_CYCLE                | Recommended Policy | DAY                    | By Day / Previous Day                  | PREVIOUS_DAY                      | None                                 |
| WEEK_CYCLE              | ONEOFF_CYCLE             | Recommended Policy | WEEK                   | By Week / Current Week                 | CURRENT_WEEK                      | None                                 |
| HOUR_CYCLE              | MINUTE_CYCLE             | Recommended Policy | HOUR                   | By Hour / Previous Hour (-60,0]        | PREVIOUS_HOUR_LATER_OFFSET_MINUTE | None                                 |
| HOUR_CYCLE              | MINUTE_CYCLE             | Recommended Policy | HOUR                   | By Hour / Previous Hour                | PREVIOUS_HOUR                     | None                                 |
| HOUR_CYCLE              | MINUTE_CYCLE             | Recommended Policy | HOUR                   | By Hour / Current Hour                 | CURRENT_HOUR                      | None                                 |
| YEAR_CYCLE              | WEEK_CYCLE               | Recommended Policy | YEAR                   | By Year / Current Year                 | CURRENT_YEAR                      | None                                 |
| WEEK_CYCLE              | YEAR_CYCLE               | Recommended Policy | YEAR                   | By Year / Current Year                 | CURRENT_YEAR                      | None                                 |
| MINUTE_CYCLE            | YEAR_CYCLE               | Recommended Policy | YEAR                   | By Year / Current Year                 | CURRENT_YEAR                      | None                                 |
| WEEK_CYCLE              | HOUR_CYCLE               | Recommended Policy | WEEK                   | By Week / Previous Week                | PREVIOUS_WEEK                     | None                                 |
| WEEK_CYCLE              | HOUR_CYCLE               | Recommended Policy | WEEK                   | By Week / Current Week                 | CURRENT_WEEK                      | None                                 |
| MINUTE_CYCLE            | HOUR_CYCLE               | Recommended Policy | HOUR                   | By Hour / Current Hour                 | CURRENT_HOUR                      | None                                 |
| HOUR_CYCLE              | MONTH_CYCLE              | Recommended Policy | MONTH                  | By Month / Current Month               | CURRENT_MONTH                     | None                                 |
| MONTH_CYCLE             | HOUR_CYCLE               | Recommended Policy | MONTH                  | By Month / Previous Month              | PREVIOUS_MONTH                    | None                                 |
| MONTH_CYCLE             | HOUR_CYCLE               | Recommended Policy | MONTH                  | By Month / Current Month               | CURRENT_MONTH                     | None                                 |
| MONTH_CYCLE             | ONEOFF_CYCLE             | Recommended Policy | MONTH                  | By Month / Current Month               | CURRENT_MONTH                     | None                                 |
| DAY_CYCLE               | MONTH_CYCLE              | Recommended Policy | MONTH                  | By Month / Current Month               | CURRENT_MONTH                     | None                                 |
| DAY_CYCLE               | MONTH_CYCLE              | Recommended Policy | DAY                    | By Day / Instance of Latest Data Time  | RECENT_DATE                       | None                                 |
| MONTH_CYCLE             | YEAR_CYCLE               | Recommended Policy | YEAR                   | By Year / Current Year                 | CURRENT_YEAR                      | None                                 |
| ONEOFF_CYCLE            | WEEK_CYCLE               | Recommended Policy | WEEK                   | By Week / Current Week                 | CURRENT_WEEK                      | None                                 |
| MINUTE_CYCLE            | MINUTE_CYCLE             | Recommended Policy | MINUTE                 | By Minute / Current Minute             | CURRENT_MINUTE                    | None                                 |
| MINUTE_CYCLE            | MINUTE_CYCLE             | Recommended Policy | MINUTE                 | By Minute / Previous Cycle             | PREVIOUS_MINUTE_CYCLE             | None                                 |
| YEAR_CYCLE              | MINUTE_CYCLE             | Recommended Policy | YEAR                   | By Year / Current Year                 | CURRENT_YEAR                      | None                                 |
| ONEOFF_CYCLE            | DAY_CYCLE                | Recommended Policy | DAY                    | By Day / Current Day                   | CURRENT_DAY                       | None                                 |
| DAY_CYCLE               | MINUTE_CYCLE             | Recommended Policy | DAY                    | By Day / Previous Day (-24 * 60,0]     | PREVIOUS_DAY_LATER_OFFSET_MINUTE  | None                                 |
| DAY_CYCLE               | MINUTE_CYCLE             | Recommended Policy | DAY                    | By Day / Previous Day                  | PREVIOUS_DAY                      | None                                 |
| DAY_CYCLE               | MINUTE_CYCLE             | Recommended Policy | DAY                    | By Day / Current Day                   | CURRENT_DAY                       | None                                 |
| MINUTE_CYCLE            | DAY_CYCLE                | Recommended Policy | DAY                    | By Day / Current Day                   | CURRENT_DAY                       | None                                 |
| WEEK_CYCLE              | WEEK_CYCLE               | Recommended Policy | WEEK                   | By Week / Current Week                 | CURRENT_WEEK                      | None                                 |
| WEEK_CYCLE              | WEEK_CYCLE               | Recommended Policy | DAY                    | By Day / Instance of Latest Data Time  | RECENT_DATE                       | None                                 |
| YEAR_CYCLE              | YEAR_CYCLE               | Recommended Policy | DAY                    | By Day / Instance of Latest Data Time  | RECENT_DATE                       | None                                 |
| YEAR_CYCLE              | YEAR_CYCLE               | Recommended Policy | YEAR                   | By Year / Current Year                 | CURRENT_YEAR                      | None                                 |
| YEAR_CYCLE              | HOUR_CYCLE               | Recommended Policy | YEAR                   | By Year / Current Year                 | CURRENT_YEAR                      | None                                 |
| MINUTE_CYCLE            | WEEK_CYCLE               | Recommended Policy | WEEK                   | By Week / Current Week                 | CURRENT_WEEK                      | None                                 |
| ONEOFF_CYCLE            | MINUTE_CYCLE             | Recommended Policy | DAY                    | By Day / Current Day                   | CURRENT_DAY                       | None                                 |
| HOUR_CYCLE              | ONEOFF_CYCLE             | Recommended Policy | DAY                    | By Day / Current Day                   | CURRENT_DAY                       | None                                 |
| WEEK_CYCLE              | MINUTE_CYCLE             | Recommended Policy | WEEK                   | By Week / Previous Week                | PREVIOUS_WEEK                     | None                                 |
| WEEK_CYCLE              | MINUTE_CYCLE             | Recommended Policy | WEEK                   | By Week / Current Week                 | CURRENT_WEEK                      | None                                 |
| DAY_CYCLE               | HOUR_CYCLE               | Recommended Policy | DAY                    | By Day / Previous Day (-24,0]          | PREVIOUS_DAY_LATER_OFFSET_HOUR    | None                                 |
| DAY_CYCLE               | HOUR_CYCLE               | Recommended Policy | DAY                    | By Day / Previous Day [-24,0)          | PREVIOUS_DAY                      | None                                 |
| DAY_CYCLE               | HOUR_CYCLE               | Recommended Policy | DAY                    | By Day / Current Day                   | CURRENT_DAY                       | None                                 |
| YEAR_CYCLE              | MONTH_CYCLE              | Recommended Policy | DAY                    | By Day / Instance of Latest Data Time  | RECENT_DATE                       | None                                 |
| YEAR_CYCLE              | MONTH_CYCLE              | Recommended Policy | MONTH                  | By Month / All Months of Current Year  | ALL_MONTH_OF_YEAR                 | None                                 |
| YEAR_CYCLE              | MONTH_CYCLE              | Recommended Policy | MONTH                  | By Month / Current Month               | CURRENT_MONTH                     | None                                 |
| YEAR_CYCLE              | MONTH_CYCLE              | Recommended Policy | MONTH                  | By Month / Previous Month              | PREVIOUS_MONTH                    | None                                 |
| YEAR_CYCLE              | MONTH_CYCLE              | Recommended Policy | MONTH                  | By Month / End of Previous Month       | PREVIOUS_END_OF_MONTH             | None                                 |
| YEAR_CYCLE              | MONTH_CYCLE              | Recommended Policy | MONTH                  | By Month / Beginning of Previous Month | PREVIOUS_BEGIN_OF_MONTH           | None                                 |
| ONEOFF_CYCLE            | YEAR_CYCLE               | Recommended Policy | YEAR                   | By Year / Current Year                 | CURRENT_YEAR                      | None                                 |
| DAY_CYCLE               | DAY_CYCLE                | Recommended Policy | DAY                    | By Day / Current Day                   | CURRENT_DAY                       | None                                 |
| ONEOFF_CYCLE            | HOUR_CYCLE               | Recommended Policy | DAY                    | By Day / Current Day                   | CURRENT_DAY                       | None                                 |
| DAY_CYCLE               | ONEOFF_CYCLE             | Recommended Policy | DAY                    | By Day / Current Day                   | CURRENT_DAY                       | None                                 |
| MINUTE_CYCLE            | ONEOFF_CYCLE             | Recommended Policy | DAY                    | By Day / Current Day                   | CURRENT_DAY                       | None                                 |
| WEEK_CYCLE              | MONTH_CYCLE              | Recommended Policy | MONTH                  | By Month / Current Month               | CURRENT_MONTH                     | None                                 |
| WEEK_CYCLE              | MONTH_CYCLE              | Recommended Policy | DAY                    | By Day / Instance of Latest Data Time  | RECENT_DATE                       | None                                 |
| YEAR_CYCLE              | ONEOFF_CYCLE             | Recommended Policy | YEAR                   | By Year / Current Year                 | CURRENT_YEAR                      | None                                 |
| MONTH_CYCLE             | DAY_CYCLE                | Recommended Policy | MONTH                  | By Month / Previous Month              | PREVIOUS_MONTH                    | None                                 |
| MONTH_CYCLE             | DAY_CYCLE                | Recommended Policy | MONTH                  | By Month / End of Previous Month       | PREVIOUS_END_OF_MONTH             | None                                 |
| MONTH_CYCLE             | DAY_CYCLE                | Recommended Policy | MONTH                  | By Month / Current Month               | CURRENT_MONTH                     | None                                 |
| MONTH_CYCLE             | DAY_CYCLE                | Recommended Policy | DAY                    | By Day / Current Day                   | CURRENT_DAY                       | None                                 |
| MONTH_CYCLE             | DAY_CYCLE                | Recommended Policy | DAY                    | By Day / Previous Day                  | PREVIOUS_DAY                      | None                                 |
| YEAR_CYCLE              | DAY_CYCLE                | Recommended Policy | DAY                    | By Day / All Days of Current Year      | ALL_DAY_OF_YEAR                   | None                                 |
| YEAR_CYCLE              | DAY_CYCLE                | Recommended Policy | DAY                    | By Day / Current Day                   | CURRENT_DAY                       | None                                 |
| YEAR_CYCLE              | DAY_CYCLE                | Recommended Policy | DAY                    | By Day / Previous Day                  | PREVIOUS_DAY                      | None                                 |
| HOUR_CYCLE              | WEEK_CYCLE               | Recommended Policy | WEEK                   | By Week / Current Week                 | CURRENT_WEEK                      | None                                 |
| MONTH_CYCLE             | MONTH_CYCLE              | Recommended Policy | MONTH                  | By Month / Current Month               | CURRENT_MONTH                     | None                                 |
| MONTH_CYCLE             | MONTH_CYCLE              | Recommended Policy | DAY                    | By Day / Instance of Latest Data Time  | RECENT_DATE                       | None                                 |
| MONTH_CYCLE             | MINUTE_CYCLE             | Recommended Policy | MONTH                  | By Month / Previous Month              | PREVIOUS_MONTH                    | None                                 |
| MONTH_CYCLE             | MINUTE_CYCLE             | Recommended Policy | MONTH                  | By Month / Current Month               | CURRENT_MONTH                     | None                                 |
| MONTH_CYCLE             | WEEK_CYCLE               | Recommended Policy | MONTH                  | By Month / Previous Month              | PREVIOUS_MONTH                    | None                                 |
| MONTH_CYCLE             | WEEK_CYCLE               | Recommended Policy | MONTH                  | By Month / Current Month               | CURRENT_MONTH                     | None                                 |
| MONTH_CYCLE             | WEEK_CYCLE               | Recommended Policy | DAY                    | By Day / Instance of Latest Data Time  | RECENT_DATE                       | None                                 |
| DAY_CYCLE               | YEAR_CYCLE               | Recommended Policy | YEAR                   | By Year / Current Year                 | CURRENT_YEAR                      | None                                 |
| DAY_CYCLE               | YEAR_CYCLE               | Recommended Policy | DAY                    | By Day / Instance of Latest Data Time  | RECENT_DATE                       | None                                 |
| ONEOFF_CYCLE            | ONEOFF_CYCLE             | Recommended Policy | DAY                    | By Day / Current Day                   | CURRENT_DAY                       | None                                 |
| ONEOFF_CYCLE            | MONTH_CYCLE              | Recommended Policy | MONTH                  | By Month / Current Month               | CURRENT_MONTH                     | None                                 |
| CRONTAB_CYCLE           | CRONTAB_CYCLE            | Recommended Policy | CRONTAB                | None                                   | CURRENT                           | None                                 |
| HOUR_CYCLE              | HOUR_CYCLE               | Custom             | RANGE_HOUR             | Range (hours)                          | None                              | Comma-separated integers, e.g., -1,0 |
| HOUR_CYCLE              | DAY_CYCLE                | Custom             | RANGE_DAY              | Range (days)                           | None                              | Comma-separated integers, e.g., -1,0 |
| WEEK_CYCLE              | DAY_CYCLE                | Custom             | RANGE_DAY              | Range (days)                           | None                              | Comma-separated integers, e.g., -1,0 |
| HOUR_CYCLE              | MINUTE_CYCLE             | Custom             | RANGE_MINUTE           | Range (minutes)                        | None                              | Comma-separated integers, e.g., -1,0 |
| WEEK_CYCLE              | HOUR_CYCLE               | Custom             | RANGE_HOUR             | Range (hours)                          | None                              | Comma-separated integers, e.g., -1,0 |
| MINUTE_CYCLE            | HOUR_CYCLE               | Custom             | RANGE_HOUR             | Range (hours)                          | None                              | Comma-separated integers, e.g., -1,0 |
| MONTH_CYCLE             | HOUR_CYCLE               | Custom             | RANGE_HOUR             | Range (hours)                          | None                              | Comma-separated integers, e.g., -1,0 |
| MINUTE_CYCLE            | MINUTE_CYCLE             | Custom             | RANGE_MINUTE           | Range (minutes)                        | None                              | Comma-separated integers, e.g., -1,0 |
| YEAR_CYCLE              | MINUTE_CYCLE             | Custom             | RANGE_MINUTE           | Range (minutes)                        | None                              | Comma-separated integers, e.g., -1,0 |
| DAY_CYCLE               | MINUTE_CYCLE             | Custom             | RANGE_MINUTE           | Range (minutes)                        | None                              | Comma-separated integers, e.g., -1,0 |
| MINUTE_CYCLE            | DAY_CYCLE                | Custom             | RANGE_DAY              | Range (days)                           | None                              | Comma-separated integers, e.g., -1,0 |
| YEAR_CYCLE              | HOUR_CYCLE               | Custom             | RANGE_HOUR             | Range (hours)                          | None                              | Comma-separated integers, e.g., -1,0 |
| WEEK_CYCLE              | MINUTE_CYCLE             | Custom             | RANGE_MINUTE           | Range (minutes)                        | None                              | Comma-separated integers, e.g., -1,0 |
| DAY_CYCLE               | HOUR_CYCLE               | Custom             | RANGE_HOUR             | Range (hours)                          | None                              | Comma-separated integers, e.g., -1,0 |
| DAY_CYCLE               | DAY_CYCLE                | Custom             | RANGE_DAY              | Range (days)                           | None                              | Comma-separated integers, e.g., -1,0 |
| MONTH_CYCLE             | DAY_CYCLE                | Custom             | RANGE_DAY              | Range (days)                           | None                              | Comma-separated integers, e.g., -1,0 |
| YEAR_CYCLE              | DAY_CYCLE                | Custom             | RANGE_DAY              | Range (days)                           | None                              | Comma-separated integers, e.g., -1,0 |
| MONTH_CYCLE             | MINUTE_CYCLE             | Custom             | RANGE_MINUTE           | Range (minutes)                        | None                              | Comma-separated integers, e.g., -1,0 |
| HOUR_CYCLE              | HOUR_CYCLE               | Custom             | LIST_HOUR              | List (hours)                           | None                              | Comma-separated integers, e.g., -1,0 |
| HOUR_CYCLE              | DAY_CYCLE                | Custom             | LIST_DAY               | List (days)                            | None                              | Comma-separated integers, e.g., -1,0 |
| WEEK_CYCLE              | DAY_CYCLE                | Custom             | LIST_DAY               | List (days)                            | None                              | Comma-separated integers, e.g., -1,0 |
| HOUR_CYCLE              | MINUTE_CYCLE             | Custom             | LIST_MINUTE            | List (minutes)                         | None                              | Comma-separated integers, e.g., -1,0 |
| WEEK_CYCLE              | HOUR_CYCLE               | Custom             | LIST_HOUR              | List (hours)                           | None                              | Comma-separated integers, e.g., -1,0 |
| MINUTE_CYCLE            | HOUR_CYCLE               | Custom             | LIST_HOUR              | List (hours)                           | None                              | Comma-separated integers, e.g., -1,0 |
| MONTH_CYCLE             | HOUR_CYCLE               | Custom             | LIST_HOUR              | List (hours)                           | None                              | Comma-separated integers, e.g., -1,0 |
| MINUTE_CYCLE            | MINUTE_CYCLE             | Custom             | LIST_MINUTE            | List (minutes)                         | None                              | Comma-separated integers, e.g., -1,0 |
| YEAR_CYCLE              | MINUTE_CYCLE             | Custom             | LIST_MINUTE            | List (minutes)                         | None                              | Comma-separated integers, e.g., -1,0 |
| DAY_CYCLE               | MINUTE_CYCLE             | Custom             | LIST_MINUTE            | List (minutes)                         | None                              | Comma-separated integers, e.g., -1,0 |
| MINUTE_CYCLE            | DAY_CYCLE                | Custom             | LIST_DAY               | List (days)                            | None                              | Comma-separated integers, e.g., -1,0 |
| YEAR_CYCLE              | HOUR_CYCLE               | Custom             | LIST_HOUR              | List (hours)                           | None                              | Comma-separated integers, e.g., -1,0 |
| WEEK_CYCLE              | MINUTE_CYCLE             | Custom             | LIST_MINUTE            | List (minutes)                         | None                              | Comma-separated integers, e.g., -1,0 |
| DAY_CYCLE               | HOUR_CYCLE               | Custom             | LIST_HOUR              | List (hours)                           | None                              | Comma-separated integers, e.g., -1,0 |
| DAY_CYCLE               | DAY_CYCLE                | Custom             | LIST_DAY               | List (days)                            | None                              | Comma-separated integers, e.g., -1,0 |
| MONTH_CYCLE             | DAY_CYCLE                | Custom             | LIST_DAY               | List (days)                            | None                              | Comma-separated integers, e.g., -1,0 |
| YEAR_CYCLE              | DAY_CYCLE                | Custom             | LIST_DAY               | List (days)                            | None                              | Comma-separated integers, e.g., -1,0 |
| MONTH_CYCLE             | MINUTE_CYCLE             | Custom             | LIST_MINUTE            | List (minutes)                         | None                              | Comma-separated integers, e.g., -1,0 |
                */
                class WorkflowSchedulerConfigurationInfo : public AbstractModel
                {
                public:
                    WorkflowSchedulerConfigurationInfo();
                    ~WorkflowSchedulerConfigurationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the time zone.
                     * @return ScheduleTimeZone Specifies the time zone.
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置Specifies the time zone.
                     * @param _scheduleTimeZone Specifies the time zone.
                     * 
                     */
                    void SetScheduleTimeZone(const std::string& _scheduleTimeZone);

                    /**
                     * 判断参数 ScheduleTimeZone 是否已赋值
                     * @return ScheduleTimeZone 是否已赋值
                     * 
                     */
                    bool ScheduleTimeZoneHasBeenSet() const;

                    /**
                     * 获取Period type. Supported types:

ONEOFF_CYCLE: specifies a one-time cycle.
YEAR_CYCLE: specifies the year cycle.
MONTH_CYCLE: specifies the monthly cycle.
WEEK_CYCLE: specifies the week cycle.
DAY_CYCLE: specifies the day cycle.
HOUR_CYCLE: specifies the hour cycle.
MINUTE_CYCLE: specifies the minute cycle.
CRONTAB_CYCLE: specifies the crontab expression type
                     * @return CycleType Period type. Supported types:

ONEOFF_CYCLE: specifies a one-time cycle.
YEAR_CYCLE: specifies the year cycle.
MONTH_CYCLE: specifies the monthly cycle.
WEEK_CYCLE: specifies the week cycle.
DAY_CYCLE: specifies the day cycle.
HOUR_CYCLE: specifies the hour cycle.
MINUTE_CYCLE: specifies the minute cycle.
CRONTAB_CYCLE: specifies the crontab expression type
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置Period type. Supported types:

ONEOFF_CYCLE: specifies a one-time cycle.
YEAR_CYCLE: specifies the year cycle.
MONTH_CYCLE: specifies the monthly cycle.
WEEK_CYCLE: specifies the week cycle.
DAY_CYCLE: specifies the day cycle.
HOUR_CYCLE: specifies the hour cycle.
MINUTE_CYCLE: specifies the minute cycle.
CRONTAB_CYCLE: specifies the crontab expression type
                     * @param _cycleType Period type. Supported types:

ONEOFF_CYCLE: specifies a one-time cycle.
YEAR_CYCLE: specifies the year cycle.
MONTH_CYCLE: specifies the monthly cycle.
WEEK_CYCLE: specifies the week cycle.
DAY_CYCLE: specifies the day cycle.
HOUR_CYCLE: specifies the hour cycle.
MINUTE_CYCLE: specifies the minute cycle.
CRONTAB_CYCLE: specifies the crontab expression type
                     * 
                     */
                    void SetCycleType(const std::string& _cycleType);

                    /**
                     * 判断参数 CycleType 是否已赋值
                     * @return CycleType 是否已赋值
                     * 
                     */
                    bool CycleTypeHasBeenSet() const;

                    /**
                     * 获取Self-Dependent. Valid values: parallel, serial, orderly. Default value: serial. 
                     * @return SelfDepend Self-Dependent. Valid values: parallel, serial, orderly. Default value: serial. 
                     * 
                     */
                    std::string GetSelfDepend() const;

                    /**
                     * 设置Self-Dependent. Valid values: parallel, serial, orderly. Default value: serial. 
                     * @param _selfDepend Self-Dependent. Valid values: parallel, serial, orderly. Default value: serial. 
                     * 
                     */
                    void SetSelfDepend(const std::string& _selfDepend);

                    /**
                     * 判断参数 SelfDepend 是否已赋值
                     * @return SelfDepend 是否已赋值
                     * 
                     */
                    bool SelfDependHasBeenSet() const;

                    /**
                     * 获取Effective Start Time
                     * @return StartTime Effective Start Time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Effective Start Time
                     * @param _startTime Effective Start Time
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Effective End Time
                     * @return EndTime Effective End Time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Effective End Time
                     * @param _endTime Effective End Time
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Cron expression
                     * @return CrontabExpression Cron expression
                     * 
                     */
                    std::string GetCrontabExpression() const;

                    /**
                     * 设置Cron expression
                     * @param _crontabExpression Cron expression
                     * 
                     */
                    void SetCrontabExpression(const std::string& _crontabExpression);

                    /**
                     * 判断参数 CrontabExpression 是否已赋值
                     * @return CrontabExpression 是否已赋值
                     * 
                     */
                    bool CrontabExpressionHasBeenSet() const;

                    /**
                     * 获取Workflow dependency. Valid values: yes or no.
                     * @return DependencyWorkflow Workflow dependency. Valid values: yes or no.
                     * 
                     */
                    std::string GetDependencyWorkflow() const;

                    /**
                     * 设置Workflow dependency. Valid values: yes or no.
                     * @param _dependencyWorkflow Workflow dependency. Valid values: yes or no.
                     * 
                     */
                    void SetDependencyWorkflow(const std::string& _dependencyWorkflow);

                    /**
                     * 判断参数 DependencyWorkflow 是否已赋值
                     * @return DependencyWorkflow 是否已赋值
                     * 
                     */
                    bool DependencyWorkflowHasBeenSet() const;

                    /**
                     * 获取0: Do not modify
1: Reset the task's upstream dependency configuration to the default value
                     * @return ModifyCycleValue 0: Do not modify
1: Reset the task's upstream dependency configuration to the default value
                     * 
                     */
                    std::string GetModifyCycleValue() const;

                    /**
                     * 设置0: Do not modify
1: Reset the task's upstream dependency configuration to the default value
                     * @param _modifyCycleValue 0: Do not modify
1: Reset the task's upstream dependency configuration to the default value
                     * 
                     */
                    void SetModifyCycleValue(const std::string& _modifyCycleValue);

                    /**
                     * 判断参数 ModifyCycleValue 是否已赋值
                     * @return ModifyCycleValue 是否已赋值
                     * 
                     */
                    bool ModifyCycleValueHasBeenSet() const;

                    /**
                     * 获取The workflow contains cross-workflow dependencies and uses a cron expression for scheduling. If unified scheduling is saved, unsupported dependencies will be disconnected.
                     * @return ClearLink The workflow contains cross-workflow dependencies and uses a cron expression for scheduling. If unified scheduling is saved, unsupported dependencies will be disconnected.
                     * 
                     */
                    bool GetClearLink() const;

                    /**
                     * 设置The workflow contains cross-workflow dependencies and uses a cron expression for scheduling. If unified scheduling is saved, unsupported dependencies will be disconnected.
                     * @param _clearLink The workflow contains cross-workflow dependencies and uses a cron expression for scheduling. If unified scheduling is saved, unsupported dependencies will be disconnected.
                     * 
                     */
                    void SetClearLink(const bool& _clearLink);

                    /**
                     * 判断参数 ClearLink 是否已赋值
                     * @return ClearLink 是否已赋值
                     * 
                     */
                    bool ClearLinkHasBeenSet() const;

                    /**
                     * 获取Takes effect when ModifyCycleValue = 1. Indicates the default modification of the upstream dependency time dimension. Valid values are:
* CRONTAB
* DAY
* HOUR
* LIST_DAY
* LIST_HOUR
* LIST_MINUTE
* MINUTE
* MONTH
* RANGE_DAY
* RANGE_HOUR
* RANGE_MINUTE
* WEEK
* YEAR

https://capi.woa.com/object/detail?product=wedata&env=api_dev&version=2025-08-06&name=WorkflowSchedulerConfigurationInfo
                     * @return MainCyclicConfig Takes effect when ModifyCycleValue = 1. Indicates the default modification of the upstream dependency time dimension. Valid values are:
* CRONTAB
* DAY
* HOUR
* LIST_DAY
* LIST_HOUR
* LIST_MINUTE
* MINUTE
* MONTH
* RANGE_DAY
* RANGE_HOUR
* RANGE_MINUTE
* WEEK
* YEAR

https://capi.woa.com/object/detail?product=wedata&env=api_dev&version=2025-08-06&name=WorkflowSchedulerConfigurationInfo
                     * 
                     */
                    std::string GetMainCyclicConfig() const;

                    /**
                     * 设置Takes effect when ModifyCycleValue = 1. Indicates the default modification of the upstream dependency time dimension. Valid values are:
* CRONTAB
* DAY
* HOUR
* LIST_DAY
* LIST_HOUR
* LIST_MINUTE
* MINUTE
* MONTH
* RANGE_DAY
* RANGE_HOUR
* RANGE_MINUTE
* WEEK
* YEAR

https://capi.woa.com/object/detail?product=wedata&env=api_dev&version=2025-08-06&name=WorkflowSchedulerConfigurationInfo
                     * @param _mainCyclicConfig Takes effect when ModifyCycleValue = 1. Indicates the default modification of the upstream dependency time dimension. Valid values are:
* CRONTAB
* DAY
* HOUR
* LIST_DAY
* LIST_HOUR
* LIST_MINUTE
* MINUTE
* MONTH
* RANGE_DAY
* RANGE_HOUR
* RANGE_MINUTE
* WEEK
* YEAR

https://capi.woa.com/object/detail?product=wedata&env=api_dev&version=2025-08-06&name=WorkflowSchedulerConfigurationInfo
                     * 
                     */
                    void SetMainCyclicConfig(const std::string& _mainCyclicConfig);

                    /**
                     * 判断参数 MainCyclicConfig 是否已赋值
                     * @return MainCyclicConfig 是否已赋值
                     * 
                     */
                    bool MainCyclicConfigHasBeenSet() const;

                    /**
                     * 获取Takes effect when ModifyCycleValue = 1. Indicates the default modification of the upstream dependency - instance scope. Valid values are:
* ALL_DAY_OF_YEAR
* ALL_MONTH_OF_YEAR
* CURRENT
* CURRENT_DAY
* CURRENT_HOUR
* CURRENT_MINUTE
* CURRENT_MONTH
* CURRENT_WEEK
* CURRENT_YEAR
* PREVIOUS_BEGIN_OF_MONTH
* PREVIOUS_DAY
* PREVIOUS_DAY_LATER_OFFSET_HOUR
* PREVIOUS_DAY_LATER_OFFSET_MINUTE
* PREVIOUS_END_OF_MONTH
* PREVIOUS_FRIDAY
* PREVIOUS_HOUR
* PREVIOUS_HOUR_CYCLE
* PREVIOUS_HOUR_LATER_OFFSET_MINUTE
* PREVIOUS_MINUTE_CYCLE
* PREVIOUS_MONTH
* PREVIOUS_WEEK
* PREVIOUS_WEEKEND
* RECENT_DATE

https://capi.woa.com/object/detail?product=wedata&env=api_dev&version=2025-08-06&name=WorkflowSchedulerConfigurationInfo
                     * @return SubordinateCyclicConfig Takes effect when ModifyCycleValue = 1. Indicates the default modification of the upstream dependency - instance scope. Valid values are:
* ALL_DAY_OF_YEAR
* ALL_MONTH_OF_YEAR
* CURRENT
* CURRENT_DAY
* CURRENT_HOUR
* CURRENT_MINUTE
* CURRENT_MONTH
* CURRENT_WEEK
* CURRENT_YEAR
* PREVIOUS_BEGIN_OF_MONTH
* PREVIOUS_DAY
* PREVIOUS_DAY_LATER_OFFSET_HOUR
* PREVIOUS_DAY_LATER_OFFSET_MINUTE
* PREVIOUS_END_OF_MONTH
* PREVIOUS_FRIDAY
* PREVIOUS_HOUR
* PREVIOUS_HOUR_CYCLE
* PREVIOUS_HOUR_LATER_OFFSET_MINUTE
* PREVIOUS_MINUTE_CYCLE
* PREVIOUS_MONTH
* PREVIOUS_WEEK
* PREVIOUS_WEEKEND
* RECENT_DATE

https://capi.woa.com/object/detail?product=wedata&env=api_dev&version=2025-08-06&name=WorkflowSchedulerConfigurationInfo
                     * 
                     */
                    std::string GetSubordinateCyclicConfig() const;

                    /**
                     * 设置Takes effect when ModifyCycleValue = 1. Indicates the default modification of the upstream dependency - instance scope. Valid values are:
* ALL_DAY_OF_YEAR
* ALL_MONTH_OF_YEAR
* CURRENT
* CURRENT_DAY
* CURRENT_HOUR
* CURRENT_MINUTE
* CURRENT_MONTH
* CURRENT_WEEK
* CURRENT_YEAR
* PREVIOUS_BEGIN_OF_MONTH
* PREVIOUS_DAY
* PREVIOUS_DAY_LATER_OFFSET_HOUR
* PREVIOUS_DAY_LATER_OFFSET_MINUTE
* PREVIOUS_END_OF_MONTH
* PREVIOUS_FRIDAY
* PREVIOUS_HOUR
* PREVIOUS_HOUR_CYCLE
* PREVIOUS_HOUR_LATER_OFFSET_MINUTE
* PREVIOUS_MINUTE_CYCLE
* PREVIOUS_MONTH
* PREVIOUS_WEEK
* PREVIOUS_WEEKEND
* RECENT_DATE

https://capi.woa.com/object/detail?product=wedata&env=api_dev&version=2025-08-06&name=WorkflowSchedulerConfigurationInfo
                     * @param _subordinateCyclicConfig Takes effect when ModifyCycleValue = 1. Indicates the default modification of the upstream dependency - instance scope. Valid values are:
* ALL_DAY_OF_YEAR
* ALL_MONTH_OF_YEAR
* CURRENT
* CURRENT_DAY
* CURRENT_HOUR
* CURRENT_MINUTE
* CURRENT_MONTH
* CURRENT_WEEK
* CURRENT_YEAR
* PREVIOUS_BEGIN_OF_MONTH
* PREVIOUS_DAY
* PREVIOUS_DAY_LATER_OFFSET_HOUR
* PREVIOUS_DAY_LATER_OFFSET_MINUTE
* PREVIOUS_END_OF_MONTH
* PREVIOUS_FRIDAY
* PREVIOUS_HOUR
* PREVIOUS_HOUR_CYCLE
* PREVIOUS_HOUR_LATER_OFFSET_MINUTE
* PREVIOUS_MINUTE_CYCLE
* PREVIOUS_MONTH
* PREVIOUS_WEEK
* PREVIOUS_WEEKEND
* RECENT_DATE

https://capi.woa.com/object/detail?product=wedata&env=api_dev&version=2025-08-06&name=WorkflowSchedulerConfigurationInfo
                     * 
                     */
                    void SetSubordinateCyclicConfig(const std::string& _subordinateCyclicConfig);

                    /**
                     * 判断参数 SubordinateCyclicConfig 是否已赋值
                     * @return SubordinateCyclicConfig 是否已赋值
                     * 
                     */
                    bool SubordinateCyclicConfigHasBeenSet() const;

                    /**
                     * 获取Execution time left closed interval, for example: 00:00. only required when the CycleType is MINUTE_CYCLE.
                     * @return ExecutionStartTime Execution time left closed interval, for example: 00:00. only required when the CycleType is MINUTE_CYCLE.
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置Execution time left closed interval, for example: 00:00. only required when the CycleType is MINUTE_CYCLE.
                     * @param _executionStartTime Execution time left closed interval, for example: 00:00. only required when the CycleType is MINUTE_CYCLE.
                     * 
                     */
                    void SetExecutionStartTime(const std::string& _executionStartTime);

                    /**
                     * 判断参数 ExecutionStartTime 是否已赋值
                     * @return ExecutionStartTime 是否已赋值
                     * 
                     */
                    bool ExecutionStartTimeHasBeenSet() const;

                    /**
                     * 获取Execution time right closed interval, for example: 23:59. only required when the CycleType is MINUTE_CYCLE.
                     * @return ExecutionEndTime Execution time right closed interval, for example: 23:59. only required when the CycleType is MINUTE_CYCLE.
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置Execution time right closed interval, for example: 23:59. only required when the CycleType is MINUTE_CYCLE.
                     * @param _executionEndTime Execution time right closed interval, for example: 23:59. only required when the CycleType is MINUTE_CYCLE.
                     * 
                     */
                    void SetExecutionEndTime(const std::string& _executionEndTime);

                    /**
                     * 判断参数 ExecutionEndTime 是否已赋值
                     * @return ExecutionEndTime 是否已赋值
                     * 
                     */
                    bool ExecutionEndTimeHasBeenSet() const;

                    /**
                     * 获取Whether calendar scheduling is enabled. Valid values: 1 (enabled), 0 (disabled).
                     * @return CalendarOpen Whether calendar scheduling is enabled. Valid values: 1 (enabled), 0 (disabled).
                     * 
                     */
                    std::string GetCalendarOpen() const;

                    /**
                     * 设置Whether calendar scheduling is enabled. Valid values: 1 (enabled), 0 (disabled).
                     * @param _calendarOpen Whether calendar scheduling is enabled. Valid values: 1 (enabled), 0 (disabled).
                     * 
                     */
                    void SetCalendarOpen(const std::string& _calendarOpen);

                    /**
                     * 判断参数 CalendarOpen 是否已赋值
                     * @return CalendarOpen 是否已赋值
                     * 
                     */
                    bool CalendarOpenHasBeenSet() const;

                    /**
                     * 获取Calendar id.
                     * @return CalendarId Calendar id.
                     * 
                     */
                    std::string GetCalendarId() const;

                    /**
                     * 设置Calendar id.
                     * @param _calendarId Calendar id.
                     * 
                     */
                    void SetCalendarId(const std::string& _calendarId);

                    /**
                     * 判断参数 CalendarId 是否已赋值
                     * @return CalendarId 是否已赋值
                     * 
                     */
                    bool CalendarIdHasBeenSet() const;

                private:

                    /**
                     * Specifies the time zone.
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                    /**
                     * Period type. Supported types:

ONEOFF_CYCLE: specifies a one-time cycle.
YEAR_CYCLE: specifies the year cycle.
MONTH_CYCLE: specifies the monthly cycle.
WEEK_CYCLE: specifies the week cycle.
DAY_CYCLE: specifies the day cycle.
HOUR_CYCLE: specifies the hour cycle.
MINUTE_CYCLE: specifies the minute cycle.
CRONTAB_CYCLE: specifies the crontab expression type
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * Self-Dependent. Valid values: parallel, serial, orderly. Default value: serial. 
                     */
                    std::string m_selfDepend;
                    bool m_selfDependHasBeenSet;

                    /**
                     * Effective Start Time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Effective End Time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Cron expression
                     */
                    std::string m_crontabExpression;
                    bool m_crontabExpressionHasBeenSet;

                    /**
                     * Workflow dependency. Valid values: yes or no.
                     */
                    std::string m_dependencyWorkflow;
                    bool m_dependencyWorkflowHasBeenSet;

                    /**
                     * 0: Do not modify
1: Reset the task's upstream dependency configuration to the default value
                     */
                    std::string m_modifyCycleValue;
                    bool m_modifyCycleValueHasBeenSet;

                    /**
                     * The workflow contains cross-workflow dependencies and uses a cron expression for scheduling. If unified scheduling is saved, unsupported dependencies will be disconnected.
                     */
                    bool m_clearLink;
                    bool m_clearLinkHasBeenSet;

                    /**
                     * Takes effect when ModifyCycleValue = 1. Indicates the default modification of the upstream dependency time dimension. Valid values are:
* CRONTAB
* DAY
* HOUR
* LIST_DAY
* LIST_HOUR
* LIST_MINUTE
* MINUTE
* MONTH
* RANGE_DAY
* RANGE_HOUR
* RANGE_MINUTE
* WEEK
* YEAR

https://capi.woa.com/object/detail?product=wedata&env=api_dev&version=2025-08-06&name=WorkflowSchedulerConfigurationInfo
                     */
                    std::string m_mainCyclicConfig;
                    bool m_mainCyclicConfigHasBeenSet;

                    /**
                     * Takes effect when ModifyCycleValue = 1. Indicates the default modification of the upstream dependency - instance scope. Valid values are:
* ALL_DAY_OF_YEAR
* ALL_MONTH_OF_YEAR
* CURRENT
* CURRENT_DAY
* CURRENT_HOUR
* CURRENT_MINUTE
* CURRENT_MONTH
* CURRENT_WEEK
* CURRENT_YEAR
* PREVIOUS_BEGIN_OF_MONTH
* PREVIOUS_DAY
* PREVIOUS_DAY_LATER_OFFSET_HOUR
* PREVIOUS_DAY_LATER_OFFSET_MINUTE
* PREVIOUS_END_OF_MONTH
* PREVIOUS_FRIDAY
* PREVIOUS_HOUR
* PREVIOUS_HOUR_CYCLE
* PREVIOUS_HOUR_LATER_OFFSET_MINUTE
* PREVIOUS_MINUTE_CYCLE
* PREVIOUS_MONTH
* PREVIOUS_WEEK
* PREVIOUS_WEEKEND
* RECENT_DATE

https://capi.woa.com/object/detail?product=wedata&env=api_dev&version=2025-08-06&name=WorkflowSchedulerConfigurationInfo
                     */
                    std::string m_subordinateCyclicConfig;
                    bool m_subordinateCyclicConfigHasBeenSet;

                    /**
                     * Execution time left closed interval, for example: 00:00. only required when the CycleType is MINUTE_CYCLE.
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * Execution time right closed interval, for example: 23:59. only required when the CycleType is MINUTE_CYCLE.
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                    /**
                     * Whether calendar scheduling is enabled. Valid values: 1 (enabled), 0 (disabled).
                     */
                    std::string m_calendarOpen;
                    bool m_calendarOpenHasBeenSet;

                    /**
                     * Calendar id.
                     */
                    std::string m_calendarId;
                    bool m_calendarIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWSCHEDULERCONFIGURATIONINFO_H_
