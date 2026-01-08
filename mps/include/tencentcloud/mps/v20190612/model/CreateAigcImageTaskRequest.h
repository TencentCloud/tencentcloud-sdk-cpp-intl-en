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
                     * 获取Model Name. Currently supported models include: Hunyuan,GEM,Qwen.
                     * @return ModelName Model Name. Currently supported models include: Hunyuan,GEM,Qwen.
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置Model Name. Currently supported models include: Hunyuan,GEM,Qwen.
                     * @param _modelName Model Name. Currently supported models include: Hunyuan,GEM,Qwen.
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
                     * 获取Specify the version number of a particular model. By default, the system utilizes the currently supported stable version of the model.  
1. GEM, available options [2.5, 3.0].

                     * @return ModelVersion Specify the version number of a particular model. By default, the system utilizes the currently supported stable version of the model.  
1. GEM, available options [2.5, 3.0].

                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置Specify the version number of a particular model. By default, the system utilizes the currently supported stable version of the model.  
1. GEM, available options [2.5, 3.0].

                     * @param _modelVersion Specify the version number of a particular model. By default, the system utilizes the currently supported stable version of the model.  
1. GEM, available options [2.5, 3.0].

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
Generate a description of the image. (Note: The maximum supported length is 1000 characters.) This parameter is mandatory when no reference image is provided.

                     * @return Prompt 
Generate a description of the image. (Note: The maximum supported length is 1000 characters.) This parameter is mandatory when no reference image is provided.

                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置
Generate a description of the image. (Note: The maximum supported length is 1000 characters.) This parameter is mandatory when no reference image is provided.

                     * @param _prompt 
Generate a description of the image. (Note: The maximum supported length is 1000 characters.) This parameter is mandatory when no reference image is provided.

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
                     * 获取Used to specify the content you wish to prevent the model from generating.Note: Supported by select models.Examples:  
Overhead lighting, vibrant colors  
Human figures, animals  
Multiple vehicles, wind
                     * @return NegativePrompt Used to specify the content you wish to prevent the model from generating.Note: Supported by select models.Examples:  
Overhead lighting, vibrant colors  
Human figures, animals  
Multiple vehicles, wind
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置Used to specify the content you wish to prevent the model from generating.Note: Supported by select models.Examples:  
Overhead lighting, vibrant colors  
Human figures, animals  
Multiple vehicles, wind
                     * @param _negativePrompt Used to specify the content you wish to prevent the model from generating.Note: Supported by select models.Examples:  
Overhead lighting, vibrant colors  
Human figures, animals  
Multiple vehicles, wind
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
                     * 获取The default value is False, where the model strictly adheres to instructions. For optimal results with more refined prompts, setting this parameter to True will automatically optimize the input prompt to enhance generation quality.

                     * @return EnhancePrompt The default value is False, where the model strictly adheres to instructions. For optimal results with more refined prompts, setting this parameter to True will automatically optimize the input prompt to enhance generation quality.

                     * 
                     */
                    bool GetEnhancePrompt() const;

                    /**
                     * 设置The default value is False, where the model strictly adheres to instructions. For optimal results with more refined prompts, setting this parameter to True will automatically optimize the input prompt to enhance generation quality.

                     * @param _enhancePrompt The default value is False, where the model strictly adheres to instructions. For optimal results with more refined prompts, setting this parameter to True will automatically optimize the input prompt to enhance generation quality.

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
Supports single image input by default. Models supporting multi-image input include GEM (up to 3 images).  
Recommended image size should be under 7MB, with support for JPEG, PNG, and WebP formats.

                     * @return ImageInfos 
Supports single image input by default. Models supporting multi-image input include GEM (up to 3 images).  
Recommended image size should be under 7MB, with support for JPEG, PNG, and WebP formats.

                     * 
                     */
                    std::vector<AigcImageInfo> GetImageInfos() const;

                    /**
                     * 设置
Supports single image input by default. Models supporting multi-image input include GEM (up to 3 images).  
Recommended image size should be under 7MB, with support for JPEG, PNG, and WebP formats.

                     * @param _imageInfos 
Supports single image input by default. Models supporting multi-image input include GEM (up to 3 images).  
Recommended image size should be under 7MB, with support for JPEG, PNG, and WebP formats.

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
                     * 获取Used to pass additional parameters.
                     * @return ExtraParameters Used to pass additional parameters.
                     * 
                     */
                    AigcImageExtraParam GetExtraParameters() const;

                    /**
                     * 设置Used to pass additional parameters.
                     * @param _extraParameters Used to pass additional parameters.
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
                     * 获取The output files will be stored in the specified COS bucket. Note: COS service must be activated, and the MPS_QcsRole needs to be created and properly authorized.
                     * @return StoreCosParam The output files will be stored in the specified COS bucket. Note: COS service must be activated, and the MPS_QcsRole needs to be created and properly authorized.
                     * 
                     */
                    AigcStoreCosParam GetStoreCosParam() const;

                    /**
                     * 设置The output files will be stored in the specified COS bucket. Note: COS service must be activated, and the MPS_QcsRole needs to be created and properly authorized.
                     * @param _storeCosParam The output files will be stored in the specified COS bucket. Note: COS service must be activated, and the MPS_QcsRole needs to be created and properly authorized.
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
                     * 获取Interface operator name.
                     * @return Operator Interface operator name.
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Interface operator name.
                     * @param _operator Interface operator name.
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
                     * Model Name. Currently supported models include: Hunyuan,GEM,Qwen.
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * Specify the version number of a particular model. By default, the system utilizes the currently supported stable version of the model.  
1. GEM, available options [2.5, 3.0].

                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * 
Generate a description of the image. (Note: The maximum supported length is 1000 characters.) This parameter is mandatory when no reference image is provided.

                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * Used to specify the content you wish to prevent the model from generating.Note: Supported by select models.Examples:  
Overhead lighting, vibrant colors  
Human figures, animals  
Multiple vehicles, wind
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * The default value is False, where the model strictly adheres to instructions. For optimal results with more refined prompts, setting this parameter to True will automatically optimize the input prompt to enhance generation quality.

                     */
                    bool m_enhancePrompt;
                    bool m_enhancePromptHasBeenSet;

                    /**
                     * 
Supports single image input by default. Models supporting multi-image input include GEM (up to 3 images).  
Recommended image size should be under 7MB, with support for JPEG, PNG, and WebP formats.

                     */
                    std::vector<AigcImageInfo> m_imageInfos;
                    bool m_imageInfosHasBeenSet;

                    /**
                     * Used to pass additional parameters.
                     */
                    AigcImageExtraParam m_extraParameters;
                    bool m_extraParametersHasBeenSet;

                    /**
                     * The output files will be stored in the specified COS bucket. Note: COS service must be activated, and the MPS_QcsRole needs to be created and properly authorized.
                     */
                    AigcStoreCosParam m_storeCosParam;
                    bool m_storeCosParamHasBeenSet;

                    /**
                     * Interface operator name.
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIGCIMAGETASKREQUEST_H_
