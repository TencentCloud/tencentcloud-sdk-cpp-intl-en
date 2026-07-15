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
                     * 获取<p>Model name. Supported models for music generation: GL and MiniMaxMusic.</p>
                     * @return ModelName <p>Model name. Supported models for music generation: GL and MiniMaxMusic.</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>Model name. Supported models for music generation: GL and MiniMaxMusic.</p>
                     * @param _modelName <p>Model name. Supported models for music generation: GL and MiniMaxMusic.</p>
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
                     * 获取<p>Specifies the model version. By default, the system uses the supported stable version of the model.<br>Supported versions for GL: 3.0-clip and 3.0-pro.<br>Supported versions for MinimaxMusic: 2.0, 2.5, and 2.6.</p>
                     * @return ModelVersion <p>Specifies the model version. By default, the system uses the supported stable version of the model.<br>Supported versions for GL: 3.0-clip and 3.0-pro.<br>Supported versions for MinimaxMusic: 2.0, 2.5, and 2.6.</p>
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置<p>Specifies the model version. By default, the system uses the supported stable version of the model.<br>Supported versions for GL: 3.0-clip and 3.0-pro.<br>Supported versions for MinimaxMusic: 2.0, 2.5, and 2.6.</p>
                     * @param _modelVersion <p>Specifies the model version. By default, the system uses the supported stable version of the model.<br>Supported versions for GL: 3.0-clip and 3.0-pro.<br>Supported versions for MinimaxMusic: 2.0, 2.5, and 2.6.</p>
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
                     * 获取<p>Specifies the scenario for audio generation. Music: music.</p>
                     * @return SceneType <p>Specifies the scenario for audio generation. Music: music.</p>
                     * 
                     */
                    std::string GetSceneType() const;

                    /**
                     * 设置<p>Specifies the scenario for audio generation. Music: music.</p>
                     * @param _sceneType <p>Specifies the scenario for audio generation. Music: music.</p>
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
                     * 获取<p>Description of the generated video. (Note: A maximum of 2000 characters is supported.) This parameter is required when no reference image is specified.</p>
                     * @return Prompt <p>Description of the generated video. (Note: A maximum of 2000 characters is supported.) This parameter is required when no reference image is specified.</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>Description of the generated video. (Note: A maximum of 2000 characters is supported.) This parameter is required when no reference image is specified.</p>
                     * @param _prompt <p>Description of the generated video. (Note: A maximum of 2000 characters is supported.) This parameter is required when no reference image is specified.</p>
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
                     * 获取<p>Reference video information, which is supported by some models.</p>
                     * @return VideoInfos <p>Reference video information, which is supported by some models.</p>
                     * 
                     */
                    std::vector<AigcAudioReferenceVideoInfo> GetVideoInfos() const;

                    /**
                     * 设置<p>Reference video information, which is supported by some models.</p>
                     * @param _videoInfos <p>Reference video information, which is supported by some models.</p>
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
                     * 获取<p>Specify the reference audio information.</p><p>For example, this is required for music generation.</p>
                     * @return AudioInfos <p>Specify the reference audio information.</p><p>For example, this is required for music generation.</p>
                     * 
                     */
                    std::vector<AigcAudioReferenceAudioInfo> GetAudioInfos() const;

                    /**
                     * 设置<p>Specify the reference audio information.</p><p>For example, this is required for music generation.</p>
                     * @param _audioInfos <p>Specify the reference audio information.</p><p>For example, this is required for music generation.</p>
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
                     * 获取<p>Output audio format. By default, this is not specified. Valid values: mp3 and wav.</p>
                     * @return OutputAudioFormat <p>Output audio format. By default, this is not specified. Valid values: mp3 and wav.</p>
                     * 
                     */
                    std::string GetOutputAudioFormat() const;

                    /**
                     * 设置<p>Output audio format. By default, this is not specified. Valid values: mp3 and wav.</p>
                     * @param _outputAudioFormat <p>Output audio format. By default, this is not specified. Valid values: mp3 and wav.</p>
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
                     * 获取<p>COS bucket information for the file result. Note: COS is required and the MPS_QcsRole role needs to be created and authorized.</p>
                     * @return StoreCosParam <p>COS bucket information for the file result. Note: COS is required and the MPS_QcsRole role needs to be created and authorized.</p>
                     * 
                     */
                    AigcStoreCosParam GetStoreCosParam() const;

                    /**
                     * 设置<p>COS bucket information for the file result. Note: COS is required and the MPS_QcsRole role needs to be created and authorized.</p>
                     * @param _storeCosParam <p>COS bucket information for the file result. Note: COS is required and the MPS_QcsRole role needs to be created and authorized.</p>
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
                     * 获取<p>Additional parameters required.</p>
                     * @return ExtraParameters <p>Additional parameters required.</p>
                     * 
                     */
                    AigcAudioExtraParam GetExtraParameters() const;

                    /**
                     * 设置<p>Additional parameters required.</p>
                     * @param _extraParameters <p>Additional parameters required.</p>
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
                     * 获取<p>This is used to specify special scenario parameters required by the model, in the format of a serialized JSON string.<br>Example to specify lyrics for the MinimaxMusic model:<br>{"lyric":{"The pony is running with joy. The flowers are blooming."}}</p>
                     * @return AdditionalParameters <p>This is used to specify special scenario parameters required by the model, in the format of a serialized JSON string.<br>Example to specify lyrics for the MinimaxMusic model:<br>{"lyric":{"The pony is running with joy. The flowers are blooming."}}</p>
                     * 
                     */
                    std::string GetAdditionalParameters() const;

                    /**
                     * 设置<p>This is used to specify special scenario parameters required by the model, in the format of a serialized JSON string.<br>Example to specify lyrics for the MinimaxMusic model:<br>{"lyric":{"The pony is running with joy. The flowers are blooming."}}</p>
                     * @param _additionalParameters <p>This is used to specify special scenario parameters required by the model, in the format of a serialized JSON string.<br>Example to specify lyrics for the MinimaxMusic model:<br>{"lyric":{"The pony is running with joy. The flowers are blooming."}}</p>
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
                     * 获取<p>API operator name.</p>
                     * @return Operator <p>API operator name.</p>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置<p>API operator name.</p>
                     * @param _operator <p>API operator name.</p>
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
                     * <p>Model name. Supported models for music generation: GL and MiniMaxMusic.</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>Specifies the model version. By default, the system uses the supported stable version of the model.<br>Supported versions for GL: 3.0-clip and 3.0-pro.<br>Supported versions for MinimaxMusic: 2.0, 2.5, and 2.6.</p>
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * <p>Specifies the scenario for audio generation. Music: music.</p>
                     */
                    std::string m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * <p>Description of the generated video. (Note: A maximum of 2000 characters is supported.) This parameter is required when no reference image is specified.</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>Reference video information, which is supported by some models.</p>
                     */
                    std::vector<AigcAudioReferenceVideoInfo> m_videoInfos;
                    bool m_videoInfosHasBeenSet;

                    /**
                     * <p>Specify the reference audio information.</p><p>For example, this is required for music generation.</p>
                     */
                    std::vector<AigcAudioReferenceAudioInfo> m_audioInfos;
                    bool m_audioInfosHasBeenSet;

                    /**
                     * <p>Output audio format. By default, this is not specified. Valid values: mp3 and wav.</p>
                     */
                    std::string m_outputAudioFormat;
                    bool m_outputAudioFormatHasBeenSet;

                    /**
                     * <p>COS bucket information for the file result. Note: COS is required and the MPS_QcsRole role needs to be created and authorized.</p>
                     */
                    AigcStoreCosParam m_storeCosParam;
                    bool m_storeCosParamHasBeenSet;

                    /**
                     * <p>Additional parameters required.</p>
                     */
                    AigcAudioExtraParam m_extraParameters;
                    bool m_extraParametersHasBeenSet;

                    /**
                     * <p>This is used to specify special scenario parameters required by the model, in the format of a serialized JSON string.<br>Example to specify lyrics for the MinimaxMusic model:<br>{"lyric":{"The pony is running with joy. The flowers are blooming."}}</p>
                     */
                    std::string m_additionalParameters;
                    bool m_additionalParametersHasBeenSet;

                    /**
                     * <p>API operator name.</p>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIGCAUDIOTASKREQUEST_H_
