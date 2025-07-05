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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQAOUTPUT_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQAOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Application management output configuration.
                */
                class KnowledgeQaOutput : public AbstractModel
                {
                public:
                    KnowledgeQaOutput();
                    ~KnowledgeQaOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Output method, 1: streaming 2: non-streaming.
                     * @return Method Output method, 1: streaming 2: non-streaming.
                     * 
                     */
                    uint64_t GetMethod() const;

                    /**
                     * 设置Output method, 1: streaming 2: non-streaming.
                     * @param _method Output method, 1: streaming 2: non-streaming.
                     * 
                     */
                    void SetMethod(const uint64_t& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取General model response.
                     * @return UseGeneralKnowledge General model response.
                     * 
                     */
                    bool GetUseGeneralKnowledge() const;

                    /**
                     * 设置General model response.
                     * @param _useGeneralKnowledge General model response.
                     * 
                     */
                    void SetUseGeneralKnowledge(const bool& _useGeneralKnowledge);

                    /**
                     * 判断参数 UseGeneralKnowledge 是否已赋值
                     * @return UseGeneralKnowledge 是否已赋值
                     * 
                     */
                    bool UseGeneralKnowledgeHasBeenSet() const;

                    /**
                     * 获取Unknown response, within 300 characters.
                     * @return BareAnswer Unknown response, within 300 characters.
                     * 
                     */
                    std::string GetBareAnswer() const;

                    /**
                     * 设置Unknown response, within 300 characters.
                     * @param _bareAnswer Unknown response, within 300 characters.
                     * 
                     */
                    void SetBareAnswer(const std::string& _bareAnswer);

                    /**
                     * 判断参数 BareAnswer 是否已赋值
                     * @return BareAnswer 是否已赋值
                     * 
                     */
                    bool BareAnswerHasBeenSet() const;

                    /**
                     * 获取Whether to display the question clarification switch.
                     * @return ShowQuestionClarify Whether to display the question clarification switch.
                     * 
                     */
                    bool GetShowQuestionClarify() const;

                    /**
                     * 设置Whether to display the question clarification switch.
                     * @param _showQuestionClarify Whether to display the question clarification switch.
                     * 
                     */
                    void SetShowQuestionClarify(const bool& _showQuestionClarify);

                    /**
                     * 判断参数 ShowQuestionClarify 是否已赋值
                     * @return ShowQuestionClarify 是否已赋值
                     * 
                     */
                    bool ShowQuestionClarifyHasBeenSet() const;

                    /**
                     * 获取Whether to enable question clarification.
                     * @return UseQuestionClarify Whether to enable question clarification.
                     * 
                     */
                    bool GetUseQuestionClarify() const;

                    /**
                     * 设置Whether to enable question clarification.
                     * @param _useQuestionClarify Whether to enable question clarification.
                     * 
                     */
                    void SetUseQuestionClarify(const bool& _useQuestionClarify);

                    /**
                     * 判断参数 UseQuestionClarify 是否已赋值
                     * @return UseQuestionClarify 是否已赋值
                     * 
                     */
                    bool UseQuestionClarifyHasBeenSet() const;

                    /**
                     * 获取List of keywords for question clarification.
                     * @return QuestionClarifyKeywords List of keywords for question clarification.
                     * 
                     */
                    std::vector<std::string> GetQuestionClarifyKeywords() const;

                    /**
                     * 设置List of keywords for question clarification.
                     * @param _questionClarifyKeywords List of keywords for question clarification.
                     * 
                     */
                    void SetQuestionClarifyKeywords(const std::vector<std::string>& _questionClarifyKeywords);

                    /**
                     * 判断参数 QuestionClarifyKeywords 是否已赋值
                     * @return QuestionClarifyKeywords 是否已赋值
                     * 
                     */
                    bool QuestionClarifyKeywordsHasBeenSet() const;

                    /**
                     * 获取Whether to enable recommended questions.
                     * @return UseRecommended Whether to enable recommended questions.
                     * 
                     */
                    bool GetUseRecommended() const;

                    /**
                     * 设置Whether to enable recommended questions.
                     * @param _useRecommended Whether to enable recommended questions.
                     * 
                     */
                    void SetUseRecommended(const bool& _useRecommended);

                    /**
                     * 判断参数 UseRecommended 是否已赋值
                     * @return UseRecommended 是否已赋值
                     * 
                     */
                    bool UseRecommendedHasBeenSet() const;

                private:

                    /**
                     * Output method, 1: streaming 2: non-streaming.
                     */
                    uint64_t m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * General model response.
                     */
                    bool m_useGeneralKnowledge;
                    bool m_useGeneralKnowledgeHasBeenSet;

                    /**
                     * Unknown response, within 300 characters.
                     */
                    std::string m_bareAnswer;
                    bool m_bareAnswerHasBeenSet;

                    /**
                     * Whether to display the question clarification switch.
                     */
                    bool m_showQuestionClarify;
                    bool m_showQuestionClarifyHasBeenSet;

                    /**
                     * Whether to enable question clarification.
                     */
                    bool m_useQuestionClarify;
                    bool m_useQuestionClarifyHasBeenSet;

                    /**
                     * List of keywords for question clarification.
                     */
                    std::vector<std::string> m_questionClarifyKeywords;
                    bool m_questionClarifyKeywordsHasBeenSet;

                    /**
                     * Whether to enable recommended questions.
                     */
                    bool m_useRecommended;
                    bool m_useRecommendedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQAOUTPUT_H_
