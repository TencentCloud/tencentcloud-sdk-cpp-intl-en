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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_DEPENDENCYTASKBRIEF_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_DEPENDENCYTASKBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/DependencyStrategyTask.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Dependency Task Information - Value Reference Table:

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
                class DependencyTaskBrief : public AbstractModel
                {
                public:
                    DependencyTaskBrief();
                    ~DependencyTaskBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID

                     * @return TaskId Task ID

                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID

                     * @param _taskId Task ID

                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Main dependency configuration. Valid values:

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
                     * @return MainCyclicConfig Main dependency configuration. Valid values:

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
                     * 
                     */
                    std::string GetMainCyclicConfig() const;

                    /**
                     * 设置Main dependency configuration. Valid values:

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
                     * @param _mainCyclicConfig Main dependency configuration. Valid values:

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
                     * 获取Configures secondary dependencies.  Valid values:
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
                     * @return SubordinateCyclicConfig Configures secondary dependencies.  Valid values:
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
                     * 
                     */
                    std::string GetSubordinateCyclicConfig() const;

                    /**
                     * 设置Configures secondary dependencies.  Valid values:
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
                     * @param _subordinateCyclicConfig Configures secondary dependencies.  Valid values:
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
                     * 获取Offset in Range/List Mode
                     * @return Offset Offset in Range/List Mode
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置Offset in Range/List Mode
                     * @param _offset Offset in Range/List Mode
                     * 
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Dependency Execution Policy
                     * @return DependencyStrategy Dependency Execution Policy
                     * 
                     */
                    DependencyStrategyTask GetDependencyStrategy() const;

                    /**
                     * 设置Dependency Execution Policy
                     * @param _dependencyStrategy Dependency Execution Policy
                     * 
                     */
                    void SetDependencyStrategy(const DependencyStrategyTask& _dependencyStrategy);

                    /**
                     * 判断参数 DependencyStrategy 是否已赋值
                     * @return DependencyStrategy 是否已赋值
                     * 
                     */
                    bool DependencyStrategyHasBeenSet() const;

                private:

                    /**
                     * Task ID

                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Main dependency configuration. Valid values:

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
                     */
                    std::string m_mainCyclicConfig;
                    bool m_mainCyclicConfigHasBeenSet;

                    /**
                     * Configures secondary dependencies.  Valid values:
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
                     */
                    std::string m_subordinateCyclicConfig;
                    bool m_subordinateCyclicConfigHasBeenSet;

                    /**
                     * Offset in Range/List Mode
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Dependency Execution Policy
                     */
                    DependencyStrategyTask m_dependencyStrategy;
                    bool m_dependencyStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_DEPENDENCYTASKBRIEF_H_
