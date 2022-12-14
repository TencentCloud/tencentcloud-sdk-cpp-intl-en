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

#ifndef TENCENTCLOUD_TMS_V20201229_MODEL_DETAILRESULTS_H_
#define TENCENTCLOUD_TMS_V20201229_MODEL_DETAILRESULTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tms/v20201229/model/Tag.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * Details of results returned by text moderation
                */
                class DetailResults : public AbstractModel
                {
                public:
                    DetailResults();
                    ~DetailResults() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Result of the moderation. <br>`Normal`: normal content; `Porn`: pornographic content; `Abuse`: abusive content; **Ad**: advertising content; `Custom`: custom violating content
                     * @return Label Result of the moderation. <br>`Normal`: normal content; `Porn`: pornographic content; `Abuse`: abusive content; **Ad**: advertising content; `Custom`: custom violating content
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Result of the moderation. <br>`Normal`: normal content; `Porn`: pornographic content; `Abuse`: abusive content; **Ad**: advertising content; `Custom`: custom violating content
                     * @param Label Result of the moderation. <br>`Normal`: normal content; `Porn`: pornographic content; `Abuse`: abusive content; **Ad**: advertising content; `Custom`: custom violating content
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取Recommended follow-up action. <br>`Block`: block it automatically; `Review`: review the content again in human; **Pass**: pass
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return Suggestion Recommended follow-up action. <br>`Block`: block it automatically; `Review`: review the content again in human; **Pass**: pass
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Recommended follow-up action. <br>`Block`: block it automatically; `Review`: review the content again in human; **Pass**: pass
Note: This field may return `null`, indicating that no valid value can be found.
                     * @param Suggestion Recommended follow-up action. <br>`Block`: block it automatically; `Review`: review the content again in human; **Pass**: pass
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取Returns the information of keywords hit in the text. When no value is returned and `Score` is not empty, it means the `Label` is determined by the semantic-based detection model.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Keywords Returns the information of keywords hit in the text. When no value is returned and `Score` is not empty, it means the `Label` is determined by the semantic-based detection model.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置Returns the information of keywords hit in the text. When no value is returned and `Score` is not empty, it means the `Label` is determined by the semantic-based detection model.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Keywords Returns the information of keywords hit in the text. When no value is returned and `Score` is not empty, it means the `Label` is determined by the semantic-based detection model.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetKeywords(const std::vector<std::string>& _keywords);

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     */
                    bool KeywordsHasBeenSet() const;

                    /**
                     * 获取This field indicates the convincing level of the `Label`, ranging from `0` (lowest) to `100` (highest). 
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return Score This field indicates the convincing level of the `Label`, ranging from `0` (lowest) to `100` (highest). 
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置This field indicates the convincing level of the `Label`, ranging from `0` (lowest) to `100` (highest). 
Note: This field may return `null`, indicating that no valid value can be found.
                     * @param Score This field indicates the convincing level of the `Label`, ranging from `0` (lowest) to `100` (highest). 
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取It indicates the library type corresponding with the keyword. Valid values: `1` (blocklist/allowlist library) and `2` (custom keyword library). If no custom keyword library is configured, the default value is 1.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return LibType It indicates the library type corresponding with the keyword. Valid values: `1` (blocklist/allowlist library) and `2` (custom keyword library). If no custom keyword library is configured, the default value is 1.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    int64_t GetLibType() const;

                    /**
                     * 设置It indicates the library type corresponding with the keyword. Valid values: `1` (blocklist/allowlist library) and `2` (custom keyword library). If no custom keyword library is configured, the default value is 1.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @param LibType It indicates the library type corresponding with the keyword. Valid values: `1` (blocklist/allowlist library) and `2` (custom keyword library). If no custom keyword library is configured, the default value is 1.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    void SetLibType(const int64_t& _libType);

                    /**
                     * 判断参数 LibType 是否已赋值
                     * @return LibType 是否已赋值
                     */
                    bool LibTypeHasBeenSet() const;

                    /**
                     * 获取This field is **only valid when `Label` is `Custom`. It returns the custom library ID to facilitate the library management and configuration.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return LibId This field is **only valid when `Label` is `Custom`. It returns the custom library ID to facilitate the library management and configuration.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    std::string GetLibId() const;

                    /**
                     * 设置This field is **only valid when `Label` is `Custom`. It returns the custom library ID to facilitate the library management and configuration.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @param LibId This field is **only valid when `Label` is `Custom`. It returns the custom library ID to facilitate the library management and configuration.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    void SetLibId(const std::string& _libId);

                    /**
                     * 判断参数 LibId 是否已赋值
                     * @return LibId 是否已赋值
                     */
                    bool LibIdHasBeenSet() const;

                    /**
                     * 获取This field is **only valid when `Label` is `Custom` (custom keyword)`. It returns the custom library name to facilitate the library management and configuration.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return LibName This field is **only valid when `Label` is `Custom` (custom keyword)`. It returns the custom library name to facilitate the library management and configuration.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    std::string GetLibName() const;

                    /**
                     * 设置This field is **only valid when `Label` is `Custom` (custom keyword)`. It returns the custom library name to facilitate the library management and configuration.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @param LibName This field is **only valid when `Label` is `Custom` (custom keyword)`. It returns the custom library name to facilitate the library management and configuration.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    void SetLibName(const std::string& _libName);

                    /**
                     * 判断参数 LibName 是否已赋值
                     * @return LibName 是否已赋值
                     */
                    bool LibNameHasBeenSet() const;

                    /**
                     * 获取The field returns the second-level labels under the current label.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return SubLabel The field returns the second-level labels under the current label.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置The field returns the second-level labels under the current label.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @param SubLabel The field returns the second-level labels under the current label.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    void SetSubLabel(const std::string& _subLabel);

                    /**
                     * 判断参数 SubLabel 是否已赋值
                     * @return SubLabel 是否已赋值
                     */
                    bool SubLabelHasBeenSet() const;

                    /**
                     * 获取Returns the keywords, label, sub-label and the score.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Returns the keywords, label, sub-label and the score.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Returns the keywords, label, sub-label and the score.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Tags Returns the keywords, label, sub-label and the score.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Result of the moderation. <br>`Normal`: normal content; `Porn`: pornographic content; `Abuse`: abusive content; **Ad**: advertising content; `Custom`: custom violating content
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * Recommended follow-up action. <br>`Block`: block it automatically; `Review`: review the content again in human; **Pass**: pass
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Returns the information of keywords hit in the text. When no value is returned and `Score` is not empty, it means the `Label` is determined by the semantic-based detection model.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * This field indicates the convincing level of the `Label`, ranging from `0` (lowest) to `100` (highest). 
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * It indicates the library type corresponding with the keyword. Valid values: `1` (blocklist/allowlist library) and `2` (custom keyword library). If no custom keyword library is configured, the default value is 1.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    int64_t m_libType;
                    bool m_libTypeHasBeenSet;

                    /**
                     * This field is **only valid when `Label` is `Custom`. It returns the custom library ID to facilitate the library management and configuration.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_libId;
                    bool m_libIdHasBeenSet;

                    /**
                     * This field is **only valid when `Label` is `Custom` (custom keyword)`. It returns the custom library name to facilitate the library management and configuration.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_libName;
                    bool m_libNameHasBeenSet;

                    /**
                     * The field returns the second-level labels under the current label.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * Returns the keywords, label, sub-label and the score.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_MODEL_DETAILRESULTS_H_
