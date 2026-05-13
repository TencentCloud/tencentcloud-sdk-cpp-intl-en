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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_QUESTIONNAIREQUESTION_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_QUESTIONNAIREQUESTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/QuestionOption.h>


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
                class QuestionnaireQuestion : public AbstractModel
                {
                public:
                    QuestionnaireQuestion();
                    ~QuestionnaireQuestion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Index 
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置
                     * @param _index 
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

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
                     * @return Type 
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置
                     * @param _type 
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Required 
                     * 
                     */
                    bool GetRequired() const;

                    /**
                     * 设置
                     * @param _required 
                     * 
                     */
                    void SetRequired(const bool& _required);

                    /**
                     * 判断参数 Required 是否已赋值
                     * @return Required 是否已赋值
                     * 
                     */
                    bool RequiredHasBeenSet() const;

                    /**
                     * 获取
                     * @return Options 
                     * 
                     */
                    std::vector<QuestionOption> GetOptions() const;

                    /**
                     * 设置
                     * @param _options 
                     * 
                     */
                    void SetOptions(const std::vector<QuestionOption>& _options);

                    /**
                     * 判断参数 Options 是否已赋值
                     * @return Options 是否已赋值
                     * 
                     */
                    bool OptionsHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 
                     */
                    bool m_required;
                    bool m_requiredHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<QuestionOption> m_options;
                    bool m_optionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_QUESTIONNAIREQUESTION_H_
