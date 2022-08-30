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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TRTCRECORDINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TRTCRECORDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * The TRTC recording information.
                */
                class TrtcRecordInfo : public AbstractModel
                {
                public:
                    TrtcRecordInfo();
                    ~TrtcRecordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The TRTC application ID.
                     * @return SdkAppId The TRTC application ID.
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置The TRTC application ID.
                     * @param SdkAppId The TRTC application ID.
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取The TRTC room ID.
                     * @return RoomId The TRTC room ID.
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置The TRTC room ID.
                     * @param RoomId The TRTC room ID.
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取The recording task ID.
                     * @return TaskId The recording task ID.
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置The recording task ID.
                     * @param TaskId The recording task ID.
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取The IDs of users whose streams are mixed.
                     * @return UserIds The IDs of users whose streams are mixed.
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置The IDs of users whose streams are mixed.
                     * @param UserIds The IDs of users whose streams are mixed.
                     */
                    void SetUserIds(const std::vector<std::string>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     */
                    bool UserIdsHasBeenSet() const;

                private:

                    /**
                     * The TRTC application ID.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * The TRTC room ID.
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * The recording task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * The IDs of users whose streams are mixed.
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TRTCRECORDINFO_H_
