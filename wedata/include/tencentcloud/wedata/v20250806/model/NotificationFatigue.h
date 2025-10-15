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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_NOTIFICATIONFATIGUE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_NOTIFICATIONFATIGUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/AlarmQuietInterval.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Alarm fatigue Alarm configuration.
                */
                class NotificationFatigue : public AbstractModel
                {
                public:
                    NotificationFatigue();
                    ~NotificationFatigue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of alarms.
                     * @return NotifyCount Number of alarms.
                     * 
                     */
                    uint64_t GetNotifyCount() const;

                    /**
                     * 设置Number of alarms.
                     * @param _notifyCount Number of alarms.
                     * 
                     */
                    void SetNotifyCount(const uint64_t& _notifyCount);

                    /**
                     * 判断参数 NotifyCount 是否已赋值
                     * @return NotifyCount 是否已赋值
                     * 
                     */
                    bool NotifyCountHasBeenSet() const;

                    /**
                     * 获取Alarm interval, in minutes.
                     * @return NotifyInterval Alarm interval, in minutes.
                     * 
                     */
                    uint64_t GetNotifyInterval() const;

                    /**
                     * 设置Alarm interval, in minutes.
                     * @param _notifyInterval Alarm interval, in minutes.
                     * 
                     */
                    void SetNotifyInterval(const uint64_t& _notifyInterval);

                    /**
                     * 判断参数 NotifyInterval 是否已赋值
                     * @return NotifyInterval 是否已赋值
                     * 
                     */
                    bool NotifyIntervalHasBeenSet() const;

                    /**
                     * 获取Do not disturb period, such as example value.
[{DaysOfWeek: [1, 2], StartTime: "00:00:00", EndTime: "09:00:00"}]	
Specifies notification muting from 00:00 to 09:00 every monday and tuesday.
                     * @return QuietIntervals Do not disturb period, such as example value.
[{DaysOfWeek: [1, 2], StartTime: "00:00:00", EndTime: "09:00:00"}]	
Specifies notification muting from 00:00 to 09:00 every monday and tuesday.
                     * 
                     */
                    std::vector<AlarmQuietInterval> GetQuietIntervals() const;

                    /**
                     * 设置Do not disturb period, such as example value.
[{DaysOfWeek: [1, 2], StartTime: "00:00:00", EndTime: "09:00:00"}]	
Specifies notification muting from 00:00 to 09:00 every monday and tuesday.
                     * @param _quietIntervals Do not disturb period, such as example value.
[{DaysOfWeek: [1, 2], StartTime: "00:00:00", EndTime: "09:00:00"}]	
Specifies notification muting from 00:00 to 09:00 every monday and tuesday.
                     * 
                     */
                    void SetQuietIntervals(const std::vector<AlarmQuietInterval>& _quietIntervals);

                    /**
                     * 判断参数 QuietIntervals 是否已赋值
                     * @return QuietIntervals 是否已赋值
                     * 
                     */
                    bool QuietIntervalsHasBeenSet() const;

                private:

                    /**
                     * Number of alarms.
                     */
                    uint64_t m_notifyCount;
                    bool m_notifyCountHasBeenSet;

                    /**
                     * Alarm interval, in minutes.
                     */
                    uint64_t m_notifyInterval;
                    bool m_notifyIntervalHasBeenSet;

                    /**
                     * Do not disturb period, such as example value.
[{DaysOfWeek: [1, 2], StartTime: "00:00:00", EndTime: "09:00:00"}]	
Specifies notification muting from 00:00 to 09:00 every monday and tuesday.
                     */
                    std::vector<AlarmQuietInterval> m_quietIntervals;
                    bool m_quietIntervalsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_NOTIFICATIONFATIGUE_H_
