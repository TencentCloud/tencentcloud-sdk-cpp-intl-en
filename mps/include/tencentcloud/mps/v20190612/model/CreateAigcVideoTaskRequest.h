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
                     * 获取<p>Model name.<br>Supported models:<br>Hunyuan.<br>Hailuo.<br>Kling.<br>Vidu.<br>PixVerse.<br>Mingmou.<br>H2.</p>
                     * @return ModelName <p>Model name.<br>Supported models:<br>Hunyuan.<br>Hailuo.<br>Kling.<br>Vidu.<br>PixVerse.<br>Mingmou.<br>H2.</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>Model name.<br>Supported models:<br>Hunyuan.<br>Hailuo.<br>Kling.<br>Vidu.<br>PixVerse.<br>Mingmou.<br>H2.</p>
                     * @param _modelName <p>Model name.<br>Supported models:<br>Hunyuan.<br>Hailuo.<br>Kling.<br>Vidu.<br>PixVerse.<br>Mingmou.<br>H2.</p>
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
                     * 获取<p>Specific version number of the model. By default, the system uses the supported stable version of the model.</p><ol><li>Hunyuan: [1.5].</li><li>Hailuo: [02, 2.3, and 2.3-fast].</li><li>Kling: [1.6, 2.0, 2.1, 2.5, O1, 2.6, 3.0, and 3.0-Omni].</li><li>Vidu: [q2, q2-pro, q2-turbo, q3-pro, q3-turbo, q3, and q3-mix].</li><li>PixVerse: [v5.6, v6, and c1].</li><li>H2: [1.0].</li></ol>
                     * @return ModelVersion <p>Specific version number of the model. By default, the system uses the supported stable version of the model.</p><ol><li>Hunyuan: [1.5].</li><li>Hailuo: [02, 2.3, and 2.3-fast].</li><li>Kling: [1.6, 2.0, 2.1, 2.5, O1, 2.6, 3.0, and 3.0-Omni].</li><li>Vidu: [q2, q2-pro, q2-turbo, q3-pro, q3-turbo, q3, and q3-mix].</li><li>PixVerse: [v5.6, v6, and c1].</li><li>H2: [1.0].</li></ol>
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置<p>Specific version number of the model. By default, the system uses the supported stable version of the model.</p><ol><li>Hunyuan: [1.5].</li><li>Hailuo: [02, 2.3, and 2.3-fast].</li><li>Kling: [1.6, 2.0, 2.1, 2.5, O1, 2.6, 3.0, and 3.0-Omni].</li><li>Vidu: [q2, q2-pro, q2-turbo, q3-pro, q3-turbo, q3, and q3-mix].</li><li>PixVerse: [v5.6, v6, and c1].</li><li>H2: [1.0].</li></ol>
                     * @param _modelVersion <p>Specific version number of the model. By default, the system uses the supported stable version of the model.</p><ol><li>Hunyuan: [1.5].</li><li>Hailuo: [02, 2.3, and 2.3-fast].</li><li>Kling: [1.6, 2.0, 2.1, 2.5, O1, 2.6, 3.0, and 3.0-Omni].</li><li>Vidu: [q2, q2-pro, q2-turbo, q3-pro, q3-turbo, q3, and q3-mix].</li><li>PixVerse: [v5.6, v6, and c1].</li><li>H2: [1.0].</li></ol>
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
                     * 获取<p>Scenario for the generated video.<br>Note: Not all models support scenarios.</p><ol><li>Kling supports: motion control (motion_control), digital human (avatar_i2v), and lip sync (lip_sync).</li><li>Mingmou supports: landscape-to-portrait conversion (land2port).</li><li>Vidu supports: effect templates (template_effect).</li><li>Hunyuan supports: 3D world model (3d_scene). The returned file is not a video.</li></ol>
                     * @return SceneType <p>Scenario for the generated video.<br>Note: Not all models support scenarios.</p><ol><li>Kling supports: motion control (motion_control), digital human (avatar_i2v), and lip sync (lip_sync).</li><li>Mingmou supports: landscape-to-portrait conversion (land2port).</li><li>Vidu supports: effect templates (template_effect).</li><li>Hunyuan supports: 3D world model (3d_scene). The returned file is not a video.</li></ol>
                     * 
                     */
                    std::string GetSceneType() const;

                    /**
                     * 设置<p>Scenario for the generated video.<br>Note: Not all models support scenarios.</p><ol><li>Kling supports: motion control (motion_control), digital human (avatar_i2v), and lip sync (lip_sync).</li><li>Mingmou supports: landscape-to-portrait conversion (land2port).</li><li>Vidu supports: effect templates (template_effect).</li><li>Hunyuan supports: 3D world model (3d_scene). The returned file is not a video.</li></ol>
                     * @param _sceneType <p>Scenario for the generated video.<br>Note: Not all models support scenarios.</p><ol><li>Kling supports: motion control (motion_control), digital human (avatar_i2v), and lip sync (lip_sync).</li><li>Mingmou supports: landscape-to-portrait conversion (land2port).</li><li>Vidu supports: effect templates (template_effect).</li><li>Hunyuan supports: 3D world model (3d_scene). The returned file is not a video.</li></ol>
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
                     * 获取<p>Description of the generated video. This parameter is required when no image is specified.</p>
                     * @return Prompt <p>Description of the generated video. This parameter is required when no image is specified.</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>Description of the generated video. This parameter is required when no image is specified.</p>
                     * @param _prompt <p>Description of the generated video. This parameter is required when no image is specified.</p>
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
                     * 获取<p>Specifies the content you want to prevent the model from generating.<br>Note: Not all models support this.<br>For example:<br>Top lighting and bright colors.<br>People and animals.<br>Multiple vehicles and wind.</p>
                     * @return NegativePrompt <p>Specifies the content you want to prevent the model from generating.<br>Note: Not all models support this.<br>For example:<br>Top lighting and bright colors.<br>People and animals.<br>Multiple vehicles and wind.</p>
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置<p>Specifies the content you want to prevent the model from generating.<br>Note: Not all models support this.<br>For example:<br>Top lighting and bright colors.<br>People and animals.<br>Multiple vehicles and wind.</p>
                     * @param _negativePrompt <p>Specifies the content you want to prevent the model from generating.<br>Note: Not all models support this.<br>For example:<br>Top lighting and bright colors.<br>People and animals.<br>Multiple vehicles and wind.</p>
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
                     * 获取<p>Image URL used for video generation. The URL must be accessible from the public network.<br>Note:</p><ol><li>The recommended image size is no more than 10 MB. Different models have different size limits. See the model website for a more complete description.</li><li>Supported image formats: JPEG and PNG.</li></ol>
                     * @return ImageUrl <p>Image URL used for video generation. The URL must be accessible from the public network.<br>Note:</p><ol><li>The recommended image size is no more than 10 MB. Different models have different size limits. See the model website for a more complete description.</li><li>Supported image formats: JPEG and PNG.</li></ol>
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置<p>Image URL used for video generation. The URL must be accessible from the public network.<br>Note:</p><ol><li>The recommended image size is no more than 10 MB. Different models have different size limits. See the model website for a more complete description.</li><li>Supported image formats: JPEG and PNG.</li></ol>
                     * @param _imageUrl <p>Image URL used for video generation. The URL must be accessible from the public network.<br>Note:</p><ol><li>The recommended image size is no more than 10 MB. Different models have different size limits. See the model website for a more complete description.</li><li>Supported image formats: JPEG and PNG.</li></ol>
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
                     * 获取<p>The model will generate a video using the image of this parameter as the ending frame.<br>Models that support this parameter:</p><ol><li>Kling 2.0, O1, 3.0, and 3.0-Omni support starting and ending frames.</li><li>Kling 1.6, 2.1, 2.5, and 2.6 support starting and ending frames with Resolution:1080p.</li><li>Vidu q2-pro, q2-turbo, q3-pro, and q3-turbo support starting and ending frames.</li><li>PixVerse v5.6, v6, and c1 support starting and ending frames.</li><li>Hailuo 02 supports starting and ending frames.</li></ol><p>Note:</p><ol><li>The recommended image size is no more than 10 MB. Different models have different limits.</li><li>Supported image formats: JPEG and PNG.</li></ol>
                     * @return LastImageUrl <p>The model will generate a video using the image of this parameter as the ending frame.<br>Models that support this parameter:</p><ol><li>Kling 2.0, O1, 3.0, and 3.0-Omni support starting and ending frames.</li><li>Kling 1.6, 2.1, 2.5, and 2.6 support starting and ending frames with Resolution:1080p.</li><li>Vidu q2-pro, q2-turbo, q3-pro, and q3-turbo support starting and ending frames.</li><li>PixVerse v5.6, v6, and c1 support starting and ending frames.</li><li>Hailuo 02 supports starting and ending frames.</li></ol><p>Note:</p><ol><li>The recommended image size is no more than 10 MB. Different models have different limits.</li><li>Supported image formats: JPEG and PNG.</li></ol>
                     * 
                     */
                    std::string GetLastImageUrl() const;

                    /**
                     * 设置<p>The model will generate a video using the image of this parameter as the ending frame.<br>Models that support this parameter:</p><ol><li>Kling 2.0, O1, 3.0, and 3.0-Omni support starting and ending frames.</li><li>Kling 1.6, 2.1, 2.5, and 2.6 support starting and ending frames with Resolution:1080p.</li><li>Vidu q2-pro, q2-turbo, q3-pro, and q3-turbo support starting and ending frames.</li><li>PixVerse v5.6, v6, and c1 support starting and ending frames.</li><li>Hailuo 02 supports starting and ending frames.</li></ol><p>Note:</p><ol><li>The recommended image size is no more than 10 MB. Different models have different limits.</li><li>Supported image formats: JPEG and PNG.</li></ol>
                     * @param _lastImageUrl <p>The model will generate a video using the image of this parameter as the ending frame.<br>Models that support this parameter:</p><ol><li>Kling 2.0, O1, 3.0, and 3.0-Omni support starting and ending frames.</li><li>Kling 1.6, 2.1, 2.5, and 2.6 support starting and ending frames with Resolution:1080p.</li><li>Vidu q2-pro, q2-turbo, q3-pro, and q3-turbo support starting and ending frames.</li><li>PixVerse v5.6, v6, and c1 support starting and ending frames.</li><li>Hailuo 02 supports starting and ending frames.</li></ol><p>Note:</p><ol><li>The recommended image size is no more than 10 MB. Different models have different limits.</li><li>Supported image formats: JPEG and PNG.</li></ol>
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
                     * 获取<p>List of multiple asset resource images used to describe the resource images used by the model for video generation.</p><p>Models that support multiple images:</p><ol><li>Vidu q2, q2-pro, q3-turbo, q3, and q3-mix support video generation with multiple reference images. One to 7 images can be uploaded. The ReferenceType in ImageInfos can be used to specify the subject ID for the input.</li><li>Kling O1, 3.0-Omni, and 1.6 support video generation with multiple reference images.<ol><li>Kling 1.6 allows uploading 1 to 4 images.</li><li>Kling O1 and 3.0-Omni allow uploading 1 to 7 images. If a reference video is present, 0 to 4 images can be uploaded.</li></ol></li><li>PixVerse, v5.6, v6, and c1 support video generation with multiple reference images. One to 7 images can be uploaded, and image names need to be specified via the Text field in ImageInfos.</li><li>H2 1.0 supports video generation with multiple image parameters. One to 9 images can be uploaded. If a reference video is present, 0 to 5 images can be uploaded.</li></ol><p>Note:</p><ol><li>The image size cannot exceed 10 MB.</li><li>Supported image formats: JPEG and PNG.</li></ol>
                     * @return ImageInfos <p>List of multiple asset resource images used to describe the resource images used by the model for video generation.</p><p>Models that support multiple images:</p><ol><li>Vidu q2, q2-pro, q3-turbo, q3, and q3-mix support video generation with multiple reference images. One to 7 images can be uploaded. The ReferenceType in ImageInfos can be used to specify the subject ID for the input.</li><li>Kling O1, 3.0-Omni, and 1.6 support video generation with multiple reference images.<ol><li>Kling 1.6 allows uploading 1 to 4 images.</li><li>Kling O1 and 3.0-Omni allow uploading 1 to 7 images. If a reference video is present, 0 to 4 images can be uploaded.</li></ol></li><li>PixVerse, v5.6, v6, and c1 support video generation with multiple reference images. One to 7 images can be uploaded, and image names need to be specified via the Text field in ImageInfos.</li><li>H2 1.0 supports video generation with multiple image parameters. One to 9 images can be uploaded. If a reference video is present, 0 to 5 images can be uploaded.</li></ol><p>Note:</p><ol><li>The image size cannot exceed 10 MB.</li><li>Supported image formats: JPEG and PNG.</li></ol>
                     * 
                     */
                    std::vector<AigcVideoReferenceImageInfo> GetImageInfos() const;

                    /**
                     * 设置<p>List of multiple asset resource images used to describe the resource images used by the model for video generation.</p><p>Models that support multiple images:</p><ol><li>Vidu q2, q2-pro, q3-turbo, q3, and q3-mix support video generation with multiple reference images. One to 7 images can be uploaded. The ReferenceType in ImageInfos can be used to specify the subject ID for the input.</li><li>Kling O1, 3.0-Omni, and 1.6 support video generation with multiple reference images.<ol><li>Kling 1.6 allows uploading 1 to 4 images.</li><li>Kling O1 and 3.0-Omni allow uploading 1 to 7 images. If a reference video is present, 0 to 4 images can be uploaded.</li></ol></li><li>PixVerse, v5.6, v6, and c1 support video generation with multiple reference images. One to 7 images can be uploaded, and image names need to be specified via the Text field in ImageInfos.</li><li>H2 1.0 supports video generation with multiple image parameters. One to 9 images can be uploaded. If a reference video is present, 0 to 5 images can be uploaded.</li></ol><p>Note:</p><ol><li>The image size cannot exceed 10 MB.</li><li>Supported image formats: JPEG and PNG.</li></ol>
                     * @param _imageInfos <p>List of multiple asset resource images used to describe the resource images used by the model for video generation.</p><p>Models that support multiple images:</p><ol><li>Vidu q2, q2-pro, q3-turbo, q3, and q3-mix support video generation with multiple reference images. One to 7 images can be uploaded. The ReferenceType in ImageInfos can be used to specify the subject ID for the input.</li><li>Kling O1, 3.0-Omni, and 1.6 support video generation with multiple reference images.<ol><li>Kling 1.6 allows uploading 1 to 4 images.</li><li>Kling O1 and 3.0-Omni allow uploading 1 to 7 images. If a reference video is present, 0 to 4 images can be uploaded.</li></ol></li><li>PixVerse, v5.6, v6, and c1 support video generation with multiple reference images. One to 7 images can be uploaded, and image names need to be specified via the Text field in ImageInfos.</li><li>H2 1.0 supports video generation with multiple image parameters. One to 9 images can be uploaded. If a reference video is present, 0 to 5 images can be uploaded.</li></ol><p>Note:</p><ol><li>The image size cannot exceed 10 MB.</li><li>Supported image formats: JPEG and PNG.</li></ol>
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
                     * 获取<p>Only Kling O1, Kling 3.0-Omni, Vidu q2-pro, and H2 1.0 support reference video information.</p><ol><li>For Kling O1 and 3.0-Omni, the reference video can be used as a feature reference video or a video for editing. The default type is video for editing. You can choose to keep the original sound of the video.</li><li>Vidu q2-pro supports video reference.</li><li>H2 1.0 supports video reference.</li></ol>
                     * @return VideoInfos <p>Only Kling O1, Kling 3.0-Omni, Vidu q2-pro, and H2 1.0 support reference video information.</p><ol><li>For Kling O1 and 3.0-Omni, the reference video can be used as a feature reference video or a video for editing. The default type is video for editing. You can choose to keep the original sound of the video.</li><li>Vidu q2-pro supports video reference.</li><li>H2 1.0 supports video reference.</li></ol>
                     * 
                     */
                    std::vector<AigcVideoReferenceVideoInfo> GetVideoInfos() const;

                    /**
                     * 设置<p>Only Kling O1, Kling 3.0-Omni, Vidu q2-pro, and H2 1.0 support reference video information.</p><ol><li>For Kling O1 and 3.0-Omni, the reference video can be used as a feature reference video or a video for editing. The default type is video for editing. You can choose to keep the original sound of the video.</li><li>Vidu q2-pro supports video reference.</li><li>H2 1.0 supports video reference.</li></ol>
                     * @param _videoInfos <p>Only Kling O1, Kling 3.0-Omni, Vidu q2-pro, and H2 1.0 support reference video information.</p><ol><li>For Kling O1 and 3.0-Omni, the reference video can be used as a feature reference video or a video for editing. The default type is video for editing. You can choose to keep the original sound of the video.</li><li>Vidu q2-pro supports video reference.</li><li>H2 1.0 supports video reference.</li></ol>
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
                     * 获取<p>Duration of the generated video.<br>Note:</p><ol><li>Kling: default value: 5 seconds.<ul><li>O1 supports 3 to 10 seconds.</li><li>3.0-Omni supports 3 to 15 seconds, or 3 to 10 seconds when a video reference is used.</li><li>3.0 supports 3 to 15 seconds.</li><li>Other versions support 5 and 10 seconds.</li></ul></li><li>The std mode of Hailuo supports 6 and 10 seconds, and other modes support 6 seconds. Default value: 6 seconds.</li><li>Vidu: default value: 5 seconds.<ul><li>q3-pro, q3-turbo, q3, and q3-mix support 3 to 16 seconds.</li><li>q2-pro, q2-turbo, and q2 support 1 to 10 seconds.</li></ul></li><li>PixVerse: default value: 5 seconds.<ul><li>v5.6 supports 5, 8, and 10 seconds.</li><li>v6 and c1 support 1 to 15 seconds.</li></ul></li><li>H2 supports 3 to 15 seconds. Default value: 5 seconds.</li></ol>
                     * @return Duration <p>Duration of the generated video.<br>Note:</p><ol><li>Kling: default value: 5 seconds.<ul><li>O1 supports 3 to 10 seconds.</li><li>3.0-Omni supports 3 to 15 seconds, or 3 to 10 seconds when a video reference is used.</li><li>3.0 supports 3 to 15 seconds.</li><li>Other versions support 5 and 10 seconds.</li></ul></li><li>The std mode of Hailuo supports 6 and 10 seconds, and other modes support 6 seconds. Default value: 6 seconds.</li><li>Vidu: default value: 5 seconds.<ul><li>q3-pro, q3-turbo, q3, and q3-mix support 3 to 16 seconds.</li><li>q2-pro, q2-turbo, and q2 support 1 to 10 seconds.</li></ul></li><li>PixVerse: default value: 5 seconds.<ul><li>v5.6 supports 5, 8, and 10 seconds.</li><li>v6 and c1 support 1 to 15 seconds.</li></ul></li><li>H2 supports 3 to 15 seconds. Default value: 5 seconds.</li></ol>
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置<p>Duration of the generated video.<br>Note:</p><ol><li>Kling: default value: 5 seconds.<ul><li>O1 supports 3 to 10 seconds.</li><li>3.0-Omni supports 3 to 15 seconds, or 3 to 10 seconds when a video reference is used.</li><li>3.0 supports 3 to 15 seconds.</li><li>Other versions support 5 and 10 seconds.</li></ul></li><li>The std mode of Hailuo supports 6 and 10 seconds, and other modes support 6 seconds. Default value: 6 seconds.</li><li>Vidu: default value: 5 seconds.<ul><li>q3-pro, q3-turbo, q3, and q3-mix support 3 to 16 seconds.</li><li>q2-pro, q2-turbo, and q2 support 1 to 10 seconds.</li></ul></li><li>PixVerse: default value: 5 seconds.<ul><li>v5.6 supports 5, 8, and 10 seconds.</li><li>v6 and c1 support 1 to 15 seconds.</li></ul></li><li>H2 supports 3 to 15 seconds. Default value: 5 seconds.</li></ol>
                     * @param _duration <p>Duration of the generated video.<br>Note:</p><ol><li>Kling: default value: 5 seconds.<ul><li>O1 supports 3 to 10 seconds.</li><li>3.0-Omni supports 3 to 15 seconds, or 3 to 10 seconds when a video reference is used.</li><li>3.0 supports 3 to 15 seconds.</li><li>Other versions support 5 and 10 seconds.</li></ul></li><li>The std mode of Hailuo supports 6 and 10 seconds, and other modes support 6 seconds. Default value: 6 seconds.</li><li>Vidu: default value: 5 seconds.<ul><li>q3-pro, q3-turbo, q3, and q3-mix support 3 to 16 seconds.</li><li>q2-pro, q2-turbo, and q2 support 1 to 10 seconds.</li></ul></li><li>PixVerse: default value: 5 seconds.<ul><li>v5.6 supports 5, 8, and 10 seconds.</li><li>v6 and c1 support 1 to 15 seconds.</li></ul></li><li>H2 supports 3 to 15 seconds. Default value: 5 seconds.</li></ol>
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
                     * 获取<p>Additional parameters required.</p>
                     * @return ExtraParameters <p>Additional parameters required.</p>
                     * 
                     */
                    AigcVideoExtraParam GetExtraParameters() const;

                    /**
                     * 设置<p>Additional parameters required.</p>
                     * @param _extraParameters <p>Additional parameters required.</p>
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
                     * 获取<p>Special scenario parameters or storyboard prompts required by the model, formatted as a JSON serialized string.<br>Example:<br>{"camera_control":{"type":"simple"}}.</p>
                     * @return AdditionalParameters <p>Special scenario parameters or storyboard prompts required by the model, formatted as a JSON serialized string.<br>Example:<br>{"camera_control":{"type":"simple"}}.</p>
                     * 
                     */
                    std::string GetAdditionalParameters() const;

                    /**
                     * 设置<p>Special scenario parameters or storyboard prompts required by the model, formatted as a JSON serialized string.<br>Example:<br>{"camera_control":{"type":"simple"}}.</p>
                     * @param _additionalParameters <p>Special scenario parameters or storyboard prompts required by the model, formatted as a JSON serialized string.<br>Example:<br>{"camera_control":{"type":"simple"}}.</p>
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
                     * <p>Model name.<br>Supported models:<br>Hunyuan.<br>Hailuo.<br>Kling.<br>Vidu.<br>PixVerse.<br>Mingmou.<br>H2.</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>Specific version number of the model. By default, the system uses the supported stable version of the model.</p><ol><li>Hunyuan: [1.5].</li><li>Hailuo: [02, 2.3, and 2.3-fast].</li><li>Kling: [1.6, 2.0, 2.1, 2.5, O1, 2.6, 3.0, and 3.0-Omni].</li><li>Vidu: [q2, q2-pro, q2-turbo, q3-pro, q3-turbo, q3, and q3-mix].</li><li>PixVerse: [v5.6, v6, and c1].</li><li>H2: [1.0].</li></ol>
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * <p>Scenario for the generated video.<br>Note: Not all models support scenarios.</p><ol><li>Kling supports: motion control (motion_control), digital human (avatar_i2v), and lip sync (lip_sync).</li><li>Mingmou supports: landscape-to-portrait conversion (land2port).</li><li>Vidu supports: effect templates (template_effect).</li><li>Hunyuan supports: 3D world model (3d_scene). The returned file is not a video.</li></ol>
                     */
                    std::string m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * <p>Description of the generated video. This parameter is required when no image is specified.</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>Specifies the content you want to prevent the model from generating.<br>Note: Not all models support this.<br>For example:<br>Top lighting and bright colors.<br>People and animals.<br>Multiple vehicles and wind.</p>
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * <p>The default value is False, meaning the model follows instructions strictly.<br>For better results with more nuanced prompts, set this parameter to True to automatically optimize the input prompt and improve generation quality.</p>
                     */
                    bool m_enhancePrompt;
                    bool m_enhancePromptHasBeenSet;

                    /**
                     * <p>Image URL used for video generation. The URL must be accessible from the public network.<br>Note:</p><ol><li>The recommended image size is no more than 10 MB. Different models have different size limits. See the model website for a more complete description.</li><li>Supported image formats: JPEG and PNG.</li></ol>
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * <p>The model will generate a video using the image of this parameter as the ending frame.<br>Models that support this parameter:</p><ol><li>Kling 2.0, O1, 3.0, and 3.0-Omni support starting and ending frames.</li><li>Kling 1.6, 2.1, 2.5, and 2.6 support starting and ending frames with Resolution:1080p.</li><li>Vidu q2-pro, q2-turbo, q3-pro, and q3-turbo support starting and ending frames.</li><li>PixVerse v5.6, v6, and c1 support starting and ending frames.</li><li>Hailuo 02 supports starting and ending frames.</li></ol><p>Note:</p><ol><li>The recommended image size is no more than 10 MB. Different models have different limits.</li><li>Supported image formats: JPEG and PNG.</li></ol>
                     */
                    std::string m_lastImageUrl;
                    bool m_lastImageUrlHasBeenSet;

                    /**
                     * <p>List of multiple asset resource images used to describe the resource images used by the model for video generation.</p><p>Models that support multiple images:</p><ol><li>Vidu q2, q2-pro, q3-turbo, q3, and q3-mix support video generation with multiple reference images. One to 7 images can be uploaded. The ReferenceType in ImageInfos can be used to specify the subject ID for the input.</li><li>Kling O1, 3.0-Omni, and 1.6 support video generation with multiple reference images.<ol><li>Kling 1.6 allows uploading 1 to 4 images.</li><li>Kling O1 and 3.0-Omni allow uploading 1 to 7 images. If a reference video is present, 0 to 4 images can be uploaded.</li></ol></li><li>PixVerse, v5.6, v6, and c1 support video generation with multiple reference images. One to 7 images can be uploaded, and image names need to be specified via the Text field in ImageInfos.</li><li>H2 1.0 supports video generation with multiple image parameters. One to 9 images can be uploaded. If a reference video is present, 0 to 5 images can be uploaded.</li></ol><p>Note:</p><ol><li>The image size cannot exceed 10 MB.</li><li>Supported image formats: JPEG and PNG.</li></ol>
                     */
                    std::vector<AigcVideoReferenceImageInfo> m_imageInfos;
                    bool m_imageInfosHasBeenSet;

                    /**
                     * <p>Only Kling O1, Kling 3.0-Omni, Vidu q2-pro, and H2 1.0 support reference video information.</p><ol><li>For Kling O1 and 3.0-Omni, the reference video can be used as a feature reference video or a video for editing. The default type is video for editing. You can choose to keep the original sound of the video.</li><li>Vidu q2-pro supports video reference.</li><li>H2 1.0 supports video reference.</li></ol>
                     */
                    std::vector<AigcVideoReferenceVideoInfo> m_videoInfos;
                    bool m_videoInfosHasBeenSet;

                    /**
                     * <p>Duration of the generated video.<br>Note:</p><ol><li>Kling: default value: 5 seconds.<ul><li>O1 supports 3 to 10 seconds.</li><li>3.0-Omni supports 3 to 15 seconds, or 3 to 10 seconds when a video reference is used.</li><li>3.0 supports 3 to 15 seconds.</li><li>Other versions support 5 and 10 seconds.</li></ul></li><li>The std mode of Hailuo supports 6 and 10 seconds, and other modes support 6 seconds. Default value: 6 seconds.</li><li>Vidu: default value: 5 seconds.<ul><li>q3-pro, q3-turbo, q3, and q3-mix support 3 to 16 seconds.</li><li>q2-pro, q2-turbo, and q2 support 1 to 10 seconds.</li></ul></li><li>PixVerse: default value: 5 seconds.<ul><li>v5.6 supports 5, 8, and 10 seconds.</li><li>v6 and c1 support 1 to 15 seconds.</li></ul></li><li>H2 supports 3 to 15 seconds. Default value: 5 seconds.</li></ol>
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>Additional parameters required.</p>
                     */
                    AigcVideoExtraParam m_extraParameters;
                    bool m_extraParametersHasBeenSet;

                    /**
                     * <p>COS bucket information for the file result. Note: COS is required and the MPS_QcsRole role needs to be created and authorized.</p>
                     */
                    AigcStoreCosParam m_storeCosParam;
                    bool m_storeCosParamHasBeenSet;

                    /**
                     * <p>Special scenario parameters or storyboard prompts required by the model, formatted as a JSON serialized string.<br>Example:<br>{"camera_control":{"type":"simple"}}.</p>
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

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIGCVIDEOTASKREQUEST_H_
