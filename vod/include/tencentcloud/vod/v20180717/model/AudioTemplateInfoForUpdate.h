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
                     * 获取<p>Audio stream encoding format.<br>When the outer parameter Container is mp3, the valid value is:</p><li>libmp3lame.</li>When the outer parameter Container is ogg or flac, the valid value is:<li>flac.</li>When the outer parameter Container is m4a, the valid values are:<li>libfdk_aac;</li><li>libmp3lame;</li><li>ac3.</li>When the outer parameter Container is mp4 or flv, the valid values are:<li>libfdk_aac: suitable for mp4.</li><li>libmp3lame: suitable for flv.</li><li>mp2.</li>When the outer parameter Container is hls, the valid value is:<li>libfdk_aac.</li>When the outer parameter Format is HLS or MPEG-DASH, the valid value is:<li>libfdk_aac.</li>When the outer parameter Container is wav, the valid value is:<li>pcm16.</li>
                     * @return Codec <p>Audio stream encoding format.<br>When the outer parameter Container is mp3, the valid value is:</p><li>libmp3lame.</li>When the outer parameter Container is ogg or flac, the valid value is:<li>flac.</li>When the outer parameter Container is m4a, the valid values are:<li>libfdk_aac;</li><li>libmp3lame;</li><li>ac3.</li>When the outer parameter Container is mp4 or flv, the valid values are:<li>libfdk_aac: suitable for mp4.</li><li>libmp3lame: suitable for flv.</li><li>mp2.</li>When the outer parameter Container is hls, the valid value is:<li>libfdk_aac.</li>When the outer parameter Format is HLS or MPEG-DASH, the valid value is:<li>libfdk_aac.</li>When the outer parameter Container is wav, the valid value is:<li>pcm16.</li>
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置<p>Audio stream encoding format.<br>When the outer parameter Container is mp3, the valid value is:</p><li>libmp3lame.</li>When the outer parameter Container is ogg or flac, the valid value is:<li>flac.</li>When the outer parameter Container is m4a, the valid values are:<li>libfdk_aac;</li><li>libmp3lame;</li><li>ac3.</li>When the outer parameter Container is mp4 or flv, the valid values are:<li>libfdk_aac: suitable for mp4.</li><li>libmp3lame: suitable for flv.</li><li>mp2.</li>When the outer parameter Container is hls, the valid value is:<li>libfdk_aac.</li>When the outer parameter Format is HLS or MPEG-DASH, the valid value is:<li>libfdk_aac.</li>When the outer parameter Container is wav, the valid value is:<li>pcm16.</li>
                     * @param _codec <p>Audio stream encoding format.<br>When the outer parameter Container is mp3, the valid value is:</p><li>libmp3lame.</li>When the outer parameter Container is ogg or flac, the valid value is:<li>flac.</li>When the outer parameter Container is m4a, the valid values are:<li>libfdk_aac;</li><li>libmp3lame;</li><li>ac3.</li>When the outer parameter Container is mp4 or flv, the valid values are:<li>libfdk_aac: suitable for mp4.</li><li>libmp3lame: suitable for flv.</li><li>mp2.</li>When the outer parameter Container is hls, the valid value is:<li>libfdk_aac.</li>When the outer parameter Format is HLS or MPEG-DASH, the valid value is:<li>libfdk_aac.</li>When the outer parameter Container is wav, the valid value is:<li>pcm16.</li>
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
                     * 获取<p>Audio stream bitrate, in kbps. Value range: 0 and [26, 256]. When the value is 0, it means the bitrate is set automatically by VOD.</p>
                     * @return Bitrate <p>Audio stream bitrate, in kbps. Value range: 0 and [26, 256]. When the value is 0, it means the bitrate is set automatically by VOD.</p>
                     * 
                     */
                    uint64_t GetBitrate() const;

                    /**
                     * 设置<p>Audio stream bitrate, in kbps. Value range: 0 and [26, 256]. When the value is 0, it means the bitrate is set automatically by VOD.</p>
                     * @param _bitrate <p>Audio stream bitrate, in kbps. Value range: 0 and [26, 256]. When the value is 0, it means the bitrate is set automatically by VOD.</p>
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
                     * 获取<p>Sampling rate of the audio stream. Available values:</p><li>16000. Available only when Codec is pcm16.</li><li>32000</li><li>44100</li><li>48000</li>Unit: Hz.
                     * @return SampleRate <p>Sampling rate of the audio stream. Available values:</p><li>16000. Available only when Codec is pcm16.</li><li>32000</li><li>44100</li><li>48000</li>Unit: Hz.
                     * 
                     */
                    uint64_t GetSampleRate() const;

                    /**
                     * 设置<p>Sampling rate of the audio stream. Available values:</p><li>16000. Available only when Codec is pcm16.</li><li>32000</li><li>44100</li><li>48000</li>Unit: Hz.
                     * @param _sampleRate <p>Sampling rate of the audio stream. Available values:</p><li>16000. Available only when Codec is pcm16.</li><li>32000</li><li>44100</li><li>48000</li>Unit: Hz.
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
                     * 获取<p>Audio channel. Available values:</p><li>1: Single channel.</li><li>2: Two channels.</li><li>6: Stereo.</li><li>0: The number of audio channels remains the same as the original audio.</li>When the media container format is an audio format (flac, ogg, mp3, m4a), the number of audio channels cannot be set to stereo.
                     * @return AudioChannel <p>Audio channel. Available values:</p><li>1: Single channel.</li><li>2: Two channels.</li><li>6: Stereo.</li><li>0: The number of audio channels remains the same as the original audio.</li>When the media container format is an audio format (flac, ogg, mp3, m4a), the number of audio channels cannot be set to stereo.
                     * 
                     */
                    int64_t GetAudioChannel() const;

                    /**
                     * 设置<p>Audio channel. Available values:</p><li>1: Single channel.</li><li>2: Two channels.</li><li>6: Stereo.</li><li>0: The number of audio channels remains the same as the original audio.</li>When the media container format is an audio format (flac, ogg, mp3, m4a), the number of audio channels cannot be set to stereo.
                     * @param _audioChannel <p>Audio channel. Available values:</p><li>1: Single channel.</li><li>2: Two channels.</li><li>6: Stereo.</li><li>0: The number of audio channels remains the same as the original audio.</li>When the media container format is an audio format (flac, ogg, mp3, m4a), the number of audio channels cannot be set to stereo.
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
                     * 获取<p>Specifies the retained audio tracks for output. All source tracks are retained. </p><p>This parameter is valid only when specified in the OverrideParameter parameter and is disabled in other cases.</p>
                     * @return StreamSelects <p>Specifies the retained audio tracks for output. All source tracks are retained. </p><p>This parameter is valid only when specified in the OverrideParameter parameter and is disabled in other cases.</p>
                     * 
                     */
                    std::vector<int64_t> GetStreamSelects() const;

                    /**
                     * 设置<p>Specifies the retained audio tracks for output. All source tracks are retained. </p><p>This parameter is valid only when specified in the OverrideParameter parameter and is disabled in other cases.</p>
                     * @param _streamSelects <p>Specifies the retained audio tracks for output. All source tracks are retained. </p><p>This parameter is valid only when specified in the OverrideParameter parameter and is disabled in other cases.</p>
                     * 
                     */
                    void SetStreamSelects(const std::vector<int64_t>& _streamSelects);

                    /**
                     * 判断参数 StreamSelects 是否已赋值
                     * @return StreamSelects 是否已赋值
                     * 
                     */
                    bool StreamSelectsHasBeenSet() const;

                private:

                    /**
                     * <p>Audio stream encoding format.<br>When the outer parameter Container is mp3, the valid value is:</p><li>libmp3lame.</li>When the outer parameter Container is ogg or flac, the valid value is:<li>flac.</li>When the outer parameter Container is m4a, the valid values are:<li>libfdk_aac;</li><li>libmp3lame;</li><li>ac3.</li>When the outer parameter Container is mp4 or flv, the valid values are:<li>libfdk_aac: suitable for mp4.</li><li>libmp3lame: suitable for flv.</li><li>mp2.</li>When the outer parameter Container is hls, the valid value is:<li>libfdk_aac.</li>When the outer parameter Format is HLS or MPEG-DASH, the valid value is:<li>libfdk_aac.</li>When the outer parameter Container is wav, the valid value is:<li>pcm16.</li>
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * <p>Audio stream bitrate, in kbps. Value range: 0 and [26, 256]. When the value is 0, it means the bitrate is set automatically by VOD.</p>
                     */
                    uint64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * <p>Sampling rate of the audio stream. Available values:</p><li>16000. Available only when Codec is pcm16.</li><li>32000</li><li>44100</li><li>48000</li>Unit: Hz.
                     */
                    uint64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * <p>Audio channel. Available values:</p><li>1: Single channel.</li><li>2: Two channels.</li><li>6: Stereo.</li><li>0: The number of audio channels remains the same as the original audio.</li>When the media container format is an audio format (flac, ogg, mp3, m4a), the number of audio channels cannot be set to stereo.
                     */
                    int64_t m_audioChannel;
                    bool m_audioChannelHasBeenSet;

                    /**
                     * <p>Specifies the retained audio tracks for output. All source tracks are retained. </p><p>This parameter is valid only when specified in the OverrideParameter parameter and is disabled in other cases.</p>
                     */
                    std::vector<int64_t> m_streamSelects;
                    bool m_streamSelectsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOTEMPLATEINFOFORUPDATE_H_
