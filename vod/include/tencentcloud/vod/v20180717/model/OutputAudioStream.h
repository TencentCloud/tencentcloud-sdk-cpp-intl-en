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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_OUTPUTAUDIOSTREAM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_OUTPUTAUDIOSTREAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Information of output audio stream
                */
                class OutputAudioStream : public AbstractModel
                {
                public:
                    OutputAudioStream();
                    ~OutputAudioStream() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Audio stream encoder. Valid values:
<li>libfdk_aac: suitable for mp4 files.</li>
Default value: libfdk_aac.
                     * @return Codec Audio stream encoder. Valid values:
<li>libfdk_aac: suitable for mp4 files.</li>
Default value: libfdk_aac.
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置Audio stream encoder. Valid values:
<li>libfdk_aac: suitable for mp4 files.</li>
Default value: libfdk_aac.
                     * @param _codec Audio stream encoder. Valid values:
<li>libfdk_aac: suitable for mp4 files.</li>
Default value: libfdk_aac.
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
                     * 获取Audio stream sample rate. Valid values:
<li>16,000</li>
<li>32,000</li>
<li>44,100</li>
<li>48,000</li>
In Hz.
Default value: 16,000.
                     * @return SampleRate Audio stream sample rate. Valid values:
<li>16,000</li>
<li>32,000</li>
<li>44,100</li>
<li>48,000</li>
In Hz.
Default value: 16,000.
                     * 
                     */
                    int64_t GetSampleRate() const;

                    /**
                     * 设置Audio stream sample rate. Valid values:
<li>16,000</li>
<li>32,000</li>
<li>44,100</li>
<li>48,000</li>
In Hz.
Default value: 16,000.
                     * @param _sampleRate Audio stream sample rate. Valid values:
<li>16,000</li>
<li>32,000</li>
<li>44,100</li>
<li>48,000</li>
In Hz.
Default value: 16,000.
                     * 
                     */
                    void SetSampleRate(const int64_t& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     * 
                     */
                    bool SampleRateHasBeenSet() const;

                    /**
                     * 获取Number of sound channels. Valid values:
<li>1: mono.</li>
<li>2: dual</li>
Default value: 2.
                     * @return AudioChannel Number of sound channels. Valid values:
<li>1: mono.</li>
<li>2: dual</li>
Default value: 2.
                     * 
                     */
                    int64_t GetAudioChannel() const;

                    /**
                     * 设置Number of sound channels. Valid values:
<li>1: mono.</li>
<li>2: dual</li>
Default value: 2.
                     * @param _audioChannel Number of sound channels. Valid values:
<li>1: mono.</li>
<li>2: dual</li>
Default value: 2.
                     * 
                     */
                    void SetAudioChannel(const int64_t& _audioChannel);

                    /**
                     * 判断参数 AudioChannel 是否已赋值
                     * @return AudioChannel 是否已赋值
                     * 
                     */
                    bool AudioChannelHasBeenSet() const;

                    /**
                     * 获取The bit rate of the audio stream, value range: 0 and [26, 256], unit: kbps. 
When the value is 0, the audio bitrate will be automatically set.
                     * @return Bitrate The bit rate of the audio stream, value range: 0 and [26, 256], unit: kbps. 
When the value is 0, the audio bitrate will be automatically set.
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置The bit rate of the audio stream, value range: 0 and [26, 256], unit: kbps. 
When the value is 0, the audio bitrate will be automatically set.
                     * @param _bitrate The bit rate of the audio stream, value range: 0 and [26, 256], unit: kbps. 
When the value is 0, the audio bitrate will be automatically set.
                     * 
                     */
                    void SetBitrate(const int64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                private:

                    /**
                     * Audio stream encoder. Valid values:
<li>libfdk_aac: suitable for mp4 files.</li>
Default value: libfdk_aac.
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * Audio stream sample rate. Valid values:
<li>16,000</li>
<li>32,000</li>
<li>44,100</li>
<li>48,000</li>
In Hz.
Default value: 16,000.
                     */
                    int64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * Number of sound channels. Valid values:
<li>1: mono.</li>
<li>2: dual</li>
Default value: 2.
                     */
                    int64_t m_audioChannel;
                    bool m_audioChannelHasBeenSet;

                    /**
                     * The bit rate of the audio stream, value range: 0 and [26, 256], unit: kbps. 
When the value is 0, the audio bitrate will be automatically set.
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_OUTPUTAUDIOSTREAM_H_
