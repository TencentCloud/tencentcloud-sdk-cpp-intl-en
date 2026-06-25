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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIGCAUDIOTASKREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIGCAUDIOTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AigcAudioReferenceVideoInfo.h>
#include <tencentcloud/mps/v20190612/model/AigcAudioReferenceAudioInfo.h>
#include <tencentcloud/mps/v20190612/model/AigcStoreCosParam.h>
#include <tencentcloud/mps/v20190612/model/AigcAudioExtraParam.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateAigcAudioTask request structure.
                */
                class CreateAigcAudioTaskRequest : public AbstractModel
                {
                public:
                    CreateAigcAudioTaskRequest();
                    ~CreateAigcAudioTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Model name. Currently supported models for music generation: GL, MinimaxMusic.Example value: MiniMaxMusic
                     * @return ModelName Model name. Currently supported models for music generation: GL, MinimaxMusic.Example value: MiniMaxMusic
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置Model name. Currently supported models for music generation: GL, MinimaxMusic.Example value: MiniMaxMusic
                     * @param _modelName Model name. Currently supported models for music generation: GL, MinimaxMusic.Example value: MiniMaxMusic
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
                     * 获取Specifies the model version. By default, the system uses the supported stable version of the model.Supported versions for GL: 2.0, 3.0-clip, 3.0-pro.Supported versions for MinimaxMusic: 2.0, 2.5, 2.6.Example value: 2.0
                     * @return ModelVersion Specifies the model version. By default, the system uses the supported stable version of the model.Supported versions for GL: 2.0, 3.0-clip, 3.0-pro.Supported versions for MinimaxMusic: 2.0, 2.5, 2.6.Example value: 2.0
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置Specifies the model version. By default, the system uses the supported stable version of the model.Supported versions for GL: 2.0, 3.0-clip, 3.0-pro.Supported versions for MinimaxMusic: 2.0, 2.5, 2.6.Example value: 2.0
                     * @param _modelVersion Specifies the model version. By default, the system uses the supported stable version of the model.Supported versions for GL: 2.0, 3.0-clip, 3.0-pro.Supported versions for MinimaxMusic: 2.0, 2.5, 2.6.Example value: 2.0
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
                     * 获取Specifies the audio generation scene. Music: music.Example value: music
                     * @return SceneType Specifies the audio generation scene. Music: music.Example value: music
                     * 
                     */
                    std::string GetSceneType() const;

                    /**
                     * 设置Specifies the audio generation scene. Music: music.Example value: music
                     * @param _sceneType Specifies the audio generation scene. Music: music.Example value: music
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
                     * 获取Description of the generated audio. (Note: Supports up to 2000 characters.) This parameter is required when no reference image is passed in.Example value: generate a piece of music
                     * @return Prompt Description of the generated audio. (Note: Supports up to 2000 characters.) This parameter is required when no reference image is passed in.Example value: generate a piece of music
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置Description of the generated audio. (Note: Supports up to 2000 characters.) This parameter is required when no reference image is passed in.Example value: generate a piece of music
                     * @param _prompt Description of the generated audio. (Note: Supports up to 2000 characters.) This parameter is required when no reference image is passed in.Example value: generate a piece of music
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
                     * 获取Reference video information. Only supported by certain models.
                     * @return VideoInfos Reference video information. Only supported by certain models.
                     * 
                     */
                    std::vector<AigcAudioReferenceVideoInfo> GetVideoInfos() const;

                    /**
                     * 设置Reference video information. Only supported by certain models.
                     * @param _videoInfos Reference video information. Only supported by certain models.
                     * 
                     */
                    void SetVideoInfos(const std::vector<AigcAudioReferenceVideoInfo>& _videoInfos);

                    /**
                     * 判断参数 VideoInfos 是否已赋值
                     * @return VideoInfos 是否已赋值
                     * 
                     */
                    bool VideoInfosHasBeenSet() const;

                    /**
                     * 获取Reference audio information.For example, this parameter is required when generating music from a reference audio.
                     * @return AudioInfos Reference audio information.For example, this parameter is required when generating music from a reference audio.
                     * 
                     */
                    std::vector<AigcAudioReferenceAudioInfo> GetAudioInfos() const;

                    /**
                     * 设置Reference audio information.For example, this parameter is required when generating music from a reference audio.
                     * @param _audioInfos Reference audio information.For example, this parameter is required when generating music from a reference audio.
                     * 
                     */
                    void SetAudioInfos(const std::vector<AigcAudioReferenceAudioInfo>& _audioInfos);

                    /**
                     * 判断参数 AudioInfos 是否已赋值
                     * @return AudioInfos 是否已赋值
                     * 
                     */
                    bool AudioInfosHasBeenSet() const;

                    /**
                     * 获取Output audio format. Empty by default. Supported values: mp3, wav.Example value: wav
                     * @return OutputAudioFormat Output audio format. Empty by default. Supported values: mp3, wav.Example value: wav
                     * 
                     */
                    std::string GetOutputAudioFormat() const;

                    /**
                     * 设置Output audio format. Empty by default. Supported values: mp3, wav.Example value: wav
                     * @param _outputAudioFormat Output audio format. Empty by default. Supported values: mp3, wav.Example value: wav
                     * 
                     */
                    void SetOutputAudioFormat(const std::string& _outputAudioFormat);

                    /**
                     * 判断参数 OutputAudioFormat 是否已赋值
                     * @return OutputAudioFormat 是否已赋值
                     * 
                     */
                    bool OutputAudioFormatHasBeenSet() const;

                    /**
                     * 获取COS bucket information for the file result. Note: COS is required and the MPS_QcsRole role needs to be created and authorized.
                     * @return StoreCosParam COS bucket information for the file result. Note: COS is required and the MPS_QcsRole role needs to be created and authorized.
                     * 
                     */
                    AigcStoreCosParam GetStoreCosParam() const;

                    /**
                     * 设置COS bucket information for the file result. Note: COS is required and the MPS_QcsRole role needs to be created and authorized.
                     * @param _storeCosParam COS bucket information for the file result. Note: COS is required and the MPS_QcsRole role needs to be created and authorized.
                     * 
                     */
                    void SetStoreCosParam(const AigcStoreCosParam& _storeCosParam);

                    /**
                     * 判断参数 StoreCosParam 是否已赋值
                     * @return StoreCosParam 是否已赋值
                     * 
                     */
                    bool StoreCosParamHasBeenSet() const;

                    /**
                     * 获取Additional parameters required for the model.
                     * @return ExtraParameters Additional parameters required for the model.
                     * 
                     */
                    AigcAudioExtraParam GetExtraParameters() const;

                    /**
                     * 设置Additional parameters required for the model.
                     * @param _extraParameters Additional parameters required for the model.
                     * 
                     */
                    void SetExtraParameters(const AigcAudioExtraParam& _extraParameters);

                    /**
                     * 判断参数 ExtraParameters 是否已赋值
                     * @return ExtraParameters 是否已赋值
                     * 
                     */
                    bool ExtraParametersHasBeenSet() const;

                    /**
                     * 获取Used to input some special scene parameters required by the model, serialized into a string in JSON format.Example: when passing lyrics to the MinimaxMusic model:{"lyric":{"The pony runs happily, flowers are blooming"}}Example value: {"sequential_image_generation":"auto"}
                     * @return AdditionalParameters Used to input some special scene parameters required by the model, serialized into a string in JSON format.Example: when passing lyrics to the MinimaxMusic model:{"lyric":{"The pony runs happily, flowers are blooming"}}Example value: {"sequential_image_generation":"auto"}
                     * 
                     */
                    std::string GetAdditionalParameters() const;

                    /**
                     * 设置Used to input some special scene parameters required by the model, serialized into a string in JSON format.Example: when passing lyrics to the MinimaxMusic model:{"lyric":{"The pony runs happily, flowers are blooming"}}Example value: {"sequential_image_generation":"auto"}
                     * @param _additionalParameters Used to input some special scene parameters required by the model, serialized into a string in JSON format.Example: when passing lyrics to the MinimaxMusic model:{"lyric":{"The pony runs happily, flowers are blooming"}}Example value: {"sequential_image_generation":"auto"}
                     * 
                     */
                    void SetAdditionalParameters(const std::string& _additionalParameters);

                    /**
                     * 判断参数 AdditionalParameters 是否已赋值
                     * @return AdditionalParameters 是否已赋值
                     * 
                     */
                    bool AdditionalParametersHasBeenSet() const;

                    /**
                     * 获取API operator name.Example value: admin
                     * @return Operator API operator name.Example value: admin
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置API operator name.Example value: admin
                     * @param _operator API operator name.Example value: admin
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * Model name. Currently supported models for music generation: GL, MinimaxMusic.Example value: MiniMaxMusic
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * Specifies the model version. By default, the system uses the supported stable version of the model.Supported versions for GL: 2.0, 3.0-clip, 3.0-pro.Supported versions for MinimaxMusic: 2.0, 2.5, 2.6.Example value: 2.0
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * Specifies the audio generation scene. Music: music.Example value: music
                     */
                    std::string m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * Description of the generated audio. (Note: Supports up to 2000 characters.) This parameter is required when no reference image is passed in.Example value: generate a piece of music
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * Reference video information. Only supported by certain models.
                     */
                    std::vector<AigcAudioReferenceVideoInfo> m_videoInfos;
                    bool m_videoInfosHasBeenSet;

                    /**
                     * Reference audio information.For example, this parameter is required when generating music from a reference audio.
                     */
                    std::vector<AigcAudioReferenceAudioInfo> m_audioInfos;
                    bool m_audioInfosHasBeenSet;

                    /**
                     * Output audio format. Empty by default. Supported values: mp3, wav.Example value: wav
                     */
                    std::string m_outputAudioFormat;
                    bool m_outputAudioFormatHasBeenSet;

                    /**
                     * COS bucket information for the file result. Note: COS is required and the MPS_QcsRole role needs to be created and authorized.
                     */
                    AigcStoreCosParam m_storeCosParam;
                    bool m_storeCosParamHasBeenSet;

                    /**
                     * Additional parameters required for the model.
                     */
                    AigcAudioExtraParam m_extraParameters;
                    bool m_extraParametersHasBeenSet;

                    /**
                     * Used to input some special scene parameters required by the model, serialized into a string in JSON format.Example: when passing lyrics to the MinimaxMusic model:{"lyric":{"The pony runs happily, flowers are blooming"}}Example value: {"sequential_image_generation":"auto"}
                     */
                    std::string m_additionalParameters;
                    bool m_additionalParametersHasBeenSet;

                    /**
                     * API operator name.Example value: admin
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIGCAUDIOTASKREQUEST_H_
