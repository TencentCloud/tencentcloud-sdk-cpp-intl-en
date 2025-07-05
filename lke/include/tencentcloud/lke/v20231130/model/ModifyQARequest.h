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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYQAREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYQAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AttrLabelRefer.h>
#include <tencentcloud/lke/v20231130/model/SimilarQuestionModify.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ModifyQA request structure.
                */
                class ModifyQARequest : public AbstractModel
                {
                public:
                    ModifyQARequest();
                    ~ModifyQARequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID.
                     * @return BotBizId Application ID.
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置Application ID.
                     * @param _botBizId Application ID.
                     * 
                     */
                    void SetBotBizId(const std::string& _botBizId);

                    /**
                     * 判断参数 BotBizId 是否已赋值
                     * @return BotBizId 是否已赋值
                     * 
                     */
                    bool BotBizIdHasBeenSet() const;

                    /**
                     * 获取Q&A ID.
                     * @return QaBizId Q&A ID.
                     * 
                     */
                    std::string GetQaBizId() const;

                    /**
                     * 设置Q&A ID.
                     * @param _qaBizId Q&A ID.
                     * 
                     */
                    void SetQaBizId(const std::string& _qaBizId);

                    /**
                     * 判断参数 QaBizId 是否已赋值
                     * @return QaBizId 是否已赋值
                     * 
                     */
                    bool QaBizIdHasBeenSet() const;

                    /**
                     * 获取Question.
                     * @return Question Question.
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置Question.
                     * @param _question Question.
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
                     * 获取Answer.
                     * @return Answer Answer.
                     * 
                     */
                    std::string GetAnswer() const;

                    /**
                     * 设置Answer.
                     * @param _answer Answer.
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
                     * 获取Custom parameter.
                     * @return CustomParam Custom parameter.
                     * 
                     */
                    std::string GetCustomParam() const;

                    /**
                     * 设置Custom parameter.
                     * @param _customParam Custom parameter.
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
                     * 获取Applicable scope of labels: 1. all; 2. by conditions.
                     * @return AttrRange Applicable scope of labels: 1. all; 2. by conditions.
                     * 
                     */
                    uint64_t GetAttrRange() const;

                    /**
                     * 设置Applicable scope of labels: 1. all; 2. by conditions.
                     * @param _attrRange Applicable scope of labels: 1. all; 2. by conditions.
                     * 
                     */
                    void SetAttrRange(const uint64_t& _attrRange);

                    /**
                     * 判断参数 AttrRange 是否已赋值
                     * @return AttrRange 是否已赋值
                     * 
                     */
                    bool AttrRangeHasBeenSet() const;

                    /**
                     * 获取Label reference.
                     * @return AttrLabels Label reference.
                     * 
                     */
                    std::vector<AttrLabelRefer> GetAttrLabels() const;

                    /**
                     * 设置Label reference.
                     * @param _attrLabels Label reference.
                     * 
                     */
                    void SetAttrLabels(const std::vector<AttrLabelRefer>& _attrLabels);

                    /**
                     * 判断参数 AttrLabels 是否已赋值
                     * @return AttrLabels 是否已赋值
                     * 
                     */
                    bool AttrLabelsHasBeenSet() const;

                    /**
                     * 获取Document ID.
                     * @return DocBizId Document ID.
                     * 
                     */
                    std::string GetDocBizId() const;

                    /**
                     * 设置Document ID.
                     * @param _docBizId Document ID.
                     * 
                     */
                    void SetDocBizId(const std::string& _docBizId);

                    /**
                     * 判断参数 DocBizId 是否已赋值
                     * @return DocBizId 是否已赋值
                     * 
                     */
                    bool DocBizIdHasBeenSet() const;

                    /**
                     * 获取Category ID.
                     * @return CateBizId Category ID.
                     * 
                     */
                    std::string GetCateBizId() const;

                    /**
                     * 设置Category ID.
                     * @param _cateBizId Category ID.
                     * 
                     */
                    void SetCateBizId(const std::string& _cateBizId);

                    /**
                     * 判断参数 CateBizId 是否已赋值
                     * @return CateBizId 是否已赋值
                     * 
                     */
                    bool CateBizIdHasBeenSet() const;

                    /**
                     * 获取Effective start time, unix timestamp.
                     * @return ExpireStart Effective start time, unix timestamp.
                     * 
                     */
                    std::string GetExpireStart() const;

                    /**
                     * 设置Effective start time, unix timestamp.
                     * @param _expireStart Effective start time, unix timestamp.
                     * 
                     */
                    void SetExpireStart(const std::string& _expireStart);

                    /**
                     * 判断参数 ExpireStart 是否已赋值
                     * @return ExpireStart 是否已赋值
                     * 
                     */
                    bool ExpireStartHasBeenSet() const;

                    /**
                     * 获取Effective end time, unix timestamp, 0 indicates permanent validity.
                     * @return ExpireEnd Effective end time, unix timestamp, 0 indicates permanent validity.
                     * 
                     */
                    std::string GetExpireEnd() const;

                    /**
                     * 设置Effective end time, unix timestamp, 0 indicates permanent validity.
                     * @param _expireEnd Effective end time, unix timestamp, 0 indicates permanent validity.
                     * 
                     */
                    void SetExpireEnd(const std::string& _expireEnd);

                    /**
                     * 判断参数 ExpireEnd 是否已赋值
                     * @return ExpireEnd 是否已赋值
                     * 
                     */
                    bool ExpireEndHasBeenSet() const;

                    /**
                     * 获取Similar question modification information (not passed if there is no modification to the similar question).
                     * @return SimilarQuestionModify Similar question modification information (not passed if there is no modification to the similar question).
                     * 
                     */
                    SimilarQuestionModify GetSimilarQuestionModify() const;

                    /**
                     * 设置Similar question modification information (not passed if there is no modification to the similar question).
                     * @param _similarQuestionModify Similar question modification information (not passed if there is no modification to the similar question).
                     * 
                     */
                    void SetSimilarQuestionModify(const SimilarQuestionModify& _similarQuestionModify);

                    /**
                     * 判断参数 SimilarQuestionModify 是否已赋值
                     * @return SimilarQuestionModify 是否已赋值
                     * 
                     */
                    bool SimilarQuestionModifyHasBeenSet() const;

                    /**
                     * 获取Problem description.
                     * @return QuestionDesc Problem description.
                     * 
                     */
                    std::string GetQuestionDesc() const;

                    /**
                     * 设置Problem description.
                     * @param _questionDesc Problem description.
                     * 
                     */
                    void SetQuestionDesc(const std::string& _questionDesc);

                    /**
                     * 判断参数 QuestionDesc 是否已赋值
                     * @return QuestionDesc 是否已赋值
                     * 
                     */
                    bool QuestionDescHasBeenSet() const;

                private:

                    /**
                     * Application ID.
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * Q&A ID.
                     */
                    std::string m_qaBizId;
                    bool m_qaBizIdHasBeenSet;

                    /**
                     * Question.
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * Answer.
                     */
                    std::string m_answer;
                    bool m_answerHasBeenSet;

                    /**
                     * Custom parameter.
                     */
                    std::string m_customParam;
                    bool m_customParamHasBeenSet;

                    /**
                     * Applicable scope of labels: 1. all; 2. by conditions.
                     */
                    uint64_t m_attrRange;
                    bool m_attrRangeHasBeenSet;

                    /**
                     * Label reference.
                     */
                    std::vector<AttrLabelRefer> m_attrLabels;
                    bool m_attrLabelsHasBeenSet;

                    /**
                     * Document ID.
                     */
                    std::string m_docBizId;
                    bool m_docBizIdHasBeenSet;

                    /**
                     * Category ID.
                     */
                    std::string m_cateBizId;
                    bool m_cateBizIdHasBeenSet;

                    /**
                     * Effective start time, unix timestamp.
                     */
                    std::string m_expireStart;
                    bool m_expireStartHasBeenSet;

                    /**
                     * Effective end time, unix timestamp, 0 indicates permanent validity.
                     */
                    std::string m_expireEnd;
                    bool m_expireEndHasBeenSet;

                    /**
                     * Similar question modification information (not passed if there is no modification to the similar question).
                     */
                    SimilarQuestionModify m_similarQuestionModify;
                    bool m_similarQuestionModifyHasBeenSet;

                    /**
                     * Problem description.
                     */
                    std::string m_questionDesc;
                    bool m_questionDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYQAREQUEST_H_
