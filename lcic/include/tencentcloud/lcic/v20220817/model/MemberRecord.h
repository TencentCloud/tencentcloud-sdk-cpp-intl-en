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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_MEMBERRECORD_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_MEMBERRECORD_H_

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
                * Member record information
                */
                class MemberRecord : public AbstractModel
                {
                public:
                    MemberRecord();
                    ~MemberRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User ID
                     * @return UserId User ID
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User ID
                     * @param UserId User ID
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Username
                     * @return UserName Username
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username
                     * @param UserName Username
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Online duration, in seconds
                     * @return PresentTime Online duration, in seconds
                     */
                    uint64_t GetPresentTime() const;

                    /**
                     * 设置Online duration, in seconds
                     * @param PresentTime Online duration, in seconds
                     */
                    void SetPresentTime(const uint64_t& _presentTime);

                    /**
                     * 判断参数 PresentTime 是否已赋值
                     * @return PresentTime 是否已赋值
                     */
                    bool PresentTimeHasBeenSet() const;

                    /**
                     * 获取Whether the camera is enabled
                     * @return Camera Whether the camera is enabled
                     */
                    uint64_t GetCamera() const;

                    /**
                     * 设置Whether the camera is enabled
                     * @param Camera Whether the camera is enabled
                     */
                    void SetCamera(const uint64_t& _camera);

                    /**
                     * 判断参数 Camera 是否已赋值
                     * @return Camera 是否已赋值
                     */
                    bool CameraHasBeenSet() const;

                    /**
                     * 获取Whether the mic is enabled
                     * @return Mic Whether the mic is enabled
                     */
                    uint64_t GetMic() const;

                    /**
                     * 设置Whether the mic is enabled
                     * @param Mic Whether the mic is enabled
                     */
                    void SetMic(const uint64_t& _mic);

                    /**
                     * 判断参数 Mic 是否已赋值
                     * @return Mic 是否已赋值
                     */
                    bool MicHasBeenSet() const;

                    /**
                     * 获取Whether the user is muted
                     * @return Silence Whether the user is muted
                     */
                    uint64_t GetSilence() const;

                    /**
                     * 设置Whether the user is muted
                     * @param Silence Whether the user is muted
                     */
                    void SetSilence(const uint64_t& _silence);

                    /**
                     * 判断参数 Silence 是否已赋值
                     * @return Silence 是否已赋值
                     */
                    bool SilenceHasBeenSet() const;

                    /**
                     * 获取Number of questions answered by the user
                     * @return AnswerQuestions Number of questions answered by the user
                     */
                    uint64_t GetAnswerQuestions() const;

                    /**
                     * 设置Number of questions answered by the user
                     * @param AnswerQuestions Number of questions answered by the user
                     */
                    void SetAnswerQuestions(const uint64_t& _answerQuestions);

                    /**
                     * 判断参数 AnswerQuestions 是否已赋值
                     * @return AnswerQuestions 是否已赋值
                     */
                    bool AnswerQuestionsHasBeenSet() const;

                    /**
                     * 获取Number of hand raising times
                     * @return HandUps Number of hand raising times
                     */
                    uint64_t GetHandUps() const;

                    /**
                     * 设置Number of hand raising times
                     * @param HandUps Number of hand raising times
                     */
                    void SetHandUps(const uint64_t& _handUps);

                    /**
                     * 判断参数 HandUps 是否已赋值
                     * @return HandUps 是否已赋值
                     */
                    bool HandUpsHasBeenSet() const;

                    /**
                     * 获取First time that the user entered the room, in UNIX timestamp format
                     * @return FirstJoinTimestamp First time that the user entered the room, in UNIX timestamp format
                     */
                    uint64_t GetFirstJoinTimestamp() const;

                    /**
                     * 设置First time that the user entered the room, in UNIX timestamp format
                     * @param FirstJoinTimestamp First time that the user entered the room, in UNIX timestamp format
                     */
                    void SetFirstJoinTimestamp(const uint64_t& _firstJoinTimestamp);

                    /**
                     * 判断参数 FirstJoinTimestamp 是否已赋值
                     * @return FirstJoinTimestamp 是否已赋值
                     */
                    bool FirstJoinTimestampHasBeenSet() const;

                    /**
                     * 获取Last time that the user left the room, in UNIX timestamp format
                     * @return LastQuitTimestamp Last time that the user left the room, in UNIX timestamp format
                     */
                    uint64_t GetLastQuitTimestamp() const;

                    /**
                     * 设置Last time that the user left the room, in UNIX timestamp format
                     * @param LastQuitTimestamp Last time that the user left the room, in UNIX timestamp format
                     */
                    void SetLastQuitTimestamp(const uint64_t& _lastQuitTimestamp);

                    /**
                     * 判断参数 LastQuitTimestamp 是否已赋值
                     * @return LastQuitTimestamp 是否已赋值
                     */
                    bool LastQuitTimestampHasBeenSet() const;

                    /**
                     * 获取Number of rewards received
                     * @return Rewords Number of rewards received
                     */
                    uint64_t GetRewords() const;

                    /**
                     * 设置Number of rewards received
                     * @param Rewords Number of rewards received
                     */
                    void SetRewords(const uint64_t& _rewords);

                    /**
                     * 判断参数 Rewords 是否已赋值
                     * @return Rewords 是否已赋值
                     */
                    bool RewordsHasBeenSet() const;

                    /**
                     * 获取The user’s IP address.
                     * @return IPAddress The user’s IP address.
                     */
                    std::string GetIPAddress() const;

                    /**
                     * 设置The user’s IP address.
                     * @param IPAddress The user’s IP address.
                     */
                    void SetIPAddress(const std::string& _iPAddress);

                    /**
                     * 判断参数 IPAddress 是否已赋值
                     * @return IPAddress 是否已赋值
                     */
                    bool IPAddressHasBeenSet() const;

                    /**
                     * 获取The user’s location.
                     * @return Location The user’s location.
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置The user’s location.
                     * @param Location The user’s location.
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取The user’s device type. `0`: Unknown; `1`: Windows; `2`: macOS; `3`: Android; `4`: iOS; `5`: Web; `6`: Mobile webpage; `7`: Weixin Mini Program.
                     * @return Device The user’s device type. `0`: Unknown; `1`: Windows; `2`: macOS; `3`: Android; `4`: iOS; `5`: Web; `6`: Mobile webpage; `7`: Weixin Mini Program.
                     */
                    int64_t GetDevice() const;

                    /**
                     * 设置The user’s device type. `0`: Unknown; `1`: Windows; `2`: macOS; `3`: Android; `4`: iOS; `5`: Web; `6`: Mobile webpage; `7`: Weixin Mini Program.
                     * @param Device The user’s device type. `0`: Unknown; `1`: Windows; `2`: macOS; `3`: Android; `4`: iOS; `5`: Web; `6`: Mobile webpage; `7`: Weixin Mini Program.
                     */
                    void SetDevice(const int64_t& _device);

                    /**
                     * 判断参数 Device 是否已赋值
                     * @return Device 是否已赋值
                     */
                    bool DeviceHasBeenSet() const;

                    /**
                     * 获取The number of times each member mics.
                     * @return PerMemberMicCount The number of times each member mics.
                     */
                    int64_t GetPerMemberMicCount() const;

                    /**
                     * 设置The number of times each member mics.
                     * @param PerMemberMicCount The number of times each member mics.
                     */
                    void SetPerMemberMicCount(const int64_t& _perMemberMicCount);

                    /**
                     * 判断参数 PerMemberMicCount 是否已赋值
                     * @return PerMemberMicCount 是否已赋值
                     */
                    bool PerMemberMicCountHasBeenSet() const;

                    /**
                     * 获取The number of messages sent by each member.
                     * @return PerMemberMessageCount The number of messages sent by each member.
                     */
                    int64_t GetPerMemberMessageCount() const;

                    /**
                     * 设置The number of messages sent by each member.
                     * @param PerMemberMessageCount The number of messages sent by each member.
                     */
                    void SetPerMemberMessageCount(const int64_t& _perMemberMessageCount);

                    /**
                     * 判断参数 PerMemberMessageCount 是否已赋值
                     * @return PerMemberMessageCount 是否已赋值
                     */
                    bool PerMemberMessageCountHasBeenSet() const;

                private:

                    /**
                     * User ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Username
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Online duration, in seconds
                     */
                    uint64_t m_presentTime;
                    bool m_presentTimeHasBeenSet;

                    /**
                     * Whether the camera is enabled
                     */
                    uint64_t m_camera;
                    bool m_cameraHasBeenSet;

                    /**
                     * Whether the mic is enabled
                     */
                    uint64_t m_mic;
                    bool m_micHasBeenSet;

                    /**
                     * Whether the user is muted
                     */
                    uint64_t m_silence;
                    bool m_silenceHasBeenSet;

                    /**
                     * Number of questions answered by the user
                     */
                    uint64_t m_answerQuestions;
                    bool m_answerQuestionsHasBeenSet;

                    /**
                     * Number of hand raising times
                     */
                    uint64_t m_handUps;
                    bool m_handUpsHasBeenSet;

                    /**
                     * First time that the user entered the room, in UNIX timestamp format
                     */
                    uint64_t m_firstJoinTimestamp;
                    bool m_firstJoinTimestampHasBeenSet;

                    /**
                     * Last time that the user left the room, in UNIX timestamp format
                     */
                    uint64_t m_lastQuitTimestamp;
                    bool m_lastQuitTimestampHasBeenSet;

                    /**
                     * Number of rewards received
                     */
                    uint64_t m_rewords;
                    bool m_rewordsHasBeenSet;

                    /**
                     * The user’s IP address.
                     */
                    std::string m_iPAddress;
                    bool m_iPAddressHasBeenSet;

                    /**
                     * The user’s location.
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * The user’s device type. `0`: Unknown; `1`: Windows; `2`: macOS; `3`: Android; `4`: iOS; `5`: Web; `6`: Mobile webpage; `7`: Weixin Mini Program.
                     */
                    int64_t m_device;
                    bool m_deviceHasBeenSet;

                    /**
                     * The number of times each member mics.
                     */
                    int64_t m_perMemberMicCount;
                    bool m_perMemberMicCountHasBeenSet;

                    /**
                     * The number of messages sent by each member.
                     */
                    int64_t m_perMemberMessageCount;
                    bool m_perMemberMessageCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_MEMBERRECORD_H_
