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
                * Question of the questionnaire
                */
                class QuestionnaireQuestion : public AbstractModel
                {
                public:
                    QuestionnaireQuestion();
                    ~QuestionnaireQuestion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Serial number of the issue</p>
                     * @return Index <p>Serial number of the issue</p>
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置<p>Serial number of the issue</p>
                     * @param _index <p>Serial number of the issue</p>
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
                     * 获取<p>Content of the issue</p>
                     * @return Question <p>Content of the issue</p>
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置<p>Content of the issue</p>
                     * @param _question <p>Content of the issue</p>
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
                     * 获取<p>Problem type</p>
                     * @return Type <p>Problem type</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>Problem type</p>
                     * @param _type <p>Problem type</p>
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
                     * 获取<p>Required or optional</p>
                     * @return Required <p>Required or optional</p>
                     * 
                     */
                    bool GetRequired() const;

                    /**
                     * 设置<p>Required or optional</p>
                     * @param _required <p>Required or optional</p>
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
                     * 获取<p>Options for the question</p>
                     * @return Options <p>Options for the question</p>
                     * 
                     */
                    std::vector<QuestionOption> GetOptions() const;

                    /**
                     * 设置<p>Options for the question</p>
                     * @param _options <p>Options for the question</p>
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
                     * <p>Serial number of the issue</p>
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * <p>Content of the issue</p>
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * <p>Problem type</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Required or optional</p>
                     */
                    bool m_required;
                    bool m_requiredHasBeenSet;

                    /**
                     * <p>Options for the question</p>
                     */
                    std::vector<QuestionOption> m_options;
                    bool m_optionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_QUESTIONNAIREQUESTION_H_
