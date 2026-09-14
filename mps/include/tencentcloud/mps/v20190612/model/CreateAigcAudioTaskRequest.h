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
                     * 获取<p>Model name. Supported models for music generation: GL, MiniMaxMusic, EL, and Mureka.</p>
                     * @return ModelName <p>Model name. Supported models for music generation: GL, MiniMaxMusic, EL, and Mureka.</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>Model name. Supported models for music generation: GL, MiniMaxMusic, EL, and Mureka.</p>
                     * @param _modelName <p>Model name. Supported models for music generation: GL, MiniMaxMusic, EL, and Mureka.</p>
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
                     * 获取<p>Specifies the model version. By default, the system uses the supported stable version of the model. Supported versions for GL: 3.0-clip and 3.0-pro. Supported versions for MiniMaxMusic: 2.0, 2.5, 2.6, and 3.0. Supported versions for EL: compose_v2 and sound_t2s_v2. Supported versions for Mureka: song_8, song_9, song_9.5, instrumental_8, instrumental_9, and instrumental_9.5.</p>
                     * @return ModelVersion <p>Specifies the model version. By default, the system uses the supported stable version of the model. Supported versions for GL: 3.0-clip and 3.0-pro. Supported versions for MiniMaxMusic: 2.0, 2.5, 2.6, and 3.0. Supported versions for EL: compose_v2 and sound_t2s_v2. Supported versions for Mureka: song_8, song_9, song_9.5, instrumental_8, instrumental_9, and instrumental_9.5.</p>
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置<p>Specifies the model version. By default, the system uses the supported stable version of the model. Supported versions for GL: 3.0-clip and 3.0-pro. Supported versions for MiniMaxMusic: 2.0, 2.5, 2.6, and 3.0. Supported versions for EL: compose_v2 and sound_t2s_v2. Supported versions for Mureka: song_8, song_9, song_9.5, instrumental_8, instrumental_9, and instrumental_9.5.</p>
                     * @param _modelVersion <p>Specifies the model version. By default, the system uses the supported stable version of the model. Supported versions for GL: 3.0-clip and 3.0-pro. Supported versions for MiniMaxMusic: 2.0, 2.5, 2.6, and 3.0. Supported versions for EL: compose_v2 and sound_t2s_v2. Supported versions for Mureka: song_8, song_9, song_9.5, instrumental_8, instrumental_9, and instrumental_9.5.</p>
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
                     * 获取
                     * @return SceneType 
                     * 
                     */
                    std::string GetSceneType() const;

                    /**
                     * 设置
                     * @param _sceneType 
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
                     * 获取<p>Description of the generated music. (Note: supports up to 2,000 characters).</p>
                     * @return Prompt <p>Description of the generated music. (Note: supports up to 2,000 characters).</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>Description of the generated music. (Note: supports up to 2,000 characters).</p>
                     * @param _prompt <p>Description of the generated music. (Note: supports up to 2,000 characters).</p>
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
                     * 获取<p>Reference video information. Only partially supported by some models.</p><ol><li>Kling generates sound effects for videos.</li><li>EL adds background music to videos.</li></ol>
                     * @return VideoInfos <p>Reference video information. Only partially supported by some models.</p><ol><li>Kling generates sound effects for videos.</li><li>EL adds background music to videos.</li></ol>
                     * 
                     */
                    std::vector<AigcAudioReferenceVideoInfo> GetVideoInfos() const;

                    /**
                     * 设置<p>Reference video information. Only partially supported by some models.</p><ol><li>Kling generates sound effects for videos.</li><li>EL adds background music to videos.</li></ol>
                     * @param _videoInfos <p>Reference video information. Only partially supported by some models.</p><ol><li>Kling generates sound effects for videos.</li><li>EL adds background music to videos.</li></ol>
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
                     * 获取<p>Specify the reference audio information.</p><ol><li>Use of the cover feature in MiniMaxMusic.</li></ol><p>For example, this is required for music generation.</p>
                     * @return AudioInfos <p>Specify the reference audio information.</p><ol><li>Use of the cover feature in MiniMaxMusic.</li></ol><p>For example, this is required for music generation.</p>
                     * 
                     */
                    std::vector<AigcAudioReferenceAudioInfo> GetAudioInfos() const;

                    /**
                     * 设置<p>Specify the reference audio information.</p><ol><li>Use of the cover feature in MiniMaxMusic.</li></ol><p>For example, this is required for music generation.</p>
                     * @param _audioInfos <p>Specify the reference audio information.</p><ol><li>Use of the cover feature in MiniMaxMusic.</li></ol><p>For example, this is required for music generation.</p>
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
                     * 获取
                     * @return StoreCosParam 
                     * 
                     */
                    AigcStoreCosParam GetStoreCosParam() const;

                    /**
                     * 设置
                     * @param _storeCosParam 
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
                     * 获取
                     * @return ExtraParameters 
                     * 
                     */
                    AigcAudioExtraParam GetExtraParameters() const;

                    /**
                     * 设置
                     * @param _extraParameters 
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
                     * 获取<p>Used to pass in some special scene parameters required by the model, serialized into strings in Json format. <br>Example MinimaxMusic model When lyrics are passed in:<br> {"lyric":{"ponies are running happily, flowers are blooming"}}</p><ol><li>MiniMaxMusic raw pure music parameters use example:&quot; AdditionalParameters&quot;:&quot; {"is_instrumental":true}&quot;. <br>Supported transparent transmission parameters are: lyrics, is_instrumental, aigc_watermark, sample_rate, bitrate. </li><li>EL Health Music supports transparent transmission parameters:<br> PromptInfluence, WithTimestamps, CompositionPlan, ForceInstrumental and other parameters. </li></ol>
                     * @return AdditionalParameters <p>Used to pass in some special scene parameters required by the model, serialized into strings in Json format. <br>Example MinimaxMusic model When lyrics are passed in:<br> {"lyric":{"ponies are running happily, flowers are blooming"}}</p><ol><li>MiniMaxMusic raw pure music parameters use example:&quot; AdditionalParameters&quot;:&quot; {"is_instrumental":true}&quot;. <br>Supported transparent transmission parameters are: lyrics, is_instrumental, aigc_watermark, sample_rate, bitrate. </li><li>EL Health Music supports transparent transmission parameters:<br> PromptInfluence, WithTimestamps, CompositionPlan, ForceInstrumental and other parameters. </li></ol>
                     * 
                     */
                    std::string GetAdditionalParameters() const;

                    /**
                     * 设置<p>Used to pass in some special scene parameters required by the model, serialized into strings in Json format. <br>Example MinimaxMusic model When lyrics are passed in:<br> {"lyric":{"ponies are running happily, flowers are blooming"}}</p><ol><li>MiniMaxMusic raw pure music parameters use example:&quot; AdditionalParameters&quot;:&quot; {"is_instrumental":true}&quot;. <br>Supported transparent transmission parameters are: lyrics, is_instrumental, aigc_watermark, sample_rate, bitrate. </li><li>EL Health Music supports transparent transmission parameters:<br> PromptInfluence, WithTimestamps, CompositionPlan, ForceInstrumental and other parameters. </li></ol>
                     * @param _additionalParameters <p>Used to pass in some special scene parameters required by the model, serialized into strings in Json format. <br>Example MinimaxMusic model When lyrics are passed in:<br> {"lyric":{"ponies are running happily, flowers are blooming"}}</p><ol><li>MiniMaxMusic raw pure music parameters use example:&quot; AdditionalParameters&quot;:&quot; {"is_instrumental":true}&quot;. <br>Supported transparent transmission parameters are: lyrics, is_instrumental, aigc_watermark, sample_rate, bitrate. </li><li>EL Health Music supports transparent transmission parameters:<br> PromptInfluence, WithTimestamps, CompositionPlan, ForceInstrumental and other parameters. </li></ol>
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
                     * 获取
                     * @return Operator 
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置
                     * @param _operator 
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
                     * <p>Model name. Supported models for music generation: GL, MiniMaxMusic, EL, and Mureka.</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>Specifies the model version. By default, the system uses the supported stable version of the model. Supported versions for GL: 3.0-clip and 3.0-pro. Supported versions for MiniMaxMusic: 2.0, 2.5, 2.6, and 3.0. Supported versions for EL: compose_v2 and sound_t2s_v2. Supported versions for Mureka: song_8, song_9, song_9.5, instrumental_8, instrumental_9, and instrumental_9.5.</p>
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * <p>Description of the generated music. (Note: supports up to 2,000 characters).</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>Reference video information. Only partially supported by some models.</p><ol><li>Kling generates sound effects for videos.</li><li>EL adds background music to videos.</li></ol>
                     */
                    std::vector<AigcAudioReferenceVideoInfo> m_videoInfos;
                    bool m_videoInfosHasBeenSet;

                    /**
                     * <p>Specify the reference audio information.</p><ol><li>Use of the cover feature in MiniMaxMusic.</li></ol><p>For example, this is required for music generation.</p>
                     */
                    std::vector<AigcAudioReferenceAudioInfo> m_audioInfos;
                    bool m_audioInfosHasBeenSet;

                    /**
                     * 
                     */
                    AigcStoreCosParam m_storeCosParam;
                    bool m_storeCosParamHasBeenSet;

                    /**
                     * 
                     */
                    AigcAudioExtraParam m_extraParameters;
                    bool m_extraParametersHasBeenSet;

                    /**
                     * <p>Used to pass in some special scene parameters required by the model, serialized into strings in Json format. <br>Example MinimaxMusic model When lyrics are passed in:<br> {"lyric":{"ponies are running happily, flowers are blooming"}}</p><ol><li>MiniMaxMusic raw pure music parameters use example:&quot; AdditionalParameters&quot;:&quot; {"is_instrumental":true}&quot;. <br>Supported transparent transmission parameters are: lyrics, is_instrumental, aigc_watermark, sample_rate, bitrate. </li><li>EL Health Music supports transparent transmission parameters:<br> PromptInfluence, WithTimestamps, CompositionPlan, ForceInstrumental and other parameters. </li></ol>
                     */
                    std::string m_additionalParameters;
                    bool m_additionalParametersHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIGCAUDIOTASKREQUEST_H_
