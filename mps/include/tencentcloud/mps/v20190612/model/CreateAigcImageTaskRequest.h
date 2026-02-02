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
                     * 获取Model name.
Supported models:Hunyuan,
GEM,
Qwen.
                     * @return ModelName Model name.
Supported models:Hunyuan,
GEM,
Qwen.
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置Model name.
Supported models:Hunyuan,
GEM,
Qwen.
                     * @param _modelName Model name.
Supported models:Hunyuan,
GEM,
Qwen.
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
                     * 获取Specific version number of the model. By default, the system uses the supported stable version of the model.1. GEM: [2.5 and 3.0].
                     * @return ModelVersion Specific version number of the model. By default, the system uses the supported stable version of the model.1. GEM: [2.5 and 3.0].
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置Specific version number of the model. By default, the system uses the supported stable version of the model.1. GEM: [2.5 and 3.0].
                     * @param _modelVersion Specific version number of the model. By default, the system uses the supported stable version of the model.1. GEM: [2.5 and 3.0].
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
                     * 获取Description of the generated image. (Note: A maximum of 1000 characters is supported.) This parameter is required when no reference image is specified.
                     * @return Prompt Description of the generated image. (Note: A maximum of 1000 characters is supported.) This parameter is required when no reference image is specified.
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置Description of the generated image. (Note: A maximum of 1000 characters is supported.) This parameter is required when no reference image is specified.
                     * @param _prompt Description of the generated image. (Note: A maximum of 1000 characters is supported.) This parameter is required when no reference image is specified.
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
                     * 获取Specifies the content you want to prevent the model from generating. Note: Not all models support this. For example: top lighting, bright colors, people, animals, multiple vehicles, and wind.
                     * @return NegativePrompt Specifies the content you want to prevent the model from generating. Note: Not all models support this. For example: top lighting, bright colors, people, animals, multiple vehicles, and wind.
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置Specifies the content you want to prevent the model from generating. Note: Not all models support this. For example: top lighting, bright colors, people, animals, multiple vehicles, and wind.
                     * @param _negativePrompt Specifies the content you want to prevent the model from generating. Note: Not all models support this. For example: top lighting, bright colors, people, animals, multiple vehicles, and wind.
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
                     * 获取The default value is False, meaning the model follows instructions strictly. For better results with more nuanced prompts, set this parameter to True to automatically optimize the input prompt and improve generation quality.
                     * @return EnhancePrompt The default value is False, meaning the model follows instructions strictly. For better results with more nuanced prompts, set this parameter to True to automatically optimize the input prompt and improve generation quality.
                     * 
                     */
                    bool GetEnhancePrompt() const;

                    /**
                     * 设置The default value is False, meaning the model follows instructions strictly. For better results with more nuanced prompts, set this parameter to True to automatically optimize the input prompt and improve generation quality.
                     * @param _enhancePrompt The default value is False, meaning the model follows instructions strictly. For better results with more nuanced prompts, set this parameter to True to automatically optimize the input prompt and improve generation quality.
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
                     * 获取Reference resource images. By default, one image can be specified.Model that supports multiple images:1. GEM supports up to 3 resource images.Note:1. The recommended image size is less than 7 MB. Different models have different limits.2. Supported image format: JPEG, PNG, and WebP.
                     * @return ImageInfos Reference resource images. By default, one image can be specified.Model that supports multiple images:1. GEM supports up to 3 resource images.Note:1. The recommended image size is less than 7 MB. Different models have different limits.2. Supported image format: JPEG, PNG, and WebP.
                     * 
                     */
                    std::vector<AigcImageInfo> GetImageInfos() const;

                    /**
                     * 设置Reference resource images. By default, one image can be specified.Model that supports multiple images:1. GEM supports up to 3 resource images.Note:1. The recommended image size is less than 7 MB. Different models have different limits.2. Supported image format: JPEG, PNG, and WebP.
                     * @param _imageInfos Reference resource images. By default, one image can be specified.Model that supports multiple images:1. GEM supports up to 3 resource images.Note:1. The recommended image size is less than 7 MB. Different models have different limits.2. Supported image format: JPEG, PNG, and WebP.
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
                     * 获取Additional parameters required for the model.
                     * @return ExtraParameters Additional parameters required for the model.
                     * 
                     */
                    AigcImageExtraParam GetExtraParameters() const;

                    /**
                     * 设置Additional parameters required for the model.
                     * @param _extraParameters Additional parameters required for the model.
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
                     * 获取API operator name.
                     * @return Operator API operator name.
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置API operator name.
                     * @param _operator API operator name.
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
                     * Model name.
Supported models:Hunyuan,
GEM,
Qwen.
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * Specific version number of the model. By default, the system uses the supported stable version of the model.1. GEM: [2.5 and 3.0].
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * Description of the generated image. (Note: A maximum of 1000 characters is supported.) This parameter is required when no reference image is specified.
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * Specifies the content you want to prevent the model from generating. Note: Not all models support this. For example: top lighting, bright colors, people, animals, multiple vehicles, and wind.
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * The default value is False, meaning the model follows instructions strictly. For better results with more nuanced prompts, set this parameter to True to automatically optimize the input prompt and improve generation quality.
                     */
                    bool m_enhancePrompt;
                    bool m_enhancePromptHasBeenSet;

                    /**
                     * Reference resource images. By default, one image can be specified.Model that supports multiple images:1. GEM supports up to 3 resource images.Note:1. The recommended image size is less than 7 MB. Different models have different limits.2. Supported image format: JPEG, PNG, and WebP.
                     */
                    std::vector<AigcImageInfo> m_imageInfos;
                    bool m_imageInfosHasBeenSet;

                    /**
                     * Additional parameters required for the model.
                     */
                    AigcImageExtraParam m_extraParameters;
                    bool m_extraParametersHasBeenSet;

                    /**
                     * COS bucket information for the file result. Note: COS is required and the MPS_QcsRole role needs to be created and authorized.
                     */
                    AigcStoreCosParam m_storeCosParam;
                    bool m_storeCosParamHasBeenSet;

                    /**
                     * API operator name.
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIGCIMAGETASKREQUEST_H_
