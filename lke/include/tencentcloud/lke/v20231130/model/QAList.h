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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_QALIST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_QALIST_H_

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
                * Q&A list.
                */
                class QAList : public AbstractModel
                {
                public:
                    QAList();
                    ~QAList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Whether to accept.
                     * @return IsAccepted Whether to accept.
                     * 
                     */
                    bool GetIsAccepted() const;

                    /**
                     * 设置Whether to accept.
                     * @param _isAccepted Whether to accept.
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

                private:

                    /**
                     * Q&A ID.
                     */
                    std::string m_qaBizId;
                    bool m_qaBizIdHasBeenSet;

                    /**
                     * Whether to accept.
                     */
                    bool m_isAccepted;
                    bool m_isAcceptedHasBeenSet;

                    /**
                     * Category ID.
                     */
                    std::string m_cateBizId;
                    bool m_cateBizIdHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_QALIST_H_
