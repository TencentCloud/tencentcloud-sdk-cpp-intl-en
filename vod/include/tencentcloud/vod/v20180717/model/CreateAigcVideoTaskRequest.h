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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCVIDEOTASKREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCVIDEOTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoTaskInputFileInfo.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoTaskInputSubjectInfo.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoOutputConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
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
                     * 获取<p><b>VOD <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether it is the default application or a newly created application).</b></p>
                     * @return SubAppId <p><b>VOD <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether it is the default application or a newly created application).</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>VOD <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether it is the default application or a newly created application).</b></p>
                     * @param _subAppId <p><b>VOD <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether it is the default application or a newly created application).</b></p>
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
                     * 获取<p>Model name. Parameter Value:<br>Kling: Keling;<br>Vidu;<br>Hailuo: Hailuo;<br>Hunyuan: Hunyuan;<br>Mingmou: Mingmou;<br>GV;<br>OS;<br>PixVerse;</p>
                     * @return ModelName <p>Model name. Parameter Value:<br>Kling: Keling;<br>Vidu;<br>Hailuo: Hailuo;<br>Hunyuan: Hunyuan;<br>Mingmou: Mingmou;<br>GV;<br>OS;<br>PixVerse;</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>Model name. Parameter Value:<br>Kling: Keling;<br>Vidu;<br>Hailuo: Hailuo;<br>Hunyuan: Hunyuan;<br>Mingmou: Mingmou;<br>GV;<br>OS;<br>PixVerse;</p>
                     * @param _modelName <p>Model name. Parameter Value:<br>Kling: Keling;<br>Vidu;<br>Hailuo: Hailuo;<br>Hunyuan: Hunyuan;<br>Mingmou: Mingmou;<br>GV;<br>OS;<br>PixVerse;</p>
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
                     * 获取<p>Model version. Parameter value:<br>When ModelName is Hailuo, optional values are 02, 2.3, and 2.3-fast.<br>When ModelName is Kling, optional values are 1.6, 2.0, 2.1, 2.5, 2.6, O1, 3.0, and 3.0-Omni.<br>When ModelName is Vidu, optional values are q2, q2-pro, q2-turbo, q3, q3-pro, and q3-turbo.<br>When ModelName is GV, optional values are 3.1 and 3.1-fast.<br>When ModelName is OS, optional value is 2.0.<br>When ModelName is Hunyuan, optional value is 1.5.<br>When ModelName is Mingmou, optional value is 1.0.<br>When ModelName is PixVerse, optional values are v5.6, v6, and c1.</p>
                     * @return ModelVersion <p>Model version. Parameter value:<br>When ModelName is Hailuo, optional values are 02, 2.3, and 2.3-fast.<br>When ModelName is Kling, optional values are 1.6, 2.0, 2.1, 2.5, 2.6, O1, 3.0, and 3.0-Omni.<br>When ModelName is Vidu, optional values are q2, q2-pro, q2-turbo, q3, q3-pro, and q3-turbo.<br>When ModelName is GV, optional values are 3.1 and 3.1-fast.<br>When ModelName is OS, optional value is 2.0.<br>When ModelName is Hunyuan, optional value is 1.5.<br>When ModelName is Mingmou, optional value is 1.0.<br>When ModelName is PixVerse, optional values are v5.6, v6, and c1.</p>
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置<p>Model version. Parameter value:<br>When ModelName is Hailuo, optional values are 02, 2.3, and 2.3-fast.<br>When ModelName is Kling, optional values are 1.6, 2.0, 2.1, 2.5, 2.6, O1, 3.0, and 3.0-Omni.<br>When ModelName is Vidu, optional values are q2, q2-pro, q2-turbo, q3, q3-pro, and q3-turbo.<br>When ModelName is GV, optional values are 3.1 and 3.1-fast.<br>When ModelName is OS, optional value is 2.0.<br>When ModelName is Hunyuan, optional value is 1.5.<br>When ModelName is Mingmou, optional value is 1.0.<br>When ModelName is PixVerse, optional values are v5.6, v6, and c1.</p>
                     * @param _modelVersion <p>Model version. Parameter value:<br>When ModelName is Hailuo, optional values are 02, 2.3, and 2.3-fast.<br>When ModelName is Kling, optional values are 1.6, 2.0, 2.1, 2.5, 2.6, O1, 3.0, and 3.0-Omni.<br>When ModelName is Vidu, optional values are q2, q2-pro, q2-turbo, q3, q3-pro, and q3-turbo.<br>When ModelName is GV, optional values are 3.1 and 3.1-fast.<br>When ModelName is OS, optional value is 2.0.<br>When ModelName is Hunyuan, optional value is 1.5.<br>When ModelName is Mingmou, optional value is 1.0.<br>When ModelName is PixVerse, optional values are v5.6, v6, and c1.</p>
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
                     * 获取<p>Describes the resource file to be used by the model for video generation, divided into <strong>first and last frame mode, reference image, video reference, video editing, and other modes</strong>.</p><p><strong>First and last frame video generation</strong>: The first frame supports only a <strong>single image</strong>, with the <strong>Usage field of the image set to FirstFrame</strong>. LastFrameFileId or LastFrameUrl represents the last frame. The first frame can be imported separately, but the last frame cannot. <strong>First and last frame generation refers to the image aspect ratio</strong>.<br><strong>Reference image generation</strong>: Allows input of a single image or multiple images, with the <strong>Usage field of the image set to Reference</strong>. Reference images can adjust the aspect ratio of the generated video.<br><strong>Video editing and video reference</strong>: Vidu and Kling can input a video as a reference or proceed with editing. Images can also be imported along with the video, with the <strong>Usage field of the image set to Reference</strong>.</p><p>Note:</p><ol><li>Image size should be no more than 10M.</li><li>Supported image formats: jpeg, jpg, png. x0b</li><li>To check whether a specific model version supports reference images, first and last frames, video editing, and other features, request the document from us or refer to the original document information.</li></ol>
                     * @return FileInfos <p>Describes the resource file to be used by the model for video generation, divided into <strong>first and last frame mode, reference image, video reference, video editing, and other modes</strong>.</p><p><strong>First and last frame video generation</strong>: The first frame supports only a <strong>single image</strong>, with the <strong>Usage field of the image set to FirstFrame</strong>. LastFrameFileId or LastFrameUrl represents the last frame. The first frame can be imported separately, but the last frame cannot. <strong>First and last frame generation refers to the image aspect ratio</strong>.<br><strong>Reference image generation</strong>: Allows input of a single image or multiple images, with the <strong>Usage field of the image set to Reference</strong>. Reference images can adjust the aspect ratio of the generated video.<br><strong>Video editing and video reference</strong>: Vidu and Kling can input a video as a reference or proceed with editing. Images can also be imported along with the video, with the <strong>Usage field of the image set to Reference</strong>.</p><p>Note:</p><ol><li>Image size should be no more than 10M.</li><li>Supported image formats: jpeg, jpg, png. x0b</li><li>To check whether a specific model version supports reference images, first and last frames, video editing, and other features, request the document from us or refer to the original document information.</li></ol>
                     * 
                     */
                    std::vector<AigcVideoTaskInputFileInfo> GetFileInfos() const;

                    /**
                     * 设置<p>Describes the resource file to be used by the model for video generation, divided into <strong>first and last frame mode, reference image, video reference, video editing, and other modes</strong>.</p><p><strong>First and last frame video generation</strong>: The first frame supports only a <strong>single image</strong>, with the <strong>Usage field of the image set to FirstFrame</strong>. LastFrameFileId or LastFrameUrl represents the last frame. The first frame can be imported separately, but the last frame cannot. <strong>First and last frame generation refers to the image aspect ratio</strong>.<br><strong>Reference image generation</strong>: Allows input of a single image or multiple images, with the <strong>Usage field of the image set to Reference</strong>. Reference images can adjust the aspect ratio of the generated video.<br><strong>Video editing and video reference</strong>: Vidu and Kling can input a video as a reference or proceed with editing. Images can also be imported along with the video, with the <strong>Usage field of the image set to Reference</strong>.</p><p>Note:</p><ol><li>Image size should be no more than 10M.</li><li>Supported image formats: jpeg, jpg, png. x0b</li><li>To check whether a specific model version supports reference images, first and last frames, video editing, and other features, request the document from us or refer to the original document information.</li></ol>
                     * @param _fileInfos <p>Describes the resource file to be used by the model for video generation, divided into <strong>first and last frame mode, reference image, video reference, video editing, and other modes</strong>.</p><p><strong>First and last frame video generation</strong>: The first frame supports only a <strong>single image</strong>, with the <strong>Usage field of the image set to FirstFrame</strong>. LastFrameFileId or LastFrameUrl represents the last frame. The first frame can be imported separately, but the last frame cannot. <strong>First and last frame generation refers to the image aspect ratio</strong>.<br><strong>Reference image generation</strong>: Allows input of a single image or multiple images, with the <strong>Usage field of the image set to Reference</strong>. Reference images can adjust the aspect ratio of the generated video.<br><strong>Video editing and video reference</strong>: Vidu and Kling can input a video as a reference or proceed with editing. Images can also be imported along with the video, with the <strong>Usage field of the image set to Reference</strong>.</p><p>Note:</p><ol><li>Image size should be no more than 10M.</li><li>Supported image formats: jpeg, jpg, png. x0b</li><li>To check whether a specific model version supports reference images, first and last frames, video editing, and other features, request the document from us or refer to the original document information.</li></ol>
                     * 
                     */
                    void SetFileInfos(const std::vector<AigcVideoTaskInputFileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取<p>Subject input information.</p>
                     * @return SubjectInfos <p>Subject input information.</p>
                     * 
                     */
                    std::vector<AigcVideoTaskInputSubjectInfo> GetSubjectInfos() const;

                    /**
                     * 设置<p>Subject input information.</p>
                     * @param _subjectInfos <p>Subject input information.</p>
                     * 
                     */
                    void SetSubjectInfos(const std::vector<AigcVideoTaskInputSubjectInfo>& _subjectInfos);

                    /**
                     * 判断参数 SubjectInfos 是否已赋值
                     * @return SubjectInfos 是否已赋值
                     * 
                     */
                    bool SubjectInfosHasBeenSet() const;

                    /**
                     * 获取<p>Media file ID used as the last frame to generate video. This file's globally unique ID on VOD is assigned by the VOD backend after successful upload. You can retrieve this field in the <a href="https://www.tencentcloud.com/document/product/266/33950">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>.</p><ol><li>When specifying this parameter, you must simultaneously designate the first frame via FileInfos.</li><li>Image size must be less than 10M.</li><li>Image format value is: jpeg, jpg, png, webp.</li></ol>
                     * @return LastFrameFileId <p>Media file ID used as the last frame to generate video. This file's globally unique ID on VOD is assigned by the VOD backend after successful upload. You can retrieve this field in the <a href="https://www.tencentcloud.com/document/product/266/33950">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>.</p><ol><li>When specifying this parameter, you must simultaneously designate the first frame via FileInfos.</li><li>Image size must be less than 10M.</li><li>Image format value is: jpeg, jpg, png, webp.</li></ol>
                     * 
                     */
                    std::string GetLastFrameFileId() const;

                    /**
                     * 设置<p>Media file ID used as the last frame to generate video. This file's globally unique ID on VOD is assigned by the VOD backend after successful upload. You can retrieve this field in the <a href="https://www.tencentcloud.com/document/product/266/33950">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>.</p><ol><li>When specifying this parameter, you must simultaneously designate the first frame via FileInfos.</li><li>Image size must be less than 10M.</li><li>Image format value is: jpeg, jpg, png, webp.</li></ol>
                     * @param _lastFrameFileId <p>Media file ID used as the last frame to generate video. This file's globally unique ID on VOD is assigned by the VOD backend after successful upload. You can retrieve this field in the <a href="https://www.tencentcloud.com/document/product/266/33950">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>.</p><ol><li>When specifying this parameter, you must simultaneously designate the first frame via FileInfos.</li><li>Image size must be less than 10M.</li><li>Image format value is: jpeg, jpg, png, webp.</li></ol>
                     * 
                     */
                    void SetLastFrameFileId(const std::string& _lastFrameFileId);

                    /**
                     * 判断参数 LastFrameFileId 是否已赋值
                     * @return LastFrameFileId 是否已赋值
                     * 
                     */
                    bool LastFrameFileIdHasBeenSet() const;

                    /**
                     * 获取<p>URL of the media file used as the last frame to generate video. Description:</p><ol><li>When you specify this parameter, you must also specify the first frame through FileInfos.</li><li>Image size must be less than 5M.</li><li>Image format value is: jpeg, jpg, png, webp.</li></ol>
                     * @return LastFrameUrl <p>URL of the media file used as the last frame to generate video. Description:</p><ol><li>When you specify this parameter, you must also specify the first frame through FileInfos.</li><li>Image size must be less than 5M.</li><li>Image format value is: jpeg, jpg, png, webp.</li></ol>
                     * 
                     */
                    std::string GetLastFrameUrl() const;

                    /**
                     * 设置<p>URL of the media file used as the last frame to generate video. Description:</p><ol><li>When you specify this parameter, you must also specify the first frame through FileInfos.</li><li>Image size must be less than 5M.</li><li>Image format value is: jpeg, jpg, png, webp.</li></ol>
                     * @param _lastFrameUrl <p>URL of the media file used as the last frame to generate video. Description:</p><ol><li>When you specify this parameter, you must also specify the first frame through FileInfos.</li><li>Image size must be less than 5M.</li><li>Image format value is: jpeg, jpg, png, webp.</li></ol>
                     * 
                     */
                    void SetLastFrameUrl(const std::string& _lastFrameUrl);

                    /**
                     * 判断参数 LastFrameUrl 是否已赋值
                     * @return LastFrameUrl 是否已赋值
                     * 
                     */
                    bool LastFrameUrlHasBeenSet() const;

                    /**
                     * 获取<p>Prompt for video generation.<br>When no reference file is passed in, no usage scenario is specified, ExtInfo is not empty, Prompt is required.</p>
                     * @return Prompt <p>Prompt for video generation.<br>When no reference file is passed in, no usage scenario is specified, ExtInfo is not empty, Prompt is required.</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>Prompt for video generation.<br>When no reference file is passed in, no usage scenario is specified, ExtInfo is not empty, Prompt is required.</p>
                     * @param _prompt <p>Prompt for video generation.<br>When no reference file is passed in, no usage scenario is specified, ExtInfo is not empty, Prompt is required.</p>
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
                     * 获取<p>To prevent the model from generating video prompts.</p>
                     * @return NegativePrompt <p>To prevent the model from generating video prompts.</p>
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置<p>To prevent the model from generating video prompts.</p>
                     * @param _negativePrompt <p>To prevent the model from generating video prompts.</p>
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
                     * 获取<p>Output media file configuration for the video generation task.</p>
                     * @return OutputConfig <p>Output media file configuration for the video generation task.</p>
                     * 
                     */
                    AigcVideoOutputConfig GetOutputConfig() const;

                    /**
                     * 设置<p>Output media file configuration for the video generation task.</p>
                     * @param _outputConfig <p>Output media file configuration for the video generation task.</p>
                     * 
                     */
                    void SetOutputConfig(const AigcVideoOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                    /**
                     * 获取<p>Region information of the input file. When the file url is an overseas address, selectable Oversea. Default Mainland.</p>
                     * @return InputRegion <p>Region information of the input file. When the file url is an overseas address, selectable Oversea. Default Mainland.</p>
                     * 
                     */
                    std::string GetInputRegion() const;

                    /**
                     * 设置<p>Region information of the input file. When the file url is an overseas address, selectable Oversea. Default Mainland.</p>
                     * @param _inputRegion <p>Region information of the input file. When the file url is an overseas address, selectable Oversea. Default Mainland.</p>
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
                     * 获取<p>Scenario type. Values are as follows:</p><li>When ModelName is Kling: motion_control means action control; avatar_i2v means digital human; lip_sync means lip-sync;</li><li>When ModelName is Vidu: template_effect means special effect Template;</li><li>Other ModelNames are not currently supported.</li>
                     * @return SceneType <p>Scenario type. Values are as follows:</p><li>When ModelName is Kling: motion_control means action control; avatar_i2v means digital human; lip_sync means lip-sync;</li><li>When ModelName is Vidu: template_effect means special effect Template;</li><li>Other ModelNames are not currently supported.</li>
                     * 
                     */
                    std::string GetSceneType() const;

                    /**
                     * 设置<p>Scenario type. Values are as follows:</p><li>When ModelName is Kling: motion_control means action control; avatar_i2v means digital human; lip_sync means lip-sync;</li><li>When ModelName is Vidu: template_effect means special effect Template;</li><li>Other ModelNames are not currently supported.</li>
                     * @param _sceneType <p>Scenario type. Values are as follows:</p><li>When ModelName is Kling: motion_control means action control; avatar_i2v means digital human; lip_sync means lip-sync;</li><li>When ModelName is Vidu: template_effect means special effect Template;</li><li>Other ModelNames are not currently supported.</li>
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
                     * 获取<p><a href="https://www.tencentcloud.com/document/product/266/33475?from_cn_redirect=1#.E4.BB.BB.E5.8A.A1.E6.B5.81">Task flow name</a>. Fill in when you need to execute task flow for the generated new video.</p>
                     * @return Procedure <p><a href="https://www.tencentcloud.com/document/product/266/33475?from_cn_redirect=1#.E4.BB.BB.E5.8A.A1.E6.B5.81">Task flow name</a>. Fill in when you need to execute task flow for the generated new video.</p>
                     * 
                     */
                    std::string GetProcedure() const;

                    /**
                     * 设置<p><a href="https://www.tencentcloud.com/document/product/266/33475?from_cn_redirect=1#.E4.BB.BB.E5.8A.A1.E6.B5.81">Task flow name</a>. Fill in when you need to execute task flow for the generated new video.</p>
                     * @param _procedure <p><a href="https://www.tencentcloud.com/document/product/266/33475?from_cn_redirect=1#.E4.BB.BB.E5.8A.A1.E6.B5.81">Task flow name</a>. Fill in when you need to execute task flow for the generated new video.</p>
                     * 
                     */
                    void SetProcedure(const std::string& _procedure);

                    /**
                     * 判断参数 Procedure 是否已赋值
                     * @return Procedure 是否已赋值
                     * 
                     */
                    bool ProcedureHasBeenSet() const;

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
                     * 获取<p>Reserved field, used when special purpose.<br>Can be used to input special parameters and storyboard prompts to the model.</p>
                     * @return ExtInfo <p>Reserved field, used when special purpose.<br>Can be used to input special parameters and storyboard prompts to the model.</p>
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置<p>Reserved field, used when special purpose.<br>Can be used to input special parameters and storyboard prompts to the model.</p>
                     * @param _extInfo <p>Reserved field, used when special purpose.<br>Can be used to input special parameters and storyboard prompts to the model.</p>
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
                     * <p><b>VOD <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether it is the default application or a newly created application).</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Model name. Parameter Value:<br>Kling: Keling;<br>Vidu;<br>Hailuo: Hailuo;<br>Hunyuan: Hunyuan;<br>Mingmou: Mingmou;<br>GV;<br>OS;<br>PixVerse;</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>Model version. Parameter value:<br>When ModelName is Hailuo, optional values are 02, 2.3, and 2.3-fast.<br>When ModelName is Kling, optional values are 1.6, 2.0, 2.1, 2.5, 2.6, O1, 3.0, and 3.0-Omni.<br>When ModelName is Vidu, optional values are q2, q2-pro, q2-turbo, q3, q3-pro, and q3-turbo.<br>When ModelName is GV, optional values are 3.1 and 3.1-fast.<br>When ModelName is OS, optional value is 2.0.<br>When ModelName is Hunyuan, optional value is 1.5.<br>When ModelName is Mingmou, optional value is 1.0.<br>When ModelName is PixVerse, optional values are v5.6, v6, and c1.</p>
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * <p>Describes the resource file to be used by the model for video generation, divided into <strong>first and last frame mode, reference image, video reference, video editing, and other modes</strong>.</p><p><strong>First and last frame video generation</strong>: The first frame supports only a <strong>single image</strong>, with the <strong>Usage field of the image set to FirstFrame</strong>. LastFrameFileId or LastFrameUrl represents the last frame. The first frame can be imported separately, but the last frame cannot. <strong>First and last frame generation refers to the image aspect ratio</strong>.<br><strong>Reference image generation</strong>: Allows input of a single image or multiple images, with the <strong>Usage field of the image set to Reference</strong>. Reference images can adjust the aspect ratio of the generated video.<br><strong>Video editing and video reference</strong>: Vidu and Kling can input a video as a reference or proceed with editing. Images can also be imported along with the video, with the <strong>Usage field of the image set to Reference</strong>.</p><p>Note:</p><ol><li>Image size should be no more than 10M.</li><li>Supported image formats: jpeg, jpg, png. x0b</li><li>To check whether a specific model version supports reference images, first and last frames, video editing, and other features, request the document from us or refer to the original document information.</li></ol>
                     */
                    std::vector<AigcVideoTaskInputFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * <p>Subject input information.</p>
                     */
                    std::vector<AigcVideoTaskInputSubjectInfo> m_subjectInfos;
                    bool m_subjectInfosHasBeenSet;

                    /**
                     * <p>Media file ID used as the last frame to generate video. This file's globally unique ID on VOD is assigned by the VOD backend after successful upload. You can retrieve this field in the <a href="https://www.tencentcloud.com/document/product/266/33950">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>.</p><ol><li>When specifying this parameter, you must simultaneously designate the first frame via FileInfos.</li><li>Image size must be less than 10M.</li><li>Image format value is: jpeg, jpg, png, webp.</li></ol>
                     */
                    std::string m_lastFrameFileId;
                    bool m_lastFrameFileIdHasBeenSet;

                    /**
                     * <p>URL of the media file used as the last frame to generate video. Description:</p><ol><li>When you specify this parameter, you must also specify the first frame through FileInfos.</li><li>Image size must be less than 5M.</li><li>Image format value is: jpeg, jpg, png, webp.</li></ol>
                     */
                    std::string m_lastFrameUrl;
                    bool m_lastFrameUrlHasBeenSet;

                    /**
                     * <p>Prompt for video generation.<br>When no reference file is passed in, no usage scenario is specified, ExtInfo is not empty, Prompt is required.</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>To prevent the model from generating video prompts.</p>
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * <p>Whether to optimize Prompt content automatically. When Enabled, the passed in Prompt will be optimized automatically to enhance generation quality. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li></p>
                     */
                    std::string m_enhancePrompt;
                    bool m_enhancePromptHasBeenSet;

                    /**
                     * <p>Output media file configuration for the video generation task.</p>
                     */
                    AigcVideoOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                    /**
                     * <p>Region information of the input file. When the file url is an overseas address, selectable Oversea. Default Mainland.</p>
                     */
                    std::string m_inputRegion;
                    bool m_inputRegionHasBeenSet;

                    /**
                     * <p>Scenario type. Values are as follows:</p><li>When ModelName is Kling: motion_control means action control; avatar_i2v means digital human; lip_sync means lip-sync;</li><li>When ModelName is Vidu: template_effect means special effect Template;</li><li>Other ModelNames are not currently supported.</li>
                     */
                    std::string m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * <p><a href="https://www.tencentcloud.com/document/product/266/33475?from_cn_redirect=1#.E4.BB.BB.E5.8A.A1.E6.B5.81">Task flow name</a>. Fill in when you need to execute task flow for the generated new video.</p>
                     */
                    std::string m_procedure;
                    bool m_procedureHasBeenSet;

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
                     * <p>Reserved field, used when special purpose.<br>Can be used to input special parameters and storyboard prompts to the model.</p>
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCVIDEOTASKREQUEST_H_
