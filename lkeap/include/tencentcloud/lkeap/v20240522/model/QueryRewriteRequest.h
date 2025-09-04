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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_QUERYREWRITEREQUEST_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_QUERYREWRITEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lkeap/v20240522/model/Message.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * QueryRewrite request structure.
                */
                class QueryRewriteRequest : public AbstractModel
                {
                public:
                    QueryRewriteRequest();
                    ~QueryRewriteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The multi-round historical conversation that needs to be rewritten. Each round of historical conversation should include paired inputs of user (question) and assistant (answer). Due to the character limit of the model, a maximum of 4 rounds of conversations can be provided. The last round of conversation will be rewritten.
                     * @return Messages The multi-round historical conversation that needs to be rewritten. Each round of historical conversation should include paired inputs of user (question) and assistant (answer). Due to the character limit of the model, a maximum of 4 rounds of conversations can be provided. The last round of conversation will be rewritten.
                     * 
                     */
                    std::vector<Message> GetMessages() const;

                    /**
                     * 设置The multi-round historical conversation that needs to be rewritten. Each round of historical conversation should include paired inputs of user (question) and assistant (answer). Due to the character limit of the model, a maximum of 4 rounds of conversations can be provided. The last round of conversation will be rewritten.
                     * @param _messages The multi-round historical conversation that needs to be rewritten. Each round of historical conversation should include paired inputs of user (question) and assistant (answer). Due to the character limit of the model, a maximum of 4 rounds of conversations can be provided. The last round of conversation will be rewritten.
                     * 
                     */
                    void SetMessages(const std::vector<Message>& _messages);

                    /**
                     * 判断参数 Messages 是否已赋值
                     * @return Messages 是否已赋值
                     * 
                     */
                    bool MessagesHasBeenSet() const;

                    /**
                     * 获取Model name.
                     * @return Model Model name.
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置Model name.
                     * @param _model Model name.
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                private:

                    /**
                     * The multi-round historical conversation that needs to be rewritten. Each round of historical conversation should include paired inputs of user (question) and assistant (answer). Due to the character limit of the model, a maximum of 4 rounds of conversations can be provided. The last round of conversation will be rewritten.
                     */
                    std::vector<Message> m_messages;
                    bool m_messagesHasBeenSet;

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

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_QUERYREWRITEREQUEST_H_
