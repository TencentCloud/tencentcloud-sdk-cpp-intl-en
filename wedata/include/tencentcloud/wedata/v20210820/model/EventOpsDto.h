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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTOPSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/EventListenerOpsDto.h>
#include <tencentcloud/wedata/v20210820/model/EventCaseOpsDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Event details
                */
                class EventOpsDto : public AbstractModel
                {
                public:
                    EventOpsDto();
                    ~EventOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Name Event nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Event nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _name Event nameNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Event typeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return EventType Event typeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置Event typeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _eventType Event typeNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Event Segmentation TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return EventSubType Event Segmentation TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEventSubType() const;

                    /**
                     * 设置Event Segmentation TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _eventSubType Event Segmentation TypeNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Event Broadcast TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return EventBroadcastType Event Broadcast TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEventBroadcastType() const;

                    /**
                     * 设置Event Broadcast TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _eventBroadcastType Event Broadcast TypeNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Data Time Format
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DimensionFormat Data Time Format
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDimensionFormat() const;

                    /**
                     * 设置Data Time Format
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _dimensionFormat Data Time Format
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取UptimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TimeToLive UptimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTimeToLive() const;

                    /**
                     * 设置UptimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _timeToLive UptimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTimeToLive(const uint64_t& _timeToLive);

                    /**
                     * 判断参数 TimeToLive 是否已赋值
                     * @return TimeToLive 是否已赋值
                     * 
                     */
                    bool TimeToLiveHasBeenSet() const;

                    /**
                     * 获取Lifetime Unit
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TimeUnit Lifetime Unit
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Lifetime Unit
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _timeUnit Lifetime Unit
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Creation Timestamp
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CreationTimestamp Creation Timestamp
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreationTimestamp() const;

                    /**
                     * 设置Creation Timestamp
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _creationTimestamp Creation Timestamp
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCreationTimestamp(const std::string& _creationTimestamp);

                    /**
                     * 判断参数 CreationTimestamp 是否已赋值
                     * @return CreationTimestamp 是否已赋值
                     * 
                     */
                    bool CreationTimestampHasBeenSet() const;

                    /**
                     * 获取Owner
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Owner Owner
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置Owner
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _owner Owner
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取AttributeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Properties AttributeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProperties() const;

                    /**
                     * 设置AttributeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _properties AttributeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetProperties(const std::string& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Description DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _description DescriptionNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Listener
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Listeners Listener
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<EventListenerOpsDto> GetListeners() const;

                    /**
                     * 设置Listener
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _listeners Listener
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetListeners(const std::vector<EventListenerOpsDto>& _listeners);

                    /**
                     * 判断参数 Listeners 是否已赋值
                     * @return Listeners 是否已赋值
                     * 
                     */
                    bool ListenersHasBeenSet() const;

                    /**
                     * 获取Incident Case
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EventCases Incident Case
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<EventCaseOpsDto> GetEventCases() const;

                    /**
                     * 设置Incident Case
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _eventCases Incident Case
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEventCases(const std::vector<EventCaseOpsDto>& _eventCases);

                    /**
                     * 判断参数 EventCases 是否已赋值
                     * @return EventCases 是否已赋值
                     * 
                     */
                    bool EventCasesHasBeenSet() const;

                private:

                    /**
                     * Event nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Event typeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * Event Segmentation TypeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_eventSubType;
                    bool m_eventSubTypeHasBeenSet;

                    /**
                     * Event Broadcast TypeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_eventBroadcastType;
                    bool m_eventBroadcastTypeHasBeenSet;

                    /**
                     * Data Time Format
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_dimensionFormat;
                    bool m_dimensionFormatHasBeenSet;

                    /**
                     * UptimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_timeToLive;
                    bool m_timeToLiveHasBeenSet;

                    /**
                     * Lifetime Unit
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Creation Timestamp
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_creationTimestamp;
                    bool m_creationTimestampHasBeenSet;

                    /**
                     * Owner
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * AttributeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Listener
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<EventListenerOpsDto> m_listeners;
                    bool m_listenersHasBeenSet;

                    /**
                     * Incident Case
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<EventCaseOpsDto> m_eventCases;
                    bool m_eventCasesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTOPSDTO_H_
