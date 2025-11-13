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
                     * 获取Source language of the video with smart subtitles.
Currently, the following languages are supported:
`zh`: Simplified Chinese.
`yue`: Cantonese.
`zh-PY`: Chinese, English, and Cantonese.
`zh_medical`: Chinese (medical scenario).
`zh_dialect`: Chinese dialect.
`prime_zh`: Chinese, English, and Chinese dialects.
`zh_en`: Chinese and English.
`en`: English.
`ja`: Japanese.
`ko`: Korean.
`fr`: French.
`es`: Spanish.
`it`: Italian.
`de`: German.
`tr`: Turkish.
`ru`: Russian.
`pt`: Portuguese (Brazil).
`pt-PT`: Portuguese (Portugal).
`vi`: Vietnamese.
`id`: Indonesian.
`ms`: Malay.
`th`: Thai.
`ar`: Arabic.
`hi`: Hindi.
`fil`: Filipino.
`auto`: automatic recognition (it is only supported in pure subtitle translation).
                     * @return VideoSrcLanguage Source language of the video with smart subtitles.
Currently, the following languages are supported:
`zh`: Simplified Chinese.
`yue`: Cantonese.
`zh-PY`: Chinese, English, and Cantonese.
`zh_medical`: Chinese (medical scenario).
`zh_dialect`: Chinese dialect.
`prime_zh`: Chinese, English, and Chinese dialects.
`zh_en`: Chinese and English.
`en`: English.
`ja`: Japanese.
`ko`: Korean.
`fr`: French.
`es`: Spanish.
`it`: Italian.
`de`: German.
`tr`: Turkish.
`ru`: Russian.
`pt`: Portuguese (Brazil).
`pt-PT`: Portuguese (Portugal).
`vi`: Vietnamese.
`id`: Indonesian.
`ms`: Malay.
`th`: Thai.
`ar`: Arabic.
`hi`: Hindi.
`fil`: Filipino.
`auto`: automatic recognition (it is only supported in pure subtitle translation).
                     * 
                     */
                    std::string GetVideoSrcLanguage() const;

                    /**
                     * 设置Source language of the video with smart subtitles.
Currently, the following languages are supported:
`zh`: Simplified Chinese.
`yue`: Cantonese.
`zh-PY`: Chinese, English, and Cantonese.
`zh_medical`: Chinese (medical scenario).
`zh_dialect`: Chinese dialect.
`prime_zh`: Chinese, English, and Chinese dialects.
`zh_en`: Chinese and English.
`en`: English.
`ja`: Japanese.
`ko`: Korean.
`fr`: French.
`es`: Spanish.
`it`: Italian.
`de`: German.
`tr`: Turkish.
`ru`: Russian.
`pt`: Portuguese (Brazil).
`pt-PT`: Portuguese (Portugal).
`vi`: Vietnamese.
`id`: Indonesian.
`ms`: Malay.
`th`: Thai.
`ar`: Arabic.
`hi`: Hindi.
`fil`: Filipino.
`auto`: automatic recognition (it is only supported in pure subtitle translation).
                     * @param _videoSrcLanguage Source language of the video with smart subtitles.
Currently, the following languages are supported:
`zh`: Simplified Chinese.
`yue`: Cantonese.
`zh-PY`: Chinese, English, and Cantonese.
`zh_medical`: Chinese (medical scenario).
`zh_dialect`: Chinese dialect.
`prime_zh`: Chinese, English, and Chinese dialects.
`zh_en`: Chinese and English.
`en`: English.
`ja`: Japanese.
`ko`: Korean.
`fr`: French.
`es`: Spanish.
`it`: Italian.
`de`: German.
`tr`: Turkish.
`ru`: Russian.
`pt`: Portuguese (Brazil).
`pt-PT`: Portuguese (Portugal).
`vi`: Vietnamese.
`id`: Indonesian.
`ms`: Malay.
`th`: Thai.
`ar`: Arabic.
`hi`: Hindi.
`fil`: Filipino.
`auto`: automatic recognition (it is only supported in pure subtitle translation).
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
                     * 获取Smart subtitle file format:
- Under the ASR recognition and translation processing type:
     - vtt: WebVTT format subtitle.
     - srt: SRT format subtitle.
     - If this field is unspecified or left blank, no subtitle file will be generated.
- Under the pure subtitle translation processing type:
    - original: consistent with the source file.
    - vtt: WebVTT format subtitle.
    - srt: SRT format subtitle.
**Note**:
- For ASR recognition mode, when 2 or more languages are involved in translation, this field cannot be unspecified or left blank.
- For pure subtitle translation mode, this field cannot be unspecified or left blank.
                     * @return SubtitleFormat Smart subtitle file format:
- Under the ASR recognition and translation processing type:
     - vtt: WebVTT format subtitle.
     - srt: SRT format subtitle.
     - If this field is unspecified or left blank, no subtitle file will be generated.
- Under the pure subtitle translation processing type:
    - original: consistent with the source file.
    - vtt: WebVTT format subtitle.
    - srt: SRT format subtitle.
**Note**:
- For ASR recognition mode, when 2 or more languages are involved in translation, this field cannot be unspecified or left blank.
- For pure subtitle translation mode, this field cannot be unspecified or left blank.
                     * 
                     */
                    std::string GetSubtitleFormat() const;

                    /**
                     * 设置Smart subtitle file format:
- Under the ASR recognition and translation processing type:
     - vtt: WebVTT format subtitle.
     - srt: SRT format subtitle.
     - If this field is unspecified or left blank, no subtitle file will be generated.
- Under the pure subtitle translation processing type:
    - original: consistent with the source file.
    - vtt: WebVTT format subtitle.
    - srt: SRT format subtitle.
**Note**:
- For ASR recognition mode, when 2 or more languages are involved in translation, this field cannot be unspecified or left blank.
- For pure subtitle translation mode, this field cannot be unspecified or left blank.
                     * @param _subtitleFormat Smart subtitle file format:
- Under the ASR recognition and translation processing type:
     - vtt: WebVTT format subtitle.
     - srt: SRT format subtitle.
     - If this field is unspecified or left blank, no subtitle file will be generated.
- Under the pure subtitle translation processing type:
    - original: consistent with the source file.
    - vtt: WebVTT format subtitle.
    - srt: SRT format subtitle.
**Note**:
- For ASR recognition mode, when 2 or more languages are involved in translation, this field cannot be unspecified or left blank.
- For pure subtitle translation mode, this field cannot be unspecified or left blank.
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
`ON`: translation enabled.
`OFF`: translation disabled.
**Note**: For pure subtitle translation mode, the default value is enabled if the field is unspecified. The field cannot be left blank or set to `OFF`.
                     * @return TranslateSwitch Subtitle translation switch.
`ON`: translation enabled.
`OFF`: translation disabled.
**Note**: For pure subtitle translation mode, the default value is enabled if the field is unspecified. The field cannot be left blank or set to `OFF`.
                     * 
                     */
                    std::string GetTranslateSwitch() const;

                    /**
                     * 设置Subtitle translation switch.
`ON`: translation enabled.
`OFF`: translation disabled.
**Note**: For pure subtitle translation mode, the default value is enabled if the field is unspecified. The field cannot be left blank or set to `OFF`.
                     * @param _translateSwitch Subtitle translation switch.
`ON`: translation enabled.
`OFF`: translation disabled.
**Note**: For pure subtitle translation mode, the default value is enabled if the field is unspecified. The field cannot be left blank or set to `OFF`.
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
                     * 获取Subtitle translation target language. This field is valid when the value of TranslateSwitch is `ON`.
Currently, the following languages are supported:
`zh`: Simplified Chinese.
`zh-TW`: Traditional Chinese.
`en`: English.
`ja`: Japanese.
`ko`: Korean.
`fr`: French.
`es`: Spanish.
`it`: Italian.
`de`: German.
`tr`: Turkish.
`ru`: Russian.
`pt`: Portuguese (Brazil).
`pt-PT`: Portuguese (Portugal).
`vi`: Vietnamese.
`id`: Indonesian.
`ms`: Malay.
`th`: Thai.
`ar`: Arabic.
`hi`: Hindi.
`fil`: Filipino.
**Note**: Use `/` to separate multiple languages, such as `en/ja`, which indicates English and Japanese.
                     * @return TranslateDstLanguage Subtitle translation target language. This field is valid when the value of TranslateSwitch is `ON`.
Currently, the following languages are supported:
`zh`: Simplified Chinese.
`zh-TW`: Traditional Chinese.
`en`: English.
`ja`: Japanese.
`ko`: Korean.
`fr`: French.
`es`: Spanish.
`it`: Italian.
`de`: German.
`tr`: Turkish.
`ru`: Russian.
`pt`: Portuguese (Brazil).
`pt-PT`: Portuguese (Portugal).
`vi`: Vietnamese.
`id`: Indonesian.
`ms`: Malay.
`th`: Thai.
`ar`: Arabic.
`hi`: Hindi.
`fil`: Filipino.
**Note**: Use `/` to separate multiple languages, such as `en/ja`, which indicates English and Japanese.
                     * 
                     */
                    std::string GetTranslateDstLanguage() const;

                    /**
                     * 设置Subtitle translation target language. This field is valid when the value of TranslateSwitch is `ON`.
Currently, the following languages are supported:
`zh`: Simplified Chinese.
`zh-TW`: Traditional Chinese.
`en`: English.
`ja`: Japanese.
`ko`: Korean.
`fr`: French.
`es`: Spanish.
`it`: Italian.
`de`: German.
`tr`: Turkish.
`ru`: Russian.
`pt`: Portuguese (Brazil).
`pt-PT`: Portuguese (Portugal).
`vi`: Vietnamese.
`id`: Indonesian.
`ms`: Malay.
`th`: Thai.
`ar`: Arabic.
`hi`: Hindi.
`fil`: Filipino.
**Note**: Use `/` to separate multiple languages, such as `en/ja`, which indicates English and Japanese.
                     * @param _translateDstLanguage Subtitle translation target language. This field is valid when the value of TranslateSwitch is `ON`.
Currently, the following languages are supported:
`zh`: Simplified Chinese.
`zh-TW`: Traditional Chinese.
`en`: English.
`ja`: Japanese.
`ko`: Korean.
`fr`: French.
`es`: Spanish.
`it`: Italian.
`de`: German.
`tr`: Turkish.
`ru`: Russian.
`pt`: Portuguese (Brazil).
`pt-PT`: Portuguese (Portugal).
`vi`: Vietnamese.
`id`: Indonesian.
`ms`: Malay.
`th`: Thai.
`ar`: Arabic.
`hi`: Hindi.
`fil`: Filipino.
**Note**: Use `/` to separate multiple languages, such as `en/ja`, which indicates English and Japanese.
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
                     * 获取Subtitle processing type:
- 0: ASR recognition subtitle.
- 1: pure subtitle translation.
**Note**: The default processing type is ASR recognition subtitle if the field is unspecified.
                     * @return ProcessType Subtitle processing type:
- 0: ASR recognition subtitle.
- 1: pure subtitle translation.
**Note**: The default processing type is ASR recognition subtitle if the field is unspecified.
                     * 
                     */
                    uint64_t GetProcessType() const;

                    /**
                     * 设置Subtitle processing type:
- 0: ASR recognition subtitle.
- 1: pure subtitle translation.
**Note**: The default processing type is ASR recognition subtitle if the field is unspecified.
                     * @param _processType Subtitle processing type:
- 0: ASR recognition subtitle.
- 1: pure subtitle translation.
**Note**: The default processing type is ASR recognition subtitle if the field is unspecified.
                     * 
                     */
                    void SetProcessType(const uint64_t& _processType);

                    /**
                     * 判断参数 ProcessType 是否已赋值
                     * @return ProcessType 是否已赋值
                     * 
                     */
                    bool ProcessTypeHasBeenSet() const;

                private:

                    /**
                     * Smart subtitle template name.
Length limit: 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Source language of the video with smart subtitles.
Currently, the following languages are supported:
`zh`: Simplified Chinese.
`yue`: Cantonese.
`zh-PY`: Chinese, English, and Cantonese.
`zh_medical`: Chinese (medical scenario).
`zh_dialect`: Chinese dialect.
`prime_zh`: Chinese, English, and Chinese dialects.
`zh_en`: Chinese and English.
`en`: English.
`ja`: Japanese.
`ko`: Korean.
`fr`: French.
`es`: Spanish.
`it`: Italian.
`de`: German.
`tr`: Turkish.
`ru`: Russian.
`pt`: Portuguese (Brazil).
`pt-PT`: Portuguese (Portugal).
`vi`: Vietnamese.
`id`: Indonesian.
`ms`: Malay.
`th`: Thai.
`ar`: Arabic.
`hi`: Hindi.
`fil`: Filipino.
`auto`: automatic recognition (it is only supported in pure subtitle translation).
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
                     * Smart subtitle file format:
- Under the ASR recognition and translation processing type:
     - vtt: WebVTT format subtitle.
     - srt: SRT format subtitle.
     - If this field is unspecified or left blank, no subtitle file will be generated.
- Under the pure subtitle translation processing type:
    - original: consistent with the source file.
    - vtt: WebVTT format subtitle.
    - srt: SRT format subtitle.
**Note**:
- For ASR recognition mode, when 2 or more languages are involved in translation, this field cannot be unspecified or left blank.
- For pure subtitle translation mode, this field cannot be unspecified or left blank.
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
`ON`: translation enabled.
`OFF`: translation disabled.
**Note**: For pure subtitle translation mode, the default value is enabled if the field is unspecified. The field cannot be left blank or set to `OFF`.
                     */
                    std::string m_translateSwitch;
                    bool m_translateSwitchHasBeenSet;

                    /**
                     * Subtitle translation target language. This field is valid when the value of TranslateSwitch is `ON`.
Currently, the following languages are supported:
`zh`: Simplified Chinese.
`zh-TW`: Traditional Chinese.
`en`: English.
`ja`: Japanese.
`ko`: Korean.
`fr`: French.
`es`: Spanish.
`it`: Italian.
`de`: German.
`tr`: Turkish.
`ru`: Russian.
`pt`: Portuguese (Brazil).
`pt-PT`: Portuguese (Portugal).
`vi`: Vietnamese.
`id`: Indonesian.
`ms`: Malay.
`th`: Thai.
`ar`: Arabic.
`hi`: Hindi.
`fil`: Filipino.
**Note**: Use `/` to separate multiple languages, such as `en/ja`, which indicates English and Japanese.
                     */
                    std::string m_translateDstLanguage;
                    bool m_translateDstLanguageHasBeenSet;

                    /**
                     * Subtitle processing type:
- 0: ASR recognition subtitle.
- 1: pure subtitle translation.
**Note**: The default processing type is ASR recognition subtitle if the field is unspecified.
                     */
                    uint64_t m_processType;
                    bool m_processTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATESMARTSUBTITLETEMPLATEREQUEST_H_
