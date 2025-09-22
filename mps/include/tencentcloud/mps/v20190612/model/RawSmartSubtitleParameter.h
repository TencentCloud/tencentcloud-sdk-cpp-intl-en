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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_RAWSMARTSUBTITLEPARAMETER_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_RAWSMARTSUBTITLEPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AsrHotWordsConfigure.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Custom smart subtitle parameter.
                */
                class RawSmartSubtitleParameter : public AbstractModel
                {
                public:
                    RawSmartSubtitleParameter();
                    ~RawSmartSubtitleParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Smart subtitle language type.
0: source language
1: target language
2: source language + target language
The value can only be 0 when TranslateSwitch is set to OFF. The value can only be 1 or 2 when TranslateSwitch is set to ON.
                     * @return SubtitleType Smart subtitle language type.
0: source language
1: target language
2: source language + target language
The value can only be 0 when TranslateSwitch is set to OFF. The value can only be 1 or 2 when TranslateSwitch is set to ON.
                     * 
                     */
                    int64_t GetSubtitleType() const;

                    /**
                     * 设置Smart subtitle language type.
0: source language
1: target language
2: source language + target language
The value can only be 0 when TranslateSwitch is set to OFF. The value can only be 1 or 2 when TranslateSwitch is set to ON.
                     * @param _subtitleType Smart subtitle language type.
0: source language
1: target language
2: source language + target language
The value can only be 0 when TranslateSwitch is set to OFF. The value can only be 1 or 2 when TranslateSwitch is set to ON.
                     * 
                     */
                    void SetSubtitleType(const int64_t& _subtitleType);

                    /**
                     * 判断参数 SubtitleType 是否已赋值
                     * @return SubtitleType 是否已赋值
                     * 
                     */
                    bool SubtitleTypeHasBeenSet() const;

                    /**
                     * 获取Video source language for intelligent caption.
Valid values: 
zh: Simplified Chinese.
en: Eenglish.
Ja: Japanese.
Ko: Korean.
zh-PY: Simplified Chinese, English and Cantonese.
zh-medical: Medical Chinese.
yue: Cantonese.
Vi: Vietnamese.
ms: Malay.
id: Indonesian.
fil: Filipino.
th: Thai.
pt: Portuguese.
tr: Turkish.
ar: Arabic.
es: Spanish.
hi: Hindi
Fr: French.
de: German.
zh-dialect: Chinese dialect
zh_en: Simplified Chinese and English
prime_zh: Simplified Chinese, Chinese Dialect and English.
                     * @return VideoSrcLanguage Video source language for intelligent caption.
Valid values: 
zh: Simplified Chinese.
en: Eenglish.
Ja: Japanese.
Ko: Korean.
zh-PY: Simplified Chinese, English and Cantonese.
zh-medical: Medical Chinese.
yue: Cantonese.
Vi: Vietnamese.
ms: Malay.
id: Indonesian.
fil: Filipino.
th: Thai.
pt: Portuguese.
tr: Turkish.
ar: Arabic.
es: Spanish.
hi: Hindi
Fr: French.
de: German.
zh-dialect: Chinese dialect
zh_en: Simplified Chinese and English
prime_zh: Simplified Chinese, Chinese Dialect and English.
                     * 
                     */
                    std::string GetVideoSrcLanguage() const;

                    /**
                     * 设置Video source language for intelligent caption.
Valid values: 
zh: Simplified Chinese.
en: Eenglish.
Ja: Japanese.
Ko: Korean.
zh-PY: Simplified Chinese, English and Cantonese.
zh-medical: Medical Chinese.
yue: Cantonese.
Vi: Vietnamese.
ms: Malay.
id: Indonesian.
fil: Filipino.
th: Thai.
pt: Portuguese.
tr: Turkish.
ar: Arabic.
es: Spanish.
hi: Hindi
Fr: French.
de: German.
zh-dialect: Chinese dialect
zh_en: Simplified Chinese and English
prime_zh: Simplified Chinese, Chinese Dialect and English.
                     * @param _videoSrcLanguage Video source language for intelligent caption.
Valid values: 
zh: Simplified Chinese.
en: Eenglish.
Ja: Japanese.
Ko: Korean.
zh-PY: Simplified Chinese, English and Cantonese.
zh-medical: Medical Chinese.
yue: Cantonese.
Vi: Vietnamese.
ms: Malay.
id: Indonesian.
fil: Filipino.
th: Thai.
pt: Portuguese.
tr: Turkish.
ar: Arabic.
es: Spanish.
hi: Hindi
Fr: French.
de: German.
zh-dialect: Chinese dialect
zh_en: Simplified Chinese and English
prime_zh: Simplified Chinese, Chinese Dialect and English.
                     * 
                     */
                    void SetVideoSrcLanguage(const std::string& _videoSrcLanguage);

                    /**
                     * 判断参数 VideoSrcLanguage 是否已赋值
                     * @return VideoSrcLanguage 是否已赋值
                     * 
                     */
                    bool VideoSrcLanguageHasBeenSet() const;

                    /**
                     * 获取Intelligent subtitle file format.
vtt: WebVTT format.
srt: SRT format.
If this field is left blank, no subtitle file will be generated.
                     * @return SubtitleFormat Intelligent subtitle file format.
vtt: WebVTT format.
srt: SRT format.
If this field is left blank, no subtitle file will be generated.
                     * 
                     */
                    std::string GetSubtitleFormat() const;

                    /**
                     * 设置Intelligent subtitle file format.
vtt: WebVTT format.
srt: SRT format.
If this field is left blank, no subtitle file will be generated.
                     * @param _subtitleFormat Intelligent subtitle file format.
vtt: WebVTT format.
srt: SRT format.
If this field is left blank, no subtitle file will be generated.
                     * 
                     */
                    void SetSubtitleFormat(const std::string& _subtitleFormat);

                    /**
                     * 判断参数 SubtitleFormat 是否已赋值
                     * @return SubtitleFormat 是否已赋值
                     * 
                     */
                    bool SubtitleFormatHasBeenSet() const;

                    /**
                     * 获取Subtitle translation switch.
ON: enable translation
OFF: disable translation
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TranslateSwitch Subtitle translation switch.
ON: enable translation
OFF: disable translation
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTranslateSwitch() const;

                    /**
                     * 设置Subtitle translation switch.
ON: enable translation
OFF: disable translation
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _translateSwitch Subtitle translation switch.
ON: enable translation
OFF: disable translation
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTranslateSwitch(const std::string& _translateSwitch);

                    /**
                     * 判断参数 TranslateSwitch 是否已赋值
                     * @return TranslateSwitch 是否已赋值
                     * 
                     */
                    bool TranslateSwitchHasBeenSet() const;

                    /**
                     * 获取Target language for subtitle translation.
This field takes effect when TranslateSwitch is set to ON.
Supported languages:
zh: Simplified Chinese
en: English
ja: Japanese
ko: Korean
fr: French
es: Spanish
it: Italian
de: German
tr: Turkish
ru: Russian
pt: Portuguese
vi: Vietnamese
id: Indonesian
ms: Malay
th: Thai
ar: Arabic
hi: Hindi
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TranslateDstLanguage Target language for subtitle translation.
This field takes effect when TranslateSwitch is set to ON.
Supported languages:
zh: Simplified Chinese
en: English
ja: Japanese
ko: Korean
fr: French
es: Spanish
it: Italian
de: German
tr: Turkish
ru: Russian
pt: Portuguese
vi: Vietnamese
id: Indonesian
ms: Malay
th: Thai
ar: Arabic
hi: Hindi
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTranslateDstLanguage() const;

                    /**
                     * 设置Target language for subtitle translation.
This field takes effect when TranslateSwitch is set to ON.
Supported languages:
zh: Simplified Chinese
en: English
ja: Japanese
ko: Korean
fr: French
es: Spanish
it: Italian
de: German
tr: Turkish
ru: Russian
pt: Portuguese
vi: Vietnamese
id: Indonesian
ms: Malay
th: Thai
ar: Arabic
hi: Hindi
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _translateDstLanguage Target language for subtitle translation.
This field takes effect when TranslateSwitch is set to ON.
Supported languages:
zh: Simplified Chinese
en: English
ja: Japanese
ko: Korean
fr: French
es: Spanish
it: Italian
de: German
tr: Turkish
ru: Russian
pt: Portuguese
vi: Vietnamese
id: Indonesian
ms: Malay
th: Thai
ar: Arabic
hi: Hindi
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTranslateDstLanguage(const std::string& _translateDstLanguage);

                    /**
                     * 判断参数 TranslateDstLanguage 是否已赋值
                     * @return TranslateDstLanguage 是否已赋值
                     * 
                     */
                    bool TranslateDstLanguageHasBeenSet() const;

                    /**
                     * 获取ASR hotword lexicon parameter.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AsrHotWordsConfigure ASR hotword lexicon parameter.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    AsrHotWordsConfigure GetAsrHotWordsConfigure() const;

                    /**
                     * 设置ASR hotword lexicon parameter.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _asrHotWordsConfigure ASR hotword lexicon parameter.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAsrHotWordsConfigure(const AsrHotWordsConfigure& _asrHotWordsConfigure);

                    /**
                     * 判断参数 AsrHotWordsConfigure 是否已赋值
                     * @return AsrHotWordsConfigure 是否已赋值
                     * 
                     */
                    bool AsrHotWordsConfigureHasBeenSet() const;

                    /**
                     * 获取Custom parameter.
                     * @return ExtInfo Custom parameter.
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置Custom parameter.
                     * @param _extInfo Custom parameter.
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * Smart subtitle language type.
0: source language
1: target language
2: source language + target language
The value can only be 0 when TranslateSwitch is set to OFF. The value can only be 1 or 2 when TranslateSwitch is set to ON.
                     */
                    int64_t m_subtitleType;
                    bool m_subtitleTypeHasBeenSet;

                    /**
                     * Video source language for intelligent caption.
Valid values: 
zh: Simplified Chinese.
en: Eenglish.
Ja: Japanese.
Ko: Korean.
zh-PY: Simplified Chinese, English and Cantonese.
zh-medical: Medical Chinese.
yue: Cantonese.
Vi: Vietnamese.
ms: Malay.
id: Indonesian.
fil: Filipino.
th: Thai.
pt: Portuguese.
tr: Turkish.
ar: Arabic.
es: Spanish.
hi: Hindi
Fr: French.
de: German.
zh-dialect: Chinese dialect
zh_en: Simplified Chinese and English
prime_zh: Simplified Chinese, Chinese Dialect and English.
                     */
                    std::string m_videoSrcLanguage;
                    bool m_videoSrcLanguageHasBeenSet;

                    /**
                     * Intelligent subtitle file format.
vtt: WebVTT format.
srt: SRT format.
If this field is left blank, no subtitle file will be generated.
                     */
                    std::string m_subtitleFormat;
                    bool m_subtitleFormatHasBeenSet;

                    /**
                     * Subtitle translation switch.
ON: enable translation
OFF: disable translation
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_translateSwitch;
                    bool m_translateSwitchHasBeenSet;

                    /**
                     * Target language for subtitle translation.
This field takes effect when TranslateSwitch is set to ON.
Supported languages:
zh: Simplified Chinese
en: English
ja: Japanese
ko: Korean
fr: French
es: Spanish
it: Italian
de: German
tr: Turkish
ru: Russian
pt: Portuguese
vi: Vietnamese
id: Indonesian
ms: Malay
th: Thai
ar: Arabic
hi: Hindi
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_translateDstLanguage;
                    bool m_translateDstLanguageHasBeenSet;

                    /**
                     * ASR hotword lexicon parameter.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    AsrHotWordsConfigure m_asrHotWordsConfigure;
                    bool m_asrHotWordsConfigureHasBeenSet;

                    /**
                     * Custom parameter.
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_RAWSMARTSUBTITLEPARAMETER_H_
