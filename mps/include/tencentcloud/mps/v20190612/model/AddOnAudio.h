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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ADDONAUDIO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ADDONAUDIO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * External audio.
                */
                class AddOnAudio : public AbstractModel
                {
                public:
                    AddOnAudio();
                    ~AddOnAudio() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Audio file input information. Note: (1) Supported audio stream encoding formats: AAC, AC3, EAC3, FLAC, Opus, and MP3. (2) If the segment type set in the adaptive bitrate streaming template is TS, the audio stream encoding format cannot be FLAC.</p>
                     * @return InputInfo <p>Audio file input information. Note: (1) Supported audio stream encoding formats: AAC, AC3, EAC3, FLAC, Opus, and MP3. (2) If the segment type set in the adaptive bitrate streaming template is TS, the audio stream encoding format cannot be FLAC.</p>
                     * 
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置<p>Audio file input information. Note: (1) Supported audio stream encoding formats: AAC, AC3, EAC3, FLAC, Opus, and MP3. (2) If the segment type set in the adaptive bitrate streaming template is TS, the audio stream encoding format cannot be FLAC.</p>
                     * @param _inputInfo <p>Audio file input information. Note: (1) Supported audio stream encoding formats: AAC, AC3, EAC3, FLAC, Opus, and MP3. (2) If the segment type set in the adaptive bitrate streaming template is TS, the audio stream encoding format cannot be FLAC.</p>
                     * 
                     */
                    void SetInputInfo(const MediaInputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取<p>Audio track name, such as Chinese or English. Note: Only Chinese characters, letters, digits, spaces, underscores (_), hyphens (-), periods (.), and brackets are supported. The length cannot exceed 64 characters.</p>
                     * @return AudioName <p>Audio track name, such as Chinese or English. Note: Only Chinese characters, letters, digits, spaces, underscores (_), hyphens (-), periods (.), and brackets are supported. The length cannot exceed 64 characters.</p>
                     * 
                     */
                    std::string GetAudioName() const;

                    /**
                     * 设置<p>Audio track name, such as Chinese or English. Note: Only Chinese characters, letters, digits, spaces, underscores (_), hyphens (-), periods (.), and brackets are supported. The length cannot exceed 64 characters.</p>
                     * @param _audioName <p>Audio track name, such as Chinese or English. Note: Only Chinese characters, letters, digits, spaces, underscores (_), hyphens (-), periods (.), and brackets are supported. The length cannot exceed 64 characters.</p>
                     * 
                     */
                    void SetAudioName(const std::string& _audioName);

                    /**
                     * 判断参数 AudioName 是否已赋值
                     * @return AudioName 是否已赋值
                     * 
                     */
                    bool AudioNameHasBeenSet() const;

                    /**
                     * 获取<p>Audio track language, such as chi or eng. This follows the ISO 639-2 standard.</p>
                     * @return AudioLanguage <p>Audio track language, such as chi or eng. This follows the ISO 639-2 standard.</p>
                     * 
                     */
                    std::string GetAudioLanguage() const;

                    /**
                     * 设置<p>Audio track language, such as chi or eng. This follows the ISO 639-2 standard.</p>
                     * @param _audioLanguage <p>Audio track language, such as chi or eng. This follows the ISO 639-2 standard.</p>
                     * 
                     */
                    void SetAudioLanguage(const std::string& _audioLanguage);

                    /**
                     * 判断参数 AudioLanguage 是否已赋值
                     * @return AudioLanguage 是否已赋值
                     * 
                     */
                    bool AudioLanguageHasBeenSet() const;

                    /**
                     * 获取<p>Default audio track. When set to true, the current audio is designated as the default audio track. A maximum of 1 default audio track can be specified.</p><p>Default value: false.</p>
                     * @return DefaultTrack <p>Default audio track. When set to true, the current audio is designated as the default audio track. A maximum of 1 default audio track can be specified.</p><p>Default value: false.</p>
                     * 
                     */
                    bool GetDefaultTrack() const;

                    /**
                     * 设置<p>Default audio track. When set to true, the current audio is designated as the default audio track. A maximum of 1 default audio track can be specified.</p><p>Default value: false.</p>
                     * @param _defaultTrack <p>Default audio track. When set to true, the current audio is designated as the default audio track. A maximum of 1 default audio track can be specified.</p><p>Default value: false.</p>
                     * 
                     */
                    void SetDefaultTrack(const bool& _defaultTrack);

                    /**
                     * 判断参数 DefaultTrack 是否已赋值
                     * @return DefaultTrack 是否已赋值
                     * 
                     */
                    bool DefaultTrackHasBeenSet() const;

                private:

                    /**
                     * <p>Audio file input information. Note: (1) Supported audio stream encoding formats: AAC, AC3, EAC3, FLAC, Opus, and MP3. (2) If the segment type set in the adaptive bitrate streaming template is TS, the audio stream encoding format cannot be FLAC.</p>
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * <p>Audio track name, such as Chinese or English. Note: Only Chinese characters, letters, digits, spaces, underscores (_), hyphens (-), periods (.), and brackets are supported. The length cannot exceed 64 characters.</p>
                     */
                    std::string m_audioName;
                    bool m_audioNameHasBeenSet;

                    /**
                     * <p>Audio track language, such as chi or eng. This follows the ISO 639-2 standard.</p>
                     */
                    std::string m_audioLanguage;
                    bool m_audioLanguageHasBeenSet;

                    /**
                     * <p>Default audio track. When set to true, the current audio is designated as the default audio track. A maximum of 1 default audio track can be specified.</p><p>Default value: false.</p>
                     */
                    bool m_defaultTrack;
                    bool m_defaultTrackHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ADDONAUDIO_H_
