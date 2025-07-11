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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_REGISTERDSEVENTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_REGISTERDSEVENTREQUEST_H_

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
                * RegisterDsEvent request structure.
                */
                class RegisterDsEventRequest : public AbstractModel
                {
                public:
                    RegisterDsEventRequest();
                    ~RegisterDsEventRequest() = default;
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
                     * 获取Event Name
                     * @return Name Event Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Event Name
                     * @param _name Event Name
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
                     * 获取Event cycle type: 
1. minute: MIN
2. HOUR: HOUR 
3. DAY: DAY
                     * @return EventSubType Event cycle type: 
1. minute: MIN
2. HOUR: HOUR 
3. DAY: DAY
                     * 
                     */
                    std::string GetEventSubType() const;

                    /**
                     * 设置Event cycle type: 
1. minute: MIN
2. HOUR: HOUR 
3. DAY: DAY
                     * @param _eventSubType Event cycle type: 
1. minute: MIN
2. HOUR: HOUR 
3. DAY: DAY
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
                     * 获取Event ttl. specifies a value that is an integer above 0
                     * @return TimeToLive Event ttl. specifies a value that is an integer above 0
                     * 
                     */
                    std::string GetTimeToLive() const;

                    /**
                     * 设置Event ttl. specifies a value that is an integer above 0
                     * @param _timeToLive Event ttl. specifies a value that is an integer above 0
                     * 
                     */
                    void SetTimeToLive(const std::string& _timeToLive);

                    /**
                     * 判断参数 TimeToLive 是否已赋值
                     * @return TimeToLive 是否已赋值
                     * 
                     */
                    bool TimeToLiveHasBeenSet() const;

                    /**
                     * 获取Lifetime unit of the event: 1. day: DAYS 2. minute: MINUTES
                     * @return TimeUnit Lifetime unit of the event: 1. day: DAYS 2. minute: MINUTES
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Lifetime unit of the event: 1. day: DAYS 2. minute: MINUTES
                     * @param _timeUnit Lifetime unit of the event: 1. day: DAYS 2. minute: MINUTES
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
                     * 获取Event Owner Account Nickname
                     * @return Owner Event Owner Account Nickname
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置Event Owner Account Nickname
                     * @param _owner Event Owner Account Nickname
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

                    /**
                     * 获取Event type GENERAL, TIME_SERIES
                     * @return EventType Event type GENERAL, TIME_SERIES
                     * @deprecated
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置Event type GENERAL, TIME_SERIES
                     * @param _eventType Event type GENERAL, TIME_SERIES
                     * @deprecated
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * @deprecated
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取Event BROADCAST type: SINGLE, BROADCAST
                     * @return EventBroadcastType Event BROADCAST type: SINGLE, BROADCAST
                     * @deprecated
                     */
                    std::string GetEventBroadcastType() const;

                    /**
                     * 设置Event BROADCAST type: SINGLE, BROADCAST
                     * @param _eventBroadcastType Event BROADCAST type: SINGLE, BROADCAST
                     * @deprecated
                     */
                    void SetEventBroadcastType(const std::string& _eventBroadcastType);

                    /**
                     * 判断参数 EventBroadcastType 是否已赋值
                     * @return EventBroadcastType 是否已赋值
                     * @deprecated
                     */
                    bool EventBroadcastTypeHasBeenSet() const;

                    /**
                     * 获取Time Format
                     * @return DimensionFormat Time Format
                     * @deprecated
                     */
                    std::string GetDimensionFormat() const;

                    /**
                     * 设置Time Format
                     * @param _dimensionFormat Time Format
                     * @deprecated
                     */
                    void SetDimensionFormat(const std::string& _dimensionFormat);

                    /**
                     * 判断参数 DimensionFormat 是否已赋值
                     * @return DimensionFormat 是否已赋值
                     * @deprecated
                     */
                    bool DimensionFormatHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Event Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Event cycle type: 
1. minute: MIN
2. HOUR: HOUR 
3. DAY: DAY
                     */
                    std::string m_eventSubType;
                    bool m_eventSubTypeHasBeenSet;

                    /**
                     * Event ttl. specifies a value that is an integer above 0
                     */
                    std::string m_timeToLive;
                    bool m_timeToLiveHasBeenSet;

                    /**
                     * Lifetime unit of the event: 1. day: DAYS 2. minute: MINUTES
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Event Owner Account Nickname
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * Event Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Event type GENERAL, TIME_SERIES
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * Event BROADCAST type: SINGLE, BROADCAST
                     */
                    std::string m_eventBroadcastType;
                    bool m_eventBroadcastTypeHasBeenSet;

                    /**
                     * Time Format
                     */
                    std::string m_dimensionFormat;
                    bool m_dimensionFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_REGISTERDSEVENTREQUEST_H_
