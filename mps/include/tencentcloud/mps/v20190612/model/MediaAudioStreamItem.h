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
                * Audio stream information of VOD files
                */
                class MediaAudioStreamItem : public AbstractModel
                {
                public:
                    MediaAudioStreamItem();
                    ~MediaAudioStreamItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Bitrate of the audio stream. Unit: bps.
                     * @return Bitrate Bitrate of the audio stream. Unit: bps.
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置Bitrate of the audio stream. Unit: bps.
                     * @param _bitrate Bitrate of the audio stream. Unit: bps.
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
                     * 获取Sampling rate of the audio stream. Unit: hz.
                     * @return SamplingRate Sampling rate of the audio stream. Unit: hz.
                     * 
                     */
                    int64_t GetSamplingRate() const;

                    /**
                     * 设置Sampling rate of the audio stream. Unit: hz.
                     * @param _samplingRate Sampling rate of the audio stream. Unit: hz.
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
                     * 获取Audio stream encoding format, for example, aac.
                     * @return Codec Audio stream encoding format, for example, aac.
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置Audio stream encoding format, for example, aac.
                     * @param _codec Audio stream encoding format, for example, aac.
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
                     * 获取
                     * @return Channel 
                     * 
                     */
                    int64_t GetChannel() const;

                    /**
                     * 设置
                     * @param _channel 
                     * 
                     */
                    void SetChannel(const int64_t& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取
                     * @return Codecs 
                     * 
                     */
                    std::string GetCodecs() const;

                    /**
                     * 设置
                     * @param _codecs 
                     * 
                     */
                    void SetCodecs(const std::string& _codecs);

                    /**
                     * 判断参数 Codecs 是否已赋值
                     * @return Codecs 是否已赋值
                     * 
                     */
                    bool CodecsHasBeenSet() const;

                    /**
                     * 获取
                     * @return Loudness 
                     * 
                     */
                    double GetLoudness() const;

                    /**
                     * 设置
                     * @param _loudness 
                     * 
                     */
                    void SetLoudness(const double& _loudness);

                    /**
                     * 判断参数 Loudness 是否已赋值
                     * @return Loudness 是否已赋值
                     * 
                     */
                    bool LoudnessHasBeenSet() const;

                private:

                    /**
                     * Bitrate of the audio stream. Unit: bps.
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * Sampling rate of the audio stream. Unit: hz.
                     */
                    int64_t m_samplingRate;
                    bool m_samplingRateHasBeenSet;

                    /**
                     * Audio stream encoding format, for example, aac.
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_codecs;
                    bool m_codecsHasBeenSet;

                    /**
                     * 
                     */
                    double m_loudness;
                    bool m_loudnessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAUDIOSTREAMITEM_H_
