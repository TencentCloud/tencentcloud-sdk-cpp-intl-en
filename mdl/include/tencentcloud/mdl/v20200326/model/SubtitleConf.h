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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_SUBTITLECONF_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_SUBTITLECONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/SubtitleFontConf.h>
#include <tencentcloud/mdl/v20200326/model/WebVTTFontStyle.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Subtitle template configuration.
                */
                class SubtitleConf : public AbstractModel
                {
                public:
                    SubtitleConf();
                    ~SubtitleConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Template Name
                     * @return Name Template Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Template Name
                     * @param _name Template Name
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
                     * 获取Name of the subtitle selector. Required when CaptionSource is set to INPUT.
                     * @return CaptionSelectorName Name of the subtitle selector. Required when CaptionSource is set to INPUT.
                     * 
                     */
                    std::string GetCaptionSelectorName() const;

                    /**
                     * 设置Name of the subtitle selector. Required when CaptionSource is set to INPUT.
                     * @param _captionSelectorName Name of the subtitle selector. Required when CaptionSource is set to INPUT.
                     * 
                     */
                    void SetCaptionSelectorName(const std::string& _captionSelectorName);

                    /**
                     * 判断参数 CaptionSelectorName 是否已赋值
                     * @return CaptionSelectorName 是否已赋值
                     * 
                     */
                    bool CaptionSelectorNameHasBeenSet() const;

                    /**
                     * 获取Available values: INPUT (source subtitle information), ANALYSIS (intelligent voice recognition to subtitle).
                     * @return CaptionSource Available values: INPUT (source subtitle information), ANALYSIS (intelligent voice recognition to subtitle).
                     * 
                     */
                    std::string GetCaptionSource() const;

                    /**
                     * 设置Available values: INPUT (source subtitle information), ANALYSIS (intelligent voice recognition to subtitle).
                     * @param _captionSource Available values: INPUT (source subtitle information), ANALYSIS (intelligent voice recognition to subtitle).
                     * 
                     */
                    void SetCaptionSource(const std::string& _captionSource);

                    /**
                     * 判断参数 CaptionSource 是否已赋值
                     * @return CaptionSource 是否已赋值
                     * 
                     */
                    bool CaptionSourceHasBeenSet() const;

                    /**
                     * 获取Available values: 1 Source, 2 Source+Target, 3 Target (source language only, source language + target language, target language). When the output is WebVTT, it can only output one language.
                     * @return ContentType Available values: 1 Source, 2 Source+Target, 3 Target (source language only, source language + target language, target language). When the output is WebVTT, it can only output one language.
                     * 
                     */
                    uint64_t GetContentType() const;

                    /**
                     * 设置Available values: 1 Source, 2 Source+Target, 3 Target (source language only, source language + target language, target language). When the output is WebVTT, it can only output one language.
                     * @param _contentType Available values: 1 Source, 2 Source+Target, 3 Target (source language only, source language + target language, target language). When the output is WebVTT, it can only output one language.
                     * 
                     */
                    void SetContentType(const uint64_t& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取Output mode: 1 Burn in, 2 Embedded, 3 WebVTT. When CaptionSource is INPUT, it supports only 2. When CaptionSource is ANALYSIS, it supports 1, 3.
                     * @return TargetType Output mode: 1 Burn in, 2 Embedded, 3 WebVTT. When CaptionSource is INPUT, it supports only 2. When CaptionSource is ANALYSIS, it supports 1, 3.
                     * 
                     */
                    uint64_t GetTargetType() const;

                    /**
                     * 设置Output mode: 1 Burn in, 2 Embedded, 3 WebVTT. When CaptionSource is INPUT, it supports only 2. When CaptionSource is ANALYSIS, it supports 1, 3.
                     * @param _targetType Output mode: 1 Burn in, 2 Embedded, 3 WebVTT. When CaptionSource is INPUT, it supports only 2. When CaptionSource is ANALYSIS, it supports 1, 3.
                     * 
                     */
                    void SetTargetType(const uint64_t& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取Original speech languages: Chinese, English, Japanese, Korean.
                     * @return SourceLanguage Original speech languages: Chinese, English, Japanese, Korean.
                     * 
                     */
                    std::string GetSourceLanguage() const;

                    /**
                     * 设置Original speech languages: Chinese, English, Japanese, Korean.
                     * @param _sourceLanguage Original speech languages: Chinese, English, Japanese, Korean.
                     * 
                     */
                    void SetSourceLanguage(const std::string& _sourceLanguage);

                    /**
                     * 判断参数 SourceLanguage 是否已赋值
                     * @return SourceLanguage 是否已赋值
                     * 
                     */
                    bool SourceLanguageHasBeenSet() const;

                    /**
                     * 获取Target languages: Chinese, English, Japanese, Korean.
                     * @return TargetLanguage Target languages: Chinese, English, Japanese, Korean.
                     * 
                     */
                    std::string GetTargetLanguage() const;

                    /**
                     * 设置Target languages: Chinese, English, Japanese, Korean.
                     * @param _targetLanguage Target languages: Chinese, English, Japanese, Korean.
                     * 
                     */
                    void SetTargetLanguage(const std::string& _targetLanguage);

                    /**
                     * 判断参数 TargetLanguage 是否已赋值
                     * @return TargetLanguage 是否已赋值
                     * 
                     */
                    bool TargetLanguageHasBeenSet() const;

                    /**
                     * 获取Font style configuration. Required for BurnIn.
                     * @return FontStyle Font style configuration. Required for BurnIn.
                     * 
                     */
                    SubtitleFontConf GetFontStyle() const;

                    /**
                     * 设置Font style configuration. Required for BurnIn.
                     * @param _fontStyle Font style configuration. Required for BurnIn.
                     * 
                     */
                    void SetFontStyle(const SubtitleFontConf& _fontStyle);

                    /**
                     * 判断参数 FontStyle 是否已赋值
                     * @return FontStyle 是否已赋值
                     * 
                     */
                    bool FontStyleHasBeenSet() const;

                    /**
                     * 获取STEADY and DYNAMIC modes correspond to steady state and non-steady state respectively. Default is STEADY. Only select STEADY when the output is WebVTT.
                     * @return StateEffectMode STEADY and DYNAMIC modes correspond to steady state and non-steady state respectively. Default is STEADY. Only select STEADY when the output is WebVTT.
                     * 
                     */
                    std::string GetStateEffectMode() const;

                    /**
                     * 设置STEADY and DYNAMIC modes correspond to steady state and non-steady state respectively. Default is STEADY. Only select STEADY when the output is WebVTT.
                     * @param _stateEffectMode STEADY and DYNAMIC modes correspond to steady state and non-steady state respectively. Default is STEADY. Only select STEADY when the output is WebVTT.
                     * 
                     */
                    void SetStateEffectMode(const std::string& _stateEffectMode);

                    /**
                     * 判断参数 StateEffectMode 是否已赋值
                     * @return StateEffectMode 是否已赋值
                     * 
                     */
                    bool StateEffectModeHasBeenSet() const;

                    /**
                     * 获取Steady-state delay time in seconds. Value range: 10, 20. Default: 10.
                     * @return SteadyStateDelayedTime Steady-state delay time in seconds. Value range: 10, 20. Default: 10.
                     * 
                     */
                    uint64_t GetSteadyStateDelayedTime() const;

                    /**
                     * 设置Steady-state delay time in seconds. Value range: 10, 20. Default: 10.
                     * @param _steadyStateDelayedTime Steady-state delay time in seconds. Value range: 10, 20. Default: 10.
                     * 
                     */
                    void SetSteadyStateDelayedTime(const uint64_t& _steadyStateDelayedTime);

                    /**
                     * 判断参数 SteadyStateDelayedTime 是否已赋值
                     * @return SteadyStateDelayedTime 是否已赋值
                     * 
                     */
                    bool SteadyStateDelayedTimeHasBeenSet() const;

                    /**
                     * 获取Audio selector name, required for speech recognition to generate WebVTT subtitles, can be empty
                     * @return AudioSelectorName Audio selector name, required for speech recognition to generate WebVTT subtitles, can be empty
                     * 
                     */
                    std::string GetAudioSelectorName() const;

                    /**
                     * 设置Audio selector name, required for speech recognition to generate WebVTT subtitles, can be empty
                     * @param _audioSelectorName Audio selector name, required for speech recognition to generate WebVTT subtitles, can be empty
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
                     * 获取Format configuration for WebVTT output in speech recognition.
                     * @return WebVTTFontStyle Format configuration for WebVTT output in speech recognition.
                     * 
                     */
                    WebVTTFontStyle GetWebVTTFontStyle() const;

                    /**
                     * 设置Format configuration for WebVTT output in speech recognition.
                     * @param _webVTTFontStyle Format configuration for WebVTT output in speech recognition.
                     * 
                     */
                    void SetWebVTTFontStyle(const WebVTTFontStyle& _webVTTFontStyle);

                    /**
                     * 判断参数 WebVTTFontStyle 是否已赋值
                     * @return WebVTTFontStyle 是否已赋值
                     * 
                     */
                    bool WebVTTFontStyleHasBeenSet() const;

                    /**
                     * 获取Language code, length 2-20.
                     * @return LanguageCode Language code, length 2-20.
                     * 
                     */
                    std::string GetLanguageCode() const;

                    /**
                     * 设置Language code, length 2-20.
                     * @param _languageCode Language code, length 2-20.
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
                     * 获取Language description, length less than 100.
                     * @return LanguageDescription Language description, length less than 100.
                     * 
                     */
                    std::string GetLanguageDescription() const;

                    /**
                     * 设置Language description, length less than 100.
                     * @param _languageDescription Language description, length less than 100.
                     * 
                     */
                    void SetLanguageDescription(const std::string& _languageDescription);

                    /**
                     * 判断参数 LanguageDescription 是否已赋值
                     * @return LanguageDescription 是否已赋值
                     * 
                     */
                    bool LanguageDescriptionHasBeenSet() const;

                private:

                    /**
                     * Template Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Name of the subtitle selector. Required when CaptionSource is set to INPUT.
                     */
                    std::string m_captionSelectorName;
                    bool m_captionSelectorNameHasBeenSet;

                    /**
                     * Available values: INPUT (source subtitle information), ANALYSIS (intelligent voice recognition to subtitle).
                     */
                    std::string m_captionSource;
                    bool m_captionSourceHasBeenSet;

                    /**
                     * Available values: 1 Source, 2 Source+Target, 3 Target (source language only, source language + target language, target language). When the output is WebVTT, it can only output one language.
                     */
                    uint64_t m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * Output mode: 1 Burn in, 2 Embedded, 3 WebVTT. When CaptionSource is INPUT, it supports only 2. When CaptionSource is ANALYSIS, it supports 1, 3.
                     */
                    uint64_t m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * Original speech languages: Chinese, English, Japanese, Korean.
                     */
                    std::string m_sourceLanguage;
                    bool m_sourceLanguageHasBeenSet;

                    /**
                     * Target languages: Chinese, English, Japanese, Korean.
                     */
                    std::string m_targetLanguage;
                    bool m_targetLanguageHasBeenSet;

                    /**
                     * Font style configuration. Required for BurnIn.
                     */
                    SubtitleFontConf m_fontStyle;
                    bool m_fontStyleHasBeenSet;

                    /**
                     * STEADY and DYNAMIC modes correspond to steady state and non-steady state respectively. Default is STEADY. Only select STEADY when the output is WebVTT.
                     */
                    std::string m_stateEffectMode;
                    bool m_stateEffectModeHasBeenSet;

                    /**
                     * Steady-state delay time in seconds. Value range: 10, 20. Default: 10.
                     */
                    uint64_t m_steadyStateDelayedTime;
                    bool m_steadyStateDelayedTimeHasBeenSet;

                    /**
                     * Audio selector name, required for speech recognition to generate WebVTT subtitles, can be empty
                     */
                    std::string m_audioSelectorName;
                    bool m_audioSelectorNameHasBeenSet;

                    /**
                     * Format configuration for WebVTT output in speech recognition.
                     */
                    WebVTTFontStyle m_webVTTFontStyle;
                    bool m_webVTTFontStyleHasBeenSet;

                    /**
                     * Language code, length 2-20.
                     */
                    std::string m_languageCode;
                    bool m_languageCodeHasBeenSet;

                    /**
                     * Language description, length less than 100.
                     */
                    std::string m_languageDescription;
                    bool m_languageDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_SUBTITLECONF_H_
