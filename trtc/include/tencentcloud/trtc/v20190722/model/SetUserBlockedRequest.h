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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_SETUSERBLOCKEDREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_SETUSERBLOCKEDREQUEST_H_

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
                * SetUserBlocked request structure.
                */
                class SetUserBlockedRequest : public AbstractModel
                {
                public:
                    SetUserBlockedRequest();
                    ~SetUserBlockedRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The application ID.
                     * @return SdkAppId The application ID.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置The application ID.
                     * @param _sdkAppId The application ID.
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取The room ID (number).
                     * @return RoomId The room ID (number).
                     * 
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置The room ID (number).
                     * @param _roomId The room ID (number).
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
                     * 获取The user ID.
                     * @return UserId The user ID.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置The user ID.
                     * @param _userId The user ID.
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
                     * 获取Whether to disable the user’s audio and video. 0: Enable; 1: Disable.
                     * @return IsMute Whether to disable the user’s audio and video. 0: Enable; 1: Disable.
                     * 
                     */
                    uint64_t GetIsMute() const;

                    /**
                     * 设置Whether to disable the user’s audio and video. 0: Enable; 1: Disable.
                     * @param _isMute Whether to disable the user’s audio and video. 0: Enable; 1: Disable.
                     * 
                     */
                    void SetIsMute(const uint64_t& _isMute);

                    /**
                     * 判断参数 IsMute 是否已赋值
                     * @return IsMute 是否已赋值
                     * 
                     */
                    bool IsMuteHasBeenSet() const;

                private:

                    /**
                     * The application ID.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * The room ID (number).
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * The user ID.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Whether to disable the user’s audio and video. 0: Enable; 1: Disable.
                     */
                    uint64_t m_isMute;
                    bool m_isMuteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_SETUSERBLOCKEDREQUEST_H_
