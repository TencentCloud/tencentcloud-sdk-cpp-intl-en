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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_TOKENUSAGE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_TOKENUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Token usage statistics
                */
                class TokenUsage : public AbstractModel
                {
                public:
                    TokenUsage();
                    ~TokenUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Number of completion tokens</p>
                     * @return CompletionTokens <p>Number of completion tokens</p>
                     * 
                     */
                    uint64_t GetCompletionTokens() const;

                    /**
                     * 设置<p>Number of completion tokens</p>
                     * @param _completionTokens <p>Number of completion tokens</p>
                     * 
                     */
                    void SetCompletionTokens(const uint64_t& _completionTokens);

                    /**
                     * 判断参数 CompletionTokens 是否已赋值
                     * @return CompletionTokens 是否已赋值
                     * 
                     */
                    bool CompletionTokensHasBeenSet() const;

                    /**
                     * 获取<p>Model name</p>
                     * @return ModelName <p>Model name</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>Model name</p>
                     * @param _modelName <p>Model name</p>
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取<p>prompt token count</p>
                     * @return PromptTokens <p>prompt token count</p>
                     * 
                     */
                    uint64_t GetPromptTokens() const;

                    /**
                     * 设置<p>prompt token count</p>
                     * @param _promptTokens <p>prompt token count</p>
                     * 
                     */
                    void SetPromptTokens(const uint64_t& _promptTokens);

                    /**
                     * 判断参数 PromptTokens 是否已赋值
                     * @return PromptTokens 是否已赋值
                     * 
                     */
                    bool PromptTokensHasBeenSet() const;

                    /**
                     * 获取<p>Total token count</p>
                     * @return TotalTokens <p>Total token count</p>
                     * 
                     */
                    uint64_t GetTotalTokens() const;

                    /**
                     * 设置<p>Total token count</p>
                     * @param _totalTokens <p>Total token count</p>
                     * 
                     */
                    void SetTotalTokens(const uint64_t& _totalTokens);

                    /**
                     * 判断参数 TotalTokens 是否已赋值
                     * @return TotalTokens 是否已赋值
                     * 
                     */
                    bool TotalTokensHasBeenSet() const;

                private:

                    /**
                     * <p>Number of completion tokens</p>
                     */
                    uint64_t m_completionTokens;
                    bool m_completionTokensHasBeenSet;

                    /**
                     * <p>Model name</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>prompt token count</p>
                     */
                    uint64_t m_promptTokens;
                    bool m_promptTokensHasBeenSet;

                    /**
                     * <p>Total token count</p>
                     */
                    uint64_t m_totalTokens;
                    bool m_totalTokensHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_TOKENUSAGE_H_
