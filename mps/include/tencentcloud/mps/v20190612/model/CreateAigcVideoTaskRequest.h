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
                     * 获取Model name.
Supported models:Hunyuan,
Hailuo,
Kling,
Vidu,
OS,
GV.
                     * @return ModelName Model name.
Supported models:Hunyuan,
Hailuo,
Kling,
Vidu,
OS,
GV.
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置Model name.
Supported models:Hunyuan,
Hailuo,
Kling,
Vidu,
OS,
GV.
                     * @param _modelName Model name.
Supported models:Hunyuan,
Hailuo,
Kling,
Vidu,
OS,
GV.
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
                     * 获取Specific version number of the model. By default, the system uses the supported stable version of the model.1. Hailuo: [02 and 2.3].2. Kling: [2.0, 2.1, 2.5, O1, and 2.6].3. Vidu: [q2, q2-pro, and q2-turbo].4. GV: [3.1].5. OS: [2.0].
                     * @return ModelVersion Specific version number of the model. By default, the system uses the supported stable version of the model.1. Hailuo: [02 and 2.3].2. Kling: [2.0, 2.1, 2.5, O1, and 2.6].3. Vidu: [q2, q2-pro, and q2-turbo].4. GV: [3.1].5. OS: [2.0].
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置Specific version number of the model. By default, the system uses the supported stable version of the model.1. Hailuo: [02 and 2.3].2. Kling: [2.0, 2.1, 2.5, O1, and 2.6].3. Vidu: [q2, q2-pro, and q2-turbo].4. GV: [3.1].5. OS: [2.0].
                     * @param _modelVersion Specific version number of the model. By default, the system uses the supported stable version of the model.1. Hailuo: [02 and 2.3].2. Kling: [2.0, 2.1, 2.5, O1, and 2.6].3. Vidu: [q2, q2-pro, and q2-turbo].4. GV: [3.1].5. OS: [2.0].
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
                     * 获取Scenario for the generated video.Note: Not all models support scenarios.1. Kling supports motion control (motion_control).2. Mingmou supports landscape-to-portrait conversion (land2port).3. Vidu supports special effect templates (template_effect).
                     * @return SceneType Scenario for the generated video.Note: Not all models support scenarios.1. Kling supports motion control (motion_control).2. Mingmou supports landscape-to-portrait conversion (land2port).3. Vidu supports special effect templates (template_effect).
                     * 
                     */
                    std::string GetSceneType() const;

                    /**
                     * 设置Scenario for the generated video.Note: Not all models support scenarios.1. Kling supports motion control (motion_control).2. Mingmou supports landscape-to-portrait conversion (land2port).3. Vidu supports special effect templates (template_effect).
                     * @param _sceneType Scenario for the generated video.Note: Not all models support scenarios.1. Kling supports motion control (motion_control).2. Mingmou supports landscape-to-portrait conversion (land2port).3. Vidu supports special effect templates (template_effect).
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
                     * 获取Description of the generated video. (Note: A maximum of 2000 characters is supported.) This parameter is required when no reference image is specified.
                     * @return Prompt Description of the generated video. (Note: A maximum of 2000 characters is supported.) This parameter is required when no reference image is specified.
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置Description of the generated video. (Note: A maximum of 2000 characters is supported.) This parameter is required when no reference image is specified.
                     * @param _prompt Description of the generated video. (Note: A maximum of 2000 characters is supported.) This parameter is required when no reference image is specified.
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
                     * 获取Content you want to prevent the model from generating.Note: Not all models support this.For example:Top lighting and bright color.People and animals.Multiple vehicles and wind.
                     * @return NegativePrompt Content you want to prevent the model from generating.Note: Not all models support this.For example:Top lighting and bright color.People and animals.Multiple vehicles and wind.
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置Content you want to prevent the model from generating.Note: Not all models support this.For example:Top lighting and bright color.People and animals.Multiple vehicles and wind.
                     * @param _negativePrompt Content you want to prevent the model from generating.Note: Not all models support this.For example:Top lighting and bright color.People and animals.Multiple vehicles and wind.
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
                     * 获取Image URL for video generation. The URL must be accessible from the public network.Note:1. The recommended image size is no more than 10 MB. Different models have different size limits.2. Supported image formats: JPEG and PNG.3. If the OS model is used, the input image dimension should be 1280x720 or 720x1280.
                     * @return ImageUrl Image URL for video generation. The URL must be accessible from the public network.Note:1. The recommended image size is no more than 10 MB. Different models have different size limits.2. Supported image formats: JPEG and PNG.3. If the OS model is used, the input image dimension should be 1280x720 or 720x1280.
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置Image URL for video generation. The URL must be accessible from the public network.Note:1. The recommended image size is no more than 10 MB. Different models have different size limits.2. Supported image formats: JPEG and PNG.3. If the OS model is used, the input image dimension should be 1280x720 or 720x1280.
                     * @param _imageUrl Image URL for video generation. The URL must be accessible from the public network.Note:1. The recommended image size is no more than 10 MB. Different models have different size limits.2. Supported image formats: JPEG and PNG.3. If the OS model is used, the input image dimension should be 1280x720 or 720x1280.
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
                     * 获取The model will generate a video using the image of this parameter as the ending frame.Models that support this parameter:1. GV. If the ending frame image is specified, ImageUrl is required as the starting frame.2. Kling. Version 2.1 supports starting and ending frames with a resolution of 1080P.3. Vidu. q2-pro and q2-turbo support starting and ending frames.Note:1. The recommended image size is no more than 10 MB. Different models have different limits.2. Supported image formats: JPEG and PNG.
                     * @return LastImageUrl The model will generate a video using the image of this parameter as the ending frame.Models that support this parameter:1. GV. If the ending frame image is specified, ImageUrl is required as the starting frame.2. Kling. Version 2.1 supports starting and ending frames with a resolution of 1080P.3. Vidu. q2-pro and q2-turbo support starting and ending frames.Note:1. The recommended image size is no more than 10 MB. Different models have different limits.2. Supported image formats: JPEG and PNG.
                     * 
                     */
                    std::string GetLastImageUrl() const;

                    /**
                     * 设置The model will generate a video using the image of this parameter as the ending frame.Models that support this parameter:1. GV. If the ending frame image is specified, ImageUrl is required as the starting frame.2. Kling. Version 2.1 supports starting and ending frames with a resolution of 1080P.3. Vidu. q2-pro and q2-turbo support starting and ending frames.Note:1. The recommended image size is no more than 10 MB. Different models have different limits.2. Supported image formats: JPEG and PNG.
                     * @param _lastImageUrl The model will generate a video using the image of this parameter as the ending frame.Models that support this parameter:1. GV. If the ending frame image is specified, ImageUrl is required as the starting frame.2. Kling. Version 2.1 supports starting and ending frames with a resolution of 1080P.3. Vidu. q2-pro and q2-turbo support starting and ending frames.Note:1. The recommended image size is no more than 10 MB. Different models have different limits.2. Supported image formats: JPEG and PNG.
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
                     * 获取List of up to 3 asset images, used to describe the images the model should use for video generation.Model that supports multiple images:1. GV. If multiple images are specified, ImageUrl and LastImageUrl are unavailable.2. Vidu supports video generation with multiple reference images. The q2 model accepts 1 to 7 images. The ReferenceType in ImageInfos can be used to specify the subject ID for the input.Note:1. The image size cannot exceed 10 MB.2. Supported image formats: JPEG and PNG.
                     * @return ImageInfos List of up to 3 asset images, used to describe the images the model should use for video generation.Model that supports multiple images:1. GV. If multiple images are specified, ImageUrl and LastImageUrl are unavailable.2. Vidu supports video generation with multiple reference images. The q2 model accepts 1 to 7 images. The ReferenceType in ImageInfos can be used to specify the subject ID for the input.Note:1. The image size cannot exceed 10 MB.2. Supported image formats: JPEG and PNG.
                     * 
                     */
                    std::vector<AigcVideoReferenceImageInfo> GetImageInfos() const;

                    /**
                     * 设置List of up to 3 asset images, used to describe the images the model should use for video generation.Model that supports multiple images:1. GV. If multiple images are specified, ImageUrl and LastImageUrl are unavailable.2. Vidu supports video generation with multiple reference images. The q2 model accepts 1 to 7 images. The ReferenceType in ImageInfos can be used to specify the subject ID for the input.Note:1. The image size cannot exceed 10 MB.2. Supported image formats: JPEG and PNG.
                     * @param _imageInfos List of up to 3 asset images, used to describe the images the model should use for video generation.Model that supports multiple images:1. GV. If multiple images are specified, ImageUrl and LastImageUrl are unavailable.2. Vidu supports video generation with multiple reference images. The q2 model accepts 1 to 7 images. The ReferenceType in ImageInfos can be used to specify the subject ID for the input.Note:1. The image size cannot exceed 10 MB.2. Supported image formats: JPEG and PNG.
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
                     * 获取Duration of the generated video.Note:1. Kling supports 5 and 10 seconds. Default value: 5 seconds.2. The std mode of Hailuo supports 6 and 10 seconds, and other modes support 6 seconds. Default value: 6 seconds.3. Vidu supports 1 to 10 seconds.4. GV supports 8 seconds. Default value: 8 seconds.5. OS supports 4, 8, and 12 seconds. Default value: 8 seconds.
                     * @return Duration Duration of the generated video.Note:1. Kling supports 5 and 10 seconds. Default value: 5 seconds.2. The std mode of Hailuo supports 6 and 10 seconds, and other modes support 6 seconds. Default value: 6 seconds.3. Vidu supports 1 to 10 seconds.4. GV supports 8 seconds. Default value: 8 seconds.5. OS supports 4, 8, and 12 seconds. Default value: 8 seconds.
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置Duration of the generated video.Note:1. Kling supports 5 and 10 seconds. Default value: 5 seconds.2. The std mode of Hailuo supports 6 and 10 seconds, and other modes support 6 seconds. Default value: 6 seconds.3. Vidu supports 1 to 10 seconds.4. GV supports 8 seconds. Default value: 8 seconds.5. OS supports 4, 8, and 12 seconds. Default value: 8 seconds.
                     * @param _duration Duration of the generated video.Note:1. Kling supports 5 and 10 seconds. Default value: 5 seconds.2. The std mode of Hailuo supports 6 and 10 seconds, and other modes support 6 seconds. Default value: 6 seconds.3. Vidu supports 1 to 10 seconds.4. GV supports 8 seconds. Default value: 8 seconds.5. OS supports 4, 8, and 12 seconds. Default value: 8 seconds.
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
                     * 获取Additional parameters required.
                     * @return ExtraParameters Additional parameters required.
                     * 
                     */
                    AigcVideoExtraParam GetExtraParameters() const;

                    /**
                     * 设置Additional parameters required.
                     * @param _extraParameters Additional parameters required.
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
                     * 获取Special scenario parameters required by the model, formatted as a JSON serialized string.Example:{\"camera_control\":{\"type\":\"simple\"}}
                     * @return AdditionalParameters Special scenario parameters required by the model, formatted as a JSON serialized string.Example:{\"camera_control\":{\"type\":\"simple\"}}
                     * 
                     */
                    std::string GetAdditionalParameters() const;

                    /**
                     * 设置Special scenario parameters required by the model, formatted as a JSON serialized string.Example:{\"camera_control\":{\"type\":\"simple\"}}
                     * @param _additionalParameters Special scenario parameters required by the model, formatted as a JSON serialized string.Example:{\"camera_control\":{\"type\":\"simple\"}}
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
Hailuo,
Kling,
Vidu,
OS,
GV.
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * Specific version number of the model. By default, the system uses the supported stable version of the model.1. Hailuo: [02 and 2.3].2. Kling: [2.0, 2.1, 2.5, O1, and 2.6].3. Vidu: [q2, q2-pro, and q2-turbo].4. GV: [3.1].5. OS: [2.0].
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * Scenario for the generated video.Note: Not all models support scenarios.1. Kling supports motion control (motion_control).2. Mingmou supports landscape-to-portrait conversion (land2port).3. Vidu supports special effect templates (template_effect).
                     */
                    std::string m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * Description of the generated video. (Note: A maximum of 2000 characters is supported.) This parameter is required when no reference image is specified.
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * Content you want to prevent the model from generating.Note: Not all models support this.For example:Top lighting and bright color.People and animals.Multiple vehicles and wind.
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * The default value is False, meaning the model follows instructions strictly. For better results with more nuanced prompts, set this parameter to True to automatically optimize the input prompt and improve generation quality.
                     */
                    bool m_enhancePrompt;
                    bool m_enhancePromptHasBeenSet;

                    /**
                     * Image URL for video generation. The URL must be accessible from the public network.Note:1. The recommended image size is no more than 10 MB. Different models have different size limits.2. Supported image formats: JPEG and PNG.3. If the OS model is used, the input image dimension should be 1280x720 or 720x1280.
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * The model will generate a video using the image of this parameter as the ending frame.Models that support this parameter:1. GV. If the ending frame image is specified, ImageUrl is required as the starting frame.2. Kling. Version 2.1 supports starting and ending frames with a resolution of 1080P.3. Vidu. q2-pro and q2-turbo support starting and ending frames.Note:1. The recommended image size is no more than 10 MB. Different models have different limits.2. Supported image formats: JPEG and PNG.
                     */
                    std::string m_lastImageUrl;
                    bool m_lastImageUrlHasBeenSet;

                    /**
                     * List of up to 3 asset images, used to describe the images the model should use for video generation.Model that supports multiple images:1. GV. If multiple images are specified, ImageUrl and LastImageUrl are unavailable.2. Vidu supports video generation with multiple reference images. The q2 model accepts 1 to 7 images. The ReferenceType in ImageInfos can be used to specify the subject ID for the input.Note:1. The image size cannot exceed 10 MB.2. Supported image formats: JPEG and PNG.
                     */
                    std::vector<AigcVideoReferenceImageInfo> m_imageInfos;
                    bool m_imageInfosHasBeenSet;

                    /**
                     * Duration of the generated video.Note:1. Kling supports 5 and 10 seconds. Default value: 5 seconds.2. The std mode of Hailuo supports 6 and 10 seconds, and other modes support 6 seconds. Default value: 6 seconds.3. Vidu supports 1 to 10 seconds.4. GV supports 8 seconds. Default value: 8 seconds.5. OS supports 4, 8, and 12 seconds. Default value: 8 seconds.
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Additional parameters required.
                     */
                    AigcVideoExtraParam m_extraParameters;
                    bool m_extraParametersHasBeenSet;

                    /**
                     * COS bucket information for the file result. Note: COS is required and the MPS_QcsRole role needs to be created and authorized.
                     */
                    AigcStoreCosParam m_storeCosParam;
                    bool m_storeCosParamHasBeenSet;

                    /**
                     * Special scenario parameters required by the model, formatted as a JSON serialized string.Example:{\"camera_control\":{\"type\":\"simple\"}}
                     */
                    std::string m_additionalParameters;
                    bool m_additionalParametersHasBeenSet;

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

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIGCVIDEOTASKREQUEST_H_
