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
                * Output audio stream information
                */
                class OutputAudioStream : public AbstractModel
                {
                public:
                    OutputAudioStream();
                    ~OutputAudioStream() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Encoding format for audio streams. Optional values:
<li>libfdk_aac: suitable for mp4 files.</li>
Default value: libfdk_aac.
                     * @return Codec Encoding format for audio streams. Optional values:
<li>libfdk_aac: suitable for mp4 files.</li>
Default value: libfdk_aac.
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置Encoding format for audio streams. Optional values:
<li>libfdk_aac: suitable for mp4 files.</li>
Default value: libfdk_aac.
                     * @param _codec Encoding format for audio streams. Optional values:
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
                     * 获取Sampling rate of the audio stream. Available values:
<li>16000</li>
<li>32000</li>
<li>44100</li>
<li>48000</li>
Unit: Hz.
Default value: 16000.
                     * @return SampleRate Sampling rate of the audio stream. Available values:
<li>16000</li>
<li>32000</li>
<li>44100</li>
<li>48000</li>
Unit: Hz.
Default value: 16000.
                     * 
                     */
                    int64_t GetSampleRate() const;

                    /**
                     * 设置Sampling rate of the audio stream. Available values:
<li>16000</li>
<li>32000</li>
<li>44100</li>
<li>48000</li>
Unit: Hz.
Default value: 16000.
                     * @param _sampleRate Sampling rate of the audio stream. Available values:
<li>16000</li>
<li>32000</li>
<li>44100</li>
<li>48000</li>
Unit: Hz.
Default value: 16000.
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
                     * 获取Number of audio channels. Available values:
<li>1: mono.</li>
<li>2: stereo.</li>
Default value: 2.
                     * @return AudioChannel Number of audio channels. Available values:
<li>1: mono.</li>
<li>2: stereo.</li>
Default value: 2.
                     * 
                     */
                    int64_t GetAudioChannel() const;

                    /**
                     * 设置Number of audio channels. Available values:
<li>1: mono.</li>
<li>2: stereo.</li>
Default value: 2.
                     * @param _audioChannel Number of audio channels. Available values:
<li>1: mono.</li>
<li>2: stereo.</li>
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
                     * 获取Audio stream bitrate. Value range: 0 and [26, 256]. Unit: kbps.
When the value is 0, the audio bitrate is set automatically.
                     * @return Bitrate Audio stream bitrate. Value range: 0 and [26, 256]. Unit: kbps.
When the value is 0, the audio bitrate is set automatically.
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置Audio stream bitrate. Value range: 0 and [26, 256]. Unit: kbps.
When the value is 0, the audio bitrate is set automatically.
                     * @param _bitrate Audio stream bitrate. Value range: 0 and [26, 256]. Unit: kbps.
When the value is 0, the audio bitrate is set automatically.
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
                     * Encoding format for audio streams. Optional values:
<li>libfdk_aac: suitable for mp4 files.</li>
Default value: libfdk_aac.
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * Sampling rate of the audio stream. Available values:
<li>16000</li>
<li>32000</li>
<li>44100</li>
<li>48000</li>
Unit: Hz.
Default value: 16000.
                     */
                    int64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * Number of audio channels. Available values:
<li>1: mono.</li>
<li>2: stereo.</li>
Default value: 2.
                     */
                    int64_t m_audioChannel;
                    bool m_audioChannelHasBeenSet;

                    /**
                     * Audio stream bitrate. Value range: 0 and [26, 256]. Unit: kbps.
When the value is 0, the audio bitrate is set automatically.
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_OUTPUTAUDIOSTREAM_H_
