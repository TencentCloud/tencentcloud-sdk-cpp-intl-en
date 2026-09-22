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
                     * 获取<p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services from December 25, 2023, this field must be filled in as the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * @return SubAppId <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services from December 25, 2023, this field must be filled in as the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services from December 25, 2023, this field must be filled in as the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * @param _subAppId <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services from December 25, 2023, this field must be filled in as the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
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
                     * 获取<p>Model name. Parameter Value:<br>Kling: Kling;<br>Vidu;<br>Hailuo: Hailuo;<br>Hunyuan: Hunyuan;<br>Mingmou: Mingmou;<br>GV;<br>OS;<br>PixVerse;</p>
                     * @return ModelName <p>Model name. Parameter Value:<br>Kling: Kling;<br>Vidu;<br>Hailuo: Hailuo;<br>Hunyuan: Hunyuan;<br>Mingmou: Mingmou;<br>GV;<br>OS;<br>PixVerse;</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>Model name. Parameter Value:<br>Kling: Kling;<br>Vidu;<br>Hailuo: Hailuo;<br>Hunyuan: Hunyuan;<br>Mingmou: Mingmou;<br>GV;<br>OS;<br>PixVerse;</p>
                     * @param _modelName <p>Model name. Parameter Value:<br>Kling: Kling;<br>Vidu;<br>Hailuo: Hailuo;<br>Hunyuan: Hunyuan;<br>Mingmou: Mingmou;<br>GV;<br>OS;<br>PixVerse;</p>
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
                     * 获取<p>Model version. Value: <br>When ModelName is Hailuo, available values are 02, 2.3, 2.3-fast, H3, H3_regen, and H3-Max; <br>When ModelName is Kling, available values are 1.6, 2.0, 2.1, 2.5, 2.6, O1, 3.0, 3.0-Omni, 3.0-turbo, and scene; <br>When ModelName is Vidu, available values are q2, q2-pro, q2-turbo, q3, q3-pro, q3-turbo, q3-mix, q3-drama, q3-ad, scene, avatar-q2-pro, avatar-q2-turbo, and lip-sync; <br>When ModelName is GV, available values are 3.1, 3.1-fast, 3.1-lite, and omni; <br>When ModelName is OS, available values are 2.0; <br>When ModelName is Hunyuan, available values are 1.5 and 3d_2.0; <br>When ModelName is Mingmou, available values are 1.0; <br>When ModelName is PixVerse, available values are v5.6, v6, and c1;</p>
                     * @return ModelVersion <p>Model version. Value: <br>When ModelName is Hailuo, available values are 02, 2.3, 2.3-fast, H3, H3_regen, and H3-Max; <br>When ModelName is Kling, available values are 1.6, 2.0, 2.1, 2.5, 2.6, O1, 3.0, 3.0-Omni, 3.0-turbo, and scene; <br>When ModelName is Vidu, available values are q2, q2-pro, q2-turbo, q3, q3-pro, q3-turbo, q3-mix, q3-drama, q3-ad, scene, avatar-q2-pro, avatar-q2-turbo, and lip-sync; <br>When ModelName is GV, available values are 3.1, 3.1-fast, 3.1-lite, and omni; <br>When ModelName is OS, available values are 2.0; <br>When ModelName is Hunyuan, available values are 1.5 and 3d_2.0; <br>When ModelName is Mingmou, available values are 1.0; <br>When ModelName is PixVerse, available values are v5.6, v6, and c1;</p>
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置<p>Model version. Value: <br>When ModelName is Hailuo, available values are 02, 2.3, 2.3-fast, H3, H3_regen, and H3-Max; <br>When ModelName is Kling, available values are 1.6, 2.0, 2.1, 2.5, 2.6, O1, 3.0, 3.0-Omni, 3.0-turbo, and scene; <br>When ModelName is Vidu, available values are q2, q2-pro, q2-turbo, q3, q3-pro, q3-turbo, q3-mix, q3-drama, q3-ad, scene, avatar-q2-pro, avatar-q2-turbo, and lip-sync; <br>When ModelName is GV, available values are 3.1, 3.1-fast, 3.1-lite, and omni; <br>When ModelName is OS, available values are 2.0; <br>When ModelName is Hunyuan, available values are 1.5 and 3d_2.0; <br>When ModelName is Mingmou, available values are 1.0; <br>When ModelName is PixVerse, available values are v5.6, v6, and c1;</p>
                     * @param _modelVersion <p>Model version. Value: <br>When ModelName is Hailuo, available values are 02, 2.3, 2.3-fast, H3, H3_regen, and H3-Max; <br>When ModelName is Kling, available values are 1.6, 2.0, 2.1, 2.5, 2.6, O1, 3.0, 3.0-Omni, 3.0-turbo, and scene; <br>When ModelName is Vidu, available values are q2, q2-pro, q2-turbo, q3, q3-pro, q3-turbo, q3-mix, q3-drama, q3-ad, scene, avatar-q2-pro, avatar-q2-turbo, and lip-sync; <br>When ModelName is GV, available values are 3.1, 3.1-fast, 3.1-lite, and omni; <br>When ModelName is OS, available values are 2.0; <br>When ModelName is Hunyuan, available values are 1.5 and 3d_2.0; <br>When ModelName is Mingmou, available values are 1.0; <br>When ModelName is PixVerse, available values are v5.6, v6, and c1;</p>
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
                     * 获取<p>Used to describe the resource file to be used by the model when generating a video, divided into <strong>first and last frame mode, reference image/video/sound generation, video editing, and other modes</strong>.</p><p><strong>First and last frame video generation</strong>: <strong>The Usage field of the first frame image is FirstFrame, and the Usage field of the last frame image is LastFrame</strong>. One image is supported for each. The first frame can be passed in separately, but the last frame cannot be passed in separately. <strong>First and last frame generation uses the image ratio for reference</strong>.<br><strong>Reference image/video/sound generation</strong>: Single or multiple images/videos/sounds can be passed in as references, with the <strong>Usage field set to Reference</strong>. <strong>In reference mode, the display aspect ratio of the generated video can be adjusted</strong>.<br><strong>Video editing</strong>: Vidu and Kling can input a video for editing. Images can also be passed in along with the input video, with the <strong>Usage field of the image set to Reference</strong>.</p><p>Note:</p><ol><li>Image size cannot exceed 10M.</li><li>Supported image formats: jpeg, jpg, png. x0b</li><li>For whether a model version supports reference image/video/sound, first and last frame, video editing, and other features, you can request the document from us or refer to the original vendor's document information.</li></ol>
                     * @return FileInfos <p>Used to describe the resource file to be used by the model when generating a video, divided into <strong>first and last frame mode, reference image/video/sound generation, video editing, and other modes</strong>.</p><p><strong>First and last frame video generation</strong>: <strong>The Usage field of the first frame image is FirstFrame, and the Usage field of the last frame image is LastFrame</strong>. One image is supported for each. The first frame can be passed in separately, but the last frame cannot be passed in separately. <strong>First and last frame generation uses the image ratio for reference</strong>.<br><strong>Reference image/video/sound generation</strong>: Single or multiple images/videos/sounds can be passed in as references, with the <strong>Usage field set to Reference</strong>. <strong>In reference mode, the display aspect ratio of the generated video can be adjusted</strong>.<br><strong>Video editing</strong>: Vidu and Kling can input a video for editing. Images can also be passed in along with the input video, with the <strong>Usage field of the image set to Reference</strong>.</p><p>Note:</p><ol><li>Image size cannot exceed 10M.</li><li>Supported image formats: jpeg, jpg, png. x0b</li><li>For whether a model version supports reference image/video/sound, first and last frame, video editing, and other features, you can request the document from us or refer to the original vendor's document information.</li></ol>
                     * 
                     */
                    std::vector<AigcVideoTaskInputFileInfo> GetFileInfos() const;

                    /**
                     * 设置<p>Used to describe the resource file to be used by the model when generating a video, divided into <strong>first and last frame mode, reference image/video/sound generation, video editing, and other modes</strong>.</p><p><strong>First and last frame video generation</strong>: <strong>The Usage field of the first frame image is FirstFrame, and the Usage field of the last frame image is LastFrame</strong>. One image is supported for each. The first frame can be passed in separately, but the last frame cannot be passed in separately. <strong>First and last frame generation uses the image ratio for reference</strong>.<br><strong>Reference image/video/sound generation</strong>: Single or multiple images/videos/sounds can be passed in as references, with the <strong>Usage field set to Reference</strong>. <strong>In reference mode, the display aspect ratio of the generated video can be adjusted</strong>.<br><strong>Video editing</strong>: Vidu and Kling can input a video for editing. Images can also be passed in along with the input video, with the <strong>Usage field of the image set to Reference</strong>.</p><p>Note:</p><ol><li>Image size cannot exceed 10M.</li><li>Supported image formats: jpeg, jpg, png. x0b</li><li>For whether a model version supports reference image/video/sound, first and last frame, video editing, and other features, you can request the document from us or refer to the original vendor's document information.</li></ol>
                     * @param _fileInfos <p>Used to describe the resource file to be used by the model when generating a video, divided into <strong>first and last frame mode, reference image/video/sound generation, video editing, and other modes</strong>.</p><p><strong>First and last frame video generation</strong>: <strong>The Usage field of the first frame image is FirstFrame, and the Usage field of the last frame image is LastFrame</strong>. One image is supported for each. The first frame can be passed in separately, but the last frame cannot be passed in separately. <strong>First and last frame generation uses the image ratio for reference</strong>.<br><strong>Reference image/video/sound generation</strong>: Single or multiple images/videos/sounds can be passed in as references, with the <strong>Usage field set to Reference</strong>. <strong>In reference mode, the display aspect ratio of the generated video can be adjusted</strong>.<br><strong>Video editing</strong>: Vidu and Kling can input a video for editing. Images can also be passed in along with the input video, with the <strong>Usage field of the image set to Reference</strong>.</p><p>Note:</p><ol><li>Image size cannot exceed 10M.</li><li>Supported image formats: jpeg, jpg, png. x0b</li><li>For whether a model version supports reference image/video/sound, first and last frame, video editing, and other features, you can request the document from us or refer to the original vendor's document information.</li></ol>
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
                     * 获取<p>Media file ID used as the last frame to generate a video. The globally unique identifier of the file on VOD, assigned by the VOD backend after successful upload. You can obtain this field in the <a href="https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>.</p><ol><li>When specifying this parameter, you must also specify the first frame through FileInfos.</li><li>The image size must be less than 10M.</li><li>The image format values are: jpeg, jpg, png, webp.</li></ol>
                     * @return LastFrameFileId <p>Media file ID used as the last frame to generate a video. The globally unique identifier of the file on VOD, assigned by the VOD backend after successful upload. You can obtain this field in the <a href="https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>.</p><ol><li>When specifying this parameter, you must also specify the first frame through FileInfos.</li><li>The image size must be less than 10M.</li><li>The image format values are: jpeg, jpg, png, webp.</li></ol>
                     * 
                     */
                    std::string GetLastFrameFileId() const;

                    /**
                     * 设置<p>Media file ID used as the last frame to generate a video. The globally unique identifier of the file on VOD, assigned by the VOD backend after successful upload. You can obtain this field in the <a href="https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>.</p><ol><li>When specifying this parameter, you must also specify the first frame through FileInfos.</li><li>The image size must be less than 10M.</li><li>The image format values are: jpeg, jpg, png, webp.</li></ol>
                     * @param _lastFrameFileId <p>Media file ID used as the last frame to generate a video. The globally unique identifier of the file on VOD, assigned by the VOD backend after successful upload. You can obtain this field in the <a href="https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>.</p><ol><li>When specifying this parameter, you must also specify the first frame through FileInfos.</li><li>The image size must be less than 10M.</li><li>The image format values are: jpeg, jpg, png, webp.</li></ol>
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
                     * 获取<p>URL of the media file used as the last frame to generate video. Description:</p><ol><li>When you specify this parameter, specify the first frame via FileInfos at the same time.</li><li>Image size must be less than 5M.</li><li>Image format values: jpeg, jpg, png, webp.</li></ol>
                     * @return LastFrameUrl <p>URL of the media file used as the last frame to generate video. Description:</p><ol><li>When you specify this parameter, specify the first frame via FileInfos at the same time.</li><li>Image size must be less than 5M.</li><li>Image format values: jpeg, jpg, png, webp.</li></ol>
                     * 
                     */
                    std::string GetLastFrameUrl() const;

                    /**
                     * 设置<p>URL of the media file used as the last frame to generate video. Description:</p><ol><li>When you specify this parameter, specify the first frame via FileInfos at the same time.</li><li>Image size must be less than 5M.</li><li>Image format values: jpeg, jpg, png, webp.</li></ol>
                     * @param _lastFrameUrl <p>URL of the media file used as the last frame to generate video. Description:</p><ol><li>When you specify this parameter, specify the first frame via FileInfos at the same time.</li><li>Image size must be less than 5M.</li><li>Image format values: jpeg, jpg, png, webp.</li></ol>
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
                     * 获取<p>Prompt for video generation.<br>When no reference file is passed in, no scenario type is used, ExtInfo is not empty, Prompt is required.</p>
                     * @return Prompt <p>Prompt for video generation.<br>When no reference file is passed in, no scenario type is used, ExtInfo is not empty, Prompt is required.</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>Prompt for video generation.<br>When no reference file is passed in, no scenario type is used, ExtInfo is not empty, Prompt is required.</p>
                     * @param _prompt <p>Prompt for video generation.<br>When no reference file is passed in, no scenario type is used, ExtInfo is not empty, Prompt is required.</p>
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
                     * 获取<p>Prompt to prevent the model from generating videos.</p>
                     * @return NegativePrompt <p>Prompt to prevent the model from generating videos.</p>
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置<p>Prompt to prevent the model from generating videos.</p>
                     * @param _negativePrompt <p>Prompt to prevent the model from generating videos.</p>
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
                     * 获取<p>Whether to optimize Prompt content automatically. When Enabled, the passed-in Prompt will be optimized automatically to enhance generation quality. Valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li></p>
                     * @return EnhancePrompt <p>Whether to optimize Prompt content automatically. When Enabled, the passed-in Prompt will be optimized automatically to enhance generation quality. Valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li></p>
                     * 
                     */
                    std::string GetEnhancePrompt() const;

                    /**
                     * 设置<p>Whether to optimize Prompt content automatically. When Enabled, the passed-in Prompt will be optimized automatically to enhance generation quality. Valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li></p>
                     * @param _enhancePrompt <p>Whether to optimize Prompt content automatically. When Enabled, the passed-in Prompt will be optimized automatically to enhance generation quality. Valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li></p>
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
                     * 获取<p>Configuration of the output media file for the video task.</p>
                     * @return OutputConfig <p>Configuration of the output media file for the video task.</p>
                     * 
                     */
                    AigcVideoOutputConfig GetOutputConfig() const;

                    /**
                     * 设置<p>Configuration of the output media file for the video task.</p>
                     * @param _outputConfig <p>Configuration of the output media file for the video task.</p>
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
                     * 获取<p>Region information of the input file. Values are as follows:</p><ul><li>If the input file is stored overseas: Oversea;</li><li>If the input file is stored in the western United States: OverseaUSWest;</li><li>If the input file is stored in the Chinese mainland: Mainland.</li></ul><p>Default value: Mainland</p>
                     * @return InputRegion <p>Region information of the input file. Values are as follows:</p><ul><li>If the input file is stored overseas: Oversea;</li><li>If the input file is stored in the western United States: OverseaUSWest;</li><li>If the input file is stored in the Chinese mainland: Mainland.</li></ul><p>Default value: Mainland</p>
                     * 
                     */
                    std::string GetInputRegion() const;

                    /**
                     * 设置<p>Region information of the input file. Values are as follows:</p><ul><li>If the input file is stored overseas: Oversea;</li><li>If the input file is stored in the western United States: OverseaUSWest;</li><li>If the input file is stored in the Chinese mainland: Mainland.</li></ul><p>Default value: Mainland</p>
                     * @param _inputRegion <p>Region information of the input file. Values are as follows:</p><ul><li>If the input file is stored overseas: Oversea;</li><li>If the input file is stored in the western United States: OverseaUSWest;</li><li>If the input file is stored in the Chinese mainland: Mainland.</li></ul><p>Default value: Mainland</p>
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
                     * 获取<p>Scenario type. Values are as follows:</p><li>When ModelName is Kling: motion_control means action control; avatar_i2v means digital human; lip_sync means lip-sync;</li><li>When ModelName is Vidu: template_effect means special effect template;</li><li>Other ModelName values are not currently supported.</li>
                     * @return SceneType <p>Scenario type. Values are as follows:</p><li>When ModelName is Kling: motion_control means action control; avatar_i2v means digital human; lip_sync means lip-sync;</li><li>When ModelName is Vidu: template_effect means special effect template;</li><li>Other ModelName values are not currently supported.</li>
                     * 
                     */
                    std::string GetSceneType() const;

                    /**
                     * 设置<p>Scenario type. Values are as follows:</p><li>When ModelName is Kling: motion_control means action control; avatar_i2v means digital human; lip_sync means lip-sync;</li><li>When ModelName is Vidu: template_effect means special effect template;</li><li>Other ModelName values are not currently supported.</li>
                     * @param _sceneType <p>Scenario type. Values are as follows:</p><li>When ModelName is Kling: motion_control means action control; avatar_i2v means digital human; lip_sync means lip-sync;</li><li>When ModelName is Vidu: template_effect means special effect template;</li><li>Other ModelName values are not currently supported.</li>
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
                     * 获取<p><a href="https://www.tencentcloud.com/document/product/266/33475?from_cn_redirect=1#.E4.BB.BB.E5.8A.A1.E6.B5.81">Task flow name</a>. Fill in when you need to execute a task flow on the generated new video.</p>
                     * @return Procedure <p><a href="https://www.tencentcloud.com/document/product/266/33475?from_cn_redirect=1#.E4.BB.BB.E5.8A.A1.E6.B5.81">Task flow name</a>. Fill in when you need to execute a task flow on the generated new video.</p>
                     * 
                     */
                    std::string GetProcedure() const;

                    /**
                     * 设置<p><a href="https://www.tencentcloud.com/document/product/266/33475?from_cn_redirect=1#.E4.BB.BB.E5.8A.A1.E6.B5.81">Task flow name</a>. Fill in when you need to execute a task flow on the generated new video.</p>
                     * @param _procedure <p><a href="https://www.tencentcloud.com/document/product/266/33475?from_cn_redirect=1#.E4.BB.BB.E5.8A.A1.E6.B5.81">Task flow name</a>. Fill in when you need to execute a task flow on the generated new video.</p>
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
                     * 获取<p>Source context. This is used to pass user request information. The audio and video quality revival completion callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * @return SessionContext <p>Source context. This is used to pass user request information. The audio and video quality revival completion callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置<p>Source context. This is used to pass user request information. The audio and video quality revival completion callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * @param _sessionContext <p>Source context. This is used to pass user request information. The audio and video quality revival completion callback returns the value of this field. The maximum length is 1000 characters.</p>
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
                     * 获取<p>Reserved field, used for special purposes.<br>Can be used to import special model parameters, storyboard prompts, etc.</p>
                     * @return ExtInfo <p>Reserved field, used for special purposes.<br>Can be used to import special model parameters, storyboard prompts, etc.</p>
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置<p>Reserved field, used for special purposes.<br>Can be used to import special model parameters, storyboard prompts, etc.</p>
                     * @param _extInfo <p>Reserved field, used for special purposes.<br>Can be used to import special model parameters, storyboard prompts, etc.</p>
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
                     * <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services from December 25, 2023, this field must be filled in as the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Model name. Parameter Value:<br>Kling: Kling;<br>Vidu;<br>Hailuo: Hailuo;<br>Hunyuan: Hunyuan;<br>Mingmou: Mingmou;<br>GV;<br>OS;<br>PixVerse;</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>Model version. Value: <br>When ModelName is Hailuo, available values are 02, 2.3, 2.3-fast, H3, H3_regen, and H3-Max; <br>When ModelName is Kling, available values are 1.6, 2.0, 2.1, 2.5, 2.6, O1, 3.0, 3.0-Omni, 3.0-turbo, and scene; <br>When ModelName is Vidu, available values are q2, q2-pro, q2-turbo, q3, q3-pro, q3-turbo, q3-mix, q3-drama, q3-ad, scene, avatar-q2-pro, avatar-q2-turbo, and lip-sync; <br>When ModelName is GV, available values are 3.1, 3.1-fast, 3.1-lite, and omni; <br>When ModelName is OS, available values are 2.0; <br>When ModelName is Hunyuan, available values are 1.5 and 3d_2.0; <br>When ModelName is Mingmou, available values are 1.0; <br>When ModelName is PixVerse, available values are v5.6, v6, and c1;</p>
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * <p>Used to describe the resource file to be used by the model when generating a video, divided into <strong>first and last frame mode, reference image/video/sound generation, video editing, and other modes</strong>.</p><p><strong>First and last frame video generation</strong>: <strong>The Usage field of the first frame image is FirstFrame, and the Usage field of the last frame image is LastFrame</strong>. One image is supported for each. The first frame can be passed in separately, but the last frame cannot be passed in separately. <strong>First and last frame generation uses the image ratio for reference</strong>.<br><strong>Reference image/video/sound generation</strong>: Single or multiple images/videos/sounds can be passed in as references, with the <strong>Usage field set to Reference</strong>. <strong>In reference mode, the display aspect ratio of the generated video can be adjusted</strong>.<br><strong>Video editing</strong>: Vidu and Kling can input a video for editing. Images can also be passed in along with the input video, with the <strong>Usage field of the image set to Reference</strong>.</p><p>Note:</p><ol><li>Image size cannot exceed 10M.</li><li>Supported image formats: jpeg, jpg, png. x0b</li><li>For whether a model version supports reference image/video/sound, first and last frame, video editing, and other features, you can request the document from us or refer to the original vendor's document information.</li></ol>
                     */
                    std::vector<AigcVideoTaskInputFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * <p>Subject input information.</p>
                     */
                    std::vector<AigcVideoTaskInputSubjectInfo> m_subjectInfos;
                    bool m_subjectInfosHasBeenSet;

                    /**
                     * <p>Media file ID used as the last frame to generate a video. The globally unique identifier of the file on VOD, assigned by the VOD backend after successful upload. You can obtain this field in the <a href="https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>.</p><ol><li>When specifying this parameter, you must also specify the first frame through FileInfos.</li><li>The image size must be less than 10M.</li><li>The image format values are: jpeg, jpg, png, webp.</li></ol>
                     */
                    std::string m_lastFrameFileId;
                    bool m_lastFrameFileIdHasBeenSet;

                    /**
                     * <p>URL of the media file used as the last frame to generate video. Description:</p><ol><li>When you specify this parameter, specify the first frame via FileInfos at the same time.</li><li>Image size must be less than 5M.</li><li>Image format values: jpeg, jpg, png, webp.</li></ol>
                     */
                    std::string m_lastFrameUrl;
                    bool m_lastFrameUrlHasBeenSet;

                    /**
                     * <p>Prompt for video generation.<br>When no reference file is passed in, no scenario type is used, ExtInfo is not empty, Prompt is required.</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>Prompt to prevent the model from generating videos.</p>
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * <p>Whether to optimize Prompt content automatically. When Enabled, the passed-in Prompt will be optimized automatically to enhance generation quality. Valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li></p>
                     */
                    std::string m_enhancePrompt;
                    bool m_enhancePromptHasBeenSet;

                    /**
                     * <p>Configuration of the output media file for the video task.</p>
                     */
                    AigcVideoOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                    /**
                     * <p>Region information of the input file. Values are as follows:</p><ul><li>If the input file is stored overseas: Oversea;</li><li>If the input file is stored in the western United States: OverseaUSWest;</li><li>If the input file is stored in the Chinese mainland: Mainland.</li></ul><p>Default value: Mainland</p>
                     */
                    std::string m_inputRegion;
                    bool m_inputRegionHasBeenSet;

                    /**
                     * <p>Scenario type. Values are as follows:</p><li>When ModelName is Kling: motion_control means action control; avatar_i2v means digital human; lip_sync means lip-sync;</li><li>When ModelName is Vidu: template_effect means special effect template;</li><li>Other ModelName values are not currently supported.</li>
                     */
                    std::string m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * <p><a href="https://www.tencentcloud.com/document/product/266/33475?from_cn_redirect=1#.E4.BB.BB.E5.8A.A1.E6.B5.81">Task flow name</a>. Fill in when you need to execute a task flow on the generated new video.</p>
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
                     * <p>Source context. This is used to pass user request information. The audio and video quality revival completion callback returns the value of this field. The maximum length is 1000 characters.</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If this is not specified, the default value is 0.</p>
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * <p>Reserved field, used for special purposes.<br>Can be used to import special model parameters, storyboard prompts, etc.</p>
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCVIDEOTASKREQUEST_H_
