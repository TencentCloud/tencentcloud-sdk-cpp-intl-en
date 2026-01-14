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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOOUTPUTCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOOUTPUTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Output media file configuration for AIGC video task.
                */
                class AigcVideoOutputConfig : public AbstractModel
                {
                public:
                    AigcVideoOutputConfig();
                    ~AigcVideoOutputConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Storage mode. valid values: <li>Permanent: Permanent storage. the generated video file will be stored in vod, and the FileId can be obtained from the event notification.</li> <li>Temporary: Temporary storage. the generated video file will not be stored in vod, and a Temporary access URL can be obtained from the event notification.</li>
Default value: Temporary.
                     * @return StorageMode Storage mode. valid values: <li>Permanent: Permanent storage. the generated video file will be stored in vod, and the FileId can be obtained from the event notification.</li> <li>Temporary: Temporary storage. the generated video file will not be stored in vod, and a Temporary access URL can be obtained from the event notification.</li>
Default value: Temporary.
                     * 
                     */
                    std::string GetStorageMode() const;

                    /**
                     * 设置Storage mode. valid values: <li>Permanent: Permanent storage. the generated video file will be stored in vod, and the FileId can be obtained from the event notification.</li> <li>Temporary: Temporary storage. the generated video file will not be stored in vod, and a Temporary access URL can be obtained from the event notification.</li>
Default value: Temporary.
                     * @param _storageMode Storage mode. valid values: <li>Permanent: Permanent storage. the generated video file will be stored in vod, and the FileId can be obtained from the event notification.</li> <li>Temporary: Temporary storage. the generated video file will not be stored in vod, and a Temporary access URL can be obtained from the event notification.</li>
Default value: Temporary.
                     * 
                     */
                    void SetStorageMode(const std::string& _storageMode);

                    /**
                     * 判断参数 StorageMode 是否已赋值
                     * @return StorageMode 是否已赋值
                     * 
                     */
                    bool StorageModeHasBeenSet() const;

                    /**
                     * 获取Output media filename, longest 64 characters. default filename is specified by the system.
                     * @return MediaName Output media filename, longest 64 characters. default filename is specified by the system.
                     * 
                     */
                    std::string GetMediaName() const;

                    /**
                     * 设置Output media filename, longest 64 characters. default filename is specified by the system.
                     * @param _mediaName Output media filename, longest 64 characters. default filename is specified by the system.
                     * 
                     */
                    void SetMediaName(const std::string& _mediaName);

                    /**
                     * 判断参数 MediaName 是否已赋值
                     * @return MediaName 是否已赋值
                     * 
                     */
                    bool MediaNameHasBeenSet() const;

                    /**
                     * 获取Category ID, used to categorize and manage media. you can create a category and obtain the category ID via the [create category](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) api.
<Li>Default value: 0, indicate other categories.</li>.
                     * @return ClassId Category ID, used to categorize and manage media. you can create a category and obtain the category ID via the [create category](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) api.
<Li>Default value: 0, indicate other categories.</li>.
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置Category ID, used to categorize and manage media. you can create a category and obtain the category ID via the [create category](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) api.
<Li>Default value: 0, indicate other categories.</li>.
                     * @param _classId Category ID, used to categorize and manage media. you can create a category and obtain the category ID via the [create category](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) api.
<Li>Default value: 0, indicate other categories.</li>.
                     * 
                     */
                    void SetClassId(const int64_t& _classId);

                    /**
                     * 判断参数 ClassId 是否已赋值
                     * @return ClassId 是否已赋值
                     * 
                     */
                    bool ClassIdHasBeenSet() const;

                    /**
                     * 获取The expiry date of the output file. files will be deleted longer than this time. default is never expire. format according to ISO 8601 standard. see [ISO date format description](https://www.tencentcloud.comom/document/product/266/11732?from_cn_redirect=1#I).
                     * @return ExpireTime The expiry date of the output file. files will be deleted longer than this time. default is never expire. format according to ISO 8601 standard. see [ISO date format description](https://www.tencentcloud.comom/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置The expiry date of the output file. files will be deleted longer than this time. default is never expire. format according to ISO 8601 standard. see [ISO date format description](https://www.tencentcloud.comom/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _expireTime The expiry date of the output file. files will be deleted longer than this time. default is never expire. format according to ISO 8601 standard. see [ISO date format description](https://www.tencentcloud.comom/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Video duration, unit: seconds. <li>when ModelName is Kling, optional values: 5, 10, defaults to 5;</li> <li>when ModelName is Hailuo, optional values: 6, 10, defaults to 6;</li> <li>when ModelName is Vidu, specify 1-10;</li> <li>when ModelName is GV, optional values: 8, defaults to 8;</li> <li>when ModelName is OS, optional values: 4, 8, 12, defaults to 8;</li>
                     * @return Duration Video duration, unit: seconds. <li>when ModelName is Kling, optional values: 5, 10, defaults to 5;</li> <li>when ModelName is Hailuo, optional values: 6, 10, defaults to 6;</li> <li>when ModelName is Vidu, specify 1-10;</li> <li>when ModelName is GV, optional values: 8, defaults to 8;</li> <li>when ModelName is OS, optional values: 4, 8, 12, defaults to 8;</li>
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置Video duration, unit: seconds. <li>when ModelName is Kling, optional values: 5, 10, defaults to 5;</li> <li>when ModelName is Hailuo, optional values: 6, 10, defaults to 6;</li> <li>when ModelName is Vidu, specify 1-10;</li> <li>when ModelName is GV, optional values: 8, defaults to 8;</li> <li>when ModelName is OS, optional values: 4, 8, 12, defaults to 8;</li>
                     * @param _duration Video duration, unit: seconds. <li>when ModelName is Kling, optional values: 5, 10, defaults to 5;</li> <li>when ModelName is Hailuo, optional values: 6, 10, defaults to 6;</li> <li>when ModelName is Vidu, specify 1-10;</li> <li>when ModelName is GV, optional values: 8, defaults to 8;</li> <li>when ModelName is OS, optional values: 4, 8, 12, defaults to 8;</li>
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Generated video resolution.
<li>When ModelName is Kling, available values are 720P and 1080P, with a default value of 720P.</li>
<li>When ModelName is Hailuo, optional values are 768P and 1080P, with a default value of 768P.</li>
<li>When ModelName is Vidu, optional values are 720P, 1080P, defaults to 720P.</li>
<li>When ModelName is GV, optional values are 720P, 1080P, with a default value of 720P.</li>
<li>When ModelName is OS, the optional values are 720P.</li>
                     * @return Resolution Generated video resolution.
<li>When ModelName is Kling, available values are 720P and 1080P, with a default value of 720P.</li>
<li>When ModelName is Hailuo, optional values are 768P and 1080P, with a default value of 768P.</li>
<li>When ModelName is Vidu, optional values are 720P, 1080P, defaults to 720P.</li>
<li>When ModelName is GV, optional values are 720P, 1080P, with a default value of 720P.</li>
<li>When ModelName is OS, the optional values are 720P.</li>
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置Generated video resolution.
<li>When ModelName is Kling, available values are 720P and 1080P, with a default value of 720P.</li>
<li>When ModelName is Hailuo, optional values are 768P and 1080P, with a default value of 768P.</li>
<li>When ModelName is Vidu, optional values are 720P, 1080P, defaults to 720P.</li>
<li>When ModelName is GV, optional values are 720P, 1080P, with a default value of 720P.</li>
<li>When ModelName is OS, the optional values are 720P.</li>
                     * @param _resolution Generated video resolution.
<li>When ModelName is Kling, available values are 720P and 1080P, with a default value of 720P.</li>
<li>When ModelName is Hailuo, optional values are 768P and 1080P, with a default value of 768P.</li>
<li>When ModelName is Vidu, optional values are 720P, 1080P, defaults to 720P.</li>
<li>When ModelName is GV, optional values are 720P, 1080P, with a default value of 720P.</li>
<li>When ModelName is OS, the optional values are 720P.</li>
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取Specify the aspect ratio of the generated video.
<li>When ModelName is Kling, for text-to-video, the optional values are 16:9, 9:16, 1:1, default is 16:9.</li>
<li>When ModelName is Vidu, the optional values for video generation and image generation usage reference are 16:9, 9:16, 4:3, 3:4, and 1:1. among them, only version q2 supports 4:3 and 3:4.</li>
<li>When ModelName is GV, optional values are 16:9 and 9:16, with a default value of 16:9.</li>
<li>When ModelName is OS, for text-to-video, optional values are 16:9, 9:16, default is 16:9;</li>
<li>When ModelName is Hailuo, it is not currently supported.</li>
                     * @return AspectRatio Specify the aspect ratio of the generated video.
<li>When ModelName is Kling, for text-to-video, the optional values are 16:9, 9:16, 1:1, default is 16:9.</li>
<li>When ModelName is Vidu, the optional values for video generation and image generation usage reference are 16:9, 9:16, 4:3, 3:4, and 1:1. among them, only version q2 supports 4:3 and 3:4.</li>
<li>When ModelName is GV, optional values are 16:9 and 9:16, with a default value of 16:9.</li>
<li>When ModelName is OS, for text-to-video, optional values are 16:9, 9:16, default is 16:9;</li>
<li>When ModelName is Hailuo, it is not currently supported.</li>
                     * 
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置Specify the aspect ratio of the generated video.
<li>When ModelName is Kling, for text-to-video, the optional values are 16:9, 9:16, 1:1, default is 16:9.</li>
<li>When ModelName is Vidu, the optional values for video generation and image generation usage reference are 16:9, 9:16, 4:3, 3:4, and 1:1. among them, only version q2 supports 4:3 and 3:4.</li>
<li>When ModelName is GV, optional values are 16:9 and 9:16, with a default value of 16:9.</li>
<li>When ModelName is OS, for text-to-video, optional values are 16:9, 9:16, default is 16:9;</li>
<li>When ModelName is Hailuo, it is not currently supported.</li>
                     * @param _aspectRatio Specify the aspect ratio of the generated video.
<li>When ModelName is Kling, for text-to-video, the optional values are 16:9, 9:16, 1:1, default is 16:9.</li>
<li>When ModelName is Vidu, the optional values for video generation and image generation usage reference are 16:9, 9:16, 4:3, 3:4, and 1:1. among them, only version q2 supports 4:3 and 3:4.</li>
<li>When ModelName is GV, optional values are 16:9 and 9:16, with a default value of 16:9.</li>
<li>When ModelName is OS, for text-to-video, optional values are 16:9, 9:16, default is 16:9;</li>
<li>When ModelName is Hailuo, it is not currently supported.</li>
                     * 
                     */
                    void SetAspectRatio(const std::string& _aspectRatio);

                    /**
                     * 判断参数 AspectRatio 是否已赋值
                     * @return AspectRatio 是否已赋值
                     * 
                     */
                    bool AspectRatioHasBeenSet() const;

                    /**
                     * 获取Whether to generate audio. supported models include GV, OS, Vidu. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>
Default value: Disabled.
                     * @return AudioGeneration Whether to generate audio. supported models include GV, OS, Vidu. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>
Default value: Disabled.
                     * 
                     */
                    std::string GetAudioGeneration() const;

                    /**
                     * 设置Whether to generate audio. supported models include GV, OS, Vidu. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>
Default value: Disabled.
                     * @param _audioGeneration Whether to generate audio. supported models include GV, OS, Vidu. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>
Default value: Disabled.
                     * 
                     */
                    void SetAudioGeneration(const std::string& _audioGeneration);

                    /**
                     * 判断参数 AudioGeneration 是否已赋值
                     * @return AudioGeneration 是否已赋值
                     * 
                     */
                    bool AudioGenerationHasBeenSet() const;

                    /**
                     * 获取Whether to allow figure or human face generation. valid values: <li>AllowAdult: allow adult generation.</li> <li>Disallowed: forbid including figures or human faces in images.</li>
                     * @return PersonGeneration Whether to allow figure or human face generation. valid values: <li>AllowAdult: allow adult generation.</li> <li>Disallowed: forbid including figures or human faces in images.</li>
                     * 
                     */
                    std::string GetPersonGeneration() const;

                    /**
                     * 设置Whether to allow figure or human face generation. valid values: <li>AllowAdult: allow adult generation.</li> <li>Disallowed: forbid including figures or human faces in images.</li>
                     * @param _personGeneration Whether to allow figure or human face generation. valid values: <li>AllowAdult: allow adult generation.</li> <li>Disallowed: forbid including figures or human faces in images.</li>
                     * 
                     */
                    void SetPersonGeneration(const std::string& _personGeneration);

                    /**
                     * 判断参数 PersonGeneration 是否已赋值
                     * @return PersonGeneration 是否已赋值
                     * 
                     */
                    bool PersonGenerationHasBeenSet() const;

                    /**
                     * 获取Whether to enable compliance check for input content. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>
                     * @return InputComplianceCheck Whether to enable compliance check for input content. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>
                     * 
                     */
                    std::string GetInputComplianceCheck() const;

                    /**
                     * 设置Whether to enable compliance check for input content. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>
                     * @param _inputComplianceCheck Whether to enable compliance check for input content. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>
                     * 
                     */
                    void SetInputComplianceCheck(const std::string& _inputComplianceCheck);

                    /**
                     * 判断参数 InputComplianceCheck 是否已赋值
                     * @return InputComplianceCheck 是否已赋值
                     * 
                     */
                    bool InputComplianceCheckHasBeenSet() const;

                    /**
                     * 获取Whether to enable compliance check for output content. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>
                     * @return OutputComplianceCheck Whether to enable compliance check for output content. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>
                     * 
                     */
                    std::string GetOutputComplianceCheck() const;

                    /**
                     * 设置Whether to enable compliance check for output content. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>
                     * @param _outputComplianceCheck Whether to enable compliance check for output content. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>
                     * 
                     */
                    void SetOutputComplianceCheck(const std::string& _outputComplianceCheck);

                    /**
                     * 判断参数 OutputComplianceCheck 是否已赋值
                     * @return OutputComplianceCheck 是否已赋值
                     * 
                     */
                    bool OutputComplianceCheckHasBeenSet() const;

                    /**
                     * 获取Whether to enable video enhancement. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>
Note:
1. when the selected resolution exceeds the resolution the model can generate, enhancement is enabled by default.
2. for resolutions that the model can directly output, you can also proactively select the model to directly output low-resolution images and use enhancement to obtain the specified resolution.
                     * @return EnhanceSwitch Whether to enable video enhancement. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>
Note:
1. when the selected resolution exceeds the resolution the model can generate, enhancement is enabled by default.
2. for resolutions that the model can directly output, you can also proactively select the model to directly output low-resolution images and use enhancement to obtain the specified resolution.
                     * 
                     */
                    std::string GetEnhanceSwitch() const;

                    /**
                     * 设置Whether to enable video enhancement. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>
Note:
1. when the selected resolution exceeds the resolution the model can generate, enhancement is enabled by default.
2. for resolutions that the model can directly output, you can also proactively select the model to directly output low-resolution images and use enhancement to obtain the specified resolution.
                     * @param _enhanceSwitch Whether to enable video enhancement. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>
Note:
1. when the selected resolution exceeds the resolution the model can generate, enhancement is enabled by default.
2. for resolutions that the model can directly output, you can also proactively select the model to directly output low-resolution images and use enhancement to obtain the specified resolution.
                     * 
                     */
                    void SetEnhanceSwitch(const std::string& _enhanceSwitch);

                    /**
                     * 判断参数 EnhanceSwitch 是否已赋值
                     * @return EnhanceSwitch 是否已赋值
                     * 
                     */
                    bool EnhanceSwitchHasBeenSet() const;

                    /**
                     * 获取Whether to enable vidu intelligent frame interpolation. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>
                     * @return FrameInterpolate Whether to enable vidu intelligent frame interpolation. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>
                     * 
                     */
                    std::string GetFrameInterpolate() const;

                    /**
                     * 设置Whether to enable vidu intelligent frame interpolation. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>
                     * @param _frameInterpolate Whether to enable vidu intelligent frame interpolation. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>
                     * 
                     */
                    void SetFrameInterpolate(const std::string& _frameInterpolate);

                    /**
                     * 判断参数 FrameInterpolate 是否已赋值
                     * @return FrameInterpolate 是否已赋值
                     * 
                     */
                    bool FrameInterpolateHasBeenSet() const;

                private:

                    /**
                     * Storage mode. valid values: <li>Permanent: Permanent storage. the generated video file will be stored in vod, and the FileId can be obtained from the event notification.</li> <li>Temporary: Temporary storage. the generated video file will not be stored in vod, and a Temporary access URL can be obtained from the event notification.</li>
Default value: Temporary.
                     */
                    std::string m_storageMode;
                    bool m_storageModeHasBeenSet;

                    /**
                     * Output media filename, longest 64 characters. default filename is specified by the system.
                     */
                    std::string m_mediaName;
                    bool m_mediaNameHasBeenSet;

                    /**
                     * Category ID, used to categorize and manage media. you can create a category and obtain the category ID via the [create category](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) api.
<Li>Default value: 0, indicate other categories.</li>.
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * The expiry date of the output file. files will be deleted longer than this time. default is never expire. format according to ISO 8601 standard. see [ISO date format description](https://www.tencentcloud.comom/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Video duration, unit: seconds. <li>when ModelName is Kling, optional values: 5, 10, defaults to 5;</li> <li>when ModelName is Hailuo, optional values: 6, 10, defaults to 6;</li> <li>when ModelName is Vidu, specify 1-10;</li> <li>when ModelName is GV, optional values: 8, defaults to 8;</li> <li>when ModelName is OS, optional values: 4, 8, 12, defaults to 8;</li>
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Generated video resolution.
<li>When ModelName is Kling, available values are 720P and 1080P, with a default value of 720P.</li>
<li>When ModelName is Hailuo, optional values are 768P and 1080P, with a default value of 768P.</li>
<li>When ModelName is Vidu, optional values are 720P, 1080P, defaults to 720P.</li>
<li>When ModelName is GV, optional values are 720P, 1080P, with a default value of 720P.</li>
<li>When ModelName is OS, the optional values are 720P.</li>
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * Specify the aspect ratio of the generated video.
<li>When ModelName is Kling, for text-to-video, the optional values are 16:9, 9:16, 1:1, default is 16:9.</li>
<li>When ModelName is Vidu, the optional values for video generation and image generation usage reference are 16:9, 9:16, 4:3, 3:4, and 1:1. among them, only version q2 supports 4:3 and 3:4.</li>
<li>When ModelName is GV, optional values are 16:9 and 9:16, with a default value of 16:9.</li>
<li>When ModelName is OS, for text-to-video, optional values are 16:9, 9:16, default is 16:9;</li>
<li>When ModelName is Hailuo, it is not currently supported.</li>
                     */
                    std::string m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

                    /**
                     * Whether to generate audio. supported models include GV, OS, Vidu. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>
Default value: Disabled.
                     */
                    std::string m_audioGeneration;
                    bool m_audioGenerationHasBeenSet;

                    /**
                     * Whether to allow figure or human face generation. valid values: <li>AllowAdult: allow adult generation.</li> <li>Disallowed: forbid including figures or human faces in images.</li>
                     */
                    std::string m_personGeneration;
                    bool m_personGenerationHasBeenSet;

                    /**
                     * Whether to enable compliance check for input content. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>
                     */
                    std::string m_inputComplianceCheck;
                    bool m_inputComplianceCheckHasBeenSet;

                    /**
                     * Whether to enable compliance check for output content. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>
                     */
                    std::string m_outputComplianceCheck;
                    bool m_outputComplianceCheckHasBeenSet;

                    /**
                     * Whether to enable video enhancement. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>
Note:
1. when the selected resolution exceeds the resolution the model can generate, enhancement is enabled by default.
2. for resolutions that the model can directly output, you can also proactively select the model to directly output low-resolution images and use enhancement to obtain the specified resolution.
                     */
                    std::string m_enhanceSwitch;
                    bool m_enhanceSwitchHasBeenSet;

                    /**
                     * Whether to enable vidu intelligent frame interpolation. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>
                     */
                    std::string m_frameInterpolate;
                    bool m_frameInterpolateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOOUTPUTCONFIG_H_
