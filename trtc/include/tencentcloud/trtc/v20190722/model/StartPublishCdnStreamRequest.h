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
#include <tencentcloud/trtc/v20190722/model/McuRecordParams.h>


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
                     * 获取[SdkAppId](https://www.tencentcloud.comom/document/product/647/46351?from_cn_redirect=1#SdkAppId) of TRTC, which is the same as the SdkAppId corresponding to the relayed room.
                     * @return SdkAppId [SdkAppId](https://www.tencentcloud.comom/document/product/647/46351?from_cn_redirect=1#SdkAppId) of TRTC, which is the same as the SdkAppId corresponding to the relayed room.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置[SdkAppId](https://www.tencentcloud.comom/document/product/647/46351?from_cn_redirect=1#SdkAppId) of TRTC, which is the same as the SdkAppId corresponding to the relayed room.
                     * @param _sdkAppId [SdkAppId](https://www.tencentcloud.comom/document/product/647/46351?from_cn_redirect=1#SdkAppId) of TRTC, which is the same as the SdkAppId corresponding to the relayed room.
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
                     * 获取Main room information RoomId, the RoomId corresponding to the TRTC room for relay.
                     * @return RoomId Main room information RoomId, the RoomId corresponding to the TRTC room for relay.
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置Main room information RoomId, the RoomId corresponding to the TRTC room for relay.
                     * @param _roomId Main room information RoomId, the RoomId corresponding to the TRTC room for relay.
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
                     * 获取Main room information RoomType must be the same as the RoomId type of the relayed room. 0 indicates integer type room id, and 1 indicates string room number.
                     * @return RoomIdType Main room information RoomType must be the same as the RoomId type of the relayed room. 0 indicates integer type room id, and 1 indicates string room number.
                     * 
                     */
                    uint64_t GetRoomIdType() const;

                    /**
                     * 设置Main room information RoomType must be the same as the RoomId type of the relayed room. 0 indicates integer type room id, and 1 indicates string room number.
                     * @param _roomIdType Main room information RoomType must be the same as the RoomId type of the relayed room. 0 indicates integer type room id, and 1 indicates string room number.
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
                     * 获取Relay service bot parameters for joining TRTC room.
                     * @return AgentParams Relay service bot parameters for joining TRTC room.
                     * 
                     */
                    AgentParams GetAgentParams() const;

                    /**
                     * 设置Relay service bot parameters for joining TRTC room.
                     * @param _agentParams Relay service bot parameters for joining TRTC room.
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
                     * 获取Whether to transcode. 0 indicates no need to transcode, 1 indicates requirement to transcode. whether to charge transcoding fee is determined by the WithTranscoding parameter. WithTranscoding set to 0 means bypass forwarding and no transcoding costs will be incurred. WithTranscoding set to 1 means mixed-stream relay and transcoding costs will be charged.
Note: transcoding is required for stream mixing, and this parameter must be set to 1.
                     * @return WithTranscoding Whether to transcode. 0 indicates no need to transcode, 1 indicates requirement to transcode. whether to charge transcoding fee is determined by the WithTranscoding parameter. WithTranscoding set to 0 means bypass forwarding and no transcoding costs will be incurred. WithTranscoding set to 1 means mixed-stream relay and transcoding costs will be charged.
Note: transcoding is required for stream mixing, and this parameter must be set to 1.
                     * 
                     */
                    uint64_t GetWithTranscoding() const;

                    /**
                     * 设置Whether to transcode. 0 indicates no need to transcode, 1 indicates requirement to transcode. whether to charge transcoding fee is determined by the WithTranscoding parameter. WithTranscoding set to 0 means bypass forwarding and no transcoding costs will be incurred. WithTranscoding set to 1 means mixed-stream relay and transcoding costs will be charged.
Note: transcoding is required for stream mixing, and this parameter must be set to 1.
                     * @param _withTranscoding Whether to transcode. 0 indicates no need to transcode, 1 indicates requirement to transcode. whether to charge transcoding fee is determined by the WithTranscoding parameter. WithTranscoding set to 0 means bypass forwarding and no transcoding costs will be incurred. WithTranscoding set to 1 means mixed-stream relay and transcoding costs will be charged.
Note: transcoding is required for stream mixing, and this parameter must be set to 1.
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
                     * 获取Audio encoding parameters for stream retransmission. since audio must be transcoded (no transcoding costs will be incurred), this field is required when starting a task.
                     * @return AudioParams Audio encoding parameters for stream retransmission. since audio must be transcoded (no transcoding costs will be incurred), this field is required when starting a task.
                     * 
                     */
                    McuAudioParams GetAudioParams() const;

                    /**
                     * 设置Audio encoding parameters for stream retransmission. since audio must be transcoded (no transcoding costs will be incurred), this field is required when starting a task.
                     * @param _audioParams Audio encoding parameters for stream retransmission. since audio must be transcoded (no transcoding costs will be incurred), this field is required when starting a task.
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
                     * 获取Video encoding parameters for the relay stream. leave blank for audio-only relay.
                     * @return VideoParams Video encoding parameters for the relay stream. leave blank for audio-only relay.
                     * 
                     */
                    McuVideoParams GetVideoParams() const;

                    /**
                     * 设置Video encoding parameters for the relay stream. leave blank for audio-only relay.
                     * @param _videoParams Video encoding parameters for the relay stream. leave blank for audio-only relay.
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
                     * 获取The user uplink parameters require single stream bypass forwarding. WithTranscoding needs to be set to 0 for single stream bypass forwarding.
                     * @return SingleSubscribeParams The user uplink parameters require single stream bypass forwarding. WithTranscoding needs to be set to 0 for single stream bypass forwarding.
                     * 
                     */
                    SingleSubscribeParams GetSingleSubscribeParams() const;

                    /**
                     * 设置The user uplink parameters require single stream bypass forwarding. WithTranscoding needs to be set to 0 for single stream bypass forwarding.
                     * @param _singleSubscribeParams The user uplink parameters require single stream bypass forwarding. WithTranscoding needs to be set to 0 for single stream bypass forwarding.
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
                     * 获取The CDN parameters for relay push support up to 10 push urls for a task. there must be one pushback room parameter.
                     * @return PublishCdnParams The CDN parameters for relay push support up to 10 push urls for a task. there must be one pushback room parameter.
                     * 
                     */
                    std::vector<McuPublishCdnParam> GetPublishCdnParams() const;

                    /**
                     * 设置The CDN parameters for relay push support up to 10 push urls for a task. there must be one pushback room parameter.
                     * @param _publishCdnParams The CDN parameters for relay push support up to 10 push urls for a task. there must be one pushback room parameter.
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
                     * 获取Stream mixing SEI parameter.
                     * @return SeiParams Stream mixing SEI parameter.
                     * 
                     */
                    McuSeiParams GetSeiParams() const;

                    /**
                     * 设置Stream mixing SEI parameter.
                     * @param _seiParams Stream mixing SEI parameter.
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
                     * 获取Push back room information. a task supports up to 10 push rooms, and there must be one forward CDN parameter. note: use SDK version 10.4 or higher to push room. if you need assistance, contact tencent cloud technical support.
                     * @return FeedBackRoomParams Push back room information. a task supports up to 10 push rooms, and there must be one forward CDN parameter. note: use SDK version 10.4 or higher to push room. if you need assistance, contact tencent cloud technical support.
                     * 
                     */
                    std::vector<McuFeedBackRoomParams> GetFeedBackRoomParams() const;

                    /**
                     * 设置Push back room information. a task supports up to 10 push rooms, and there must be one forward CDN parameter. note: use SDK version 10.4 or higher to push room. if you need assistance, contact tencent cloud technical support.
                     * @param _feedBackRoomParams Push back room information. a task supports up to 10 push rooms, and there must be one forward CDN parameter. note: use SDK version 10.4 or higher to push room. if you need assistance, contact tencent cloud technical support.
                     * 
                     */
                    void SetFeedBackRoomParams(const std::vector<McuFeedBackRoomParams>& _feedBackRoomParams);

                    /**
                     * 判断参数 FeedBackRoomParams 是否已赋值
                     * @return FeedBackRoomParams 是否已赋值
                     * 
                     */
                    bool FeedBackRoomParamsHasBeenSet() const;

                    /**
                     * 获取Relay recording parameters. refer to the reference document (https://www.tencentcloud.comom/document/product/647/111748?from_cn_redirect=1).
                     * @return RecordParams Relay recording parameters. refer to the reference document (https://www.tencentcloud.comom/document/product/647/111748?from_cn_redirect=1).
                     * 
                     */
                    McuRecordParams GetRecordParams() const;

                    /**
                     * 设置Relay recording parameters. refer to the reference document (https://www.tencentcloud.comom/document/product/647/111748?from_cn_redirect=1).
                     * @param _recordParams Relay recording parameters. refer to the reference document (https://www.tencentcloud.comom/document/product/647/111748?from_cn_redirect=1).
                     * 
                     */
                    void SetRecordParams(const McuRecordParams& _recordParams);

                    /**
                     * 判断参数 RecordParams 是否已赋值
                     * @return RecordParams 是否已赋值
                     * 
                     */
                    bool RecordParamsHasBeenSet() const;

                private:

                    /**
                     * [SdkAppId](https://www.tencentcloud.comom/document/product/647/46351?from_cn_redirect=1#SdkAppId) of TRTC, which is the same as the SdkAppId corresponding to the relayed room.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Main room information RoomId, the RoomId corresponding to the TRTC room for relay.
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * Main room information RoomType must be the same as the RoomId type of the relayed room. 0 indicates integer type room id, and 1 indicates string room number.
                     */
                    uint64_t m_roomIdType;
                    bool m_roomIdTypeHasBeenSet;

                    /**
                     * Relay service bot parameters for joining TRTC room.
                     */
                    AgentParams m_agentParams;
                    bool m_agentParamsHasBeenSet;

                    /**
                     * Whether to transcode. 0 indicates no need to transcode, 1 indicates requirement to transcode. whether to charge transcoding fee is determined by the WithTranscoding parameter. WithTranscoding set to 0 means bypass forwarding and no transcoding costs will be incurred. WithTranscoding set to 1 means mixed-stream relay and transcoding costs will be charged.
Note: transcoding is required for stream mixing, and this parameter must be set to 1.
                     */
                    uint64_t m_withTranscoding;
                    bool m_withTranscodingHasBeenSet;

                    /**
                     * Audio encoding parameters for stream retransmission. since audio must be transcoded (no transcoding costs will be incurred), this field is required when starting a task.
                     */
                    McuAudioParams m_audioParams;
                    bool m_audioParamsHasBeenSet;

                    /**
                     * Video encoding parameters for the relay stream. leave blank for audio-only relay.
                     */
                    McuVideoParams m_videoParams;
                    bool m_videoParamsHasBeenSet;

                    /**
                     * The user uplink parameters require single stream bypass forwarding. WithTranscoding needs to be set to 0 for single stream bypass forwarding.
                     */
                    SingleSubscribeParams m_singleSubscribeParams;
                    bool m_singleSubscribeParamsHasBeenSet;

                    /**
                     * The CDN parameters for relay push support up to 10 push urls for a task. there must be one pushback room parameter.
                     */
                    std::vector<McuPublishCdnParam> m_publishCdnParams;
                    bool m_publishCdnParamsHasBeenSet;

                    /**
                     * Stream mixing SEI parameter.
                     */
                    McuSeiParams m_seiParams;
                    bool m_seiParamsHasBeenSet;

                    /**
                     * Push back room information. a task supports up to 10 push rooms, and there must be one forward CDN parameter. note: use SDK version 10.4 or higher to push room. if you need assistance, contact tencent cloud technical support.
                     */
                    std::vector<McuFeedBackRoomParams> m_feedBackRoomParams;
                    bool m_feedBackRoomParamsHasBeenSet;

                    /**
                     * Relay recording parameters. refer to the reference document (https://www.tencentcloud.comom/document/product/647/111748?from_cn_redirect=1).
                     */
                    McuRecordParams m_recordParams;
                    bool m_recordParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_STARTPUBLISHCDNSTREAMREQUEST_H_
