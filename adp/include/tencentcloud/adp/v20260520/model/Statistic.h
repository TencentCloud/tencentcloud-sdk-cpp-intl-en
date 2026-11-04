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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_STATISTIC_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_STATISTIC_H_

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
                * Statistics
                */
                class Statistic : public AbstractModel
                {
                public:
                    Statistic();
                    ~Statistic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Time to first token</p>
                     * @return FirstTokenCostMs <p>Time to first token</p>
                     * 
                     */
                    uint64_t GetFirstTokenCostMs() const;

                    /**
                     * 设置<p>Time to first token</p>
                     * @param _firstTokenCostMs <p>Time to first token</p>
                     * 
                     */
                    void SetFirstTokenCostMs(const uint64_t& _firstTokenCostMs);

                    /**
                     * 判断参数 FirstTokenCostMs 是否已赋值
                     * @return FirstTokenCostMs 是否已赋值
                     * 
                     */
                    bool FirstTokenCostMsHasBeenSet() const;

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
                     * 获取<p>Total reasoning time</p>
                     * @return TotalCostMs <p>Total reasoning time</p>
                     * 
                     */
                    uint64_t GetTotalCostMs() const;

                    /**
                     * 设置<p>Total reasoning time</p>
                     * @param _totalCostMs <p>Total reasoning time</p>
                     * 
                     */
                    void SetTotalCostMs(const uint64_t& _totalCostMs);

                    /**
                     * 判断参数 TotalCostMs 是否已赋值
                     * @return TotalCostMs 是否已赋值
                     * 
                     */
                    bool TotalCostMsHasBeenSet() const;

                    /**
                     * 获取<p>Total input and output tokens</p>
                     * @return TotalTokens <p>Total input and output tokens</p>
                     * 
                     */
                    uint64_t GetTotalTokens() const;

                    /**
                     * 设置<p>Total input and output tokens</p>
                     * @param _totalTokens <p>Total input and output tokens</p>
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
                     * <p>Time to first token</p>
                     */
                    uint64_t m_firstTokenCostMs;
                    bool m_firstTokenCostMsHasBeenSet;

                    /**
                     * <p>Input token count</p>
                     */
                    uint64_t m_inputTokens;
                    bool m_inputTokensHasBeenSet;

                    /**
                     * <p>Model name</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>Output token count</p>
                     */
                    uint64_t m_outputTokens;
                    bool m_outputTokensHasBeenSet;

                    /**
                     * <p>Total reasoning time</p>
                     */
                    uint64_t m_totalCostMs;
                    bool m_totalCostMsHasBeenSet;

                    /**
                     * <p>Total input and output tokens</p>
                     */
                    uint64_t m_totalTokens;
                    bool m_totalTokensHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_STATISTIC_H_
