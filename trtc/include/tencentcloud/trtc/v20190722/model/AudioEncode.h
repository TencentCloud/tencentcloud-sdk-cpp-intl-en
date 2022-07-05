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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_AUDIOENCODE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_AUDIOENCODE_H_

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
                * The audio encoding parameters.
                */
                class AudioEncode : public AbstractModel
                {
                public:
                    AudioEncode();
                    ~AudioEncode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The audio sample rate (Hz). Valid values: 48000, 44100, 32000, 24000, 16000, 8000.
                     * @return SampleRate The audio sample rate (Hz). Valid values: 48000, 44100, 32000, 24000, 16000, 8000.
                     */
                    uint64_t GetSampleRate() const;

                    /**
                     * 设置The audio sample rate (Hz). Valid values: 48000, 44100, 32000, 24000, 16000, 8000.
                     * @param SampleRate The audio sample rate (Hz). Valid values: 48000, 44100, 32000, 24000, 16000, 8000.
                     */
                    void SetSampleRate(const uint64_t& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     */
                    bool SampleRateHasBeenSet() const;

                    /**
                     * 获取The number of sound channels. Valid values: 1 (mono), 2 (dual).
                     * @return Channel The number of sound channels. Valid values: 1 (mono), 2 (dual).
                     */
                    uint64_t GetChannel() const;

                    /**
                     * 设置The number of sound channels. Valid values: 1 (mono), 2 (dual).
                     * @param Channel The number of sound channels. Valid values: 1 (mono), 2 (dual).
                     */
                    void SetChannel(const uint64_t& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取The audio bitrate (Kbps). Value range: 8-500.
                     * @return BitRate The audio bitrate (Kbps). Value range: 8-500.
                     */
                    uint64_t GetBitRate() const;

                    /**
                     * 设置The audio bitrate (Kbps). Value range: 8-500.
                     * @param BitRate The audio bitrate (Kbps). Value range: 8-500.
                     */
                    void SetBitRate(const uint64_t& _bitRate);

                    /**
                     * 判断参数 BitRate 是否已赋值
                     * @return BitRate 是否已赋值
                     */
                    bool BitRateHasBeenSet() const;

                    /**
                     * 获取The audio codec. Valid values: 0 (LC-AAC), 1 (HE-AAC), 2 (HE-AACv2). The default value is 0. If this parameter is set to 2, `Channel` must be 2. If it is set to 1 or 2, `SampleRate` can only be 48000, 44100, 32000, 24000, or 16000.
                     * @return Codec The audio codec. Valid values: 0 (LC-AAC), 1 (HE-AAC), 2 (HE-AACv2). The default value is 0. If this parameter is set to 2, `Channel` must be 2. If it is set to 1 or 2, `SampleRate` can only be 48000, 44100, 32000, 24000, or 16000.
                     */
                    uint64_t GetCodec() const;

                    /**
                     * 设置The audio codec. Valid values: 0 (LC-AAC), 1 (HE-AAC), 2 (HE-AACv2). The default value is 0. If this parameter is set to 2, `Channel` must be 2. If it is set to 1 or 2, `SampleRate` can only be 48000, 44100, 32000, 24000, or 16000.
                     * @param Codec The audio codec. Valid values: 0 (LC-AAC), 1 (HE-AAC), 2 (HE-AACv2). The default value is 0. If this parameter is set to 2, `Channel` must be 2. If it is set to 1 or 2, `SampleRate` can only be 48000, 44100, 32000, 24000, or 16000.
                     */
                    void SetCodec(const uint64_t& _codec);

                    /**
                     * 判断参数 Codec 是否已赋值
                     * @return Codec 是否已赋值
                     */
                    bool CodecHasBeenSet() const;

                private:

                    /**
                     * The audio sample rate (Hz). Valid values: 48000, 44100, 32000, 24000, 16000, 8000.
                     */
                    uint64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * The number of sound channels. Valid values: 1 (mono), 2 (dual).
                     */
                    uint64_t m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * The audio bitrate (Kbps). Value range: 8-500.
                     */
                    uint64_t m_bitRate;
                    bool m_bitRateHasBeenSet;

                    /**
                     * The audio codec. Valid values: 0 (LC-AAC), 1 (HE-AAC), 2 (HE-AACv2). The default value is 0. If this parameter is set to 2, `Channel` must be 2. If it is set to 1 or 2, `SampleRate` can only be 48000, 44100, 32000, 24000, or 16000.
                     */
                    uint64_t m_codec;
                    bool m_codecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_AUDIOENCODE_H_
