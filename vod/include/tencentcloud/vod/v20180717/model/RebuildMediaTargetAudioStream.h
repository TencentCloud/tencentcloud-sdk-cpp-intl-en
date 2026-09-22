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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REBUILDMEDIATARGETAUDIOSTREAM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REBUILDMEDIATARGETAUDIOSTREAM_H_

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
                * Audio content of the remastering output.
                */
                class RebuildMediaTargetAudioStream : public AbstractModel
                {
                public:
                    RebuildMediaTargetAudioStream();
                    ~RebuildMediaTargetAudioStream() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Audio stream encoding format.
When the outer parameter Container is mp3, optional values:
<li>libmp3lame.</li>
When the outer parameter Container is ogg or flac, optional values:
<li>flac.</li>
When the outer parameter Container is m4a, valid values are:
<li>libfdk_aac;</li>
<li>libmp3lame;</li>
<li>ac3.</li>
When the outer parameter Container is mp4 or flv, valid values are:
<li>libfdk_aac: more suitable for mp4;</li>
<li>libmp3lame: more suitable for flv;</li>
<li>mp2.</li>
When the outer parameter Container is hls, valid values are:
<li>libfdk_aac.</li>
                     * @return Codec Audio stream encoding format.
When the outer parameter Container is mp3, optional values:
<li>libmp3lame.</li>
When the outer parameter Container is ogg or flac, optional values:
<li>flac.</li>
When the outer parameter Container is m4a, valid values are:
<li>libfdk_aac;</li>
<li>libmp3lame;</li>
<li>ac3.</li>
When the outer parameter Container is mp4 or flv, valid values are:
<li>libfdk_aac: more suitable for mp4;</li>
<li>libmp3lame: more suitable for flv;</li>
<li>mp2.</li>
When the outer parameter Container is hls, valid values are:
<li>libfdk_aac.</li>
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置Audio stream encoding format.
When the outer parameter Container is mp3, optional values:
<li>libmp3lame.</li>
When the outer parameter Container is ogg or flac, optional values:
<li>flac.</li>
When the outer parameter Container is m4a, valid values are:
<li>libfdk_aac;</li>
<li>libmp3lame;</li>
<li>ac3.</li>
When the outer parameter Container is mp4 or flv, valid values are:
<li>libfdk_aac: more suitable for mp4;</li>
<li>libmp3lame: more suitable for flv;</li>
<li>mp2.</li>
When the outer parameter Container is hls, valid values are:
<li>libfdk_aac.</li>
                     * @param _codec Audio stream encoding format.
When the outer parameter Container is mp3, optional values:
<li>libmp3lame.</li>
When the outer parameter Container is ogg or flac, optional values:
<li>flac.</li>
When the outer parameter Container is m4a, valid values are:
<li>libfdk_aac;</li>
<li>libmp3lame;</li>
<li>ac3.</li>
When the outer parameter Container is mp4 or flv, valid values are:
<li>libfdk_aac: more suitable for mp4;</li>
<li>libmp3lame: more suitable for flv;</li>
<li>mp2.</li>
When the outer parameter Container is hls, valid values are:
<li>libfdk_aac.</li>
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
                     * 获取Bitrate of the audio stream. Value range: 0 and [26, 256]. Unit: kbps.
When the value is 0, VOD sets the bitrate automatically.
                     * @return Bitrate Bitrate of the audio stream. Value range: 0 and [26, 256]. Unit: kbps.
When the value is 0, VOD sets the bitrate automatically.
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置Bitrate of the audio stream. Value range: 0 and [26, 256]. Unit: kbps.
When the value is 0, VOD sets the bitrate automatically.
                     * @param _bitrate Bitrate of the audio stream. Value range: 0 and [26, 256]. Unit: kbps.
When the value is 0, VOD sets the bitrate automatically.
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
                     * 获取Sampling rate of the audio stream. Available values:
<li>32000</li>
<li>44100</li>
<li>48000</li>

Unit: Hz.
                     * @return SampleRate Sampling rate of the audio stream. Available values:
<li>32000</li>
<li>44100</li>
<li>48000</li>

Unit: Hz.
                     * 
                     */
                    int64_t GetSampleRate() const;

                    /**
                     * 设置Sampling rate of the audio stream. Available values:
<li>32000</li>
<li>44100</li>
<li>48000</li>

Unit: Hz.
                     * @param _sampleRate Sampling rate of the audio stream. Available values:
<li>32000</li>
<li>44100</li>
<li>48000</li>

Unit: Hz.
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
                     * 获取Audio channel mode. Valid values:
<li>1: single channel.</li>
<li>2: Dual-channel</li>
<li>6: Stereo.</li>

When the media encapsulation format is audio (flac, ogg, mp3, and m4a), the number of channels cannot be set to stereo.
Default value: 2.
                     * @return AudioChannel Audio channel mode. Valid values:
<li>1: single channel.</li>
<li>2: Dual-channel</li>
<li>6: Stereo.</li>

When the media encapsulation format is audio (flac, ogg, mp3, and m4a), the number of channels cannot be set to stereo.
Default value: 2.
                     * 
                     */
                    int64_t GetAudioChannel() const;

                    /**
                     * 设置Audio channel mode. Valid values:
<li>1: single channel.</li>
<li>2: Dual-channel</li>
<li>6: Stereo.</li>

When the media encapsulation format is audio (flac, ogg, mp3, and m4a), the number of channels cannot be set to stereo.
Default value: 2.
                     * @param _audioChannel Audio channel mode. Valid values:
<li>1: single channel.</li>
<li>2: Dual-channel</li>
<li>6: Stereo.</li>

When the media encapsulation format is audio (flac, ogg, mp3, and m4a), the number of channels cannot be set to stereo.
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

                private:

                    /**
                     * Audio stream encoding format.
When the outer parameter Container is mp3, optional values:
<li>libmp3lame.</li>
When the outer parameter Container is ogg or flac, optional values:
<li>flac.</li>
When the outer parameter Container is m4a, valid values are:
<li>libfdk_aac;</li>
<li>libmp3lame;</li>
<li>ac3.</li>
When the outer parameter Container is mp4 or flv, valid values are:
<li>libfdk_aac: more suitable for mp4;</li>
<li>libmp3lame: more suitable for flv;</li>
<li>mp2.</li>
When the outer parameter Container is hls, valid values are:
<li>libfdk_aac.</li>
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * Bitrate of the audio stream. Value range: 0 and [26, 256]. Unit: kbps.
When the value is 0, VOD sets the bitrate automatically.
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * Sampling rate of the audio stream. Available values:
<li>32000</li>
<li>44100</li>
<li>48000</li>

Unit: Hz.
                     */
                    int64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * Audio channel mode. Valid values:
<li>1: single channel.</li>
<li>2: Dual-channel</li>
<li>6: Stereo.</li>

When the media encapsulation format is audio (flac, ogg, mp3, and m4a), the number of channels cannot be set to stereo.
Default value: 2.
                     */
                    int64_t m_audioChannel;
                    bool m_audioChannelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REBUILDMEDIATARGETAUDIOSTREAM_H_
