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
                     * 获取<b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * @return SubAppId <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * @param _subAppId <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
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
                     * 获取Model name. valid values: <li>Hailuo: conch;</li><li>Kling: Kling;</li><li>Jimeng: Jimeng;</li><li>Vidu;</li><li>Hunyuan: Hunyuan;</li><li>Mingmou: bright eyes;</li>
                     * @return ModelName Model name. valid values: <li>Hailuo: conch;</li><li>Kling: Kling;</li><li>Jimeng: Jimeng;</li><li>Vidu;</li><li>Hunyuan: Hunyuan;</li><li>Mingmou: bright eyes;</li>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置Model name. valid values: <li>Hailuo: conch;</li><li>Kling: Kling;</li><li>Jimeng: Jimeng;</li><li>Vidu;</li><li>Hunyuan: Hunyuan;</li><li>Mingmou: bright eyes;</li>
                     * @param _modelName Model name. valid values: <li>Hailuo: conch;</li><li>Kling: Kling;</li><li>Jimeng: Jimeng;</li><li>Vidu;</li><li>Hunyuan: Hunyuan;</li><li>Mingmou: bright eyes;</li>
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
                     * 获取Model version. parameter value: <li>when ModelName is Hailuo, optional values are 02, 2.3, 2.3-fast;</li><li>when ModelName is Kling, optional values are 1.6, 2.0, 2.1, 2.5, O1;</li><li>when ModelName is Jimeng, optional values are 3.0pro;</li><li>when ModelName is Vidu, optional values are q2, q2-pro, q2-turbo;</li><li>when ModelName is GV, optional values are 3.1, 3.1-fast;</li><li>when ModelName is OS, optional values are 2.0;</li><li>when ModelName is Hunyuan, optional values are 1.5;</li><li>when ModelName is Mingmou, optional values are 1.0;</li>
                     * @return ModelVersion Model version. parameter value: <li>when ModelName is Hailuo, optional values are 02, 2.3, 2.3-fast;</li><li>when ModelName is Kling, optional values are 1.6, 2.0, 2.1, 2.5, O1;</li><li>when ModelName is Jimeng, optional values are 3.0pro;</li><li>when ModelName is Vidu, optional values are q2, q2-pro, q2-turbo;</li><li>when ModelName is GV, optional values are 3.1, 3.1-fast;</li><li>when ModelName is OS, optional values are 2.0;</li><li>when ModelName is Hunyuan, optional values are 1.5;</li><li>when ModelName is Mingmou, optional values are 1.0;</li>
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置Model version. parameter value: <li>when ModelName is Hailuo, optional values are 02, 2.3, 2.3-fast;</li><li>when ModelName is Kling, optional values are 1.6, 2.0, 2.1, 2.5, O1;</li><li>when ModelName is Jimeng, optional values are 3.0pro;</li><li>when ModelName is Vidu, optional values are q2, q2-pro, q2-turbo;</li><li>when ModelName is GV, optional values are 3.1, 3.1-fast;</li><li>when ModelName is OS, optional values are 2.0;</li><li>when ModelName is Hunyuan, optional values are 1.5;</li><li>when ModelName is Mingmou, optional values are 1.0;</li>
                     * @param _modelVersion Model version. parameter value: <li>when ModelName is Hailuo, optional values are 02, 2.3, 2.3-fast;</li><li>when ModelName is Kling, optional values are 1.6, 2.0, 2.1, 2.5, O1;</li><li>when ModelName is Jimeng, optional values are 3.0pro;</li><li>when ModelName is Vidu, optional values are q2, q2-pro, q2-turbo;</li><li>when ModelName is GV, optional values are 3.1, 3.1-fast;</li><li>when ModelName is OS, optional values are 2.0;</li><li>when ModelName is Hunyuan, optional values are 1.5;</li><li>when ModelName is Mingmou, optional values are 1.0;</li>
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
                     * 获取List of up to three material resources for description of resource images to be used by the model in video generation.

Video generation with first and last frame: use the first table in FileInfos to represent the first frame (FileInfos contains at most one image at this point). LastFrameFileId or LastFrameUrl represents the last frame.

Model supporting multi-image input.
1. GV, when entering multiple images, LastFrameFileId and LastFrameUrl are unavailable.
2. Vidu supports multi-image reference for video generation. the q2 model accepts 1-7 images. use the ObjectId in FileInfos as the subject id for input.

Note:.
1. Image size: the size should not exceed 10 mb.
2. supported image formats: jpeg, png.
                     * @return FileInfos List of up to three material resources for description of resource images to be used by the model in video generation.

Video generation with first and last frame: use the first table in FileInfos to represent the first frame (FileInfos contains at most one image at this point). LastFrameFileId or LastFrameUrl represents the last frame.

Model supporting multi-image input.
1. GV, when entering multiple images, LastFrameFileId and LastFrameUrl are unavailable.
2. Vidu supports multi-image reference for video generation. the q2 model accepts 1-7 images. use the ObjectId in FileInfos as the subject id for input.

Note:.
1. Image size: the size should not exceed 10 mb.
2. supported image formats: jpeg, png.
                     * 
                     */
                    std::vector<AigcVideoTaskInputFileInfo> GetFileInfos() const;

                    /**
                     * 设置List of up to three material resources for description of resource images to be used by the model in video generation.

Video generation with first and last frame: use the first table in FileInfos to represent the first frame (FileInfos contains at most one image at this point). LastFrameFileId or LastFrameUrl represents the last frame.

Model supporting multi-image input.
1. GV, when entering multiple images, LastFrameFileId and LastFrameUrl are unavailable.
2. Vidu supports multi-image reference for video generation. the q2 model accepts 1-7 images. use the ObjectId in FileInfos as the subject id for input.

Note:.
1. Image size: the size should not exceed 10 mb.
2. supported image formats: jpeg, png.
                     * @param _fileInfos List of up to three material resources for description of resource images to be used by the model in video generation.

Video generation with first and last frame: use the first table in FileInfos to represent the first frame (FileInfos contains at most one image at this point). LastFrameFileId or LastFrameUrl represents the last frame.

Model supporting multi-image input.
1. GV, when entering multiple images, LastFrameFileId and LastFrameUrl are unavailable.
2. Vidu supports multi-image reference for video generation. the q2 model accepts 1-7 images. use the ObjectId in FileInfos as the subject id for input.

Note:.
1. Image size: the size should not exceed 10 mb.
2. supported image formats: jpeg, png.
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
                     * 获取The media file ID used as the end frame to generate video. this file has a globally unique ID on vod, assigned by the vod backend after successful upload. you can get this field in the [video upload completion event notification](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or [vod console](https://console.cloud.tencent.com/vod/media). description:.
1. only models GV, Kling, and Vidu are supported. other models are not currently supported. when ModelName is GV, if you specify this parameter, you must simultaneously specify FileInfos as the first frame of the video to be generated. when ModelName is Kling and ModelVersion is 2.1 and specify output Resolution Resolution as 1080P, you can specify this parameter. when ModelName is Vidu and ModelVersion is q2-pro or q2-turbo, you can specify this parameter.
2. Image size: the size should be less than 5 mb.
3. image format value is jpeg, jpg, png, webp.
                     * @return LastFrameFileId The media file ID used as the end frame to generate video. this file has a globally unique ID on vod, assigned by the vod backend after successful upload. you can get this field in the [video upload completion event notification](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or [vod console](https://console.cloud.tencent.com/vod/media). description:.
1. only models GV, Kling, and Vidu are supported. other models are not currently supported. when ModelName is GV, if you specify this parameter, you must simultaneously specify FileInfos as the first frame of the video to be generated. when ModelName is Kling and ModelVersion is 2.1 and specify output Resolution Resolution as 1080P, you can specify this parameter. when ModelName is Vidu and ModelVersion is q2-pro or q2-turbo, you can specify this parameter.
2. Image size: the size should be less than 5 mb.
3. image format value is jpeg, jpg, png, webp.
                     * 
                     */
                    std::string GetLastFrameFileId() const;

                    /**
                     * 设置The media file ID used as the end frame to generate video. this file has a globally unique ID on vod, assigned by the vod backend after successful upload. you can get this field in the [video upload completion event notification](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or [vod console](https://console.cloud.tencent.com/vod/media). description:.
1. only models GV, Kling, and Vidu are supported. other models are not currently supported. when ModelName is GV, if you specify this parameter, you must simultaneously specify FileInfos as the first frame of the video to be generated. when ModelName is Kling and ModelVersion is 2.1 and specify output Resolution Resolution as 1080P, you can specify this parameter. when ModelName is Vidu and ModelVersion is q2-pro or q2-turbo, you can specify this parameter.
2. Image size: the size should be less than 5 mb.
3. image format value is jpeg, jpg, png, webp.
                     * @param _lastFrameFileId The media file ID used as the end frame to generate video. this file has a globally unique ID on vod, assigned by the vod backend after successful upload. you can get this field in the [video upload completion event notification](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or [vod console](https://console.cloud.tencent.com/vod/media). description:.
1. only models GV, Kling, and Vidu are supported. other models are not currently supported. when ModelName is GV, if you specify this parameter, you must simultaneously specify FileInfos as the first frame of the video to be generated. when ModelName is Kling and ModelVersion is 2.1 and specify output Resolution Resolution as 1080P, you can specify this parameter. when ModelName is Vidu and ModelVersion is q2-pro or q2-turbo, you can specify this parameter.
2. Image size: the size should be less than 5 mb.
3. image format value is jpeg, jpg, png, webp.
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
                     * 获取Media file URL used as frames to generate video. description:.
1. only models GV, Kling, and Vidu are supported. other models are not currently supported. when ModelName is GV, if you specify this parameter, you must simultaneously specify FileInfos as the first frame of the video to be generated. when ModelName is Kling and ModelVersion is 2.1 and specify output Resolution Resolution as 1080P, you can specify this parameter. when ModelName is Vidu and ModelVersion is q2-pro or q2-turbo, you can specify this parameter.
2. Image size: the size should be less than 5 mb.
3. image format value is jpeg, jpg, png, webp.
                     * @return LastFrameUrl Media file URL used as frames to generate video. description:.
1. only models GV, Kling, and Vidu are supported. other models are not currently supported. when ModelName is GV, if you specify this parameter, you must simultaneously specify FileInfos as the first frame of the video to be generated. when ModelName is Kling and ModelVersion is 2.1 and specify output Resolution Resolution as 1080P, you can specify this parameter. when ModelName is Vidu and ModelVersion is q2-pro or q2-turbo, you can specify this parameter.
2. Image size: the size should be less than 5 mb.
3. image format value is jpeg, jpg, png, webp.
                     * 
                     */
                    std::string GetLastFrameUrl() const;

                    /**
                     * 设置Media file URL used as frames to generate video. description:.
1. only models GV, Kling, and Vidu are supported. other models are not currently supported. when ModelName is GV, if you specify this parameter, you must simultaneously specify FileInfos as the first frame of the video to be generated. when ModelName is Kling and ModelVersion is 2.1 and specify output Resolution Resolution as 1080P, you can specify this parameter. when ModelName is Vidu and ModelVersion is q2-pro or q2-turbo, you can specify this parameter.
2. Image size: the size should be less than 5 mb.
3. image format value is jpeg, jpg, png, webp.
                     * @param _lastFrameUrl Media file URL used as frames to generate video. description:.
1. only models GV, Kling, and Vidu are supported. other models are not currently supported. when ModelName is GV, if you specify this parameter, you must simultaneously specify FileInfos as the first frame of the video to be generated. when ModelName is Kling and ModelVersion is 2.1 and specify output Resolution Resolution as 1080P, you can specify this parameter. when ModelName is Vidu and ModelVersion is q2-pro or q2-turbo, you can specify this parameter.
2. Image size: the size should be less than 5 mb.
3. image format value is jpeg, jpg, png, webp.
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
                     * 获取Prompt content for video generation. this parameter is required when FileInfos is empty.
Example value: move the picture.
                     * @return Prompt Prompt content for video generation. this parameter is required when FileInfos is empty.
Example value: move the picture.
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置Prompt content for video generation. this parameter is required when FileInfos is empty.
Example value: move the picture.
                     * @param _prompt Prompt content for video generation. this parameter is required when FileInfos is empty.
Example value: move the picture.
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
                     * 获取Prevent the model from generating video prompts.
                     * @return NegativePrompt Prevent the model from generating video prompts.
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置Prevent the model from generating video prompts.
                     * @param _negativePrompt Prevent the model from generating video prompts.
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
                     * 获取Whether to optimize Prompt content automatically. when Enabled, the passed-in Prompt will be optimized automatically to enhance generation quality. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>.
                     * @return EnhancePrompt Whether to optimize Prompt content automatically. when Enabled, the passed-in Prompt will be optimized automatically to enhance generation quality. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>.
                     * 
                     */
                    std::string GetEnhancePrompt() const;

                    /**
                     * 设置Whether to optimize Prompt content automatically. when Enabled, the passed-in Prompt will be optimized automatically to enhance generation quality. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>.
                     * @param _enhancePrompt Whether to optimize Prompt content automatically. when Enabled, the passed-in Prompt will be optimized automatically to enhance generation quality. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>.
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
                     * 获取Specifies the output media file configuration for the video task.
                     * @return OutputConfig Specifies the output media file configuration for the video task.
                     * 
                     */
                    AigcVideoOutputConfig GetOutputConfig() const;

                    /**
                     * 设置Specifies the output media file configuration for the video task.
                     * @param _outputConfig Specifies the output media file configuration for the video task.
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
                     * 获取An identifier for deduplication. if there has been a request with the same identifier within the past 3 days, an error will be returned for the current request. the maximum length is 50 characters. leaving it blank or using an empty string indicates no deduplication.
                     * @return SessionId An identifier for deduplication. if there has been a request with the same identifier within the past 3 days, an error will be returned for the current request. the maximum length is 50 characters. leaving it blank or using an empty string indicates no deduplication.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置An identifier for deduplication. if there has been a request with the same identifier within the past 3 days, an error will be returned for the current request. the maximum length is 50 characters. leaving it blank or using an empty string indicates no deduplication.
                     * @param _sessionId An identifier for deduplication. if there has been a request with the same identifier within the past 3 days, an error will be returned for the current request. the maximum length is 50 characters. leaving it blank or using an empty string indicates no deduplication.
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
                     * 获取Source context, used to pass through user request information. the audio and video quality revival complete callback will return the value of this field, up to 1000 characters.
                     * @return SessionContext Source context, used to pass through user request information. the audio and video quality revival complete callback will return the value of this field, up to 1000 characters.
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置Source context, used to pass through user request information. the audio and video quality revival complete callback will return the value of this field, up to 1000 characters.
                     * @param _sessionContext Source context, used to pass through user request information. the audio and video quality revival complete callback will return the value of this field, up to 1000 characters.
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
                     * 获取Task priority. the higher the value, the higher the priority. the value range is from -10 to 10. if left blank, the default value is 0.
                     * @return TasksPriority Task priority. the higher the value, the higher the priority. the value range is from -10 to 10. if left blank, the default value is 0.
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置Task priority. the higher the value, the higher the priority. the value range is from -10 to 10. if left blank, the default value is 0.
                     * @param _tasksPriority Task priority. the higher the value, the higher the priority. the value range is from -10 to 10. if left blank, the default value is 0.
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
                     * 获取Reserved field, used for special purpose.
                     * @return ExtInfo Reserved field, used for special purpose.
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置Reserved field, used for special purpose.
                     * @param _extInfo Reserved field, used for special purpose.
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                    /**
                     * 获取Specifies the region information of the input image. when the image url is a foreign address, selectable Oversea. default Mainland.
                     * @return InputRegion Specifies the region information of the input image. when the image url is a foreign address, selectable Oversea. default Mainland.
                     * 
                     */
                    std::string GetInputRegion() const;

                    /**
                     * 设置Specifies the region information of the input image. when the image url is a foreign address, selectable Oversea. default Mainland.
                     * @param _inputRegion Specifies the region information of the input image. when the image url is a foreign address, selectable Oversea. default Mainland.
                     * 
                     */
                    void SetInputRegion(const std::string& _inputRegion);

                    /**
                     * 判断参数 InputRegion 是否已赋值
                     * @return InputRegion 是否已赋值
                     * 
                     */
                    bool InputRegionHasBeenSet() const;

                private:

                    /**
                     * <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Model name. valid values: <li>Hailuo: conch;</li><li>Kling: Kling;</li><li>Jimeng: Jimeng;</li><li>Vidu;</li><li>Hunyuan: Hunyuan;</li><li>Mingmou: bright eyes;</li>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * Model version. parameter value: <li>when ModelName is Hailuo, optional values are 02, 2.3, 2.3-fast;</li><li>when ModelName is Kling, optional values are 1.6, 2.0, 2.1, 2.5, O1;</li><li>when ModelName is Jimeng, optional values are 3.0pro;</li><li>when ModelName is Vidu, optional values are q2, q2-pro, q2-turbo;</li><li>when ModelName is GV, optional values are 3.1, 3.1-fast;</li><li>when ModelName is OS, optional values are 2.0;</li><li>when ModelName is Hunyuan, optional values are 1.5;</li><li>when ModelName is Mingmou, optional values are 1.0;</li>
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * List of up to three material resources for description of resource images to be used by the model in video generation.

Video generation with first and last frame: use the first table in FileInfos to represent the first frame (FileInfos contains at most one image at this point). LastFrameFileId or LastFrameUrl represents the last frame.

Model supporting multi-image input.
1. GV, when entering multiple images, LastFrameFileId and LastFrameUrl are unavailable.
2. Vidu supports multi-image reference for video generation. the q2 model accepts 1-7 images. use the ObjectId in FileInfos as the subject id for input.

Note:.
1. Image size: the size should not exceed 10 mb.
2. supported image formats: jpeg, png.
                     */
                    std::vector<AigcVideoTaskInputFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * The media file ID used as the end frame to generate video. this file has a globally unique ID on vod, assigned by the vod backend after successful upload. you can get this field in the [video upload completion event notification](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or [vod console](https://console.cloud.tencent.com/vod/media). description:.
1. only models GV, Kling, and Vidu are supported. other models are not currently supported. when ModelName is GV, if you specify this parameter, you must simultaneously specify FileInfos as the first frame of the video to be generated. when ModelName is Kling and ModelVersion is 2.1 and specify output Resolution Resolution as 1080P, you can specify this parameter. when ModelName is Vidu and ModelVersion is q2-pro or q2-turbo, you can specify this parameter.
2. Image size: the size should be less than 5 mb.
3. image format value is jpeg, jpg, png, webp.
                     */
                    std::string m_lastFrameFileId;
                    bool m_lastFrameFileIdHasBeenSet;

                    /**
                     * Media file URL used as frames to generate video. description:.
1. only models GV, Kling, and Vidu are supported. other models are not currently supported. when ModelName is GV, if you specify this parameter, you must simultaneously specify FileInfos as the first frame of the video to be generated. when ModelName is Kling and ModelVersion is 2.1 and specify output Resolution Resolution as 1080P, you can specify this parameter. when ModelName is Vidu and ModelVersion is q2-pro or q2-turbo, you can specify this parameter.
2. Image size: the size should be less than 5 mb.
3. image format value is jpeg, jpg, png, webp.
                     */
                    std::string m_lastFrameUrl;
                    bool m_lastFrameUrlHasBeenSet;

                    /**
                     * Prompt content for video generation. this parameter is required when FileInfos is empty.
Example value: move the picture.
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * Prevent the model from generating video prompts.
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * Whether to optimize Prompt content automatically. when Enabled, the passed-in Prompt will be optimized automatically to enhance generation quality. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>.
                     */
                    std::string m_enhancePrompt;
                    bool m_enhancePromptHasBeenSet;

                    /**
                     * Specifies the output media file configuration for the video task.
                     */
                    AigcVideoOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                    /**
                     * An identifier for deduplication. if there has been a request with the same identifier within the past 3 days, an error will be returned for the current request. the maximum length is 50 characters. leaving it blank or using an empty string indicates no deduplication.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Source context, used to pass through user request information. the audio and video quality revival complete callback will return the value of this field, up to 1000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * Task priority. the higher the value, the higher the priority. the value range is from -10 to 10. if left blank, the default value is 0.
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * Reserved field, used for special purpose.
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                    /**
                     * Specifies the region information of the input image. when the image url is a foreign address, selectable Oversea. default Mainland.
                     */
                    std::string m_inputRegion;
                    bool m_inputRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCVIDEOTASKREQUEST_H_
