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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_UPDATEPUBLISHCDNSTREAMREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_UPDATEPUBLISHCDNSTREAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * UpdatePublishCdnStream request structure.
                */
                class UpdatePublishCdnStreamRequest : public AbstractModel
                {
                public:
                    UpdatePublishCdnStreamRequest();
                    ~UpdatePublishCdnStreamRequest() = default;
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
                     * 获取The task ID.
                     * @return TaskId The task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置The task ID.
                     * @param _taskId The task ID.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取The sequence of a request. This parameter ensures the requests to change the parameters of the same relaying task are in the correct order. It increases each time a new request is made.
                     * @return SequenceNumber The sequence of a request. This parameter ensures the requests to change the parameters of the same relaying task are in the correct order. It increases each time a new request is made.
                     * 
                     */
                    uint64_t GetSequenceNumber() const;

                    /**
                     * 设置The sequence of a request. This parameter ensures the requests to change the parameters of the same relaying task are in the correct order. It increases each time a new request is made.
                     * @param _sequenceNumber The sequence of a request. This parameter ensures the requests to change the parameters of the same relaying task are in the correct order. It increases each time a new request is made.
                     * 
                     */
                    void SetSequenceNumber(const uint64_t& _sequenceNumber);

                    /**
                     * 判断参数 SequenceNumber 是否已赋值
                     * @return SequenceNumber 是否已赋值
                     * 
                     */
                    bool SequenceNumberHasBeenSet() const;

                    /**
                     * 获取Whether to transcode the streams. 0: No; 1: Yes.
                     * @return WithTranscoding Whether to transcode the streams. 0: No; 1: Yes.
                     * 
                     */
                    uint64_t GetWithTranscoding() const;

                    /**
                     * 设置Whether to transcode the streams. 0: No; 1: Yes.
                     * @param _withTranscoding Whether to transcode the streams. 0: No; 1: Yes.
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
                     * 获取Pass this parameter to change the users whose audios are mixed. If you do not pass this parameter, no changes will be made.
                     * @return AudioParams Pass this parameter to change the users whose audios are mixed. If you do not pass this parameter, no changes will be made.
                     * 
                     */
                    McuAudioParams GetAudioParams() const;

                    /**
                     * 设置Pass this parameter to change the users whose audios are mixed. If you do not pass this parameter, no changes will be made.
                     * @param _audioParams Pass this parameter to change the users whose audios are mixed. If you do not pass this parameter, no changes will be made.
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
                     * 获取Pass this parameter to change video parameters other than the codec, including the video layout, background image, background color, and watermark information. This parameter is valid only if streams are transcoded. If you do not pass it, no changes will be made.
                     * @return VideoParams Pass this parameter to change video parameters other than the codec, including the video layout, background image, background color, and watermark information. This parameter is valid only if streams are transcoded. If you do not pass it, no changes will be made.
                     * 
                     */
                    McuVideoParams GetVideoParams() const;

                    /**
                     * 设置Pass this parameter to change video parameters other than the codec, including the video layout, background image, background color, and watermark information. This parameter is valid only if streams are transcoded. If you do not pass it, no changes will be made.
                     * @param _videoParams Pass this parameter to change video parameters other than the codec, including the video layout, background image, background color, and watermark information. This parameter is valid only if streams are transcoded. If you do not pass it, no changes will be made.
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
                     * 获取Pass this parameter to change the single stream that is relayed. This parameter is valid only if streams are not transcoded. If you do not pass this parameter, no changes will be made.
                     * @return SingleSubscribeParams Pass this parameter to change the single stream that is relayed. This parameter is valid only if streams are not transcoded. If you do not pass this parameter, no changes will be made.
                     * 
                     */
                    SingleSubscribeParams GetSingleSubscribeParams() const;

                    /**
                     * 设置Pass this parameter to change the single stream that is relayed. This parameter is valid only if streams are not transcoded. If you do not pass this parameter, no changes will be made.
                     * @param _singleSubscribeParams Pass this parameter to change the single stream that is relayed. This parameter is valid only if streams are not transcoded. If you do not pass this parameter, no changes will be made.
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
                     * 获取Pass this parameter to change the CDNs to relay to. If you do not pass this parameter, no changes will be made.
                     * @return PublishCdnParams Pass this parameter to change the CDNs to relay to. If you do not pass this parameter, no changes will be made.
                     * 
                     */
                    std::vector<McuPublishCdnParam> GetPublishCdnParams() const;

                    /**
                     * 设置Pass this parameter to change the CDNs to relay to. If you do not pass this parameter, no changes will be made.
                     * @param _publishCdnParams Pass this parameter to change the CDNs to relay to. If you do not pass this parameter, no changes will be made.
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
                     * 获取The information of the room to which streams are relayed.
                     * @return FeedBackRoomParams The information of the room to which streams are relayed.
                     * 
                     */
                    std::vector<McuFeedBackRoomParams> GetFeedBackRoomParams() const;

                    /**
                     * 设置The information of the room to which streams are relayed.
                     * @param _feedBackRoomParams The information of the room to which streams are relayed.
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
                     * The task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * The sequence of a request. This parameter ensures the requests to change the parameters of the same relaying task are in the correct order. It increases each time a new request is made.
                     */
                    uint64_t m_sequenceNumber;
                    bool m_sequenceNumberHasBeenSet;

                    /**
                     * Whether to transcode the streams. 0: No; 1: Yes.
                     */
                    uint64_t m_withTranscoding;
                    bool m_withTranscodingHasBeenSet;

                    /**
                     * Pass this parameter to change the users whose audios are mixed. If you do not pass this parameter, no changes will be made.
                     */
                    McuAudioParams m_audioParams;
                    bool m_audioParamsHasBeenSet;

                    /**
                     * Pass this parameter to change video parameters other than the codec, including the video layout, background image, background color, and watermark information. This parameter is valid only if streams are transcoded. If you do not pass it, no changes will be made.
                     */
                    McuVideoParams m_videoParams;
                    bool m_videoParamsHasBeenSet;

                    /**
                     * Pass this parameter to change the single stream that is relayed. This parameter is valid only if streams are not transcoded. If you do not pass this parameter, no changes will be made.
                     */
                    SingleSubscribeParams m_singleSubscribeParams;
                    bool m_singleSubscribeParamsHasBeenSet;

                    /**
                     * Pass this parameter to change the CDNs to relay to. If you do not pass this parameter, no changes will be made.
                     */
                    std::vector<McuPublishCdnParam> m_publishCdnParams;
                    bool m_publishCdnParamsHasBeenSet;

                    /**
                     * The stream mixing SEI parameters.
                     */
                    McuSeiParams m_seiParams;
                    bool m_seiParamsHasBeenSet;

                    /**
                     * The information of the room to which streams are relayed.
                     */
                    std::vector<McuFeedBackRoomParams> m_feedBackRoomParams;
                    bool m_feedBackRoomParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_UPDATEPUBLISHCDNSTREAMREQUEST_H_
