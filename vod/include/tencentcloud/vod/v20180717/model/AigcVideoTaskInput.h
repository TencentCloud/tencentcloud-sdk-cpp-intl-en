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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoTaskInputFileInfo.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoOutputConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Aigc video task input.
                */
                class AigcVideoTaskInput : public AbstractModel
                {
                public:
                    AigcVideoTaskInput();
                    ~AigcVideoTaskInput() = default;
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
                     * 获取File information of the input video for the AIGC video generation task. 
                     * @return FileInfos File information of the input video for the AIGC video generation task. 
                     * 
                     */
                    std::vector<AigcVideoTaskInputFileInfo> GetFileInfos() const;

                    /**
                     * 设置File information of the input video for the AIGC video generation task. 
                     * @param _fileInfos File information of the input video for the AIGC video generation task. 
                     * 
                     */
                    void SetFileInfos(const std::vector<AigcVideoTaskInputFileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取The media file ID used as the end frame to generate video. 
                     * @return LastFrameFileId The media file ID used as the end frame to generate video. 
                     * 
                     */
                    std::string GetLastFrameFileId() const;

                    /**
                     * 设置The media file ID used as the end frame to generate video. 
                     * @param _lastFrameFileId The media file ID used as the end frame to generate video. 
                     * 
                     */
                    void SetLastFrameFileId(const std::string& _lastFrameFileId);

                    /**
                     * 判断参数 LastFrameFileId 是否已赋值
                     * @return LastFrameFileId 是否已赋值
                     * 
                     */
                    bool LastFrameFileIdHasBeenSet() const;

                    /**
                     * 获取Prompt content for video generation. 
                     * @return Prompt Prompt content for video generation. 
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置Prompt content for video generation. 
                     * @param _prompt Prompt content for video generation. 
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
                     * 获取Prevent the model from generating video prompts.
                     * @return NegativePrompt Prevent the model from generating video prompts.
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置Prevent the model from generating video prompts.
                     * @param _negativePrompt Prevent the model from generating video prompts.
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
                     * 获取Whether to optimize Prompt content automatically. when Enabled, the passed-in Prompt will be optimized automatically to enhance generation quality. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>.
                     * @return EnhancePrompt Whether to optimize Prompt content automatically. when Enabled, the passed-in Prompt will be optimized automatically to enhance generation quality. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>.
                     * 
                     */
                    std::string GetEnhancePrompt() const;

                    /**
                     * 设置Whether to optimize Prompt content automatically. when Enabled, the passed-in Prompt will be optimized automatically to enhance generation quality. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>.
                     * @param _enhancePrompt Whether to optimize Prompt content automatically. when Enabled, the passed-in Prompt will be optimized automatically to enhance generation quality. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>.
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
                     * 获取
                     * @return GenerationMode 
                     * 
                     */
                    std::string GetGenerationMode() const;

                    /**
                     * 设置
                     * @param _generationMode 
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
                     * 获取Specifies the output media file configuration for the video task.
                     * @return OutputConfig Specifies the output media file configuration for the video task.
                     * 
                     */
                    AigcVideoOutputConfig GetOutputConfig() const;

                    /**
                     * 设置Specifies the output media file configuration for the video task.
                     * @param _outputConfig Specifies the output media file configuration for the video task.
                     * 
                     */
                    void SetOutputConfig(const AigcVideoOutputConfig& _outputConfig);

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
                     * File information of the input video for the AIGC video generation task. 
                     */
                    std::vector<AigcVideoTaskInputFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * The media file ID used as the end frame to generate video. 
                     */
                    std::string m_lastFrameFileId;
                    bool m_lastFrameFileIdHasBeenSet;

                    /**
                     * Prompt content for video generation. 
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * Prevent the model from generating video prompts.
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * Whether to optimize Prompt content automatically. when Enabled, the passed-in Prompt will be optimized automatically to enhance generation quality. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>.
                     */
                    std::string m_enhancePrompt;
                    bool m_enhancePromptHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_generationMode;
                    bool m_generationModeHasBeenSet;

                    /**
                     * Specifies the output media file configuration for the video task.
                     */
                    AigcVideoOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKINPUT_H_
