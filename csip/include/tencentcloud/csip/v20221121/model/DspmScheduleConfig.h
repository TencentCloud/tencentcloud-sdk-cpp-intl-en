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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMSCHEDULECONFIG_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMSCHEDULECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Schedule task execution configuration
                */
                class DspmScheduleConfig : public AbstractModel
                {
                public:
                    DspmScheduleConfig();
                    ~DspmScheduleConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Scheduling type: daily, weekly, monthly
                     * @return ScheduleType Scheduling type: daily, weekly, monthly
                     * 
                     */
                    std::string GetScheduleType() const;

                    /**
                     * 设置Scheduling type: daily, weekly, monthly
                     * @param _scheduleType Scheduling type: daily, weekly, monthly
                     * 
                     */
                    void SetScheduleType(const std::string& _scheduleType);

                    /**
                     * 判断参数 ScheduleType 是否已赋值
                     * @return ScheduleType 是否已赋值
                     * 
                     */
                    bool ScheduleTypeHasBeenSet() const;

                    /**
                     * 获取If not passed, the day is used for daily scheduling. For weekly scheduling configuration (day of the week (1=Monday, ..., 7=Sunday)), for monthly scheduling configuration (day of the month (1-31)).
                     * @return Day If not passed, the day is used for daily scheduling. For weekly scheduling configuration (day of the week (1=Monday, ..., 7=Sunday)), for monthly scheduling configuration (day of the month (1-31)).
                     * 
                     */
                    uint64_t GetDay() const;

                    /**
                     * 设置If not passed, the day is used for daily scheduling. For weekly scheduling configuration (day of the week (1=Monday, ..., 7=Sunday)), for monthly scheduling configuration (day of the month (1-31)).
                     * @param _day If not passed, the day is used for daily scheduling. For weekly scheduling configuration (day of the week (1=Monday, ..., 7=Sunday)), for monthly scheduling configuration (day of the month (1-31)).
                     * 
                     */
                    void SetDay(const uint64_t& _day);

                    /**
                     * 判断参数 Day 是否已赋值
                     * @return Day 是否已赋值
                     * 
                     */
                    bool DayHasBeenSet() const;

                    /**
                     * 获取Scheduling time configuration
                     * @return Time Scheduling time configuration
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Scheduling time configuration
                     * @param _time Scheduling time configuration
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
                     * 获取Time zone. Default: UTC+8 (Asia/Shanghai)
                     * @return TimeZone Time zone. Default: UTC+8 (Asia/Shanghai)
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置Time zone. Default: UTC+8 (Asia/Shanghai)
                     * @param _timeZone Time zone. Default: UTC+8 (Asia/Shanghai)
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                private:

                    /**
                     * Scheduling type: daily, weekly, monthly
                     */
                    std::string m_scheduleType;
                    bool m_scheduleTypeHasBeenSet;

                    /**
                     * If not passed, the day is used for daily scheduling. For weekly scheduling configuration (day of the week (1=Monday, ..., 7=Sunday)), for monthly scheduling configuration (day of the month (1-31)).
                     */
                    uint64_t m_day;
                    bool m_dayHasBeenSet;

                    /**
                     * Scheduling time configuration
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Time zone. Default: UTC+8 (Asia/Shanghai)
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMSCHEDULECONFIG_H_
