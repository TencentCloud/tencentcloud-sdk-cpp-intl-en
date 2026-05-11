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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCIMAGETASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCIMAGETASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcImageTaskInputFileInfo.h>
#include <tencentcloud/vod/v20180717/model/AigcImageOutputConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Input of the AIGC image generation task.
                */
                class AigcImageTaskInput : public AbstractModel
                {
                public:
                    AigcImageTaskInput();
                    ~AigcImageTaskInput() = default;
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
                     * 获取Model version.
                     * @return ModelVersion Model version.
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置Model version.
                     * @param _modelVersion Model version.
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
                     * 获取Input file of the AIGC image generation task.
                     * @return FileInfos Input file of the AIGC image generation task.
                     * 
                     */
                    std::vector<AigcImageTaskInputFileInfo> GetFileInfos() const;

                    /**
                     * 设置Input file of the AIGC image generation task.
                     * @param _fileInfos Input file of the AIGC image generation task.
                     * 
                     */
                    void SetFileInfos(const std::vector<AigcImageTaskInputFileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取Prompt for image generation. Supports a maximum of 1000 characters. This parameter is required when FileInfos is empty.
                     * @return Prompt Prompt for image generation. Supports a maximum of 1000 characters. This parameter is required when FileInfos is empty.
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置Prompt for image generation. Supports a maximum of 1000 characters. This parameter is required when FileInfos is empty.
                     * @param _prompt Prompt for image generation. Supports a maximum of 1000 characters. This parameter is required when FileInfos is empty.
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
                     * 获取To prevent the model from generating image prompts. Supports a maximum of 1000 characters.
                     * @return NegativePrompt To prevent the model from generating image prompts. Supports a maximum of 1000 characters.
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置To prevent the model from generating image prompts. Supports a maximum of 1000 characters.
                     * @param _negativePrompt To prevent the model from generating image prompts. Supports a maximum of 1000 characters.
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
                     * 获取Whether to optimize prompt content automatically. When enabled, the passed in Prompt will be optimized automatically to enhance generation quality. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li>
                     * @return EnhancePrompt Whether to optimize prompt content automatically. When enabled, the passed in Prompt will be optimized automatically to enhance generation quality. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li>
                     * 
                     */
                    std::string GetEnhancePrompt() const;

                    /**
                     * 设置Whether to optimize prompt content automatically. When enabled, the passed in Prompt will be optimized automatically to enhance generation quality. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li>
                     * @param _enhancePrompt Whether to optimize prompt content automatically. When enabled, the passed in Prompt will be optimized automatically to enhance generation quality. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li>
                     * 
                     */
                    void SetEnhancePrompt(const std::string& _enhancePrompt);

                    /**
                     * 判断参数 EnhancePrompt 是否已赋值
                     * @return EnhancePrompt 是否已赋值
                     * 
                     */
                    bool EnhancePromptHasBeenSet() const;

                    /**
                     * 获取Generation mode. Valid values: <li>Standard: standard mode;</li> <li>Professional: high-quality mode;</li>
                     * @return GenerationMode Generation mode. Valid values: <li>Standard: standard mode;</li> <li>Professional: high-quality mode;</li>
                     * 
                     */
                    std::string GetGenerationMode() const;

                    /**
                     * 设置Generation mode. Valid values: <li>Standard: standard mode;</li> <li>Professional: high-quality mode;</li>
                     * @param _generationMode Generation mode. Valid values: <li>Standard: standard mode;</li> <li>Professional: high-quality mode;</li>
                     * 
                     */
                    void SetGenerationMode(const std::string& _generationMode);

                    /**
                     * 判断参数 GenerationMode 是否已赋值
                     * @return GenerationMode 是否已赋值
                     * 
                     */
                    bool GenerationModeHasBeenSet() const;

                    /**
                     * 获取Output the result file of the AIGC image generation.
                     * @return OutputConfig Output the result file of the AIGC image generation.
                     * 
                     */
                    AigcImageOutputConfig GetOutputConfig() const;

                    /**
                     * 设置Output the result file of the AIGC image generation.
                     * @param _outputConfig Output the result file of the AIGC image generation.
                     * 
                     */
                    void SetOutputConfig(const AigcImageOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                private:

                    /**
                     * Model name.
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * Model version.
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * Input file of the AIGC image generation task.
                     */
                    std::vector<AigcImageTaskInputFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * Prompt for image generation. Supports a maximum of 1000 characters. This parameter is required when FileInfos is empty.
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * To prevent the model from generating image prompts. Supports a maximum of 1000 characters.
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * Whether to optimize prompt content automatically. When enabled, the passed in Prompt will be optimized automatically to enhance generation quality. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li>
                     */
                    std::string m_enhancePrompt;
                    bool m_enhancePromptHasBeenSet;

                    /**
                     * Generation mode. Valid values: <li>Standard: standard mode;</li> <li>Professional: high-quality mode;</li>
                     */
                    std::string m_generationMode;
                    bool m_generationModeHasBeenSet;

                    /**
                     * Output the result file of the AIGC image generation.
                     */
                    AigcImageOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCIMAGETASKINPUT_H_
