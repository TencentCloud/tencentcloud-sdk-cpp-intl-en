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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_ROOMSTATE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_ROOMSTATE_H_

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
                * The room information.
                */
                class RoomState : public AbstractModel
                {
                public:
                    RoomState();
                    ~RoomState() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The call ID, which uniquely identifies a call.
                     * @return CommId The call ID, which uniquely identifies a call.
                     * 
                     */
                    std::string GetCommId() const;

                    /**
                     * 设置The call ID, which uniquely identifies a call.
                     * @param _commId The call ID, which uniquely identifies a call.
                     * 
                     */
                    void SetCommId(const std::string& _commId);

                    /**
                     * 判断参数 CommId 是否已赋值
                     * @return CommId 是否已赋值
                     * 
                     */
                    bool CommIdHasBeenSet() const;

                    /**
                     * 获取The room ID.
                     * @return RoomString The room ID.
                     * 
                     */
                    std::string GetRoomString() const;

                    /**
                     * 设置The room ID.
                     * @param _roomString The room ID.
                     * 
                     */
                    void SetRoomString(const std::string& _roomString);

                    /**
                     * 判断参数 RoomString 是否已赋值
                     * @return RoomString 是否已赋值
                     * 
                     */
                    bool RoomStringHasBeenSet() const;

                    /**
                     * 获取The room creation time.
                     * @return CreateTime The room creation time.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置The room creation time.
                     * @param _createTime The room creation time.
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取The room termination time.
                     * @return DestroyTime The room termination time.
                     * 
                     */
                    uint64_t GetDestroyTime() const;

                    /**
                     * 设置The room termination time.
                     * @param _destroyTime The room termination time.
                     * 
                     */
                    void SetDestroyTime(const uint64_t& _destroyTime);

                    /**
                     * 判断参数 DestroyTime 是否已赋值
                     * @return DestroyTime 是否已赋值
                     * 
                     */
                    bool DestroyTimeHasBeenSet() const;

                    /**
                     * 获取Whether the room is terminated.
                     * @return IsFinished Whether the room is terminated.
                     * 
                     */
                    bool GetIsFinished() const;

                    /**
                     * 设置Whether the room is terminated.
                     * @param _isFinished Whether the room is terminated.
                     * 
                     */
                    void SetIsFinished(const bool& _isFinished);

                    /**
                     * 判断参数 IsFinished 是否已赋值
                     * @return IsFinished 是否已赋值
                     * 
                     */
                    bool IsFinishedHasBeenSet() const;

                    /**
                     * 获取The user ID of the room creator.
                     * @return UserId The user ID of the room creator.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置The user ID of the room creator.
                     * @param _userId The user ID of the room creator.
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * The call ID, which uniquely identifies a call.
                     */
                    std::string m_commId;
                    bool m_commIdHasBeenSet;

                    /**
                     * The room ID.
                     */
                    std::string m_roomString;
                    bool m_roomStringHasBeenSet;

                    /**
                     * The room creation time.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * The room termination time.
                     */
                    uint64_t m_destroyTime;
                    bool m_destroyTimeHasBeenSet;

                    /**
                     * Whether the room is terminated.
                     */
                    bool m_isFinished;
                    bool m_isFinishedHasBeenSet;

                    /**
                     * The user ID of the room creator.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_ROOMSTATE_H_
