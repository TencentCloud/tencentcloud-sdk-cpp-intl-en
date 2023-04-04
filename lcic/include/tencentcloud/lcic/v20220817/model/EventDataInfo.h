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
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置The room ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RoomId The room ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRoomId(const uint64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取The ID of the user to whom the event occurred.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserId The ID of the user to whom the event occurred.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置The ID of the user to whom the event occurred.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param UserId The ID of the user to whom the event occurred.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_EVENTDATAINFO_H_
