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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_MODELINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_MODELINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/ModelParameter.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Model information.
                */
                class ModelInfo : public AbstractModel
                {
                public:
                    ModelInfo();
                    ~ModelInfo() = default;
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
                     * 获取Model description.
                     * @return ModelDesc Model description.
                     * 
                     */
                    std::string GetModelDesc() const;

                    /**
                     * 设置Model description.
                     * @param _modelDesc Model description.
                     * 
                     */
                    void SetModelDesc(const std::string& _modelDesc);

                    /**
                     * 判断参数 ModelDesc 是否已赋值
                     * @return ModelDesc 是否已赋值
                     * 
                     */
                    bool ModelDescHasBeenSet() const;

                    /**
                     * 获取Model name.
                     * @return AliasName Model name.
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置Model name.
                     * @param _aliasName Model name.
                     * 
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     * 
                     */
                    bool AliasNameHasBeenSet() const;

                    /**
                     * 获取Resource status, 1: available; 2: exhausted.
                     * @return ResourceStatus Resource status, 1: available; 2: exhausted.
                     * 
                     */
                    uint64_t GetResourceStatus() const;

                    /**
                     * 设置Resource status, 1: available; 2: exhausted.
                     * @param _resourceStatus Resource status, 1: available; 2: exhausted.
                     * 
                     */
                    void SetResourceStatus(const uint64_t& _resourceStatus);

                    /**
                     * 判断参数 ResourceStatus 是否已赋值
                     * @return ResourceStatus 是否已赋值
                     * 
                     */
                    bool ResourceStatusHasBeenSet() const;

                    /**
                     * 获取Character limit of prompt content.
                     * @return PromptWordsLimit Character limit of prompt content.
                     * 
                     */
                    std::string GetPromptWordsLimit() const;

                    /**
                     * 设置Character limit of prompt content.
                     * @param _promptWordsLimit Character limit of prompt content.
                     * 
                     */
                    void SetPromptWordsLimit(const std::string& _promptWordsLimit);

                    /**
                     * 判断参数 PromptWordsLimit 是否已赋值
                     * @return PromptWordsLimit 是否已赋值
                     * 
                     */
                    bool PromptWordsLimitHasBeenSet() const;

                    /**
                     * 获取By controlling the diversity of content generation through core sampling, a higher Top P value will lead to more diverse content generation.
                     * @return TopP By controlling the diversity of content generation through core sampling, a higher Top P value will lead to more diverse content generation.
                     * 
                     */
                    ModelParameter GetTopP() const;

                    /**
                     * 设置By controlling the diversity of content generation through core sampling, a higher Top P value will lead to more diverse content generation.
                     * @param _topP By controlling the diversity of content generation through core sampling, a higher Top P value will lead to more diverse content generation.
                     * 
                     */
                    void SetTopP(const ModelParameter& _topP);

                    /**
                     * 判断参数 TopP 是否已赋值
                     * @return TopP 是否已赋值
                     * 
                     */
                    bool TopPHasBeenSet() const;

                    /**
                     * 获取Temperature control randomness.
                     * @return Temperature Temperature control randomness.
                     * 
                     */
                    ModelParameter GetTemperature() const;

                    /**
                     * 设置Temperature control randomness.
                     * @param _temperature Temperature control randomness.
                     * 
                     */
                    void SetTemperature(const ModelParameter& _temperature);

                    /**
                     * 判断参数 Temperature 是否已赋值
                     * @return Temperature 是否已赋值
                     * 
                     */
                    bool TemperatureHasBeenSet() const;

                    /**
                     * 获取Maximum quantity of tokens that can be generated.
                     * @return MaxTokens Maximum quantity of tokens that can be generated.
                     * 
                     */
                    ModelParameter GetMaxTokens() const;

                    /**
                     * 设置Maximum quantity of tokens that can be generated.
                     * @param _maxTokens Maximum quantity of tokens that can be generated.
                     * 
                     */
                    void SetMaxTokens(const ModelParameter& _maxTokens);

                    /**
                     * 判断参数 MaxTokens 是否已赋值
                     * @return MaxTokens 是否已赋值
                     * 
                     */
                    bool MaxTokensHasBeenSet() const;

                    /**
                     * 获取Model source, Hunyuan: Tencent Hunyuan; Industry: Tencent Cloud industry large model; Experience: new model experience.
                     * @return Source Model source, Hunyuan: Tencent Hunyuan; Industry: Tencent Cloud industry large model; Experience: new model experience.
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Model source, Hunyuan: Tencent Hunyuan; Industry: Tencent Cloud industry large model; Experience: new model experience.
                     * @param _source Model source, Hunyuan: Tencent Hunyuan; Industry: Tencent Cloud industry large model; Experience: new model experience.
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Model icon.
                     * @return Icon Model icon.
                     * 
                     */
                    std::string GetIcon() const;

                    /**
                     * 设置Model icon.
                     * @param _icon Model icon.
                     * 
                     */
                    void SetIcon(const std::string& _icon);

                    /**
                     * 判断参数 Icon 是否已赋值
                     * @return Icon 是否已赋值
                     * 
                     */
                    bool IconHasBeenSet() const;

                    /**
                     * 获取Whether it is free.
                     * @return IsFree Whether it is free.
                     * 
                     */
                    bool GetIsFree() const;

                    /**
                     * 设置Whether it is free.
                     * @param _isFree Whether it is free.
                     * 
                     */
                    void SetIsFree(const bool& _isFree);

                    /**
                     * 判断参数 IsFree 是否已赋值
                     * @return IsFree 是否已赋值
                     * 
                     */
                    bool IsFreeHasBeenSet() const;

                    /**
                     * 获取Maximum characters input in the model dialog box.
                     * @return InputLenLimit Maximum characters input in the model dialog box.
                     * 
                     */
                    uint64_t GetInputLenLimit() const;

                    /**
                     * 设置Maximum characters input in the model dialog box.
                     * @param _inputLenLimit Maximum characters input in the model dialog box.
                     * 
                     */
                    void SetInputLenLimit(const uint64_t& _inputLenLimit);

                    /**
                     * 判断参数 InputLenLimit 是否已赋值
                     * @return InputLenLimit 是否已赋值
                     * 
                     */
                    bool InputLenLimitHasBeenSet() const;

                    /**
                     * 获取Workflow support levels:
0 - Not supported by the model;
1 - Supported by the model;
2 - Poorly supported by the model.
                     * @return SupportWorkflowStatus Workflow support levels:
0 - Not supported by the model;
1 - Supported by the model;
2 - Poorly supported by the model.
                     * 
                     */
                    uint64_t GetSupportWorkflowStatus() const;

                    /**
                     * 设置Workflow support levels:
0 - Not supported by the model;
1 - Supported by the model;
2 - Poorly supported by the model.
                     * @param _supportWorkflowStatus Workflow support levels:
0 - Not supported by the model;
1 - Supported by the model;
2 - Poorly supported by the model.
                     * 
                     */
                    void SetSupportWorkflowStatus(const uint64_t& _supportWorkflowStatus);

                    /**
                     * 判断参数 SupportWorkflowStatus 是否已赋值
                     * @return SupportWorkflowStatus 是否已赋值
                     * 
                     */
                    bool SupportWorkflowStatusHasBeenSet() const;

                    /**
                     * 获取Model categories:
Generate: Generative model
Thought: Thinking model
                     * @return ModelCategory Model categories:
Generate: Generative model
Thought: Thinking model
                     * 
                     */
                    std::string GetModelCategory() const;

                    /**
                     * 设置Model categories:
Generate: Generative model
Thought: Thinking model
                     * @param _modelCategory Model categories:
Generate: Generative model
Thought: Thinking model
                     * 
                     */
                    void SetModelCategory(const std::string& _modelCategory);

                    /**
                     * 判断参数 ModelCategory 是否已赋值
                     * @return ModelCategory 是否已赋值
                     * 
                     */
                    bool ModelCategoryHasBeenSet() const;

                    /**
                     * 获取Whether it is the default model.
                     * @return IsDefault Whether it is the default model.
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置Whether it is the default model.
                     * @param _isDefault Whether it is the default model.
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取Maximum characters of role prompt words.
                     * @return RoleLenLimit Maximum characters of role prompt words.
                     * 
                     */
                    uint64_t GetRoleLenLimit() const;

                    /**
                     * 设置Maximum characters of role prompt words.
                     * @param _roleLenLimit Maximum characters of role prompt words.
                     * 
                     */
                    void SetRoleLenLimit(const uint64_t& _roleLenLimit);

                    /**
                     * 判断参数 RoleLenLimit 是否已赋值
                     * @return RoleLenLimit 是否已赋值
                     * 
                     */
                    bool RoleLenLimitHasBeenSet() const;

                    /**
                     * 获取Whether it is an exclusive concurrency model.
                     * @return IsExclusive Whether it is an exclusive concurrency model.
                     * 
                     */
                    bool GetIsExclusive() const;

                    /**
                     * 设置Whether it is an exclusive concurrency model.
                     * @param _isExclusive Whether it is an exclusive concurrency model.
                     * 
                     */
                    void SetIsExclusive(const bool& _isExclusive);

                    /**
                     * 判断参数 IsExclusive 是否已赋值
                     * @return IsExclusive 是否已赋值
                     * 
                     */
                    bool IsExclusiveHasBeenSet() const;

                    /**
                     * 获取The model supports intelligent call effects.
                     * @return SupportAiCallStatus The model supports intelligent call effects.
                     * 
                     */
                    uint64_t GetSupportAiCallStatus() const;

                    /**
                     * 设置The model supports intelligent call effects.
                     * @param _supportAiCallStatus The model supports intelligent call effects.
                     * 
                     */
                    void SetSupportAiCallStatus(const uint64_t& _supportAiCallStatus);

                    /**
                     * 判断参数 SupportAiCallStatus 是否已赋值
                     * @return SupportAiCallStatus 是否已赋值
                     * 
                     */
                    bool SupportAiCallStatusHasBeenSet() const;

                private:

                    /**
                     * Model name.
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * Model description.
                     */
                    std::string m_modelDesc;
                    bool m_modelDescHasBeenSet;

                    /**
                     * Model name.
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * Resource status, 1: available; 2: exhausted.
                     */
                    uint64_t m_resourceStatus;
                    bool m_resourceStatusHasBeenSet;

                    /**
                     * Character limit of prompt content.
                     */
                    std::string m_promptWordsLimit;
                    bool m_promptWordsLimitHasBeenSet;

                    /**
                     * By controlling the diversity of content generation through core sampling, a higher Top P value will lead to more diverse content generation.
                     */
                    ModelParameter m_topP;
                    bool m_topPHasBeenSet;

                    /**
                     * Temperature control randomness.
                     */
                    ModelParameter m_temperature;
                    bool m_temperatureHasBeenSet;

                    /**
                     * Maximum quantity of tokens that can be generated.
                     */
                    ModelParameter m_maxTokens;
                    bool m_maxTokensHasBeenSet;

                    /**
                     * Model source, Hunyuan: Tencent Hunyuan; Industry: Tencent Cloud industry large model; Experience: new model experience.
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Model icon.
                     */
                    std::string m_icon;
                    bool m_iconHasBeenSet;

                    /**
                     * Whether it is free.
                     */
                    bool m_isFree;
                    bool m_isFreeHasBeenSet;

                    /**
                     * Maximum characters input in the model dialog box.
                     */
                    uint64_t m_inputLenLimit;
                    bool m_inputLenLimitHasBeenSet;

                    /**
                     * Workflow support levels:
0 - Not supported by the model;
1 - Supported by the model;
2 - Poorly supported by the model.
                     */
                    uint64_t m_supportWorkflowStatus;
                    bool m_supportWorkflowStatusHasBeenSet;

                    /**
                     * Model categories:
Generate: Generative model
Thought: Thinking model
                     */
                    std::string m_modelCategory;
                    bool m_modelCategoryHasBeenSet;

                    /**
                     * Whether it is the default model.
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * Maximum characters of role prompt words.
                     */
                    uint64_t m_roleLenLimit;
                    bool m_roleLenLimitHasBeenSet;

                    /**
                     * Whether it is an exclusive concurrency model.
                     */
                    bool m_isExclusive;
                    bool m_isExclusiveHasBeenSet;

                    /**
                     * The model supports intelligent call effects.
                     */
                    uint64_t m_supportAiCallStatus;
                    bool m_supportAiCallStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_MODELINFO_H_
