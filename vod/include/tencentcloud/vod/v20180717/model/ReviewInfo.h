/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
                * Moderation details.
                */
                class ReviewInfo : public AbstractModel
                {
                public:
                    ReviewInfo();
                    ~ReviewInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The moderation template ID.
                     * @return Definition The moderation template ID.
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置The moderation template ID.
                     * @param Definition The moderation template ID.
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取The suggestion. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
                     * @return Suggestion The suggestion. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置The suggestion. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
                     * @param Suggestion The suggestion. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取The moderation type in the format of `Form.Label`. This parameter is valid if `Suggestion` is `review` or `block`.
`Form` indicates the type of inappropriate content detected. Valid values:
<li>`Image` (people or icons in images)</li>
<li>`OCR` (text in images)</li>
<li>`ASR` (speech)</li>
<li>`Voice`</li>
`Label` indicates the violation label. Valid values:
<li>`Porn` (pornographic content)</li>
<li>`Terror` (terrorist content)</li>
<li>Polity (politically sensitive content)</li>
<li>`Ad`</li>
<li>`Illegal` (illegal content)</li>
<li>`Religion`</li>
<li>`Abuse`</li>
<li>`Moan`</li>
                     * @return TypeSet The moderation type in the format of `Form.Label`. This parameter is valid if `Suggestion` is `review` or `block`.
`Form` indicates the type of inappropriate content detected. Valid values:
<li>`Image` (people or icons in images)</li>
<li>`OCR` (text in images)</li>
<li>`ASR` (speech)</li>
<li>`Voice`</li>
`Label` indicates the violation label. Valid values:
<li>`Porn` (pornographic content)</li>
<li>`Terror` (terrorist content)</li>
<li>Polity (politically sensitive content)</li>
<li>`Ad`</li>
<li>`Illegal` (illegal content)</li>
<li>`Religion`</li>
<li>`Abuse`</li>
<li>`Moan`</li>
                     */
                    std::vector<std::string> GetTypeSet() const;

                    /**
                     * 设置The moderation type in the format of `Form.Label`. This parameter is valid if `Suggestion` is `review` or `block`.
`Form` indicates the type of inappropriate content detected. Valid values:
<li>`Image` (people or icons in images)</li>
<li>`OCR` (text in images)</li>
<li>`ASR` (speech)</li>
<li>`Voice`</li>
`Label` indicates the violation label. Valid values:
<li>`Porn` (pornographic content)</li>
<li>`Terror` (terrorist content)</li>
<li>Polity (politically sensitive content)</li>
<li>`Ad`</li>
<li>`Illegal` (illegal content)</li>
<li>`Religion`</li>
<li>`Abuse`</li>
<li>`Moan`</li>
                     * @param TypeSet The moderation type in the format of `Form.Label`. This parameter is valid if `Suggestion` is `review` or `block`.
`Form` indicates the type of inappropriate content detected. Valid values:
<li>`Image` (people or icons in images)</li>
<li>`OCR` (text in images)</li>
<li>`ASR` (speech)</li>
<li>`Voice`</li>
`Label` indicates the violation label. Valid values:
<li>`Porn` (pornographic content)</li>
<li>`Terror` (terrorist content)</li>
<li>Polity (politically sensitive content)</li>
<li>`Ad`</li>
<li>`Illegal` (illegal content)</li>
<li>`Religion`</li>
<li>`Abuse`</li>
<li>`Moan`</li>
                     */
                    void SetTypeSet(const std::vector<std::string>& _typeSet);

                    /**
                     * 判断参数 TypeSet 是否已赋值
                     * @return TypeSet 是否已赋值
                     */
                    bool TypeSetHasBeenSet() const;

                    /**
                     * 获取The moderation time in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return ReviewTime The moderation time in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string GetReviewTime() const;

                    /**
                     * 设置The moderation time in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param ReviewTime The moderation time in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    void SetReviewTime(const std::string& _reviewTime);

                    /**
                     * 判断参数 ReviewTime 是否已赋值
                     * @return ReviewTime 是否已赋值
                     */
                    bool ReviewTimeHasBeenSet() const;

                private:

                    /**
                     * The moderation template ID.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * The suggestion. Valid values:
<li>pass</li>
<li>review</li>
<li>block</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * The moderation type in the format of `Form.Label`. This parameter is valid if `Suggestion` is `review` or `block`.
`Form` indicates the type of inappropriate content detected. Valid values:
<li>`Image` (people or icons in images)</li>
<li>`OCR` (text in images)</li>
<li>`ASR` (speech)</li>
<li>`Voice`</li>
`Label` indicates the violation label. Valid values:
<li>`Porn` (pornographic content)</li>
<li>`Terror` (terrorist content)</li>
<li>Polity (politically sensitive content)</li>
<li>`Ad`</li>
<li>`Illegal` (illegal content)</li>
<li>`Religion`</li>
<li>`Abuse`</li>
<li>`Moan`</li>
                     */
                    std::vector<std::string> m_typeSet;
                    bool m_typeSetHasBeenSet;

                    /**
                     * The moderation time in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_reviewTime;
                    bool m_reviewTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWINFO_H_
