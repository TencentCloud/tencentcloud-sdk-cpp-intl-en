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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_ASRPARAM_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_ASRPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * Parameters used in speech recognition
                */
                class AsrParam : public AbstractModel
                {
                public:
                    AsrParam();
                    ~AsrParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>The model type used by the transcription service. Example value "bigmodel-zh". The languages supported by different package versions of speech to text are as follows:</p><ol><li>V2 version (recommended)</li></ol><p>"bigmodel-xxx": large model engine, recommended for use. "xxx" can be filled with specific languages, such as "bigmodel-zh". "xxx" can be filled with Chinese ("zh"), English ("en"), Cantonese ("yue"), Arabic ("ar"), German ("de"), French ("fr"), Spanish ("es"), Portuguese ("pt"), Indonesian ("id"), Italian ("it"), Korean ("ko"), Russian ("ru"), Thai ("th"), Vietnamese ("vi"), Japanese ("ja"), Turkish ("tr"), Hindi ("hi"), Malay ("ms"), Dutch ("nl"), Swedish ("sv"), Danish ("da"), Finnish ("fi"), Polish ("pl"), Czech ("cs"), Filipino ("fil"), Persian ("fa"), Greek ("el"), Hungarian ("hu"), Macedonian ("mk"), Romanian ("ro").</p><ol start="2"><li>V1 version (legacy version)</li></ol><p>Standard language engine:</p><ul><li>"16k_zh_large": 16k large model engine, simultaneously supports Chinese, English, and multiple Chinese dialects with accent recognition.</li><li>"16k_zh_en": latest 16k Chinese-English large model engine, simultaneously supports Chinese, English, and multiple Chinese dialects with accent recognition, optimized for Chinese-English mixed scenarios.</li></ul><p>Advanced language engine:</p><ul><li>"zh-yue": Cantonese Chinese</li><li>"vi": Vietnamese</li><li>"ja": Japanese</li><li>"ko": Korean</li><li>"id": Indonesian</li><li>"th": Thai</li><li>"pt": Portuguese</li><li>"tr": Turkish</li><li>"ar": Arabic</li><li>"es": Spanish</li><li>"hi": Hindi</li><li>"fr": French</li><li>"ms": Malay</li><li>"fil": Filipino</li><li>"de": German</li><li>"it": Italian</li><li>"ru": Russian</li><li>"sv": Swedish</li><li>"da": Danish</li><li>"no": Norwegian</li></ul><p>Note:<br>If the language you need is not available, contact our technical support.</p>
                     * @return Lang <p>The model type used by the transcription service. Example value "bigmodel-zh". The languages supported by different package versions of speech to text are as follows:</p><ol><li>V2 version (recommended)</li></ol><p>"bigmodel-xxx": large model engine, recommended for use. "xxx" can be filled with specific languages, such as "bigmodel-zh". "xxx" can be filled with Chinese ("zh"), English ("en"), Cantonese ("yue"), Arabic ("ar"), German ("de"), French ("fr"), Spanish ("es"), Portuguese ("pt"), Indonesian ("id"), Italian ("it"), Korean ("ko"), Russian ("ru"), Thai ("th"), Vietnamese ("vi"), Japanese ("ja"), Turkish ("tr"), Hindi ("hi"), Malay ("ms"), Dutch ("nl"), Swedish ("sv"), Danish ("da"), Finnish ("fi"), Polish ("pl"), Czech ("cs"), Filipino ("fil"), Persian ("fa"), Greek ("el"), Hungarian ("hu"), Macedonian ("mk"), Romanian ("ro").</p><ol start="2"><li>V1 version (legacy version)</li></ol><p>Standard language engine:</p><ul><li>"16k_zh_large": 16k large model engine, simultaneously supports Chinese, English, and multiple Chinese dialects with accent recognition.</li><li>"16k_zh_en": latest 16k Chinese-English large model engine, simultaneously supports Chinese, English, and multiple Chinese dialects with accent recognition, optimized for Chinese-English mixed scenarios.</li></ul><p>Advanced language engine:</p><ul><li>"zh-yue": Cantonese Chinese</li><li>"vi": Vietnamese</li><li>"ja": Japanese</li><li>"ko": Korean</li><li>"id": Indonesian</li><li>"th": Thai</li><li>"pt": Portuguese</li><li>"tr": Turkish</li><li>"ar": Arabic</li><li>"es": Spanish</li><li>"hi": Hindi</li><li>"fr": French</li><li>"ms": Malay</li><li>"fil": Filipino</li><li>"de": German</li><li>"it": Italian</li><li>"ru": Russian</li><li>"sv": Swedish</li><li>"da": Danish</li><li>"no": Norwegian</li></ul><p>Note:<br>If the language you need is not available, contact our technical support.</p>
                     * 
                     */
                    std::string GetLang() const;

                    /**
                     * 设置<p>The model type used by the transcription service. Example value "bigmodel-zh". The languages supported by different package versions of speech to text are as follows:</p><ol><li>V2 version (recommended)</li></ol><p>"bigmodel-xxx": large model engine, recommended for use. "xxx" can be filled with specific languages, such as "bigmodel-zh". "xxx" can be filled with Chinese ("zh"), English ("en"), Cantonese ("yue"), Arabic ("ar"), German ("de"), French ("fr"), Spanish ("es"), Portuguese ("pt"), Indonesian ("id"), Italian ("it"), Korean ("ko"), Russian ("ru"), Thai ("th"), Vietnamese ("vi"), Japanese ("ja"), Turkish ("tr"), Hindi ("hi"), Malay ("ms"), Dutch ("nl"), Swedish ("sv"), Danish ("da"), Finnish ("fi"), Polish ("pl"), Czech ("cs"), Filipino ("fil"), Persian ("fa"), Greek ("el"), Hungarian ("hu"), Macedonian ("mk"), Romanian ("ro").</p><ol start="2"><li>V1 version (legacy version)</li></ol><p>Standard language engine:</p><ul><li>"16k_zh_large": 16k large model engine, simultaneously supports Chinese, English, and multiple Chinese dialects with accent recognition.</li><li>"16k_zh_en": latest 16k Chinese-English large model engine, simultaneously supports Chinese, English, and multiple Chinese dialects with accent recognition, optimized for Chinese-English mixed scenarios.</li></ul><p>Advanced language engine:</p><ul><li>"zh-yue": Cantonese Chinese</li><li>"vi": Vietnamese</li><li>"ja": Japanese</li><li>"ko": Korean</li><li>"id": Indonesian</li><li>"th": Thai</li><li>"pt": Portuguese</li><li>"tr": Turkish</li><li>"ar": Arabic</li><li>"es": Spanish</li><li>"hi": Hindi</li><li>"fr": French</li><li>"ms": Malay</li><li>"fil": Filipino</li><li>"de": German</li><li>"it": Italian</li><li>"ru": Russian</li><li>"sv": Swedish</li><li>"da": Danish</li><li>"no": Norwegian</li></ul><p>Note:<br>If the language you need is not available, contact our technical support.</p>
                     * @param _lang <p>The model type used by the transcription service. Example value "bigmodel-zh". The languages supported by different package versions of speech to text are as follows:</p><ol><li>V2 version (recommended)</li></ol><p>"bigmodel-xxx": large model engine, recommended for use. "xxx" can be filled with specific languages, such as "bigmodel-zh". "xxx" can be filled with Chinese ("zh"), English ("en"), Cantonese ("yue"), Arabic ("ar"), German ("de"), French ("fr"), Spanish ("es"), Portuguese ("pt"), Indonesian ("id"), Italian ("it"), Korean ("ko"), Russian ("ru"), Thai ("th"), Vietnamese ("vi"), Japanese ("ja"), Turkish ("tr"), Hindi ("hi"), Malay ("ms"), Dutch ("nl"), Swedish ("sv"), Danish ("da"), Finnish ("fi"), Polish ("pl"), Czech ("cs"), Filipino ("fil"), Persian ("fa"), Greek ("el"), Hungarian ("hu"), Macedonian ("mk"), Romanian ("ro").</p><ol start="2"><li>V1 version (legacy version)</li></ol><p>Standard language engine:</p><ul><li>"16k_zh_large": 16k large model engine, simultaneously supports Chinese, English, and multiple Chinese dialects with accent recognition.</li><li>"16k_zh_en": latest 16k Chinese-English large model engine, simultaneously supports Chinese, English, and multiple Chinese dialects with accent recognition, optimized for Chinese-English mixed scenarios.</li></ul><p>Advanced language engine:</p><ul><li>"zh-yue": Cantonese Chinese</li><li>"vi": Vietnamese</li><li>"ja": Japanese</li><li>"ko": Korean</li><li>"id": Indonesian</li><li>"th": Thai</li><li>"pt": Portuguese</li><li>"tr": Turkish</li><li>"ar": Arabic</li><li>"es": Spanish</li><li>"hi": Hindi</li><li>"fr": French</li><li>"ms": Malay</li><li>"fil": Filipino</li><li>"de": German</li><li>"it": Italian</li><li>"ru": Russian</li><li>"sv": Swedish</li><li>"da": Danish</li><li>"no": Norwegian</li></ul><p>Note:<br>If the language you need is not available, contact our technical support.</p>
                     * 
                     */
                    void SetLang(const std::string& _lang);

                    /**
                     * 判断参数 Lang 是否已赋值
                     * @return Lang 是否已赋值
                     * 
                     */
                    bool LangHasBeenSet() const;

                    /**
                     * 获取<p>The time when speech recognition vad ranges from 240 to 2000, with a default of 1000. The unit is ms. A smaller value enables faster sentence segmentation for speech recognition.<br>Example value: 1000</p>
                     * @return VadSilenceTime <p>The time when speech recognition vad ranges from 240 to 2000, with a default of 1000. The unit is ms. A smaller value enables faster sentence segmentation for speech recognition.<br>Example value: 1000</p>
                     * 
                     */
                    uint64_t GetVadSilenceTime() const;

                    /**
                     * 设置<p>The time when speech recognition vad ranges from 240 to 2000, with a default of 1000. The unit is ms. A smaller value enables faster sentence segmentation for speech recognition.<br>Example value: 1000</p>
                     * @param _vadSilenceTime <p>The time when speech recognition vad ranges from 240 to 2000, with a default of 1000. The unit is ms. A smaller value enables faster sentence segmentation for speech recognition.<br>Example value: 1000</p>
                     * 
                     */
                    void SetVadSilenceTime(const uint64_t& _vadSilenceTime);

                    /**
                     * 判断参数 VadSilenceTime 是否已赋值
                     * @return VadSilenceTime 是否已赋值
                     * 
                     */
                    bool VadSilenceTimeHasBeenSet() const;

                    /**
                     * 获取<p>Temporary term list: improves recognition accuracy by biasing the ASR engine toward specific terms.</p>
<ul>
<li>Single term format: term|weight. Each term must not exceed 30 characters (or 10 Chinese characters). Weight must be an integer from [1-11] or 100. Examples: Tencent Cloud|5, ASR|11.</li>
<li>List format and limits: separate multiple terms with commas. Up to 128 terms are supported. Example: Tencent Cloud|10,speech recognition|5,ASR|11.<br>
Note:<br>
When the term weight is set to 11, the term is treated as a high-priority super term. Use weight 11 only for terms that are critical and must be recognized reliably. Setting too many terms to weight 11 may reduce overall accuracy.<br>
When the term weight is set to 100, the term enables homophone replacement. For example, when the configuration is write|100, any recognized homophone of "write" (such as "right") is forcibly replaced with "write". Enable this feature only when needed, and reserve weight 100 for terms where homophone confusion is a real problem. Setting too many terms to weight 100 may reduce overall accuracy.<br>
Terms must not contain spaces. Invalid example: ASR Tencent Cloud<br>
Example value: voice assistant|10</li>
</ul>
                     * @return HotWordList <p>Temporary term list: improves recognition accuracy by biasing the ASR engine toward specific terms.</p>
<ul>
<li>Single term format: term|weight. Each term must not exceed 30 characters (or 10 Chinese characters). Weight must be an integer from [1-11] or 100. Examples: Tencent Cloud|5, ASR|11.</li>
<li>List format and limits: separate multiple terms with commas. Up to 128 terms are supported. Example: Tencent Cloud|10,speech recognition|5,ASR|11.<br>
Note:<br>
When the term weight is set to 11, the term is treated as a high-priority super term. Use weight 11 only for terms that are critical and must be recognized reliably. Setting too many terms to weight 11 may reduce overall accuracy.<br>
When the term weight is set to 100, the term enables homophone replacement. For example, when the configuration is write|100, any recognized homophone of "write" (such as "right") is forcibly replaced with "write". Enable this feature only when needed, and reserve weight 100 for terms where homophone confusion is a real problem. Setting too many terms to weight 100 may reduce overall accuracy.<br>
Terms must not contain spaces. Invalid example: ASR Tencent Cloud<br>
Example value: voice assistant|10</li>
</ul>
                     * 
                     */
                    std::string GetHotWordList() const;

                    /**
                     * 设置<p>Temporary term list: improves recognition accuracy by biasing the ASR engine toward specific terms.</p>
<ul>
<li>Single term format: term|weight. Each term must not exceed 30 characters (or 10 Chinese characters). Weight must be an integer from [1-11] or 100. Examples: Tencent Cloud|5, ASR|11.</li>
<li>List format and limits: separate multiple terms with commas. Up to 128 terms are supported. Example: Tencent Cloud|10,speech recognition|5,ASR|11.<br>
Note:<br>
When the term weight is set to 11, the term is treated as a high-priority super term. Use weight 11 only for terms that are critical and must be recognized reliably. Setting too many terms to weight 11 may reduce overall accuracy.<br>
When the term weight is set to 100, the term enables homophone replacement. For example, when the configuration is write|100, any recognized homophone of "write" (such as "right") is forcibly replaced with "write". Enable this feature only when needed, and reserve weight 100 for terms where homophone confusion is a real problem. Setting too many terms to weight 100 may reduce overall accuracy.<br>
Terms must not contain spaces. Invalid example: ASR Tencent Cloud<br>
Example value: voice assistant|10</li>
</ul>
                     * @param _hotWordList <p>Temporary term list: improves recognition accuracy by biasing the ASR engine toward specific terms.</p>
<ul>
<li>Single term format: term|weight. Each term must not exceed 30 characters (or 10 Chinese characters). Weight must be an integer from [1-11] or 100. Examples: Tencent Cloud|5, ASR|11.</li>
<li>List format and limits: separate multiple terms with commas. Up to 128 terms are supported. Example: Tencent Cloud|10,speech recognition|5,ASR|11.<br>
Note:<br>
When the term weight is set to 11, the term is treated as a high-priority super term. Use weight 11 only for terms that are critical and must be recognized reliably. Setting too many terms to weight 11 may reduce overall accuracy.<br>
When the term weight is set to 100, the term enables homophone replacement. For example, when the configuration is write|100, any recognized homophone of "write" (such as "right") is forcibly replaced with "write". Enable this feature only when needed, and reserve weight 100 for terms where homophone confusion is a real problem. Setting too many terms to weight 100 may reduce overall accuracy.<br>
Terms must not contain spaces. Invalid example: ASR Tencent Cloud<br>
Example value: voice assistant|10</li>
</ul>
                     * 
                     */
                    void SetHotWordList(const std::string& _hotWordList);

                    /**
                     * 判断参数 HotWordList 是否已赋值
                     * @return HotWordList 是否已赋值
                     * 
                     */
                    bool HotWordListHasBeenSet() const;

                    /**
                     * 获取<p>Fuzzy recognition is an advanced language engine feature. You can only specify advanced language engines other than zh-dialect and zh-yue. Note: You can specify up to 4 languages.</p>
                     * @return AlternativeLanguage <p>Fuzzy recognition is an advanced language engine feature. You can only specify advanced language engines other than zh-dialect and zh-yue. Note: You can specify up to 4 languages.</p>
                     * 
                     */
                    std::vector<std::string> GetAlternativeLanguage() const;

                    /**
                     * 设置<p>Fuzzy recognition is an advanced language engine feature. You can only specify advanced language engines other than zh-dialect and zh-yue. Note: You can specify up to 4 languages.</p>
                     * @param _alternativeLanguage <p>Fuzzy recognition is an advanced language engine feature. You can only specify advanced language engines other than zh-dialect and zh-yue. Note: You can specify up to 4 languages.</p>
                     * 
                     */
                    void SetAlternativeLanguage(const std::vector<std::string>& _alternativeLanguage);

                    /**
                     * 判断参数 AlternativeLanguage 是否已赋值
                     * @return AlternativeLanguage 是否已赋值
                     * 
                     */
                    bool AlternativeLanguageHasBeenSet() const;

                    /**
                     * 获取<p>The far-field voice suppression capacity of vad (without impacting asr recognition accuracy) ranges from [0, 3], defaulting to 0. Recommended setting is 2 for better far-field voice suppression capacity.</p>
                     * @return VadLevel <p>The far-field voice suppression capacity of vad (without impacting asr recognition accuracy) ranges from [0, 3], defaulting to 0. Recommended setting is 2 for better far-field voice suppression capacity.</p>
                     * 
                     */
                    uint64_t GetVadLevel() const;

                    /**
                     * 设置<p>The far-field voice suppression capacity of vad (without impacting asr recognition accuracy) ranges from [0, 3], defaulting to 0. Recommended setting is 2 for better far-field voice suppression capacity.</p>
                     * @param _vadLevel <p>The far-field voice suppression capacity of vad (without impacting asr recognition accuracy) ranges from [0, 3], defaulting to 0. Recommended setting is 2 for better far-field voice suppression capacity.</p>
                     * 
                     */
                    void SetVadLevel(const uint64_t& _vadLevel);

                    /**
                     * 判断参数 VadLevel 是否已赋值
                     * @return VadLevel 是否已赋值
                     * 
                     */
                    bool VadLevelHasBeenSet() const;

                    /**
                     * 获取<p>Whether to filter profanity (currently only support basic language engine and standard language engine), range [0, 2], default value 0.<br>0: not filter profanity; 1: filter dirty words; 2: replace with " * ".</p>
                     * @return FilterDirty <p>Whether to filter profanity (currently only support basic language engine and standard language engine), range [0, 2], default value 0.<br>0: not filter profanity; 1: filter dirty words; 2: replace with " * ".</p>
                     * 
                     */
                    uint64_t GetFilterDirty() const;

                    /**
                     * 设置<p>Whether to filter profanity (currently only support basic language engine and standard language engine), range [0, 2], default value 0.<br>0: not filter profanity; 1: filter dirty words; 2: replace with " * ".</p>
                     * @param _filterDirty <p>Whether to filter profanity (currently only support basic language engine and standard language engine), range [0, 2], default value 0.<br>0: not filter profanity; 1: filter dirty words; 2: replace with " * ".</p>
                     * 
                     */
                    void SetFilterDirty(const uint64_t& _filterDirty);

                    /**
                     * 判断参数 FilterDirty 是否已赋值
                     * @return FilterDirty 是否已赋值
                     * 
                     */
                    bool FilterDirtyHasBeenSet() const;

                    /**
                     * 获取<p>Whether to filter modal particles (currently only support basic language engine and standard language engine). Range: [0, 2]. Default value: 0.<br>0: Do not filter modal particles; 1: Partial filtering; 2: Strict filtering.</p>
                     * @return FilterModal <p>Whether to filter modal particles (currently only support basic language engine and standard language engine). Range: [0, 2]. Default value: 0.<br>0: Do not filter modal particles; 1: Partial filtering; 2: Strict filtering.</p>
                     * 
                     */
                    uint64_t GetFilterModal() const;

                    /**
                     * 设置<p>Whether to filter modal particles (currently only support basic language engine and standard language engine). Range: [0, 2]. Default value: 0.<br>0: Do not filter modal particles; 1: Partial filtering; 2: Strict filtering.</p>
                     * @param _filterModal <p>Whether to filter modal particles (currently only support basic language engine and standard language engine). Range: [0, 2]. Default value: 0.<br>0: Do not filter modal particles; 1: Partial filtering; 2: Strict filtering.</p>
                     * 
                     */
                    void SetFilterModal(const uint64_t& _filterModal);

                    /**
                     * 判断参数 FilterModal 是否已赋值
                     * @return FilterModal 是否已赋值
                     * 
                     */
                    bool FilterModalHasBeenSet() const;

                    /**
                     * 获取<p>Whether to filter periods at the end of sentences (currently only support basic language engine and standard language engine), range [0, 1], default value 0.<br>0: does not filter periods at the end of sentences; 1: filter out periods at the end of sentences.</p>
                     * @return FilterPunc <p>Whether to filter periods at the end of sentences (currently only support basic language engine and standard language engine), range [0, 1], default value 0.<br>0: does not filter periods at the end of sentences; 1: filter out periods at the end of sentences.</p>
                     * 
                     */
                    uint64_t GetFilterPunc() const;

                    /**
                     * 设置<p>Whether to filter periods at the end of sentences (currently only support basic language engine and standard language engine), range [0, 1], default value 0.<br>0: does not filter periods at the end of sentences; 1: filter out periods at the end of sentences.</p>
                     * @param _filterPunc <p>Whether to filter periods at the end of sentences (currently only support basic language engine and standard language engine), range [0, 1], default value 0.<br>0: does not filter periods at the end of sentences; 1: filter out periods at the end of sentences.</p>
                     * 
                     */
                    void SetFilterPunc(const uint64_t& _filterPunc);

                    /**
                     * 判断参数 FilterPunc 是否已赋值
                     * @return FilterPunc 是否已赋值
                     * 
                     */
                    bool FilterPuncHasBeenSet() const;

                private:

                    /**
                     * <p>The model type used by the transcription service. Example value "bigmodel-zh". The languages supported by different package versions of speech to text are as follows:</p><ol><li>V2 version (recommended)</li></ol><p>"bigmodel-xxx": large model engine, recommended for use. "xxx" can be filled with specific languages, such as "bigmodel-zh". "xxx" can be filled with Chinese ("zh"), English ("en"), Cantonese ("yue"), Arabic ("ar"), German ("de"), French ("fr"), Spanish ("es"), Portuguese ("pt"), Indonesian ("id"), Italian ("it"), Korean ("ko"), Russian ("ru"), Thai ("th"), Vietnamese ("vi"), Japanese ("ja"), Turkish ("tr"), Hindi ("hi"), Malay ("ms"), Dutch ("nl"), Swedish ("sv"), Danish ("da"), Finnish ("fi"), Polish ("pl"), Czech ("cs"), Filipino ("fil"), Persian ("fa"), Greek ("el"), Hungarian ("hu"), Macedonian ("mk"), Romanian ("ro").</p><ol start="2"><li>V1 version (legacy version)</li></ol><p>Standard language engine:</p><ul><li>"16k_zh_large": 16k large model engine, simultaneously supports Chinese, English, and multiple Chinese dialects with accent recognition.</li><li>"16k_zh_en": latest 16k Chinese-English large model engine, simultaneously supports Chinese, English, and multiple Chinese dialects with accent recognition, optimized for Chinese-English mixed scenarios.</li></ul><p>Advanced language engine:</p><ul><li>"zh-yue": Cantonese Chinese</li><li>"vi": Vietnamese</li><li>"ja": Japanese</li><li>"ko": Korean</li><li>"id": Indonesian</li><li>"th": Thai</li><li>"pt": Portuguese</li><li>"tr": Turkish</li><li>"ar": Arabic</li><li>"es": Spanish</li><li>"hi": Hindi</li><li>"fr": French</li><li>"ms": Malay</li><li>"fil": Filipino</li><li>"de": German</li><li>"it": Italian</li><li>"ru": Russian</li><li>"sv": Swedish</li><li>"da": Danish</li><li>"no": Norwegian</li></ul><p>Note:<br>If the language you need is not available, contact our technical support.</p>
                     */
                    std::string m_lang;
                    bool m_langHasBeenSet;

                    /**
                     * <p>The time when speech recognition vad ranges from 240 to 2000, with a default of 1000. The unit is ms. A smaller value enables faster sentence segmentation for speech recognition.<br>Example value: 1000</p>
                     */
                    uint64_t m_vadSilenceTime;
                    bool m_vadSilenceTimeHasBeenSet;

                    /**
                     * <p>Temporary term list: improves recognition accuracy by biasing the ASR engine toward specific terms.</p>
<ul>
<li>Single term format: term|weight. Each term must not exceed 30 characters (or 10 Chinese characters). Weight must be an integer from [1-11] or 100. Examples: Tencent Cloud|5, ASR|11.</li>
<li>List format and limits: separate multiple terms with commas. Up to 128 terms are supported. Example: Tencent Cloud|10,speech recognition|5,ASR|11.<br>
Note:<br>
When the term weight is set to 11, the term is treated as a high-priority super term. Use weight 11 only for terms that are critical and must be recognized reliably. Setting too many terms to weight 11 may reduce overall accuracy.<br>
When the term weight is set to 100, the term enables homophone replacement. For example, when the configuration is write|100, any recognized homophone of "write" (such as "right") is forcibly replaced with "write". Enable this feature only when needed, and reserve weight 100 for terms where homophone confusion is a real problem. Setting too many terms to weight 100 may reduce overall accuracy.<br>
Terms must not contain spaces. Invalid example: ASR Tencent Cloud<br>
Example value: voice assistant|10</li>
</ul>
                     */
                    std::string m_hotWordList;
                    bool m_hotWordListHasBeenSet;

                    /**
                     * <p>Fuzzy recognition is an advanced language engine feature. You can only specify advanced language engines other than zh-dialect and zh-yue. Note: You can specify up to 4 languages.</p>
                     */
                    std::vector<std::string> m_alternativeLanguage;
                    bool m_alternativeLanguageHasBeenSet;

                    /**
                     * <p>The far-field voice suppression capacity of vad (without impacting asr recognition accuracy) ranges from [0, 3], defaulting to 0. Recommended setting is 2 for better far-field voice suppression capacity.</p>
                     */
                    uint64_t m_vadLevel;
                    bool m_vadLevelHasBeenSet;

                    /**
                     * <p>Whether to filter profanity (currently only support basic language engine and standard language engine), range [0, 2], default value 0.<br>0: not filter profanity; 1: filter dirty words; 2: replace with " * ".</p>
                     */
                    uint64_t m_filterDirty;
                    bool m_filterDirtyHasBeenSet;

                    /**
                     * <p>Whether to filter modal particles (currently only support basic language engine and standard language engine). Range: [0, 2]. Default value: 0.<br>0: Do not filter modal particles; 1: Partial filtering; 2: Strict filtering.</p>
                     */
                    uint64_t m_filterModal;
                    bool m_filterModalHasBeenSet;

                    /**
                     * <p>Whether to filter periods at the end of sentences (currently only support basic language engine and standard language engine), range [0, 1], default value 0.<br>0: does not filter periods at the end of sentences; 1: filter out periods at the end of sentences.</p>
                     */
                    uint64_t m_filterPunc;
                    bool m_filterPuncHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_ASRPARAM_H_
