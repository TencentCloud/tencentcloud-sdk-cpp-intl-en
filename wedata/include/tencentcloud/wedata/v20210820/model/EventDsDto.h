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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTDSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTDSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/EventListenerDTO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Event management - event entity.
                */
                class EventDsDto : public AbstractModel
                {
                public:
                    EventDsDto();
                    ~EventDsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Event name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Event name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Event name.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Event type GENERAL, TIME_SERIES.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EventType Event type GENERAL, TIME_SERIES.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置Event type GENERAL, TIME_SERIES.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eventType Event type GENERAL, TIME_SERIES.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Survival time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TimeToLive Survival time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTimeToLive() const;

                    /**
                     * 设置Survival time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _timeToLive Survival time

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Lifetime unit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TimeUnit Lifetime unit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Lifetime unit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _timeUnit Lifetime unit.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Event segmentation type: SECOND, MIN, HOUR, DAY.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EventSubType Event segmentation type: SECOND, MIN, HOUR, DAY.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEventSubType() const;

                    /**
                     * 设置Event segmentation type: SECOND, MIN, HOUR, DAY.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eventSubType Event segmentation type: SECOND, MIN, HOUR, DAY.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Event BROADCAST type: SINGLE, BROADCAST.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EventBroadcastType Event BROADCAST type: SINGLE, BROADCAST.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEventBroadcastType() const;

                    /**
                     * 设置Event BROADCAST type: SINGLE, BROADCAST.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eventBroadcastType Event BROADCAST type: SINGLE, BROADCAST.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Time format.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DimensionFormat Time format.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDimensionFormat() const;

                    /**
                     * 设置Time format.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dimensionFormat Time format.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreationTs Creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreationTs() const;

                    /**
                     * 设置Creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _creationTs Creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreationTs(const std::string& _creationTs);

                    /**
                     * 判断参数 CreationTs 是否已赋值
                     * @return CreationTs 是否已赋值
                     * 
                     */
                    bool CreationTsHasBeenSet() const;

                    /**
                     * 获取Event owner.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Owner Event owner.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置Event owner.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _owner Event owner.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Attribute.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Properties Attribute.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProperties() const;

                    /**
                     * 设置Attribute.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _properties Attribute.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Description information

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Description information

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description information

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Description information

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Event listener information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Listeners Event listener information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<EventListenerDTO> GetListeners() const;

                    /**
                     * 设置Event listener information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _listeners Event listener information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetListeners(const std::vector<EventListenerDTO>& _listeners);

                    /**
                     * 判断参数 Listeners 是否已赋值
                     * @return Listeners 是否已赋值
                     * 
                     */
                    bool ListenersHasBeenSet() const;

                    /**
                     * 获取Project ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectId Project ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectId Project ID

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Project name.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectName Project name.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project name.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectName Project name.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                private:

                    /**
                     * Event name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Event type GENERAL, TIME_SERIES.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * Survival time

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_timeToLive;
                    bool m_timeToLiveHasBeenSet;

                    /**
                     * Lifetime unit.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Event segmentation type: SECOND, MIN, HOUR, DAY.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_eventSubType;
                    bool m_eventSubTypeHasBeenSet;

                    /**
                     * Event BROADCAST type: SINGLE, BROADCAST.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_eventBroadcastType;
                    bool m_eventBroadcastTypeHasBeenSet;

                    /**
                     * Time format.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dimensionFormat;
                    bool m_dimensionFormatHasBeenSet;

                    /**
                     * Creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_creationTs;
                    bool m_creationTsHasBeenSet;

                    /**
                     * Event owner.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * Attribute.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * Description information

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Event listener information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<EventListenerDTO> m_listeners;
                    bool m_listenersHasBeenSet;

                    /**
                     * Project ID

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Project name.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTDSDTO_H_
