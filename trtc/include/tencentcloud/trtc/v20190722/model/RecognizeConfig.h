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
                * Configuration used by speech recognition
                */
                class RecognizeConfig : public AbstractModel
                {
                public:
                    RecognizeConfig();
                    ~RecognizeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The supported languages for speech recognition are as follows, with the default being "zh" for Chinese. The values for the `Language` field follow the [ISO639](https://en.wikipedia.org/wiki/List_of_ISO_639_language_codes) standard. Here is the full list of supported languages:

1. Chinese = "zh"
2. Chinese_TW = "zh-TW"
3. Chinese_DIALECT = "zh-dialect"
4. English = "en"
5. Vietnamese = "vi"
6. Japanese = "ja"
7. Korean = "ko"
8. Indonesian = "id"
9. Thai = "th"
10. Portuguese = "pt"
11. Turkish = "tr"
12. Arabic = "ar"
13. Spanish = "es"
14. Hindi = "hi"
15. French = "fr"
16. Malay = "ms"
17. Filipino = "fil"
18. German = "de"
19. Italian = "it"
20. Russian = "ru"

**Note:** If the language you need is not listed, please contact our technical support team.
                     * @return Language The supported languages for speech recognition are as follows, with the default being "zh" for Chinese. The values for the `Language` field follow the [ISO639](https://en.wikipedia.org/wiki/List_of_ISO_639_language_codes) standard. Here is the full list of supported languages:

1. Chinese = "zh"
2. Chinese_TW = "zh-TW"
3. Chinese_DIALECT = "zh-dialect"
4. English = "en"
5. Vietnamese = "vi"
6. Japanese = "ja"
7. Korean = "ko"
8. Indonesian = "id"
9. Thai = "th"
10. Portuguese = "pt"
11. Turkish = "tr"
12. Arabic = "ar"
13. Spanish = "es"
14. Hindi = "hi"
15. French = "fr"
16. Malay = "ms"
17. Filipino = "fil"
18. German = "de"
19. Italian = "it"
20. Russian = "ru"

**Note:** If the language you need is not listed, please contact our technical support team.
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置The supported languages for speech recognition are as follows, with the default being "zh" for Chinese. The values for the `Language` field follow the [ISO639](https://en.wikipedia.org/wiki/List_of_ISO_639_language_codes) standard. Here is the full list of supported languages:

1. Chinese = "zh"
2. Chinese_TW = "zh-TW"
3. Chinese_DIALECT = "zh-dialect"
4. English = "en"
5. Vietnamese = "vi"
6. Japanese = "ja"
7. Korean = "ko"
8. Indonesian = "id"
9. Thai = "th"
10. Portuguese = "pt"
11. Turkish = "tr"
12. Arabic = "ar"
13. Spanish = "es"
14. Hindi = "hi"
15. French = "fr"
16. Malay = "ms"
17. Filipino = "fil"
18. German = "de"
19. Italian = "it"
20. Russian = "ru"

**Note:** If the language you need is not listed, please contact our technical support team.
                     * @param _language The supported languages for speech recognition are as follows, with the default being "zh" for Chinese. The values for the `Language` field follow the [ISO639](https://en.wikipedia.org/wiki/List_of_ISO_639_language_codes) standard. Here is the full list of supported languages:

1. Chinese = "zh"
2. Chinese_TW = "zh-TW"
3. Chinese_DIALECT = "zh-dialect"
4. English = "en"
5. Vietnamese = "vi"
6. Japanese = "ja"
7. Korean = "ko"
8. Indonesian = "id"
9. Thai = "th"
10. Portuguese = "pt"
11. Turkish = "tr"
12. Arabic = "ar"
13. Spanish = "es"
14. Hindi = "hi"
15. French = "fr"
16. Malay = "ms"
17. Filipino = "fil"
18. German = "de"
19. Italian = "it"
20. Russian = "ru"

**Note:** If the language you need is not listed, please contact our technical support team.
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
                     * 获取Initiate fuzzy recognition to replace additional language types. Fill in up to 3 language types. Note: When Language is specified as "zh-dialect", fuzzy recognition is not supported and this field is invalid.
                     * @return AlternativeLanguage Initiate fuzzy recognition to replace additional language types. Fill in up to 3 language types. Note: When Language is specified as "zh-dialect", fuzzy recognition is not supported and this field is invalid.
                     * 
                     */
                    std::vector<std::string> GetAlternativeLanguage() const;

                    /**
                     * 设置Initiate fuzzy recognition to replace additional language types. Fill in up to 3 language types. Note: When Language is specified as "zh-dialect", fuzzy recognition is not supported and this field is invalid.
                     * @param _alternativeLanguage Initiate fuzzy recognition to replace additional language types. Fill in up to 3 language types. Note: When Language is specified as "zh-dialect", fuzzy recognition is not supported and this field is invalid.
                     * 
                     */
                    void SetAlternativeLanguage(const std::vector<std::string>& _alternativeLanguage);

                    /**
                     * 判断参数 AlternativeLanguage 是否已赋值
                     * @return AlternativeLanguage 是否已赋值
                     * 
                     */
                    bool AlternativeLanguageHasBeenSet() const;

                private:

                    /**
                     * The supported languages for speech recognition are as follows, with the default being "zh" for Chinese. The values for the `Language` field follow the [ISO639](https://en.wikipedia.org/wiki/List_of_ISO_639_language_codes) standard. Here is the full list of supported languages:

1. Chinese = "zh"
2. Chinese_TW = "zh-TW"
3. Chinese_DIALECT = "zh-dialect"
4. English = "en"
5. Vietnamese = "vi"
6. Japanese = "ja"
7. Korean = "ko"
8. Indonesian = "id"
9. Thai = "th"
10. Portuguese = "pt"
11. Turkish = "tr"
12. Arabic = "ar"
13. Spanish = "es"
14. Hindi = "hi"
15. French = "fr"
16. Malay = "ms"
17. Filipino = "fil"
18. German = "de"
19. Italian = "it"
20. Russian = "ru"

**Note:** If the language you need is not listed, please contact our technical support team.
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * Initiate fuzzy recognition to replace additional language types. Fill in up to 3 language types. Note: When Language is specified as "zh-dialect", fuzzy recognition is not supported and this field is invalid.
                     */
                    std::vector<std::string> m_alternativeLanguage;
                    bool m_alternativeLanguageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_RECOGNIZECONFIG_H_
