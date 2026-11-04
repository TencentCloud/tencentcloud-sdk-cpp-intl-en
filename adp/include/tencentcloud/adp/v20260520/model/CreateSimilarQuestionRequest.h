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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CREATESIMILARQUESTIONREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CREATESIMILARQUESTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * CreateSimilarQuestion request structure.
                */
                class CreateSimilarQuestionRequest : public AbstractModel
                {
                public:
                    CreateSimilarQuestionRequest();
                    ~CreateSimilarQuestionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ID of the knowledge base it belongs to</p>
                     * @return KbId <p>ID of the knowledge base it belongs to</p>
                     * 
                     */
                    std::string GetKbId() const;

                    /**
                     * 设置<p>ID of the knowledge base it belongs to</p>
                     * @param _kbId <p>ID of the knowledge base it belongs to</p>
                     * 
                     */
                    void SetKbId(const std::string& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

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

                private:

                    /**
                     * <p>ID of the knowledge base it belongs to</p>
                     */
                    std::string m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * <p>Query</p>
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * <p>Answer</p>
                     */
                    std::string m_answer;
                    bool m_answerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CREATESIMILARQUESTIONREQUEST_H_
