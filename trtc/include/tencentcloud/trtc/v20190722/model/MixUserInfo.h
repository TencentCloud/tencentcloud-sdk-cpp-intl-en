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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MIXUSERINFO_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MIXUSERINFO_H_

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
                * The user information.
                */
                class MixUserInfo : public AbstractModel
                {
                public:
                    MixUserInfo();
                    ~MixUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User ID.
                     * @return UserId User ID.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User ID.
                     * @param _userId User ID.
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
                     * 获取If a dynamic layout is used, the value of this parameter should be the ID of the main room. If a custom layout is used, the value of this parameter should be the same as the room ID in `MixLayoutList`.
                     * @return RoomId If a dynamic layout is used, the value of this parameter should be the ID of the main room. If a custom layout is used, the value of this parameter should be the same as the room ID in `MixLayoutList`.
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置If a dynamic layout is used, the value of this parameter should be the ID of the main room. If a custom layout is used, the value of this parameter should be the same as the room ID in `MixLayoutList`.
                     * @param _roomId If a dynamic layout is used, the value of this parameter should be the ID of the main room. If a custom layout is used, the value of this parameter should be the same as the room ID in `MixLayoutList`.
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
                     * 获取The type of the `RoomId` parameter. 0: integer; 1: string.
                     * @return RoomIdType The type of the `RoomId` parameter. 0: integer; 1: string.
                     * 
                     */
                    uint64_t GetRoomIdType() const;

                    /**
                     * 设置The type of the `RoomId` parameter. 0: integer; 1: string.
                     * @param _roomIdType The type of the `RoomId` parameter. 0: integer; 1: string.
                     * 
                     */
                    void SetRoomIdType(const uint64_t& _roomIdType);

                    /**
                     * 判断参数 RoomIdType 是否已赋值
                     * @return RoomIdType 是否已赋值
                     * 
                     */
                    bool RoomIdTypeHasBeenSet() const;

                private:

                    /**
                     * User ID.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * If a dynamic layout is used, the value of this parameter should be the ID of the main room. If a custom layout is used, the value of this parameter should be the same as the room ID in `MixLayoutList`.
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * The type of the `RoomId` parameter. 0: integer; 1: string.
                     */
                    uint64_t m_roomIdType;
                    bool m_roomIdTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MIXUSERINFO_H_
