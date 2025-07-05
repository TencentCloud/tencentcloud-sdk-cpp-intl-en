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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_STATISTICINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_STATISTICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Statistical information of large model tokens.
                */
                class StatisticInfo : public AbstractModel
                {
                public:
                    StatisticInfo();
                    ~StatisticInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Model name.
                     * @return ModelName Model name.
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置Model name.
                     * @param _modelName Model name.
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
                     * 获取Time consumption of the first token.
                     * @return FirstTokenCost Time consumption of the first token.
                     * 
                     */
                    uint64_t GetFirstTokenCost() const;

                    /**
                     * 设置Time consumption of the first token.
                     * @param _firstTokenCost Time consumption of the first token.
                     * 
                     */
                    void SetFirstTokenCost(const uint64_t& _firstTokenCost);

                    /**
                     * 判断参数 FirstTokenCost 是否已赋值
                     * @return FirstTokenCost 是否已赋值
                     * 
                     */
                    bool FirstTokenCostHasBeenSet() const;

                    /**
                     * 获取Total time consumption.
                     * @return TotalCost Total time consumption.
                     * 
                     */
                    uint64_t GetTotalCost() const;

                    /**
                     * 设置Total time consumption.
                     * @param _totalCost Total time consumption.
                     * 
                     */
                    void SetTotalCost(const uint64_t& _totalCost);

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     * 
                     */
                    bool TotalCostHasBeenSet() const;

                    /**
                     * 获取Number of input tokens.
                     * @return InputTokens Number of input tokens.
                     * 
                     */
                    uint64_t GetInputTokens() const;

                    /**
                     * 设置Number of input tokens.
                     * @param _inputTokens Number of input tokens.
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
                     * 获取Number of output tokens.
                     * @return OutputTokens Number of output tokens.
                     * 
                     */
                    uint64_t GetOutputTokens() const;

                    /**
                     * 设置Number of output tokens.
                     * @param _outputTokens Number of output tokens.
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
                     * 获取Total number of tokens.
                     * @return TotalTokens Total number of tokens.
                     * 
                     */
                    uint64_t GetTotalTokens() const;

                    /**
                     * 设置Total number of tokens.
                     * @param _totalTokens Total number of tokens.
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
                     * Model name.
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * Time consumption of the first token.
                     */
                    uint64_t m_firstTokenCost;
                    bool m_firstTokenCostHasBeenSet;

                    /**
                     * Total time consumption.
                     */
                    uint64_t m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * Number of input tokens.
                     */
                    uint64_t m_inputTokens;
                    bool m_inputTokensHasBeenSet;

                    /**
                     * Number of output tokens.
                     */
                    uint64_t m_outputTokens;
                    bool m_outputTokensHasBeenSet;

                    /**
                     * Total number of tokens.
                     */
                    uint64_t m_totalTokens;
                    bool m_totalTokensHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_STATISTICINFO_H_
