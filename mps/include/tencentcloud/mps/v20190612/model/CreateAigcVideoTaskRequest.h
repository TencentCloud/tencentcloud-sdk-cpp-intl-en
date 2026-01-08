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
                     * 获取Model Name. Currently supported models include: Hunyuan, Hailuo, Kling, Vidu, OS, GV
                     * @return ModelName Model Name. Currently supported models include: Hunyuan, Hailuo, Kling, Vidu, OS, GV
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置Model Name. Currently supported models include: Hunyuan, Hailuo, Kling, Vidu, OS, GV
                     * @param _modelName Model Name. Currently supported models include: Hunyuan, Hailuo, Kling, Vidu, OS, GV
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
                     * 获取Specify the version number of a particular model. By default, the system uses the currently supported stable version of the model.  
1. Hailuo: Available options [02, 2.3].  
2. Kling: Available options [2.0, 2.1, 2.5, O1, 2.6].  
3. Vidu: Available options [q2, q2-pro, q2-turbo].  
4. GV: Available option [3.1].  
5. OS: Available option [2.0].
                     * @return ModelVersion Specify the version number of a particular model. By default, the system uses the currently supported stable version of the model.  
1. Hailuo: Available options [02, 2.3].  
2. Kling: Available options [2.0, 2.1, 2.5, O1, 2.6].  
3. Vidu: Available options [q2, q2-pro, q2-turbo].  
4. GV: Available option [3.1].  
5. OS: Available option [2.0].
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置Specify the version number of a particular model. By default, the system uses the currently supported stable version of the model.  
1. Hailuo: Available options [02, 2.3].  
2. Kling: Available options [2.0, 2.1, 2.5, O1, 2.6].  
3. Vidu: Available options [q2, q2-pro, q2-turbo].  
4. GV: Available option [3.1].  
5. OS: Available option [2.0].
                     * @param _modelVersion Specify the version number of a particular model. By default, the system uses the currently supported stable version of the model.  
1. Hailuo: Available options [02, 2.3].  
2. Kling: Available options [2.0, 2.1, 2.5, O1, 2.6].  
3. Vidu: Available options [q2, q2-pro, q2-turbo].  
4. GV: Available option [3.1].  
5. OS: Available option [2.0].
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
                     * 获取Generate video description. (Note: Maximum 2000 characters supported). This parameter is mandatory when no images are provided.
                     * @return Prompt Generate video description. (Note: Maximum 2000 characters supported). This parameter is mandatory when no images are provided.
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置Generate video description. (Note: Maximum 2000 characters supported). This parameter is mandatory when no images are provided.
                     * @param _prompt Generate video description. (Note: Maximum 2000 characters supported). This parameter is mandatory when no images are provided.
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
                     * 获取The URL of the image used to guide video generation, which must be publicly accessible via the internet.  
Notes:  
1. The recommended image size should not exceed 10MB, though size limitations may vary across different models.  
2. Supported image formats: JPEG, PNG.  
3. When using the OS model, the input image dimensions must be either 1280x720 or 720x1280.
                     * @return ImageUrl The URL of the image used to guide video generation, which must be publicly accessible via the internet.  
Notes:  
1. The recommended image size should not exceed 10MB, though size limitations may vary across different models.  
2. Supported image formats: JPEG, PNG.  
3. When using the OS model, the input image dimensions must be either 1280x720 or 720x1280.
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置The URL of the image used to guide video generation, which must be publicly accessible via the internet.  
Notes:  
1. The recommended image size should not exceed 10MB, though size limitations may vary across different models.  
2. Supported image formats: JPEG, PNG.  
3. When using the OS model, the input image dimensions must be either 1280x720 or 720x1280.
                     * @param _imageUrl The URL of the image used to guide video generation, which must be publicly accessible via the internet.  
Notes:  
1. The recommended image size should not exceed 10MB, though size limitations may vary across different models.  
2. Supported image formats: JPEG, PNG.  
3. When using the OS model, the input image dimensions must be either 1280x720 or 720x1280.
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
                     * 获取The model will utilize the image provided via this parameter as the ending frame for video generation.  
Supported models for this parameter:  
1. GV: When an ending frame image is provided, the ImageUrl parameter must also be specified as the starting frame.  
2. Kling: Under Resolution: 1080P, version 2.1 supports both start&end frames.  
3. Vidu, q2-pro, q2-turbo: Support start&end frames. 
Notes:  
1. It is recommended that the image size does not exceed 10MB, though specific model limitations may vary.  
2. Supported image formats: JPEG, PNG.
                     * @return LastImageUrl The model will utilize the image provided via this parameter as the ending frame for video generation.  
Supported models for this parameter:  
1. GV: When an ending frame image is provided, the ImageUrl parameter must also be specified as the starting frame.  
2. Kling: Under Resolution: 1080P, version 2.1 supports both start&end frames.  
3. Vidu, q2-pro, q2-turbo: Support start&end frames. 
Notes:  
1. It is recommended that the image size does not exceed 10MB, though specific model limitations may vary.  
2. Supported image formats: JPEG, PNG.
                     * 
                     */
                    std::string GetLastImageUrl() const;

                    /**
                     * 设置The model will utilize the image provided via this parameter as the ending frame for video generation.  
Supported models for this parameter:  
1. GV: When an ending frame image is provided, the ImageUrl parameter must also be specified as the starting frame.  
2. Kling: Under Resolution: 1080P, version 2.1 supports both start&end frames.  
3. Vidu, q2-pro, q2-turbo: Support start&end frames. 
Notes:  
1. It is recommended that the image size does not exceed 10MB, though specific model limitations may vary.  
2. Supported image formats: JPEG, PNG.
                     * @param _lastImageUrl The model will utilize the image provided via this parameter as the ending frame for video generation.  
Supported models for this parameter:  
1. GV: When an ending frame image is provided, the ImageUrl parameter must also be specified as the starting frame.  
2. Kling: Under Resolution: 1080P, version 2.1 supports both start&end frames.  
3. Vidu, q2-pro, q2-turbo: Support start&end frames. 
Notes:  
1. It is recommended that the image size does not exceed 10MB, though specific model limitations may vary.  
2. Supported image formats: JPEG, PNG.
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
                     * 获取A list comprising up to three material resource images, utilized to depict the reference images the model will employ for video generation.  
Models supporting multi-image input:  
1. GV: When utilizing multi-image input, neither ImageUrl nor LastImageUrl should be used.  
2. Vidu: Supports video generation with multiple reference images. For model q2, 1-7 images can be provided, with the subject ID specified via ReferenceType within ImageInfos.
Notes:  
1. Each image must not exceed 10MB in size.  
2. Supported image formats: JPEG, PNG.
                     * @return ImageInfos A list comprising up to three material resource images, utilized to depict the reference images the model will employ for video generation.  
Models supporting multi-image input:  
1. GV: When utilizing multi-image input, neither ImageUrl nor LastImageUrl should be used.  
2. Vidu: Supports video generation with multiple reference images. For model q2, 1-7 images can be provided, with the subject ID specified via ReferenceType within ImageInfos.
Notes:  
1. Each image must not exceed 10MB in size.  
2. Supported image formats: JPEG, PNG.
                     * 
                     */
                    std::vector<AigcVideoReferenceImageInfo> GetImageInfos() const;

                    /**
                     * 设置A list comprising up to three material resource images, utilized to depict the reference images the model will employ for video generation.  
Models supporting multi-image input:  
1. GV: When utilizing multi-image input, neither ImageUrl nor LastImageUrl should be used.  
2. Vidu: Supports video generation with multiple reference images. For model q2, 1-7 images can be provided, with the subject ID specified via ReferenceType within ImageInfos.
Notes:  
1. Each image must not exceed 10MB in size.  
2. Supported image formats: JPEG, PNG.
                     * @param _imageInfos A list comprising up to three material resource images, utilized to depict the reference images the model will employ for video generation.  
Models supporting multi-image input:  
1. GV: When utilizing multi-image input, neither ImageUrl nor LastImageUrl should be used.  
2. Vidu: Supports video generation with multiple reference images. For model q2, 1-7 images can be provided, with the subject ID specified via ReferenceType within ImageInfos.
Notes:  
1. Each image must not exceed 10MB in size.  
2. Supported image formats: JPEG, PNG.
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
                     * 获取Duration of generated videos.  
Notes:  
1. Kling supports 5 and 10 seconds. Default: 5 seconds.  
2. Hailuo's standard mode supports 6 and 10 seconds, while other modes only support 6 seconds. Default: 6 seconds.  
3. Vidu supports 1 to 10 seconds.  
4. GV supports 8 seconds. Default: 8 seconds.  
5. OS supports 4, 8, and 12 seconds. Default: 8 seconds.
                     * @return Duration Duration of generated videos.  
Notes:  
1. Kling supports 5 and 10 seconds. Default: 5 seconds.  
2. Hailuo's standard mode supports 6 and 10 seconds, while other modes only support 6 seconds. Default: 6 seconds.  
3. Vidu supports 1 to 10 seconds.  
4. GV supports 8 seconds. Default: 8 seconds.  
5. OS supports 4, 8, and 12 seconds. Default: 8 seconds.
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置Duration of generated videos.  
Notes:  
1. Kling supports 5 and 10 seconds. Default: 5 seconds.  
2. Hailuo's standard mode supports 6 and 10 seconds, while other modes only support 6 seconds. Default: 6 seconds.  
3. Vidu supports 1 to 10 seconds.  
4. GV supports 8 seconds. Default: 8 seconds.  
5. OS supports 4, 8, and 12 seconds. Default: 8 seconds.
                     * @param _duration Duration of generated videos.  
Notes:  
1. Kling supports 5 and 10 seconds. Default: 5 seconds.  
2. Hailuo's standard mode supports 6 and 10 seconds, while other modes only support 6 seconds. Default: 6 seconds.  
3. Vidu supports 1 to 10 seconds.  
4. GV supports 8 seconds. Default: 8 seconds.  
5. OS supports 4, 8, and 12 seconds. Default: 8 seconds.
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
                     * 获取Used to pass additional parameters.
                     * @return ExtraParameters Used to pass additional parameters.
                     * 
                     */
                    AigcVideoExtraParam GetExtraParameters() const;

                    /**
                     * 设置Used to pass additional parameters.
                     * @param _extraParameters Used to pass additional parameters.
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
                     * 获取
Used to pass specific scenario parameters required by the model, serialized into a JSON format string. Example: {"camera_control":{"type":"simple"}}
                     * @return AdditionalParameters 
Used to pass specific scenario parameters required by the model, serialized into a JSON format string. Example: {"camera_control":{"type":"simple"}}
                     * 
                     */
                    std::string GetAdditionalParameters() const;

                    /**
                     * 设置
Used to pass specific scenario parameters required by the model, serialized into a JSON format string. Example: {"camera_control":{"type":"simple"}}
                     * @param _additionalParameters 
Used to pass specific scenario parameters required by the model, serialized into a JSON format string. Example: {"camera_control":{"type":"simple"}}
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
                     * Model Name. Currently supported models include: Hunyuan, Hailuo, Kling, Vidu, OS, GV
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * Specify the version number of a particular model. By default, the system uses the currently supported stable version of the model.  
1. Hailuo: Available options [02, 2.3].  
2. Kling: Available options [2.0, 2.1, 2.5, O1, 2.6].  
3. Vidu: Available options [q2, q2-pro, q2-turbo].  
4. GV: Available option [3.1].  
5. OS: Available option [2.0].
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * Generate video description. (Note: Maximum 2000 characters supported). This parameter is mandatory when no images are provided.
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
                     * The URL of the image used to guide video generation, which must be publicly accessible via the internet.  
Notes:  
1. The recommended image size should not exceed 10MB, though size limitations may vary across different models.  
2. Supported image formats: JPEG, PNG.  
3. When using the OS model, the input image dimensions must be either 1280x720 or 720x1280.
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * The model will utilize the image provided via this parameter as the ending frame for video generation.  
Supported models for this parameter:  
1. GV: When an ending frame image is provided, the ImageUrl parameter must also be specified as the starting frame.  
2. Kling: Under Resolution: 1080P, version 2.1 supports both start&end frames.  
3. Vidu, q2-pro, q2-turbo: Support start&end frames. 
Notes:  
1. It is recommended that the image size does not exceed 10MB, though specific model limitations may vary.  
2. Supported image formats: JPEG, PNG.
                     */
                    std::string m_lastImageUrl;
                    bool m_lastImageUrlHasBeenSet;

                    /**
                     * A list comprising up to three material resource images, utilized to depict the reference images the model will employ for video generation.  
Models supporting multi-image input:  
1. GV: When utilizing multi-image input, neither ImageUrl nor LastImageUrl should be used.  
2. Vidu: Supports video generation with multiple reference images. For model q2, 1-7 images can be provided, with the subject ID specified via ReferenceType within ImageInfos.
Notes:  
1. Each image must not exceed 10MB in size.  
2. Supported image formats: JPEG, PNG.
                     */
                    std::vector<AigcVideoReferenceImageInfo> m_imageInfos;
                    bool m_imageInfosHasBeenSet;

                    /**
                     * Duration of generated videos.  
Notes:  
1. Kling supports 5 and 10 seconds. Default: 5 seconds.  
2. Hailuo's standard mode supports 6 and 10 seconds, while other modes only support 6 seconds. Default: 6 seconds.  
3. Vidu supports 1 to 10 seconds.  
4. GV supports 8 seconds. Default: 8 seconds.  
5. OS supports 4, 8, and 12 seconds. Default: 8 seconds.
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Used to pass additional parameters.
                     */
                    AigcVideoExtraParam m_extraParameters;
                    bool m_extraParametersHasBeenSet;

                    /**
                     * The output files will be stored in the specified COS bucket. Note: COS service must be activated, and the MPS_QcsRole needs to be created and properly authorized.
                     */
                    AigcStoreCosParam m_storeCosParam;
                    bool m_storeCosParamHasBeenSet;

                    /**
                     * 
Used to pass specific scenario parameters required by the model, serialized into a JSON format string. Example: {"camera_control":{"type":"simple"}}
                     */
                    std::string m_additionalParameters;
                    bool m_additionalParametersHasBeenSet;

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

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIGCVIDEOTASKREQUEST_H_
