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
#include <tencentcloud/trtc/v20190722/model/McuSeiParams.h>
#include <tencentcloud/trtc/v20190722/model/McuFeedBackRoomParams.h>


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
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置The [SDKAppID](https://intl.cloud.tencent.com/document/product/647/37714) of the TRTC room whose streams are relayed.
                     * @param _sdkAppId The [SDKAppID](https://intl.cloud.tencent.com/document/product/647/37714) of the TRTC room whose streams are relayed.
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
                     * 获取The ID of the room whose streams are relayed (the main room).
                     * @return RoomId The ID of the room whose streams are relayed (the main room).
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置The ID of the room whose streams are relayed (the main room).
                     * @param _roomId The ID of the room whose streams are relayed (the main room).
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
                     * 获取The type of the `RoomId` parameter, which must be the same as the ID type of the room whose streams are relayed. 0: integer; 1: string.
                     * @return RoomIdType The type of the `RoomId` parameter, which must be the same as the ID type of the room whose streams are relayed. 0: integer; 1: string.
                     * 
                     */
                    uint64_t GetRoomIdType() const;

                    /**
                     * 设置The type of the `RoomId` parameter, which must be the same as the ID type of the room whose streams are relayed. 0: integer; 1: string.
                     * @param _roomIdType The type of the `RoomId` parameter, which must be the same as the ID type of the room whose streams are relayed. 0: integer; 1: string.
                     * 
                     */
                    void SetRoomIdType(const uint64_t& _roomIdType);

                    /**
                     * 判断参数 RoomIdType 是否已赋值
                     * @return RoomIdType 是否已赋值
                     * 
                     */
                    bool RoomIdTypeHasBeenSet() const;

                    /**
                     * 获取The information of the relaying robot in the room.
                     * @return AgentParams The information of the relaying robot in the room.
                     * 
                     */
                    AgentParams GetAgentParams() const;

                    /**
                     * 设置The information of the relaying robot in the room.
                     * @param _agentParams The information of the relaying robot in the room.
                     * 
                     */
                    void SetAgentParams(const AgentParams& _agentParams);

                    /**
                     * 判断参数 AgentParams 是否已赋值
                     * @return AgentParams 是否已赋值
                     * 
                     */
                    bool AgentParamsHasBeenSet() const;

                    /**
                     * 获取Whether to transcode the streams. `0`: No. `1`: Yes. This parameter determines whether transcoding fees are charged. If it is `0`, streams will only be relayed, and no transcoding fees will be incurred. If it is `1`, streams will be transcoded before being relayed, and transcoding fees will be incurred.
                     * @return WithTranscoding Whether to transcode the streams. `0`: No. `1`: Yes. This parameter determines whether transcoding fees are charged. If it is `0`, streams will only be relayed, and no transcoding fees will be incurred. If it is `1`, streams will be transcoded before being relayed, and transcoding fees will be incurred.
                     * 
                     */
                    uint64_t GetWithTranscoding() const;

                    /**
                     * 设置Whether to transcode the streams. `0`: No. `1`: Yes. This parameter determines whether transcoding fees are charged. If it is `0`, streams will only be relayed, and no transcoding fees will be incurred. If it is `1`, streams will be transcoded before being relayed, and transcoding fees will be incurred.
                     * @param _withTranscoding Whether to transcode the streams. `0`: No. `1`: Yes. This parameter determines whether transcoding fees are charged. If it is `0`, streams will only be relayed, and no transcoding fees will be incurred. If it is `1`, streams will be transcoded before being relayed, and transcoding fees will be incurred.
                     * 
                     */
                    void SetWithTranscoding(const uint64_t& _withTranscoding);

                    /**
                     * 判断参数 WithTranscoding 是否已赋值
                     * @return WithTranscoding 是否已赋值
                     * 
                     */
                    bool WithTranscodingHasBeenSet() const;

                    /**
                     * 获取The audio encoding parameters. Because audio is always transcoded (no fees are incurred), this parameter is required when you start a relay task.
                     * @return AudioParams The audio encoding parameters. Because audio is always transcoded (no fees are incurred), this parameter is required when you start a relay task.
                     * 
                     */
                    McuAudioParams GetAudioParams() const;

                    /**
                     * 设置The audio encoding parameters. Because audio is always transcoded (no fees are incurred), this parameter is required when you start a relay task.
                     * @param _audioParams The audio encoding parameters. Because audio is always transcoded (no fees are incurred), this parameter is required when you start a relay task.
                     * 
                     */
                    void SetAudioParams(const McuAudioParams& _audioParams);

                    /**
                     * 判断参数 AudioParams 是否已赋值
                     * @return AudioParams 是否已赋值
                     * 
                     */
                    bool AudioParamsHasBeenSet() const;

                    /**
                     * 获取The video encoding parameters for relaying. If you do not pass this parameter, only audio will be relayed.
                     * @return VideoParams The video encoding parameters for relaying. If you do not pass this parameter, only audio will be relayed.
                     * 
                     */
                    McuVideoParams GetVideoParams() const;

                    /**
                     * 设置The video encoding parameters for relaying. If you do not pass this parameter, only audio will be relayed.
                     * @param _videoParams The video encoding parameters for relaying. If you do not pass this parameter, only audio will be relayed.
                     * 
                     */
                    void SetVideoParams(const McuVideoParams& _videoParams);

                    /**
                     * 判断参数 VideoParams 是否已赋值
                     * @return VideoParams 是否已赋值
                     * 
                     */
                    bool VideoParamsHasBeenSet() const;

                    /**
                     * 获取The information of a single stream relayed. When you relay a single stream, set `WithTranscoding` to 0.
                     * @return SingleSubscribeParams The information of a single stream relayed. When you relay a single stream, set `WithTranscoding` to 0.
                     * 
                     */
                    SingleSubscribeParams GetSingleSubscribeParams() const;

                    /**
                     * 设置The information of a single stream relayed. When you relay a single stream, set `WithTranscoding` to 0.
                     * @param _singleSubscribeParams The information of a single stream relayed. When you relay a single stream, set `WithTranscoding` to 0.
                     * 
                     */
                    void SetSingleSubscribeParams(const SingleSubscribeParams& _singleSubscribeParams);

                    /**
                     * 判断参数 SingleSubscribeParams 是否已赋值
                     * @return SingleSubscribeParams 是否已赋值
                     * 
                     */
                    bool SingleSubscribeParamsHasBeenSet() const;

                    /**
                     * 获取The information of the CDNs to relay to. You need to specify at least one between this parameter and `FeedBackRoomParams.N`.
                     * @return PublishCdnParams The information of the CDNs to relay to. You need to specify at least one between this parameter and `FeedBackRoomParams.N`.
                     * 
                     */
                    std::vector<McuPublishCdnParam> GetPublishCdnParams() const;

                    /**
                     * 设置The information of the CDNs to relay to. You need to specify at least one between this parameter and `FeedBackRoomParams.N`.
                     * @param _publishCdnParams The information of the CDNs to relay to. You need to specify at least one between this parameter and `FeedBackRoomParams.N`.
                     * 
                     */
                    void SetPublishCdnParams(const std::vector<McuPublishCdnParam>& _publishCdnParams);

                    /**
                     * 判断参数 PublishCdnParams 是否已赋值
                     * @return PublishCdnParams 是否已赋值
                     * 
                     */
                    bool PublishCdnParamsHasBeenSet() const;

                    /**
                     * 获取The stream mixing SEI parameters.
                     * @return SeiParams The stream mixing SEI parameters.
                     * 
                     */
                    McuSeiParams GetSeiParams() const;

                    /**
                     * 设置The stream mixing SEI parameters.
                     * @param _seiParams The stream mixing SEI parameters.
                     * 
                     */
                    void SetSeiParams(const McuSeiParams& _seiParams);

                    /**
                     * 判断参数 SeiParams 是否已赋值
                     * @return SeiParams 是否已赋值
                     * 
                     */
                    bool SeiParamsHasBeenSet() const;

                    /**
                     * 获取The information of the room to which streams are relayed. Between this parameter and `PublishCdnParams`, you must specify at least one. Please note that relaying to a TRTC room is only supported in some SDK versions. For details, please contact technical support.
                     * @return FeedBackRoomParams The information of the room to which streams are relayed. Between this parameter and `PublishCdnParams`, you must specify at least one. Please note that relaying to a TRTC room is only supported in some SDK versions. For details, please contact technical support.
                     * 
                     */
                    std::vector<McuFeedBackRoomParams> GetFeedBackRoomParams() const;

                    /**
                     * 设置The information of the room to which streams are relayed. Between this parameter and `PublishCdnParams`, you must specify at least one. Please note that relaying to a TRTC room is only supported in some SDK versions. For details, please contact technical support.
                     * @param _feedBackRoomParams The information of the room to which streams are relayed. Between this parameter and `PublishCdnParams`, you must specify at least one. Please note that relaying to a TRTC room is only supported in some SDK versions. For details, please contact technical support.
                     * 
                     */
                    void SetFeedBackRoomParams(const std::vector<McuFeedBackRoomParams>& _feedBackRoomParams);

                    /**
                     * 判断参数 FeedBackRoomParams 是否已赋值
                     * @return FeedBackRoomParams 是否已赋值
                     * 
                     */
                    bool FeedBackRoomParamsHasBeenSet() const;

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
                     * Whether to transcode the streams. `0`: No. `1`: Yes. This parameter determines whether transcoding fees are charged. If it is `0`, streams will only be relayed, and no transcoding fees will be incurred. If it is `1`, streams will be transcoded before being relayed, and transcoding fees will be incurred.
                     */
                    uint64_t m_withTranscoding;
                    bool m_withTranscodingHasBeenSet;

                    /**
                     * The audio encoding parameters. Because audio is always transcoded (no fees are incurred), this parameter is required when you start a relay task.
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
                     * The information of the CDNs to relay to. You need to specify at least one between this parameter and `FeedBackRoomParams.N`.
                     */
                    std::vector<McuPublishCdnParam> m_publishCdnParams;
                    bool m_publishCdnParamsHasBeenSet;

                    /**
                     * The stream mixing SEI parameters.
                     */
                    McuSeiParams m_seiParams;
                    bool m_seiParamsHasBeenSet;

                    /**
                     * The information of the room to which streams are relayed. Between this parameter and `PublishCdnParams`, you must specify at least one. Please note that relaying to a TRTC room is only supported in some SDK versions. For details, please contact technical support.
                     */
                    std::vector<McuFeedBackRoomParams> m_feedBackRoomParams;
                    bool m_feedBackRoomParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_STARTPUBLISHCDNSTREAMREQUEST_H_
