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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_EVENTINFO_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_EVENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lcic/v20220817/model/EventDataInfo.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * The event information.
                */
                class EventInfo : public AbstractModel
                {
                public:
                    EventInfo();
                    ~EventInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The Unix timestamp (seconds) when the event occurred.
                     * @return Timestamp The Unix timestamp (seconds) when the event occurred.
                     * 
                     */
                    uint64_t GetTimestamp() const;

                    /**
                     * 设置The Unix timestamp (seconds) when the event occurred.
                     * @param _timestamp The Unix timestamp (seconds) when the event occurred.
                     * 
                     */
                    void SetTimestamp(const uint64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取The event type. Valid values: 
`RoomStart`: The class started. `RoomEnd`: The class ended. `MemberJoin`: A user joined. `MemberQuit`: A user left. `RecordFinish`: Recording is finished.
·Camera0n·: The camera is turned on.
`Camera0ff`: The camera is turned off.
`MicOn`: The mic is turned on.
`MicOff`: The mic is turned off.
`ScreenOn`: Screen sharing is enabled.
`ScreenOff`: Screen sharing is disabled.
`VisibleOn`: The page is visible.
`VisibleOff`: The page is invisible.
                     * @return EventType The event type. Valid values: 
`RoomStart`: The class started. `RoomEnd`: The class ended. `MemberJoin`: A user joined. `MemberQuit`: A user left. `RecordFinish`: Recording is finished.
·Camera0n·: The camera is turned on.
`Camera0ff`: The camera is turned off.
`MicOn`: The mic is turned on.
`MicOff`: The mic is turned off.
`ScreenOn`: Screen sharing is enabled.
`ScreenOff`: Screen sharing is disabled.
`VisibleOn`: The page is visible.
`VisibleOff`: The page is invisible.
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置The event type. Valid values: 
`RoomStart`: The class started. `RoomEnd`: The class ended. `MemberJoin`: A user joined. `MemberQuit`: A user left. `RecordFinish`: Recording is finished.
·Camera0n·: The camera is turned on.
`Camera0ff`: The camera is turned off.
`MicOn`: The mic is turned on.
`MicOff`: The mic is turned off.
`ScreenOn`: Screen sharing is enabled.
`ScreenOff`: Screen sharing is disabled.
`VisibleOn`: The page is visible.
`VisibleOff`: The page is invisible.
                     * @param _eventType The event type. Valid values: 
`RoomStart`: The class started. `RoomEnd`: The class ended. `MemberJoin`: A user joined. `MemberQuit`: A user left. `RecordFinish`: Recording is finished.
·Camera0n·: The camera is turned on.
`Camera0ff`: The camera is turned off.
`MicOn`: The mic is turned on.
`MicOff`: The mic is turned off.
`ScreenOn`: Screen sharing is enabled.
`ScreenOff`: Screen sharing is disabled.
`VisibleOn`: The page is visible.
`VisibleOff`: The page is invisible.
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
                     * 获取The details of the event, including the room ID and the user to whom the event occurred.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EventData The details of the event, including the room ID and the user to whom the event occurred.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    EventDataInfo GetEventData() const;

                    /**
                     * 设置The details of the event, including the room ID and the user to whom the event occurred.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eventData The details of the event, including the room ID and the user to whom the event occurred.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEventData(const EventDataInfo& _eventData);

                    /**
                     * 判断参数 EventData 是否已赋值
                     * @return EventData 是否已赋值
                     * 
                     */
                    bool EventDataHasBeenSet() const;

                private:

                    /**
                     * The Unix timestamp (seconds) when the event occurred.
                     */
                    uint64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * The event type. Valid values: 
`RoomStart`: The class started. `RoomEnd`: The class ended. `MemberJoin`: A user joined. `MemberQuit`: A user left. `RecordFinish`: Recording is finished.
·Camera0n·: The camera is turned on.
`Camera0ff`: The camera is turned off.
`MicOn`: The mic is turned on.
`MicOff`: The mic is turned off.
`ScreenOn`: Screen sharing is enabled.
`ScreenOff`: Screen sharing is disabled.
`VisibleOn`: The page is visible.
`VisibleOff`: The page is invisible.
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * The details of the event, including the room ID and the user to whom the event occurred.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    EventDataInfo m_eventData;
                    bool m_eventDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_EVENTINFO_H_
