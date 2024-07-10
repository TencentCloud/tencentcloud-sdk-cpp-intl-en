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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_AUDIOTRACKINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_AUDIOTRACKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/AudioNormalizationSettings.h>
#include <tencentcloud/mdl/v20200326/model/AudioCodecDetail.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Audio track configuration.
                */
                class AudioTrackInfo : public AbstractModel
                {
                public:
                    AudioTrackInfo();
                    ~AudioTrackInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User input is limited to letters and numbers, the length should not exceed 20, and should not be repeated in the same channel.
                     * @return TrackName User input is limited to letters and numbers, the length should not exceed 20, and should not be repeated in the same channel.
                     * 
                     */
                    std::string GetTrackName() const;

                    /**
                     * 设置User input is limited to letters and numbers, the length should not exceed 20, and should not be repeated in the same channel.
                     * @param _trackName User input is limited to letters and numbers, the length should not exceed 20, and should not be repeated in the same channel.
                     * 
                     */
                    void SetTrackName(const std::string& _trackName);

                    /**
                     * 判断参数 TrackName 是否已赋值
                     * @return TrackName 是否已赋值
                     * 
                     */
                    bool TrackNameHasBeenSet() const;

                    /**
                     * 获取Only AAC is supported.
                     * @return AudioCodec Only AAC is supported.
                     * 
                     */
                    std::string GetAudioCodec() const;

                    /**
                     * 设置Only AAC is supported.
                     * @param _audioCodec Only AAC is supported.
                     * 
                     */
                    void SetAudioCodec(const std::string& _audioCodec);

                    /**
                     * 判断参数 AudioCodec 是否已赋值
                     * @return AudioCodec 是否已赋值
                     * 
                     */
                    bool AudioCodecHasBeenSet() const;

                    /**
                     * 获取Audio bitrate.
                     * @return AudioBitrate Audio bitrate.
                     * 
                     */
                    uint64_t GetAudioBitrate() const;

                    /**
                     * 设置Audio bitrate.
                     * @param _audioBitrate Audio bitrate.
                     * 
                     */
                    void SetAudioBitrate(const uint64_t& _audioBitrate);

                    /**
                     * 判断参数 AudioBitrate 是否已赋值
                     * @return AudioBitrate 是否已赋值
                     * 
                     */
                    bool AudioBitrateHasBeenSet() const;

                    /**
                     * 获取Audio sample rate.
                     * @return AudioSampleRate Audio sample rate.
                     * 
                     */
                    uint64_t GetAudioSampleRate() const;

                    /**
                     * 设置Audio sample rate.
                     * @param _audioSampleRate Audio sample rate.
                     * 
                     */
                    void SetAudioSampleRate(const uint64_t& _audioSampleRate);

                    /**
                     * 判断参数 AudioSampleRate 是否已赋值
                     * @return AudioSampleRate 是否已赋值
                     * 
                     */
                    bool AudioSampleRateHasBeenSet() const;

                    /**
                     * 获取Only values defined by AttachedInputs.$.AudioSelectors.$.audioPidSelection.pid can be entered.
                     * @return AudioSelectorName Only values defined by AttachedInputs.$.AudioSelectors.$.audioPidSelection.pid can be entered.
                     * 
                     */
                    std::string GetAudioSelectorName() const;

                    /**
                     * 设置Only values defined by AttachedInputs.$.AudioSelectors.$.audioPidSelection.pid can be entered.
                     * @param _audioSelectorName Only values defined by AttachedInputs.$.AudioSelectors.$.audioPidSelection.pid can be entered.
                     * 
                     */
                    void SetAudioSelectorName(const std::string& _audioSelectorName);

                    /**
                     * 判断参数 AudioSelectorName 是否已赋值
                     * @return AudioSelectorName 是否已赋值
                     * 
                     */
                    bool AudioSelectorNameHasBeenSet() const;

                    /**
                     * 获取Audio loudness configuration.
                     * @return AudioNormalization Audio loudness configuration.
                     * 
                     */
                    AudioNormalizationSettings GetAudioNormalization() const;

                    /**
                     * 设置Audio loudness configuration.
                     * @param _audioNormalization Audio loudness configuration.
                     * 
                     */
                    void SetAudioNormalization(const AudioNormalizationSettings& _audioNormalization);

                    /**
                     * 判断参数 AudioNormalization 是否已赋值
                     * @return AudioNormalization 是否已赋值
                     * 
                     */
                    bool AudioNormalizationHasBeenSet() const;

                    /**
                     * 获取Audio encoding configuration.
                     * @return AudioCodecDetails Audio encoding configuration.
                     * 
                     */
                    AudioCodecDetail GetAudioCodecDetails() const;

                    /**
                     * 设置Audio encoding configuration.
                     * @param _audioCodecDetails Audio encoding configuration.
                     * 
                     */
                    void SetAudioCodecDetails(const AudioCodecDetail& _audioCodecDetails);

                    /**
                     * 判断参数 AudioCodecDetails 是否已赋值
                     * @return AudioCodecDetails 是否已赋值
                     * 
                     */
                    bool AudioCodecDetailsHasBeenSet() const;

                private:

                    /**
                     * User input is limited to letters and numbers, the length should not exceed 20, and should not be repeated in the same channel.
                     */
                    std::string m_trackName;
                    bool m_trackNameHasBeenSet;

                    /**
                     * Only AAC is supported.
                     */
                    std::string m_audioCodec;
                    bool m_audioCodecHasBeenSet;

                    /**
                     * Audio bitrate.
                     */
                    uint64_t m_audioBitrate;
                    bool m_audioBitrateHasBeenSet;

                    /**
                     * Audio sample rate.
                     */
                    uint64_t m_audioSampleRate;
                    bool m_audioSampleRateHasBeenSet;

                    /**
                     * Only values defined by AttachedInputs.$.AudioSelectors.$.audioPidSelection.pid can be entered.
                     */
                    std::string m_audioSelectorName;
                    bool m_audioSelectorNameHasBeenSet;

                    /**
                     * Audio loudness configuration.
                     */
                    AudioNormalizationSettings m_audioNormalization;
                    bool m_audioNormalizationHasBeenSet;

                    /**
                     * Audio encoding configuration.
                     */
                    AudioCodecDetail m_audioCodecDetails;
                    bool m_audioCodecDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_AUDIOTRACKINFO_H_
