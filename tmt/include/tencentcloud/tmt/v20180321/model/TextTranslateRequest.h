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

#ifndef TENCENTCLOUD_TMT_V20180321_MODEL_TEXTTRANSLATEREQUEST_H_
#define TENCENTCLOUD_TMT_V20180321_MODEL_TEXTTRANSLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tmt
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * TextTranslate request structure.
                */
                class TextTranslateRequest : public AbstractModel
                {
                public:
                    TextTranslateRequest();
                    ~TextTranslateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The texts to be translated, which must be encoded in UTF-8 and can contain up to 2,000 characters in a request. For non-pure texts such as those with HTML tags, the translation may fail.
                     * @return SourceText The texts to be translated, which must be encoded in UTF-8 and can contain up to 2,000 characters in a request. For non-pure texts such as those with HTML tags, the translation may fail.
                     * 
                     */
                    std::string GetSourceText() const;

                    /**
                     * 设置The texts to be translated, which must be encoded in UTF-8 and can contain up to 2,000 characters in a request. For non-pure texts such as those with HTML tags, the translation may fail.
                     * @param _sourceText The texts to be translated, which must be encoded in UTF-8 and can contain up to 2,000 characters in a request. For non-pure texts such as those with HTML tags, the translation may fail.
                     * 
                     */
                    void SetSourceText(const std::string& _sourceText);

                    /**
                     * 判断参数 SourceText 是否已赋值
                     * @return SourceText 是否已赋值
                     * 
                     */
                    bool SourceTextHasBeenSet() const;

                    /**
                     * 获取Supported source languages:
auto: Automatic language detection
zh: Simplified Chinese
zh_TW: Traditional Chinese
en: English
ja: Japanese
fr: French
es: Spanish
it: Italian
de: German
tr: Turkish
ru: Russian
pt: Portuguese
vi: Vietnamese
id: Bahasa Indonesian
th: Thai
ms: Malay
ar: Arabic
hi: Hindi
                     * @return Source Supported source languages:
auto: Automatic language detection
zh: Simplified Chinese
zh_TW: Traditional Chinese
en: English
ja: Japanese
fr: French
es: Spanish
it: Italian
de: German
tr: Turkish
ru: Russian
pt: Portuguese
vi: Vietnamese
id: Bahasa Indonesian
th: Thai
ms: Malay
ar: Arabic
hi: Hindi
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Supported source languages:
auto: Automatic language detection
zh: Simplified Chinese
zh_TW: Traditional Chinese
en: English
ja: Japanese
fr: French
es: Spanish
it: Italian
de: German
tr: Turkish
ru: Russian
pt: Portuguese
vi: Vietnamese
id: Bahasa Indonesian
th: Thai
ms: Malay
ar: Arabic
hi: Hindi
                     * @param _source Supported source languages:
auto: Automatic language detection
zh: Simplified Chinese
zh_TW: Traditional Chinese
en: English
ja: Japanese
fr: French
es: Spanish
it: Italian
de: German
tr: Turkish
ru: Russian
pt: Portuguese
vi: Vietnamese
id: Bahasa Indonesian
th: Thai
ms: Malay
ar: Arabic
hi: Hindi
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Supported target languages for the above source languages:

<li>zh (Simplified Chinese): en (English), ja (Japanese), fr (French), es (Spanish), it (Italian), de (German), tr (Turkish), ru (Russian), pt (Portuguese), vi (Vietnamese), id (Bahasa Indonesian), th (Thai), and ms (Malay)</li>
<li>zh-TW (Traditional Chinese): en (English), ja (Japanese), fr (French), es (Spanish), it (Italian), tr (Turkish), ru (Russian), pt (Portuguese), vi (Vietnamese), id (Bahasa Indonesian), th (Thai), and ms (Malay)</li>
<li>en (English): zh (Simplified Chinese), zh-TW (Traditional Chinese), ja (Japanese), fr (French), es (Spanish), it (Italian), de (German), tr (Turkish), vi (Vietnamese), id (Bahasa Indonesian), th (Thai), ms (Malay), and hi (Hindi)</li>
<li>fr (French): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>it (Italian): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>de (German): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>ru (Russian): zh (Simplified Chinese) and zh-TW (Traditional Chinese)</li>
<li>tr (Turkish): zh (Simplified Chinese) and zh-TW (Traditional Chinese)</li>
<li>pt (Portuguese): zh (Simplified Chinese) and tr (Turkish)</li>
<li>es (Spanish): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>ja (Japanese): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>vi (Vietnamese): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>th (Thai): zh (Simplified Chinese) and en (English)</li>
<li>id (Bahasa Indonesian): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>ms (Malay): zh (Simplified Chinese) and zh-TW (Traditional Chinese)</li>
<li>ar (Arabic): en (English)</li>
<li>hi (Hindi): en (English)</li>
                     * @return Target Supported target languages for the above source languages:

<li>zh (Simplified Chinese): en (English), ja (Japanese), fr (French), es (Spanish), it (Italian), de (German), tr (Turkish), ru (Russian), pt (Portuguese), vi (Vietnamese), id (Bahasa Indonesian), th (Thai), and ms (Malay)</li>
<li>zh-TW (Traditional Chinese): en (English), ja (Japanese), fr (French), es (Spanish), it (Italian), tr (Turkish), ru (Russian), pt (Portuguese), vi (Vietnamese), id (Bahasa Indonesian), th (Thai), and ms (Malay)</li>
<li>en (English): zh (Simplified Chinese), zh-TW (Traditional Chinese), ja (Japanese), fr (French), es (Spanish), it (Italian), de (German), tr (Turkish), vi (Vietnamese), id (Bahasa Indonesian), th (Thai), ms (Malay), and hi (Hindi)</li>
<li>fr (French): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>it (Italian): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>de (German): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>ru (Russian): zh (Simplified Chinese) and zh-TW (Traditional Chinese)</li>
<li>tr (Turkish): zh (Simplified Chinese) and zh-TW (Traditional Chinese)</li>
<li>pt (Portuguese): zh (Simplified Chinese) and tr (Turkish)</li>
<li>es (Spanish): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>ja (Japanese): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>vi (Vietnamese): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>th (Thai): zh (Simplified Chinese) and en (English)</li>
<li>id (Bahasa Indonesian): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>ms (Malay): zh (Simplified Chinese) and zh-TW (Traditional Chinese)</li>
<li>ar (Arabic): en (English)</li>
<li>hi (Hindi): en (English)</li>
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置Supported target languages for the above source languages:

<li>zh (Simplified Chinese): en (English), ja (Japanese), fr (French), es (Spanish), it (Italian), de (German), tr (Turkish), ru (Russian), pt (Portuguese), vi (Vietnamese), id (Bahasa Indonesian), th (Thai), and ms (Malay)</li>
<li>zh-TW (Traditional Chinese): en (English), ja (Japanese), fr (French), es (Spanish), it (Italian), tr (Turkish), ru (Russian), pt (Portuguese), vi (Vietnamese), id (Bahasa Indonesian), th (Thai), and ms (Malay)</li>
<li>en (English): zh (Simplified Chinese), zh-TW (Traditional Chinese), ja (Japanese), fr (French), es (Spanish), it (Italian), de (German), tr (Turkish), vi (Vietnamese), id (Bahasa Indonesian), th (Thai), ms (Malay), and hi (Hindi)</li>
<li>fr (French): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>it (Italian): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>de (German): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>ru (Russian): zh (Simplified Chinese) and zh-TW (Traditional Chinese)</li>
<li>tr (Turkish): zh (Simplified Chinese) and zh-TW (Traditional Chinese)</li>
<li>pt (Portuguese): zh (Simplified Chinese) and tr (Turkish)</li>
<li>es (Spanish): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>ja (Japanese): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>vi (Vietnamese): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>th (Thai): zh (Simplified Chinese) and en (English)</li>
<li>id (Bahasa Indonesian): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>ms (Malay): zh (Simplified Chinese) and zh-TW (Traditional Chinese)</li>
<li>ar (Arabic): en (English)</li>
<li>hi (Hindi): en (English)</li>
                     * @param _target Supported target languages for the above source languages:

<li>zh (Simplified Chinese): en (English), ja (Japanese), fr (French), es (Spanish), it (Italian), de (German), tr (Turkish), ru (Russian), pt (Portuguese), vi (Vietnamese), id (Bahasa Indonesian), th (Thai), and ms (Malay)</li>
<li>zh-TW (Traditional Chinese): en (English), ja (Japanese), fr (French), es (Spanish), it (Italian), tr (Turkish), ru (Russian), pt (Portuguese), vi (Vietnamese), id (Bahasa Indonesian), th (Thai), and ms (Malay)</li>
<li>en (English): zh (Simplified Chinese), zh-TW (Traditional Chinese), ja (Japanese), fr (French), es (Spanish), it (Italian), de (German), tr (Turkish), vi (Vietnamese), id (Bahasa Indonesian), th (Thai), ms (Malay), and hi (Hindi)</li>
<li>fr (French): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>it (Italian): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>de (German): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>ru (Russian): zh (Simplified Chinese) and zh-TW (Traditional Chinese)</li>
<li>tr (Turkish): zh (Simplified Chinese) and zh-TW (Traditional Chinese)</li>
<li>pt (Portuguese): zh (Simplified Chinese) and tr (Turkish)</li>
<li>es (Spanish): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>ja (Japanese): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>vi (Vietnamese): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>th (Thai): zh (Simplified Chinese) and en (English)</li>
<li>id (Bahasa Indonesian): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>ms (Malay): zh (Simplified Chinese) and zh-TW (Traditional Chinese)</li>
<li>ar (Arabic): en (English)</li>
<li>hi (Hindi): en (English)</li>
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取The project ID, which can be obtained from **Console -> Account Center -> Project Management**. If no one is set, enter the default project ID `0`.
                     * @return ProjectId The project ID, which can be obtained from **Console -> Account Center -> Project Management**. If no one is set, enter the default project ID `0`.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置The project ID, which can be obtained from **Console -> Account Center -> Project Management**. If no one is set, enter the default project ID `0`.
                     * @param _projectId The project ID, which can be obtained from **Console -> Account Center -> Project Management**. If no one is set, enter the default project ID `0`.
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取The parameter used to mark the text content that needs to remain untranslated, such as special symbols and names of people and places. You can set only one word for this parameter in each request. Only nouns (like names of people and places) are supported, and verbs or phrases may cause poor translation outcomes.
                     * @return UntranslatedText The parameter used to mark the text content that needs to remain untranslated, such as special symbols and names of people and places. You can set only one word for this parameter in each request. Only nouns (like names of people and places) are supported, and verbs or phrases may cause poor translation outcomes.
                     * 
                     */
                    std::string GetUntranslatedText() const;

                    /**
                     * 设置The parameter used to mark the text content that needs to remain untranslated, such as special symbols and names of people and places. You can set only one word for this parameter in each request. Only nouns (like names of people and places) are supported, and verbs or phrases may cause poor translation outcomes.
                     * @param _untranslatedText The parameter used to mark the text content that needs to remain untranslated, such as special symbols and names of people and places. You can set only one word for this parameter in each request. Only nouns (like names of people and places) are supported, and verbs or phrases may cause poor translation outcomes.
                     * 
                     */
                    void SetUntranslatedText(const std::string& _untranslatedText);

                    /**
                     * 判断参数 UntranslatedText 是否已赋值
                     * @return UntranslatedText 是否已赋值
                     * 
                     */
                    bool UntranslatedTextHasBeenSet() const;

                    /**
                     * 获取
                     * @return TermRepoIDList 
                     * 
                     */
                    std::vector<std::string> GetTermRepoIDList() const;

                    /**
                     * 设置
                     * @param _termRepoIDList 
                     * 
                     */
                    void SetTermRepoIDList(const std::vector<std::string>& _termRepoIDList);

                    /**
                     * 判断参数 TermRepoIDList 是否已赋值
                     * @return TermRepoIDList 是否已赋值
                     * 
                     */
                    bool TermRepoIDListHasBeenSet() const;

                    /**
                     * 获取
                     * @return SentRepoIDList 
                     * 
                     */
                    std::vector<std::string> GetSentRepoIDList() const;

                    /**
                     * 设置
                     * @param _sentRepoIDList 
                     * 
                     */
                    void SetSentRepoIDList(const std::vector<std::string>& _sentRepoIDList);

                    /**
                     * 判断参数 SentRepoIDList 是否已赋值
                     * @return SentRepoIDList 是否已赋值
                     * 
                     */
                    bool SentRepoIDListHasBeenSet() const;

                private:

                    /**
                     * The texts to be translated, which must be encoded in UTF-8 and can contain up to 2,000 characters in a request. For non-pure texts such as those with HTML tags, the translation may fail.
                     */
                    std::string m_sourceText;
                    bool m_sourceTextHasBeenSet;

                    /**
                     * Supported source languages:
auto: Automatic language detection
zh: Simplified Chinese
zh_TW: Traditional Chinese
en: English
ja: Japanese
fr: French
es: Spanish
it: Italian
de: German
tr: Turkish
ru: Russian
pt: Portuguese
vi: Vietnamese
id: Bahasa Indonesian
th: Thai
ms: Malay
ar: Arabic
hi: Hindi
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Supported target languages for the above source languages:

<li>zh (Simplified Chinese): en (English), ja (Japanese), fr (French), es (Spanish), it (Italian), de (German), tr (Turkish), ru (Russian), pt (Portuguese), vi (Vietnamese), id (Bahasa Indonesian), th (Thai), and ms (Malay)</li>
<li>zh-TW (Traditional Chinese): en (English), ja (Japanese), fr (French), es (Spanish), it (Italian), tr (Turkish), ru (Russian), pt (Portuguese), vi (Vietnamese), id (Bahasa Indonesian), th (Thai), and ms (Malay)</li>
<li>en (English): zh (Simplified Chinese), zh-TW (Traditional Chinese), ja (Japanese), fr (French), es (Spanish), it (Italian), de (German), tr (Turkish), vi (Vietnamese), id (Bahasa Indonesian), th (Thai), ms (Malay), and hi (Hindi)</li>
<li>fr (French): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>it (Italian): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>de (German): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>ru (Russian): zh (Simplified Chinese) and zh-TW (Traditional Chinese)</li>
<li>tr (Turkish): zh (Simplified Chinese) and zh-TW (Traditional Chinese)</li>
<li>pt (Portuguese): zh (Simplified Chinese) and tr (Turkish)</li>
<li>es (Spanish): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>ja (Japanese): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>vi (Vietnamese): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>th (Thai): zh (Simplified Chinese) and en (English)</li>
<li>id (Bahasa Indonesian): zh (Simplified Chinese), zh-TW (Traditional Chinese) and en (English)</li>
<li>ms (Malay): zh (Simplified Chinese) and zh-TW (Traditional Chinese)</li>
<li>ar (Arabic): en (English)</li>
<li>hi (Hindi): en (English)</li>
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * The project ID, which can be obtained from **Console -> Account Center -> Project Management**. If no one is set, enter the default project ID `0`.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * The parameter used to mark the text content that needs to remain untranslated, such as special symbols and names of people and places. You can set only one word for this parameter in each request. Only nouns (like names of people and places) are supported, and verbs or phrases may cause poor translation outcomes.
                     */
                    std::string m_untranslatedText;
                    bool m_untranslatedTextHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_termRepoIDList;
                    bool m_termRepoIDListHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_sentRepoIDList;
                    bool m_sentRepoIDListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMT_V20180321_MODEL_TEXTTRANSLATEREQUEST_H_
