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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TIMEOUTSTRATEGYINFO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TIMEOUTSTRATEGYINFO_H_

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
                * Alarm timeout configuration rule information.
                */
                class TimeOutStrategyInfo : public AbstractModel
                {
                public:
                    TimeOutStrategyInfo();
                    ~TimeOutStrategyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Timeout Alarm Configuration

Expected Execution Duration Timeout - The actual runtime exceeds the estimated execution duration.

Expected Completion Time Timeout - The task has not completed by the estimated completion time.

Expected Scheduling Wait Timeout - The waiting time in the scheduling queue exceeds the estimated wait time.

Cycle-Incomplete Timeout - The task was expected to complete within its scheduled cycle but did not.
                     * @return RuleType Timeout Alarm Configuration

Expected Execution Duration Timeout - The actual runtime exceeds the estimated execution duration.

Expected Completion Time Timeout - The task has not completed by the estimated completion time.

Expected Scheduling Wait Timeout - The waiting time in the scheduling queue exceeds the estimated wait time.

Cycle-Incomplete Timeout - The task was expected to complete within its scheduled cycle but did not.
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置Timeout Alarm Configuration

Expected Execution Duration Timeout - The actual runtime exceeds the estimated execution duration.

Expected Completion Time Timeout - The task has not completed by the estimated completion time.

Expected Scheduling Wait Timeout - The waiting time in the scheduling queue exceeds the estimated wait time.

Cycle-Incomplete Timeout - The task was expected to complete within its scheduled cycle but did not.
                     * @param _ruleType Timeout Alarm Configuration

Expected Execution Duration Timeout - The actual runtime exceeds the estimated execution duration.

Expected Completion Time Timeout - The task has not completed by the estimated completion time.

Expected Scheduling Wait Timeout - The waiting time in the scheduling queue exceeds the estimated wait time.

Cycle-Incomplete Timeout - The task was expected to complete within its scheduled cycle but did not.
                     * 
                     */
                    void SetRuleType(const int64_t& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Timeout Value Configuration Type

1: Fixed value (specified manually)

2: Average value (calculated automatically)
                     * @return Type Timeout Value Configuration Type

1: Fixed value (specified manually)

2: Average value (calculated automatically)
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Timeout Value Configuration Type

1: Fixed value (specified manually)

2: Average value (calculated automatically)
                     * @param _type Timeout Value Configuration Type

1: Fixed value (specified manually)

2: Average value (calculated automatically)
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Timeout Specified Value (hours) - The timeout threshold in hours. Default is 1.
                     * @return Hour Timeout Specified Value (hours) - The timeout threshold in hours. Default is 1.
                     * 
                     */
                    uint64_t GetHour() const;

                    /**
                     * 设置Timeout Specified Value (hours) - The timeout threshold in hours. Default is 1.
                     * @param _hour Timeout Specified Value (hours) - The timeout threshold in hours. Default is 1.
                     * 
                     */
                    void SetHour(const uint64_t& _hour);

                    /**
                     * 判断参数 Hour 是否已赋值
                     * @return Hour 是否已赋值
                     * 
                     */
                    bool HourHasBeenSet() const;

                    /**
                     * 获取Timeout Specified Value (minutes) - The timeout threshold in minutes. Default is 1.
                     * @return Min Timeout Specified Value (minutes) - The timeout threshold in minutes. Default is 1.
                     * 
                     */
                    int64_t GetMin() const;

                    /**
                     * 设置Timeout Specified Value (minutes) - The timeout threshold in minutes. Default is 1.
                     * @param _min Timeout Specified Value (minutes) - The timeout threshold in minutes. Default is 1.
                     * 
                     */
                    void SetMin(const int64_t& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     * 
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取The time zone configuration corresponding to the timeout, such as UTC+7, defaults to UTC+8.

                     * @return ScheduleTimeZone The time zone configuration corresponding to the timeout, such as UTC+7, defaults to UTC+8.

                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置The time zone configuration corresponding to the timeout, such as UTC+7, defaults to UTC+8.

                     * @param _scheduleTimeZone The time zone configuration corresponding to the timeout, such as UTC+7, defaults to UTC+8.

                     * 
                     */
                    void SetScheduleTimeZone(const std::string& _scheduleTimeZone);

                    /**
                     * 判断参数 ScheduleTimeZone 是否已赋值
                     * @return ScheduleTimeZone 是否已赋值
                     * 
                     */
                    bool ScheduleTimeZoneHasBeenSet() const;

                private:

                    /**
                     * Timeout Alarm Configuration

Expected Execution Duration Timeout - The actual runtime exceeds the estimated execution duration.

Expected Completion Time Timeout - The task has not completed by the estimated completion time.

Expected Scheduling Wait Timeout - The waiting time in the scheduling queue exceeds the estimated wait time.

Cycle-Incomplete Timeout - The task was expected to complete within its scheduled cycle but did not.
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Timeout Value Configuration Type

1: Fixed value (specified manually)

2: Average value (calculated automatically)
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Timeout Specified Value (hours) - The timeout threshold in hours. Default is 1.
                     */
                    uint64_t m_hour;
                    bool m_hourHasBeenSet;

                    /**
                     * Timeout Specified Value (minutes) - The timeout threshold in minutes. Default is 1.
                     */
                    int64_t m_min;
                    bool m_minHasBeenSet;

                    /**
                     * The time zone configuration corresponding to the timeout, such as UTC+7, defaults to UTC+8.

                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TIMEOUTSTRATEGYINFO_H_
