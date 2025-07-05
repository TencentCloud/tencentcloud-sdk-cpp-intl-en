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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAUDIOSTREAMITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAUDIOSTREAMITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Information of the audio stream in a VOD file
                */
                class MediaAudioStreamItem : public AbstractModel
                {
                public:
                    MediaAudioStreamItem();
                    ~MediaAudioStreamItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Bitrate of an audio stream in bps.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Bitrate Bitrate of an audio stream in bps.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置Bitrate of an audio stream in bps.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bitrate Bitrate of an audio stream in bps.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBitrate(const int64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取Sample rate of an audio stream in Hz.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SamplingRate Sample rate of an audio stream in Hz.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSamplingRate() const;

                    /**
                     * 设置Sample rate of an audio stream in Hz.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _samplingRate Sample rate of an audio stream in Hz.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSamplingRate(const int64_t& _samplingRate);

                    /**
                     * 判断参数 SamplingRate 是否已赋值
                     * @return SamplingRate 是否已赋值
                     * 
                     */
                    bool SamplingRateHasBeenSet() const;

                    /**
                     * 获取Audio stream codec, such as aac.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Codec Audio stream codec, such as aac.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置Audio stream codec, such as aac.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _codec Audio stream codec, such as aac.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCodec(const std::string& _codec);

                    /**
                     * 判断参数 Codec 是否已赋值
                     * @return Codec 是否已赋值
                     * 
                     */
                    bool CodecHasBeenSet() const;

                    /**
                     * 获取Number of sound channels, e.g., 2
Note: this field may return `null`, indicating that no valid value was found.
                     * @return Channel Number of sound channels, e.g., 2
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetChannel() const;

                    /**
                     * 设置Number of sound channels, e.g., 2
Note: this field may return `null`, indicating that no valid value was found.
                     * @param _channel Number of sound channels, e.g., 2
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetChannel(const int64_t& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                private:

                    /**
                     * Bitrate of an audio stream in bps.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * Sample rate of an audio stream in Hz.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_samplingRate;
                    bool m_samplingRateHasBeenSet;

                    /**
                     * Audio stream codec, such as aac.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * Number of sound channels, e.g., 2
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    int64_t m_channel;
                    bool m_channelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAUDIOSTREAMITEM_H_
