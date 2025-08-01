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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_AUDIOENCODEPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_AUDIOENCODEPARAMS_H_

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
                * Audio transcoding parameters
                */
                class AudioEncodeParams : public AbstractModel
                {
                public:
                    AudioEncodeParams();
                    ~AudioEncodeParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Audio Sample rate, Value range [48000, 44100], unit is Hz.
                     * @return SampleRate Audio Sample rate, Value range [48000, 44100], unit is Hz.
                     * 
                     */
                    uint64_t GetSampleRate() const;

                    /**
                     * 设置Audio Sample rate, Value range [48000, 44100], unit is Hz.
                     * @param _sampleRate Audio Sample rate, Value range [48000, 44100], unit is Hz.
                     * 
                     */
                    void SetSampleRate(const uint64_t& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     * 
                     */
                    bool SampleRateHasBeenSet() const;

                    /**
                     * 获取Audio Channel number, Value range [1,2], 1 means Audio is Mono-channel, 2 means Audio is Dual-channel.
                     * @return Channel Audio Channel number, Value range [1,2], 1 means Audio is Mono-channel, 2 means Audio is Dual-channel.
                     * 
                     */
                    uint64_t GetChannel() const;

                    /**
                     * 设置Audio Channel number, Value range [1,2], 1 means Audio is Mono-channel, 2 means Audio is Dual-channel.
                     * @param _channel Audio Channel number, Value range [1,2], 1 means Audio is Mono-channel, 2 means Audio is Dual-channel.
                     * 
                     */
                    void SetChannel(const uint64_t& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取Audio Bitrate, Value range [8,500], unit is kbps.
                     * @return BitRate Audio Bitrate, Value range [8,500], unit is kbps.
                     * 
                     */
                    uint64_t GetBitRate() const;

                    /**
                     * 设置Audio Bitrate, Value range [8,500], unit is kbps.
                     * @param _bitRate Audio Bitrate, Value range [8,500], unit is kbps.
                     * 
                     */
                    void SetBitRate(const uint64_t& _bitRate);

                    /**
                     * 判断参数 BitRate 是否已赋值
                     * @return BitRate 是否已赋值
                     * 
                     */
                    bool BitRateHasBeenSet() const;

                private:

                    /**
                     * Audio Sample rate, Value range [48000, 44100], unit is Hz.
                     */
                    uint64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * Audio Channel number, Value range [1,2], 1 means Audio is Mono-channel, 2 means Audio is Dual-channel.
                     */
                    uint64_t m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * Audio Bitrate, Value range [8,500], unit is kbps.
                     */
                    uint64_t m_bitRate;
                    bool m_bitRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_AUDIOENCODEPARAMS_H_
