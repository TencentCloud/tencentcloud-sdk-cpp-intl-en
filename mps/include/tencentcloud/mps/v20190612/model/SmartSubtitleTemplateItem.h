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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETEMPLATEITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETEMPLATEITEM_H_

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
                * Smart subtitle template details.
                */
                class SmartSubtitleTemplateItem : public AbstractModel
                {
                public:
                    SmartSubtitleTemplateItem();
                    ~SmartSubtitleTemplateItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique identifier of the smart subtitle template.
                     * @return Definition Unique identifier of the smart subtitle template.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Unique identifier of the smart subtitle template.
                     * @param _definition Unique identifier of the smart subtitle template.
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Smart subtitle template name.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Name Smart subtitle template name.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Smart subtitle template name.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _name Smart subtitle template name.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Smart subtitle template description.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Comment Smart subtitle template description.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Smart subtitle template description.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _comment Smart subtitle template description.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Template type. Valid values:
* Preset: system preset template
* Custom: user-defined template
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Type Template type. Valid values:
* Preset: system preset template
* Custom: user-defined template
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Template type. Valid values:
* Preset: system preset template
* Custom: user-defined template
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _type Template type. Valid values:
* Preset: system preset template
* Custom: user-defined template
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

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
                     * 获取Name of the hotword lexicon associated with the template.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AsrHotWordsLibraryName Name of the hotword lexicon associated with the template.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetAsrHotWordsLibraryName() const;

                    /**
                     * 设置Name of the hotword lexicon associated with the template.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _asrHotWordsLibraryName Name of the hotword lexicon associated with the template.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAsrHotWordsLibraryName(const std::string& _asrHotWordsLibraryName);

                    /**
                     * 判断参数 AsrHotWordsLibraryName 是否已赋值
                     * @return AsrHotWordsLibraryName 是否已赋值
                     * 
                     */
                    bool AsrHotWordsLibraryNameHasBeenSet() const;

                    /**
                     * 获取List of source languages of the video with smart subtitles.
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
                     * @return VideoSrcLanguage List of source languages of the video with smart subtitles.
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
                     * 设置List of source languages of the video with smart subtitles.
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
                     * @param _videoSrcLanguage List of source languages of the video with smart subtitles.
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
                     * 获取Smart subtitle file format:
- vtt: WebVTT format.
- srt: SRT format.
- original: consistent with the source subtitle file (it is used for the pure subtitle translation template).
- If this field is unspecified or left blank, no subtitle file will be generated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubtitleFormat Smart subtitle file format:
- vtt: WebVTT format.
- srt: SRT format.
- original: consistent with the source subtitle file (it is used for the pure subtitle translation template).
- If this field is unspecified or left blank, no subtitle file will be generated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubtitleFormat() const;

                    /**
                     * 设置Smart subtitle file format:
- vtt: WebVTT format.
- srt: SRT format.
- original: consistent with the source subtitle file (it is used for the pure subtitle translation template).
- If this field is unspecified or left blank, no subtitle file will be generated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subtitleFormat Smart subtitle file format:
- vtt: WebVTT format.
- srt: SRT format.
- original: consistent with the source subtitle file (it is used for the pure subtitle translation template).
- If this field is unspecified or left blank, no subtitle file will be generated.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Smart subtitle language type.
0: source language1: target language
2: source language + target language
The value can only be 0 when TranslateSwitch is set to OFF.The value can only be 1 or 2 when TranslateSwitch is set to ON.
                     * @return SubtitleType Smart subtitle language type.
0: source language1: target language
2: source language + target language
The value can only be 0 when TranslateSwitch is set to OFF.The value can only be 1 or 2 when TranslateSwitch is set to ON.
                     * 
                     */
                    int64_t GetSubtitleType() const;

                    /**
                     * 设置Smart subtitle language type.
0: source language1: target language
2: source language + target language
The value can only be 0 when TranslateSwitch is set to OFF.The value can only be 1 or 2 when TranslateSwitch is set to ON.
                     * @param _subtitleType Smart subtitle language type.
0: source language1: target language
2: source language + target language
The value can only be 0 when TranslateSwitch is set to OFF.The value can only be 1 or 2 when TranslateSwitch is set to ON.
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
This field is valid when the value of TranslateSwitch is ON.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TranslateDstLanguage Target language for subtitle translation.
This field is valid when the value of TranslateSwitch is ON.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTranslateDstLanguage() const;

                    /**
                     * 设置Target language for subtitle translation.
This field is valid when the value of TranslateSwitch is ON.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _translateDstLanguage Target language for subtitle translation.
This field is valid when the value of TranslateSwitch is ON.
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
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Template creation time in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
                     * @return CreateTime Template creation time in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Template creation time in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
                     * @param _createTime Template creation time in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last modification time of the template in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
                     * @return UpdateTime Last modification time of the template in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modification time of the template in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
                     * @param _updateTime Last modification time of the template in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Alias of the preset smart subtitle template.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AliasName Alias of the preset smart subtitle template.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置Alias of the preset smart subtitle template.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _aliasName Alias of the preset smart subtitle template.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     * 
                     */
                    bool AliasNameHasBeenSet() const;

                    /**
                     * 获取Subtitle processing type.
- 0: ASR recognition subtitle.
- 1: pure subtitle translation.
                     * @return ProcessType Subtitle processing type.
- 0: ASR recognition subtitle.
- 1: pure subtitle translation.
                     * 
                     */
                    uint64_t GetProcessType() const;

                    /**
                     * 设置Subtitle processing type.
- 0: ASR recognition subtitle.
- 1: pure subtitle translation.
                     * @param _processType Subtitle processing type.
- 0: ASR recognition subtitle.
- 1: pure subtitle translation.
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
                     * Unique identifier of the smart subtitle template.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Smart subtitle template name.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Smart subtitle template description.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Template type. Valid values:
* Preset: system preset template
* Custom: user-defined template
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * ASR hotword lexicon parameter.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    AsrHotWordsConfigure m_asrHotWordsConfigure;
                    bool m_asrHotWordsConfigureHasBeenSet;

                    /**
                     * Name of the hotword lexicon associated with the template.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_asrHotWordsLibraryName;
                    bool m_asrHotWordsLibraryNameHasBeenSet;

                    /**
                     * List of source languages of the video with smart subtitles.
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
                     * Smart subtitle file format:
- vtt: WebVTT format.
- srt: SRT format.
- original: consistent with the source subtitle file (it is used for the pure subtitle translation template).
- If this field is unspecified or left blank, no subtitle file will be generated.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subtitleFormat;
                    bool m_subtitleFormatHasBeenSet;

                    /**
                     * Smart subtitle language type.
0: source language1: target language
2: source language + target language
The value can only be 0 when TranslateSwitch is set to OFF.The value can only be 1 or 2 when TranslateSwitch is set to ON.
                     */
                    int64_t m_subtitleType;
                    bool m_subtitleTypeHasBeenSet;

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
This field is valid when the value of TranslateSwitch is ON.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_translateDstLanguage;
                    bool m_translateDstLanguageHasBeenSet;

                    /**
                     * Template creation time in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modification time of the template in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Alias of the preset smart subtitle template.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * Subtitle processing type.
- 0: ASR recognition subtitle.
- 1: pure subtitle translation.
                     */
                    uint64_t m_processType;
                    bool m_processTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETEMPLATEITEM_H_
