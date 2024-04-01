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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_EVENTDATAINFO_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_EVENTDATAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * The information of a room event.
                */
                class EventDataInfo : public AbstractModel
                {
                public:
                    EventDataInfo();
                    ~EventDataInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The room ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RoomId The room ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置The room ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _roomId The room ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRoomId(const uint64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取The ID of the user to whom the event occurred.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserId The ID of the user to whom the event occurred.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置The ID of the user to whom the event occurred.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userId The ID of the user to whom the event occurred.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取User device type. 0: Unknown; 1: Windows; 2: macOS; 3: Android; 4: iOS; 5: Web; 6: Mobile webpage; 7: Wechat Mini Program.
                     * @return Device User device type. 0: Unknown; 1: Windows; 2: macOS; 3: Android; 4: iOS; 5: Web; 6: Mobile webpage; 7: Wechat Mini Program.
                     * 
                     */
                    uint64_t GetDevice() const;

                    /**
                     * 设置User device type. 0: Unknown; 1: Windows; 2: macOS; 3: Android; 4: iOS; 5: Web; 6: Mobile webpage; 7: Wechat Mini Program.
                     * @param _device User device type. 0: Unknown; 1: Windows; 2: macOS; 3: Android; 4: iOS; 5: Web; 6: Mobile webpage; 7: Wechat Mini Program.
                     * 
                     */
                    void SetDevice(const uint64_t& _device);

                    /**
                     * 判断参数 Device 是否已赋值
                     * @return Device 是否已赋值
                     * 
                     */
                    bool DeviceHasBeenSet() const;

                    /**
                     * 获取Recording time. Unit: seconds
                     * @return Duration Recording time. Unit: seconds
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置Recording time. Unit: seconds
                     * @param _duration Recording time. Unit: seconds
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Recorded file size
                     * @return RecordSize Recorded file size
                     * 
                     */
                    uint64_t GetRecordSize() const;

                    /**
                     * 设置Recorded file size
                     * @param _recordSize Recorded file size
                     * 
                     */
                    void SetRecordSize(const uint64_t& _recordSize);

                    /**
                     * 判断参数 RecordSize 是否已赋值
                     * @return RecordSize 是否已赋值
                     * 
                     */
                    bool RecordSizeHasBeenSet() const;

                    /**
                     * 获取Recording url
                     * @return RecordUrl Recording url
                     * 
                     */
                    std::string GetRecordUrl() const;

                    /**
                     * 设置Recording url
                     * @param _recordUrl Recording url
                     * 
                     */
                    void SetRecordUrl(const std::string& _recordUrl);

                    /**
                     * 判断参数 RecordUrl 是否已赋值
                     * @return RecordUrl 是否已赋值
                     * 
                     */
                    bool RecordUrlHasBeenSet() const;

                private:

                    /**
                     * The room ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * The ID of the user to whom the event occurred.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * User device type. 0: Unknown; 1: Windows; 2: macOS; 3: Android; 4: iOS; 5: Web; 6: Mobile webpage; 7: Wechat Mini Program.
                     */
                    uint64_t m_device;
                    bool m_deviceHasBeenSet;

                    /**
                     * Recording time. Unit: seconds
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Recorded file size
                     */
                    uint64_t m_recordSize;
                    bool m_recordSizeHasBeenSet;

                    /**
                     * Recording url
                     */
                    std::string m_recordUrl;
                    bool m_recordUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_EVENTDATAINFO_H_
