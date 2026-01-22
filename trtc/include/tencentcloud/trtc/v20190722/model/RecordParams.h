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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_RECORDPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_RECORDPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/SubscribeStreamUserIds.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * The on-cloud recording parameters.
                */
                class RecordParams : public AbstractModel
                {
                public:
                    RecordParams();
                    ~RecordParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Recording mode:.
1: single stream recording, record the audio and video of the subscribed UserId in the room separately, and upload the recording files to cloud storage.
2: mixed-stream recording. mix the audio and video of the subscribed UserId in the room into an audio-video file and upload the recording file to cloud storage.
                     * @return RecordMode Recording mode:.
1: single stream recording, record the audio and video of the subscribed UserId in the room separately, and upload the recording files to cloud storage.
2: mixed-stream recording. mix the audio and video of the subscribed UserId in the room into an audio-video file and upload the recording file to cloud storage.
                     * 
                     */
                    uint64_t GetRecordMode() const;

                    /**
                     * 设置Recording mode:.
1: single stream recording, record the audio and video of the subscribed UserId in the room separately, and upload the recording files to cloud storage.
2: mixed-stream recording. mix the audio and video of the subscribed UserId in the room into an audio-video file and upload the recording file to cloud storage.
                     * @param _recordMode Recording mode:.
1: single stream recording, record the audio and video of the subscribed UserId in the room separately, and upload the recording files to cloud storage.
2: mixed-stream recording. mix the audio and video of the subscribed UserId in the room into an audio-video file and upload the recording file to cloud storage.
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
                     * 获取Recording stops automatically when there is no host inside the room for a duration exceeding MaxIdleTime. measurement unit: second. default value: 30 seconds. the value must be greater than or equal to 5 seconds and less than or equal to 86400 seconds (24 hours).
                     * @return MaxIdleTime Recording stops automatically when there is no host inside the room for a duration exceeding MaxIdleTime. measurement unit: second. default value: 30 seconds. the value must be greater than or equal to 5 seconds and less than or equal to 86400 seconds (24 hours).
                     * 
                     */
                    uint64_t GetMaxIdleTime() const;

                    /**
                     * 设置Recording stops automatically when there is no host inside the room for a duration exceeding MaxIdleTime. measurement unit: second. default value: 30 seconds. the value must be greater than or equal to 5 seconds and less than or equal to 86400 seconds (24 hours).
                     * @param _maxIdleTime Recording stops automatically when there is no host inside the room for a duration exceeding MaxIdleTime. measurement unit: second. default value: 30 seconds. the value must be greater than or equal to 5 seconds and less than or equal to 86400 seconds (24 hours).
                     * 
                     */
                    void SetMaxIdleTime(const uint64_t& _maxIdleTime);

                    /**
                     * 判断参数 MaxIdleTime 是否已赋值
                     * @return MaxIdleTime 是否已赋值
                     * 
                     */
                    bool MaxIdleTimeHasBeenSet() const;

                    /**
                     * 获取Media stream type for recording.
0: recording audio and video streams (default).
1: record audio streams only.
2: record video stream only.
                     * @return StreamType Media stream type for recording.
0: recording audio and video streams (default).
1: record audio streams only.
2: record video stream only.
                     * 
                     */
                    uint64_t GetStreamType() const;

                    /**
                     * 设置Media stream type for recording.
0: recording audio and video streams (default).
1: record audio streams only.
2: record video stream only.
                     * @param _streamType Media stream type for recording.
0: recording audio and video streams (default).
1: record audio streams only.
2: record video stream only.
                     * 
                     */
                    void SetStreamType(const uint64_t& _streamType);

                    /**
                     * 判断参数 StreamType 是否已赋值
                     * @return StreamType 是否已赋值
                     * 
                     */
                    bool StreamTypeHasBeenSet() const;

                    /**
                     * 获取Specifies the allowlist or blocklist for the subscription stream.
                     * @return SubscribeStreamUserIds Specifies the allowlist or blocklist for the subscription stream.
                     * 
                     */
                    SubscribeStreamUserIds GetSubscribeStreamUserIds() const;

                    /**
                     * 设置Specifies the allowlist or blocklist for the subscription stream.
                     * @param _subscribeStreamUserIds Specifies the allowlist or blocklist for the subscription stream.
                     * 
                     */
                    void SetSubscribeStreamUserIds(const SubscribeStreamUserIds& _subscribeStreamUserIds);

                    /**
                     * 判断参数 SubscribeStreamUserIds 是否已赋值
                     * @return SubscribeStreamUserIds 是否已赋值
                     * 
                     */
                    bool SubscribeStreamUserIdsHasBeenSet() const;

                    /**
                     * 获取Output file format (valid when stored in third-party storage such as COS). 0: (default) output file is in hls format. 1: output file format is hls+mp4. 2: output file format is hls+aac. 3: output file format is mp4. 4: output file format is aac.

This parameter is invalid when storing in VOD. when storing in VOD, set MediaType in TencentVod (https://www.tencentcloud.comom/document/api/647/44055?from_cn_redirect=1#TencentVod).
                     * @return OutputFormat Output file format (valid when stored in third-party storage such as COS). 0: (default) output file is in hls format. 1: output file format is hls+mp4. 2: output file format is hls+aac. 3: output file format is mp4. 4: output file format is aac.

This parameter is invalid when storing in VOD. when storing in VOD, set MediaType in TencentVod (https://www.tencentcloud.comom/document/api/647/44055?from_cn_redirect=1#TencentVod).
                     * 
                     */
                    uint64_t GetOutputFormat() const;

                    /**
                     * 设置Output file format (valid when stored in third-party storage such as COS). 0: (default) output file is in hls format. 1: output file format is hls+mp4. 2: output file format is hls+aac. 3: output file format is mp4. 4: output file format is aac.

This parameter is invalid when storing in VOD. when storing in VOD, set MediaType in TencentVod (https://www.tencentcloud.comom/document/api/647/44055?from_cn_redirect=1#TencentVod).
                     * @param _outputFormat Output file format (valid when stored in third-party storage such as COS). 0: (default) output file is in hls format. 1: output file format is hls+mp4. 2: output file format is hls+aac. 3: output file format is mp4. 4: output file format is aac.

This parameter is invalid when storing in VOD. when storing in VOD, set MediaType in TencentVod (https://www.tencentcloud.comom/document/api/647/44055?from_cn_redirect=1#TencentVod).
                     * 
                     */
                    void SetOutputFormat(const uint64_t& _outputFormat);

                    /**
                     * 判断参数 OutputFormat 是否已赋值
                     * @return OutputFormat 是否已赋值
                     * 
                     */
                    bool OutputFormatHasBeenSet() const;

                    /**
                     * 获取In single-stream recording mode, determine whether to merge the user's audio and video. 0: do not merge the audio and video of a stream (default). 1: merge the audio and video of a stream into one ts. in mixed-stream recording, this parameter is not required, and the audio and video are merged by default.
                     * @return AvMerge In single-stream recording mode, determine whether to merge the user's audio and video. 0: do not merge the audio and video of a stream (default). 1: merge the audio and video of a stream into one ts. in mixed-stream recording, this parameter is not required, and the audio and video are merged by default.
                     * 
                     */
                    uint64_t GetAvMerge() const;

                    /**
                     * 设置In single-stream recording mode, determine whether to merge the user's audio and video. 0: do not merge the audio and video of a stream (default). 1: merge the audio and video of a stream into one ts. in mixed-stream recording, this parameter is not required, and the audio and video are merged by default.
                     * @param _avMerge In single-stream recording mode, determine whether to merge the user's audio and video. 0: do not merge the audio and video of a stream (default). 1: merge the audio and video of a stream into one ts. in mixed-stream recording, this parameter is not required, and the audio and video are merged by default.
                     * 
                     */
                    void SetAvMerge(const uint64_t& _avMerge);

                    /**
                     * 判断参数 AvMerge 是否已赋值
                     * @return AvMerge 是否已赋值
                     * 
                     */
                    bool AvMergeHasBeenSet() const;

                    /**
                     * 获取If the file format is aac or mp4, the system will automatically split the video file when the length limit is exceeded. measurement unit: minute. defaults to 1440 min (24h). value range: 1-1440. [single file limit is 2G. if file size exceeds 2G or recording duration exceeds 24h, the file will be automatically split.].
Hls format recording. this parameter is not effective.
                     * @return MaxMediaFileDuration If the file format is aac or mp4, the system will automatically split the video file when the length limit is exceeded. measurement unit: minute. defaults to 1440 min (24h). value range: 1-1440. [single file limit is 2G. if file size exceeds 2G or recording duration exceeds 24h, the file will be automatically split.].
Hls format recording. this parameter is not effective.
                     * 
                     */
                    uint64_t GetMaxMediaFileDuration() const;

                    /**
                     * 设置If the file format is aac or mp4, the system will automatically split the video file when the length limit is exceeded. measurement unit: minute. defaults to 1440 min (24h). value range: 1-1440. [single file limit is 2G. if file size exceeds 2G or recording duration exceeds 24h, the file will be automatically split.].
Hls format recording. this parameter is not effective.
                     * @param _maxMediaFileDuration If the file format is aac or mp4, the system will automatically split the video file when the length limit is exceeded. measurement unit: minute. defaults to 1440 min (24h). value range: 1-1440. [single file limit is 2G. if file size exceeds 2G or recording duration exceeds 24h, the file will be automatically split.].
Hls format recording. this parameter is not effective.
                     * 
                     */
                    void SetMaxMediaFileDuration(const uint64_t& _maxMediaFileDuration);

                    /**
                     * 判断参数 MaxMediaFileDuration 是否已赋值
                     * @return MaxMediaFileDuration 是否已赋值
                     * 
                     */
                    bool MaxMediaFileDurationHasBeenSet() const;

                    /**
                     * 获取Specify recording streams. 0: mainstream + auxiliary stream (default); 1: mainstream; 2: auxiliary stream.
                     * @return MediaId Specify recording streams. 0: mainstream + auxiliary stream (default); 1: mainstream; 2: auxiliary stream.
                     * 
                     */
                    uint64_t GetMediaId() const;

                    /**
                     * 设置Specify recording streams. 0: mainstream + auxiliary stream (default); 1: mainstream; 2: auxiliary stream.
                     * @param _mediaId Specify recording streams. 0: mainstream + auxiliary stream (default); 1: mainstream; 2: auxiliary stream.
                     * 
                     */
                    void SetMediaId(const uint64_t& _mediaId);

                    /**
                     * 判断参数 MediaId 是否已赋值
                     * @return MediaId 是否已赋值
                     * 
                     */
                    bool MediaIdHasBeenSet() const;

                    /**
                     * 获取Specifies the type of frame to fill when the upstream video stream stops:
- 0: Fill with the last frame (freeze the last video frame)
- 1: Fill with black frames
                     * @return FillType Specifies the type of frame to fill when the upstream video stream stops:
- 0: Fill with the last frame (freeze the last video frame)
- 1: Fill with black frames
                     * 
                     */
                    uint64_t GetFillType() const;

                    /**
                     * 设置Specifies the type of frame to fill when the upstream video stream stops:
- 0: Fill with the last frame (freeze the last video frame)
- 1: Fill with black frames
                     * @param _fillType Specifies the type of frame to fill when the upstream video stream stops:
- 0: Fill with the last frame (freeze the last video frame)
- 1: Fill with black frames
                     * 
                     */
                    void SetFillType(const uint64_t& _fillType);

                    /**
                     * 判断参数 FillType 是否已赋值
                     * @return FillType 是否已赋值
                     * 
                     */
                    bool FillTypeHasBeenSet() const;

                    /**
                     * 获取Specifies whether the recording task subscribes to the stream published by the Mixed Stream Robot. 

- 1: Subscribe. 
- 0: Do not subscribe (default).
> Note: 
When this option is enabled, it is recommended to use the "Subscription Allowlist." Avoid subscribing to both the stream published by the Mixed Stream Robot and the streams published by the hosts simultaneously; otherwise, it will result in audio echoing (duplicate audio) in the recorded file.
                     * @return SubscribeAbility Specifies whether the recording task subscribes to the stream published by the Mixed Stream Robot. 

- 1: Subscribe. 
- 0: Do not subscribe (default).
> Note: 
When this option is enabled, it is recommended to use the "Subscription Allowlist." Avoid subscribing to both the stream published by the Mixed Stream Robot and the streams published by the hosts simultaneously; otherwise, it will result in audio echoing (duplicate audio) in the recorded file.
                     * 
                     */
                    uint64_t GetSubscribeAbility() const;

                    /**
                     * 设置Specifies whether the recording task subscribes to the stream published by the Mixed Stream Robot. 

- 1: Subscribe. 
- 0: Do not subscribe (default).
> Note: 
When this option is enabled, it is recommended to use the "Subscription Allowlist." Avoid subscribing to both the stream published by the Mixed Stream Robot and the streams published by the hosts simultaneously; otherwise, it will result in audio echoing (duplicate audio) in the recorded file.
                     * @param _subscribeAbility Specifies whether the recording task subscribes to the stream published by the Mixed Stream Robot. 

- 1: Subscribe. 
- 0: Do not subscribe (default).
> Note: 
When this option is enabled, it is recommended to use the "Subscription Allowlist." Avoid subscribing to both the stream published by the Mixed Stream Robot and the streams published by the hosts simultaneously; otherwise, it will result in audio echoing (duplicate audio) in the recorded file.
                     * 
                     */
                    void SetSubscribeAbility(const uint64_t& _subscribeAbility);

                    /**
                     * 判断参数 SubscribeAbility 是否已赋值
                     * @return SubscribeAbility 是否已赋值
                     * 
                     */
                    bool SubscribeAbilityHasBeenSet() const;

                private:

                    /**
                     * Recording mode:.
1: single stream recording, record the audio and video of the subscribed UserId in the room separately, and upload the recording files to cloud storage.
2: mixed-stream recording. mix the audio and video of the subscribed UserId in the room into an audio-video file and upload the recording file to cloud storage.
                     */
                    uint64_t m_recordMode;
                    bool m_recordModeHasBeenSet;

                    /**
                     * Recording stops automatically when there is no host inside the room for a duration exceeding MaxIdleTime. measurement unit: second. default value: 30 seconds. the value must be greater than or equal to 5 seconds and less than or equal to 86400 seconds (24 hours).
                     */
                    uint64_t m_maxIdleTime;
                    bool m_maxIdleTimeHasBeenSet;

                    /**
                     * Media stream type for recording.
0: recording audio and video streams (default).
1: record audio streams only.
2: record video stream only.
                     */
                    uint64_t m_streamType;
                    bool m_streamTypeHasBeenSet;

                    /**
                     * Specifies the allowlist or blocklist for the subscription stream.
                     */
                    SubscribeStreamUserIds m_subscribeStreamUserIds;
                    bool m_subscribeStreamUserIdsHasBeenSet;

                    /**
                     * Output file format (valid when stored in third-party storage such as COS). 0: (default) output file is in hls format. 1: output file format is hls+mp4. 2: output file format is hls+aac. 3: output file format is mp4. 4: output file format is aac.

This parameter is invalid when storing in VOD. when storing in VOD, set MediaType in TencentVod (https://www.tencentcloud.comom/document/api/647/44055?from_cn_redirect=1#TencentVod).
                     */
                    uint64_t m_outputFormat;
                    bool m_outputFormatHasBeenSet;

                    /**
                     * In single-stream recording mode, determine whether to merge the user's audio and video. 0: do not merge the audio and video of a stream (default). 1: merge the audio and video of a stream into one ts. in mixed-stream recording, this parameter is not required, and the audio and video are merged by default.
                     */
                    uint64_t m_avMerge;
                    bool m_avMergeHasBeenSet;

                    /**
                     * If the file format is aac or mp4, the system will automatically split the video file when the length limit is exceeded. measurement unit: minute. defaults to 1440 min (24h). value range: 1-1440. [single file limit is 2G. if file size exceeds 2G or recording duration exceeds 24h, the file will be automatically split.].
Hls format recording. this parameter is not effective.
                     */
                    uint64_t m_maxMediaFileDuration;
                    bool m_maxMediaFileDurationHasBeenSet;

                    /**
                     * Specify recording streams. 0: mainstream + auxiliary stream (default); 1: mainstream; 2: auxiliary stream.
                     */
                    uint64_t m_mediaId;
                    bool m_mediaIdHasBeenSet;

                    /**
                     * Specifies the type of frame to fill when the upstream video stream stops:
- 0: Fill with the last frame (freeze the last video frame)
- 1: Fill with black frames
                     */
                    uint64_t m_fillType;
                    bool m_fillTypeHasBeenSet;

                    /**
                     * Specifies whether the recording task subscribes to the stream published by the Mixed Stream Robot. 

- 1: Subscribe. 
- 0: Do not subscribe (default).
> Note: 
When this option is enabled, it is recommended to use the "Subscription Allowlist." Avoid subscribing to both the stream published by the Mixed Stream Robot and the streams published by the hosts simultaneously; otherwise, it will result in audio echoing (duplicate audio) in the recorded file.
                     */
                    uint64_t m_subscribeAbility;
                    bool m_subscribeAbilityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_RECORDPARAMS_H_
