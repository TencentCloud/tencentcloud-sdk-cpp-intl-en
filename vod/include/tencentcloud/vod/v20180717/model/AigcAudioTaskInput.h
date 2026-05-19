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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCAUDIOTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCAUDIOTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcAudioOutputConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Input of the AIGC sound effect generation task.
                */
                class AigcAudioTaskInput : public AbstractModel
                {
                public:
                    AigcAudioTaskInput();
                    ~AigcAudioTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Model name.</p>
                     * @return ModelName <p>Model name.</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>Model name.</p>
                     * @param _modelName <p>Model name.</p>
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
                     * 获取<p>Model version.</p>
                     * @return ModelVersion <p>Model version.</p>
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置<p>Model version.</p>
                     * @param _modelVersion <p>Model version.</p>
                     * 
                     */
                    void SetModelVersion(const std::string& _modelVersion);

                    /**
                     * 判断参数 ModelVersion 是否已赋值
                     * @return ModelVersion 是否已赋值
                     * 
                     */
                    bool ModelVersionHasBeenSet() const;

                    /**
                     * 获取<p>Scenario type. Values as follows: <li>When ModelName is Kling, value motion_control means action control;</li> <li>Other ModelName not currently supported.</li></p>
                     * @return SceneType <p>Scenario type. Values as follows: <li>When ModelName is Kling, value motion_control means action control;</li> <li>Other ModelName not currently supported.</li></p>
                     * 
                     */
                    std::string GetSceneType() const;

                    /**
                     * 设置<p>Scenario type. Values as follows: <li>When ModelName is Kling, value motion_control means action control;</li> <li>Other ModelName not currently supported.</li></p>
                     * @param _sceneType <p>Scenario type. Values as follows: <li>When ModelName is Kling, value motion_control means action control;</li> <li>Other ModelName not currently supported.</li></p>
                     * 
                     */
                    void SetSceneType(const std::string& _sceneType);

                    /**
                     * 判断参数 SceneType 是否已赋值
                     * @return SceneType 是否已赋值
                     * 
                     */
                    bool SceneTypeHasBeenSet() const;

                    /**
                     * 获取<p>Prompt for video generation. Supports a maximum of 1000 characters. This parameter is required when FileInfos is empty.</p>
                     * @return Prompt <p>Prompt for video generation. Supports a maximum of 1000 characters. This parameter is required when FileInfos is empty.</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>Prompt for video generation. Supports a maximum of 1000 characters. This parameter is required when FileInfos is empty.</p>
                     * @param _prompt <p>Prompt for video generation. Supports a maximum of 1000 characters. This parameter is required when FileInfos is empty.</p>
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取<p>To prevent the model from generating video prompt content. Supports a maximum of 1000 characters.</p>
                     * @return NegativePrompt <p>To prevent the model from generating video prompt content. Supports a maximum of 1000 characters.</p>
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置<p>To prevent the model from generating video prompt content. Supports a maximum of 1000 characters.</p>
                     * @param _negativePrompt <p>To prevent the model from generating video prompt content. Supports a maximum of 1000 characters.</p>
                     * 
                     */
                    void SetNegativePrompt(const std::string& _negativePrompt);

                    /**
                     * 判断参数 NegativePrompt 是否已赋值
                     * @return NegativePrompt 是否已赋值
                     * 
                     */
                    bool NegativePromptHasBeenSet() const;

                    /**
                     * 获取<p>Whether to optimize Prompt content automatically. When Enabled, the passed in Prompt will be optimized automatically to enhance generation quality. Valid values: <li>Enabled: turn on;</li> <li>Disabled: turn off;</li></p>
                     * @return EnhancePrompt <p>Whether to optimize Prompt content automatically. When Enabled, the passed in Prompt will be optimized automatically to enhance generation quality. Valid values: <li>Enabled: turn on;</li> <li>Disabled: turn off;</li></p>
                     * 
                     */
                    bool GetEnhancePrompt() const;

                    /**
                     * 设置<p>Whether to optimize Prompt content automatically. When Enabled, the passed in Prompt will be optimized automatically to enhance generation quality. Valid values: <li>Enabled: turn on;</li> <li>Disabled: turn off;</li></p>
                     * @param _enhancePrompt <p>Whether to optimize Prompt content automatically. When Enabled, the passed in Prompt will be optimized automatically to enhance generation quality. Valid values: <li>Enabled: turn on;</li> <li>Disabled: turn off;</li></p>
                     * 
                     */
                    void SetEnhancePrompt(const bool& _enhancePrompt);

                    /**
                     * 判断参数 EnhancePrompt 是否已赋值
                     * @return EnhancePrompt 是否已赋值
                     * 
                     */
                    bool EnhancePromptHasBeenSet() const;

                    /**
                     * 获取<p>Output file of the AIGC image generation result.</p>
                     * @return OutputConfig <p>Output file of the AIGC image generation result.</p>
                     * 
                     */
                    AigcAudioOutputConfig GetOutputConfig() const;

                    /**
                     * 设置<p>Output file of the AIGC image generation result.</p>
                     * @param _outputConfig <p>Output file of the AIGC image generation result.</p>
                     * 
                     */
                    void SetOutputConfig(const AigcAudioOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                    /**
                     * 获取<p>Additional parameter</p>
                     * @return AdditionalParameters <p>Additional parameter</p>
                     * 
                     */
                    std::string GetAdditionalParameters() const;

                    /**
                     * 设置<p>Additional parameter</p>
                     * @param _additionalParameters <p>Additional parameter</p>
                     * 
                     */
                    void SetAdditionalParameters(const std::string& _additionalParameters);

                    /**
                     * 判断参数 AdditionalParameters 是否已赋值
                     * @return AdditionalParameters 是否已赋值
                     * 
                     */
                    bool AdditionalParametersHasBeenSet() const;

                private:

                    /**
                     * <p>Model name.</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>Model version.</p>
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * <p>Scenario type. Values as follows: <li>When ModelName is Kling, value motion_control means action control;</li> <li>Other ModelName not currently supported.</li></p>
                     */
                    std::string m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * <p>Prompt for video generation. Supports a maximum of 1000 characters. This parameter is required when FileInfos is empty.</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>To prevent the model from generating video prompt content. Supports a maximum of 1000 characters.</p>
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * <p>Whether to optimize Prompt content automatically. When Enabled, the passed in Prompt will be optimized automatically to enhance generation quality. Valid values: <li>Enabled: turn on;</li> <li>Disabled: turn off;</li></p>
                     */
                    bool m_enhancePrompt;
                    bool m_enhancePromptHasBeenSet;

                    /**
                     * <p>Output file of the AIGC image generation result.</p>
                     */
                    AigcAudioOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                    /**
                     * <p>Additional parameter</p>
                     */
                    std::string m_additionalParameters;
                    bool m_additionalParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCAUDIOTASKINPUT_H_
