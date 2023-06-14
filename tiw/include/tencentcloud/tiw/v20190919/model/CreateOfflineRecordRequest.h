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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_CREATEOFFLINERECORDREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_CREATEOFFLINERECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/MixStream.h>
#include <tencentcloud/tiw/v20190919/model/Whiteboard.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * CreateOfflineRecord request structure.
                */
                class CreateOfflineRecordRequest : public AbstractModel
                {
                public:
                    CreateOfflineRecordRequest();
                    ~CreateOfflineRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SdkAppId of the whiteboard application.
                     * @return SdkAppId SdkAppId of the whiteboard application.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置SdkAppId of the whiteboard application.
                     * @param _sdkAppId SdkAppId of the whiteboard application.
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Room ID corresponding to the recording task.
                     * @return RoomId Room ID corresponding to the recording task.
                     * 
                     */
                    int64_t GetRoomId() const;

                    /**
                     * 设置Room ID corresponding to the recording task.
                     * @param _roomId Room ID corresponding to the recording task.
                     * 
                     */
                    void SetRoomId(const int64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取Group ID corresponding to the recording task.
                     * @return GroupId Group ID corresponding to the recording task.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Group ID corresponding to the recording task.
                     * @param _groupId Group ID corresponding to the recording task.
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Stream mixing parameters.
The Custom parameter is not supported for offline recording tasks.
                     * @return MixStream Stream mixing parameters.
The Custom parameter is not supported for offline recording tasks.
                     * 
                     */
                    MixStream GetMixStream() const;

                    /**
                     * 设置Stream mixing parameters.
The Custom parameter is not supported for offline recording tasks.
                     * @param _mixStream Stream mixing parameters.
The Custom parameter is not supported for offline recording tasks.
                     * 
                     */
                    void SetMixStream(const MixStream& _mixStream);

                    /**
                     * 判断参数 MixStream 是否已赋值
                     * @return MixStream 是否已赋值
                     * 
                     */
                    bool MixStreamHasBeenSet() const;

                    /**
                     * 获取Whiteboard parameters.
                     * @return Whiteboard Whiteboard parameters.
                     * 
                     */
                    Whiteboard GetWhiteboard() const;

                    /**
                     * 设置Whiteboard parameters.
                     * @param _whiteboard Whiteboard parameters.
                     * 
                     */
                    void SetWhiteboard(const Whiteboard& _whiteboard);

                    /**
                     * 判断参数 Whiteboard 是否已赋值
                     * @return Whiteboard 是否已赋值
                     * 
                     */
                    bool WhiteboardHasBeenSet() const;

                private:

                    /**
                     * SdkAppId of the whiteboard application.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Room ID corresponding to the recording task.
                     */
                    int64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * Group ID corresponding to the recording task.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Stream mixing parameters.
The Custom parameter is not supported for offline recording tasks.
                     */
                    MixStream m_mixStream;
                    bool m_mixStreamHasBeenSet;

                    /**
                     * Whiteboard parameters.
                     */
                    Whiteboard m_whiteboard;
                    bool m_whiteboardHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_CREATEOFFLINERECORDREQUEST_H_
