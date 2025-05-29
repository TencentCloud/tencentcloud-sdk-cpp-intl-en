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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_UNSATISFIEDREPLY_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_UNSATISFIEDREPLY_H_

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
                * Unsatisfied response.
                */
                class UnsatisfiedReply : public AbstractModel
                {
                public:
                    UnsatisfiedReply();
                    ~UnsatisfiedReply() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unsatisfied response ID.
                     * @return ReplyBizId Unsatisfied response ID.
                     * 
                     */
                    std::string GetReplyBizId() const;

                    /**
                     * 设置Unsatisfied response ID.
                     * @param _replyBizId Unsatisfied response ID.
                     * 
                     */
                    void SetReplyBizId(const std::string& _replyBizId);

                    /**
                     * 判断参数 ReplyBizId 是否已赋值
                     * @return ReplyBizId 是否已赋值
                     * 
                     */
                    bool ReplyBizIdHasBeenSet() const;

                    /**
                     * 获取Message record ID.
                     * @return RecordBizId Message record ID.
                     * 
                     */
                    std::string GetRecordBizId() const;

                    /**
                     * 设置Message record ID.
                     * @param _recordBizId Message record ID.
                     * 
                     */
                    void SetRecordBizId(const std::string& _recordBizId);

                    /**
                     * 判断参数 RecordBizId 是否已赋值
                     * @return RecordBizId 是否已赋值
                     * 
                     */
                    bool RecordBizIdHasBeenSet() const;

                    /**
                     * 获取User question.
                     * @return Question User question.
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置User question.
                     * @param _question User question.
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
                     * 获取Application response.
                     * @return Answer Application response.
                     * 
                     */
                    std::string GetAnswer() const;

                    /**
                     * 设置Application response.
                     * @param _answer Application response.
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
                     * 获取Error type.
                     * @return Reasons Error type.
                     * 
                     */
                    std::vector<std::string> GetReasons() const;

                    /**
                     * 设置Error type.
                     * @param _reasons Error type.
                     * 
                     */
                    void SetReasons(const std::vector<std::string>& _reasons);

                    /**
                     * 判断参数 Reasons 是否已赋值
                     * @return Reasons 是否已赋值
                     * 
                     */
                    bool ReasonsHasBeenSet() const;

                private:

                    /**
                     * Unsatisfied response ID.
                     */
                    std::string m_replyBizId;
                    bool m_replyBizIdHasBeenSet;

                    /**
                     * Message record ID.
                     */
                    std::string m_recordBizId;
                    bool m_recordBizIdHasBeenSet;

                    /**
                     * User question.
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * Application response.
                     */
                    std::string m_answer;
                    bool m_answerHasBeenSet;

                    /**
                     * Error type.
                     */
                    std::vector<std::string> m_reasons;
                    bool m_reasonsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_UNSATISFIEDREPLY_H_
