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
                     * 获取<p>File information for AIGC image generation task input.</p>
                     * @return FileInfos <p>File information for AIGC image generation task input.</p>
                     * 
                     */
                    std::vector<AigcImageTaskInputFileInfo> GetFileInfos() const;

                    /**
                     * 设置<p>File information for AIGC image generation task input.</p>
                     * @param _fileInfos <p>File information for AIGC image generation task input.</p>
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
                     * 获取<p>Prompt for image generation. Supports up to 1000 characters. This parameter is required when FileInfos is empty.</p>
                     * @return Prompt <p>Prompt for image generation. Supports up to 1000 characters. This parameter is required when FileInfos is empty.</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>Prompt for image generation. Supports up to 1000 characters. This parameter is required when FileInfos is empty.</p>
                     * @param _prompt <p>Prompt for image generation. Supports up to 1000 characters. This parameter is required when FileInfos is empty.</p>
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
                     * 获取<p>To prevent the model from generating images, set a prompt. Supports a maximum of 1000 characters.</p>
                     * @return NegativePrompt <p>To prevent the model from generating images, set a prompt. Supports a maximum of 1000 characters.</p>
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置<p>To prevent the model from generating images, set a prompt. Supports a maximum of 1000 characters.</p>
                     * @param _negativePrompt <p>To prevent the model from generating images, set a prompt. Supports a maximum of 1000 characters.</p>
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
                     * 获取<p>Whether to optimize Prompt content automatically. When Enabled, the passed in Prompt will be optimized automatically to enhance generation quality. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li></p>
                     * @return EnhancePrompt <p>Whether to optimize Prompt content automatically. When Enabled, the passed in Prompt will be optimized automatically to enhance generation quality. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li></p>
                     * 
                     */
                    std::string GetEnhancePrompt() const;

                    /**
                     * 设置<p>Whether to optimize Prompt content automatically. When Enabled, the passed in Prompt will be optimized automatically to enhance generation quality. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li></p>
                     * @param _enhancePrompt <p>Whether to optimize Prompt content automatically. When Enabled, the passed in Prompt will be optimized automatically to enhance generation quality. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li></p>
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
                     * 获取<p>Generation mode. Valid values: <li>Standard: standard mode;</li> <li>Professional: high-quality mode;</li></p>
                     * @return GenerationMode <p>Generation mode. Valid values: <li>Standard: standard mode;</li> <li>Professional: high-quality mode;</li></p>
                     * 
                     */
                    std::string GetGenerationMode() const;

                    /**
                     * 设置<p>Generation mode. Valid values: <li>Standard: standard mode;</li> <li>Professional: high-quality mode;</li></p>
                     * @param _generationMode <p>Generation mode. Valid values: <li>Standard: standard mode;</li> <li>Professional: high-quality mode;</li></p>
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
                     * 获取<p>Output result file for AIGC image generation.</p>
                     * @return OutputConfig <p>Output result file for AIGC image generation.</p>
                     * 
                     */
                    AigcImageOutputConfig GetOutputConfig() const;

                    /**
                     * 设置<p>Output result file for AIGC image generation.</p>
                     * @param _outputConfig <p>Output result file for AIGC image generation.</p>
                     * 
                     */
                    void SetOutputConfig(const AigcImageOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                    /**
                     * 获取<p>Random seed of the model.</p>
                     * @return Seed <p>Random seed of the model.</p>
                     * 
                     */
                    int64_t GetSeed() const;

                    /**
                     * 设置<p>Random seed of the model.</p>
                     * @param _seed <p>Random seed of the model.</p>
                     * 
                     */
                    void SetSeed(const int64_t& _seed);

                    /**
                     * 判断参数 Seed 是否已赋值
                     * @return Seed 是否已赋值
                     * 
                     */
                    bool SeedHasBeenSet() const;

                    /**
                     * 获取<p>Scenario type. Values as follows: <li>When ModelName is Hunyuan: 3d_panorama means Panoramic View;</li> <li>Other ModelName is not currently supported.</li></p>
                     * @return SceneType <p>Scenario type. Values as follows: <li>When ModelName is Hunyuan: 3d_panorama means Panoramic View;</li> <li>Other ModelName is not currently supported.</li></p>
                     * 
                     */
                    std::string GetSceneType() const;

                    /**
                     * 设置<p>Scenario type. Values as follows: <li>When ModelName is Hunyuan: 3d_panorama means Panoramic View;</li> <li>Other ModelName is not currently supported.</li></p>
                     * @param _sceneType <p>Scenario type. Values as follows: <li>When ModelName is Hunyuan: 3d_panorama means Panoramic View;</li> <li>Other ModelName is not currently supported.</li></p>
                     * 
                     */
                    void SetSceneType(const std::string& _sceneType);

                    /**
                     * 判断参数 SceneType 是否已赋值
                     * @return SceneType 是否已赋值
                     * 
                     */
                    bool SceneTypeHasBeenSet() const;

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
                     * <p>File information for AIGC image generation task input.</p>
                     */
                    std::vector<AigcImageTaskInputFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * <p>Prompt for image generation. Supports up to 1000 characters. This parameter is required when FileInfos is empty.</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>To prevent the model from generating images, set a prompt. Supports a maximum of 1000 characters.</p>
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * <p>Whether to optimize Prompt content automatically. When Enabled, the passed in Prompt will be optimized automatically to enhance generation quality. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li></p>
                     */
                    std::string m_enhancePrompt;
                    bool m_enhancePromptHasBeenSet;

                    /**
                     * <p>Generation mode. Valid values: <li>Standard: standard mode;</li> <li>Professional: high-quality mode;</li></p>
                     */
                    std::string m_generationMode;
                    bool m_generationModeHasBeenSet;

                    /**
                     * <p>Output result file for AIGC image generation.</p>
                     */
                    AigcImageOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                    /**
                     * <p>Random seed of the model.</p>
                     */
                    int64_t m_seed;
                    bool m_seedHasBeenSet;

                    /**
                     * <p>Scenario type. Values as follows: <li>When ModelName is Hunyuan: 3d_panorama means Panoramic View;</li> <li>Other ModelName is not currently supported.</li></p>
                     */
                    std::string m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCIMAGETASKINPUT_H_
