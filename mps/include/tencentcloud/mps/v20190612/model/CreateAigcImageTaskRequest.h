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
                     * 获取<p>Model name.<br>Supported models:<br>Hunyuan.<br>GEM.<br>Qwen.</p>
                     * @return ModelName <p>Model name.<br>Supported models:<br>Hunyuan.<br>GEM.<br>Qwen.</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>Model name.<br>Supported models:<br>Hunyuan.<br>GEM.<br>Qwen.</p>
                     * @param _modelName <p>Model name.<br>Supported models:<br>Hunyuan.<br>GEM.<br>Qwen.</p>
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
                     * 获取<p>Specify the model version number. By default, the system uses the supported stable version of the model.</p><ol><li>GEM: [2.5 and 3.0].</li></ol>
                     * @return ModelVersion <p>Specify the model version number. By default, the system uses the supported stable version of the model.</p><ol><li>GEM: [2.5 and 3.0].</li></ol>
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置<p>Specify the model version number. By default, the system uses the supported stable version of the model.</p><ol><li>GEM: [2.5 and 3.0].</li></ol>
                     * @param _modelVersion <p>Specify the model version number. By default, the system uses the supported stable version of the model.</p><ol><li>GEM: [2.5 and 3.0].</li></ol>
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
                     * 获取<p>Description of the generated image. (Note: Supports up to 1000 characters.) This parameter is required when no reference image is passed in.</p>
                     * @return Prompt <p>Description of the generated image. (Note: Supports up to 1000 characters.) This parameter is required when no reference image is passed in.</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>Description of the generated image. (Note: Supports up to 1000 characters.) This parameter is required when no reference image is passed in.</p>
                     * @param _prompt <p>Description of the generated image. (Note: Supports up to 1000 characters.) This parameter is required when no reference image is passed in.</p>
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
                     * 获取<p>Specifies the content you want to prevent the model from generating. Note: Not all models support this. For example: top lighting, bright colors, people, animals, multiple vehicles, and wind.</p>
                     * @return NegativePrompt <p>Specifies the content you want to prevent the model from generating. Note: Not all models support this. For example: top lighting, bright colors, people, animals, multiple vehicles, and wind.</p>
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置<p>Specifies the content you want to prevent the model from generating. Note: Not all models support this. For example: top lighting, bright colors, people, animals, multiple vehicles, and wind.</p>
                     * @param _negativePrompt <p>Specifies the content you want to prevent the model from generating. Note: Not all models support this. For example: top lighting, bright colors, people, animals, multiple vehicles, and wind.</p>
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
                     * 获取<p>The default value is False, meaning the model follows instructions strictly. For better results with more nuanced prompts, set this parameter to True to automatically optimize the input prompt and improve generation quality.</p>
                     * @return EnhancePrompt <p>The default value is False, meaning the model follows instructions strictly. For better results with more nuanced prompts, set this parameter to True to automatically optimize the input prompt and improve generation quality.</p>
                     * 
                     */
                    bool GetEnhancePrompt() const;

                    /**
                     * 设置<p>The default value is False, meaning the model follows instructions strictly. For better results with more nuanced prompts, set this parameter to True to automatically optimize the input prompt and improve generation quality.</p>
                     * @param _enhancePrompt <p>The default value is False, meaning the model follows instructions strictly. For better results with more nuanced prompts, set this parameter to True to automatically optimize the input prompt and improve generation quality.</p>
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
                     * 获取<p>Used for inputting image information as a resource for reference. Default support for inputting an image.</p><p>Models supporting multi-image input:</p><ol><li>GEM, supporting up to 3 images as resource input.</li></ol><p>Note:</p><ol><li>Recommended image less than 7M. Limits vary by model.</li><li>Format support: jpeg, png, webp.</li></ol>
                     * @return ImageInfos <p>Used for inputting image information as a resource for reference. Default support for inputting an image.</p><p>Models supporting multi-image input:</p><ol><li>GEM, supporting up to 3 images as resource input.</li></ol><p>Note:</p><ol><li>Recommended image less than 7M. Limits vary by model.</li><li>Format support: jpeg, png, webp.</li></ol>
                     * 
                     */
                    std::vector<AigcImageInfo> GetImageInfos() const;

                    /**
                     * 设置<p>Used for inputting image information as a resource for reference. Default support for inputting an image.</p><p>Models supporting multi-image input:</p><ol><li>GEM, supporting up to 3 images as resource input.</li></ol><p>Note:</p><ol><li>Recommended image less than 7M. Limits vary by model.</li><li>Format support: jpeg, png, webp.</li></ol>
                     * @param _imageInfos <p>Used for inputting image information as a resource for reference. Default support for inputting an image.</p><p>Models supporting multi-image input:</p><ol><li>GEM, supporting up to 3 images as resource input.</li></ol><p>Note:</p><ol><li>Recommended image less than 7M. Limits vary by model.</li><li>Format support: jpeg, png, webp.</li></ol>
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
                     * 获取<p>Used to input some special scene parameters required by the model, serialized into a string in Json format. Example: {"size":"2048x2048"}</p>
                     * @return AdditionalParameters <p>Used to input some special scene parameters required by the model, serialized into a string in Json format. Example: {"size":"2048x2048"}</p>
                     * 
                     */
                    std::string GetAdditionalParameters() const;

                    /**
                     * 设置<p>Used to input some special scene parameters required by the model, serialized into a string in Json format. Example: {"size":"2048x2048"}</p>
                     * @param _additionalParameters <p>Used to input some special scene parameters required by the model, serialized into a string in Json format. Example: {"size":"2048x2048"}</p>
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
                     * <p>Model name.<br>Supported models:<br>Hunyuan.<br>GEM.<br>Qwen.</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>Specify the model version number. By default, the system uses the supported stable version of the model.</p><ol><li>GEM: [2.5 and 3.0].</li></ol>
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * <p>Description of the generated image. (Note: Supports up to 1000 characters.) This parameter is required when no reference image is passed in.</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>Specifies the content you want to prevent the model from generating. Note: Not all models support this. For example: top lighting, bright colors, people, animals, multiple vehicles, and wind.</p>
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * <p>The default value is False, meaning the model follows instructions strictly. For better results with more nuanced prompts, set this parameter to True to automatically optimize the input prompt and improve generation quality.</p>
                     */
                    bool m_enhancePrompt;
                    bool m_enhancePromptHasBeenSet;

                    /**
                     * <p>Used for inputting image information as a resource for reference. Default support for inputting an image.</p><p>Models supporting multi-image input:</p><ol><li>GEM, supporting up to 3 images as resource input.</li></ol><p>Note:</p><ol><li>Recommended image less than 7M. Limits vary by model.</li><li>Format support: jpeg, png, webp.</li></ol>
                     */
                    std::vector<AigcImageInfo> m_imageInfos;
                    bool m_imageInfosHasBeenSet;

                    /**
                     * <p>Additional parameters required for the model.</p>
                     */
                    AigcImageExtraParam m_extraParameters;
                    bool m_extraParametersHasBeenSet;

                    /**
                     * <p>Used to input some special scene parameters required by the model, serialized into a string in Json format. Example: {"size":"2048x2048"}</p>
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
