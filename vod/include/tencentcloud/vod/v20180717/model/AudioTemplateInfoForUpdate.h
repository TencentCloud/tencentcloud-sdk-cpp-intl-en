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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOTEMPLATEINFOFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOTEMPLATEINFOFORUPDATE_H_

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
                * Audio stream configuration parameter
                */
                class AudioTemplateInfoForUpdate : public AbstractModel
                {
                public:
                    AudioTemplateInfoForUpdate();
                    ~AudioTemplateInfoForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The audio codec.
If `Container` is `mp3`, the valid value is:
<li>`libmp3lame`</li>
If `Container` is `ogg` or `flac`, the valid value is:
<li>`flac`</li>
If `Container` is `m4a`, the valid values are:
<li>`libfdk_aac`</li>
<li>`libmp3lame`</li>
<li>`ac3`</li>
If `Container` is `mp4` or `flv`, the valid values are:
<li>`libfdk_aac` (Recommended for MP4)</li>
<li>`libmp3lame` (Recommended for FLV)</li>
<li>`mp2`</li>
If `Container` is `hls`, the valid value is:
<li>`libfdk_aac`</li>
If `Format` is `HLS` or `MPEG-DASH`, the valid value is:
<li>`libfdk_aac`</li>
If `Container` is `wav`, the valid value is:
<li>`pcm16`</li>
                     * @return Codec The audio codec.
If `Container` is `mp3`, the valid value is:
<li>`libmp3lame`</li>
If `Container` is `ogg` or `flac`, the valid value is:
<li>`flac`</li>
If `Container` is `m4a`, the valid values are:
<li>`libfdk_aac`</li>
<li>`libmp3lame`</li>
<li>`ac3`</li>
If `Container` is `mp4` or `flv`, the valid values are:
<li>`libfdk_aac` (Recommended for MP4)</li>
<li>`libmp3lame` (Recommended for FLV)</li>
<li>`mp2`</li>
If `Container` is `hls`, the valid value is:
<li>`libfdk_aac`</li>
If `Format` is `HLS` or `MPEG-DASH`, the valid value is:
<li>`libfdk_aac`</li>
If `Container` is `wav`, the valid value is:
<li>`pcm16`</li>
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置The audio codec.
If `Container` is `mp3`, the valid value is:
<li>`libmp3lame`</li>
If `Container` is `ogg` or `flac`, the valid value is:
<li>`flac`</li>
If `Container` is `m4a`, the valid values are:
<li>`libfdk_aac`</li>
<li>`libmp3lame`</li>
<li>`ac3`</li>
If `Container` is `mp4` or `flv`, the valid values are:
<li>`libfdk_aac` (Recommended for MP4)</li>
<li>`libmp3lame` (Recommended for FLV)</li>
<li>`mp2`</li>
If `Container` is `hls`, the valid value is:
<li>`libfdk_aac`</li>
If `Format` is `HLS` or `MPEG-DASH`, the valid value is:
<li>`libfdk_aac`</li>
If `Container` is `wav`, the valid value is:
<li>`pcm16`</li>
                     * @param _codec The audio codec.
If `Container` is `mp3`, the valid value is:
<li>`libmp3lame`</li>
If `Container` is `ogg` or `flac`, the valid value is:
<li>`flac`</li>
If `Container` is `m4a`, the valid values are:
<li>`libfdk_aac`</li>
<li>`libmp3lame`</li>
<li>`ac3`</li>
If `Container` is `mp4` or `flv`, the valid values are:
<li>`libfdk_aac` (Recommended for MP4)</li>
<li>`libmp3lame` (Recommended for FLV)</li>
<li>`mp2`</li>
If `Container` is `hls`, the valid value is:
<li>`libfdk_aac`</li>
If `Format` is `HLS` or `MPEG-DASH`, the valid value is:
<li>`libfdk_aac`</li>
If `Container` is `wav`, the valid value is:
<li>`pcm16`</li>
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
                     * 获取Audio stream bitrate in Kbps. Value range: 0 and [26, 256]. If the value is 0, the bitrate of the audio stream will be the same as that of the original audio.
                     * @return Bitrate Audio stream bitrate in Kbps. Value range: 0 and [26, 256]. If the value is 0, the bitrate of the audio stream will be the same as that of the original audio.
                     * 
                     */
                    uint64_t GetBitrate() const;

                    /**
                     * 设置Audio stream bitrate in Kbps. Value range: 0 and [26, 256]. If the value is 0, the bitrate of the audio stream will be the same as that of the original audio.
                     * @param _bitrate Audio stream bitrate in Kbps. Value range: 0 and [26, 256]. If the value is 0, the bitrate of the audio stream will be the same as that of the original audio.
                     * 
                     */
                    void SetBitrate(const uint64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取The audio sample rate. Valid values:
<li>`16000` (valid only if `Codec` is `pcm16`)</li>
<li>`32000`</li>
<li>`44100`</li>
<li>`48000`</li>
Unit: Hz.
                     * @return SampleRate The audio sample rate. Valid values:
<li>`16000` (valid only if `Codec` is `pcm16`)</li>
<li>`32000`</li>
<li>`44100`</li>
<li>`48000`</li>
Unit: Hz.
                     * 
                     */
                    uint64_t GetSampleRate() const;

                    /**
                     * 设置The audio sample rate. Valid values:
<li>`16000` (valid only if `Codec` is `pcm16`)</li>
<li>`32000`</li>
<li>`44100`</li>
<li>`48000`</li>
Unit: Hz.
                     * @param _sampleRate The audio sample rate. Valid values:
<li>`16000` (valid only if `Codec` is `pcm16`)</li>
<li>`32000`</li>
<li>`44100`</li>
<li>`48000`</li>
Unit: Hz.
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
                     * 获取Audio channel system. Valid values:
<li>1: mono-channel</li>
<li>2: dual-channel</li>
<li>6: stereo</li>
You cannot set the sound channel as stereo for media files in container formats for audios (FLAC, OGG, MP3, M4A).
                     * @return AudioChannel Audio channel system. Valid values:
<li>1: mono-channel</li>
<li>2: dual-channel</li>
<li>6: stereo</li>
You cannot set the sound channel as stereo for media files in container formats for audios (FLAC, OGG, MP3, M4A).
                     * 
                     */
                    int64_t GetAudioChannel() const;

                    /**
                     * 设置Audio channel system. Valid values:
<li>1: mono-channel</li>
<li>2: dual-channel</li>
<li>6: stereo</li>
You cannot set the sound channel as stereo for media files in container formats for audios (FLAC, OGG, MP3, M4A).
                     * @param _audioChannel Audio channel system. Valid values:
<li>1: mono-channel</li>
<li>2: dual-channel</li>
<li>6: stereo</li>
You cannot set the sound channel as stereo for media files in container formats for audios (FLAC, OGG, MP3, M4A).
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
                     * The audio codec.
If `Container` is `mp3`, the valid value is:
<li>`libmp3lame`</li>
If `Container` is `ogg` or `flac`, the valid value is:
<li>`flac`</li>
If `Container` is `m4a`, the valid values are:
<li>`libfdk_aac`</li>
<li>`libmp3lame`</li>
<li>`ac3`</li>
If `Container` is `mp4` or `flv`, the valid values are:
<li>`libfdk_aac` (Recommended for MP4)</li>
<li>`libmp3lame` (Recommended for FLV)</li>
<li>`mp2`</li>
If `Container` is `hls`, the valid value is:
<li>`libfdk_aac`</li>
If `Format` is `HLS` or `MPEG-DASH`, the valid value is:
<li>`libfdk_aac`</li>
If `Container` is `wav`, the valid value is:
<li>`pcm16`</li>
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * Audio stream bitrate in Kbps. Value range: 0 and [26, 256]. If the value is 0, the bitrate of the audio stream will be the same as that of the original audio.
                     */
                    uint64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * The audio sample rate. Valid values:
<li>`16000` (valid only if `Codec` is `pcm16`)</li>
<li>`32000`</li>
<li>`44100`</li>
<li>`48000`</li>
Unit: Hz.
                     */
                    uint64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * Audio channel system. Valid values:
<li>1: mono-channel</li>
<li>2: dual-channel</li>
<li>6: stereo</li>
You cannot set the sound channel as stereo for media files in container formats for audios (FLAC, OGG, MP3, M4A).
                     */
                    int64_t m_audioChannel;
                    bool m_audioChannelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOTEMPLATEINFOFORUPDATE_H_
