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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_REMOVEUSERBYSTRROOMIDREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_REMOVEUSERBYSTRROOMIDREQUEST_H_

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
                * RemoveUserByStrRoomId request structure.
                */
                class RemoveUserByStrRoomIdRequest : public AbstractModel
                {
                public:
                    RemoveUserByStrRoomIdRequest();
                    ~RemoveUserByStrRoomIdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取`SDKAppId` of TRTC
                     * @return SdkAppId `SDKAppId` of TRTC
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置`SDKAppId` of TRTC
                     * @param _sdkAppId `SDKAppId` of TRTC
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
                     * 获取Room ID
                     * @return RoomId Room ID
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置Room ID
                     * @param _roomId Room ID
                     * 
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取List of up to 10 users to be removed
                     * @return UserIds List of up to 10 users to be removed
                     * 
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置List of up to 10 users to be removed
                     * @param _userIds List of up to 10 users to be removed
                     * 
                     */
                    void SetUserIds(const std::vector<std::string>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     * 
                     */
                    bool UserIdsHasBeenSet() const;

                private:

                    /**
                     * `SDKAppId` of TRTC
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Room ID
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * List of up to 10 users to be removed
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_REMOVEUSERBYSTRROOMIDREQUEST_H_
