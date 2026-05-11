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
                     * 获取<p>Unique identifier of the smart subtitle template.</p>
                     * @return Definition <p>Unique identifier of the smart subtitle template.</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>Unique identifier of the smart subtitle template.</p>
                     * @param _definition <p>Unique identifier of the smart subtitle template.</p>
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
                     * 获取<p>Smart subtitle template name.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name <p>Smart subtitle template name.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Smart subtitle template name.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name <p>Smart subtitle template name.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Smart subtitle template description.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Comment <p>Smart subtitle template description.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>Smart subtitle template description.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _comment <p>Smart subtitle template description.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Template type. Valid values:</p><ul><li>Preset: preset template.</li><li>Custom: custom template.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type <p>Template type. Valid values:</p><ul><li>Preset: preset template.</li><li>Custom: custom template.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Template type. Valid values:</p><ul><li>Preset: preset template.</li><li>Custom: custom template.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type <p>Template type. Valid values:</p><ul><li>Preset: preset template.</li><li>Custom: custom template.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>ASR hotword lexicon parameters.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AsrHotWordsConfigure <p>ASR hotword lexicon parameters.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AsrHotWordsConfigure GetAsrHotWordsConfigure() const;

                    /**
                     * 设置<p>ASR hotword lexicon parameters.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _asrHotWordsConfigure <p>ASR hotword lexicon parameters.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Name of the hotword lexicon associated with the template.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AsrHotWordsLibraryName <p>Name of the hotword lexicon associated with the template.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAsrHotWordsLibraryName() const;

                    /**
                     * 设置<p>Name of the hotword lexicon associated with the template.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _asrHotWordsLibraryName <p>Name of the hotword lexicon associated with the template.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Video source language list for smart subtitle:</p><p><code>zh</code>: Simplified Chinese<br><code>yue</code>: Cantonese<br><code>zh-PY</code>: Chinese, English, and Cantonese<br><code>zh_medical</code>: Chinese healthcare<br><code>zh_dialect</code>: Chinese dialect<br><code>prime_zh</code>: Chinese and English dialects<br><code>zh_en</code>: Chinese and English<br><code>en</code>: English<br><code>ja</code>: Japanese<br><code>ko</code>: Korean<br><code>fr</code>: French<br><code>es</code>: Spanish<br><code>it</code>: Italian<br><code>de</code>: German<br><code>tr</code>: Turkish<br><code>ru</code>: Russian<br><code>pt</code>: Portuguese (Brazil)<br><code>pt-PT</code>: Portuguese (Portugal)<br><code>vi</code>: Vietnamese<br><code>id</code>: Indonesian<br><code>ms</code>: Malay<br><code>th</code>: Thai<br><code>ar</code>: Arabic<br><code>hi</code>: Hindi<br><code>fil</code>: Filipino<br><code>auto</code>: Automatic identification (only supported for subtitle translation)</p>
                     * @return VideoSrcLanguage <p>Video source language list for smart subtitle:</p><p><code>zh</code>: Simplified Chinese<br><code>yue</code>: Cantonese<br><code>zh-PY</code>: Chinese, English, and Cantonese<br><code>zh_medical</code>: Chinese healthcare<br><code>zh_dialect</code>: Chinese dialect<br><code>prime_zh</code>: Chinese and English dialects<br><code>zh_en</code>: Chinese and English<br><code>en</code>: English<br><code>ja</code>: Japanese<br><code>ko</code>: Korean<br><code>fr</code>: French<br><code>es</code>: Spanish<br><code>it</code>: Italian<br><code>de</code>: German<br><code>tr</code>: Turkish<br><code>ru</code>: Russian<br><code>pt</code>: Portuguese (Brazil)<br><code>pt-PT</code>: Portuguese (Portugal)<br><code>vi</code>: Vietnamese<br><code>id</code>: Indonesian<br><code>ms</code>: Malay<br><code>th</code>: Thai<br><code>ar</code>: Arabic<br><code>hi</code>: Hindi<br><code>fil</code>: Filipino<br><code>auto</code>: Automatic identification (only supported for subtitle translation)</p>
                     * 
                     */
                    std::string GetVideoSrcLanguage() const;

                    /**
                     * 设置<p>Video source language list for smart subtitle:</p><p><code>zh</code>: Simplified Chinese<br><code>yue</code>: Cantonese<br><code>zh-PY</code>: Chinese, English, and Cantonese<br><code>zh_medical</code>: Chinese healthcare<br><code>zh_dialect</code>: Chinese dialect<br><code>prime_zh</code>: Chinese and English dialects<br><code>zh_en</code>: Chinese and English<br><code>en</code>: English<br><code>ja</code>: Japanese<br><code>ko</code>: Korean<br><code>fr</code>: French<br><code>es</code>: Spanish<br><code>it</code>: Italian<br><code>de</code>: German<br><code>tr</code>: Turkish<br><code>ru</code>: Russian<br><code>pt</code>: Portuguese (Brazil)<br><code>pt-PT</code>: Portuguese (Portugal)<br><code>vi</code>: Vietnamese<br><code>id</code>: Indonesian<br><code>ms</code>: Malay<br><code>th</code>: Thai<br><code>ar</code>: Arabic<br><code>hi</code>: Hindi<br><code>fil</code>: Filipino<br><code>auto</code>: Automatic identification (only supported for subtitle translation)</p>
                     * @param _videoSrcLanguage <p>Video source language list for smart subtitle:</p><p><code>zh</code>: Simplified Chinese<br><code>yue</code>: Cantonese<br><code>zh-PY</code>: Chinese, English, and Cantonese<br><code>zh_medical</code>: Chinese healthcare<br><code>zh_dialect</code>: Chinese dialect<br><code>prime_zh</code>: Chinese and English dialects<br><code>zh_en</code>: Chinese and English<br><code>en</code>: English<br><code>ja</code>: Japanese<br><code>ko</code>: Korean<br><code>fr</code>: French<br><code>es</code>: Spanish<br><code>it</code>: Italian<br><code>de</code>: German<br><code>tr</code>: Turkish<br><code>ru</code>: Russian<br><code>pt</code>: Portuguese (Brazil)<br><code>pt-PT</code>: Portuguese (Portugal)<br><code>vi</code>: Vietnamese<br><code>id</code>: Indonesian<br><code>ms</code>: Malay<br><code>th</code>: Thai<br><code>ar</code>: Arabic<br><code>hi</code>: Hindi<br><code>fil</code>: Filipino<br><code>auto</code>: Automatic identification (only supported for subtitle translation)</p>
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
                     * 获取<p>Smart subtitle file format.</p><ul><li>vtt: WebVTT.</li><li>srt: SRT.</li><li>original: same as the source subtitle file (for subtitle translation templates).</li><li>Not specified or empty: no subtitle file generated.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubtitleFormat <p>Smart subtitle file format.</p><ul><li>vtt: WebVTT.</li><li>srt: SRT.</li><li>original: same as the source subtitle file (for subtitle translation templates).</li><li>Not specified or empty: no subtitle file generated.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubtitleFormat() const;

                    /**
                     * 设置<p>Smart subtitle file format.</p><ul><li>vtt: WebVTT.</li><li>srt: SRT.</li><li>original: same as the source subtitle file (for subtitle translation templates).</li><li>Not specified or empty: no subtitle file generated.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subtitleFormat <p>Smart subtitle file format.</p><ul><li>vtt: WebVTT.</li><li>srt: SRT.</li><li>original: same as the source subtitle file (for subtitle translation templates).</li><li>Not specified or empty: no subtitle file generated.</li></ul>
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
                     * 获取<p>Smart subtitle language type.<br>0: source language.<br>1: target language.<br>2: source language and target language.<br>Only 0 is supported when TranslateSwitch is OFF.<br>Only 1 or 2 is supported when TranslateSwitch is ON.</p>
                     * @return SubtitleType <p>Smart subtitle language type.<br>0: source language.<br>1: target language.<br>2: source language and target language.<br>Only 0 is supported when TranslateSwitch is OFF.<br>Only 1 or 2 is supported when TranslateSwitch is ON.</p>
                     * 
                     */
                    int64_t GetSubtitleType() const;

                    /**
                     * 设置<p>Smart subtitle language type.<br>0: source language.<br>1: target language.<br>2: source language and target language.<br>Only 0 is supported when TranslateSwitch is OFF.<br>Only 1 or 2 is supported when TranslateSwitch is ON.</p>
                     * @param _subtitleType <p>Smart subtitle language type.<br>0: source language.<br>1: target language.<br>2: source language and target language.<br>Only 0 is supported when TranslateSwitch is OFF.<br>Only 1 or 2 is supported when TranslateSwitch is ON.</p>
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
                     * 获取<p>Subtitle translation switch.<br>ON: enables translation.<br>OFF: disables translation.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TranslateSwitch <p>Subtitle translation switch.<br>ON: enables translation.<br>OFF: disables translation.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTranslateSwitch() const;

                    /**
                     * 设置<p>Subtitle translation switch.<br>ON: enables translation.<br>OFF: disables translation.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _translateSwitch <p>Subtitle translation switch.<br>ON: enables translation.<br>OFF: disables translation.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Target language for subtitle translation.<br>This parameter takes effect when TranslateSwitch is ON.<br><code>zh</code>: Simplified Chinese<br><code>zh-TW</code>: Traditional Chinese<br><code>en</code>: English<br><code>ja</code>: Japanese<br><code>ko</code>: Korean<br><code>fr</code>: French<br><code>es</code>: Spanish<br><code>it</code>: Italian<br><code>de</code>: German<br><code>tr</code>: Turkish<br><code>ru</code>: Russian<br><code>pt</code>: Portuguese (Brazil)<br><code>pt-PT</code>: Portuguese (Portugal)<br><code>vi</code>: Vietnamese<br><code>id</code>: Indonesian<br><code>ms</code>: Malay<br><code>th</code>: Thai<br><code>ar</code>: Arabic<br><code>hi</code>: Hindi<br><code>fil</code>: Filipino</p><p><strong>Note</strong>: Use <code>/</code> to separate multiple languages, such as <code>en/ja</code>, which indicates English and Japanese.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TranslateDstLanguage <p>Target language for subtitle translation.<br>This parameter takes effect when TranslateSwitch is ON.<br><code>zh</code>: Simplified Chinese<br><code>zh-TW</code>: Traditional Chinese<br><code>en</code>: English<br><code>ja</code>: Japanese<br><code>ko</code>: Korean<br><code>fr</code>: French<br><code>es</code>: Spanish<br><code>it</code>: Italian<br><code>de</code>: German<br><code>tr</code>: Turkish<br><code>ru</code>: Russian<br><code>pt</code>: Portuguese (Brazil)<br><code>pt-PT</code>: Portuguese (Portugal)<br><code>vi</code>: Vietnamese<br><code>id</code>: Indonesian<br><code>ms</code>: Malay<br><code>th</code>: Thai<br><code>ar</code>: Arabic<br><code>hi</code>: Hindi<br><code>fil</code>: Filipino</p><p><strong>Note</strong>: Use <code>/</code> to separate multiple languages, such as <code>en/ja</code>, which indicates English and Japanese.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTranslateDstLanguage() const;

                    /**
                     * 设置<p>Target language for subtitle translation.<br>This parameter takes effect when TranslateSwitch is ON.<br><code>zh</code>: Simplified Chinese<br><code>zh-TW</code>: Traditional Chinese<br><code>en</code>: English<br><code>ja</code>: Japanese<br><code>ko</code>: Korean<br><code>fr</code>: French<br><code>es</code>: Spanish<br><code>it</code>: Italian<br><code>de</code>: German<br><code>tr</code>: Turkish<br><code>ru</code>: Russian<br><code>pt</code>: Portuguese (Brazil)<br><code>pt-PT</code>: Portuguese (Portugal)<br><code>vi</code>: Vietnamese<br><code>id</code>: Indonesian<br><code>ms</code>: Malay<br><code>th</code>: Thai<br><code>ar</code>: Arabic<br><code>hi</code>: Hindi<br><code>fil</code>: Filipino</p><p><strong>Note</strong>: Use <code>/</code> to separate multiple languages, such as <code>en/ja</code>, which indicates English and Japanese.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _translateDstLanguage <p>Target language for subtitle translation.<br>This parameter takes effect when TranslateSwitch is ON.<br><code>zh</code>: Simplified Chinese<br><code>zh-TW</code>: Traditional Chinese<br><code>en</code>: English<br><code>ja</code>: Japanese<br><code>ko</code>: Korean<br><code>fr</code>: French<br><code>es</code>: Spanish<br><code>it</code>: Italian<br><code>de</code>: German<br><code>tr</code>: Turkish<br><code>ru</code>: Russian<br><code>pt</code>: Portuguese (Brazil)<br><code>pt-PT</code>: Portuguese (Portugal)<br><code>vi</code>: Vietnamese<br><code>id</code>: Indonesian<br><code>ms</code>: Malay<br><code>th</code>: Thai<br><code>ar</code>: Arabic<br><code>hi</code>: Hindi<br><code>fil</code>: Filipino</p><p><strong>Note</strong>: Use <code>/</code> to separate multiple languages, such as <code>en/ja</code>, which indicates English and Japanese.</p>
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
                     * 获取<p>Template creation time, in <a href="https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52">ISO date format</a>.</p>
                     * @return CreateTime <p>Template creation time, in <a href="https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52">ISO date format</a>.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Template creation time, in <a href="https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52">ISO date format</a>.</p>
                     * @param _createTime <p>Template creation time, in <a href="https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52">ISO date format</a>.</p>
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
                     * 获取<p>Last template modification time, in <a href="https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52">ISO date format</a>.</p>
                     * @return UpdateTime <p>Last template modification time, in <a href="https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52">ISO date format</a>.</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Last template modification time, in <a href="https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52">ISO date format</a>.</p>
                     * @param _updateTime <p>Last template modification time, in <a href="https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52">ISO date format</a>.</p>
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
                     * 获取<p>Preset template alias for smart subtitle.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AliasName <p>Preset template alias for smart subtitle.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置<p>Preset template alias for smart subtitle.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _aliasName <p>Preset template alias for smart subtitle.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Subtitle processing type:</p><ul><li>0: ASR.</li><li>1: subtitle translation.</li><li>2: OCR.</li></ul>
                     * @return ProcessType <p>Subtitle processing type:</p><ul><li>0: ASR.</li><li>1: subtitle translation.</li><li>2: OCR.</li></ul>
                     * 
                     */
                    uint64_t GetProcessType() const;

                    /**
                     * 设置<p>Subtitle processing type:</p><ul><li>0: ASR.</li><li>1: subtitle translation.</li><li>2: OCR.</li></ul>
                     * @param _processType <p>Subtitle processing type:</p><ul><li>0: ASR.</li><li>1: subtitle translation.</li><li>2: OCR.</li></ul>
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
                     * 获取<p>Area configurations for the subtitle OCR extraction box.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SelectingSubtitleAreasConfig <p>Area configurations for the subtitle OCR extraction box.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SelectingSubtitleAreasConfig GetSelectingSubtitleAreasConfig() const;

                    /**
                     * 设置<p>Area configurations for the subtitle OCR extraction box.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _selectingSubtitleAreasConfig <p>Area configurations for the subtitle OCR extraction box.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Subtitle burn-in template ID.</p>
                     * @return SubtitleEmbedId <p>Subtitle burn-in template ID.</p>
                     * 
                     */
                    int64_t GetSubtitleEmbedId() const;

                    /**
                     * 设置<p>Subtitle burn-in template ID.</p>
                     * @param _subtitleEmbedId <p>Subtitle burn-in template ID.</p>
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
                     * 获取<p>Speaker identification mode. Valid values:<br>0: Speaker identification is disabled.<br>1: Speaker identification is enabled.<br>Default value: 0.</p>
                     * @return SpeakerMode <p>Speaker identification mode. Valid values:<br>0: Speaker identification is disabled.<br>1: Speaker identification is enabled.<br>Default value: 0.</p>
                     * 
                     */
                    int64_t GetSpeakerMode() const;

                    /**
                     * 设置<p>Speaker identification mode. Valid values:<br>0: Speaker identification is disabled.<br>1: Speaker identification is enabled.<br>Default value: 0.</p>
                     * @param _speakerMode <p>Speaker identification mode. Valid values:<br>0: Speaker identification is disabled.<br>1: Speaker identification is enabled.<br>Default value: 0.</p>
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
                     * 获取<p>Indicates whether to output the identified speaker to the subtitle file. Valid values:<br>0: The speaker is not output to the subtitle file.<br>1: The speaker is output to the VTT subtitle file.<br>Note: To use this parameter, the value of SpeakerMode cannot be 0.<br>Default value: 0.</p>
                     * @return SpeakerLabel <p>Indicates whether to output the identified speaker to the subtitle file. Valid values:<br>0: The speaker is not output to the subtitle file.<br>1: The speaker is output to the VTT subtitle file.<br>Note: To use this parameter, the value of SpeakerMode cannot be 0.<br>Default value: 0.</p>
                     * 
                     */
                    int64_t GetSpeakerLabel() const;

                    /**
                     * 设置<p>Indicates whether to output the identified speaker to the subtitle file. Valid values:<br>0: The speaker is not output to the subtitle file.<br>1: The speaker is output to the VTT subtitle file.<br>Note: To use this parameter, the value of SpeakerMode cannot be 0.<br>Default value: 0.</p>
                     * @param _speakerLabel <p>Indicates whether to output the identified speaker to the subtitle file. Valid values:<br>0: The speaker is not output to the subtitle file.<br>1: The speaker is output to the VTT subtitle file.<br>Note: To use this parameter, the value of SpeakerMode cannot be 0.<br>Default value: 0.</p>
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
                     * <p>Unique identifier of the smart subtitle template.</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>Smart subtitle template name.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Smart subtitle template description.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>Template type. Valid values:</p><ul><li>Preset: preset template.</li><li>Custom: custom template.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>ASR hotword lexicon parameters.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AsrHotWordsConfigure m_asrHotWordsConfigure;
                    bool m_asrHotWordsConfigureHasBeenSet;

                    /**
                     * <p>Name of the hotword lexicon associated with the template.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_asrHotWordsLibraryName;
                    bool m_asrHotWordsLibraryNameHasBeenSet;

                    /**
                     * <p>Video source language list for smart subtitle:</p><p><code>zh</code>: Simplified Chinese<br><code>yue</code>: Cantonese<br><code>zh-PY</code>: Chinese, English, and Cantonese<br><code>zh_medical</code>: Chinese healthcare<br><code>zh_dialect</code>: Chinese dialect<br><code>prime_zh</code>: Chinese and English dialects<br><code>zh_en</code>: Chinese and English<br><code>en</code>: English<br><code>ja</code>: Japanese<br><code>ko</code>: Korean<br><code>fr</code>: French<br><code>es</code>: Spanish<br><code>it</code>: Italian<br><code>de</code>: German<br><code>tr</code>: Turkish<br><code>ru</code>: Russian<br><code>pt</code>: Portuguese (Brazil)<br><code>pt-PT</code>: Portuguese (Portugal)<br><code>vi</code>: Vietnamese<br><code>id</code>: Indonesian<br><code>ms</code>: Malay<br><code>th</code>: Thai<br><code>ar</code>: Arabic<br><code>hi</code>: Hindi<br><code>fil</code>: Filipino<br><code>auto</code>: Automatic identification (only supported for subtitle translation)</p>
                     */
                    std::string m_videoSrcLanguage;
                    bool m_videoSrcLanguageHasBeenSet;

                    /**
                     * <p>Smart subtitle file format.</p><ul><li>vtt: WebVTT.</li><li>srt: SRT.</li><li>original: same as the source subtitle file (for subtitle translation templates).</li><li>Not specified or empty: no subtitle file generated.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subtitleFormat;
                    bool m_subtitleFormatHasBeenSet;

                    /**
                     * <p>Smart subtitle language type.<br>0: source language.<br>1: target language.<br>2: source language and target language.<br>Only 0 is supported when TranslateSwitch is OFF.<br>Only 1 or 2 is supported when TranslateSwitch is ON.</p>
                     */
                    int64_t m_subtitleType;
                    bool m_subtitleTypeHasBeenSet;

                    /**
                     * <p>Subtitle translation switch.<br>ON: enables translation.<br>OFF: disables translation.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_translateSwitch;
                    bool m_translateSwitchHasBeenSet;

                    /**
                     * <p>Target language for subtitle translation.<br>This parameter takes effect when TranslateSwitch is ON.<br><code>zh</code>: Simplified Chinese<br><code>zh-TW</code>: Traditional Chinese<br><code>en</code>: English<br><code>ja</code>: Japanese<br><code>ko</code>: Korean<br><code>fr</code>: French<br><code>es</code>: Spanish<br><code>it</code>: Italian<br><code>de</code>: German<br><code>tr</code>: Turkish<br><code>ru</code>: Russian<br><code>pt</code>: Portuguese (Brazil)<br><code>pt-PT</code>: Portuguese (Portugal)<br><code>vi</code>: Vietnamese<br><code>id</code>: Indonesian<br><code>ms</code>: Malay<br><code>th</code>: Thai<br><code>ar</code>: Arabic<br><code>hi</code>: Hindi<br><code>fil</code>: Filipino</p><p><strong>Note</strong>: Use <code>/</code> to separate multiple languages, such as <code>en/ja</code>, which indicates English and Japanese.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_translateDstLanguage;
                    bool m_translateDstLanguageHasBeenSet;

                    /**
                     * <p>Template creation time, in <a href="https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52">ISO date format</a>.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Last template modification time, in <a href="https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52">ISO date format</a>.</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Preset template alias for smart subtitle.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * <p>Subtitle processing type:</p><ul><li>0: ASR.</li><li>1: subtitle translation.</li><li>2: OCR.</li></ul>
                     */
                    uint64_t m_processType;
                    bool m_processTypeHasBeenSet;

                    /**
                     * <p>Area configurations for the subtitle OCR extraction box.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SelectingSubtitleAreasConfig m_selectingSubtitleAreasConfig;
                    bool m_selectingSubtitleAreasConfigHasBeenSet;

                    /**
                     * <p>Subtitle burn-in template ID.</p>
                     */
                    int64_t m_subtitleEmbedId;
                    bool m_subtitleEmbedIdHasBeenSet;

                    /**
                     * <p>Speaker identification mode. Valid values:<br>0: Speaker identification is disabled.<br>1: Speaker identification is enabled.<br>Default value: 0.</p>
                     */
                    int64_t m_speakerMode;
                    bool m_speakerModeHasBeenSet;

                    /**
                     * <p>Indicates whether to output the identified speaker to the subtitle file. Valid values:<br>0: The speaker is not output to the subtitle file.<br>1: The speaker is output to the VTT subtitle file.<br>Note: To use this parameter, the value of SpeakerMode cannot be 0.<br>Default value: 0.</p>
                     */
                    int64_t m_speakerLabel;
                    bool m_speakerLabelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETEMPLATEITEM_H_
