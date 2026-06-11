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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_STTCONFIG_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_STTCONFIG_H_

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
                * Convert speech to text parameter.
                */
                class STTConfig : public AbstractModel
                {
                public:
                    STTConfig();
                    ~STTConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Convert speech to text supported languages, "zh" chinese is selected by default.

You can unlock different languages by purchasing the "AI intelligent recognition duration package" or claiming the trial version of the monthly subscription package. 

Supported languages for different speech to text package versions are as follows:.

- "zh": chinese (simplified).
- "zh-TW": chinese (traditional).
- "en": english.
- "zh-yue": cantonese in china.
- "vi": "vietnamese.".
- "ja": "japanese.".
- "ko": "korean.".
- "id": "indonesian".
- "th": thai.
- "pt": portuguese.
- "tr": "turkish.".
- "ar": "arabic".
- "es": "spanish".
- "hi": "hindi".
- "ft": "french.".
- "ms": malay.
- "fil": filipino.
- "de": german.
-`it`: italian.
- "ru": russian.
- "sv": "swedish.".
- "da": "danish.".
- "no": norwegian.
- "pl": polski.
-"af-ZA": afrikaans.
- "nl-NL": dutch.
- "nl-BE": flemish.
- "uz": uzbek.
- "hu": hungarian.
- "he": hebrew.
- "ur": urdu.

**Note**:.
If the language you need is not available, contact our technical staff.
                     * @return Language Convert speech to text supported languages, "zh" chinese is selected by default.

You can unlock different languages by purchasing the "AI intelligent recognition duration package" or claiming the trial version of the monthly subscription package. 

Supported languages for different speech to text package versions are as follows:.

- "zh": chinese (simplified).
- "zh-TW": chinese (traditional).
- "en": english.
- "zh-yue": cantonese in china.
- "vi": "vietnamese.".
- "ja": "japanese.".
- "ko": "korean.".
- "id": "indonesian".
- "th": thai.
- "pt": portuguese.
- "tr": "turkish.".
- "ar": "arabic".
- "es": "spanish".
- "hi": "hindi".
- "ft": "french.".
- "ms": malay.
- "fil": filipino.
- "de": german.
-`it`: italian.
- "ru": russian.
- "sv": "swedish.".
- "da": "danish.".
- "no": norwegian.
- "pl": polski.
-"af-ZA": afrikaans.
- "nl-NL": dutch.
- "nl-BE": flemish.
- "uz": uzbek.
- "hu": hungarian.
- "he": hebrew.
- "ur": urdu.

**Note**:.
If the language you need is not available, contact our technical staff.
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置Convert speech to text supported languages, "zh" chinese is selected by default.

You can unlock different languages by purchasing the "AI intelligent recognition duration package" or claiming the trial version of the monthly subscription package. 

Supported languages for different speech to text package versions are as follows:.

- "zh": chinese (simplified).
- "zh-TW": chinese (traditional).
- "en": english.
- "zh-yue": cantonese in china.
- "vi": "vietnamese.".
- "ja": "japanese.".
- "ko": "korean.".
- "id": "indonesian".
- "th": thai.
- "pt": portuguese.
- "tr": "turkish.".
- "ar": "arabic".
- "es": "spanish".
- "hi": "hindi".
- "ft": "french.".
- "ms": malay.
- "fil": filipino.
- "de": german.
-`it`: italian.
- "ru": russian.
- "sv": "swedish.".
- "da": "danish.".
- "no": norwegian.
- "pl": polski.
-"af-ZA": afrikaans.
- "nl-NL": dutch.
- "nl-BE": flemish.
- "uz": uzbek.
- "hu": hungarian.
- "he": hebrew.
- "ur": urdu.

**Note**:.
If the language you need is not available, contact our technical staff.
                     * @param _language Convert speech to text supported languages, "zh" chinese is selected by default.

You can unlock different languages by purchasing the "AI intelligent recognition duration package" or claiming the trial version of the monthly subscription package. 

Supported languages for different speech to text package versions are as follows:.

- "zh": chinese (simplified).
- "zh-TW": chinese (traditional).
- "en": english.
- "zh-yue": cantonese in china.
- "vi": "vietnamese.".
- "ja": "japanese.".
- "ko": "korean.".
- "id": "indonesian".
- "th": thai.
- "pt": portuguese.
- "tr": "turkish.".
- "ar": "arabic".
- "es": "spanish".
- "hi": "hindi".
- "ft": "french.".
- "ms": malay.
- "fil": filipino.
- "de": german.
-`it`: italian.
- "ru": russian.
- "sv": "swedish.".
- "da": "danish.".
- "no": norwegian.
- "pl": polski.
-"af-ZA": afrikaans.
- "nl-NL": dutch.
- "nl-BE": flemish.
- "uz": uzbek.
- "hu": hungarian.
- "he": hebrew.
- "ur": urdu.

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
                     * 获取**Fuzzy recognition is an advanced edition capacity, charged by default as the advanced edition.**.
                     * @return AlternativeLanguage **Fuzzy recognition is an advanced edition capacity, charged by default as the advanced edition.**.
                     * 
                     */
                    std::vector<std::string> GetAlternativeLanguage() const;

                    /**
                     * 设置**Fuzzy recognition is an advanced edition capacity, charged by default as the advanced edition.**.
                     * @param _alternativeLanguage **Fuzzy recognition is an advanced edition capacity, charged by default as the advanced edition.**.
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
                     * 获取Custom parameter. contact for background usage.

                     * @return CustomParam Custom parameter. contact for background usage.

                     * 
                     */
                    std::string GetCustomParam() const;

                    /**
                     * 设置Custom parameter. contact for background usage.

                     * @param _customParam Custom parameter. contact for background usage.

                     * 
                     */
                    void SetCustomParam(const std::string& _customParam);

                    /**
                     * 判断参数 CustomParam 是否已赋值
                     * @return CustomParam 是否已赋值
                     * 
                     */
                    bool CustomParamHasBeenSet() const;

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
                     * 获取The vad far-field voice suppression capacity (without impacting asr recognition performance) ranges from 0 to 5, with a default value of 0, indicating disabled far-field voice suppression. the recommended setting is 2 for better far-field voice suppression. in a noisy office environment, it can be set to 3, and in more noisy environments, 4 and 5 are available for use. note that a higher VadLevel may suppress single words as noise.
                     * @return VadLevel The vad far-field voice suppression capacity (without impacting asr recognition performance) ranges from 0 to 5, with a default value of 0, indicating disabled far-field voice suppression. the recommended setting is 2 for better far-field voice suppression. in a noisy office environment, it can be set to 3, and in more noisy environments, 4 and 5 are available for use. note that a higher VadLevel may suppress single words as noise.
                     * 
                     */
                    uint64_t GetVadLevel() const;

                    /**
                     * 设置The vad far-field voice suppression capacity (without impacting asr recognition performance) ranges from 0 to 5, with a default value of 0, indicating disabled far-field voice suppression. the recommended setting is 2 for better far-field voice suppression. in a noisy office environment, it can be set to 3, and in more noisy environments, 4 and 5 are available for use. note that a higher VadLevel may suppress single words as noise.
                     * @param _vadLevel The vad far-field voice suppression capacity (without impacting asr recognition performance) ranges from 0 to 5, with a default value of 0, indicating disabled far-field voice suppression. the recommended setting is 2 for better far-field voice suppression. in a noisy office environment, it can be set to 3, and in more noisy environments, 4 and 5 are available for use. note that a higher VadLevel may suppress single words as noise.
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

- "zh": chinese (simplified).
- "zh-TW": chinese (traditional).
- "en": english.
- "zh-yue": cantonese in china.
- "vi": "vietnamese.".
- "ja": "japanese.".
- "ko": "korean.".
- "id": "indonesian".
- "th": thai.
- "pt": portuguese.
- "tr": "turkish.".
- "ar": "arabic".
- "es": "spanish".
- "hi": "hindi".
- "ft": "french.".
- "ms": malay.
- "fil": filipino.
- "de": german.
-`it`: italian.
- "ru": russian.
- "sv": "swedish.".
- "da": "danish.".
- "no": norwegian.
- "pl": polski.
-"af-ZA": afrikaans.
- "nl-NL": dutch.
- "nl-BE": flemish.
- "uz": uzbek.
- "hu": hungarian.
- "he": hebrew.
- "ur": urdu.

**Note**:.
If the language you need is not available, contact our technical staff.
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * **Fuzzy recognition is an advanced edition capacity, charged by default as the advanced edition.**.
                     */
                    std::vector<std::string> m_alternativeLanguage;
                    bool m_alternativeLanguageHasBeenSet;

                    /**
                     * Custom parameter. contact for background usage.

                     */
                    std::string m_customParam;
                    bool m_customParamHasBeenSet;

                    /**
                     * Specifies the time when automatic speech recognition (asr) vad is active. value range: 240-2000. default: 1000. unit: ms. a smaller value enables faster speech recognition sentence segmentation.
                     */
                    uint64_t m_vadSilenceTime;
                    bool m_vadSilenceTimeHasBeenSet;

                    /**
                     * The vad far-field voice suppression capacity (without impacting asr recognition performance) ranges from 0 to 5, with a default value of 0, indicating disabled far-field voice suppression. the recommended setting is 2 for better far-field voice suppression. in a noisy office environment, it can be set to 3, and in more noisy environments, 4 and 5 are available for use. note that a higher VadLevel may suppress single words as noise.
                     */
                    uint64_t m_vadLevel;
                    bool m_vadLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_STTCONFIG_H_
