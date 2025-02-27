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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_SETUSERBLOCKEDBYSTRROOMIDREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_SETUSERBLOCKEDBYSTRROOMIDREQUEST_H_

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
                * SetUserBlockedByStrRoomId request structure.
                */
                class SetUserBlockedByStrRoomIdRequest : public AbstractModel
                {
                public:
                    SetUserBlockedByStrRoomIdRequest();
                    ~SetUserBlockedByStrRoomIdRequest() = default;
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
                     * 获取The room ID (string).
                     * @return StrRoomId The room ID (string).
                     * 
                     */
                    std::string GetStrRoomId() const;

                    /**
                     * 设置The room ID (string).
                     * @param _strRoomId The room ID (string).
                     * 
                     */
                    void SetStrRoomId(const std::string& _strRoomId);

                    /**
                     * 判断参数 StrRoomId 是否已赋值
                     * @return StrRoomId 是否已赋值
                     * 
                     */
                    bool StrRoomIdHasBeenSet() const;

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
                     * 获取Controls the activation state of audio and video.
0: Enable audio and video,
1: Disable audio and video,
2: Disable audio only,
3: Disable video only.
                     * @return IsMute Controls the activation state of audio and video.
0: Enable audio and video,
1: Disable audio and video,
2: Disable audio only,
3: Disable video only.
                     * 
                     */
                    uint64_t GetIsMute() const;

                    /**
                     * 设置Controls the activation state of audio and video.
0: Enable audio and video,
1: Disable audio and video,
2: Disable audio only,
3: Disable video only.
                     * @param _isMute Controls the activation state of audio and video.
0: Enable audio and video,
1: Disable audio and video,
2: Disable audio only,
3: Disable video only.
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
                     * The room ID (string).
                     */
                    std::string m_strRoomId;
                    bool m_strRoomIdHasBeenSet;

                    /**
                     * The user ID.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Controls the activation state of audio and video.
0: Enable audio and video,
1: Disable audio and video,
2: Disable audio only,
3: Disable video only.
                     */
                    uint64_t m_isMute;
                    bool m_isMuteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_SETUSERBLOCKEDBYSTRROOMIDREQUEST_H_
