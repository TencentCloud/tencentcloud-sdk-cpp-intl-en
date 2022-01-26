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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_CREATETROUBLEINFOREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_CREATETROUBLEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateTroubleInfo request structure.
                */
                class CreateTroubleInfoRequest : public AbstractModel
                {
                public:
                    CreateTroubleInfoRequest();
                    ~CreateTroubleInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID
                     * @return SdkAppId Application ID
                     */
                    std::string GetSdkAppId() const;

                    /**
                     * 设置Application ID
                     * @param SdkAppId Application ID
                     */
                    void SetSdkAppId(const std::string& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Room ID
                     * @return RoomId Room ID
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置Room ID
                     * @param RoomId Room ID
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取Teacher user ID
                     * @return TeacherUserId Teacher user ID
                     */
                    std::string GetTeacherUserId() const;

                    /**
                     * 设置Teacher user ID
                     * @param TeacherUserId Teacher user ID
                     */
                    void SetTeacherUserId(const std::string& _teacherUserId);

                    /**
                     * 判断参数 TeacherUserId 是否已赋值
                     * @return TeacherUserId 是否已赋值
                     */
                    bool TeacherUserIdHasBeenSet() const;

                    /**
                     * 获取Student user ID
                     * @return StudentUserId Student user ID
                     */
                    std::string GetStudentUserId() const;

                    /**
                     * 设置Student user ID
                     * @param StudentUserId Student user ID
                     */
                    void SetStudentUserId(const std::string& _studentUserId);

                    /**
                     * 判断参数 StudentUserId 是否已赋值
                     * @return StudentUserId 是否已赋值
                     */
                    bool StudentUserIdHasBeenSet() const;

                    /**
                     * 获取ID of the user (teacher or student) with exception.
                     * @return TroubleUserId ID of the user (teacher or student) with exception.
                     */
                    std::string GetTroubleUserId() const;

                    /**
                     * 设置ID of the user (teacher or student) with exception.
                     * @param TroubleUserId ID of the user (teacher or student) with exception.
                     */
                    void SetTroubleUserId(const std::string& _troubleUserId);

                    /**
                     * 判断参数 TroubleUserId 是否已赋值
                     * @return TroubleUserId 是否已赋值
                     */
                    bool TroubleUserIdHasBeenSet() const;

                    /**
                     * 获取Exception type.
1: exceptional video
2: exceptional audio
3: exceptional video and audio
5: exceptional room entry
4: course switch
6: help seeking
7: problem feedback
8: complaint
                     * @return TroubleType Exception type.
1: exceptional video
2: exceptional audio
3: exceptional video and audio
5: exceptional room entry
4: course switch
6: help seeking
7: problem feedback
8: complaint
                     */
                    uint64_t GetTroubleType() const;

                    /**
                     * 设置Exception type.
1: exceptional video
2: exceptional audio
3: exceptional video and audio
5: exceptional room entry
4: course switch
6: help seeking
7: problem feedback
8: complaint
                     * @param TroubleType Exception type.
1: exceptional video
2: exceptional audio
3: exceptional video and audio
5: exceptional room entry
4: course switch
6: help seeking
7: problem feedback
8: complaint
                     */
                    void SetTroubleType(const uint64_t& _troubleType);

                    /**
                     * 判断参数 TroubleType 是否已赋值
                     * @return TroubleType 是否已赋值
                     */
                    bool TroubleTypeHasBeenSet() const;

                    /**
                     * 获取UNIX timestamp when the exception occurred in seconds.
                     * @return TroubleTime UNIX timestamp when the exception occurred in seconds.
                     */
                    uint64_t GetTroubleTime() const;

                    /**
                     * 设置UNIX timestamp when the exception occurred in seconds.
                     * @param TroubleTime UNIX timestamp when the exception occurred in seconds.
                     */
                    void SetTroubleTime(const uint64_t& _troubleTime);

                    /**
                     * 判断参数 TroubleTime 是否已赋值
                     * @return TroubleTime 是否已赋值
                     */
                    bool TroubleTimeHasBeenSet() const;

                    /**
                     * 获取Exception details
                     * @return TroubleMsg Exception details
                     */
                    std::string GetTroubleMsg() const;

                    /**
                     * 设置Exception details
                     * @param TroubleMsg Exception details
                     */
                    void SetTroubleMsg(const std::string& _troubleMsg);

                    /**
                     * 判断参数 TroubleMsg 是否已赋值
                     * @return TroubleMsg 是否已赋值
                     */
                    bool TroubleMsgHasBeenSet() const;

                private:

                    /**
                     * Application ID
                     */
                    std::string m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Room ID
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * Teacher user ID
                     */
                    std::string m_teacherUserId;
                    bool m_teacherUserIdHasBeenSet;

                    /**
                     * Student user ID
                     */
                    std::string m_studentUserId;
                    bool m_studentUserIdHasBeenSet;

                    /**
                     * ID of the user (teacher or student) with exception.
                     */
                    std::string m_troubleUserId;
                    bool m_troubleUserIdHasBeenSet;

                    /**
                     * Exception type.
1: exceptional video
2: exceptional audio
3: exceptional video and audio
5: exceptional room entry
4: course switch
6: help seeking
7: problem feedback
8: complaint
                     */
                    uint64_t m_troubleType;
                    bool m_troubleTypeHasBeenSet;

                    /**
                     * UNIX timestamp when the exception occurred in seconds.
                     */
                    uint64_t m_troubleTime;
                    bool m_troubleTimeHasBeenSet;

                    /**
                     * Exception details
                     */
                    std::string m_troubleMsg;
                    bool m_troubleMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_CREATETROUBLEINFOREQUEST_H_
