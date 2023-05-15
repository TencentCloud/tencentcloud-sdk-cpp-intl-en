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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_ABNORMALEXPERIENCE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_ABNORMALEXPERIENCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/AbnormalEvent.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * The information of an abnormal user experience and the possible causes.
                */
                class AbnormalExperience : public AbstractModel
                {
                public:
                    AbnormalExperience();
                    ~AbnormalExperience() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The user ID.
                     * @return UserId The user ID.
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置The user ID.
                     * @param UserId The user ID.
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取The abnormal experience ID.
                     * @return ExperienceId The abnormal experience ID.
                     */
                    uint64_t GetExperienceId() const;

                    /**
                     * 设置The abnormal experience ID.
                     * @param ExperienceId The abnormal experience ID.
                     */
                    void SetExperienceId(const uint64_t& _experienceId);

                    /**
                     * 判断参数 ExperienceId 是否已赋值
                     * @return ExperienceId 是否已赋值
                     */
                    bool ExperienceIdHasBeenSet() const;

                    /**
                     * 获取The room ID (string).
                     * @return RoomId The room ID (string).
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置The room ID (string).
                     * @param RoomId The room ID (string).
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取The possible error events.
                     * @return AbnormalEventList The possible error events.
                     */
                    std::vector<AbnormalEvent> GetAbnormalEventList() const;

                    /**
                     * 设置The possible error events.
                     * @param AbnormalEventList The possible error events.
                     */
                    void SetAbnormalEventList(const std::vector<AbnormalEvent>& _abnormalEventList);

                    /**
                     * 判断参数 AbnormalEventList 是否已赋值
                     * @return AbnormalEventList 是否已赋值
                     */
                    bool AbnormalEventListHasBeenSet() const;

                    /**
                     * 获取The report time.
                     * @return EventTime The report time.
                     */
                    uint64_t GetEventTime() const;

                    /**
                     * 设置The report time.
                     * @param EventTime The report time.
                     */
                    void SetEventTime(const uint64_t& _eventTime);

                    /**
                     * 判断参数 EventTime 是否已赋值
                     * @return EventTime 是否已赋值
                     */
                    bool EventTimeHasBeenSet() const;

                private:

                    /**
                     * The user ID.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * The abnormal experience ID.
                     */
                    uint64_t m_experienceId;
                    bool m_experienceIdHasBeenSet;

                    /**
                     * The room ID (string).
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * The possible error events.
                     */
                    std::vector<AbnormalEvent> m_abnormalEventList;
                    bool m_abnormalEventListHasBeenSet;

                    /**
                     * The report time.
                     */
                    uint64_t m_eventTime;
                    bool m_eventTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_ABNORMALEXPERIENCE_H_
