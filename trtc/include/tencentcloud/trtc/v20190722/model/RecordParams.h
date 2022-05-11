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
                     * 获取The recording mode.
1: Single-stream recording. Records the audio and video of each subscribed user (`UserId`) in a room and saves the recording files (M3U8/TS) to the cloud.
2: Mixed-stream recording. Mixes the audios and videos of subscribed users (`UserId`) in a room, records the mixed stream, and saves the recording files (M3U8/TS) to the cloud.
                     * @return RecordMode The recording mode.
1: Single-stream recording. Records the audio and video of each subscribed user (`UserId`) in a room and saves the recording files (M3U8/TS) to the cloud.
2: Mixed-stream recording. Mixes the audios and videos of subscribed users (`UserId`) in a room, records the mixed stream, and saves the recording files (M3U8/TS) to the cloud.
                     */
                    uint64_t GetRecordMode() const;

                    /**
                     * 设置The recording mode.
1: Single-stream recording. Records the audio and video of each subscribed user (`UserId`) in a room and saves the recording files (M3U8/TS) to the cloud.
2: Mixed-stream recording. Mixes the audios and videos of subscribed users (`UserId`) in a room, records the mixed stream, and saves the recording files (M3U8/TS) to the cloud.
                     * @param RecordMode The recording mode.
1: Single-stream recording. Records the audio and video of each subscribed user (`UserId`) in a room and saves the recording files (M3U8/TS) to the cloud.
2: Mixed-stream recording. Mixes the audios and videos of subscribed users (`UserId`) in a room, records the mixed stream, and saves the recording files (M3U8/TS) to the cloud.
                     */
                    void SetRecordMode(const uint64_t& _recordMode);

                    /**
                     * 判断参数 RecordMode 是否已赋值
                     * @return RecordMode 是否已赋值
                     */
                    bool RecordModeHasBeenSet() const;

                    /**
                     * 获取The time period (seconds) to wait after there are no anchors in a room to stop recording automatically. The value cannot be smaller than 5 or larger than 86400 (24 hours). Default value: 30.
                     * @return MaxIdleTime The time period (seconds) to wait after there are no anchors in a room to stop recording automatically. The value cannot be smaller than 5 or larger than 86400 (24 hours). Default value: 30.
                     */
                    uint64_t GetMaxIdleTime() const;

                    /**
                     * 设置The time period (seconds) to wait after there are no anchors in a room to stop recording automatically. The value cannot be smaller than 5 or larger than 86400 (24 hours). Default value: 30.
                     * @param MaxIdleTime The time period (seconds) to wait after there are no anchors in a room to stop recording automatically. The value cannot be smaller than 5 or larger than 86400 (24 hours). Default value: 30.
                     */
                    void SetMaxIdleTime(const uint64_t& _maxIdleTime);

                    /**
                     * 判断参数 MaxIdleTime 是否已赋值
                     * @return MaxIdleTime 是否已赋值
                     */
                    bool MaxIdleTimeHasBeenSet() const;

                    /**
                     * 获取The media type of the streams to record.
0: Audio and video streams (default)
1: Audio streams only
2: Video streams only
                     * @return StreamType The media type of the streams to record.
0: Audio and video streams (default)
1: Audio streams only
2: Video streams only
                     */
                    uint64_t GetStreamType() const;

                    /**
                     * 设置The media type of the streams to record.
0: Audio and video streams (default)
1: Audio streams only
2: Video streams only
                     * @param StreamType The media type of the streams to record.
0: Audio and video streams (default)
1: Audio streams only
2: Video streams only
                     */
                    void SetStreamType(const uint64_t& _streamType);

                    /**
                     * 判断参数 StreamType 是否已赋值
                     * @return StreamType 是否已赋值
                     */
                    bool StreamTypeHasBeenSet() const;

                    /**
                     * 获取The allowlist/blocklist for stream subscription.
                     * @return SubscribeStreamUserIds The allowlist/blocklist for stream subscription.
                     */
                    SubscribeStreamUserIds GetSubscribeStreamUserIds() const;

                    /**
                     * 设置The allowlist/blocklist for stream subscription.
                     * @param SubscribeStreamUserIds The allowlist/blocklist for stream subscription.
                     */
                    void SetSubscribeStreamUserIds(const SubscribeStreamUserIds& _subscribeStreamUserIds);

                    /**
                     * 判断参数 SubscribeStreamUserIds 是否已赋值
                     * @return SubscribeStreamUserIds 是否已赋值
                     */
                    bool SubscribeStreamUserIdsHasBeenSet() const;

                    /**
                     * 获取The format of recording files. 0 (default): HLS; 1: HLS + MP4 (recorded in HLS and converted to MP4).
                     * @return OutputFormat The format of recording files. 0 (default): HLS; 1: HLS + MP4 (recorded in HLS and converted to MP4).
                     */
                    uint64_t GetOutputFormat() const;

                    /**
                     * 设置The format of recording files. 0 (default): HLS; 1: HLS + MP4 (recorded in HLS and converted to MP4).
                     * @param OutputFormat The format of recording files. 0 (default): HLS; 1: HLS + MP4 (recorded in HLS and converted to MP4).
                     */
                    void SetOutputFormat(const uint64_t& _outputFormat);

                    /**
                     * 判断参数 OutputFormat 是否已赋值
                     * @return OutputFormat 是否已赋值
                     */
                    bool OutputFormatHasBeenSet() const;

                private:

                    /**
                     * The recording mode.
1: Single-stream recording. Records the audio and video of each subscribed user (`UserId`) in a room and saves the recording files (M3U8/TS) to the cloud.
2: Mixed-stream recording. Mixes the audios and videos of subscribed users (`UserId`) in a room, records the mixed stream, and saves the recording files (M3U8/TS) to the cloud.
                     */
                    uint64_t m_recordMode;
                    bool m_recordModeHasBeenSet;

                    /**
                     * The time period (seconds) to wait after there are no anchors in a room to stop recording automatically. The value cannot be smaller than 5 or larger than 86400 (24 hours). Default value: 30.
                     */
                    uint64_t m_maxIdleTime;
                    bool m_maxIdleTimeHasBeenSet;

                    /**
                     * The media type of the streams to record.
0: Audio and video streams (default)
1: Audio streams only
2: Video streams only
                     */
                    uint64_t m_streamType;
                    bool m_streamTypeHasBeenSet;

                    /**
                     * The allowlist/blocklist for stream subscription.
                     */
                    SubscribeStreamUserIds m_subscribeStreamUserIds;
                    bool m_subscribeStreamUserIdsHasBeenSet;

                    /**
                     * The format of recording files. 0 (default): HLS; 1: HLS + MP4 (recorded in HLS and converted to MP4).
                     */
                    uint64_t m_outputFormat;
                    bool m_outputFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_RECORDPARAMS_H_
