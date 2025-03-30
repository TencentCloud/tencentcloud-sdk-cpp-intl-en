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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AUDIOTEMPLATEINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AUDIOTEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AudioTrackChannelInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Audio stream configuration parameter
                */
                class AudioTemplateInfo : public AbstractModel
                {
                public:
                    AudioTemplateInfo();
                    ~AudioTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Audio stream encoding format.
When audio transcoding is not needed, the value is:
<li>copy.</li>
When the outer parameter Container is mp3, the value is:
<li>mp3.</li>
When the outer parameter Container is ogg or flac, the value is:
<li>flac.</li>
When the outer parameter Container is m4a, valid values are:
<li>aac;</li>
<li>ac3.</li>
When the outer parameter Container is mp4 or flv, valid values are:
<li>aac: more suitable for mp4;</li>
<li>mp3: more suitable for flv;</li>
<li>mp2.</li>
When the outer parameter Container is hls, valid values are:
<li>aac;</li>
<li>mp3.</li>
                     * @return Codec Audio stream encoding format.
When audio transcoding is not needed, the value is:
<li>copy.</li>
When the outer parameter Container is mp3, the value is:
<li>mp3.</li>
When the outer parameter Container is ogg or flac, the value is:
<li>flac.</li>
When the outer parameter Container is m4a, valid values are:
<li>aac;</li>
<li>ac3.</li>
When the outer parameter Container is mp4 or flv, valid values are:
<li>aac: more suitable for mp4;</li>
<li>mp3: more suitable for flv;</li>
<li>mp2.</li>
When the outer parameter Container is hls, valid values are:
<li>aac;</li>
<li>mp3.</li>
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置Audio stream encoding format.
When audio transcoding is not needed, the value is:
<li>copy.</li>
When the outer parameter Container is mp3, the value is:
<li>mp3.</li>
When the outer parameter Container is ogg or flac, the value is:
<li>flac.</li>
When the outer parameter Container is m4a, valid values are:
<li>aac;</li>
<li>ac3.</li>
When the outer parameter Container is mp4 or flv, valid values are:
<li>aac: more suitable for mp4;</li>
<li>mp3: more suitable for flv;</li>
<li>mp2.</li>
When the outer parameter Container is hls, valid values are:
<li>aac;</li>
<li>mp3.</li>
                     * @param _codec Audio stream encoding format.
When audio transcoding is not needed, the value is:
<li>copy.</li>
When the outer parameter Container is mp3, the value is:
<li>mp3.</li>
When the outer parameter Container is ogg or flac, the value is:
<li>flac.</li>
When the outer parameter Container is m4a, valid values are:
<li>aac;</li>
<li>ac3.</li>
When the outer parameter Container is mp4 or flv, valid values are:
<li>aac: more suitable for mp4;</li>
<li>mp3: more suitable for flv;</li>
<li>mp2.</li>
When the outer parameter Container is hls, valid values are:
<li>aac;</li>
<li>mp3.</li>
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
                     * 获取Audio stream bitrate in Kbps. Value range: 0 and [26, 256].
If the value is 0, the bitrate of the audio stream will be the same as that of the original audio.
                     * @return Bitrate Audio stream bitrate in Kbps. Value range: 0 and [26, 256].
If the value is 0, the bitrate of the audio stream will be the same as that of the original audio.
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置Audio stream bitrate in Kbps. Value range: 0 and [26, 256].
If the value is 0, the bitrate of the audio stream will be the same as that of the original audio.
                     * @param _bitrate Audio stream bitrate in Kbps. Value range: 0 and [26, 256].
If the value is 0, the bitrate of the audio stream will be the same as that of the original audio.
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
                     * 获取Audio stream sample rate. Valid values:
<li>32,000</li>
<li>44,100</li>
<li>48,000</li>
In Hz.
                     * @return SampleRate Audio stream sample rate. Valid values:
<li>32,000</li>
<li>44,100</li>
<li>48,000</li>
In Hz.
                     * 
                     */
                    uint64_t GetSampleRate() const;

                    /**
                     * 设置Audio stream sample rate. Valid values:
<li>32,000</li>
<li>44,100</li>
<li>48,000</li>
In Hz.
                     * @param _sampleRate Audio stream sample rate. Valid values:
<li>32,000</li>
<li>44,100</li>
<li>48,000</li>
In Hz.
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
                     * 获取Audio channel mode. Valid values:
<li>1: single channel.</li>
<li>2: dual channel.</li>
<li>6: 5.1 surround sound.</li>
When the media encapsulation format is audio (flac, ogg, mp3, and m4a), the number of channels cannot be set to 5.1 surround sound.
Default value: 2.
                     * @return AudioChannel Audio channel mode. Valid values:
<li>1: single channel.</li>
<li>2: dual channel.</li>
<li>6: 5.1 surround sound.</li>
When the media encapsulation format is audio (flac, ogg, mp3, and m4a), the number of channels cannot be set to 5.1 surround sound.
Default value: 2.
                     * 
                     */
                    int64_t GetAudioChannel() const;

                    /**
                     * 设置Audio channel mode. Valid values:
<li>1: single channel.</li>
<li>2: dual channel.</li>
<li>6: 5.1 surround sound.</li>
When the media encapsulation format is audio (flac, ogg, mp3, and m4a), the number of channels cannot be set to 5.1 surround sound.
Default value: 2.
                     * @param _audioChannel Audio channel mode. Valid values:
<li>1: single channel.</li>
<li>2: dual channel.</li>
<li>6: 5.1 surround sound.</li>
When the media encapsulation format is audio (flac, ogg, mp3, and m4a), the number of channels cannot be set to 5.1 surround sound.
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
                     * 获取Merge audio track information.
This field only takes effec in adaptive bitrate transcoding.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TrackChannelInfo Merge audio track information.
This field only takes effec in adaptive bitrate transcoding.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    AudioTrackChannelInfo GetTrackChannelInfo() const;

                    /**
                     * 设置Merge audio track information.
This field only takes effec in adaptive bitrate transcoding.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _trackChannelInfo Merge audio track information.
This field only takes effec in adaptive bitrate transcoding.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTrackChannelInfo(const AudioTrackChannelInfo& _trackChannelInfo);

                    /**
                     * 判断参数 TrackChannelInfo 是否已赋值
                     * @return TrackChannelInfo 是否已赋值
                     * 
                     */
                    bool TrackChannelInfoHasBeenSet() const;

                private:

                    /**
                     * Audio stream encoding format.
When audio transcoding is not needed, the value is:
<li>copy.</li>
When the outer parameter Container is mp3, the value is:
<li>mp3.</li>
When the outer parameter Container is ogg or flac, the value is:
<li>flac.</li>
When the outer parameter Container is m4a, valid values are:
<li>aac;</li>
<li>ac3.</li>
When the outer parameter Container is mp4 or flv, valid values are:
<li>aac: more suitable for mp4;</li>
<li>mp3: more suitable for flv;</li>
<li>mp2.</li>
When the outer parameter Container is hls, valid values are:
<li>aac;</li>
<li>mp3.</li>
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * Audio stream bitrate in Kbps. Value range: 0 and [26, 256].
If the value is 0, the bitrate of the audio stream will be the same as that of the original audio.
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * Audio stream sample rate. Valid values:
<li>32,000</li>
<li>44,100</li>
<li>48,000</li>
In Hz.
                     */
                    uint64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * Audio channel mode. Valid values:
<li>1: single channel.</li>
<li>2: dual channel.</li>
<li>6: 5.1 surround sound.</li>
When the media encapsulation format is audio (flac, ogg, mp3, and m4a), the number of channels cannot be set to 5.1 surround sound.
Default value: 2.
                     */
                    int64_t m_audioChannel;
                    bool m_audioChannelHasBeenSet;

                    /**
                     * Merge audio track information.
This field only takes effec in adaptive bitrate transcoding.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    AudioTrackChannelInfo m_trackChannelInfo;
                    bool m_trackChannelInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AUDIOTEMPLATEINFO_H_
