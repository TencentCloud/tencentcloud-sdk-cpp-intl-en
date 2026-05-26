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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_TEXTTOSPEECHSSEREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_TEXTTOSPEECHSSEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/Voice.h>
#include <tencentcloud/trtc/v20190722/model/AudioFormat.h>
#include <tencentcloud/trtc/v20190722/model/PronunciationDict.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * TextToSpeechSSE request structure.
                */
                class TextToSpeechSSERequest : public AbstractModel
                {
                public:
                    TextToSpeechSSERequest();
                    ~TextToSpeechSSERequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Text to be converted to speech. length range: [1, 255].
                     * @return Text Text to be converted to speech. length range: [1, 255].
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置Text to be converted to speech. length range: [1, 255].
                     * @param _text Text to be converted to speech. length range: [1, 255].
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取Audio configuration for text-to-speech.
                     * @return Voice Audio configuration for text-to-speech.
                     * 
                     */
                    Voice GetVoice() const;

                    /**
                     * 设置Audio configuration for text-to-speech.
                     * @param _voice Audio configuration for text-to-speech.
                     * 
                     */
                    void SetVoice(const Voice& _voice);

                    /**
                     * 判断参数 Voice 是否已赋值
                     * @return Voice 是否已赋值
                     * 
                     */
                    bool VoiceHasBeenSet() const;

                    /**
                     * 获取Specifies the SdkAppId of TRTC.
                     * @return SdkAppId Specifies the SdkAppId of TRTC.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置Specifies the SdkAppId of TRTC.
                     * @param _sdkAppId Specifies the SdkAppId of TRTC.
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Specifies the output audio format for text-to-speech.
                     * @return AudioFormat Specifies the output audio format for text-to-speech.
                     * 
                     */
                    AudioFormat GetAudioFormat() const;

                    /**
                     * 设置Specifies the output audio format for text-to-speech.
                     * @param _audioFormat Specifies the output audio format for text-to-speech.
                     * 
                     */
                    void SetAudioFormat(const AudioFormat& _audioFormat);

                    /**
                     * 判断参数 AudioFormat 是否已赋值
                     * @return AudioFormat 是否已赋值
                     * 
                     */
                    bool AudioFormatHasBeenSet() const;

                    /**
                     * 获取API key for TTS.
                     * @return APIKey API key for TTS.
                     * @deprecated
                     */
                    std::string GetAPIKey() const;

                    /**
                     * 设置API key for TTS.
                     * @param _aPIKey API key for TTS.
                     * @deprecated
                     */
                    void SetAPIKey(const std::string& _aPIKey);

                    /**
                     * 判断参数 APIKey 是否已赋值
                     * @return APIKey 是否已赋值
                     * @deprecated
                     */
                    bool APIKeyHasBeenSet() const;

                    /**
                     * 获取TTS model, current fixed value: flow_01_turbo.
                     * @return Model TTS model, current fixed value: flow_01_turbo.
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置TTS model, current fixed value: flow_01_turbo.
                     * @param _model TTS model, current fixed value: flow_01_turbo.
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取Language to be synthesised (ISO 639-1). supports zh (chinese), en (english), yue (cantonese), ja (japanese), and ko (korean). defaults to auto-identification.
                     * @return Language Language to be synthesised (ISO 639-1). supports zh (chinese), en (english), yue (cantonese), ja (japanese), and ko (korean). defaults to auto-identification.
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置Language to be synthesised (ISO 639-1). supports zh (chinese), en (english), yue (cantonese), ja (japanese), and ko (korean). defaults to auto-identification.
                     * @param _language Language to be synthesised (ISO 639-1). supports zh (chinese), en (english), yue (cantonese), ja (japanese), and ko (korean). defaults to auto-identification.
                     * 
                     */
                    void SetLanguage(const std::string& _language);

                    /**
                     * 判断参数 Language 是否已赋值
                     * @return Language 是否已赋值
                     * 
                     */
                    bool LanguageHasBeenSet() const;

                    /**
                     * 获取
                     * @return PronunciationDict 
                     * 
                     */
                    std::vector<PronunciationDict> GetPronunciationDict() const;

                    /**
                     * 设置
                     * @param _pronunciationDict 
                     * 
                     */
                    void SetPronunciationDict(const std::vector<PronunciationDict>& _pronunciationDict);

                    /**
                     * 判断参数 PronunciationDict 是否已赋值
                     * @return PronunciationDict 是否已赋值
                     * 
                     */
                    bool PronunciationDictHasBeenSet() const;

                    /**
                     * 获取
                     * @return AlignmentMode 
                     * 
                     */
                    uint64_t GetAlignmentMode() const;

                    /**
                     * 设置
                     * @param _alignmentMode 
                     * 
                     */
                    void SetAlignmentMode(const uint64_t& _alignmentMode);

                    /**
                     * 判断参数 AlignmentMode 是否已赋值
                     * @return AlignmentMode 是否已赋值
                     * 
                     */
                    bool AlignmentModeHasBeenSet() const;

                private:

                    /**
                     * Text to be converted to speech. length range: [1, 255].
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * Audio configuration for text-to-speech.
                     */
                    Voice m_voice;
                    bool m_voiceHasBeenSet;

                    /**
                     * Specifies the SdkAppId of TRTC.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Specifies the output audio format for text-to-speech.
                     */
                    AudioFormat m_audioFormat;
                    bool m_audioFormatHasBeenSet;

                    /**
                     * API key for TTS.
                     */
                    std::string m_aPIKey;
                    bool m_aPIKeyHasBeenSet;

                    /**
                     * TTS model, current fixed value: flow_01_turbo.
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * Language to be synthesised (ISO 639-1). supports zh (chinese), en (english), yue (cantonese), ja (japanese), and ko (korean). defaults to auto-identification.
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<PronunciationDict> m_pronunciationDict;
                    bool m_pronunciationDictHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_alignmentMode;
                    bool m_alignmentModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TEXTTOSPEECHSSEREQUEST_H_
