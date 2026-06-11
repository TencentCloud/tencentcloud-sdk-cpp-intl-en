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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCIMAGETASKREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCIMAGETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcImageTaskInputFileInfo.h>
#include <tencentcloud/vod/v20180717/model/AigcImageOutputConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
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
                     * 获取<p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications, whether it is the default application or a newly created application.</b></p>
                     * @return SubAppId <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications, whether it is the default application or a newly created application.</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications, whether it is the default application or a newly created application.</b></p>
                     * @param _subAppId <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications, whether it is the default application or a newly created application.</b></p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Model name. Value:</p><li>OG</li><li>GG</li><li>SI</li><li>Qwen</li><li>Hunyuan</li><li>Vidu</li><li>Kling</li>
                     * @return ModelName <p>Model name. Value:</p><li>OG</li><li>GG</li><li>SI</li><li>Qwen</li><li>Hunyuan</li><li>Vidu</li><li>Kling</li>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>Model name. Value:</p><li>OG</li><li>GG</li><li>SI</li><li>Qwen</li><li>Hunyuan</li><li>Vidu</li><li>Kling</li>
                     * @param _modelName <p>Model name. Value:</p><li>OG</li><li>GG</li><li>SI</li><li>Qwen</li><li>Hunyuan</li><li>Vidu</li><li>Kling</li>
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
                     * 获取<p>Model version. Parameter:</p><li>When ModelName is OG, available values are image2_low, image2_medium, image2_high;</li><li>When ModelName is GG, available values are 2.5, 3.0, 3.1;</li><li>When ModelName is Jimeng, available values are 4.0;</li><li>When ModelName is SI, available values are 4.0, 4.5, 5.0-lite;</li><li>When ModelName is Qwen, available values are 0925;</li><li>When ModelName is Hunyuan, available values are 3.0;</li><li>When ModelName is Vidu, available values are q2;</li><li>When ModelName is Kling, available values are 2.1, 3.0, 3.0-Omni, O1, scene;</li>
                     * @return ModelVersion <p>Model version. Parameter:</p><li>When ModelName is OG, available values are image2_low, image2_medium, image2_high;</li><li>When ModelName is GG, available values are 2.5, 3.0, 3.1;</li><li>When ModelName is Jimeng, available values are 4.0;</li><li>When ModelName is SI, available values are 4.0, 4.5, 5.0-lite;</li><li>When ModelName is Qwen, available values are 0925;</li><li>When ModelName is Hunyuan, available values are 3.0;</li><li>When ModelName is Vidu, available values are q2;</li><li>When ModelName is Kling, available values are 2.1, 3.0, 3.0-Omni, O1, scene;</li>
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置<p>Model version. Parameter:</p><li>When ModelName is OG, available values are image2_low, image2_medium, image2_high;</li><li>When ModelName is GG, available values are 2.5, 3.0, 3.1;</li><li>When ModelName is Jimeng, available values are 4.0;</li><li>When ModelName is SI, available values are 4.0, 4.5, 5.0-lite;</li><li>When ModelName is Qwen, available values are 0925;</li><li>When ModelName is Hunyuan, available values are 3.0;</li><li>When ModelName is Vidu, available values are q2;</li><li>When ModelName is Kling, available values are 2.1, 3.0, 3.0-Omni, O1, scene;</li>
                     * @param _modelVersion <p>Model version. Parameter:</p><li>When ModelName is OG, available values are image2_low, image2_medium, image2_high;</li><li>When ModelName is GG, available values are 2.5, 3.0, 3.1;</li><li>When ModelName is Jimeng, available values are 4.0;</li><li>When ModelName is SI, available values are 4.0, 4.5, 5.0-lite;</li><li>When ModelName is Qwen, available values are 0925;</li><li>When ModelName is Hunyuan, available values are 3.0;</li><li>When ModelName is Vidu, available values are q2;</li><li>When ModelName is Kling, available values are 2.1, 3.0, 3.0-Omni, O1, scene;</li>
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
                     * 获取<p>File information of the input image for the AIGC image generation task. Maximum number of reference images supported by each model:</p><ul><li>GG 2.5: 3;</li><li>GG 3.0: 14;</li><li>GG 3.1: 14;</li><li>Kling 2.1: 4;</li><li>Kling 3.0: 1;</li><li>Kling 3.0-Omni: 10;</li><li>Kling O1: 10;</li><li>SI 4.0: 14;</li><li>SI 4.5: 14;</li><li>SI 5.0-lite: 14;</li><li>Vidu q2: 7;</li><li>Hunyuan 3.0: 3;</li><li>Qwen 0925: 1;</li><li>MJ v7: 3.</li></ul>
                     * @return FileInfos <p>File information of the input image for the AIGC image generation task. Maximum number of reference images supported by each model:</p><ul><li>GG 2.5: 3;</li><li>GG 3.0: 14;</li><li>GG 3.1: 14;</li><li>Kling 2.1: 4;</li><li>Kling 3.0: 1;</li><li>Kling 3.0-Omni: 10;</li><li>Kling O1: 10;</li><li>SI 4.0: 14;</li><li>SI 4.5: 14;</li><li>SI 5.0-lite: 14;</li><li>Vidu q2: 7;</li><li>Hunyuan 3.0: 3;</li><li>Qwen 0925: 1;</li><li>MJ v7: 3.</li></ul>
                     * 
                     */
                    std::vector<AigcImageTaskInputFileInfo> GetFileInfos() const;

                    /**
                     * 设置<p>File information of the input image for the AIGC image generation task. Maximum number of reference images supported by each model:</p><ul><li>GG 2.5: 3;</li><li>GG 3.0: 14;</li><li>GG 3.1: 14;</li><li>Kling 2.1: 4;</li><li>Kling 3.0: 1;</li><li>Kling 3.0-Omni: 10;</li><li>Kling O1: 10;</li><li>SI 4.0: 14;</li><li>SI 4.5: 14;</li><li>SI 5.0-lite: 14;</li><li>Vidu q2: 7;</li><li>Hunyuan 3.0: 3;</li><li>Qwen 0925: 1;</li><li>MJ v7: 3.</li></ul>
                     * @param _fileInfos <p>File information of the input image for the AIGC image generation task. Maximum number of reference images supported by each model:</p><ul><li>GG 2.5: 3;</li><li>GG 3.0: 14;</li><li>GG 3.1: 14;</li><li>Kling 2.1: 4;</li><li>Kling 3.0: 1;</li><li>Kling 3.0-Omni: 10;</li><li>Kling O1: 10;</li><li>SI 4.0: 14;</li><li>SI 4.5: 14;</li><li>SI 5.0-lite: 14;</li><li>Vidu q2: 7;</li><li>Hunyuan 3.0: 3;</li><li>Qwen 0925: 1;</li><li>MJ v7: 3.</li></ul>
                     * 
                     */
                    void SetFileInfos(const std::vector<AigcImageTaskInputFileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取<p>Prompt for image generation. This parameter is required when FileInfos is empty.</p>
                     * @return Prompt <p>Prompt for image generation. This parameter is required when FileInfos is empty.</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>Prompt for image generation. This parameter is required when FileInfos is empty.</p>
                     * @param _prompt <p>Prompt for image generation. This parameter is required when FileInfos is empty.</p>
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
                     * 获取<p>To prevent the model from generating image prompts.</p>
                     * @return NegativePrompt <p>To prevent the model from generating image prompts.</p>
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置<p>To prevent the model from generating image prompts.</p>
                     * @param _negativePrompt <p>To prevent the model from generating image prompts.</p>
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
                     * 获取<p>Whether to optimize Prompt content automatically. When Enabled, the passed in Prompt will be optimized automatically to enhance generation quality. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li></p>
                     * @return EnhancePrompt <p>Whether to optimize Prompt content automatically. When Enabled, the passed in Prompt will be optimized automatically to enhance generation quality. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li></p>
                     * 
                     */
                    std::string GetEnhancePrompt() const;

                    /**
                     * 设置<p>Whether to optimize Prompt content automatically. When Enabled, the passed in Prompt will be optimized automatically to enhance generation quality. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li></p>
                     * @param _enhancePrompt <p>Whether to optimize Prompt content automatically. When Enabled, the passed in Prompt will be optimized automatically to enhance generation quality. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li></p>
                     * 
                     */
                    void SetEnhancePrompt(const std::string& _enhancePrompt);

                    /**
                     * 判断参数 EnhancePrompt 是否已赋值
                     * @return EnhancePrompt 是否已赋值
                     * 
                     */
                    bool EnhancePromptHasBeenSet() const;

                    /**
                     * 获取<p>Output media file configuration for the image generation task.</p>
                     * @return OutputConfig <p>Output media file configuration for the image generation task.</p>
                     * 
                     */
                    AigcImageOutputConfig GetOutputConfig() const;

                    /**
                     * 设置<p>Output media file configuration for the image generation task.</p>
                     * @param _outputConfig <p>Output media file configuration for the image generation task.</p>
                     * 
                     */
                    void SetOutputConfig(const AigcImageOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                    /**
                     * 获取<p>Input region information. Available values:</p><ul><li>Mainland: Chinese mainland;</li><li>Oversea: overseas;</li><li>OverseaUSWest: overseas - western United States;</li></ul>
                     * @return InputRegion <p>Input region information. Available values:</p><ul><li>Mainland: Chinese mainland;</li><li>Oversea: overseas;</li><li>OverseaUSWest: overseas - western United States;</li></ul>
                     * 
                     */
                    std::string GetInputRegion() const;

                    /**
                     * 设置<p>Input region information. Available values:</p><ul><li>Mainland: Chinese mainland;</li><li>Oversea: overseas;</li><li>OverseaUSWest: overseas - western United States;</li></ul>
                     * @param _inputRegion <p>Input region information. Available values:</p><ul><li>Mainland: Chinese mainland;</li><li>Oversea: overseas;</li><li>OverseaUSWest: overseas - western United States;</li></ul>
                     * 
                     */
                    void SetInputRegion(const std::string& _inputRegion);

                    /**
                     * 判断参数 InputRegion 是否已赋值
                     * @return InputRegion 是否已赋值
                     * 
                     */
                    bool InputRegionHasBeenSet() const;

                    /**
                     * 获取<p>Scenario type. Values are as follows:</p><li>When ModelName is Hunyuan: 3d_panorama means panoramic view;</li><li>When ModelName is Kling: image_expand means image expansion;</li><li>Other ModelNames are not currently supported.</li>
                     * @return SceneType <p>Scenario type. Values are as follows:</p><li>When ModelName is Hunyuan: 3d_panorama means panoramic view;</li><li>When ModelName is Kling: image_expand means image expansion;</li><li>Other ModelNames are not currently supported.</li>
                     * 
                     */
                    std::string GetSceneType() const;

                    /**
                     * 设置<p>Scenario type. Values are as follows:</p><li>When ModelName is Hunyuan: 3d_panorama means panoramic view;</li><li>When ModelName is Kling: image_expand means image expansion;</li><li>Other ModelNames are not currently supported.</li>
                     * @param _sceneType <p>Scenario type. Values are as follows:</p><li>When ModelName is Hunyuan: 3d_panorama means panoramic view;</li><li>When ModelName is Kling: image_expand means image expansion;</li><li>Other ModelNames are not currently supported.</li>
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
                     * 获取<p>Random seed of the model.</p>
                     * @return Seed <p>Random seed of the model.</p>
                     * 
                     */
                    int64_t GetSeed() const;

                    /**
                     * 设置<p>Random seed of the model.</p>
                     * @param _seed <p>Random seed of the model.</p>
                     * 
                     */
                    void SetSeed(const int64_t& _seed);

                    /**
                     * 判断参数 Seed 是否已赋值
                     * @return Seed 是否已赋值
                     * 
                     */
                    bool SeedHasBeenSet() const;

                    /**
                     * 获取<p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * @return SessionId <p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * @param _sessionId <p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>Source context. This is used to pass through user request information. The audio and video quality revival complete callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * @return SessionContext <p>Source context. This is used to pass through user request information. The audio and video quality revival complete callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置<p>Source context. This is used to pass through user request information. The audio and video quality revival complete callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * @param _sessionContext <p>Source context. This is used to pass through user request information. The audio and video quality revival complete callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取<p>Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If this is not specified, the default value is 0.</p>
                     * @return TasksPriority <p>Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If this is not specified, the default value is 0.</p>
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置<p>Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If this is not specified, the default value is 0.</p>
                     * @param _tasksPriority <p>Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If this is not specified, the default value is 0.</p>
                     * 
                     */
                    void SetTasksPriority(const int64_t& _tasksPriority);

                    /**
                     * 判断参数 TasksPriority 是否已赋值
                     * @return TasksPriority 是否已赋值
                     * 
                     */
                    bool TasksPriorityHasBeenSet() const;

                    /**
                     * 获取<p>Reserved field, used for special purpose.</p><ul><li><p>Hunyuan 3.0</p><ul><li>Supports freely setting resolution width and height, both within [512, 2048] pixels, with the product of width and height ≤ 1024x1024 pixels. Example: <code>{"AdditionalParameters": "{\"size\":\"728x1024\"}"}</code></li></ul></li><li><p>SI series</p><ul><li>Supports freely setting resolution width and height:<ul><li>SI 4.0: Valid total pixel range [1280x720=921600, 4096x4096=16777216]. Example: <code>{"AdditionalParameters": "{\"size\":\"728x1356\"}"}</code></li><li>SI 4.5: Valid total pixel range [2560x1440=3686400, 4096x4096=16777216]. Example: <code>{"AdditionalParameters": "{\"size\":\"2560x1440\"}"}</code></li><li>SI 5.0-lite: Valid total pixel range [2560x1440=3686400, 3072x3072x1.1025=10404496]. Example: <code>{"AdditionalParameters": "{\"size\":\"2560x1440\"}"}</code></li></ul></li><li>Can be used to enable output of multiple images. Example: <code>{"AdditionalParameters": "{\"sequential_image_generation\":\"auto\"}"}</code>. Besides, the number of images to output must be specified in the <code>Prompt</code>, such as "output 3 images".</li></ul></li><li><p>Qwen 0925</p><ul><li>Supports freely setting resolution width and height, with valid total pixel range [512x512=261632, 2048x2048=4194304]. Example: <code>{"AdditionalParameters": "{\"size\":\"728*1024\"}"}</code></li></ul></li><li><p>OG</p><ul><li>Supports freely setting resolution width and height:<ul><li>Pixel size must be divisible by 16.</li><li>Total pixels must be at least 655,360 and should not exceed 8,294,400.</li><li>Example: <code>{"AdditionalParameters": "{\"size\":\"728*1024\"}"}</code></li></ul></li><li>Supports setting transparent layer:<ul><li>Example: <code>{"AdditionalParameters": "{\"background\":\"transparent\"}"}</code></li></ul></li></ul></li><li><p>Kling</p><ul><li>Supports setting image expansion parameters. Example: <code>{AdditionalParameters":"{\"down_expansion_ratio\":0.2,\"left_expansion_ratio\":0.3,\"right_expansion_ratio\":0.4,\"up_expansion_ratio\":0.1}}</code><ul><li>Common constraints:<ul><li>Value range: [0, 2].</li><li>The overall area of the new image should not exceed 3 times that of the original image.</li><li>Forward prompts can be input through the <code>Prompt</code> field.</li><li>Example description:<ul><li>up_expansion_ratio: Upward expansion range, calculated based on a multiple of the original image height. If the original image height is 20 and the parameter value is 0.1, the distance from the top edge of the original image to the top edge of the new image is 20 × 0.1 = 2, which is the expansion range.</li><li>down_expansion_ratio: Downward expansion range, calculated based on a multiple of the original image height. If the original image height is 20 and the parameter value is 0.2, the distance from the bottom edge of the original image to the bottom edge of the new image is 20 × 0.2 = 4, which is the expansion range.</li><li>left_expansion_ratio: Leftward expansion range, calculated based on a multiple of the original image width. If the original image width is 30 and the parameter value is 0.3, the distance from the left edge of the original image to the left edge of the new image is 30 × 0.3 = 9, which is the expansion range.</li><li>right_expansion_ratio: Rightward expansion range, calculated based on a multiple of the original image width. If the original image width is 30 and the parameter value is 0.4, the distance from the right edge of the original image to the right edge of the new image is 30 × 0.4 = 12, which is the expansion range.</li></ul></li></ul></li></ul></li></ul></li></ul>
                     * @return ExtInfo <p>Reserved field, used for special purpose.</p><ul><li><p>Hunyuan 3.0</p><ul><li>Supports freely setting resolution width and height, both within [512, 2048] pixels, with the product of width and height ≤ 1024x1024 pixels. Example: <code>{"AdditionalParameters": "{\"size\":\"728x1024\"}"}</code></li></ul></li><li><p>SI series</p><ul><li>Supports freely setting resolution width and height:<ul><li>SI 4.0: Valid total pixel range [1280x720=921600, 4096x4096=16777216]. Example: <code>{"AdditionalParameters": "{\"size\":\"728x1356\"}"}</code></li><li>SI 4.5: Valid total pixel range [2560x1440=3686400, 4096x4096=16777216]. Example: <code>{"AdditionalParameters": "{\"size\":\"2560x1440\"}"}</code></li><li>SI 5.0-lite: Valid total pixel range [2560x1440=3686400, 3072x3072x1.1025=10404496]. Example: <code>{"AdditionalParameters": "{\"size\":\"2560x1440\"}"}</code></li></ul></li><li>Can be used to enable output of multiple images. Example: <code>{"AdditionalParameters": "{\"sequential_image_generation\":\"auto\"}"}</code>. Besides, the number of images to output must be specified in the <code>Prompt</code>, such as "output 3 images".</li></ul></li><li><p>Qwen 0925</p><ul><li>Supports freely setting resolution width and height, with valid total pixel range [512x512=261632, 2048x2048=4194304]. Example: <code>{"AdditionalParameters": "{\"size\":\"728*1024\"}"}</code></li></ul></li><li><p>OG</p><ul><li>Supports freely setting resolution width and height:<ul><li>Pixel size must be divisible by 16.</li><li>Total pixels must be at least 655,360 and should not exceed 8,294,400.</li><li>Example: <code>{"AdditionalParameters": "{\"size\":\"728*1024\"}"}</code></li></ul></li><li>Supports setting transparent layer:<ul><li>Example: <code>{"AdditionalParameters": "{\"background\":\"transparent\"}"}</code></li></ul></li></ul></li><li><p>Kling</p><ul><li>Supports setting image expansion parameters. Example: <code>{AdditionalParameters":"{\"down_expansion_ratio\":0.2,\"left_expansion_ratio\":0.3,\"right_expansion_ratio\":0.4,\"up_expansion_ratio\":0.1}}</code><ul><li>Common constraints:<ul><li>Value range: [0, 2].</li><li>The overall area of the new image should not exceed 3 times that of the original image.</li><li>Forward prompts can be input through the <code>Prompt</code> field.</li><li>Example description:<ul><li>up_expansion_ratio: Upward expansion range, calculated based on a multiple of the original image height. If the original image height is 20 and the parameter value is 0.1, the distance from the top edge of the original image to the top edge of the new image is 20 × 0.1 = 2, which is the expansion range.</li><li>down_expansion_ratio: Downward expansion range, calculated based on a multiple of the original image height. If the original image height is 20 and the parameter value is 0.2, the distance from the bottom edge of the original image to the bottom edge of the new image is 20 × 0.2 = 4, which is the expansion range.</li><li>left_expansion_ratio: Leftward expansion range, calculated based on a multiple of the original image width. If the original image width is 30 and the parameter value is 0.3, the distance from the left edge of the original image to the left edge of the new image is 30 × 0.3 = 9, which is the expansion range.</li><li>right_expansion_ratio: Rightward expansion range, calculated based on a multiple of the original image width. If the original image width is 30 and the parameter value is 0.4, the distance from the right edge of the original image to the right edge of the new image is 30 × 0.4 = 12, which is the expansion range.</li></ul></li></ul></li></ul></li></ul></li></ul>
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置<p>Reserved field, used for special purpose.</p><ul><li><p>Hunyuan 3.0</p><ul><li>Supports freely setting resolution width and height, both within [512, 2048] pixels, with the product of width and height ≤ 1024x1024 pixels. Example: <code>{"AdditionalParameters": "{\"size\":\"728x1024\"}"}</code></li></ul></li><li><p>SI series</p><ul><li>Supports freely setting resolution width and height:<ul><li>SI 4.0: Valid total pixel range [1280x720=921600, 4096x4096=16777216]. Example: <code>{"AdditionalParameters": "{\"size\":\"728x1356\"}"}</code></li><li>SI 4.5: Valid total pixel range [2560x1440=3686400, 4096x4096=16777216]. Example: <code>{"AdditionalParameters": "{\"size\":\"2560x1440\"}"}</code></li><li>SI 5.0-lite: Valid total pixel range [2560x1440=3686400, 3072x3072x1.1025=10404496]. Example: <code>{"AdditionalParameters": "{\"size\":\"2560x1440\"}"}</code></li></ul></li><li>Can be used to enable output of multiple images. Example: <code>{"AdditionalParameters": "{\"sequential_image_generation\":\"auto\"}"}</code>. Besides, the number of images to output must be specified in the <code>Prompt</code>, such as "output 3 images".</li></ul></li><li><p>Qwen 0925</p><ul><li>Supports freely setting resolution width and height, with valid total pixel range [512x512=261632, 2048x2048=4194304]. Example: <code>{"AdditionalParameters": "{\"size\":\"728*1024\"}"}</code></li></ul></li><li><p>OG</p><ul><li>Supports freely setting resolution width and height:<ul><li>Pixel size must be divisible by 16.</li><li>Total pixels must be at least 655,360 and should not exceed 8,294,400.</li><li>Example: <code>{"AdditionalParameters": "{\"size\":\"728*1024\"}"}</code></li></ul></li><li>Supports setting transparent layer:<ul><li>Example: <code>{"AdditionalParameters": "{\"background\":\"transparent\"}"}</code></li></ul></li></ul></li><li><p>Kling</p><ul><li>Supports setting image expansion parameters. Example: <code>{AdditionalParameters":"{\"down_expansion_ratio\":0.2,\"left_expansion_ratio\":0.3,\"right_expansion_ratio\":0.4,\"up_expansion_ratio\":0.1}}</code><ul><li>Common constraints:<ul><li>Value range: [0, 2].</li><li>The overall area of the new image should not exceed 3 times that of the original image.</li><li>Forward prompts can be input through the <code>Prompt</code> field.</li><li>Example description:<ul><li>up_expansion_ratio: Upward expansion range, calculated based on a multiple of the original image height. If the original image height is 20 and the parameter value is 0.1, the distance from the top edge of the original image to the top edge of the new image is 20 × 0.1 = 2, which is the expansion range.</li><li>down_expansion_ratio: Downward expansion range, calculated based on a multiple of the original image height. If the original image height is 20 and the parameter value is 0.2, the distance from the bottom edge of the original image to the bottom edge of the new image is 20 × 0.2 = 4, which is the expansion range.</li><li>left_expansion_ratio: Leftward expansion range, calculated based on a multiple of the original image width. If the original image width is 30 and the parameter value is 0.3, the distance from the left edge of the original image to the left edge of the new image is 30 × 0.3 = 9, which is the expansion range.</li><li>right_expansion_ratio: Rightward expansion range, calculated based on a multiple of the original image width. If the original image width is 30 and the parameter value is 0.4, the distance from the right edge of the original image to the right edge of the new image is 30 × 0.4 = 12, which is the expansion range.</li></ul></li></ul></li></ul></li></ul></li></ul>
                     * @param _extInfo <p>Reserved field, used for special purpose.</p><ul><li><p>Hunyuan 3.0</p><ul><li>Supports freely setting resolution width and height, both within [512, 2048] pixels, with the product of width and height ≤ 1024x1024 pixels. Example: <code>{"AdditionalParameters": "{\"size\":\"728x1024\"}"}</code></li></ul></li><li><p>SI series</p><ul><li>Supports freely setting resolution width and height:<ul><li>SI 4.0: Valid total pixel range [1280x720=921600, 4096x4096=16777216]. Example: <code>{"AdditionalParameters": "{\"size\":\"728x1356\"}"}</code></li><li>SI 4.5: Valid total pixel range [2560x1440=3686400, 4096x4096=16777216]. Example: <code>{"AdditionalParameters": "{\"size\":\"2560x1440\"}"}</code></li><li>SI 5.0-lite: Valid total pixel range [2560x1440=3686400, 3072x3072x1.1025=10404496]. Example: <code>{"AdditionalParameters": "{\"size\":\"2560x1440\"}"}</code></li></ul></li><li>Can be used to enable output of multiple images. Example: <code>{"AdditionalParameters": "{\"sequential_image_generation\":\"auto\"}"}</code>. Besides, the number of images to output must be specified in the <code>Prompt</code>, such as "output 3 images".</li></ul></li><li><p>Qwen 0925</p><ul><li>Supports freely setting resolution width and height, with valid total pixel range [512x512=261632, 2048x2048=4194304]. Example: <code>{"AdditionalParameters": "{\"size\":\"728*1024\"}"}</code></li></ul></li><li><p>OG</p><ul><li>Supports freely setting resolution width and height:<ul><li>Pixel size must be divisible by 16.</li><li>Total pixels must be at least 655,360 and should not exceed 8,294,400.</li><li>Example: <code>{"AdditionalParameters": "{\"size\":\"728*1024\"}"}</code></li></ul></li><li>Supports setting transparent layer:<ul><li>Example: <code>{"AdditionalParameters": "{\"background\":\"transparent\"}"}</code></li></ul></li></ul></li><li><p>Kling</p><ul><li>Supports setting image expansion parameters. Example: <code>{AdditionalParameters":"{\"down_expansion_ratio\":0.2,\"left_expansion_ratio\":0.3,\"right_expansion_ratio\":0.4,\"up_expansion_ratio\":0.1}}</code><ul><li>Common constraints:<ul><li>Value range: [0, 2].</li><li>The overall area of the new image should not exceed 3 times that of the original image.</li><li>Forward prompts can be input through the <code>Prompt</code> field.</li><li>Example description:<ul><li>up_expansion_ratio: Upward expansion range, calculated based on a multiple of the original image height. If the original image height is 20 and the parameter value is 0.1, the distance from the top edge of the original image to the top edge of the new image is 20 × 0.1 = 2, which is the expansion range.</li><li>down_expansion_ratio: Downward expansion range, calculated based on a multiple of the original image height. If the original image height is 20 and the parameter value is 0.2, the distance from the bottom edge of the original image to the bottom edge of the new image is 20 × 0.2 = 4, which is the expansion range.</li><li>left_expansion_ratio: Leftward expansion range, calculated based on a multiple of the original image width. If the original image width is 30 and the parameter value is 0.3, the distance from the left edge of the original image to the left edge of the new image is 30 × 0.3 = 9, which is the expansion range.</li><li>right_expansion_ratio: Rightward expansion range, calculated based on a multiple of the original image width. If the original image width is 30 and the parameter value is 0.4, the distance from the right edge of the original image to the right edge of the new image is 30 × 0.4 = 12, which is the expansion range.</li></ul></li></ul></li></ul></li></ul></li></ul>
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications, whether it is the default application or a newly created application.</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Model name. Value:</p><li>OG</li><li>GG</li><li>SI</li><li>Qwen</li><li>Hunyuan</li><li>Vidu</li><li>Kling</li>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>Model version. Parameter:</p><li>When ModelName is OG, available values are image2_low, image2_medium, image2_high;</li><li>When ModelName is GG, available values are 2.5, 3.0, 3.1;</li><li>When ModelName is Jimeng, available values are 4.0;</li><li>When ModelName is SI, available values are 4.0, 4.5, 5.0-lite;</li><li>When ModelName is Qwen, available values are 0925;</li><li>When ModelName is Hunyuan, available values are 3.0;</li><li>When ModelName is Vidu, available values are q2;</li><li>When ModelName is Kling, available values are 2.1, 3.0, 3.0-Omni, O1, scene;</li>
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * <p>File information of the input image for the AIGC image generation task. Maximum number of reference images supported by each model:</p><ul><li>GG 2.5: 3;</li><li>GG 3.0: 14;</li><li>GG 3.1: 14;</li><li>Kling 2.1: 4;</li><li>Kling 3.0: 1;</li><li>Kling 3.0-Omni: 10;</li><li>Kling O1: 10;</li><li>SI 4.0: 14;</li><li>SI 4.5: 14;</li><li>SI 5.0-lite: 14;</li><li>Vidu q2: 7;</li><li>Hunyuan 3.0: 3;</li><li>Qwen 0925: 1;</li><li>MJ v7: 3.</li></ul>
                     */
                    std::vector<AigcImageTaskInputFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * <p>Prompt for image generation. This parameter is required when FileInfos is empty.</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>To prevent the model from generating image prompts.</p>
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * <p>Whether to optimize Prompt content automatically. When Enabled, the passed in Prompt will be optimized automatically to enhance generation quality. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li></p>
                     */
                    std::string m_enhancePrompt;
                    bool m_enhancePromptHasBeenSet;

                    /**
                     * <p>Output media file configuration for the image generation task.</p>
                     */
                    AigcImageOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                    /**
                     * <p>Input region information. Available values:</p><ul><li>Mainland: Chinese mainland;</li><li>Oversea: overseas;</li><li>OverseaUSWest: overseas - western United States;</li></ul>
                     */
                    std::string m_inputRegion;
                    bool m_inputRegionHasBeenSet;

                    /**
                     * <p>Scenario type. Values are as follows:</p><li>When ModelName is Hunyuan: 3d_panorama means panoramic view;</li><li>When ModelName is Kling: image_expand means image expansion;</li><li>Other ModelNames are not currently supported.</li>
                     */
                    std::string m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * <p>Random seed of the model.</p>
                     */
                    int64_t m_seed;
                    bool m_seedHasBeenSet;

                    /**
                     * <p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>Source context. This is used to pass through user request information. The audio and video quality revival complete callback returns the value of this field. The maximum length is 1000 characters.</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If this is not specified, the default value is 0.</p>
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * <p>Reserved field, used for special purpose.</p><ul><li><p>Hunyuan 3.0</p><ul><li>Supports freely setting resolution width and height, both within [512, 2048] pixels, with the product of width and height ≤ 1024x1024 pixels. Example: <code>{"AdditionalParameters": "{\"size\":\"728x1024\"}"}</code></li></ul></li><li><p>SI series</p><ul><li>Supports freely setting resolution width and height:<ul><li>SI 4.0: Valid total pixel range [1280x720=921600, 4096x4096=16777216]. Example: <code>{"AdditionalParameters": "{\"size\":\"728x1356\"}"}</code></li><li>SI 4.5: Valid total pixel range [2560x1440=3686400, 4096x4096=16777216]. Example: <code>{"AdditionalParameters": "{\"size\":\"2560x1440\"}"}</code></li><li>SI 5.0-lite: Valid total pixel range [2560x1440=3686400, 3072x3072x1.1025=10404496]. Example: <code>{"AdditionalParameters": "{\"size\":\"2560x1440\"}"}</code></li></ul></li><li>Can be used to enable output of multiple images. Example: <code>{"AdditionalParameters": "{\"sequential_image_generation\":\"auto\"}"}</code>. Besides, the number of images to output must be specified in the <code>Prompt</code>, such as "output 3 images".</li></ul></li><li><p>Qwen 0925</p><ul><li>Supports freely setting resolution width and height, with valid total pixel range [512x512=261632, 2048x2048=4194304]. Example: <code>{"AdditionalParameters": "{\"size\":\"728*1024\"}"}</code></li></ul></li><li><p>OG</p><ul><li>Supports freely setting resolution width and height:<ul><li>Pixel size must be divisible by 16.</li><li>Total pixels must be at least 655,360 and should not exceed 8,294,400.</li><li>Example: <code>{"AdditionalParameters": "{\"size\":\"728*1024\"}"}</code></li></ul></li><li>Supports setting transparent layer:<ul><li>Example: <code>{"AdditionalParameters": "{\"background\":\"transparent\"}"}</code></li></ul></li></ul></li><li><p>Kling</p><ul><li>Supports setting image expansion parameters. Example: <code>{AdditionalParameters":"{\"down_expansion_ratio\":0.2,\"left_expansion_ratio\":0.3,\"right_expansion_ratio\":0.4,\"up_expansion_ratio\":0.1}}</code><ul><li>Common constraints:<ul><li>Value range: [0, 2].</li><li>The overall area of the new image should not exceed 3 times that of the original image.</li><li>Forward prompts can be input through the <code>Prompt</code> field.</li><li>Example description:<ul><li>up_expansion_ratio: Upward expansion range, calculated based on a multiple of the original image height. If the original image height is 20 and the parameter value is 0.1, the distance from the top edge of the original image to the top edge of the new image is 20 × 0.1 = 2, which is the expansion range.</li><li>down_expansion_ratio: Downward expansion range, calculated based on a multiple of the original image height. If the original image height is 20 and the parameter value is 0.2, the distance from the bottom edge of the original image to the bottom edge of the new image is 20 × 0.2 = 4, which is the expansion range.</li><li>left_expansion_ratio: Leftward expansion range, calculated based on a multiple of the original image width. If the original image width is 30 and the parameter value is 0.3, the distance from the left edge of the original image to the left edge of the new image is 30 × 0.3 = 9, which is the expansion range.</li><li>right_expansion_ratio: Rightward expansion range, calculated based on a multiple of the original image width. If the original image width is 30 and the parameter value is 0.4, the distance from the right edge of the original image to the right edge of the new image is 30 × 0.4 = 12, which is the expansion range.</li></ul></li></ul></li></ul></li></ul></li></ul>
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCIMAGETASKREQUEST_H_
