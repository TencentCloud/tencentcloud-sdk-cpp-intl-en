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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTMODELCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTMODELCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ModelParams.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Model definition in the Agent configuration
                */
                class AgentModelConfig : public AbstractModel
                {
                public:
                    AgentModelConfig();
                    ~AgentModelConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Unique model id</p>
                     * @return ModelId <p>Unique model id</p>
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置<p>Unique model id</p>
                     * @param _modelId <p>Unique model id</p>
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取<p>Model alias</p>
                     * @return Alias <p>Model alias</p>
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置<p>Model alias</p>
                     * @param _alias <p>Model alias</p>
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取<p>Model context length character limit</p>
                     * @return ContextWordsLimit <p>Model context length character limit</p>
                     * 
                     */
                    uint64_t GetContextWordsLimit() const;

                    /**
                     * 设置<p>Model context length character limit</p>
                     * @param _contextWordsLimit <p>Model context length character limit</p>
                     * 
                     */
                    void SetContextWordsLimit(const uint64_t& _contextWordsLimit);

                    /**
                     * 判断参数 ContextWordsLimit 是否已赋值
                     * @return ContextWordsLimit 是否已赋值
                     * 
                     */
                    bool ContextWordsLimitHasBeenSet() const;

                    /**
                     * 获取<p>Instruction length character limit</p>
                     * @return InstructionsWordsLimit <p>Instruction length character limit</p>
                     * 
                     */
                    uint64_t GetInstructionsWordsLimit() const;

                    /**
                     * 设置<p>Instruction length character limit</p>
                     * @param _instructionsWordsLimit <p>Instruction length character limit</p>
                     * 
                     */
                    void SetInstructionsWordsLimit(const uint64_t& _instructionsWordsLimit);

                    /**
                     * 判断参数 InstructionsWordsLimit 是否已赋值
                     * @return InstructionsWordsLimit 是否已赋值
                     * 
                     */
                    bool InstructionsWordsLimitHasBeenSet() const;

                    /**
                     * 获取<p>Model parameters</p>
                     * @return ModelParameters <p>Model parameters</p>
                     * 
                     */
                    ModelParams GetModelParameters() const;

                    /**
                     * 设置<p>Model parameters</p>
                     * @param _modelParameters <p>Model parameters</p>
                     * 
                     */
                    void SetModelParameters(const ModelParams& _modelParameters);

                    /**
                     * 判断参数 ModelParameters 是否已赋值
                     * @return ModelParameters 是否已赋值
                     * 
                     */
                    bool ModelParametersHasBeenSet() const;

                private:

                    /**
                     * <p>Unique model id</p>
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * <p>Model alias</p>
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * <p>Model context length character limit</p>
                     */
                    uint64_t m_contextWordsLimit;
                    bool m_contextWordsLimitHasBeenSet;

                    /**
                     * <p>Instruction length character limit</p>
                     */
                    uint64_t m_instructionsWordsLimit;
                    bool m_instructionsWordsLimitHasBeenSet;

                    /**
                     * <p>Model parameters</p>
                     */
                    ModelParams m_modelParameters;
                    bool m_modelParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTMODELCONFIG_H_
