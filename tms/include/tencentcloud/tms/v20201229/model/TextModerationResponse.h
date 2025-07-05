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

#ifndef TENCENTCLOUD_TMS_V20201229_MODEL_TEXTMODERATIONRESPONSE_H_
#define TENCENTCLOUD_TMS_V20201229_MODEL_TEXTMODERATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tms/v20201229/model/DetailResults.h>
#include <tencentcloud/tms/v20201229/model/RiskDetails.h>
#include <tencentcloud/tms/v20201229/model/SentimentAnalysis.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * TextModeration response structure.
                */
                class TextModerationResponse : public AbstractModel
                {
                public:
                    TextModerationResponse();
                    ~TextModerationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取This field returns the BizType of the request parameters
                     * @return BizType This field returns the BizType of the request parameters
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取This field returns the **negative label with the highest priority** in the moderation results (DetailResults), which indicates the moderation result recommended by the model. It is recommended that you handle different violations with the suggested values according to your business needs. <br>Returned values: **Normal**: normal content; **Porn**: pornographic content; **Abuse**: abusive content; **Ad**: advertising content; **Custom**: custom violating content, and others such as objectionable, insecure or inappropriate content.
                     * @return Label This field returns the **negative label with the highest priority** in the moderation results (DetailResults), which indicates the moderation result recommended by the model. It is recommended that you handle different violations with the suggested values according to your business needs. <br>Returned values: **Normal**: normal content; **Porn**: pornographic content; **Abuse**: abusive content; **Ad**: advertising content; **Custom**: custom violating content, and others such as objectionable, insecure or inappropriate content.
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取This field returns the follow-up moderation suggestions. The returned value indicates the recommended operation after obtaining the moderation result. It is recommended that you handle different violations with the suggested values according to your business needs. <br>Returned values: **Block**: block; **Review**: human moderation; **Pass**: pass
                     * @return Suggestion This field returns the follow-up moderation suggestions. The returned value indicates the recommended operation after obtaining the moderation result. It is recommended that you handle different violations with the suggested values according to your business needs. <br>Returned values: **Block**: block; **Review**: human moderation; **Pass**: pass
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取This field returns the keywords matched with the libraries in the moderated text under the current label to mark the specific violations (for example, *Friend me*). This parameter may have multiple returned values, indicating multiple keywords are matched. If the returned value is empty and the `Score` is not empty, it means that the negative label corresponding to the moderation result is a value returned from the semantic model judgment
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return Keywords This field returns the keywords matched with the libraries in the moderated text under the current label to mark the specific violations (for example, *Friend me*). This parameter may have multiple returned values, indicating multiple keywords are matched. If the returned value is empty and the `Score` is not empty, it means that the negative label corresponding to the moderation result is a value returned from the semantic model judgment
Note: This field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     * 
                     */
                    bool KeywordsHasBeenSet() const;

                    /**
                     * 获取This field returns the confidence level under the current label. Value range: 0 (**the lowest confidence level**) - 100 (**the highest confidence level**). The higher the value, the more likely the text is to belong to the category indicated by the current label. For example, *pornographic 99* indicates that the text is very likely to be pornographic, and *pornographic 0* indicates that the text is not pornographic
                     * @return Score This field returns the confidence level under the current label. Value range: 0 (**the lowest confidence level**) - 100 (**the highest confidence level**). The higher the value, the more likely the text is to belong to the category indicated by the current label. For example, *pornographic 99* indicates that the text is very likely to be pornographic, and *pornographic 0* indicates that the text is not pornographic
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取This field returns the moderation results based on the text libraries. For details, see `DetailResults` in the data structure
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return DetailResults This field returns the moderation results based on the text libraries. For details, see `DetailResults` in the data structure
Note: This field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    std::vector<DetailResults> GetDetailResults() const;

                    /**
                     * 判断参数 DetailResults 是否已赋值
                     * @return DetailResults 是否已赋值
                     * 
                     */
                    bool DetailResultsHasBeenSet() const;

                    /**
                     * 获取This field returns the detection results of violating accounts at risk, mainly including violation categories and risk levels. For details, see `RiskDetails` in the data structure
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return RiskDetails This field returns the detection results of violating accounts at risk, mainly including violation categories and risk levels. For details, see `RiskDetails` in the data structure
Note: This field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    std::vector<RiskDetails> GetRiskDetails() const;

                    /**
                     * 判断参数 RiskDetails 是否已赋值
                     * @return RiskDetails 是否已赋值
                     * 
                     */
                    bool RiskDetailsHasBeenSet() const;

                    /**
                     * 获取This field returns the extra information configured according to your needs. If it's not configured, the returned value is empty by default. <br>Note: the returned information varies based on different customers or Biztypes. If you need to configure this field, please submit a ticket or contact after-sales manager
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return Extra This field returns the extra information configured according to your needs. If it's not configured, the returned value is empty by default. <br>Note: the returned information varies based on different customers or Biztypes. If you need to configure this field, please submit a ticket or contact after-sales manager
Note: This field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                    /**
                     * 获取This field returns the `DataId` in the request parameter corresponding to the moderated object
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return DataId This field returns the `DataId` in the request parameter corresponding to the moderated object
Note: This field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    std::string GetDataId() const;

                    /**
                     * 判断参数 DataId 是否已赋值
                     * @return DataId 是否已赋值
                     * 
                     */
                    bool DataIdHasBeenSet() const;

                    /**
                     * 获取The field returns the second-level labels under the current label.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return SubLabel The field returns the second-level labels under the current label.
Note: This field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 判断参数 SubLabel 是否已赋值
                     * @return SubLabel 是否已赋值
                     * 
                     */
                    bool SubLabelHasBeenSet() const;

                    /**
                     * 获取Returns the context text.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ContextText Returns the context text.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetContextText() const;

                    /**
                     * 判断参数 ContextText 是否已赋值
                     * @return ContextText 是否已赋值
                     * 
                     */
                    bool ContextTextHasBeenSet() const;

                    /**
                     * 获取
                     * @return SentimentAnalysis 
                     * 
                     */
                    SentimentAnalysis GetSentimentAnalysis() const;

                    /**
                     * 判断参数 SentimentAnalysis 是否已赋值
                     * @return SentimentAnalysis 是否已赋值
                     * 
                     */
                    bool SentimentAnalysisHasBeenSet() const;

                private:

                    /**
                     * This field returns the BizType of the request parameters
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * This field returns the **negative label with the highest priority** in the moderation results (DetailResults), which indicates the moderation result recommended by the model. It is recommended that you handle different violations with the suggested values according to your business needs. <br>Returned values: **Normal**: normal content; **Porn**: pornographic content; **Abuse**: abusive content; **Ad**: advertising content; **Custom**: custom violating content, and others such as objectionable, insecure or inappropriate content.
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * This field returns the follow-up moderation suggestions. The returned value indicates the recommended operation after obtaining the moderation result. It is recommended that you handle different violations with the suggested values according to your business needs. <br>Returned values: **Block**: block; **Review**: human moderation; **Pass**: pass
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * This field returns the keywords matched with the libraries in the moderated text under the current label to mark the specific violations (for example, *Friend me*). This parameter may have multiple returned values, indicating multiple keywords are matched. If the returned value is empty and the `Score` is not empty, it means that the negative label corresponding to the moderation result is a value returned from the semantic model judgment
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * This field returns the confidence level under the current label. Value range: 0 (**the lowest confidence level**) - 100 (**the highest confidence level**). The higher the value, the more likely the text is to belong to the category indicated by the current label. For example, *pornographic 99* indicates that the text is very likely to be pornographic, and *pornographic 0* indicates that the text is not pornographic
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * This field returns the moderation results based on the text libraries. For details, see `DetailResults` in the data structure
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    std::vector<DetailResults> m_detailResults;
                    bool m_detailResultsHasBeenSet;

                    /**
                     * This field returns the detection results of violating accounts at risk, mainly including violation categories and risk levels. For details, see `RiskDetails` in the data structure
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    std::vector<RiskDetails> m_riskDetails;
                    bool m_riskDetailsHasBeenSet;

                    /**
                     * This field returns the extra information configured according to your needs. If it's not configured, the returned value is empty by default. <br>Note: the returned information varies based on different customers or Biztypes. If you need to configure this field, please submit a ticket or contact after-sales manager
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * This field returns the `DataId` in the request parameter corresponding to the moderated object
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * The field returns the second-level labels under the current label.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * Returns the context text.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_contextText;
                    bool m_contextTextHasBeenSet;

                    /**
                     * 
                     */
                    SentimentAnalysis m_sentimentAnalysis;
                    bool m_sentimentAnalysisHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_MODEL_TEXTMODERATIONRESPONSE_H_
