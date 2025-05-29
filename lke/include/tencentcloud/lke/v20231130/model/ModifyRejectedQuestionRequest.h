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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYREJECTEDQUESTIONREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYREJECTEDQUESTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyRejectedQuestion request structure.
                */
                class ModifyRejectedQuestionRequest : public AbstractModel
                {
                public:
                    ModifyRejectedQuestionRequest();
                    ~ModifyRejectedQuestionRequest() = default;
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
                     * 获取Rejected question.


                     * @return Question Rejected question.


                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置Rejected question.


                     * @param _question Rejected question.


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
                     * 获取Unique id of the data source for the rejected question source.



                     * @return RejectedBizId Unique id of the data source for the rejected question source.



                     * 
                     */
                    std::string GetRejectedBizId() const;

                    /**
                     * 设置Unique id of the data source for the rejected question source.



                     * @param _rejectedBizId Unique id of the data source for the rejected question source.



                     * 
                     */
                    void SetRejectedBizId(const std::string& _rejectedBizId);

                    /**
                     * 判断参数 RejectedBizId 是否已赋值
                     * @return RejectedBizId 是否已赋值
                     * 
                     */
                    bool RejectedBizIdHasBeenSet() const;

                private:

                    /**
                     * Application ID.
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * Rejected question.


                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * Unique id of the data source for the rejected question source.



                     */
                    std::string m_rejectedBizId;
                    bool m_rejectedBizIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYREJECTEDQUESTIONREQUEST_H_
