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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_AUDIOTEMPLATEINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_AUDIOTEMPLATEINFO_H_

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
                * Audio transcoding template.
                */
                class AudioTemplateInfo : public AbstractModel
                {
                public:
                    AudioTemplateInfo();
                    ~AudioTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Only `AttachedInputs.AudioSelectors.Name` can be selected. This parameter is required for RTP_PUSH and UDP_PUSH.
                     * @return AudioSelectorName Only `AttachedInputs.AudioSelectors.Name` can be selected. This parameter is required for RTP_PUSH and UDP_PUSH.
                     * 
                     */
                    std::string GetAudioSelectorName() const;

                    /**
                     * 设置Only `AttachedInputs.AudioSelectors.Name` can be selected. This parameter is required for RTP_PUSH and UDP_PUSH.
                     * @param _audioSelectorName Only `AttachedInputs.AudioSelectors.Name` can be selected. This parameter is required for RTP_PUSH and UDP_PUSH.
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
                     * 获取Audio transcoding template name, which can contain 1-20 letters and digits.
                     * @return Name Audio transcoding template name, which can contain 1-20 letters and digits.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Audio transcoding template name, which can contain 1-20 letters and digits.
                     * @param _name Audio transcoding template name, which can contain 1-20 letters and digits.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Audio encoding format, only `AAC` and `PASSTHROUGH` are available, with `AAC` as the default.
                     * @return Acodec Audio encoding format, only `AAC` and `PASSTHROUGH` are available, with `AAC` as the default.
                     * 
                     */
                    std::string GetAcodec() const;

                    /**
                     * 设置Audio encoding format, only `AAC` and `PASSTHROUGH` are available, with `AAC` as the default.
                     * @param _acodec Audio encoding format, only `AAC` and `PASSTHROUGH` are available, with `AAC` as the default.
                     * 
                     */
                    void SetAcodec(const std::string& _acodec);

                    /**
                     * 判断参数 Acodec 是否已赋值
                     * @return Acodec 是否已赋值
                     * 
                     */
                    bool AcodecHasBeenSet() const;

                    /**
                     * 获取Audio bitrate. If this parameter is left empty, the original value will be used.
Valid values: 6000, 7000, 8000, 10000, 12000, 14000, 16000, 20000, 24000, 28000, 32000, 40000, 48000, 56000, 64000, 80000, 96000, 112000, 128000, 160000, 192000, 224000, 256000, 288000, 320000, 384000, 448000, 512000, 576000, 640000, 768000, 896000, 1024000
                     * @return AudioBitrate Audio bitrate. If this parameter is left empty, the original value will be used.
Valid values: 6000, 7000, 8000, 10000, 12000, 14000, 16000, 20000, 24000, 28000, 32000, 40000, 48000, 56000, 64000, 80000, 96000, 112000, 128000, 160000, 192000, 224000, 256000, 288000, 320000, 384000, 448000, 512000, 576000, 640000, 768000, 896000, 1024000
                     * 
                     */
                    uint64_t GetAudioBitrate() const;

                    /**
                     * 设置Audio bitrate. If this parameter is left empty, the original value will be used.
Valid values: 6000, 7000, 8000, 10000, 12000, 14000, 16000, 20000, 24000, 28000, 32000, 40000, 48000, 56000, 64000, 80000, 96000, 112000, 128000, 160000, 192000, 224000, 256000, 288000, 320000, 384000, 448000, 512000, 576000, 640000, 768000, 896000, 1024000
                     * @param _audioBitrate Audio bitrate. If this parameter is left empty, the original value will be used.
Valid values: 6000, 7000, 8000, 10000, 12000, 14000, 16000, 20000, 24000, 28000, 32000, 40000, 48000, 56000, 64000, 80000, 96000, 112000, 128000, 160000, 192000, 224000, 256000, 288000, 320000, 384000, 448000, 512000, 576000, 640000, 768000, 896000, 1024000
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
                     * 获取Audio language code, whose length is always 3 characters.
                     * @return LanguageCode Audio language code, whose length is always 3 characters.
                     * 
                     */
                    std::string GetLanguageCode() const;

                    /**
                     * 设置Audio language code, whose length is always 3 characters.
                     * @param _languageCode Audio language code, whose length is always 3 characters.
                     * 
                     */
                    void SetLanguageCode(const std::string& _languageCode);

                    /**
                     * 判断参数 LanguageCode 是否已赋值
                     * @return LanguageCode 是否已赋值
                     * 
                     */
                    bool LanguageCodeHasBeenSet() const;

                    /**
                     * 获取Audio transcoding special configuration information.
                     * @return AudioNormalization Audio transcoding special configuration information.
                     * 
                     */
                    AudioNormalizationSettings GetAudioNormalization() const;

                    /**
                     * 设置Audio transcoding special configuration information.
                     * @param _audioNormalization Audio transcoding special configuration information.
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
                     * 获取Audio sampling rate, unit HZ.
                     * @return AudioSampleRate Audio sampling rate, unit HZ.
                     * 
                     */
                    uint64_t GetAudioSampleRate() const;

                    /**
                     * 设置Audio sampling rate, unit HZ.
                     * @param _audioSampleRate Audio sampling rate, unit HZ.
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
                     * 获取Audio encoding parameters.
                     * @return AudioCodecDetails Audio encoding parameters.
                     * 
                     */
                    AudioCodecDetail GetAudioCodecDetails() const;

                    /**
                     * 设置Audio encoding parameters.
                     * @param _audioCodecDetails Audio encoding parameters.
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
                     * Only `AttachedInputs.AudioSelectors.Name` can be selected. This parameter is required for RTP_PUSH and UDP_PUSH.
                     */
                    std::string m_audioSelectorName;
                    bool m_audioSelectorNameHasBeenSet;

                    /**
                     * Audio transcoding template name, which can contain 1-20 letters and digits.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Audio encoding format, only `AAC` and `PASSTHROUGH` are available, with `AAC` as the default.
                     */
                    std::string m_acodec;
                    bool m_acodecHasBeenSet;

                    /**
                     * Audio bitrate. If this parameter is left empty, the original value will be used.
Valid values: 6000, 7000, 8000, 10000, 12000, 14000, 16000, 20000, 24000, 28000, 32000, 40000, 48000, 56000, 64000, 80000, 96000, 112000, 128000, 160000, 192000, 224000, 256000, 288000, 320000, 384000, 448000, 512000, 576000, 640000, 768000, 896000, 1024000
                     */
                    uint64_t m_audioBitrate;
                    bool m_audioBitrateHasBeenSet;

                    /**
                     * Audio language code, whose length is always 3 characters.
                     */
                    std::string m_languageCode;
                    bool m_languageCodeHasBeenSet;

                    /**
                     * Audio transcoding special configuration information.
                     */
                    AudioNormalizationSettings m_audioNormalization;
                    bool m_audioNormalizationHasBeenSet;

                    /**
                     * Audio sampling rate, unit HZ.
                     */
                    uint64_t m_audioSampleRate;
                    bool m_audioSampleRateHasBeenSet;

                    /**
                     * Audio encoding parameters.
                     */
                    AudioCodecDetail m_audioCodecDetails;
                    bool m_audioCodecDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_AUDIOTEMPLATEINFO_H_
