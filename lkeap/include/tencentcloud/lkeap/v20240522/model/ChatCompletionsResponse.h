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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_CHATCOMPLETIONSRESPONSE_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_CHATCOMPLETIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lkeap/v20240522/model/ChatUsage.h>
#include <tencentcloud/lkeap/v20240522/model/Choice.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
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
                     * 获取Unix timestamp, in seconds.
                     * @return Created Unix timestamp, in seconds.
                     * 
                     */
                    int64_t GetCreated() const;

                    /**
                     * 判断参数 Created 是否已赋值
                     * @return Created 是否已赋值
                     * 
                     */
                    bool CreatedHasBeenSet() const;

                    /**
                     * 获取Token statistical information.
Charges are based on the total Token quantity.
                     * @return Usage Token statistical information.
Charges are based on the total Token quantity.
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
                     * 获取RequestId for this request.
                     * @return Id RequestId for this request.
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
                     * 获取Response content.
                     * @return Choices Response content.
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
                     * 获取Model name.
                     * @return Model Model name.
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
                     * Unix timestamp, in seconds.
                     */
                    int64_t m_created;
                    bool m_createdHasBeenSet;

                    /**
                     * Token statistical information.
Charges are based on the total Token quantity.
                     */
                    ChatUsage m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * RequestId for this request.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Response content.
                     */
                    std::vector<Choice> m_choices;
                    bool m_choicesHasBeenSet;

                    /**
                     * Model name.
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_CHATCOMPLETIONSRESPONSE_H_
