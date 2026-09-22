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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Moderation information.
                */
                class ReviewInfo : public AbstractModel
                {
                public:
                    ReviewInfo();
                    ~ReviewInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Content review template ID.
                     * @return Definition Content review template ID.
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置Content review template ID.
                     * @param _definition Content review template ID.
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Review result suggestion. Valid values:
<li>pass: it is recommended to pass;</li>
<li>review: suggest re-examination;</li>
<li>block: suggest banning.</li>
                     * @return Suggestion Review result suggestion. Valid values:
<li>pass: it is recommended to pass;</li>
<li>review: suggest re-examination;</li>
<li>block: suggest banning.</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Review result suggestion. Valid values:
<li>pass: it is recommended to pass;</li>
<li>review: suggest re-examination;</li>
<li>block: suggest banning.</li>
                     * @param _suggestion Review result suggestion. Valid values:
<li>pass: it is recommended to pass;</li>
<li>review: suggest re-examination;</li>
<li>block: suggest banning.</li>
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取Moderation type. Valid when `Suggestion` is `review` or `block`. Format: `Form.Label`.
Form refers to prohibited forms. Value range:
<li>Image: people or icons in the image;</li>
<li>OCR: text on the screen;</li>
<li>ASR: text in speech.</li>
<li>Voice: sound.</li>
Label indicates prohibited tags. Value range:
<li>Porn: Pornography;</li>
<li>Terror: violence.</li>
<li>Polity: inappropriate information;</li>
<li>Ad: advertisement;</li>
<li>Illegal: illegal;</li>
<li>Abuse: abusive language;</li>
<li>Moan: panting.</li>
                     * @return TypeSet Moderation type. Valid when `Suggestion` is `review` or `block`. Format: `Form.Label`.
Form refers to prohibited forms. Value range:
<li>Image: people or icons in the image;</li>
<li>OCR: text on the screen;</li>
<li>ASR: text in speech.</li>
<li>Voice: sound.</li>
Label indicates prohibited tags. Value range:
<li>Porn: Pornography;</li>
<li>Terror: violence.</li>
<li>Polity: inappropriate information;</li>
<li>Ad: advertisement;</li>
<li>Illegal: illegal;</li>
<li>Abuse: abusive language;</li>
<li>Moan: panting.</li>
                     * 
                     */
                    std::vector<std::string> GetTypeSet() const;

                    /**
                     * 设置Moderation type. Valid when `Suggestion` is `review` or `block`. Format: `Form.Label`.
Form refers to prohibited forms. Value range:
<li>Image: people or icons in the image;</li>
<li>OCR: text on the screen;</li>
<li>ASR: text in speech.</li>
<li>Voice: sound.</li>
Label indicates prohibited tags. Value range:
<li>Porn: Pornography;</li>
<li>Terror: violence.</li>
<li>Polity: inappropriate information;</li>
<li>Ad: advertisement;</li>
<li>Illegal: illegal;</li>
<li>Abuse: abusive language;</li>
<li>Moan: panting.</li>
                     * @param _typeSet Moderation type. Valid when `Suggestion` is `review` or `block`. Format: `Form.Label`.
Form refers to prohibited forms. Value range:
<li>Image: people or icons in the image;</li>
<li>OCR: text on the screen;</li>
<li>ASR: text in speech.</li>
<li>Voice: sound.</li>
Label indicates prohibited tags. Value range:
<li>Porn: Pornography;</li>
<li>Terror: violence.</li>
<li>Polity: inappropriate information;</li>
<li>Ad: advertisement;</li>
<li>Illegal: illegal;</li>
<li>Abuse: abusive language;</li>
<li>Moan: panting.</li>
                     * 
                     */
                    void SetTypeSet(const std::vector<std::string>& _typeSet);

                    /**
                     * 判断参数 TypeSet 是否已赋值
                     * @return TypeSet 是否已赋值
                     * 
                     */
                    bool TypeSetHasBeenSet() const;

                    /**
                     * 获取Moderation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return ReviewTime Moderation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetReviewTime() const;

                    /**
                     * 设置Moderation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _reviewTime Moderation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetReviewTime(const std::string& _reviewTime);

                    /**
                     * 判断参数 ReviewTime 是否已赋值
                     * @return ReviewTime 是否已赋值
                     * 
                     */
                    bool ReviewTimeHasBeenSet() const;

                private:

                    /**
                     * Content review template ID.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Review result suggestion. Valid values:
<li>pass: it is recommended to pass;</li>
<li>review: suggest re-examination;</li>
<li>block: suggest banning.</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Moderation type. Valid when `Suggestion` is `review` or `block`. Format: `Form.Label`.
Form refers to prohibited forms. Value range:
<li>Image: people or icons in the image;</li>
<li>OCR: text on the screen;</li>
<li>ASR: text in speech.</li>
<li>Voice: sound.</li>
Label indicates prohibited tags. Value range:
<li>Porn: Pornography;</li>
<li>Terror: violence.</li>
<li>Polity: inappropriate information;</li>
<li>Ad: advertisement;</li>
<li>Illegal: illegal;</li>
<li>Abuse: abusive language;</li>
<li>Moan: panting.</li>
                     */
                    std::vector<std::string> m_typeSet;
                    bool m_typeSetHasBeenSet;

                    /**
                     * Moderation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_reviewTime;
                    bool m_reviewTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWINFO_H_
