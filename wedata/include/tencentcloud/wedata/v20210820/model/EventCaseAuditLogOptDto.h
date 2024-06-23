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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTCASEAUDITLOGOPTDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTCASEAUDITLOGOPTDTO_H_

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
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Event Instance
                */
                class EventCaseAuditLogOptDto : public AbstractModel
                {
                public:
                    EventCaseAuditLogOptDto();
                    ~EventCaseAuditLogOptDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event Instance ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CaseId Event Instance ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCaseId() const;

                    /**
                     * 设置Event Instance ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _caseId Event Instance ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCaseId(const std::string& _caseId);

                    /**
                     * 判断参数 CaseId 是否已赋值
                     * @return CaseId 是否已赋值
                     * 
                     */
                    bool CaseIdHasBeenSet() const;

                    /**
                     * 获取Event nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return EventName Event nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置Event nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _eventName Event nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     * 
                     */
                    bool EventNameHasBeenSet() const;

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
                     * 获取Event Split Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EventSubType Event Split Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEventSubType() const;

                    /**
                     * 设置Event Split Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _eventSubType Event Split Type
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Event Broadcast Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EventBroadcastType Event Broadcast Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEventBroadcastType() const;

                    /**
                     * 设置Event Broadcast Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _eventBroadcastType Event Broadcast Type
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Event Instance TTL
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TTL Event Instance TTL
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTTL() const;

                    /**
                     * 设置Event Instance TTL
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tTL Event Instance TTL
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTTL(const uint64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     * 
                     */
                    bool TTLHasBeenSet() const;

                    /**
                     * 获取Event Instance TTL Unit
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TimeUnit Event Instance TTL Unit
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Event Instance TTL Unit
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _timeUnit Event Instance TTL Unit
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
                     * 获取Data Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Dimension Data Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDimension() const;

                    /**
                     * 设置Data Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _dimension Data Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDimension(const std::string& _dimension);

                    /**
                     * 判断参数 Dimension 是否已赋值
                     * @return Dimension 是否已赋值
                     * 
                     */
                    bool DimensionHasBeenSet() const;

                    /**
                     * 获取Event Instance Status
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Status Event Instance Status
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Event Instance Status
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _status Event Instance Status
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Event Instance Trigger Timestamp
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EventTriggerTimestamp Event Instance Trigger Timestamp
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEventTriggerTimestamp() const;

                    /**
                     * 设置Event Instance Trigger Timestamp
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _eventTriggerTimestamp Event Instance Trigger Timestamp
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEventTriggerTimestamp(const std::string& _eventTriggerTimestamp);

                    /**
                     * 判断参数 EventTriggerTimestamp 是否已赋值
                     * @return EventTriggerTimestamp 是否已赋值
                     * 
                     */
                    bool EventTriggerTimestampHasBeenSet() const;

                    /**
                     * 获取Event Instance Consumption Timestamp
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LogTimestamp Event Instance Consumption Timestamp
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLogTimestamp() const;

                    /**
                     * 设置Event Instance Consumption Timestamp
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _logTimestamp Event Instance Consumption Timestamp
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLogTimestamp(const std::string& _logTimestamp);

                    /**
                     * 判断参数 LogTimestamp 是否已赋值
                     * @return LogTimestamp 是否已赋值
                     * 
                     */
                    bool LogTimestampHasBeenSet() const;

                    /**
                     * 获取Event Instance Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Description Event Instance Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Event Instance Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _description Event Instance Description
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * Event Instance ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_caseId;
                    bool m_caseIdHasBeenSet;

                    /**
                     * Event nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * Event typeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * Event Split Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_eventSubType;
                    bool m_eventSubTypeHasBeenSet;

                    /**
                     * Event Broadcast Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_eventBroadcastType;
                    bool m_eventBroadcastTypeHasBeenSet;

                    /**
                     * Event Instance TTL
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * Event Instance TTL Unit
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Data Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_dimension;
                    bool m_dimensionHasBeenSet;

                    /**
                     * Event Instance Status
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Event Instance Trigger Timestamp
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_eventTriggerTimestamp;
                    bool m_eventTriggerTimestampHasBeenSet;

                    /**
                     * Event Instance Consumption Timestamp
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_logTimestamp;
                    bool m_logTimestampHasBeenSet;

                    /**
                     * Event Instance Description
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTCASEAUDITLOGOPTDTO_H_
