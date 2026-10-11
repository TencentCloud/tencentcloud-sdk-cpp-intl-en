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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_SCHEDULEDTIMECONFIG_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_SCHEDULEDTIMECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Scheduling time configuration
                */
                class ScheduledTimeConfig : public AbstractModel
                {
                public:
                    ScheduledTimeConfig();
                    ~ScheduledTimeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Scheduling time zone, IANA time zone ID</p>
                     * @return ScheduledTimeZone <p>Scheduling time zone, IANA time zone ID</p>
                     * 
                     */
                    std::string GetScheduledTimeZone() const;

                    /**
                     * 设置<p>Scheduling time zone, IANA time zone ID</p>
                     * @param _scheduledTimeZone <p>Scheduling time zone, IANA time zone ID</p>
                     * 
                     */
                    void SetScheduledTimeZone(const std::string& _scheduledTimeZone);

                    /**
                     * 判断参数 ScheduledTimeZone 是否已赋值
                     * @return ScheduledTimeZone 是否已赋值
                     * 
                     */
                    bool ScheduledTimeZoneHasBeenSet() const;

                    /**
                     * 获取<p>Start of effective scheduling time</p><p>Parameter format: timestamp in milliseconds (UTC)</p>
                     * @return StartTime <p>Start of effective scheduling time</p><p>Parameter format: timestamp in milliseconds (UTC)</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Start of effective scheduling time</p><p>Parameter format: timestamp in milliseconds (UTC)</p>
                     * @param _startTime <p>Start of effective scheduling time</p><p>Parameter format: timestamp in milliseconds (UTC)</p>
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
                     * 获取<p>Scheduling expiration time</p><p>Parameter format: millisecond timestamp (UTC)</p>
                     * @return EndTime <p>Scheduling expiration time</p><p>Parameter format: millisecond timestamp (UTC)</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>Scheduling expiration time</p><p>Parameter format: millisecond timestamp (UTC)</p>
                     * @param _endTime <p>Scheduling expiration time</p><p>Parameter format: millisecond timestamp (UTC)</p>
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
                     * 获取<p>Cycle type</p><p>Enumeration values:</p><ul><li>DAY_CYCLE: Day</li><li>HOUR_CYCLE: Hour</li><li>MINUTE_CYCLE: Minute</li><li>WEEK_CYCLE: Week</li></ul>
                     * @return CycleType <p>Cycle type</p><p>Enumeration values:</p><ul><li>DAY_CYCLE: Day</li><li>HOUR_CYCLE: Hour</li><li>MINUTE_CYCLE: Minute</li><li>WEEK_CYCLE: Week</li></ul>
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置<p>Cycle type</p><p>Enumeration values:</p><ul><li>DAY_CYCLE: Day</li><li>HOUR_CYCLE: Hour</li><li>MINUTE_CYCLE: Minute</li><li>WEEK_CYCLE: Week</li></ul>
                     * @param _cycleType <p>Cycle type</p><p>Enumeration values:</p><ul><li>DAY_CYCLE: Day</li><li>HOUR_CYCLE: Hour</li><li>MINUTE_CYCLE: Minute</li><li>WEEK_CYCLE: Week</li></ul>
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
                     * 获取<p>Period step</p>
                     * @return CycleNum <p>Period step</p>
                     * 
                     */
                    int64_t GetCycleNum() const;

                    /**
                     * 设置<p>Period step</p>
                     * @param _cycleNum <p>Period step</p>
                     * 
                     */
                    void SetCycleNum(const int64_t& _cycleNum);

                    /**
                     * 判断参数 CycleNum 是否已赋值
                     * @return CycleNum 是否已赋值
                     * 
                     */
                    bool CycleNumHasBeenSet() const;

                private:

                    /**
                     * <p>Scheduling time zone, IANA time zone ID</p>
                     */
                    std::string m_scheduledTimeZone;
                    bool m_scheduledTimeZoneHasBeenSet;

                    /**
                     * <p>Start of effective scheduling time</p><p>Parameter format: timestamp in milliseconds (UTC)</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>Scheduling expiration time</p><p>Parameter format: millisecond timestamp (UTC)</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Cycle type</p><p>Enumeration values:</p><ul><li>DAY_CYCLE: Day</li><li>HOUR_CYCLE: Hour</li><li>MINUTE_CYCLE: Minute</li><li>WEEK_CYCLE: Week</li></ul>
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * <p>Period step</p>
                     */
                    int64_t m_cycleNum;
                    bool m_cycleNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_SCHEDULEDTIMECONFIG_H_
