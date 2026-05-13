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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_QUESTIONNAIREQUESTIONANSWER_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_QUESTIONNAIREQUESTIONANSWER_H_

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
                * 
                */
                class QuestionnaireQuestionAnswer : public AbstractModel
                {
                public:
                    QuestionnaireQuestionAnswer();
                    ~QuestionnaireQuestionAnswer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Question 
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置
                     * @param _question 
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
                     * 获取
                     * @return SelectedLabels 
                     * 
                     */
                    std::vector<std::string> GetSelectedLabels() const;

                    /**
                     * 设置
                     * @param _selectedLabels 
                     * 
                     */
                    void SetSelectedLabels(const std::vector<std::string>& _selectedLabels);

                    /**
                     * 判断参数 SelectedLabels 是否已赋值
                     * @return SelectedLabels 是否已赋值
                     * 
                     */
                    bool SelectedLabelsHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_selectedLabels;
                    bool m_selectedLabelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_QUESTIONNAIREQUESTIONANSWER_H_
