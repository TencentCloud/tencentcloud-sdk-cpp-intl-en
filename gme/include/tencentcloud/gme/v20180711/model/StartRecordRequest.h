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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_STARTRECORDREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_STARTRECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/SubscribeRecordUserIds.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * StartRecord request structure.
                */
                class StartRecordRequest : public AbstractModel
                {
                public:
                    StartRecordRequest();
                    ~StartRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID.
                     * @return BizId Application ID.
                     * 
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 设置Application ID.
                     * @param _bizId Application ID.
                     * 
                     */
                    void SetBizId(const uint64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     * 
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取Room ID.
                     * @return RoomId Room ID.
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置Room ID.
                     * @param _roomId Room ID.
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
                     * 获取Recording mode. Valid values: `1`: single stream; `2`: mixed streams; `3`: single stream and mixed streams.
                     * @return RecordMode Recording mode. Valid values: `1`: single stream; `2`: mixed streams; `3`: single stream and mixed streams.
                     * 
                     */
                    uint64_t GetRecordMode() const;

                    /**
                     * 设置Recording mode. Valid values: `1`: single stream; `2`: mixed streams; `3`: single stream and mixed streams.
                     * @param _recordMode Recording mode. Valid values: `1`: single stream; `2`: mixed streams; `3`: single stream and mixed streams.
                     * 
                     */
                    void SetRecordMode(const uint64_t& _recordMode);

                    /**
                     * 判断参数 RecordMode 是否已赋值
                     * @return RecordMode 是否已赋值
                     * 
                     */
                    bool RecordModeHasBeenSet() const;

                    /**
                     * 获取Allowlist or blocklist for stream subscription. If you do not specify this parameter, the audio streams of all the users in the room are subscribed to by default.
                     * @return SubscribeRecordUserIds Allowlist or blocklist for stream subscription. If you do not specify this parameter, the audio streams of all the users in the room are subscribed to by default.
                     * 
                     */
                    SubscribeRecordUserIds GetSubscribeRecordUserIds() const;

                    /**
                     * 设置Allowlist or blocklist for stream subscription. If you do not specify this parameter, the audio streams of all the users in the room are subscribed to by default.
                     * @param _subscribeRecordUserIds Allowlist or blocklist for stream subscription. If you do not specify this parameter, the audio streams of all the users in the room are subscribed to by default.
                     * 
                     */
                    void SetSubscribeRecordUserIds(const SubscribeRecordUserIds& _subscribeRecordUserIds);

                    /**
                     * 判断参数 SubscribeRecordUserIds 是否已赋值
                     * @return SubscribeRecordUserIds 是否已赋值
                     * 
                     */
                    bool SubscribeRecordUserIdsHasBeenSet() const;

                private:

                    /**
                     * Application ID.
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * Room ID.
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * Recording mode. Valid values: `1`: single stream; `2`: mixed streams; `3`: single stream and mixed streams.
                     */
                    uint64_t m_recordMode;
                    bool m_recordModeHasBeenSet;

                    /**
                     * Allowlist or blocklist for stream subscription. If you do not specify this parameter, the audio streams of all the users in the room are subscribed to by default.
                     */
                    SubscribeRecordUserIds m_subscribeRecordUserIds;
                    bool m_subscribeRecordUserIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_STARTRECORDREQUEST_H_
