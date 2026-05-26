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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_RECOGNIZECONFIG_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_RECOGNIZECONFIG_H_

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
                * Configuration for speech recognition usage.
                */
                class RecognizeConfig : public AbstractModel
                {
                public:
                    RecognizeConfig();
                    ~RecognizeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Convert speech to text supported languages, "zh" chinese is selected by default.

You can unlock different languages by purchasing the "AI intelligent recognition duration package" or claiming the trial version of the monthly subscription package. 

Supported languages for different speech to text package versions are as follows:.

Basic language engine:.
-"zh": chinese (simplified).

**Standard language engine:**.
-"8k_zh_large": engine (large model version) for telecommunication. the current model supports chinese and other language recognition, has a large number of parameters, and features language model performance enhancement. it greatly improves recognition accuracy for telephone audio in various scenarios and chinese dialects.
-"16k_zh_large": large model engine for mandarin, chinese dialects, and english. the current model supports language recognition for chinese, english, and multiple chinese dialects. it has a large number of parameters and enhanced language model performance, targeting low-quality audio such as loud noise, strong echo, low voice volume, and voice from far away with greatly improved recognition accuracy.
-"16k_zh_en": chinese-english large model engine. the current model simultaneously supports chinese and english recognition, has a large number of parameters, and features language model performance enhancement. it greatly improves recognition accuracy for low-quality audio such as loud noise, strong echo, low voice volume, and voice from far away.

**Advanced language engine:**.
-"zh-dialect": chinese dialect.
-"zh-yue": cantonese in china.
-"Vi": "vietnamese.".
-"Ja": "japanese.".
-"Ko": "korean.".
-"id": "indonesian".
-"Th": thai.
-"pt": portuguese.
-"tr": "turkish.".
-"Ar": "arabic".
-"es": "spanish".
-"Hi": "hindi".
-"Fr": "french.".
-"ms": malay.
-"Fil": filipino.
-"de": german.
-`It`: italian.
-"Ru": russian.
-"sv": "swedish.".
-"Da": "danish.".
-"No": norwegian.

**Note**:.
If the language you need is not available, contact our technical staff.
                     * @return Language Convert speech to text supported languages, "zh" chinese is selected by default.

You can unlock different languages by purchasing the "AI intelligent recognition duration package" or claiming the trial version of the monthly subscription package. 

Supported languages for different speech to text package versions are as follows:.

Basic language engine:.
-"zh": chinese (simplified).

**Standard language engine:**.
-"8k_zh_large": engine (large model version) for telecommunication. the current model supports chinese and other language recognition, has a large number of parameters, and features language model performance enhancement. it greatly improves recognition accuracy for telephone audio in various scenarios and chinese dialects.
-"16k_zh_large": large model engine for mandarin, chinese dialects, and english. the current model supports language recognition for chinese, english, and multiple chinese dialects. it has a large number of parameters and enhanced language model performance, targeting low-quality audio such as loud noise, strong echo, low voice volume, and voice from far away with greatly improved recognition accuracy.
-"16k_zh_en": chinese-english large model engine. the current model simultaneously supports chinese and english recognition, has a large number of parameters, and features language model performance enhancement. it greatly improves recognition accuracy for low-quality audio such as loud noise, strong echo, low voice volume, and voice from far away.

**Advanced language engine:**.
-"zh-dialect": chinese dialect.
-"zh-yue": cantonese in china.
-"Vi": "vietnamese.".
-"Ja": "japanese.".
-"Ko": "korean.".
-"id": "indonesian".
-"Th": thai.
-"pt": portuguese.
-"tr": "turkish.".
-"Ar": "arabic".
-"es": "spanish".
-"Hi": "hindi".
-"Fr": "french.".
-"ms": malay.
-"Fil": filipino.
-"de": german.
-`It`: italian.
-"Ru": russian.
-"sv": "swedish.".
-"Da": "danish.".
-"No": norwegian.

**Note**:.
If the language you need is not available, contact our technical staff.
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置Convert speech to text supported languages, "zh" chinese is selected by default.

You can unlock different languages by purchasing the "AI intelligent recognition duration package" or claiming the trial version of the monthly subscription package. 

Supported languages for different speech to text package versions are as follows:.

Basic language engine:.
-"zh": chinese (simplified).

**Standard language engine:**.
-"8k_zh_large": engine (large model version) for telecommunication. the current model supports chinese and other language recognition, has a large number of parameters, and features language model performance enhancement. it greatly improves recognition accuracy for telephone audio in various scenarios and chinese dialects.
-"16k_zh_large": large model engine for mandarin, chinese dialects, and english. the current model supports language recognition for chinese, english, and multiple chinese dialects. it has a large number of parameters and enhanced language model performance, targeting low-quality audio such as loud noise, strong echo, low voice volume, and voice from far away with greatly improved recognition accuracy.
-"16k_zh_en": chinese-english large model engine. the current model simultaneously supports chinese and english recognition, has a large number of parameters, and features language model performance enhancement. it greatly improves recognition accuracy for low-quality audio such as loud noise, strong echo, low voice volume, and voice from far away.

**Advanced language engine:**.
-"zh-dialect": chinese dialect.
-"zh-yue": cantonese in china.
-"Vi": "vietnamese.".
-"Ja": "japanese.".
-"Ko": "korean.".
-"id": "indonesian".
-"Th": thai.
-"pt": portuguese.
-"tr": "turkish.".
-"Ar": "arabic".
-"es": "spanish".
-"Hi": "hindi".
-"Fr": "french.".
-"ms": malay.
-"Fil": filipino.
-"de": german.
-`It`: italian.
-"Ru": russian.
-"sv": "swedish.".
-"Da": "danish.".
-"No": norwegian.

**Note**:.
If the language you need is not available, contact our technical staff.
                     * @param _language Convert speech to text supported languages, "zh" chinese is selected by default.

You can unlock different languages by purchasing the "AI intelligent recognition duration package" or claiming the trial version of the monthly subscription package. 

Supported languages for different speech to text package versions are as follows:.

Basic language engine:.
-"zh": chinese (simplified).

**Standard language engine:**.
-"8k_zh_large": engine (large model version) for telecommunication. the current model supports chinese and other language recognition, has a large number of parameters, and features language model performance enhancement. it greatly improves recognition accuracy for telephone audio in various scenarios and chinese dialects.
-"16k_zh_large": large model engine for mandarin, chinese dialects, and english. the current model supports language recognition for chinese, english, and multiple chinese dialects. it has a large number of parameters and enhanced language model performance, targeting low-quality audio such as loud noise, strong echo, low voice volume, and voice from far away with greatly improved recognition accuracy.
-"16k_zh_en": chinese-english large model engine. the current model simultaneously supports chinese and english recognition, has a large number of parameters, and features language model performance enhancement. it greatly improves recognition accuracy for low-quality audio such as loud noise, strong echo, low voice volume, and voice from far away.

**Advanced language engine:**.
-"zh-dialect": chinese dialect.
-"zh-yue": cantonese in china.
-"Vi": "vietnamese.".
-"Ja": "japanese.".
-"Ko": "korean.".
-"id": "indonesian".
-"Th": thai.
-"pt": portuguese.
-"tr": "turkish.".
-"Ar": "arabic".
-"es": "spanish".
-"Hi": "hindi".
-"Fr": "french.".
-"ms": malay.
-"Fil": filipino.
-"de": german.
-`It`: italian.
-"Ru": russian.
-"sv": "swedish.".
-"Da": "danish.".
-"No": norwegian.

**Note**:.
If the language you need is not available, contact our technical staff.
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
                     * 获取**Fuzzy recognition is an advanced edition capacity, charged as advanced edition by default, and only supports filling in basic version and advanced edition language.**.
Note: does not support entering "zh-dialect".
                     * @return AlternativeLanguage **Fuzzy recognition is an advanced edition capacity, charged as advanced edition by default, and only supports filling in basic version and advanced edition language.**.
Note: does not support entering "zh-dialect".
                     * 
                     */
                    std::vector<std::string> GetAlternativeLanguage() const;

                    /**
                     * 设置**Fuzzy recognition is an advanced edition capacity, charged as advanced edition by default, and only supports filling in basic version and advanced edition language.**.
Note: does not support entering "zh-dialect".
                     * @param _alternativeLanguage **Fuzzy recognition is an advanced edition capacity, charged as advanced edition by default, and only supports filling in basic version and advanced edition language.**.
Note: does not support entering "zh-dialect".
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
                     * 获取Hot word list: this parameter is used for improving recognition accuracy. each hot word is limited to "term|weight", with no more than 30 characters (a maximum of 10 chinese characters) per term. weight ranges from 1 to 11 or 100, for example: "tencent cloud|5" or "ASR|11". hot word list limitation: multiple terms separated by commas, supports up to 300 hot words, for example: "tencent cloud|10, speech recognition|5, ASR|11".
                     * @return HotWordList Hot word list: this parameter is used for improving recognition accuracy. each hot word is limited to "term|weight", with no more than 30 characters (a maximum of 10 chinese characters) per term. weight ranges from 1 to 11 or 100, for example: "tencent cloud|5" or "ASR|11". hot word list limitation: multiple terms separated by commas, supports up to 300 hot words, for example: "tencent cloud|10, speech recognition|5, ASR|11".
                     * 
                     */
                    std::string GetHotWordList() const;

                    /**
                     * 设置Hot word list: this parameter is used for improving recognition accuracy. each hot word is limited to "term|weight", with no more than 30 characters (a maximum of 10 chinese characters) per term. weight ranges from 1 to 11 or 100, for example: "tencent cloud|5" or "ASR|11". hot word list limitation: multiple terms separated by commas, supports up to 300 hot words, for example: "tencent cloud|10, speech recognition|5, ASR|11".
                     * @param _hotWordList Hot word list: this parameter is used for improving recognition accuracy. each hot word is limited to "term|weight", with no more than 30 characters (a maximum of 10 chinese characters) per term. weight ranges from 1 to 11 or 100, for example: "tencent cloud|5" or "ASR|11". hot word list limitation: multiple terms separated by commas, supports up to 300 hot words, for example: "tencent cloud|10, speech recognition|5, ASR|11".
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
                     * 获取Specifies the time when automatic speech recognition (asr) vad is active. value range: 240-2000. default: 1000. unit: ms. a smaller value enables faster speech recognition sentence segmentation.
                     * @return VadSilenceTime Specifies the time when automatic speech recognition (asr) vad is active. value range: 240-2000. default: 1000. unit: ms. a smaller value enables faster speech recognition sentence segmentation.
                     * 
                     */
                    uint64_t GetVadSilenceTime() const;

                    /**
                     * 设置Specifies the time when automatic speech recognition (asr) vad is active. value range: 240-2000. default: 1000. unit: ms. a smaller value enables faster speech recognition sentence segmentation.
                     * @param _vadSilenceTime Specifies the time when automatic speech recognition (asr) vad is active. value range: 240-2000. default: 1000. unit: ms. a smaller value enables faster speech recognition sentence segmentation.
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
                     * 获取The vad far-field voice suppression capacity (does not impact asr recognition performance) ranges from 0 to 3, with a default value of 0. recommended setting is 2 for better far-field voice suppression.
                     * @return VadLevel The vad far-field voice suppression capacity (does not impact asr recognition performance) ranges from 0 to 3, with a default value of 0. recommended setting is 2 for better far-field voice suppression.
                     * 
                     */
                    uint64_t GetVadLevel() const;

                    /**
                     * 设置The vad far-field voice suppression capacity (does not impact asr recognition performance) ranges from 0 to 3, with a default value of 0. recommended setting is 2 for better far-field voice suppression.
                     * @param _vadLevel The vad far-field voice suppression capacity (does not impact asr recognition performance) ranges from 0 to 3, with a default value of 0. recommended setting is 2 for better far-field voice suppression.
                     * 
                     */
                    void SetVadLevel(const uint64_t& _vadLevel);

                    /**
                     * 判断参数 VadLevel 是否已赋值
                     * @return VadLevel 是否已赋值
                     * 
                     */
                    bool VadLevelHasBeenSet() const;

                private:

                    /**
                     * Convert speech to text supported languages, "zh" chinese is selected by default.

You can unlock different languages by purchasing the "AI intelligent recognition duration package" or claiming the trial version of the monthly subscription package. 

Supported languages for different speech to text package versions are as follows:.

Basic language engine:.
-"zh": chinese (simplified).

**Standard language engine:**.
-"8k_zh_large": engine (large model version) for telecommunication. the current model supports chinese and other language recognition, has a large number of parameters, and features language model performance enhancement. it greatly improves recognition accuracy for telephone audio in various scenarios and chinese dialects.
-"16k_zh_large": large model engine for mandarin, chinese dialects, and english. the current model supports language recognition for chinese, english, and multiple chinese dialects. it has a large number of parameters and enhanced language model performance, targeting low-quality audio such as loud noise, strong echo, low voice volume, and voice from far away with greatly improved recognition accuracy.
-"16k_zh_en": chinese-english large model engine. the current model simultaneously supports chinese and english recognition, has a large number of parameters, and features language model performance enhancement. it greatly improves recognition accuracy for low-quality audio such as loud noise, strong echo, low voice volume, and voice from far away.

**Advanced language engine:**.
-"zh-dialect": chinese dialect.
-"zh-yue": cantonese in china.
-"Vi": "vietnamese.".
-"Ja": "japanese.".
-"Ko": "korean.".
-"id": "indonesian".
-"Th": thai.
-"pt": portuguese.
-"tr": "turkish.".
-"Ar": "arabic".
-"es": "spanish".
-"Hi": "hindi".
-"Fr": "french.".
-"ms": malay.
-"Fil": filipino.
-"de": german.
-`It`: italian.
-"Ru": russian.
-"sv": "swedish.".
-"Da": "danish.".
-"No": norwegian.

**Note**:.
If the language you need is not available, contact our technical staff.
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * **Fuzzy recognition is an advanced edition capacity, charged as advanced edition by default, and only supports filling in basic version and advanced edition language.**.
Note: does not support entering "zh-dialect".
                     */
                    std::vector<std::string> m_alternativeLanguage;
                    bool m_alternativeLanguageHasBeenSet;

                    /**
                     * Hot word list: this parameter is used for improving recognition accuracy. each hot word is limited to "term|weight", with no more than 30 characters (a maximum of 10 chinese characters) per term. weight ranges from 1 to 11 or 100, for example: "tencent cloud|5" or "ASR|11". hot word list limitation: multiple terms separated by commas, supports up to 300 hot words, for example: "tencent cloud|10, speech recognition|5, ASR|11".
                     */
                    std::string m_hotWordList;
                    bool m_hotWordListHasBeenSet;

                    /**
                     * Specifies the time when automatic speech recognition (asr) vad is active. value range: 240-2000. default: 1000. unit: ms. a smaller value enables faster speech recognition sentence segmentation.
                     */
                    uint64_t m_vadSilenceTime;
                    bool m_vadSilenceTimeHasBeenSet;

                    /**
                     * The vad far-field voice suppression capacity (does not impact asr recognition performance) ranges from 0 to 3, with a default value of 0. recommended setting is 2 for better far-field voice suppression.
                     */
                    uint64_t m_vadLevel;
                    bool m_vadLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_RECOGNIZECONFIG_H_
