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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_AUDIOPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_AUDIOPARAMS_H_

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
                * The audio transcoding parameters for recording.
                */
                class AudioParams : public AbstractModel
                {
                public:
                    AudioParams();
                    ~AudioParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The audio sample rate.
1: 48000 Hz (default)
2: 44100 Hz
3: 16000 Hz
                     * @return SampleRate The audio sample rate.
1: 48000 Hz (default)
2: 44100 Hz
3: 16000 Hz
                     */
                    uint64_t GetSampleRate() const;

                    /**
                     * 设置The audio sample rate.
1: 48000 Hz (default)
2: 44100 Hz
3: 16000 Hz
                     * @param SampleRate The audio sample rate.
1: 48000 Hz (default)
2: 44100 Hz
3: 16000 Hz
                     */
                    void SetSampleRate(const uint64_t& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     */
                    bool SampleRateHasBeenSet() const;

                    /**
                     * 获取The number of sound channels.
1: Mono-channel
2: Dual-channel (default)
                     * @return Channel The number of sound channels.
1: Mono-channel
2: Dual-channel (default)
                     */
                    uint64_t GetChannel() const;

                    /**
                     * 设置The number of sound channels.
1: Mono-channel
2: Dual-channel (default)
                     * @param Channel The number of sound channels.
1: Mono-channel
2: Dual-channel (default)
                     */
                    void SetChannel(const uint64_t& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取The audio bitrate (bps). Value range: [32000, 128000]. Default: 64000.
                     * @return BitRate The audio bitrate (bps). Value range: [32000, 128000]. Default: 64000.
                     */
                    uint64_t GetBitRate() const;

                    /**
                     * 设置The audio bitrate (bps). Value range: [32000, 128000]. Default: 64000.
                     * @param BitRate The audio bitrate (bps). Value range: [32000, 128000]. Default: 64000.
                     */
                    void SetBitRate(const uint64_t& _bitRate);

                    /**
                     * 判断参数 BitRate 是否已赋值
                     * @return BitRate 是否已赋值
                     */
                    bool BitRateHasBeenSet() const;

                private:

                    /**
                     * The audio sample rate.
1: 48000 Hz (default)
2: 44100 Hz
3: 16000 Hz
                     */
                    uint64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * The number of sound channels.
1: Mono-channel
2: Dual-channel (default)
                     */
                    uint64_t m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * The audio bitrate (bps). Value range: [32000, 128000]. Default: 64000.
                     */
                    uint64_t m_bitRate;
                    bool m_bitRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_AUDIOPARAMS_H_
