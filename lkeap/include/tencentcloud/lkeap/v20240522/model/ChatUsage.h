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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_CHATUSAGE_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_CHATUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * Consumption.
                */
                class ChatUsage : public AbstractModel
                {
                public:
                    ChatUsage();
                    ~ChatUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of input tokens.
                     * @return PromptTokens Number of input tokens.
                     * 
                     */
                    int64_t GetPromptTokens() const;

                    /**
                     * 设置Number of input tokens.
                     * @param _promptTokens Number of input tokens.
                     * 
                     */
                    void SetPromptTokens(const int64_t& _promptTokens);

                    /**
                     * 判断参数 PromptTokens 是否已赋值
                     * @return PromptTokens 是否已赋值
                     * 
                     */
                    bool PromptTokensHasBeenSet() const;

                    /**
                     * 获取Number of output tokens.
                     * @return CompletionTokens Number of output tokens.
                     * 
                     */
                    int64_t GetCompletionTokens() const;

                    /**
                     * 设置Number of output tokens.
                     * @param _completionTokens Number of output tokens.
                     * 
                     */
                    void SetCompletionTokens(const int64_t& _completionTokens);

                    /**
                     * 判断参数 CompletionTokens 是否已赋值
                     * @return CompletionTokens 是否已赋值
                     * 
                     */
                    bool CompletionTokensHasBeenSet() const;

                    /**
                     * 获取Total number of tokens.
                     * @return TotalTokens Total number of tokens.
                     * 
                     */
                    int64_t GetTotalTokens() const;

                    /**
                     * 设置Total number of tokens.
                     * @param _totalTokens Total number of tokens.
                     * 
                     */
                    void SetTotalTokens(const int64_t& _totalTokens);

                    /**
                     * 判断参数 TotalTokens 是否已赋值
                     * @return TotalTokens 是否已赋值
                     * 
                     */
                    bool TotalTokensHasBeenSet() const;

                private:

                    /**
                     * Number of input tokens.
                     */
                    int64_t m_promptTokens;
                    bool m_promptTokensHasBeenSet;

                    /**
                     * Number of output tokens.
                     */
                    int64_t m_completionTokens;
                    bool m_completionTokensHasBeenSet;

                    /**
                     * Total number of tokens.
                     */
                    int64_t m_totalTokens;
                    bool m_totalTokensHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_CHATUSAGE_H_
