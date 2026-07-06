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
                     * 获取<p>Audio stream encoding format.<br>When audio transcoding is not needed, the valid value is:</p><li>copy.</li>When the outer parameter Container is mp3, the valid value is:<li>mp3.</li>When the outer parameter Container is ogg or flac, the valid value is:<li>flac.</li>When the outer parameter Container is m4a, the valid values are:<li>aac;</li><li>ac3.</li>When the outer parameter Container is mp4 or flv, the valid values are:<li>aac: suitable for mp4.</li><li>mp3: suitable for flv.</li><li>mp2.</li>When the outer parameter Container is hls, the valid values are:<li>aac.</li><li>mp3.</li><li>eac3: used when merging audio tracks with adaptive transcoding.</li>When the outer parameter Container is wav, the valid values are:<li>pcm16 and pcm24.</li>
                     * @return Codec <p>Audio stream encoding format.<br>When audio transcoding is not needed, the valid value is:</p><li>copy.</li>When the outer parameter Container is mp3, the valid value is:<li>mp3.</li>When the outer parameter Container is ogg or flac, the valid value is:<li>flac.</li>When the outer parameter Container is m4a, the valid values are:<li>aac;</li><li>ac3.</li>When the outer parameter Container is mp4 or flv, the valid values are:<li>aac: suitable for mp4.</li><li>mp3: suitable for flv.</li><li>mp2.</li>When the outer parameter Container is hls, the valid values are:<li>aac.</li><li>mp3.</li><li>eac3: used when merging audio tracks with adaptive transcoding.</li>When the outer parameter Container is wav, the valid values are:<li>pcm16 and pcm24.</li>
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置<p>Audio stream encoding format.<br>When audio transcoding is not needed, the valid value is:</p><li>copy.</li>When the outer parameter Container is mp3, the valid value is:<li>mp3.</li>When the outer parameter Container is ogg or flac, the valid value is:<li>flac.</li>When the outer parameter Container is m4a, the valid values are:<li>aac;</li><li>ac3.</li>When the outer parameter Container is mp4 or flv, the valid values are:<li>aac: suitable for mp4.</li><li>mp3: suitable for flv.</li><li>mp2.</li>When the outer parameter Container is hls, the valid values are:<li>aac.</li><li>mp3.</li><li>eac3: used when merging audio tracks with adaptive transcoding.</li>When the outer parameter Container is wav, the valid values are:<li>pcm16 and pcm24.</li>
                     * @param _codec <p>Audio stream encoding format.<br>When audio transcoding is not needed, the valid value is:</p><li>copy.</li>When the outer parameter Container is mp3, the valid value is:<li>mp3.</li>When the outer parameter Container is ogg or flac, the valid value is:<li>flac.</li>When the outer parameter Container is m4a, the valid values are:<li>aac;</li><li>ac3.</li>When the outer parameter Container is mp4 or flv, the valid values are:<li>aac: suitable for mp4.</li><li>mp3: suitable for flv.</li><li>mp2.</li>When the outer parameter Container is hls, the valid values are:<li>aac.</li><li>mp3.</li><li>eac3: used when merging audio tracks with adaptive transcoding.</li>When the outer parameter Container is wav, the valid values are:<li>pcm16 and pcm24.</li>
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
                     * 获取<p>Audio stream bitrate, in kbps. Value range: 0 and [26, 256].<br>When the value is 0, it means the audio bitrate remains consistent with that of the original audio.<br>Note: If the TrackChannelInfo parameter is used for audio track merging with adaptive transcoding, the value range:<br>1) cannot be 0.<br>2) When Codec is aac, the value range is [26, 256].<br>3) When Codec is ac3, the value range is [26, 640].<br>4) When Codec is eac3, the value range is [26, 6144]. Note: When SampleRate is 44100HZ, the maximum value is 5644. When SampleRate is 48000HZ, the maximum value is 6144.</p>
                     * @return Bitrate <p>Audio stream bitrate, in kbps. Value range: 0 and [26, 256].<br>When the value is 0, it means the audio bitrate remains consistent with that of the original audio.<br>Note: If the TrackChannelInfo parameter is used for audio track merging with adaptive transcoding, the value range:<br>1) cannot be 0.<br>2) When Codec is aac, the value range is [26, 256].<br>3) When Codec is ac3, the value range is [26, 640].<br>4) When Codec is eac3, the value range is [26, 6144]. Note: When SampleRate is 44100HZ, the maximum value is 5644. When SampleRate is 48000HZ, the maximum value is 6144.</p>
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置<p>Audio stream bitrate, in kbps. Value range: 0 and [26, 256].<br>When the value is 0, it means the audio bitrate remains consistent with that of the original audio.<br>Note: If the TrackChannelInfo parameter is used for audio track merging with adaptive transcoding, the value range:<br>1) cannot be 0.<br>2) When Codec is aac, the value range is [26, 256].<br>3) When Codec is ac3, the value range is [26, 640].<br>4) When Codec is eac3, the value range is [26, 6144]. Note: When SampleRate is 44100HZ, the maximum value is 5644. When SampleRate is 48000HZ, the maximum value is 6144.</p>
                     * @param _bitrate <p>Audio stream bitrate, in kbps. Value range: 0 and [26, 256].<br>When the value is 0, it means the audio bitrate remains consistent with that of the original audio.<br>Note: If the TrackChannelInfo parameter is used for audio track merging with adaptive transcoding, the value range:<br>1) cannot be 0.<br>2) When Codec is aac, the value range is [26, 256].<br>3) When Codec is ac3, the value range is [26, 640].<br>4) When Codec is eac3, the value range is [26, 6144]. Note: When SampleRate is 44100HZ, the maximum value is 5644. When SampleRate is 48000HZ, the maximum value is 6144.</p>
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
                     * 获取<p>Audio stream sampling rate. Different sampling rate options are provided for different encoding standards. Enter 0 to use the source audio sampling rate.<br>For details, see <a href="https://www.tencentcloud.com/document/product/862/77166?from_cn_redirect=1#f3b039f1-d817-4a96-b4e4-90132d31cd53">Audio Sampling Rate Range</a>.<br>Unit: Hz.<br>Note: Ensure the source audio stream sampling rate is within the supported range. Otherwise, transcoding may fail.</p>
                     * @return SampleRate <p>Audio stream sampling rate. Different sampling rate options are provided for different encoding standards. Enter 0 to use the source audio sampling rate.<br>For details, see <a href="https://www.tencentcloud.com/document/product/862/77166?from_cn_redirect=1#f3b039f1-d817-4a96-b4e4-90132d31cd53">Audio Sampling Rate Range</a>.<br>Unit: Hz.<br>Note: Ensure the source audio stream sampling rate is within the supported range. Otherwise, transcoding may fail.</p>
                     * 
                     */
                    uint64_t GetSampleRate() const;

                    /**
                     * 设置<p>Audio stream sampling rate. Different sampling rate options are provided for different encoding standards. Enter 0 to use the source audio sampling rate.<br>For details, see <a href="https://www.tencentcloud.com/document/product/862/77166?from_cn_redirect=1#f3b039f1-d817-4a96-b4e4-90132d31cd53">Audio Sampling Rate Range</a>.<br>Unit: Hz.<br>Note: Ensure the source audio stream sampling rate is within the supported range. Otherwise, transcoding may fail.</p>
                     * @param _sampleRate <p>Audio stream sampling rate. Different sampling rate options are provided for different encoding standards. Enter 0 to use the source audio sampling rate.<br>For details, see <a href="https://www.tencentcloud.com/document/product/862/77166?from_cn_redirect=1#f3b039f1-d817-4a96-b4e4-90132d31cd53">Audio Sampling Rate Range</a>.<br>Unit: Hz.<br>Note: Ensure the source audio stream sampling rate is within the supported range. Otherwise, transcoding may fail.</p>
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
                     * 获取<p>Audio channel mode. Valid values:</p><li>0: The number of audio channels follows that of the source.</li><li>1: Single channel.</li><li>2: Two channels.</li><li>6: 5.1 channels.</li>When the media container format is an audio format (mp3), the number of audio channels cannot be set to 5.1.<p>Default value: 2.<br>Note: If you set the audio channel to follow that of the source and the audio encoding format does not support the current audio channel, the transcoding task may fail.</p>
                     * @return AudioChannel <p>Audio channel mode. Valid values:</p><li>0: The number of audio channels follows that of the source.</li><li>1: Single channel.</li><li>2: Two channels.</li><li>6: 5.1 channels.</li>When the media container format is an audio format (mp3), the number of audio channels cannot be set to 5.1.<p>Default value: 2.<br>Note: If you set the audio channel to follow that of the source and the audio encoding format does not support the current audio channel, the transcoding task may fail.</p>
                     * 
                     */
                    int64_t GetAudioChannel() const;

                    /**
                     * 设置<p>Audio channel mode. Valid values:</p><li>0: The number of audio channels follows that of the source.</li><li>1: Single channel.</li><li>2: Two channels.</li><li>6: 5.1 channels.</li>When the media container format is an audio format (mp3), the number of audio channels cannot be set to 5.1.<p>Default value: 2.<br>Note: If you set the audio channel to follow that of the source and the audio encoding format does not support the current audio channel, the transcoding task may fail.</p>
                     * @param _audioChannel <p>Audio channel mode. Valid values:</p><li>0: The number of audio channels follows that of the source.</li><li>1: Single channel.</li><li>2: Two channels.</li><li>6: 5.1 channels.</li>When the media container format is an audio format (mp3), the number of audio channels cannot be set to 5.1.<p>Default value: 2.<br>Note: If you set the audio channel to follow that of the source and the audio encoding format does not support the current audio channel, the transcoding task may fail.</p>
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
                     * 获取<p>Audio track merging information.<br>Note: This field only takes effect for adaptive transcoding.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TrackChannelInfo <p>Audio track merging information.<br>Note: This field only takes effect for adaptive transcoding.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AudioTrackChannelInfo GetTrackChannelInfo() const;

                    /**
                     * 设置<p>Audio track merging information.<br>Note: This field only takes effect for adaptive transcoding.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _trackChannelInfo <p>Audio track merging information.<br>Note: This field only takes effect for adaptive transcoding.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * <p>Audio stream encoding format.<br>When audio transcoding is not needed, the valid value is:</p><li>copy.</li>When the outer parameter Container is mp3, the valid value is:<li>mp3.</li>When the outer parameter Container is ogg or flac, the valid value is:<li>flac.</li>When the outer parameter Container is m4a, the valid values are:<li>aac;</li><li>ac3.</li>When the outer parameter Container is mp4 or flv, the valid values are:<li>aac: suitable for mp4.</li><li>mp3: suitable for flv.</li><li>mp2.</li>When the outer parameter Container is hls, the valid values are:<li>aac.</li><li>mp3.</li><li>eac3: used when merging audio tracks with adaptive transcoding.</li>When the outer parameter Container is wav, the valid values are:<li>pcm16 and pcm24.</li>
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * <p>Audio stream bitrate, in kbps. Value range: 0 and [26, 256].<br>When the value is 0, it means the audio bitrate remains consistent with that of the original audio.<br>Note: If the TrackChannelInfo parameter is used for audio track merging with adaptive transcoding, the value range:<br>1) cannot be 0.<br>2) When Codec is aac, the value range is [26, 256].<br>3) When Codec is ac3, the value range is [26, 640].<br>4) When Codec is eac3, the value range is [26, 6144]. Note: When SampleRate is 44100HZ, the maximum value is 5644. When SampleRate is 48000HZ, the maximum value is 6144.</p>
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * <p>Audio stream sampling rate. Different sampling rate options are provided for different encoding standards. Enter 0 to use the source audio sampling rate.<br>For details, see <a href="https://www.tencentcloud.com/document/product/862/77166?from_cn_redirect=1#f3b039f1-d817-4a96-b4e4-90132d31cd53">Audio Sampling Rate Range</a>.<br>Unit: Hz.<br>Note: Ensure the source audio stream sampling rate is within the supported range. Otherwise, transcoding may fail.</p>
                     */
                    uint64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * <p>Audio channel mode. Valid values:</p><li>0: The number of audio channels follows that of the source.</li><li>1: Single channel.</li><li>2: Two channels.</li><li>6: 5.1 channels.</li>When the media container format is an audio format (mp3), the number of audio channels cannot be set to 5.1.<p>Default value: 2.<br>Note: If you set the audio channel to follow that of the source and the audio encoding format does not support the current audio channel, the transcoding task may fail.</p>
                     */
                    int64_t m_audioChannel;
                    bool m_audioChannelHasBeenSet;

                    /**
                     * <p>Audio track merging information.<br>Note: This field only takes effect for adaptive transcoding.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AudioTrackChannelInfo m_trackChannelInfo;
                    bool m_trackChannelInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AUDIOTEMPLATEINFO_H_
