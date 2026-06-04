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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_CHATCOMPLETIONSREQUEST_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_CHATCOMPLETIONSREQUEST_H_

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
                * ChatCompletions request structure.
                */
                class ChatCompletionsRequest : public AbstractModel
                {
                public:
                    ChatCompletionsRequest();
                    ~ChatCompletionsRequest() = default;
                    std::string ToJsonString() const;


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

                    /**
                     * 获取Chat contextual information.
Description:
1. Length: up to 40. Arranged in array from old to new by conversation time.
2. Message.Role: system, user, assistant. Optional.
Among them, the system role is optional. If it exists, it must be at the beginning of the list. User and assistant need to alternate, starting with a user question and ending with a user question. Content cannot be empty. An example of the order of roles: [system (optional) user assistant user assistant user...].

                     * @return Messages Chat contextual information.
Description:
1. Length: up to 40. Arranged in array from old to new by conversation time.
2. Message.Role: system, user, assistant. Optional.
Among them, the system role is optional. If it exists, it must be at the beginning of the list. User and assistant need to alternate, starting with a user question and ending with a user question. Content cannot be empty. An example of the order of roles: [system (optional) user assistant user assistant user...].

                     * 
                     */
                    std::vector<Message> GetMessages() const;

                    /**
                     * 设置Chat contextual information.
Description:
1. Length: up to 40. Arranged in array from old to new by conversation time.
2. Message.Role: system, user, assistant. Optional.
Among them, the system role is optional. If it exists, it must be at the beginning of the list. User and assistant need to alternate, starting with a user question and ending with a user question. Content cannot be empty. An example of the order of roles: [system (optional) user assistant user assistant user...].

                     * @param _messages Chat contextual information.
Description:
1. Length: up to 40. Arranged in array from old to new by conversation time.
2. Message.Role: system, user, assistant. Optional.
Among them, the system role is optional. If it exists, it must be at the beginning of the list. User and assistant need to alternate, starting with a user question and ending with a user question. Content cannot be empty. An example of the order of roles: [system (optional) user assistant user assistant user...].

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
                     * 获取Whether it is streaming output.
                     * @return Stream Whether it is streaming output.
                     * 
                     */
                    bool GetStream() const;

                    /**
                     * 设置Whether it is streaming output.
                     * @param _stream Whether it is streaming output.
                     * 
                     */
                    void SetStream(const bool& _stream);

                    /**
                     * 判断参数 Stream 是否已赋值
                     * @return Stream 是否已赋值
                     * 
                     */
                    bool StreamHasBeenSet() const;

                    /**
                     * 获取Controls the randomness of the generated content. a relatively high value generates more diversified output.
                     * @return Temperature Controls the randomness of the generated content. a relatively high value generates more diversified output.
                     * 
                     */
                    double GetTemperature() const;

                    /**
                     * 设置Controls the randomness of the generated content. a relatively high value generates more diversified output.
                     * @param _temperature Controls the randomness of the generated content. a relatively high value generates more diversified output.
                     * 
                     */
                    void SetTemperature(const double& _temperature);

                    /**
                     * 判断参数 Temperature 是否已赋值
                     * @return Temperature 是否已赋值
                     * 
                     */
                    bool TemperatureHasBeenSet() const;

                    /**
                     * 获取Maximum number of generated tokens.
                     * @return MaxTokens Maximum number of generated tokens.
                     * 
                     */
                    int64_t GetMaxTokens() const;

                    /**
                     * 设置Maximum number of generated tokens.
                     * @param _maxTokens Maximum number of generated tokens.
                     * 
                     */
                    void SetMaxTokens(const int64_t& _maxTokens);

                    /**
                     * 判断参数 MaxTokens 是否已赋值
                     * @return MaxTokens 是否已赋值
                     * 
                     */
                    bool MaxTokensHasBeenSet() const;

                    /**
                     * 获取
                     * @return EnableSearch 
                     * 
                     */
                    bool GetEnableSearch() const;

                    /**
                     * 设置
                     * @param _enableSearch 
                     * 
                     */
                    void SetEnableSearch(const bool& _enableSearch);

                    /**
                     * 判断参数 EnableSearch 是否已赋值
                     * @return EnableSearch 是否已赋值
                     * 
                     */
                    bool EnableSearchHasBeenSet() const;

                private:

                    /**
                     * Model name.
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * Chat contextual information.
Description:
1. Length: up to 40. Arranged in array from old to new by conversation time.
2. Message.Role: system, user, assistant. Optional.
Among them, the system role is optional. If it exists, it must be at the beginning of the list. User and assistant need to alternate, starting with a user question and ending with a user question. Content cannot be empty. An example of the order of roles: [system (optional) user assistant user assistant user...].

                     */
                    std::vector<Message> m_messages;
                    bool m_messagesHasBeenSet;

                    /**
                     * Whether it is streaming output.
                     */
                    bool m_stream;
                    bool m_streamHasBeenSet;

                    /**
                     * Controls the randomness of the generated content. a relatively high value generates more diversified output.
                     */
                    double m_temperature;
                    bool m_temperatureHasBeenSet;

                    /**
                     * Maximum number of generated tokens.
                     */
                    int64_t m_maxTokens;
                    bool m_maxTokensHasBeenSet;

                    /**
                     * 
                     */
                    bool m_enableSearch;
                    bool m_enableSearchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_CHATCOMPLETIONSREQUEST_H_
