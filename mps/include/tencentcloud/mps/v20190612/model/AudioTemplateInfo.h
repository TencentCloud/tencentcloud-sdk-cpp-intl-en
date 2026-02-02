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
                     * 获取Specifies the encoding format of the audio stream.
When audio transcoding is not needed, the optional values are:.
<li>copy.</li>
When the outer parameter Container is mp3, the valid values are:.
<li>mp3.</li>
When the outer parameter Container is ogg or flac, the valid values are:.
<li>flac.</li>
When the outer parameter Container is m4a, valid values are:.
<li>aac;</li>
<li>ac3.</li>
When the outer parameter Container is mp4 or flv, valid values are:.
<li>aac: more suitable for mp4;</li>.
<li>mp3: more suitable for flv;</li>.
<li>mp2.</li>
When the outer parameter Container is hls, valid values are:.
<li>aac;</li>
<li>mp3;</li>
<li>eac3: used when merging adaptive transcoding audio tracks.</li>.
                     * @return Codec Specifies the encoding format of the audio stream.
When audio transcoding is not needed, the optional values are:.
<li>copy.</li>
When the outer parameter Container is mp3, the valid values are:.
<li>mp3.</li>
When the outer parameter Container is ogg or flac, the valid values are:.
<li>flac.</li>
When the outer parameter Container is m4a, valid values are:.
<li>aac;</li>
<li>ac3.</li>
When the outer parameter Container is mp4 or flv, valid values are:.
<li>aac: more suitable for mp4;</li>.
<li>mp3: more suitable for flv;</li>.
<li>mp2.</li>
When the outer parameter Container is hls, valid values are:.
<li>aac;</li>
<li>mp3;</li>
<li>eac3: used when merging adaptive transcoding audio tracks.</li>.
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置Specifies the encoding format of the audio stream.
When audio transcoding is not needed, the optional values are:.
<li>copy.</li>
When the outer parameter Container is mp3, the valid values are:.
<li>mp3.</li>
When the outer parameter Container is ogg or flac, the valid values are:.
<li>flac.</li>
When the outer parameter Container is m4a, valid values are:.
<li>aac;</li>
<li>ac3.</li>
When the outer parameter Container is mp4 or flv, valid values are:.
<li>aac: more suitable for mp4;</li>.
<li>mp3: more suitable for flv;</li>.
<li>mp2.</li>
When the outer parameter Container is hls, valid values are:.
<li>aac;</li>
<li>mp3;</li>
<li>eac3: used when merging adaptive transcoding audio tracks.</li>.
                     * @param _codec Specifies the encoding format of the audio stream.
When audio transcoding is not needed, the optional values are:.
<li>copy.</li>
When the outer parameter Container is mp3, the valid values are:.
<li>mp3.</li>
When the outer parameter Container is ogg or flac, the valid values are:.
<li>flac.</li>
When the outer parameter Container is m4a, valid values are:.
<li>aac;</li>
<li>ac3.</li>
When the outer parameter Container is mp4 or flv, valid values are:.
<li>aac: more suitable for mp4;</li>.
<li>mp3: more suitable for flv;</li>.
<li>mp2.</li>
When the outer parameter Container is hls, valid values are:.
<li>aac;</li>
<li>mp3;</li>
<li>eac3: used when merging adaptive transcoding audio tracks.</li>.
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
                     * 获取The bitrate of the audio stream. value ranges from 0 to 26 and in the range of [26, 256]. measurement unit: kbps.
If the value is 0, the audio bitrate will be the same as that of the original audio.
Specifies that when using the TrackChannelInfo parameter for adaptive transcoding audio track merging, the valid values are:.
Cannot be set to 0.
2). when Codec is aac, valid values: [26, 256].
3). when Codec is ac3, valid values: [26, 640].
4) when Codec is eac3, value range: [26, 6144]. remark: when SampleRate is 44100HZ, maximum value: 5644. when SampleRate is 48000HZ, maximum value: 6144.


                     * @return Bitrate The bitrate of the audio stream. value ranges from 0 to 26 and in the range of [26, 256]. measurement unit: kbps.
If the value is 0, the audio bitrate will be the same as that of the original audio.
Specifies that when using the TrackChannelInfo parameter for adaptive transcoding audio track merging, the valid values are:.
Cannot be set to 0.
2). when Codec is aac, valid values: [26, 256].
3). when Codec is ac3, valid values: [26, 640].
4) when Codec is eac3, value range: [26, 6144]. remark: when SampleRate is 44100HZ, maximum value: 5644. when SampleRate is 48000HZ, maximum value: 6144.


                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置The bitrate of the audio stream. value ranges from 0 to 26 and in the range of [26, 256]. measurement unit: kbps.
If the value is 0, the audio bitrate will be the same as that of the original audio.
Specifies that when using the TrackChannelInfo parameter for adaptive transcoding audio track merging, the valid values are:.
Cannot be set to 0.
2). when Codec is aac, valid values: [26, 256].
3). when Codec is ac3, valid values: [26, 640].
4) when Codec is eac3, value range: [26, 6144]. remark: when SampleRate is 44100HZ, maximum value: 5644. when SampleRate is 48000HZ, maximum value: 6144.


                     * @param _bitrate The bitrate of the audio stream. value ranges from 0 to 26 and in the range of [26, 256]. measurement unit: kbps.
If the value is 0, the audio bitrate will be the same as that of the original audio.
Specifies that when using the TrackChannelInfo parameter for adaptive transcoding audio track merging, the valid values are:.
Cannot be set to 0.
2). when Codec is aac, valid values: [26, 256].
3). when Codec is ac3, valid values: [26, 640].
4) when Codec is eac3, value range: [26, 6144]. remark: when SampleRate is 44100HZ, maximum value: 5644. when SampleRate is 48000HZ, maximum value: 6144.


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
                     * 获取Sampling rate of the audio stream. Different encoding standards support different sampling rate options. The value of 0 indicates using the sampling rate value of the source audio.
For details, see [Supported Range of Audio Sampling Rate](https://www.tencentcloud.comom/document/product/862/77166?from_cn_redirect=1#f3b039f1-d817-4a96-b4e4-90132d31cd53).
Unit: Hz.
Note: Make sure that the sampling rate of the source audio stream is among the above options. Otherwise, transcoding may fail.
                     * @return SampleRate Sampling rate of the audio stream. Different encoding standards support different sampling rate options. The value of 0 indicates using the sampling rate value of the source audio.
For details, see [Supported Range of Audio Sampling Rate](https://www.tencentcloud.comom/document/product/862/77166?from_cn_redirect=1#f3b039f1-d817-4a96-b4e4-90132d31cd53).
Unit: Hz.
Note: Make sure that the sampling rate of the source audio stream is among the above options. Otherwise, transcoding may fail.
                     * 
                     */
                    uint64_t GetSampleRate() const;

                    /**
                     * 设置Sampling rate of the audio stream. Different encoding standards support different sampling rate options. The value of 0 indicates using the sampling rate value of the source audio.
For details, see [Supported Range of Audio Sampling Rate](https://www.tencentcloud.comom/document/product/862/77166?from_cn_redirect=1#f3b039f1-d817-4a96-b4e4-90132d31cd53).
Unit: Hz.
Note: Make sure that the sampling rate of the source audio stream is among the above options. Otherwise, transcoding may fail.
                     * @param _sampleRate Sampling rate of the audio stream. Different encoding standards support different sampling rate options. The value of 0 indicates using the sampling rate value of the source audio.
For details, see [Supported Range of Audio Sampling Rate](https://www.tencentcloud.comom/document/product/862/77166?from_cn_redirect=1#f3b039f1-d817-4a96-b4e4-90132d31cd53).
Unit: Hz.
Note: Make sure that the sampling rate of the source audio stream is among the above options. Otherwise, transcoding may fail.
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
<li>1: mono-channel.</li>
<li>2: dual-channel.</li>
<li>6: 5.1 surround sound.
<li>Default value: 2.
When the container format is audio (flac, ogg, mp3, and m4a), the audio channel cannot be set to 5.1 surround sound.
                     * @return AudioChannel Audio channel mode. Valid values:
<li>1: mono-channel.</li>
<li>2: dual-channel.</li>
<li>6: 5.1 surround sound.
<li>Default value: 2.
When the container format is audio (flac, ogg, mp3, and m4a), the audio channel cannot be set to 5.1 surround sound.
                     * 
                     */
                    int64_t GetAudioChannel() const;

                    /**
                     * 设置Audio channel mode. Valid values:
<li>1: mono-channel.</li>
<li>2: dual-channel.</li>
<li>6: 5.1 surround sound.
<li>Default value: 2.
When the container format is audio (flac, ogg, mp3, and m4a), the audio channel cannot be set to 5.1 surround sound.
                     * @param _audioChannel Audio channel mode. Valid values:
<li>1: mono-channel.</li>
<li>2: dual-channel.</li>
<li>6: 5.1 surround sound.
<li>Default value: 2.
When the container format is audio (flac, ogg, mp3, and m4a), the audio channel cannot be set to 5.1 surround sound.
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
This field only takes effect in adaptive bitrate transcoding.

Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TrackChannelInfo Merge audio track information.
This field only takes effect in adaptive bitrate transcoding.

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    AudioTrackChannelInfo GetTrackChannelInfo() const;

                    /**
                     * 设置Merge audio track information.
This field only takes effect in adaptive bitrate transcoding.

Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _trackChannelInfo Merge audio track information.
This field only takes effect in adaptive bitrate transcoding.

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
                     * Specifies the encoding format of the audio stream.
When audio transcoding is not needed, the optional values are:.
<li>copy.</li>
When the outer parameter Container is mp3, the valid values are:.
<li>mp3.</li>
When the outer parameter Container is ogg or flac, the valid values are:.
<li>flac.</li>
When the outer parameter Container is m4a, valid values are:.
<li>aac;</li>
<li>ac3.</li>
When the outer parameter Container is mp4 or flv, valid values are:.
<li>aac: more suitable for mp4;</li>.
<li>mp3: more suitable for flv;</li>.
<li>mp2.</li>
When the outer parameter Container is hls, valid values are:.
<li>aac;</li>
<li>mp3;</li>
<li>eac3: used when merging adaptive transcoding audio tracks.</li>.
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * The bitrate of the audio stream. value ranges from 0 to 26 and in the range of [26, 256]. measurement unit: kbps.
If the value is 0, the audio bitrate will be the same as that of the original audio.
Specifies that when using the TrackChannelInfo parameter for adaptive transcoding audio track merging, the valid values are:.
Cannot be set to 0.
2). when Codec is aac, valid values: [26, 256].
3). when Codec is ac3, valid values: [26, 640].
4) when Codec is eac3, value range: [26, 6144]. remark: when SampleRate is 44100HZ, maximum value: 5644. when SampleRate is 48000HZ, maximum value: 6144.


                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * Sampling rate of the audio stream. Different encoding standards support different sampling rate options. The value of 0 indicates using the sampling rate value of the source audio.
For details, see [Supported Range of Audio Sampling Rate](https://www.tencentcloud.comom/document/product/862/77166?from_cn_redirect=1#f3b039f1-d817-4a96-b4e4-90132d31cd53).
Unit: Hz.
Note: Make sure that the sampling rate of the source audio stream is among the above options. Otherwise, transcoding may fail.
                     */
                    uint64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * Audio channel mode. Valid values:
<li>1: mono-channel.</li>
<li>2: dual-channel.</li>
<li>6: 5.1 surround sound.
<li>Default value: 2.
When the container format is audio (flac, ogg, mp3, and m4a), the audio channel cannot be set to 5.1 surround sound.
                     */
                    int64_t m_audioChannel;
                    bool m_audioChannelHasBeenSet;

                    /**
                     * Merge audio track information.
This field only takes effect in adaptive bitrate transcoding.

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
