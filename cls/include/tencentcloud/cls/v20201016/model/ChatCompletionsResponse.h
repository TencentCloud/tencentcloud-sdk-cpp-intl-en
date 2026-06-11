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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CHATCOMPLETIONSRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CHATCOMPLETIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ChatUsage.h>
#include <tencentcloud/cls/v20201016/model/Choice.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ChatCompletions response structure.
                */
                class ChatCompletionsResponse : public AbstractModel
                {
                public:
                    ChatCompletionsResponse();
                    ~ChatCompletionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Unix timestamp, in seconds.</p>
                     * @return Created <p>Unix timestamp, in seconds.</p>
                     * 
                     */
                    uint64_t GetCreated() const;

                    /**
                     * 判断参数 Created 是否已赋值
                     * @return Created 是否已赋值
                     * 
                     */
                    bool CreatedHasBeenSet() const;

                    /**
                     * 获取<p>Token statistical information.</p>
                     * @return Usage <p>Token statistical information.</p>
                     * 
                     */
                    ChatUsage GetUsage() const;

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                    /**
                     * 获取<p>Id of the current request.</p>
                     * @return Id <p>Id of the current request.</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>Reply content.</p>
                     * @return Choices <p>Reply content.</p>
                     * 
                     */
                    std::vector<Choice> GetChoices() const;

                    /**
                     * 判断参数 Choices 是否已赋值
                     * @return Choices 是否已赋值
                     * 
                     */
                    bool ChoicesHasBeenSet() const;

                    /**
                     * 获取<p>Feature name</p><p>Enumeration value:</p><ul><li>text2sql: Intelligent generation of retrieval analysis statement</li><li>text2sql-reasoning: Intelligent generation of retrieval analysis statement - deep thinking</li></ul>
                     * @return Model <p>Feature name</p><p>Enumeration value:</p><ul><li>text2sql: Intelligent generation of retrieval analysis statement</li><li>text2sql-reasoning: Intelligent generation of retrieval analysis statement - deep thinking</li></ul>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                private:

                    /**
                     * <p>Unix timestamp, in seconds.</p>
                     */
                    uint64_t m_created;
                    bool m_createdHasBeenSet;

                    /**
                     * <p>Token statistical information.</p>
                     */
                    ChatUsage m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * <p>Id of the current request.</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Reply content.</p>
                     */
                    std::vector<Choice> m_choices;
                    bool m_choicesHasBeenSet;

                    /**
                     * <p>Feature name</p><p>Enumeration value:</p><ul><li>text2sql: Intelligent generation of retrieval analysis statement</li><li>text2sql-reasoning: Intelligent generation of retrieval analysis statement - deep thinking</li></ul>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CHATCOMPLETIONSRESPONSE_H_
