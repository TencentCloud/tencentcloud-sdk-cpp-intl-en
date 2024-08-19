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
                     * 获取Template name.
                     * @return Name Template name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Template name.
                     * @param _name Template name.
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
                     * 获取Name of caption selector. Required when CaptionSource selects `INPUT`.
                     * @return CaptionSelectorName Name of caption selector. Required when CaptionSource selects `INPUT`.
                     * 
                     */
                    std::string GetCaptionSelectorName() const;

                    /**
                     * 设置Name of caption selector. Required when CaptionSource selects `INPUT`.
                     * @param _captionSelectorName Name of caption selector. Required when CaptionSource selects `INPUT`.
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
                     * 获取Optional values: INPUT (source subtitle information), ANALYSIS (intelligent speech recognition to subtitles).
                     * @return CaptionSource Optional values: INPUT (source subtitle information), ANALYSIS (intelligent speech recognition to subtitles).
                     * 
                     */
                    std::string GetCaptionSource() const;

                    /**
                     * 设置Optional values: INPUT (source subtitle information), ANALYSIS (intelligent speech recognition to subtitles).
                     * @param _captionSource Optional values: INPUT (source subtitle information), ANALYSIS (intelligent speech recognition to subtitles).
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
                     * 获取Optional values: 1 Source, 2 Source+Target, 3 Target (original language only, original language + translation language, translation language). Required when CaptionSource selects `ANALYSIS `.
                     * @return ContentType Optional values: 1 Source, 2 Source+Target, 3 Target (original language only, original language + translation language, translation language). Required when CaptionSource selects `ANALYSIS `.
                     * 
                     */
                    uint64_t GetContentType() const;

                    /**
                     * 设置Optional values: 1 Source, 2 Source+Target, 3 Target (original language only, original language + translation language, translation language). Required when CaptionSource selects `ANALYSIS `.
                     * @param _contentType Optional values: 1 Source, 2 Source+Target, 3 Target (original language only, original language + translation language, translation language). Required when CaptionSource selects `ANALYSIS `.
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
                     * 获取Output mode: 1 Burn in, 2 Embedded. Support `2` when CaptionSource selects `INPUT`. Support `1` when CaptionSource selects `ANALYSIS `.
                     * @return TargetType Output mode: 1 Burn in, 2 Embedded. Support `2` when CaptionSource selects `INPUT`. Support `1` when CaptionSource selects `ANALYSIS `.
                     * 
                     */
                    uint64_t GetTargetType() const;

                    /**
                     * 设置Output mode: 1 Burn in, 2 Embedded. Support `2` when CaptionSource selects `INPUT`. Support `1` when CaptionSource selects `ANALYSIS `.
                     * @param _targetType Output mode: 1 Burn in, 2 Embedded. Support `2` when CaptionSource selects `INPUT`. Support `1` when CaptionSource selects `ANALYSIS `.
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
                     * 获取Original phonetic language.
Optional values: Chinese, English, Japanese, Korean. Required when CaptionSource selects `ANALYSIS `.
                     * @return SourceLanguage Original phonetic language.
Optional values: Chinese, English, Japanese, Korean. Required when CaptionSource selects `ANALYSIS `.
                     * 
                     */
                    std::string GetSourceLanguage() const;

                    /**
                     * 设置Original phonetic language.
Optional values: Chinese, English, Japanese, Korean. Required when CaptionSource selects `ANALYSIS `.
                     * @param _sourceLanguage Original phonetic language.
Optional values: Chinese, English, Japanese, Korean. Required when CaptionSource selects `ANALYSIS `.
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
                     * 获取Target language.
Optional values: Chinese, English, Japanese, Korean. Required when CaptionSource selects `ANALYSIS `.
                     * @return TargetLanguage Target language.
Optional values: Chinese, English, Japanese, Korean. Required when CaptionSource selects `ANALYSIS `.
                     * 
                     */
                    std::string GetTargetLanguage() const;

                    /**
                     * 设置Target language.
Optional values: Chinese, English, Japanese, Korean. Required when CaptionSource selects `ANALYSIS `.
                     * @param _targetLanguage Target language.
Optional values: Chinese, English, Japanese, Korean. Required when CaptionSource selects `ANALYSIS `.
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
                     * 获取Font style configuration. Required when CaptionSource selects `ANALYSIS `.
                     * @return FontStyle Font style configuration. Required when CaptionSource selects `ANALYSIS `.
                     * 
                     */
                    SubtitleFontConf GetFontStyle() const;

                    /**
                     * 设置Font style configuration. Required when CaptionSource selects `ANALYSIS `.
                     * @param _fontStyle Font style configuration. Required when CaptionSource selects `ANALYSIS `.
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
                     * 获取There are two modes: STEADY and DYNAMIC, corresponding to steady state and unstable state respectively; the default is STEADY. Required when CaptionSource selects `ANALYSIS `.
                     * @return StateEffectMode There are two modes: STEADY and DYNAMIC, corresponding to steady state and unstable state respectively; the default is STEADY. Required when CaptionSource selects `ANALYSIS `.
                     * 
                     */
                    std::string GetStateEffectMode() const;

                    /**
                     * 设置There are two modes: STEADY and DYNAMIC, corresponding to steady state and unstable state respectively; the default is STEADY. Required when CaptionSource selects `ANALYSIS `.
                     * @param _stateEffectMode There are two modes: STEADY and DYNAMIC, corresponding to steady state and unstable state respectively; the default is STEADY. Required when CaptionSource selects `ANALYSIS `.
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
                     * 获取Steady-state delay time, unit seconds; optional values: 10, 20, default 10. Required when CaptionSource selects `ANALYSIS `.
                     * @return SteadyStateDelayedTime Steady-state delay time, unit seconds; optional values: 10, 20, default 10. Required when CaptionSource selects `ANALYSIS `.
                     * 
                     */
                    uint64_t GetSteadyStateDelayedTime() const;

                    /**
                     * 设置Steady-state delay time, unit seconds; optional values: 10, 20, default 10. Required when CaptionSource selects `ANALYSIS `.
                     * @param _steadyStateDelayedTime Steady-state delay time, unit seconds; optional values: 10, 20, default 10. Required when CaptionSource selects `ANALYSIS `.
                     * 
                     */
                    void SetSteadyStateDelayedTime(const uint64_t& _steadyStateDelayedTime);

                    /**
                     * 判断参数 SteadyStateDelayedTime 是否已赋值
                     * @return SteadyStateDelayedTime 是否已赋值
                     * 
                     */
                    bool SteadyStateDelayedTimeHasBeenSet() const;

                private:

                    /**
                     * Template name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Name of caption selector. Required when CaptionSource selects `INPUT`.
                     */
                    std::string m_captionSelectorName;
                    bool m_captionSelectorNameHasBeenSet;

                    /**
                     * Optional values: INPUT (source subtitle information), ANALYSIS (intelligent speech recognition to subtitles).
                     */
                    std::string m_captionSource;
                    bool m_captionSourceHasBeenSet;

                    /**
                     * Optional values: 1 Source, 2 Source+Target, 3 Target (original language only, original language + translation language, translation language). Required when CaptionSource selects `ANALYSIS `.
                     */
                    uint64_t m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * Output mode: 1 Burn in, 2 Embedded. Support `2` when CaptionSource selects `INPUT`. Support `1` when CaptionSource selects `ANALYSIS `.
                     */
                    uint64_t m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * Original phonetic language.
Optional values: Chinese, English, Japanese, Korean. Required when CaptionSource selects `ANALYSIS `.
                     */
                    std::string m_sourceLanguage;
                    bool m_sourceLanguageHasBeenSet;

                    /**
                     * Target language.
Optional values: Chinese, English, Japanese, Korean. Required when CaptionSource selects `ANALYSIS `.
                     */
                    std::string m_targetLanguage;
                    bool m_targetLanguageHasBeenSet;

                    /**
                     * Font style configuration. Required when CaptionSource selects `ANALYSIS `.
                     */
                    SubtitleFontConf m_fontStyle;
                    bool m_fontStyleHasBeenSet;

                    /**
                     * There are two modes: STEADY and DYNAMIC, corresponding to steady state and unstable state respectively; the default is STEADY. Required when CaptionSource selects `ANALYSIS `.
                     */
                    std::string m_stateEffectMode;
                    bool m_stateEffectModeHasBeenSet;

                    /**
                     * Steady-state delay time, unit seconds; optional values: 10, 20, default 10. Required when CaptionSource selects `ANALYSIS `.
                     */
                    uint64_t m_steadyStateDelayedTime;
                    bool m_steadyStateDelayedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_SUBTITLECONF_H_
