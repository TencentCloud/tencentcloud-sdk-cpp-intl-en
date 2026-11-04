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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_QAMODIFYFIELDS_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_QAMODIFYFIELDS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ExpirationPolicy.h>
#include <tencentcloud/adp/v20260520/model/LabelRefIdentity.h>
#include <tencentcloud/adp/v20260520/model/SimilarQuestionModifySpec.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Collection of modifiable QA fields (used in conjunction with update_mask)
                */
                class QAModifyFields : public AbstractModel
                {
                public:
                    QAModifyFields();
                    ~QAModifyFields() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Answer</p>
                     * @return Answer <p>Answer</p>
                     * 
                     */
                    std::string GetAnswer() const;

                    /**
                     * 设置<p>Answer</p>
                     * @param _answer <p>Answer</p>
                     * 
                     */
                    void SetAnswer(const std::string& _answer);

                    /**
                     * 判断参数 Answer 是否已赋值
                     * @return Answer 是否已赋值
                     * 
                     */
                    bool AnswerHasBeenSet() const;

                    /**
                     * 获取<p>Category ID</p>
                     * @return CategoryId <p>Category ID</p>
                     * 
                     */
                    std::string GetCategoryId() const;

                    /**
                     * 设置<p>Category ID</p>
                     * @param _categoryId <p>Category ID</p>
                     * 
                     */
                    void SetCategoryId(const std::string& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取<p>Associated document ID</p>
                     * @return DocId <p>Associated document ID</p>
                     * 
                     */
                    std::string GetDocId() const;

                    /**
                     * 设置<p>Associated document ID</p>
                     * @param _docId <p>Associated document ID</p>
                     * 
                     */
                    void SetDocId(const std::string& _docId);

                    /**
                     * 判断参数 DocId 是否已赋值
                     * @return DocId 是否已赋值
                     * 
                     */
                    bool DocIdHasBeenSet() const;

                    /**
                     * 获取<p>Knowledge application scope<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>Disabled</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>Development domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>Release domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>Global</td></tr></tbody></table></p>
                     * @return EffectiveDomain <p>Knowledge application scope<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>Disabled</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>Development domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>Release domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>Global</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetEffectiveDomain() const;

                    /**
                     * 设置<p>Knowledge application scope<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>Disabled</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>Development domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>Release domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>Global</td></tr></tbody></table></p>
                     * @param _effectiveDomain <p>Knowledge application scope<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>Disabled</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>Development domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>Release domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>Global</td></tr></tbody></table></p>
                     * 
                     */
                    void SetEffectiveDomain(const int64_t& _effectiveDomain);

                    /**
                     * 判断参数 EffectiveDomain 是否已赋值
                     * @return EffectiveDomain 是否已赋值
                     * 
                     */
                    bool EffectiveDomainHasBeenSet() const;

                    /**
                     * 获取<p>Expiration policy (validity time and behavior after the validity period expires)</p>
                     * @return ExpirationPolicy <p>Expiration policy (validity time and behavior after the validity period expires)</p>
                     * 
                     */
                    ExpirationPolicy GetExpirationPolicy() const;

                    /**
                     * 设置<p>Expiration policy (validity time and behavior after the validity period expires)</p>
                     * @param _expirationPolicy <p>Expiration policy (validity time and behavior after the validity period expires)</p>
                     * 
                     */
                    void SetExpirationPolicy(const ExpirationPolicy& _expirationPolicy);

                    /**
                     * 判断参数 ExpirationPolicy 是否已赋值
                     * @return ExpirationPolicy 是否已赋值
                     * 
                     */
                    bool ExpirationPolicyHasBeenSet() const;

                    /**
                     * 获取<p>Whether to adopt (verification passed)</p>
                     * @return IsAccepted <p>Whether to adopt (verification passed)</p>
                     * 
                     */
                    bool GetIsAccepted() const;

                    /**
                     * 设置<p>Whether to adopt (verification passed)</p>
                     * @param _isAccepted <p>Whether to adopt (verification passed)</p>
                     * 
                     */
                    void SetIsAccepted(const bool& _isAccepted);

                    /**
                     * 判断参数 IsAccepted 是否已赋值
                     * @return IsAccepted 是否已赋值
                     * 
                     */
                    bool IsAcceptedHasBeenSet() const;

                    /**
                     * 获取<p>Applicable scope (tag condition).</p>
                     * @return LabelRefList <p>Applicable scope (tag condition).</p>
                     * 
                     */
                    std::vector<LabelRefIdentity> GetLabelRefList() const;

                    /**
                     * 设置<p>Applicable scope (tag condition).</p>
                     * @param _labelRefList <p>Applicable scope (tag condition).</p>
                     * 
                     */
                    void SetLabelRefList(const std::vector<LabelRefIdentity>& _labelRefList);

                    /**
                     * 判断参数 LabelRefList 是否已赋值
                     * @return LabelRefList 是否已赋值
                     * 
                     */
                    bool LabelRefListHasBeenSet() const;

                    /**
                     * 获取<p>Query</p>
                     * @return Question <p>Query</p>
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置<p>Query</p>
                     * @param _question <p>Query</p>
                     * 
                     */
                    void SetQuestion(const std::string& _question);

                    /**
                     * 判断参数 Question 是否已赋值
                     * @return Question 是否已赋值
                     * 
                     */
                    bool QuestionHasBeenSet() const;

                    /**
                     * 获取<p>Problem description</p>
                     * @return QuestionDescription <p>Problem description</p>
                     * 
                     */
                    std::string GetQuestionDescription() const;

                    /**
                     * 设置<p>Problem description</p>
                     * @param _questionDescription <p>Problem description</p>
                     * 
                     */
                    void SetQuestionDescription(const std::string& _questionDescription);

                    /**
                     * 判断参数 QuestionDescription 是否已赋值
                     * @return QuestionDescription 是否已赋值
                     * 
                     */
                    bool QuestionDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Similar question modification list</p>
                     * @return SimilarQuestionList <p>Similar question modification list</p>
                     * 
                     */
                    std::vector<SimilarQuestionModifySpec> GetSimilarQuestionList() const;

                    /**
                     * 设置<p>Similar question modification list</p>
                     * @param _similarQuestionList <p>Similar question modification list</p>
                     * 
                     */
                    void SetSimilarQuestionList(const std::vector<SimilarQuestionModifySpec>& _similarQuestionList);

                    /**
                     * 判断参数 SimilarQuestionList 是否已赋值
                     * @return SimilarQuestionList 是否已赋值
                     * 
                     */
                    bool SimilarQuestionListHasBeenSet() const;

                private:

                    /**
                     * <p>Answer</p>
                     */
                    std::string m_answer;
                    bool m_answerHasBeenSet;

                    /**
                     * <p>Category ID</p>
                     */
                    std::string m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * <p>Associated document ID</p>
                     */
                    std::string m_docId;
                    bool m_docIdHasBeenSet;

                    /**
                     * <p>Knowledge application scope<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>Disabled</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>Development domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>Release domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>Global</td></tr></tbody></table></p>
                     */
                    int64_t m_effectiveDomain;
                    bool m_effectiveDomainHasBeenSet;

                    /**
                     * <p>Expiration policy (validity time and behavior after the validity period expires)</p>
                     */
                    ExpirationPolicy m_expirationPolicy;
                    bool m_expirationPolicyHasBeenSet;

                    /**
                     * <p>Whether to adopt (verification passed)</p>
                     */
                    bool m_isAccepted;
                    bool m_isAcceptedHasBeenSet;

                    /**
                     * <p>Applicable scope (tag condition).</p>
                     */
                    std::vector<LabelRefIdentity> m_labelRefList;
                    bool m_labelRefListHasBeenSet;

                    /**
                     * <p>Query</p>
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * <p>Problem description</p>
                     */
                    std::string m_questionDescription;
                    bool m_questionDescriptionHasBeenSet;

                    /**
                     * <p>Similar question modification list</p>
                     */
                    std::vector<SimilarQuestionModifySpec> m_similarQuestionList;
                    bool m_similarQuestionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_QAMODIFYFIELDS_H_
