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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_STARTPUBLISHCDNSTREAMREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_STARTPUBLISHCDNSTREAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/AgentParams.h>
#include <tencentcloud/trtc/v20190722/model/McuAudioParams.h>
#include <tencentcloud/trtc/v20190722/model/McuVideoParams.h>
#include <tencentcloud/trtc/v20190722/model/SingleSubscribeParams.h>
#include <tencentcloud/trtc/v20190722/model/McuPublishCdnParam.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * StartPublishCdnStream request structure.
                */
                class StartPublishCdnStreamRequest : public AbstractModel
                {
                public:
                    StartPublishCdnStreamRequest();
                    ~StartPublishCdnStreamRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The [SDKAppID](https://intl.cloud.tencent.com/document/product/647/37714) of the TRTC room whose streams are relayed.
                     * @return SdkAppId The [SDKAppID](https://intl.cloud.tencent.com/document/product/647/37714) of the TRTC room whose streams are relayed.
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置The [SDKAppID](https://intl.cloud.tencent.com/document/product/647/37714) of the TRTC room whose streams are relayed.
                     * @param SdkAppId The [SDKAppID](https://intl.cloud.tencent.com/document/product/647/37714) of the TRTC room whose streams are relayed.
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取The ID of the room whose streams are relayed (the main room).
                     * @return RoomId The ID of the room whose streams are relayed (the main room).
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置The ID of the room whose streams are relayed (the main room).
                     * @param RoomId The ID of the room whose streams are relayed (the main room).
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取The type of the `RoomId` parameter, which must be the same as the ID type of the room whose streams are relayed. 0: integer; 1: string.
                     * @return RoomIdType The type of the `RoomId` parameter, which must be the same as the ID type of the room whose streams are relayed. 0: integer; 1: string.
                     */
                    uint64_t GetRoomIdType() const;

                    /**
                     * 设置The type of the `RoomId` parameter, which must be the same as the ID type of the room whose streams are relayed. 0: integer; 1: string.
                     * @param RoomIdType The type of the `RoomId` parameter, which must be the same as the ID type of the room whose streams are relayed. 0: integer; 1: string.
                     */
                    void SetRoomIdType(const uint64_t& _roomIdType);

                    /**
                     * 判断参数 RoomIdType 是否已赋值
                     * @return RoomIdType 是否已赋值
                     */
                    bool RoomIdTypeHasBeenSet() const;

                    /**
                     * 获取The information of the relaying robot in the room.
                     * @return AgentParams The information of the relaying robot in the room.
                     */
                    AgentParams GetAgentParams() const;

                    /**
                     * 设置The information of the relaying robot in the room.
                     * @param AgentParams The information of the relaying robot in the room.
                     */
                    void SetAgentParams(const AgentParams& _agentParams);

                    /**
                     * 判断参数 AgentParams 是否已赋值
                     * @return AgentParams 是否已赋值
                     */
                    bool AgentParamsHasBeenSet() const;

                    /**
                     * 获取Whether to transcode the streams. 0: No; 1: Yes.
                     * @return WithTranscoding Whether to transcode the streams. 0: No; 1: Yes.
                     */
                    uint64_t GetWithTranscoding() const;

                    /**
                     * 设置Whether to transcode the streams. 0: No; 1: Yes.
                     * @param WithTranscoding Whether to transcode the streams. 0: No; 1: Yes.
                     */
                    void SetWithTranscoding(const uint64_t& _withTranscoding);

                    /**
                     * 判断参数 WithTranscoding 是否已赋值
                     * @return WithTranscoding 是否已赋值
                     */
                    bool WithTranscodingHasBeenSet() const;

                    /**
                     * 获取The audio encoding parameters for relaying.
                     * @return AudioParams The audio encoding parameters for relaying.
                     */
                    McuAudioParams GetAudioParams() const;

                    /**
                     * 设置The audio encoding parameters for relaying.
                     * @param AudioParams The audio encoding parameters for relaying.
                     */
                    void SetAudioParams(const McuAudioParams& _audioParams);

                    /**
                     * 判断参数 AudioParams 是否已赋值
                     * @return AudioParams 是否已赋值
                     */
                    bool AudioParamsHasBeenSet() const;

                    /**
                     * 获取The video encoding parameters for relaying. If you do not pass this parameter, only audio will be relayed.
                     * @return VideoParams The video encoding parameters for relaying. If you do not pass this parameter, only audio will be relayed.
                     */
                    McuVideoParams GetVideoParams() const;

                    /**
                     * 设置The video encoding parameters for relaying. If you do not pass this parameter, only audio will be relayed.
                     * @param VideoParams The video encoding parameters for relaying. If you do not pass this parameter, only audio will be relayed.
                     */
                    void SetVideoParams(const McuVideoParams& _videoParams);

                    /**
                     * 判断参数 VideoParams 是否已赋值
                     * @return VideoParams 是否已赋值
                     */
                    bool VideoParamsHasBeenSet() const;

                    /**
                     * 获取The information of a single stream relayed. When you relay a single stream, set `WithTranscoding` to 0.
                     * @return SingleSubscribeParams The information of a single stream relayed. When you relay a single stream, set `WithTranscoding` to 0.
                     */
                    SingleSubscribeParams GetSingleSubscribeParams() const;

                    /**
                     * 设置The information of a single stream relayed. When you relay a single stream, set `WithTranscoding` to 0.
                     * @param SingleSubscribeParams The information of a single stream relayed. When you relay a single stream, set `WithTranscoding` to 0.
                     */
                    void SetSingleSubscribeParams(const SingleSubscribeParams& _singleSubscribeParams);

                    /**
                     * 判断参数 SingleSubscribeParams 是否已赋值
                     * @return SingleSubscribeParams 是否已赋值
                     */
                    bool SingleSubscribeParamsHasBeenSet() const;

                    /**
                     * 获取The CDN information.
                     * @return PublishCdnParams The CDN information.
                     */
                    std::vector<McuPublishCdnParam> GetPublishCdnParams() const;

                    /**
                     * 设置The CDN information.
                     * @param PublishCdnParams The CDN information.
                     */
                    void SetPublishCdnParams(const std::vector<McuPublishCdnParam>& _publishCdnParams);

                    /**
                     * 判断参数 PublishCdnParams 是否已赋值
                     * @return PublishCdnParams 是否已赋值
                     */
                    bool PublishCdnParamsHasBeenSet() const;

                private:

                    /**
                     * The [SDKAppID](https://intl.cloud.tencent.com/document/product/647/37714) of the TRTC room whose streams are relayed.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * The ID of the room whose streams are relayed (the main room).
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * The type of the `RoomId` parameter, which must be the same as the ID type of the room whose streams are relayed. 0: integer; 1: string.
                     */
                    uint64_t m_roomIdType;
                    bool m_roomIdTypeHasBeenSet;

                    /**
                     * The information of the relaying robot in the room.
                     */
                    AgentParams m_agentParams;
                    bool m_agentParamsHasBeenSet;

                    /**
                     * Whether to transcode the streams. 0: No; 1: Yes.
                     */
                    uint64_t m_withTranscoding;
                    bool m_withTranscodingHasBeenSet;

                    /**
                     * The audio encoding parameters for relaying.
                     */
                    McuAudioParams m_audioParams;
                    bool m_audioParamsHasBeenSet;

                    /**
                     * The video encoding parameters for relaying. If you do not pass this parameter, only audio will be relayed.
                     */
                    McuVideoParams m_videoParams;
                    bool m_videoParamsHasBeenSet;

                    /**
                     * The information of a single stream relayed. When you relay a single stream, set `WithTranscoding` to 0.
                     */
                    SingleSubscribeParams m_singleSubscribeParams;
                    bool m_singleSubscribeParamsHasBeenSet;

                    /**
                     * The CDN information.
                     */
                    std::vector<McuPublishCdnParam> m_publishCdnParams;
                    bool m_publishCdnParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_STARTPUBLISHCDNSTREAMREQUEST_H_
