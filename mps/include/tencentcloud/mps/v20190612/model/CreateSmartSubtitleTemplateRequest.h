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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATESMARTSUBTITLETEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATESMARTSUBTITLETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateSmartSubtitleTemplate request structure.
                */
                class CreateSmartSubtitleTemplateRequest : public AbstractModel
                {
                public:
                    CreateSmartSubtitleTemplateRequest();
                    ~CreateSmartSubtitleTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Smart subtitle template name.
Length limit: 64 characters.
                     * @return Name Smart subtitle template name.
Length limit: 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Smart subtitle template name.
Length limit: 64 characters.
                     * @param _name Smart subtitle template name.
Length limit: 64 characters.
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
                     * 获取Smart subtitle template description.
Length limit: 256 characters.
                     * @return Comment Smart subtitle template description.
Length limit: 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Smart subtitle template description.
Length limit: 256 characters.
                     * @param _comment Smart subtitle template description.
Length limit: 256 characters.
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

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
                     * 获取ASR hotword lexicon parameter.
                     * @return AsrHotWordsConfigure ASR hotword lexicon parameter.
                     * 
                     */
                    AsrHotWordsConfigure GetAsrHotWordsConfigure() const;

                    /**
                     * 设置ASR hotword lexicon parameter.
                     * @param _asrHotWordsConfigure ASR hotword lexicon parameter.
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
                     * 获取Subtitle translation switch.
ON: enable translation
OFF: disable translation
                     * @return TranslateSwitch Subtitle translation switch.
ON: enable translation
OFF: disable translation
                     * 
                     */
                    std::string GetTranslateSwitch() const;

                    /**
                     * 设置Subtitle translation switch.
ON: enable translation
OFF: disable translation
                     * @param _translateSwitch Subtitle translation switch.
ON: enable translation
OFF: disable translation
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
                     * 
                     */
                    void SetTranslateDstLanguage(const std::string& _translateDstLanguage);

                    /**
                     * 判断参数 TranslateDstLanguage 是否已赋值
                     * @return TranslateDstLanguage 是否已赋值
                     * 
                     */
                    bool TranslateDstLanguageHasBeenSet() const;

                private:

                    /**
                     * Smart subtitle template name.
Length limit: 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

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
                     * Smart subtitle language type.
0: source language
1: target language
2: source language + target language
The value can only be 0 when TranslateSwitch is set to OFF. The value can only be 1 or 2 when TranslateSwitch is set to ON.
                     */
                    int64_t m_subtitleType;
                    bool m_subtitleTypeHasBeenSet;

                    /**
                     * Smart subtitle template description.
Length limit: 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Intelligent subtitle file format.
vtt: WebVTT format.
srt: SRT format.
If this field is left blank, no subtitle file will be generated.
                     */
                    std::string m_subtitleFormat;
                    bool m_subtitleFormatHasBeenSet;

                    /**
                     * ASR hotword lexicon parameter.
                     */
                    AsrHotWordsConfigure m_asrHotWordsConfigure;
                    bool m_asrHotWordsConfigureHasBeenSet;

                    /**
                     * Subtitle translation switch.
ON: enable translation
OFF: disable translation
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
                     */
                    std::string m_translateDstLanguage;
                    bool m_translateDstLanguageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATESMARTSUBTITLETEMPLATEREQUEST_H_
