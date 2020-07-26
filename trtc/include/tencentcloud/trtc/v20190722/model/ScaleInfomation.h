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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_SCALEINFOMATION_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_SCALEINFOMATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * Historical scale information
                */
                class ScaleInfomation : public AbstractModel
                {
                public:
                    ScaleInfomation();
                    ~ScaleInfomation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Start time for each day
                     * @return Time Start time for each day
                     */
                    uint64_t GetTime() const;

                    /**
                     * 设置Start time for each day
                     * @param Time Start time for each day
                     */
                    void SetTime(const uint64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Number of users in room
                     * @return UserNumber Number of users in room
                     */
                    uint64_t GetUserNumber() const;

                    /**
                     * 设置Number of users in room
                     * @param UserNumber Number of users in room
                     */
                    void SetUserNumber(const uint64_t& _userNumber);

                    /**
                     * 判断参数 UserNumber 是否已赋值
                     * @return UserNumber 是否已赋值
                     */
                    bool UserNumberHasBeenSet() const;

                    /**
                     * 获取Number of times a room has been entered
                     * @return UserCount Number of times a room has been entered
                     */
                    uint64_t GetUserCount() const;

                    /**
                     * 设置Number of times a room has been entered
                     * @param UserCount Number of times a room has been entered
                     */
                    void SetUserCount(const uint64_t& _userCount);

                    /**
                     * 判断参数 UserCount 是否已赋值
                     * @return UserCount 是否已赋值
                     */
                    bool UserCountHasBeenSet() const;

                    /**
                     * 获取Number of rooms.
                     * @return RoomNumbers Number of rooms.
                     */
                    uint64_t GetRoomNumbers() const;

                    /**
                     * 设置Number of rooms.
                     * @param RoomNumbers Number of rooms.
                     */
                    void SetRoomNumbers(const uint64_t& _roomNumbers);

                    /**
                     * 判断参数 RoomNumbers 是否已赋值
                     * @return RoomNumbers 是否已赋值
                     */
                    bool RoomNumbersHasBeenSet() const;

                private:

                    /**
                     * Start time for each day
                     */
                    uint64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Number of users in room
                     */
                    uint64_t m_userNumber;
                    bool m_userNumberHasBeenSet;

                    /**
                     * Number of times a room has been entered
                     */
                    uint64_t m_userCount;
                    bool m_userCountHasBeenSet;

                    /**
                     * Number of rooms.
                     */
                    uint64_t m_roomNumbers;
                    bool m_roomNumbersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_SCALEINFOMATION_H_
