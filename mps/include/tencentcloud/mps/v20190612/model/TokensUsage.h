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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_TOKENSUSAGE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_TOKENSUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * token usage
                */
                class TokensUsage : public AbstractModel
                {
                public:
                    TokensUsage();
                    ~TokensUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Input token count</p>
                     * @return InputTokens <p>Input token count</p>
                     * 
                     */
                    uint64_t GetInputTokens() const;

                    /**
                     * 设置<p>Input token count</p>
                     * @param _inputTokens <p>Input token count</p>
                     * 
                     */
                    void SetInputTokens(const uint64_t& _inputTokens);

                    /**
                     * 判断参数 InputTokens 是否已赋值
                     * @return InputTokens 是否已赋值
                     * 
                     */
                    bool InputTokensHasBeenSet() const;

                    /**
                     * 获取<p>Output token count</p>
                     * @return OutputTokens <p>Output token count</p>
                     * 
                     */
                    uint64_t GetOutputTokens() const;

                    /**
                     * 设置<p>Output token count</p>
                     * @param _outputTokens <p>Output token count</p>
                     * 
                     */
                    void SetOutputTokens(const uint64_t& _outputTokens);

                    /**
                     * 判断参数 OutputTokens 是否已赋值
                     * @return OutputTokens 是否已赋值
                     * 
                     */
                    bool OutputTokensHasBeenSet() const;

                    /**
                     * 获取<p>Total token count, generally input + output</p>
                     * @return TotalTokens <p>Total token count, generally input + output</p>
                     * 
                     */
                    uint64_t GetTotalTokens() const;

                    /**
                     * 设置<p>Total token count, generally input + output</p>
                     * @param _totalTokens <p>Total token count, generally input + output</p>
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
                     * <p>Input token count</p>
                     */
                    uint64_t m_inputTokens;
                    bool m_inputTokensHasBeenSet;

                    /**
                     * <p>Output token count</p>
                     */
                    uint64_t m_outputTokens;
                    bool m_outputTokensHasBeenSet;

                    /**
                     * <p>Total token count, generally input + output</p>
                     */
                    uint64_t m_totalTokens;
                    bool m_totalTokensHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TOKENSUSAGE_H_
