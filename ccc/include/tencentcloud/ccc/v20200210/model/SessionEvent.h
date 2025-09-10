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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_SESSIONEVENT_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_SESSIONEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/EventStaffDetail.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * Call event.
                */
                class SessionEvent : public AbstractModel
                {
                public:
                    SessionEvent();
                    ~SessionEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event timestamp. Unix second-level timestamp.
                     * @return Timestamp Event timestamp. Unix second-level timestamp.
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置Event timestamp. Unix second-level timestamp.
                     * @param _timestamp Event timestamp. Unix second-level timestamp.
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取Event type. currently supports StaffHold, StaffUnhold, StaffMute, StaffUnmute.
                     * @return EventType Event type. currently supports StaffHold, StaffUnhold, StaffMute, StaffUnmute.
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置Event type. currently supports StaffHold, StaffUnhold, StaffMute, StaffUnmute.
                     * @param _eventType Event type. currently supports StaffHold, StaffUnhold, StaffMute, StaffUnmute.
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
                     * 获取Describes event details related to the agent.
                     * @return StaffEventDetail Describes event details related to the agent.
                     * 
                     */
                    EventStaffDetail GetStaffEventDetail() const;

                    /**
                     * 设置Describes event details related to the agent.
                     * @param _staffEventDetail Describes event details related to the agent.
                     * 
                     */
                    void SetStaffEventDetail(const EventStaffDetail& _staffEventDetail);

                    /**
                     * 判断参数 StaffEventDetail 是否已赋值
                     * @return StaffEventDetail 是否已赋值
                     * 
                     */
                    bool StaffEventDetailHasBeenSet() const;

                private:

                    /**
                     * Event timestamp. Unix second-level timestamp.
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Event type. currently supports StaffHold, StaffUnhold, StaffMute, StaffUnmute.
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * Describes event details related to the agent.
                     */
                    EventStaffDetail m_staffEventDetail;
                    bool m_staffEventDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_SESSIONEVENT_H_
