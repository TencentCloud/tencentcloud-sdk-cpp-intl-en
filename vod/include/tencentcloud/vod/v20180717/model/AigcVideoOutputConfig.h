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
                     * 获取<p>Storage mode</p><p>Enumeration value:</p><ul><li>Temporary: Temporary storage. The generated video file will not be stored in VOD. You can obtain the temporary access URL from event notification. The valid period is 7 days.</li><li>Permanent: Permanent storage. The generated video file will be stored in VOD. You can obtain the FileId from event notification.</li></ul><p>Default value: Temporary</p>
                     * @return StorageMode <p>Storage mode</p><p>Enumeration value:</p><ul><li>Temporary: Temporary storage. The generated video file will not be stored in VOD. You can obtain the temporary access URL from event notification. The valid period is 7 days.</li><li>Permanent: Permanent storage. The generated video file will be stored in VOD. You can obtain the FileId from event notification.</li></ul><p>Default value: Temporary</p>
                     * 
                     */
                    std::string GetStorageMode() const;

                    /**
                     * 设置<p>Storage mode</p><p>Enumeration value:</p><ul><li>Temporary: Temporary storage. The generated video file will not be stored in VOD. You can obtain the temporary access URL from event notification. The valid period is 7 days.</li><li>Permanent: Permanent storage. The generated video file will be stored in VOD. You can obtain the FileId from event notification.</li></ul><p>Default value: Temporary</p>
                     * @param _storageMode <p>Storage mode</p><p>Enumeration value:</p><ul><li>Temporary: Temporary storage. The generated video file will not be stored in VOD. You can obtain the temporary access URL from event notification. The valid period is 7 days.</li><li>Permanent: Permanent storage. The generated video file will be stored in VOD. You can obtain the FileId from event notification.</li></ul><p>Default value: Temporary</p>
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
                     * 获取<p>Output media file name, up to 64 characters. Default filename is specified by the system.</p>
                     * @return MediaName <p>Output media file name, up to 64 characters. Default filename is specified by the system.</p>
                     * 
                     */
                    std::string GetMediaName() const;

                    /**
                     * 设置<p>Output media file name, up to 64 characters. Default filename is specified by the system.</p>
                     * @param _mediaName <p>Output media file name, up to 64 characters. Default filename is specified by the system.</p>
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
                     * 获取<p>Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the <a href="/document/product/266/7812">create category</a> API.</p><li>Default value: 0, indicate other categories.</li>
                     * @return ClassId <p>Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the <a href="/document/product/266/7812">create category</a> API.</p><li>Default value: 0, indicate other categories.</li>
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置<p>Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the <a href="/document/product/266/7812">create category</a> API.</p><li>Default value: 0, indicate other categories.</li>
                     * @param _classId <p>Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the <a href="/document/product/266/7812">create category</a> API.</p><li>Default value: 0, indicate other categories.</li>
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
                     * 获取<p>The expiry date of the output file. The file will be deleted longer than this time. It defaults to no expiration, format according to ISO 8601 standard. For details, see <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</p>
                     * @return ExpireTime <p>The expiry date of the output file. The file will be deleted longer than this time. It defaults to no expiration, format according to ISO 8601 standard. For details, see <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>The expiry date of the output file. The file will be deleted longer than this time. It defaults to no expiration, format according to ISO 8601 standard. For details, see <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</p>
                     * @param _expireTime <p>The expiry date of the output file. The file will be deleted longer than this time. It defaults to no expiration, format according to ISO 8601 standard. For details, see <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</p>
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
                     * 获取<p>Duration of the generated video, unit: seconds.</p><li>When ModelName is Kling, optional values are 3-15, default is 5.</li><li>When ModelName is Hailuo, optional values are 6 and 10, default is 6.</li><li>When ModelName is Vidu, specify 1-10.</li><li>When ModelName is GV, optional value is 8, default is 8.</li><li>When ModelName is OS, optional values are 4, 8, and 12, default is 8.</li><li>When ModelName is PixVerse, specify 1-15, default is 5.</li>
                     * @return Duration <p>Duration of the generated video, unit: seconds.</p><li>When ModelName is Kling, optional values are 3-15, default is 5.</li><li>When ModelName is Hailuo, optional values are 6 and 10, default is 6.</li><li>When ModelName is Vidu, specify 1-10.</li><li>When ModelName is GV, optional value is 8, default is 8.</li><li>When ModelName is OS, optional values are 4, 8, and 12, default is 8.</li><li>When ModelName is PixVerse, specify 1-15, default is 5.</li>
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置<p>Duration of the generated video, unit: seconds.</p><li>When ModelName is Kling, optional values are 3-15, default is 5.</li><li>When ModelName is Hailuo, optional values are 6 and 10, default is 6.</li><li>When ModelName is Vidu, specify 1-10.</li><li>When ModelName is GV, optional value is 8, default is 8.</li><li>When ModelName is OS, optional values are 4, 8, and 12, default is 8.</li><li>When ModelName is PixVerse, specify 1-15, default is 5.</li>
                     * @param _duration <p>Duration of the generated video, unit: seconds.</p><li>When ModelName is Kling, optional values are 3-15, default is 5.</li><li>When ModelName is Hailuo, optional values are 6 and 10, default is 6.</li><li>When ModelName is Vidu, specify 1-10.</li><li>When ModelName is GV, optional value is 8, default is 8.</li><li>When ModelName is OS, optional values are 4, 8, and 12, default is 8.</li><li>When ModelName is PixVerse, specify 1-15, default is 5.</li>
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
                     * 获取<p>Resolution of the generated video.</p><li>When ModelName is Kling, available values are 720P and 1080P, default is 720P;</li><li>When ModelName is Hailuo, available values are 768P and 1080P, default is 768P;</li><li>When ModelName is Vidu, available values are 720P and 1080P, default is 720P;</li><li>When ModelName is GV, available values are 720P and 1080P, default is 720P;</li><li>When ModelName is OS, available value is 720P;</li><li>When ModelName is PixVerse, available values are 540p, 720p, 1080p, 2k, and 4k, default is 720p;</li>
                     * @return Resolution <p>Resolution of the generated video.</p><li>When ModelName is Kling, available values are 720P and 1080P, default is 720P;</li><li>When ModelName is Hailuo, available values are 768P and 1080P, default is 768P;</li><li>When ModelName is Vidu, available values are 720P and 1080P, default is 720P;</li><li>When ModelName is GV, available values are 720P and 1080P, default is 720P;</li><li>When ModelName is OS, available value is 720P;</li><li>When ModelName is PixVerse, available values are 540p, 720p, 1080p, 2k, and 4k, default is 720p;</li>
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置<p>Resolution of the generated video.</p><li>When ModelName is Kling, available values are 720P and 1080P, default is 720P;</li><li>When ModelName is Hailuo, available values are 768P and 1080P, default is 768P;</li><li>When ModelName is Vidu, available values are 720P and 1080P, default is 720P;</li><li>When ModelName is GV, available values are 720P and 1080P, default is 720P;</li><li>When ModelName is OS, available value is 720P;</li><li>When ModelName is PixVerse, available values are 540p, 720p, 1080p, 2k, and 4k, default is 720p;</li>
                     * @param _resolution <p>Resolution of the generated video.</p><li>When ModelName is Kling, available values are 720P and 1080P, default is 720P;</li><li>When ModelName is Hailuo, available values are 768P and 1080P, default is 768P;</li><li>When ModelName is Vidu, available values are 720P and 1080P, default is 720P;</li><li>When ModelName is GV, available values are 720P and 1080P, default is 720P;</li><li>When ModelName is OS, available value is 720P;</li><li>When ModelName is PixVerse, available values are 540p, 720p, 1080p, 2k, and 4k, default is 720p;</li>
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
                     * 获取<p>Specify the aspect ratio of the generated video.</p><li>When ModelName is Kling, for text-to-video, the optional values are 16:9, 9:16, and 1:1, with a default value of 16:9.</li><li>When ModelName is Vidu, for text-to-video and reference image-to-video, the optional values are 16:9, 9:16, 4:3, 3:4, and 1:1. Only version q2 supports 4:3 and 3:4.</li><li>When ModelName is GV, the optional values are 16:9 and 9:16, with a default value of 16:9.</li><li>When ModelName is OS, for text-to-video, the optional values are 16:9 and 9:16, with a default value of 16:9.</li><li>When ModelName is Hailuo, this parameter is not currently supported.</li><li>When ModelName is PixVerse, the optional values are 16:9, 4:3, 1:1, 3:4, 9:16, 2:3, 3:2, and 21:9.</li>
                     * @return AspectRatio <p>Specify the aspect ratio of the generated video.</p><li>When ModelName is Kling, for text-to-video, the optional values are 16:9, 9:16, and 1:1, with a default value of 16:9.</li><li>When ModelName is Vidu, for text-to-video and reference image-to-video, the optional values are 16:9, 9:16, 4:3, 3:4, and 1:1. Only version q2 supports 4:3 and 3:4.</li><li>When ModelName is GV, the optional values are 16:9 and 9:16, with a default value of 16:9.</li><li>When ModelName is OS, for text-to-video, the optional values are 16:9 and 9:16, with a default value of 16:9.</li><li>When ModelName is Hailuo, this parameter is not currently supported.</li><li>When ModelName is PixVerse, the optional values are 16:9, 4:3, 1:1, 3:4, 9:16, 2:3, 3:2, and 21:9.</li>
                     * 
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置<p>Specify the aspect ratio of the generated video.</p><li>When ModelName is Kling, for text-to-video, the optional values are 16:9, 9:16, and 1:1, with a default value of 16:9.</li><li>When ModelName is Vidu, for text-to-video and reference image-to-video, the optional values are 16:9, 9:16, 4:3, 3:4, and 1:1. Only version q2 supports 4:3 and 3:4.</li><li>When ModelName is GV, the optional values are 16:9 and 9:16, with a default value of 16:9.</li><li>When ModelName is OS, for text-to-video, the optional values are 16:9 and 9:16, with a default value of 16:9.</li><li>When ModelName is Hailuo, this parameter is not currently supported.</li><li>When ModelName is PixVerse, the optional values are 16:9, 4:3, 1:1, 3:4, 9:16, 2:3, 3:2, and 21:9.</li>
                     * @param _aspectRatio <p>Specify the aspect ratio of the generated video.</p><li>When ModelName is Kling, for text-to-video, the optional values are 16:9, 9:16, and 1:1, with a default value of 16:9.</li><li>When ModelName is Vidu, for text-to-video and reference image-to-video, the optional values are 16:9, 9:16, 4:3, 3:4, and 1:1. Only version q2 supports 4:3 and 3:4.</li><li>When ModelName is GV, the optional values are 16:9 and 9:16, with a default value of 16:9.</li><li>When ModelName is OS, for text-to-video, the optional values are 16:9 and 9:16, with a default value of 16:9.</li><li>When ModelName is Hailuo, this parameter is not currently supported.</li><li>When ModelName is PixVerse, the optional values are 16:9, 4:3, 1:1, 3:4, 9:16, 2:3, 3:2, and 21:9.</li>
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
                     * 获取<p>Whether to generate audio. Supported models include GV, OS, Vidu, Jimeng, and Kling.</p><p>Enumeration value:</p><ul><li>Enabled: Enable</li><li>Disabled: Disable</li></ul><p>Default value: Disabled</p>
                     * @return AudioGeneration <p>Whether to generate audio. Supported models include GV, OS, Vidu, Jimeng, and Kling.</p><p>Enumeration value:</p><ul><li>Enabled: Enable</li><li>Disabled: Disable</li></ul><p>Default value: Disabled</p>
                     * 
                     */
                    std::string GetAudioGeneration() const;

                    /**
                     * 设置<p>Whether to generate audio. Supported models include GV, OS, Vidu, Jimeng, and Kling.</p><p>Enumeration value:</p><ul><li>Enabled: Enable</li><li>Disabled: Disable</li></ul><p>Default value: Disabled</p>
                     * @param _audioGeneration <p>Whether to generate audio. Supported models include GV, OS, Vidu, Jimeng, and Kling.</p><p>Enumeration value:</p><ul><li>Enabled: Enable</li><li>Disabled: Disable</li></ul><p>Default value: Disabled</p>
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
                     * 获取<p>Whether to allow figure or human face generation. Valid values: <li>AllowAdult: Allow adult generation;</li> <li>Disallowed: Forbid including figure or human face in the image;</li></p>
                     * @return PersonGeneration <p>Whether to allow figure or human face generation. Valid values: <li>AllowAdult: Allow adult generation;</li> <li>Disallowed: Forbid including figure or human face in the image;</li></p>
                     * 
                     */
                    std::string GetPersonGeneration() const;

                    /**
                     * 设置<p>Whether to allow figure or human face generation. Valid values: <li>AllowAdult: Allow adult generation;</li> <li>Disallowed: Forbid including figure or human face in the image;</li></p>
                     * @param _personGeneration <p>Whether to allow figure or human face generation. Valid values: <li>AllowAdult: Allow adult generation;</li> <li>Disallowed: Forbid including figure or human face in the image;</li></p>
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
                     * 获取<p>Whether to enable compliance check for input content. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li></p>
                     * @return InputComplianceCheck <p>Whether to enable compliance check for input content. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li></p>
                     * 
                     */
                    std::string GetInputComplianceCheck() const;

                    /**
                     * 设置<p>Whether to enable compliance check for input content. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li></p>
                     * @param _inputComplianceCheck <p>Whether to enable compliance check for input content. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li></p>
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
                     * 获取<p>Whether to enable compliance check for output content. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li></p>
                     * @return OutputComplianceCheck <p>Whether to enable compliance check for output content. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li></p>
                     * 
                     */
                    std::string GetOutputComplianceCheck() const;

                    /**
                     * 设置<p>Whether to enable compliance check for output content. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li></p>
                     * @param _outputComplianceCheck <p>Whether to enable compliance check for output content. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li></p>
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
                     * 获取<p>Whether to enable video enhancement. Valid values: <li>Enabled: Turn on;</li> <li>Disabled: Turn off;</li><br>Description:</p><ol><li>For selected resolution exceeding the resolution the model can generate, enhancement is enabled by default.</li><li>For resolutions the model can directly output, you can also proactively select the model to directly output low-resolution and use enhancement to obtain the specified resolution.</li></ol>
                     * @return EnhanceSwitch <p>Whether to enable video enhancement. Valid values: <li>Enabled: Turn on;</li> <li>Disabled: Turn off;</li><br>Description:</p><ol><li>For selected resolution exceeding the resolution the model can generate, enhancement is enabled by default.</li><li>For resolutions the model can directly output, you can also proactively select the model to directly output low-resolution and use enhancement to obtain the specified resolution.</li></ol>
                     * 
                     */
                    std::string GetEnhanceSwitch() const;

                    /**
                     * 设置<p>Whether to enable video enhancement. Valid values: <li>Enabled: Turn on;</li> <li>Disabled: Turn off;</li><br>Description:</p><ol><li>For selected resolution exceeding the resolution the model can generate, enhancement is enabled by default.</li><li>For resolutions the model can directly output, you can also proactively select the model to directly output low-resolution and use enhancement to obtain the specified resolution.</li></ol>
                     * @param _enhanceSwitch <p>Whether to enable video enhancement. Valid values: <li>Enabled: Turn on;</li> <li>Disabled: Turn off;</li><br>Description:</p><ol><li>For selected resolution exceeding the resolution the model can generate, enhancement is enabled by default.</li><li>For resolutions the model can directly output, you can also proactively select the model to directly output low-resolution and use enhancement to obtain the specified resolution.</li></ol>
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
                     * 获取<p>Whether peak shaving is enabled. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li></p>
                     * @return OffPeak <p>Whether peak shaving is enabled. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li></p>
                     * 
                     */
                    std::string GetOffPeak() const;

                    /**
                     * 设置<p>Whether peak shaving is enabled. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li></p>
                     * @param _offPeak <p>Whether peak shaving is enabled. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li></p>
                     * 
                     */
                    void SetOffPeak(const std::string& _offPeak);

                    /**
                     * 判断参数 OffPeak 是否已赋值
                     * @return OffPeak 是否已赋值
                     * 
                     */
                    bool OffPeakHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable vidu intelligent frame interpolation. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li></p>
                     * @return FrameInterpolate <p>Whether to enable vidu intelligent frame interpolation. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li></p>
                     * 
                     */
                    std::string GetFrameInterpolate() const;

                    /**
                     * 设置<p>Whether to enable vidu intelligent frame interpolation. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li></p>
                     * @param _frameInterpolate <p>Whether to enable vidu intelligent frame interpolation. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li></p>
                     * 
                     */
                    void SetFrameInterpolate(const std::string& _frameInterpolate);

                    /**
                     * 判断参数 FrameInterpolate 是否已赋值
                     * @return FrameInterpolate 是否已赋值
                     * 
                     */
                    bool FrameInterpolateHasBeenSet() const;

                    /**
                     * 获取<p>Indicates whether to enable the icon watermark. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li><br>Currently supported models include Vidu. Other models are not supported.</p>
                     * @return LogoAdd <p>Indicates whether to enable the icon watermark. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li><br>Currently supported models include Vidu. Other models are not supported.</p>
                     * 
                     */
                    std::string GetLogoAdd() const;

                    /**
                     * 设置<p>Indicates whether to enable the icon watermark. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li><br>Currently supported models include Vidu. Other models are not supported.</p>
                     * @param _logoAdd <p>Indicates whether to enable the icon watermark. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li><br>Currently supported models include Vidu. Other models are not supported.</p>
                     * 
                     */
                    void SetLogoAdd(const std::string& _logoAdd);

                    /**
                     * 判断参数 LogoAdd 是否已赋值
                     * @return LogoAdd 是否已赋值
                     * 
                     */
                    bool LogoAddHasBeenSet() const;

                    /**
                     * 获取<p>Whether to add background music to the generated video.</p><p>Enumeration value:</p><ul><li>Enabled: The system will automatically select suitable music from the preset BGM library and add it.</li><li>Disabled: Do not add BGM.</li></ul><p>Default value: Disabled</p>
                     * @return EnableBGM <p>Whether to add background music to the generated video.</p><p>Enumeration value:</p><ul><li>Enabled: The system will automatically select suitable music from the preset BGM library and add it.</li><li>Disabled: Do not add BGM.</li></ul><p>Default value: Disabled</p>
                     * 
                     */
                    std::string GetEnableBGM() const;

                    /**
                     * 设置<p>Whether to add background music to the generated video.</p><p>Enumeration value:</p><ul><li>Enabled: The system will automatically select suitable music from the preset BGM library and add it.</li><li>Disabled: Do not add BGM.</li></ul><p>Default value: Disabled</p>
                     * @param _enableBGM <p>Whether to add background music to the generated video.</p><p>Enumeration value:</p><ul><li>Enabled: The system will automatically select suitable music from the preset BGM library and add it.</li><li>Disabled: Do not add BGM.</li></ul><p>Default value: Disabled</p>
                     * 
                     */
                    void SetEnableBGM(const std::string& _enableBGM);

                    /**
                     * 判断参数 EnableBGM 是否已赋值
                     * @return EnableBGM 是否已赋值
                     * 
                     */
                    bool EnableBGMHasBeenSet() const;

                private:

                    /**
                     * <p>Storage mode</p><p>Enumeration value:</p><ul><li>Temporary: Temporary storage. The generated video file will not be stored in VOD. You can obtain the temporary access URL from event notification. The valid period is 7 days.</li><li>Permanent: Permanent storage. The generated video file will be stored in VOD. You can obtain the FileId from event notification.</li></ul><p>Default value: Temporary</p>
                     */
                    std::string m_storageMode;
                    bool m_storageModeHasBeenSet;

                    /**
                     * <p>Output media file name, up to 64 characters. Default filename is specified by the system.</p>
                     */
                    std::string m_mediaName;
                    bool m_mediaNameHasBeenSet;

                    /**
                     * <p>Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the <a href="/document/product/266/7812">create category</a> API.</p><li>Default value: 0, indicate other categories.</li>
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * <p>The expiry date of the output file. The file will be deleted longer than this time. It defaults to no expiration, format according to ISO 8601 standard. For details, see <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>Duration of the generated video, unit: seconds.</p><li>When ModelName is Kling, optional values are 3-15, default is 5.</li><li>When ModelName is Hailuo, optional values are 6 and 10, default is 6.</li><li>When ModelName is Vidu, specify 1-10.</li><li>When ModelName is GV, optional value is 8, default is 8.</li><li>When ModelName is OS, optional values are 4, 8, and 12, default is 8.</li><li>When ModelName is PixVerse, specify 1-15, default is 5.</li>
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>Resolution of the generated video.</p><li>When ModelName is Kling, available values are 720P and 1080P, default is 720P;</li><li>When ModelName is Hailuo, available values are 768P and 1080P, default is 768P;</li><li>When ModelName is Vidu, available values are 720P and 1080P, default is 720P;</li><li>When ModelName is GV, available values are 720P and 1080P, default is 720P;</li><li>When ModelName is OS, available value is 720P;</li><li>When ModelName is PixVerse, available values are 540p, 720p, 1080p, 2k, and 4k, default is 720p;</li>
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * <p>Specify the aspect ratio of the generated video.</p><li>When ModelName is Kling, for text-to-video, the optional values are 16:9, 9:16, and 1:1, with a default value of 16:9.</li><li>When ModelName is Vidu, for text-to-video and reference image-to-video, the optional values are 16:9, 9:16, 4:3, 3:4, and 1:1. Only version q2 supports 4:3 and 3:4.</li><li>When ModelName is GV, the optional values are 16:9 and 9:16, with a default value of 16:9.</li><li>When ModelName is OS, for text-to-video, the optional values are 16:9 and 9:16, with a default value of 16:9.</li><li>When ModelName is Hailuo, this parameter is not currently supported.</li><li>When ModelName is PixVerse, the optional values are 16:9, 4:3, 1:1, 3:4, 9:16, 2:3, 3:2, and 21:9.</li>
                     */
                    std::string m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

                    /**
                     * <p>Whether to generate audio. Supported models include GV, OS, Vidu, Jimeng, and Kling.</p><p>Enumeration value:</p><ul><li>Enabled: Enable</li><li>Disabled: Disable</li></ul><p>Default value: Disabled</p>
                     */
                    std::string m_audioGeneration;
                    bool m_audioGenerationHasBeenSet;

                    /**
                     * <p>Whether to allow figure or human face generation. Valid values: <li>AllowAdult: Allow adult generation;</li> <li>Disallowed: Forbid including figure or human face in the image;</li></p>
                     */
                    std::string m_personGeneration;
                    bool m_personGenerationHasBeenSet;

                    /**
                     * <p>Whether to enable compliance check for input content. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li></p>
                     */
                    std::string m_inputComplianceCheck;
                    bool m_inputComplianceCheckHasBeenSet;

                    /**
                     * <p>Whether to enable compliance check for output content. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li></p>
                     */
                    std::string m_outputComplianceCheck;
                    bool m_outputComplianceCheckHasBeenSet;

                    /**
                     * <p>Whether to enable video enhancement. Valid values: <li>Enabled: Turn on;</li> <li>Disabled: Turn off;</li><br>Description:</p><ol><li>For selected resolution exceeding the resolution the model can generate, enhancement is enabled by default.</li><li>For resolutions the model can directly output, you can also proactively select the model to directly output low-resolution and use enhancement to obtain the specified resolution.</li></ol>
                     */
                    std::string m_enhanceSwitch;
                    bool m_enhanceSwitchHasBeenSet;

                    /**
                     * <p>Whether peak shaving is enabled. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li></p>
                     */
                    std::string m_offPeak;
                    bool m_offPeakHasBeenSet;

                    /**
                     * <p>Whether to enable vidu intelligent frame interpolation. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li></p>
                     */
                    std::string m_frameInterpolate;
                    bool m_frameInterpolateHasBeenSet;

                    /**
                     * <p>Indicates whether to enable the icon watermark. Valid values: <li>Enabled: Enable;</li> <li>Disabled: Disable;</li><br>Currently supported models include Vidu. Other models are not supported.</p>
                     */
                    std::string m_logoAdd;
                    bool m_logoAddHasBeenSet;

                    /**
                     * <p>Whether to add background music to the generated video.</p><p>Enumeration value:</p><ul><li>Enabled: The system will automatically select suitable music from the preset BGM library and add it.</li><li>Disabled: Do not add BGM.</li></ul><p>Default value: Disabled</p>
                     */
                    std::string m_enableBGM;
                    bool m_enableBGMHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOOUTPUTCONFIG_H_
