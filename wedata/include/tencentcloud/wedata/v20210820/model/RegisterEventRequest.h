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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_REGISTEREVENTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_REGISTEREVENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * RegisterEvent request structure.
                */
                class RegisterEventRequest : public AbstractModel
                {
                public:
                    RegisterEventRequest();
                    ~RegisterEventRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Event Name, supports English, numbers, and underscores, up to 20 characters long, cannot start with a number or underscore.
                     * @return Name Event Name, supports English, numbers, and underscores, up to 20 characters long, cannot start with a number or underscore.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Event Name, supports English, numbers, and underscores, up to 20 characters long, cannot start with a number or underscore.
                     * @param _name Event Name, supports English, numbers, and underscores, up to 20 characters long, cannot start with a number or underscore.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Event Segmentation Type, cycle types: DAY, HOUR, MIN, SECOND
                     * @return EventSubType Event Segmentation Type, cycle types: DAY, HOUR, MIN, SECOND
                     * 
                     */
                    std::string GetEventSubType() const;

                    /**
                     * 设置Event Segmentation Type, cycle types: DAY, HOUR, MIN, SECOND
                     * @param _eventSubType Event Segmentation Type, cycle types: DAY, HOUR, MIN, SECOND
                     * 
                     */
                    void SetEventSubType(const std::string& _eventSubType);

                    /**
                     * 判断参数 EventSubType 是否已赋值
                     * @return EventSubType 是否已赋值
                     * 
                     */
                    bool EventSubTypeHasBeenSet() const;

                    /**
                     * 获取Broadcast: BROADCAST, Unicast: SINGLE
                     * @return EventBroadcastType Broadcast: BROADCAST, Unicast: SINGLE
                     * 
                     */
                    std::string GetEventBroadcastType() const;

                    /**
                     * 设置Broadcast: BROADCAST, Unicast: SINGLE
                     * @param _eventBroadcastType Broadcast: BROADCAST, Unicast: SINGLE
                     * 
                     */
                    void SetEventBroadcastType(const std::string& _eventBroadcastType);

                    /**
                     * 判断参数 EventBroadcastType 是否已赋值
                     * @return EventBroadcastType 是否已赋值
                     * 
                     */
                    bool EventBroadcastTypeHasBeenSet() const;

                    /**
                     * 获取For cycle types of day and hour: HOURS, For minutes: MINUTES, For seconds: SECONDS
                     * @return TimeUnit For cycle types of day and hour: HOURS, For minutes: MINUTES, For seconds: SECONDS
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置For cycle types of day and hour: HOURS, For minutes: MINUTES, For seconds: SECONDS
                     * @param _timeUnit For cycle types of day and hour: HOURS, For minutes: MINUTES, For seconds: SECONDS
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取Event Owner
                     * @return Owner Event Owner
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置Event Owner
                     * @param _owner Event Owner
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取Required. event type. default value: TIME_SERIES.
                     * @return EventType Required. event type. default value: TIME_SERIES.
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置Required. event type. default value: TIME_SERIES.
                     * @param _eventType Required. event type. default value: TIME_SERIES.
                     * 
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取Required. corresponds to day: yyyyMMdd, corresponds to HOUR: yyyyMMddHH, corresponds to MIN: yyyyMMddHHmm, corresponds to SECOND: yyyyMMddHHmmss. default value: yyyyMMdd.
                     * @return DimensionFormat Required. corresponds to day: yyyyMMdd, corresponds to HOUR: yyyyMMddHH, corresponds to MIN: yyyyMMddHHmm, corresponds to SECOND: yyyyMMddHHmmss. default value: yyyyMMdd.
                     * 
                     */
                    std::string GetDimensionFormat() const;

                    /**
                     * 设置Required. corresponds to day: yyyyMMdd, corresponds to HOUR: yyyyMMddHH, corresponds to MIN: yyyyMMddHHmm, corresponds to SECOND: yyyyMMddHHmmss. default value: yyyyMMdd.
                     * @param _dimensionFormat Required. corresponds to day: yyyyMMdd, corresponds to HOUR: yyyyMMddHH, corresponds to MIN: yyyyMMddHHmm, corresponds to SECOND: yyyyMMddHHmmss. default value: yyyyMMdd.
                     * 
                     */
                    void SetDimensionFormat(const std::string& _dimensionFormat);

                    /**
                     * 判断参数 DimensionFormat 是否已赋值
                     * @return DimensionFormat 是否已赋值
                     * 
                     */
                    bool DimensionFormatHasBeenSet() const;

                    /**
                     * 获取Uptime
                     * @return TimeToLive Uptime
                     * 
                     */
                    int64_t GetTimeToLive() const;

                    /**
                     * 设置Uptime
                     * @param _timeToLive Uptime
                     * 
                     */
                    void SetTimeToLive(const int64_t& _timeToLive);

                    /**
                     * 判断参数 TimeToLive 是否已赋值
                     * @return TimeToLive 是否已赋值
                     * 
                     */
                    bool TimeToLiveHasBeenSet() const;

                    /**
                     * 获取Event Description
                     * @return Description Event Description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Event Description
                     * @param _description Event Description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Event Name, supports English, numbers, and underscores, up to 20 characters long, cannot start with a number or underscore.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Event Segmentation Type, cycle types: DAY, HOUR, MIN, SECOND
                     */
                    std::string m_eventSubType;
                    bool m_eventSubTypeHasBeenSet;

                    /**
                     * Broadcast: BROADCAST, Unicast: SINGLE
                     */
                    std::string m_eventBroadcastType;
                    bool m_eventBroadcastTypeHasBeenSet;

                    /**
                     * For cycle types of day and hour: HOURS, For minutes: MINUTES, For seconds: SECONDS
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Event Owner
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * Required. event type. default value: TIME_SERIES.
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * Required. corresponds to day: yyyyMMdd, corresponds to HOUR: yyyyMMddHH, corresponds to MIN: yyyyMMddHHmm, corresponds to SECOND: yyyyMMddHHmmss. default value: yyyyMMdd.
                     */
                    std::string m_dimensionFormat;
                    bool m_dimensionFormatHasBeenSet;

                    /**
                     * Uptime
                     */
                    int64_t m_timeToLive;
                    bool m_timeToLiveHasBeenSet;

                    /**
                     * Event Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_REGISTEREVENTREQUEST_H_
