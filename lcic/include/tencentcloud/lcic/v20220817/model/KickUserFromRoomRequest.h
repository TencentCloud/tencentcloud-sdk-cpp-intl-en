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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_KICKUSERFROMROOMREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_KICKUSERFROMROOMREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * KickUserFromRoom request structure.
                */
                class KickUserFromRoomRequest : public AbstractModel
                {
                public:
                    KickUserFromRoomRequest();
                    ~KickUserFromRoomRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The room ID.
                     * @return RoomId The room ID.
                     * 
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置The room ID.
                     * @param _roomId The room ID.
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
                     * 获取The SDKAppID assigned by LCIC.
                     * @return SdkAppId The SDKAppID assigned by LCIC.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置The SDKAppID assigned by LCIC.
                     * @param _sdkAppId The SDKAppID assigned by LCIC.
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
                     * 获取The ID of the user to be removed.
                     * @return UserId The ID of the user to be removed.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置The ID of the user to be removed.
                     * @param _userId The ID of the user to be removed.
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
                     * 获取The removal type: 
`1`: Keep the user out temporarily. The `Duration` parameter specifies the ban duration, during which the user is banned from entering the room. 
`2`: Remove the user permanently.
                     * @return KickType The removal type: 
`1`: Keep the user out temporarily. The `Duration` parameter specifies the ban duration, during which the user is banned from entering the room. 
`2`: Remove the user permanently.
                     * 
                     */
                    uint64_t GetKickType() const;

                    /**
                     * 设置The removal type: 
`1`: Keep the user out temporarily. The `Duration` parameter specifies the ban duration, during which the user is banned from entering the room. 
`2`: Remove the user permanently.
                     * @param _kickType The removal type: 
`1`: Keep the user out temporarily. The `Duration` parameter specifies the ban duration, during which the user is banned from entering the room. 
`2`: Remove the user permanently.
                     * 
                     */
                    void SetKickType(const uint64_t& _kickType);

                    /**
                     * 判断参数 KickType 是否已赋值
                     * @return KickType 是否已赋值
                     * 
                     */
                    bool KickTypeHasBeenSet() const;

                    /**
                     * 获取The ban duration (seconds). This parameter is valid if `KickType` is `1`. The default value is `0`.
                     * @return Duration The ban duration (seconds). This parameter is valid if `KickType` is `1`. The default value is `0`.
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置The ban duration (seconds). This parameter is valid if `KickType` is `1`. The default value is `0`.
                     * @param _duration The ban duration (seconds). This parameter is valid if `KickType` is `1`. The default value is `0`.
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                private:

                    /**
                     * The room ID.
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * The SDKAppID assigned by LCIC.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * The ID of the user to be removed.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * The removal type: 
`1`: Keep the user out temporarily. The `Duration` parameter specifies the ban duration, during which the user is banned from entering the room. 
`2`: Remove the user permanently.
                     */
                    uint64_t m_kickType;
                    bool m_kickTypeHasBeenSet;

                    /**
                     * The ban duration (seconds). This parameter is valid if `KickType` is `1`. The default value is `0`.
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_KICKUSERFROMROOMREQUEST_H_
