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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIGCIMAGETASKREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIGCIMAGETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AigcImageInfo.h>
#include <tencentcloud/mps/v20190612/model/AigcImageExtraParam.h>
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
                * CreateAigcImageTask request structure.
                */
                class CreateAigcImageTaskRequest : public AbstractModel
                {
                public:
                    CreateAigcImageTaskRequest();
                    ~CreateAigcImageTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Model name.<br>Supported models:<br>Hunyuan.<br>Qwen.<br>Vidu.<br>Kling.<br>MJ.</p>
                     * @return ModelName <p>Model name.<br>Supported models:<br>Hunyuan.<br>Qwen.<br>Vidu.<br>Kling.<br>MJ.</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>Model name.<br>Supported models:<br>Hunyuan.<br>Qwen.<br>Vidu.<br>Kling.<br>MJ.</p>
                     * @param _modelName <p>Model name.<br>Supported models:<br>Hunyuan.<br>Qwen.<br>Vidu.<br>Kling.<br>MJ.</p>
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
                     * 获取<p>Specific version number of the model. By default, the system uses the supported stable version of the model.</p><ol><li>Hunyuan: [3.0].</li><li>Vidu: [q2].</li><li>Kling: [2.1, O1, 3.0, and 3.0-Omni].</li><li>Qwen: [0925].</li><li>MJ: [v7].</li></ol>
                     * @return ModelVersion <p>Specific version number of the model. By default, the system uses the supported stable version of the model.</p><ol><li>Hunyuan: [3.0].</li><li>Vidu: [q2].</li><li>Kling: [2.1, O1, 3.0, and 3.0-Omni].</li><li>Qwen: [0925].</li><li>MJ: [v7].</li></ol>
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置<p>Specific version number of the model. By default, the system uses the supported stable version of the model.</p><ol><li>Hunyuan: [3.0].</li><li>Vidu: [q2].</li><li>Kling: [2.1, O1, 3.0, and 3.0-Omni].</li><li>Qwen: [0925].</li><li>MJ: [v7].</li></ol>
                     * @param _modelVersion <p>Specific version number of the model. By default, the system uses the supported stable version of the model.</p><ol><li>Hunyuan: [3.0].</li><li>Vidu: [q2].</li><li>Kling: [2.1, O1, 3.0, and 3.0-Omni].</li><li>Qwen: [0925].</li><li>MJ: [v7].</li></ol>
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
                     * 获取<p>Used for scene-based image generation; only supported by some models.</p><p>Enumeration value:</p><ul><li>3d_panorama: panoramic view. Only Hunyuan supports this.</li></ul>
                     * @return SceneType <p>Used for scene-based image generation; only supported by some models.</p><p>Enumeration value:</p><ul><li>3d_panorama: panoramic view. Only Hunyuan supports this.</li></ul>
                     * 
                     */
                    std::string GetSceneType() const;

                    /**
                     * 设置<p>Used for scene-based image generation; only supported by some models.</p><p>Enumeration value:</p><ul><li>3d_panorama: panoramic view. Only Hunyuan supports this.</li></ul>
                     * @param _sceneType <p>Used for scene-based image generation; only supported by some models.</p><p>Enumeration value:</p><ul><li>3d_panorama: panoramic view. Only Hunyuan supports this.</li></ul>
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
                     * 获取<p>Description of the generated image. This parameter is required when no reference image is specified.</p>
                     * @return Prompt <p>Description of the generated image. This parameter is required when no reference image is specified.</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>Description of the generated image. This parameter is required when no reference image is specified.</p>
                     * @param _prompt <p>Description of the generated image. This parameter is required when no reference image is specified.</p>
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
                     * 获取<p>Specifies the content you want to prevent the model from generating. Note: Not all models support this.</p><p>For example: top lighting, bright colors, people, animals, multiple vehicles, and wind.</p>
                     * @return NegativePrompt <p>Specifies the content you want to prevent the model from generating. Note: Not all models support this.</p><p>For example: top lighting, bright colors, people, animals, multiple vehicles, and wind.</p>
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置<p>Specifies the content you want to prevent the model from generating. Note: Not all models support this.</p><p>For example: top lighting, bright colors, people, animals, multiple vehicles, and wind.</p>
                     * @param _negativePrompt <p>Specifies the content you want to prevent the model from generating. Note: Not all models support this.</p><p>For example: top lighting, bright colors, people, animals, multiple vehicles, and wind.</p>
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
                     * 获取<p>The default value is False, meaning the model follows instructions strictly.<br>For better results with more nuanced prompts, set this parameter to True to automatically optimize the input prompt and improve generation quality.</p>
                     * @return EnhancePrompt <p>The default value is False, meaning the model follows instructions strictly.<br>For better results with more nuanced prompts, set this parameter to True to automatically optimize the input prompt and improve generation quality.</p>
                     * 
                     */
                    bool GetEnhancePrompt() const;

                    /**
                     * 设置<p>The default value is False, meaning the model follows instructions strictly.<br>For better results with more nuanced prompts, set this parameter to True to automatically optimize the input prompt and improve generation quality.</p>
                     * @param _enhancePrompt <p>The default value is False, meaning the model follows instructions strictly.<br>For better results with more nuanced prompts, set this parameter to True to automatically optimize the input prompt and improve generation quality.</p>
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
                     * 获取<p>Reference resource images. By default, one image can be specified.</p><p>Models supporting multiple images:</p><ol><li>Kling 2.1 supports up to 4 images as resource image input.</li><li>Kling 3.0-Omni supports up to 10 images as resource image input.</li><li>Kling O1 supports up to 10 images as resource image input.</li><li>Vidu q2 supports up to 7 images as resource image input.</li><li>Hunyuan 3.0 supports up to 3 images as resource image input.</li><li>MJ v7 supports up to 3 images as resource image input.</li></ol><p>Note:</p><ol><li>The recommended image size is less than 7 MB. Different models have different limits.</li><li>Supported image formats: JPEG, PNG, and WebP.</li></ol>
                     * @return ImageInfos <p>Reference resource images. By default, one image can be specified.</p><p>Models supporting multiple images:</p><ol><li>Kling 2.1 supports up to 4 images as resource image input.</li><li>Kling 3.0-Omni supports up to 10 images as resource image input.</li><li>Kling O1 supports up to 10 images as resource image input.</li><li>Vidu q2 supports up to 7 images as resource image input.</li><li>Hunyuan 3.0 supports up to 3 images as resource image input.</li><li>MJ v7 supports up to 3 images as resource image input.</li></ol><p>Note:</p><ol><li>The recommended image size is less than 7 MB. Different models have different limits.</li><li>Supported image formats: JPEG, PNG, and WebP.</li></ol>
                     * 
                     */
                    std::vector<AigcImageInfo> GetImageInfos() const;

                    /**
                     * 设置<p>Reference resource images. By default, one image can be specified.</p><p>Models supporting multiple images:</p><ol><li>Kling 2.1 supports up to 4 images as resource image input.</li><li>Kling 3.0-Omni supports up to 10 images as resource image input.</li><li>Kling O1 supports up to 10 images as resource image input.</li><li>Vidu q2 supports up to 7 images as resource image input.</li><li>Hunyuan 3.0 supports up to 3 images as resource image input.</li><li>MJ v7 supports up to 3 images as resource image input.</li></ol><p>Note:</p><ol><li>The recommended image size is less than 7 MB. Different models have different limits.</li><li>Supported image formats: JPEG, PNG, and WebP.</li></ol>
                     * @param _imageInfos <p>Reference resource images. By default, one image can be specified.</p><p>Models supporting multiple images:</p><ol><li>Kling 2.1 supports up to 4 images as resource image input.</li><li>Kling 3.0-Omni supports up to 10 images as resource image input.</li><li>Kling O1 supports up to 10 images as resource image input.</li><li>Vidu q2 supports up to 7 images as resource image input.</li><li>Hunyuan 3.0 supports up to 3 images as resource image input.</li><li>MJ v7 supports up to 3 images as resource image input.</li></ol><p>Note:</p><ol><li>The recommended image size is less than 7 MB. Different models have different limits.</li><li>Supported image formats: JPEG, PNG, and WebP.</li></ol>
                     * 
                     */
                    void SetImageInfos(const std::vector<AigcImageInfo>& _imageInfos);

                    /**
                     * 判断参数 ImageInfos 是否已赋值
                     * @return ImageInfos 是否已赋值
                     * 
                     */
                    bool ImageInfosHasBeenSet() const;

                    /**
                     * 获取
                     * @return OutputImageCount 
                     * 
                     */
                    int64_t GetOutputImageCount() const;

                    /**
                     * 设置
                     * @param _outputImageCount 
                     * 
                     */
                    void SetOutputImageCount(const int64_t& _outputImageCount);

                    /**
                     * 判断参数 OutputImageCount 是否已赋值
                     * @return OutputImageCount 是否已赋值
                     * 
                     */
                    bool OutputImageCountHasBeenSet() const;

                    /**
                     * 获取<p>Additional parameters required for the model.</p>
                     * @return ExtraParameters <p>Additional parameters required for the model.</p>
                     * 
                     */
                    AigcImageExtraParam GetExtraParameters() const;

                    /**
                     * 设置<p>Additional parameters required for the model.</p>
                     * @param _extraParameters <p>Additional parameters required for the model.</p>
                     * 
                     */
                    void SetExtraParameters(const AigcImageExtraParam& _extraParameters);

                    /**
                     * 判断参数 ExtraParameters 是否已赋值
                     * @return ExtraParameters 是否已赋值
                     * 
                     */
                    bool ExtraParametersHasBeenSet() const;

                    /**
                     * 获取<p>Special scenario parameters required by the model, formatted as a JSON serialized string.</p><ol><li>Hunyuan 3.0 supports freely setting resolution width and height within [512, 2048] pixels, with the product of width and height less than or equal to 1024x1024 pixels.</li><li>Qwen 0925 supports freely setting resolution width and height, with a valid total pixel range of [512x512=261632, 2048x2048=4194304].</li></ol><p>Example: {"size":"1024x1024"}.</p>
                     * @return AdditionalParameters <p>Special scenario parameters required by the model, formatted as a JSON serialized string.</p><ol><li>Hunyuan 3.0 supports freely setting resolution width and height within [512, 2048] pixels, with the product of width and height less than or equal to 1024x1024 pixels.</li><li>Qwen 0925 supports freely setting resolution width and height, with a valid total pixel range of [512x512=261632, 2048x2048=4194304].</li></ol><p>Example: {"size":"1024x1024"}.</p>
                     * 
                     */
                    std::string GetAdditionalParameters() const;

                    /**
                     * 设置<p>Special scenario parameters required by the model, formatted as a JSON serialized string.</p><ol><li>Hunyuan 3.0 supports freely setting resolution width and height within [512, 2048] pixels, with the product of width and height less than or equal to 1024x1024 pixels.</li><li>Qwen 0925 supports freely setting resolution width and height, with a valid total pixel range of [512x512=261632, 2048x2048=4194304].</li></ol><p>Example: {"size":"1024x1024"}.</p>
                     * @param _additionalParameters <p>Special scenario parameters required by the model, formatted as a JSON serialized string.</p><ol><li>Hunyuan 3.0 supports freely setting resolution width and height within [512, 2048] pixels, with the product of width and height less than or equal to 1024x1024 pixels.</li><li>Qwen 0925 supports freely setting resolution width and height, with a valid total pixel range of [512x512=261632, 2048x2048=4194304].</li></ol><p>Example: {"size":"1024x1024"}.</p>
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
                     * <p>Model name.<br>Supported models:<br>Hunyuan.<br>Qwen.<br>Vidu.<br>Kling.<br>MJ.</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>Specific version number of the model. By default, the system uses the supported stable version of the model.</p><ol><li>Hunyuan: [3.0].</li><li>Vidu: [q2].</li><li>Kling: [2.1, O1, 3.0, and 3.0-Omni].</li><li>Qwen: [0925].</li><li>MJ: [v7].</li></ol>
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * <p>Used for scene-based image generation; only supported by some models.</p><p>Enumeration value:</p><ul><li>3d_panorama: panoramic view. Only Hunyuan supports this.</li></ul>
                     */
                    std::string m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * <p>Description of the generated image. This parameter is required when no reference image is specified.</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>Specifies the content you want to prevent the model from generating. Note: Not all models support this.</p><p>For example: top lighting, bright colors, people, animals, multiple vehicles, and wind.</p>
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * <p>The default value is False, meaning the model follows instructions strictly.<br>For better results with more nuanced prompts, set this parameter to True to automatically optimize the input prompt and improve generation quality.</p>
                     */
                    bool m_enhancePrompt;
                    bool m_enhancePromptHasBeenSet;

                    /**
                     * <p>Reference resource images. By default, one image can be specified.</p><p>Models supporting multiple images:</p><ol><li>Kling 2.1 supports up to 4 images as resource image input.</li><li>Kling 3.0-Omni supports up to 10 images as resource image input.</li><li>Kling O1 supports up to 10 images as resource image input.</li><li>Vidu q2 supports up to 7 images as resource image input.</li><li>Hunyuan 3.0 supports up to 3 images as resource image input.</li><li>MJ v7 supports up to 3 images as resource image input.</li></ol><p>Note:</p><ol><li>The recommended image size is less than 7 MB. Different models have different limits.</li><li>Supported image formats: JPEG, PNG, and WebP.</li></ol>
                     */
                    std::vector<AigcImageInfo> m_imageInfos;
                    bool m_imageInfosHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_outputImageCount;
                    bool m_outputImageCountHasBeenSet;

                    /**
                     * <p>Additional parameters required for the model.</p>
                     */
                    AigcImageExtraParam m_extraParameters;
                    bool m_extraParametersHasBeenSet;

                    /**
                     * <p>Special scenario parameters required by the model, formatted as a JSON serialized string.</p><ol><li>Hunyuan 3.0 supports freely setting resolution width and height within [512, 2048] pixels, with the product of width and height less than or equal to 1024x1024 pixels.</li><li>Qwen 0925 supports freely setting resolution width and height, with a valid total pixel range of [512x512=261632, 2048x2048=4194304].</li></ol><p>Example: {"size":"1024x1024"}.</p>
                     */
                    std::string m_additionalParameters;
                    bool m_additionalParametersHasBeenSet;

                    /**
                     * <p>COS bucket information for the file result. Note: COS is required and the MPS_QcsRole role needs to be created and authorized.</p>
                     */
                    AigcStoreCosParam m_storeCosParam;
                    bool m_storeCosParamHasBeenSet;

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

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIGCIMAGETASKREQUEST_H_
