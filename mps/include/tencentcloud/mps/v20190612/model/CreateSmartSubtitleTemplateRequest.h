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
#include <tencentcloud/mps/v20190612/model/SelectingSubtitleAreasConfig.h>


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
                     * 获取<p>Intelligent subtitle template name<br>Length limit: 64 characters.</p>
                     * @return Name <p>Intelligent subtitle template name<br>Length limit: 64 characters.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Intelligent subtitle template name<br>Length limit: 64 characters.</p>
                     * @param _name <p>Intelligent subtitle template name<br>Length limit: 64 characters.</p>
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
                     * 获取<p>Smart subtitling video source language.</p><p>For ASR and subtitle translation parameter values, see <a href="https://www.tencentcloud.com/document/product/862/116243?from_cn_redirect=1#ASRlanguages">ASR Languages</a>.</p><p>The following lists some commonly used values:</p><p><code>auto</code>: automatic identification. <code>zh</code>: Simplified Chinese. <code>en</code>: English. <code>ja</code>: Japanese. <code>ko</code>: Korean. <code>zh-PY</code>: Chinese, English, and Cantonese. <code>zh_medical</code>: Chinese health care. <code>vi</code>: Vietnamese. <code>ms</code>: Malay. <code>id</code>: Indonesian. <code>fil</code>: Filipino. <code>th</code>: Thai. <code>pt</code>: Portuguese. <code>tr</code>: Turkish. <code>ar</code>: Arabic. <code>es</code>: Spanish. <code>hi</code>: Hindi. <code>fr</code>: French. <code>de</code>: German. <code>it</code>: Italian. <code>zh_dialect</code>: Chinese dialect. <code>zh_en</code>: Chinese and English. <code>yue</code>: Cantonese. <code>ru</code>: Russian. <code>prime_zh</code>: Chinese and English dialects.</p><p>OCR only supports the following values:</p><p><code>zh_en</code>: Chinese and English<br><code>multi</code>: others</p><p>For languages supported by different values, see <a href="https://www.tencentcloud.com/document/product/862/116243?from_cn_redirect=1#OCRlanguages">OCR Languages</a></p>
                     * @return VideoSrcLanguage <p>Smart subtitling video source language.</p><p>For ASR and subtitle translation parameter values, see <a href="https://www.tencentcloud.com/document/product/862/116243?from_cn_redirect=1#ASRlanguages">ASR Languages</a>.</p><p>The following lists some commonly used values:</p><p><code>auto</code>: automatic identification. <code>zh</code>: Simplified Chinese. <code>en</code>: English. <code>ja</code>: Japanese. <code>ko</code>: Korean. <code>zh-PY</code>: Chinese, English, and Cantonese. <code>zh_medical</code>: Chinese health care. <code>vi</code>: Vietnamese. <code>ms</code>: Malay. <code>id</code>: Indonesian. <code>fil</code>: Filipino. <code>th</code>: Thai. <code>pt</code>: Portuguese. <code>tr</code>: Turkish. <code>ar</code>: Arabic. <code>es</code>: Spanish. <code>hi</code>: Hindi. <code>fr</code>: French. <code>de</code>: German. <code>it</code>: Italian. <code>zh_dialect</code>: Chinese dialect. <code>zh_en</code>: Chinese and English. <code>yue</code>: Cantonese. <code>ru</code>: Russian. <code>prime_zh</code>: Chinese and English dialects.</p><p>OCR only supports the following values:</p><p><code>zh_en</code>: Chinese and English<br><code>multi</code>: others</p><p>For languages supported by different values, see <a href="https://www.tencentcloud.com/document/product/862/116243?from_cn_redirect=1#OCRlanguages">OCR Languages</a></p>
                     * 
                     */
                    std::string GetVideoSrcLanguage() const;

                    /**
                     * 设置<p>Smart subtitling video source language.</p><p>For ASR and subtitle translation parameter values, see <a href="https://www.tencentcloud.com/document/product/862/116243?from_cn_redirect=1#ASRlanguages">ASR Languages</a>.</p><p>The following lists some commonly used values:</p><p><code>auto</code>: automatic identification. <code>zh</code>: Simplified Chinese. <code>en</code>: English. <code>ja</code>: Japanese. <code>ko</code>: Korean. <code>zh-PY</code>: Chinese, English, and Cantonese. <code>zh_medical</code>: Chinese health care. <code>vi</code>: Vietnamese. <code>ms</code>: Malay. <code>id</code>: Indonesian. <code>fil</code>: Filipino. <code>th</code>: Thai. <code>pt</code>: Portuguese. <code>tr</code>: Turkish. <code>ar</code>: Arabic. <code>es</code>: Spanish. <code>hi</code>: Hindi. <code>fr</code>: French. <code>de</code>: German. <code>it</code>: Italian. <code>zh_dialect</code>: Chinese dialect. <code>zh_en</code>: Chinese and English. <code>yue</code>: Cantonese. <code>ru</code>: Russian. <code>prime_zh</code>: Chinese and English dialects.</p><p>OCR only supports the following values:</p><p><code>zh_en</code>: Chinese and English<br><code>multi</code>: others</p><p>For languages supported by different values, see <a href="https://www.tencentcloud.com/document/product/862/116243?from_cn_redirect=1#OCRlanguages">OCR Languages</a></p>
                     * @param _videoSrcLanguage <p>Smart subtitling video source language.</p><p>For ASR and subtitle translation parameter values, see <a href="https://www.tencentcloud.com/document/product/862/116243?from_cn_redirect=1#ASRlanguages">ASR Languages</a>.</p><p>The following lists some commonly used values:</p><p><code>auto</code>: automatic identification. <code>zh</code>: Simplified Chinese. <code>en</code>: English. <code>ja</code>: Japanese. <code>ko</code>: Korean. <code>zh-PY</code>: Chinese, English, and Cantonese. <code>zh_medical</code>: Chinese health care. <code>vi</code>: Vietnamese. <code>ms</code>: Malay. <code>id</code>: Indonesian. <code>fil</code>: Filipino. <code>th</code>: Thai. <code>pt</code>: Portuguese. <code>tr</code>: Turkish. <code>ar</code>: Arabic. <code>es</code>: Spanish. <code>hi</code>: Hindi. <code>fr</code>: French. <code>de</code>: German. <code>it</code>: Italian. <code>zh_dialect</code>: Chinese dialect. <code>zh_en</code>: Chinese and English. <code>yue</code>: Cantonese. <code>ru</code>: Russian. <code>prime_zh</code>: Chinese and English dialects.</p><p>OCR only supports the following values:</p><p><code>zh_en</code>: Chinese and English<br><code>multi</code>: others</p><p>For languages supported by different values, see <a href="https://www.tencentcloud.com/document/product/862/116243?from_cn_redirect=1#OCRlanguages">OCR Languages</a></p>
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
                     * 获取<p>Intelligent caption subtitle language type<br>0: Source language<br>1: Target language<br>2: Source language + target language<br>Only 0 is supported when TranslateSwitch is OFF<br>Only 1 or 2 is supported when TranslateSwitch is ON</p>
                     * @return SubtitleType <p>Intelligent caption subtitle language type<br>0: Source language<br>1: Target language<br>2: Source language + target language<br>Only 0 is supported when TranslateSwitch is OFF<br>Only 1 or 2 is supported when TranslateSwitch is ON</p>
                     * 
                     */
                    int64_t GetSubtitleType() const;

                    /**
                     * 设置<p>Intelligent caption subtitle language type<br>0: Source language<br>1: Target language<br>2: Source language + target language<br>Only 0 is supported when TranslateSwitch is OFF<br>Only 1 or 2 is supported when TranslateSwitch is ON</p>
                     * @param _subtitleType <p>Intelligent caption subtitle language type<br>0: Source language<br>1: Target language<br>2: Source language + target language<br>Only 0 is supported when TranslateSwitch is OFF<br>Only 1 or 2 is supported when TranslateSwitch is ON</p>
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
                     * 获取<p>Intelligent caption template description information<br>Length limit: 256 characters.</p>
                     * @return Comment <p>Intelligent caption template description information<br>Length limit: 256 characters.</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>Intelligent caption template description information<br>Length limit: 256 characters.</p>
                     * @param _comment <p>Intelligent caption template description information<br>Length limit: 256 characters.</p>
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
                     * 获取<p>Intelligent subtitle file format:</p><ul><li>For ASR recognition translation processing type:<ul><li>vtt: WebVTT format subtitle</li><li>srt: SRT format subtitle</li><li>Leave blank or fill in the blank: no subtitle file generated</li></ul></li><li>For pure subtitle translation processing type:<ul><li>original: consistent with the source file</li><li>vtt: WebVTT format subtitle</li><li>srt: SRT format subtitle</li></ul></li><li>For OCR recognition translation processing type:<ul><li>vtt: WebVTT format subtitle</li><li>srt: SRT format subtitle</li></ul></li></ul><p><strong>Note</strong>:</p><ul><li>For ASR recognition method, do not leave blank or not pass when translating 2 or more languages.</li><li>For pure subtitle translation method, do not leave blank or not pass.</li><li>For OCR tasks, it is allowed to leave blank or not pass when suppression is enabled.</li></ul>
                     * @return SubtitleFormat <p>Intelligent subtitle file format:</p><ul><li>For ASR recognition translation processing type:<ul><li>vtt: WebVTT format subtitle</li><li>srt: SRT format subtitle</li><li>Leave blank or fill in the blank: no subtitle file generated</li></ul></li><li>For pure subtitle translation processing type:<ul><li>original: consistent with the source file</li><li>vtt: WebVTT format subtitle</li><li>srt: SRT format subtitle</li></ul></li><li>For OCR recognition translation processing type:<ul><li>vtt: WebVTT format subtitle</li><li>srt: SRT format subtitle</li></ul></li></ul><p><strong>Note</strong>:</p><ul><li>For ASR recognition method, do not leave blank or not pass when translating 2 or more languages.</li><li>For pure subtitle translation method, do not leave blank or not pass.</li><li>For OCR tasks, it is allowed to leave blank or not pass when suppression is enabled.</li></ul>
                     * 
                     */
                    std::string GetSubtitleFormat() const;

                    /**
                     * 设置<p>Intelligent subtitle file format:</p><ul><li>For ASR recognition translation processing type:<ul><li>vtt: WebVTT format subtitle</li><li>srt: SRT format subtitle</li><li>Leave blank or fill in the blank: no subtitle file generated</li></ul></li><li>For pure subtitle translation processing type:<ul><li>original: consistent with the source file</li><li>vtt: WebVTT format subtitle</li><li>srt: SRT format subtitle</li></ul></li><li>For OCR recognition translation processing type:<ul><li>vtt: WebVTT format subtitle</li><li>srt: SRT format subtitle</li></ul></li></ul><p><strong>Note</strong>:</p><ul><li>For ASR recognition method, do not leave blank or not pass when translating 2 or more languages.</li><li>For pure subtitle translation method, do not leave blank or not pass.</li><li>For OCR tasks, it is allowed to leave blank or not pass when suppression is enabled.</li></ul>
                     * @param _subtitleFormat <p>Intelligent subtitle file format:</p><ul><li>For ASR recognition translation processing type:<ul><li>vtt: WebVTT format subtitle</li><li>srt: SRT format subtitle</li><li>Leave blank or fill in the blank: no subtitle file generated</li></ul></li><li>For pure subtitle translation processing type:<ul><li>original: consistent with the source file</li><li>vtt: WebVTT format subtitle</li><li>srt: SRT format subtitle</li></ul></li><li>For OCR recognition translation processing type:<ul><li>vtt: WebVTT format subtitle</li><li>srt: SRT format subtitle</li></ul></li></ul><p><strong>Note</strong>:</p><ul><li>For ASR recognition method, do not leave blank or not pass when translating 2 or more languages.</li><li>For pure subtitle translation method, do not leave blank or not pass.</li><li>For OCR tasks, it is allowed to leave blank or not pass when suppression is enabled.</li></ul>
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
                     * 获取<p>ASR hot word lexicon parameter</p>
                     * @return AsrHotWordsConfigure <p>ASR hot word lexicon parameter</p>
                     * 
                     */
                    AsrHotWordsConfigure GetAsrHotWordsConfigure() const;

                    /**
                     * 设置<p>ASR hot word lexicon parameter</p>
                     * @param _asrHotWordsConfigure <p>ASR hot word lexicon parameter</p>
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
                     * 获取<p>Subtitle translation switch<br><code>ON</code>: Enable translation<br><code>OFF</code>: Disable translation</p><p><strong>Note</strong>: For pure subtitle translation mode, the default value is enabled if the field is unspecified. The field cannot be left blank or set to <code>OFF</code>.</p>
                     * @return TranslateSwitch <p>Subtitle translation switch<br><code>ON</code>: Enable translation<br><code>OFF</code>: Disable translation</p><p><strong>Note</strong>: For pure subtitle translation mode, the default value is enabled if the field is unspecified. The field cannot be left blank or set to <code>OFF</code>.</p>
                     * 
                     */
                    std::string GetTranslateSwitch() const;

                    /**
                     * 设置<p>Subtitle translation switch<br><code>ON</code>: Enable translation<br><code>OFF</code>: Disable translation</p><p><strong>Note</strong>: For pure subtitle translation mode, the default value is enabled if the field is unspecified. The field cannot be left blank or set to <code>OFF</code>.</p>
                     * @param _translateSwitch <p>Subtitle translation switch<br><code>ON</code>: Enable translation<br><code>OFF</code>: Disable translation</p><p><strong>Note</strong>: For pure subtitle translation mode, the default value is enabled if the field is unspecified. The field cannot be left blank or set to <code>OFF</code>.</p>
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
                     * 获取<p>This parameter takes effect when the value of TranslateSwitch is ON. Valid translation languages:</p><p>For ASR extraction and translation, see <a href="https://www.tencentcloud.com/document/product/862/116243?from_cn_redirect=1#ASRlanguages">ASR Translation Languages</a>.<br>For OCR extraction and translation, see <a href="https://www.tencentcloud.com/document/product/862/116243?from_cn_redirect=1#OCRlanguages">OCR Translation Languages</a>.</p><p><strong>Note</strong>: Use <code>/</code> to separate multiple languages, such as <code>en/ja</code>, which indicates English and Japanese.</p><p>Examples of some commonly used languages:</p><p><code>ar</code>: Arabic<br><code>en</code>: English<br><code>fr</code>: French<br><code>it</code>: Italian<br><code>ja</code>: Japanese<br><code>ko</code>: Korean<br><code>ru</code>: Russian<br><code>th</code>: Thai<br><code>tr</code>: Turkish<br><code>vi</code>: Vietnamese<br><code>yue</code>: Cantonese<br><code>zh</code>: Simplified Chinese<br><code>zh-TW</code>: Traditional Chinese</p>
                     * @return TranslateDstLanguage <p>This parameter takes effect when the value of TranslateSwitch is ON. Valid translation languages:</p><p>For ASR extraction and translation, see <a href="https://www.tencentcloud.com/document/product/862/116243?from_cn_redirect=1#ASRlanguages">ASR Translation Languages</a>.<br>For OCR extraction and translation, see <a href="https://www.tencentcloud.com/document/product/862/116243?from_cn_redirect=1#OCRlanguages">OCR Translation Languages</a>.</p><p><strong>Note</strong>: Use <code>/</code> to separate multiple languages, such as <code>en/ja</code>, which indicates English and Japanese.</p><p>Examples of some commonly used languages:</p><p><code>ar</code>: Arabic<br><code>en</code>: English<br><code>fr</code>: French<br><code>it</code>: Italian<br><code>ja</code>: Japanese<br><code>ko</code>: Korean<br><code>ru</code>: Russian<br><code>th</code>: Thai<br><code>tr</code>: Turkish<br><code>vi</code>: Vietnamese<br><code>yue</code>: Cantonese<br><code>zh</code>: Simplified Chinese<br><code>zh-TW</code>: Traditional Chinese</p>
                     * 
                     */
                    std::string GetTranslateDstLanguage() const;

                    /**
                     * 设置<p>This parameter takes effect when the value of TranslateSwitch is ON. Valid translation languages:</p><p>For ASR extraction and translation, see <a href="https://www.tencentcloud.com/document/product/862/116243?from_cn_redirect=1#ASRlanguages">ASR Translation Languages</a>.<br>For OCR extraction and translation, see <a href="https://www.tencentcloud.com/document/product/862/116243?from_cn_redirect=1#OCRlanguages">OCR Translation Languages</a>.</p><p><strong>Note</strong>: Use <code>/</code> to separate multiple languages, such as <code>en/ja</code>, which indicates English and Japanese.</p><p>Examples of some commonly used languages:</p><p><code>ar</code>: Arabic<br><code>en</code>: English<br><code>fr</code>: French<br><code>it</code>: Italian<br><code>ja</code>: Japanese<br><code>ko</code>: Korean<br><code>ru</code>: Russian<br><code>th</code>: Thai<br><code>tr</code>: Turkish<br><code>vi</code>: Vietnamese<br><code>yue</code>: Cantonese<br><code>zh</code>: Simplified Chinese<br><code>zh-TW</code>: Traditional Chinese</p>
                     * @param _translateDstLanguage <p>This parameter takes effect when the value of TranslateSwitch is ON. Valid translation languages:</p><p>For ASR extraction and translation, see <a href="https://www.tencentcloud.com/document/product/862/116243?from_cn_redirect=1#ASRlanguages">ASR Translation Languages</a>.<br>For OCR extraction and translation, see <a href="https://www.tencentcloud.com/document/product/862/116243?from_cn_redirect=1#OCRlanguages">OCR Translation Languages</a>.</p><p><strong>Note</strong>: Use <code>/</code> to separate multiple languages, such as <code>en/ja</code>, which indicates English and Japanese.</p><p>Examples of some commonly used languages:</p><p><code>ar</code>: Arabic<br><code>en</code>: English<br><code>fr</code>: French<br><code>it</code>: Italian<br><code>ja</code>: Japanese<br><code>ko</code>: Korean<br><code>ru</code>: Russian<br><code>th</code>: Thai<br><code>tr</code>: Turkish<br><code>vi</code>: Vietnamese<br><code>yue</code>: Cantonese<br><code>zh</code>: Simplified Chinese<br><code>zh-TW</code>: Traditional Chinese</p>
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
                     * 获取<p>Subtitle processing type:</p><ul><li>0: ASR recognition subtitle</li><li>1: Pure caption translation</li><li>2: OCR recognition subtitle</li></ul><p><strong>Note</strong>: The default type is ASR recognition subtitle if the field is unspecified.</p>
                     * @return ProcessType <p>Subtitle processing type:</p><ul><li>0: ASR recognition subtitle</li><li>1: Pure caption translation</li><li>2: OCR recognition subtitle</li></ul><p><strong>Note</strong>: The default type is ASR recognition subtitle if the field is unspecified.</p>
                     * 
                     */
                    uint64_t GetProcessType() const;

                    /**
                     * 设置<p>Subtitle processing type:</p><ul><li>0: ASR recognition subtitle</li><li>1: Pure caption translation</li><li>2: OCR recognition subtitle</li></ul><p><strong>Note</strong>: The default type is ASR recognition subtitle if the field is unspecified.</p>
                     * @param _processType <p>Subtitle processing type:</p><ul><li>0: ASR recognition subtitle</li><li>1: Pure caption translation</li><li>2: OCR recognition subtitle</li></ul><p><strong>Note</strong>: The default type is ASR recognition subtitle if the field is unspecified.</p>
                     * 
                     */
                    void SetProcessType(const uint64_t& _processType);

                    /**
                     * 判断参数 ProcessType 是否已赋值
                     * @return ProcessType 是否已赋值
                     * 
                     */
                    bool ProcessTypeHasBeenSet() const;

                    /**
                     * 获取<p>Area configurations for the subtitle OCR extraction box</p>
                     * @return SelectingSubtitleAreasConfig <p>Area configurations for the subtitle OCR extraction box</p>
                     * 
                     */
                    SelectingSubtitleAreasConfig GetSelectingSubtitleAreasConfig() const;

                    /**
                     * 设置<p>Area configurations for the subtitle OCR extraction box</p>
                     * @param _selectingSubtitleAreasConfig <p>Area configurations for the subtitle OCR extraction box</p>
                     * 
                     */
                    void SetSelectingSubtitleAreasConfig(const SelectingSubtitleAreasConfig& _selectingSubtitleAreasConfig);

                    /**
                     * 判断参数 SelectingSubtitleAreasConfig 是否已赋值
                     * @return SelectingSubtitleAreasConfig 是否已赋值
                     * 
                     */
                    bool SelectingSubtitleAreasConfigHasBeenSet() const;

                    /**
                     * 获取<p>Suppression Template id. Only allowed to fill in when ProcessType is 0 or 2 (task type is ASR or OCR). Cannot fill in when multiple target languages are enabled.</p>
                     * @return SubtitleEmbedId <p>Suppression Template id. Only allowed to fill in when ProcessType is 0 or 2 (task type is ASR or OCR). Cannot fill in when multiple target languages are enabled.</p>
                     * 
                     */
                    int64_t GetSubtitleEmbedId() const;

                    /**
                     * 设置<p>Suppression Template id. Only allowed to fill in when ProcessType is 0 or 2 (task type is ASR or OCR). Cannot fill in when multiple target languages are enabled.</p>
                     * @param _subtitleEmbedId <p>Suppression Template id. Only allowed to fill in when ProcessType is 0 or 2 (task type is ASR or OCR). Cannot fill in when multiple target languages are enabled.</p>
                     * 
                     */
                    void SetSubtitleEmbedId(const int64_t& _subtitleEmbedId);

                    /**
                     * 判断参数 SubtitleEmbedId 是否已赋值
                     * @return SubtitleEmbedId 是否已赋值
                     * 
                     */
                    bool SubtitleEmbedIdHasBeenSet() const;

                    /**
                     * 获取<p>Speaker identification switch. Valid values:<br>0: Speaker identification is disabled.<br>1: Speaker identification is enabled.<br>By default, speaker identification is disabled.</p>
                     * @return SpeakerMode <p>Speaker identification switch. Valid values:<br>0: Speaker identification is disabled.<br>1: Speaker identification is enabled.<br>By default, speaker identification is disabled.</p>
                     * 
                     */
                    int64_t GetSpeakerMode() const;

                    /**
                     * 设置<p>Speaker identification switch. Valid values:<br>0: Speaker identification is disabled.<br>1: Speaker identification is enabled.<br>By default, speaker identification is disabled.</p>
                     * @param _speakerMode <p>Speaker identification switch. Valid values:<br>0: Speaker identification is disabled.<br>1: Speaker identification is enabled.<br>By default, speaker identification is disabled.</p>
                     * 
                     */
                    void SetSpeakerMode(const int64_t& _speakerMode);

                    /**
                     * 判断参数 SpeakerMode 是否已赋值
                     * @return SpeakerMode 是否已赋值
                     * 
                     */
                    bool SpeakerModeHasBeenSet() const;

                    /**
                     * 获取<p>Indicates whether to output the identified speaker to the subtitle file. Valid values:<br>0: The speaker is not output to the subtitle file.<br>1: The speaker is output to the VTT subtitle file.<br>Note: To use this parameter, the value of SpeakerMode cannot be 0.<br>By default, the speaker is not output to the subtitle file.</p>
                     * @return SpeakerLabel <p>Indicates whether to output the identified speaker to the subtitle file. Valid values:<br>0: The speaker is not output to the subtitle file.<br>1: The speaker is output to the VTT subtitle file.<br>Note: To use this parameter, the value of SpeakerMode cannot be 0.<br>By default, the speaker is not output to the subtitle file.</p>
                     * 
                     */
                    int64_t GetSpeakerLabel() const;

                    /**
                     * 设置<p>Indicates whether to output the identified speaker to the subtitle file. Valid values:<br>0: The speaker is not output to the subtitle file.<br>1: The speaker is output to the VTT subtitle file.<br>Note: To use this parameter, the value of SpeakerMode cannot be 0.<br>By default, the speaker is not output to the subtitle file.</p>
                     * @param _speakerLabel <p>Indicates whether to output the identified speaker to the subtitle file. Valid values:<br>0: The speaker is not output to the subtitle file.<br>1: The speaker is output to the VTT subtitle file.<br>Note: To use this parameter, the value of SpeakerMode cannot be 0.<br>By default, the speaker is not output to the subtitle file.</p>
                     * 
                     */
                    void SetSpeakerLabel(const int64_t& _speakerLabel);

                    /**
                     * 判断参数 SpeakerLabel 是否已赋值
                     * @return SpeakerLabel 是否已赋值
                     * 
                     */
                    bool SpeakerLabelHasBeenSet() const;

                private:

                    /**
                     * <p>Intelligent subtitle template name<br>Length limit: 64 characters.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Smart subtitling video source language.</p><p>For ASR and subtitle translation parameter values, see <a href="https://www.tencentcloud.com/document/product/862/116243?from_cn_redirect=1#ASRlanguages">ASR Languages</a>.</p><p>The following lists some commonly used values:</p><p><code>auto</code>: automatic identification. <code>zh</code>: Simplified Chinese. <code>en</code>: English. <code>ja</code>: Japanese. <code>ko</code>: Korean. <code>zh-PY</code>: Chinese, English, and Cantonese. <code>zh_medical</code>: Chinese health care. <code>vi</code>: Vietnamese. <code>ms</code>: Malay. <code>id</code>: Indonesian. <code>fil</code>: Filipino. <code>th</code>: Thai. <code>pt</code>: Portuguese. <code>tr</code>: Turkish. <code>ar</code>: Arabic. <code>es</code>: Spanish. <code>hi</code>: Hindi. <code>fr</code>: French. <code>de</code>: German. <code>it</code>: Italian. <code>zh_dialect</code>: Chinese dialect. <code>zh_en</code>: Chinese and English. <code>yue</code>: Cantonese. <code>ru</code>: Russian. <code>prime_zh</code>: Chinese and English dialects.</p><p>OCR only supports the following values:</p><p><code>zh_en</code>: Chinese and English<br><code>multi</code>: others</p><p>For languages supported by different values, see <a href="https://www.tencentcloud.com/document/product/862/116243?from_cn_redirect=1#OCRlanguages">OCR Languages</a></p>
                     */
                    std::string m_videoSrcLanguage;
                    bool m_videoSrcLanguageHasBeenSet;

                    /**
                     * <p>Intelligent caption subtitle language type<br>0: Source language<br>1: Target language<br>2: Source language + target language<br>Only 0 is supported when TranslateSwitch is OFF<br>Only 1 or 2 is supported when TranslateSwitch is ON</p>
                     */
                    int64_t m_subtitleType;
                    bool m_subtitleTypeHasBeenSet;

                    /**
                     * <p>Intelligent caption template description information<br>Length limit: 256 characters.</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>Intelligent subtitle file format:</p><ul><li>For ASR recognition translation processing type:<ul><li>vtt: WebVTT format subtitle</li><li>srt: SRT format subtitle</li><li>Leave blank or fill in the blank: no subtitle file generated</li></ul></li><li>For pure subtitle translation processing type:<ul><li>original: consistent with the source file</li><li>vtt: WebVTT format subtitle</li><li>srt: SRT format subtitle</li></ul></li><li>For OCR recognition translation processing type:<ul><li>vtt: WebVTT format subtitle</li><li>srt: SRT format subtitle</li></ul></li></ul><p><strong>Note</strong>:</p><ul><li>For ASR recognition method, do not leave blank or not pass when translating 2 or more languages.</li><li>For pure subtitle translation method, do not leave blank or not pass.</li><li>For OCR tasks, it is allowed to leave blank or not pass when suppression is enabled.</li></ul>
                     */
                    std::string m_subtitleFormat;
                    bool m_subtitleFormatHasBeenSet;

                    /**
                     * <p>ASR hot word lexicon parameter</p>
                     */
                    AsrHotWordsConfigure m_asrHotWordsConfigure;
                    bool m_asrHotWordsConfigureHasBeenSet;

                    /**
                     * <p>Subtitle translation switch<br><code>ON</code>: Enable translation<br><code>OFF</code>: Disable translation</p><p><strong>Note</strong>: For pure subtitle translation mode, the default value is enabled if the field is unspecified. The field cannot be left blank or set to <code>OFF</code>.</p>
                     */
                    std::string m_translateSwitch;
                    bool m_translateSwitchHasBeenSet;

                    /**
                     * <p>This parameter takes effect when the value of TranslateSwitch is ON. Valid translation languages:</p><p>For ASR extraction and translation, see <a href="https://www.tencentcloud.com/document/product/862/116243?from_cn_redirect=1#ASRlanguages">ASR Translation Languages</a>.<br>For OCR extraction and translation, see <a href="https://www.tencentcloud.com/document/product/862/116243?from_cn_redirect=1#OCRlanguages">OCR Translation Languages</a>.</p><p><strong>Note</strong>: Use <code>/</code> to separate multiple languages, such as <code>en/ja</code>, which indicates English and Japanese.</p><p>Examples of some commonly used languages:</p><p><code>ar</code>: Arabic<br><code>en</code>: English<br><code>fr</code>: French<br><code>it</code>: Italian<br><code>ja</code>: Japanese<br><code>ko</code>: Korean<br><code>ru</code>: Russian<br><code>th</code>: Thai<br><code>tr</code>: Turkish<br><code>vi</code>: Vietnamese<br><code>yue</code>: Cantonese<br><code>zh</code>: Simplified Chinese<br><code>zh-TW</code>: Traditional Chinese</p>
                     */
                    std::string m_translateDstLanguage;
                    bool m_translateDstLanguageHasBeenSet;

                    /**
                     * <p>Subtitle processing type:</p><ul><li>0: ASR recognition subtitle</li><li>1: Pure caption translation</li><li>2: OCR recognition subtitle</li></ul><p><strong>Note</strong>: The default type is ASR recognition subtitle if the field is unspecified.</p>
                     */
                    uint64_t m_processType;
                    bool m_processTypeHasBeenSet;

                    /**
                     * <p>Area configurations for the subtitle OCR extraction box</p>
                     */
                    SelectingSubtitleAreasConfig m_selectingSubtitleAreasConfig;
                    bool m_selectingSubtitleAreasConfigHasBeenSet;

                    /**
                     * <p>Suppression Template id. Only allowed to fill in when ProcessType is 0 or 2 (task type is ASR or OCR). Cannot fill in when multiple target languages are enabled.</p>
                     */
                    int64_t m_subtitleEmbedId;
                    bool m_subtitleEmbedIdHasBeenSet;

                    /**
                     * <p>Speaker identification switch. Valid values:<br>0: Speaker identification is disabled.<br>1: Speaker identification is enabled.<br>By default, speaker identification is disabled.</p>
                     */
                    int64_t m_speakerMode;
                    bool m_speakerModeHasBeenSet;

                    /**
                     * <p>Indicates whether to output the identified speaker to the subtitle file. Valid values:<br>0: The speaker is not output to the subtitle file.<br>1: The speaker is output to the VTT subtitle file.<br>Note: To use this parameter, the value of SpeakerMode cannot be 0.<br>By default, the speaker is not output to the subtitle file.</p>
                     */
                    int64_t m_speakerLabel;
                    bool m_speakerLabelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATESMARTSUBTITLETEMPLATEREQUEST_H_
