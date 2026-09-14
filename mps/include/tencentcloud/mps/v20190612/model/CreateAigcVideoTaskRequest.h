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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIGCVIDEOTASKREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIGCVIDEOTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AigcVideoReferenceImageInfo.h>
#include <tencentcloud/mps/v20190612/model/AigcVideoReferenceVideoInfo.h>
#include <tencentcloud/mps/v20190612/model/AigcVideoReferenceAudioInfo.h>
#include <tencentcloud/mps/v20190612/model/AigcVideoReferenceSubjectInfo.h>
#include <tencentcloud/mps/v20190612/model/AigcVideoExtraParam.h>
#include <tencentcloud/mps/v20190612/model/AigcStoreCosParam.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateAigcVideoTask request structure.
                */
                class CreateAigcVideoTaskRequest : public AbstractModel
                {
                public:
                    CreateAigcVideoTaskRequest();
                    ~CreateAigcVideoTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取
                     * @return ModelName 
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置
                     * @param _modelName 
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
                     * 获取
                     * @return ModelVersion 
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置
                     * @param _modelVersion 
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
                     * 获取
                     * @return Prompt 
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置
                     * @param _prompt 
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
                     * 获取
                     * @return NegativePrompt 
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置
                     * @param _negativePrompt 
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
                     * 获取
                     * @return EnhancePrompt 
                     * 
                     */
                    bool GetEnhancePrompt() const;

                    /**
                     * 设置
                     * @param _enhancePrompt 
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
                     * 获取
                     * @return ImageUrl 
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置
                     * @param _imageUrl 
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取
                     * @return LastImageUrl 
                     * 
                     */
                    std::string GetLastImageUrl() const;

                    /**
                     * 设置
                     * @param _lastImageUrl 
                     * 
                     */
                    void SetLastImageUrl(const std::string& _lastImageUrl);

                    /**
                     * 判断参数 LastImageUrl 是否已赋值
                     * @return LastImageUrl 是否已赋值
                     * 
                     */
                    bool LastImageUrlHasBeenSet() const;

                    /**
                     * 获取
                     * @return ImageInfos 
                     * 
                     */
                    std::vector<AigcVideoReferenceImageInfo> GetImageInfos() const;

                    /**
                     * 设置
                     * @param _imageInfos 
                     * 
                     */
                    void SetImageInfos(const std::vector<AigcVideoReferenceImageInfo>& _imageInfos);

                    /**
                     * 判断参数 ImageInfos 是否已赋值
                     * @return ImageInfos 是否已赋值
                     * 
                     */
                    bool ImageInfosHasBeenSet() const;

                    /**
                     * 获取
                     * @return VideoInfos 
                     * 
                     */
                    std::vector<AigcVideoReferenceVideoInfo> GetVideoInfos() const;

                    /**
                     * 设置
                     * @param _videoInfos 
                     * 
                     */
                    void SetVideoInfos(const std::vector<AigcVideoReferenceVideoInfo>& _videoInfos);

                    /**
                     * 判断参数 VideoInfos 是否已赋值
                     * @return VideoInfos 是否已赋值
                     * 
                     */
                    bool VideoInfosHasBeenSet() const;

                    /**
                     * 获取
                     * @return AudioInfos 
                     * 
                     */
                    std::vector<AigcVideoReferenceAudioInfo> GetAudioInfos() const;

                    /**
                     * 设置
                     * @param _audioInfos 
                     * 
                     */
                    void SetAudioInfos(const std::vector<AigcVideoReferenceAudioInfo>& _audioInfos);

                    /**
                     * 判断参数 AudioInfos 是否已赋值
                     * @return AudioInfos 是否已赋值
                     * 
                     */
                    bool AudioInfosHasBeenSet() const;

                    /**
                     * 获取<p>Entity information.</p>
                     * @return SubjectInfos <p>Entity information.</p>
                     * 
                     */
                    std::vector<AigcVideoReferenceSubjectInfo> GetSubjectInfos() const;

                    /**
                     * 设置<p>Entity information.</p>
                     * @param _subjectInfos <p>Entity information.</p>
                     * 
                     */
                    void SetSubjectInfos(const std::vector<AigcVideoReferenceSubjectInfo>& _subjectInfos);

                    /**
                     * 判断参数 SubjectInfos 是否已赋值
                     * @return SubjectInfos 是否已赋值
                     * 
                     */
                    bool SubjectInfosHasBeenSet() const;

                    /**
                     * 获取
                     * @return Duration 
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置
                     * @param _duration 
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取
                     * @return ExtraParameters 
                     * 
                     */
                    AigcVideoExtraParam GetExtraParameters() const;

                    /**
                     * 设置
                     * @param _extraParameters 
                     * 
                     */
                    void SetExtraParameters(const AigcVideoExtraParam& _extraParameters);

                    /**
                     * 判断参数 ExtraParameters 是否已赋值
                     * @return ExtraParameters 是否已赋值
                     * 
                     */
                    bool ExtraParametersHasBeenSet() const;

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
                     * @return AdditionalParameters 
                     * 
                     */
                    std::string GetAdditionalParameters() const;

                    /**
                     * 设置
                     * @param _additionalParameters 
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
                     * 
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * 
                     */
                    bool m_enhancePrompt;
                    bool m_enhancePromptHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_lastImageUrl;
                    bool m_lastImageUrlHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<AigcVideoReferenceImageInfo> m_imageInfos;
                    bool m_imageInfosHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<AigcVideoReferenceVideoInfo> m_videoInfos;
                    bool m_videoInfosHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<AigcVideoReferenceAudioInfo> m_audioInfos;
                    bool m_audioInfosHasBeenSet;

                    /**
                     * <p>Entity information.</p>
                     */
                    std::vector<AigcVideoReferenceSubjectInfo> m_subjectInfos;
                    bool m_subjectInfosHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 
                     */
                    AigcVideoExtraParam m_extraParameters;
                    bool m_extraParametersHasBeenSet;

                    /**
                     * 
                     */
                    AigcStoreCosParam m_storeCosParam;
                    bool m_storeCosParamHasBeenSet;

                    /**
                     * 
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

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIGCVIDEOTASKREQUEST_H_
