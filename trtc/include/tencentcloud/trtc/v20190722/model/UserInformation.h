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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_USERINFORMATION_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_USERINFORMATION_H_

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
                * User information, including when the user enters/exits a room
                */
                class UserInformation : public AbstractModel
                {
                public:
                    UserInformation();
                    ~UserInformation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Room ID
                     * @return RoomStr Room ID
                     */
                    std::string GetRoomStr() const;

                    /**
                     * 设置Room ID
                     * @param RoomStr Room ID
                     */
                    void SetRoomStr(const std::string& _roomStr);

                    /**
                     * 判断参数 RoomStr 是否已赋值
                     * @return RoomStr 是否已赋值
                     */
                    bool RoomStrHasBeenSet() const;

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
                     * 获取The time when the user enters the room
                     * @return JoinTs The time when the user enters the room
                     */
                    uint64_t GetJoinTs() const;

                    /**
                     * 设置The time when the user enters the room
                     * @param JoinTs The time when the user enters the room
                     */
                    void SetJoinTs(const uint64_t& _joinTs);

                    /**
                     * 判断参数 JoinTs 是否已赋值
                     * @return JoinTs 是否已赋值
                     */
                    bool JoinTsHasBeenSet() const;

                    /**
                     * 获取The time when the user exits the room. If the user is still in the room, the current time will be returned
                     * @return LeaveTs The time when the user exits the room. If the user is still in the room, the current time will be returned
                     */
                    uint64_t GetLeaveTs() const;

                    /**
                     * 设置The time when the user exits the room. If the user is still in the room, the current time will be returned
                     * @param LeaveTs The time when the user exits the room. If the user is still in the room, the current time will be returned
                     */
                    void SetLeaveTs(const uint64_t& _leaveTs);

                    /**
                     * 判断参数 LeaveTs 是否已赋值
                     * @return LeaveTs 是否已赋值
                     */
                    bool LeaveTsHasBeenSet() const;

                    /**
                     * 获取Device type
                     * @return DeviceType Device type
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置Device type
                     * @param DeviceType Device type
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取SDK version number
                     * @return SdkVersion SDK version number
                     */
                    std::string GetSdkVersion() const;

                    /**
                     * 设置SDK version number
                     * @param SdkVersion SDK version number
                     */
                    void SetSdkVersion(const std::string& _sdkVersion);

                    /**
                     * 判断参数 SdkVersion 是否已赋值
                     * @return SdkVersion 是否已赋值
                     */
                    bool SdkVersionHasBeenSet() const;

                    /**
                     * 获取Client IP
                     * @return ClientIp Client IP
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置Client IP
                     * @param ClientIp Client IP
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取Determine whether a user has left the room
                     * @return Finished Determine whether a user has left the room
                     */
                    bool GetFinished() const;

                    /**
                     * 设置Determine whether a user has left the room
                     * @param Finished Determine whether a user has left the room
                     */
                    void SetFinished(const bool& _finished);

                    /**
                     * 判断参数 Finished 是否已赋值
                     * @return Finished 是否已赋值
                     */
                    bool FinishedHasBeenSet() const;

                private:

                    /**
                     * Room ID
                     */
                    std::string m_roomStr;
                    bool m_roomStrHasBeenSet;

                    /**
                     * User ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * The time when the user enters the room
                     */
                    uint64_t m_joinTs;
                    bool m_joinTsHasBeenSet;

                    /**
                     * The time when the user exits the room. If the user is still in the room, the current time will be returned
                     */
                    uint64_t m_leaveTs;
                    bool m_leaveTsHasBeenSet;

                    /**
                     * Device type
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * SDK version number
                     */
                    std::string m_sdkVersion;
                    bool m_sdkVersionHasBeenSet;

                    /**
                     * Client IP
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * Determine whether a user has left the room
                     */
                    bool m_finished;
                    bool m_finishedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_USERINFORMATION_H_
