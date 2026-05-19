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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCIMAGEOUTPUTCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCIMAGEOUTPUTCONFIG_H_

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
                * Output media file configuration for the AIGC image generation task.
                */
                class AigcImageOutputConfig : public AbstractModel
                {
                public:
                    AigcImageOutputConfig();
                    ~AigcImageOutputConfig() = default;
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
                     * 获取<p>Output filename, up to 64 characters. Default filename is specified by the system.</p>
                     * @return MediaName <p>Output filename, up to 64 characters. Default filename is specified by the system.</p>
                     * 
                     */
                    std::string GetMediaName() const;

                    /**
                     * 设置<p>Output filename, up to 64 characters. Default filename is specified by the system.</p>
                     * @param _mediaName <p>Output filename, up to 64 characters. Default filename is specified by the system.</p>
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
                     * 获取<p>Resolution of the generated image. Available values for each model:</p><ul><li>OG: 1K, 2K, 4K, default 1K;</li><li>GG 2.5: 1K, 2K, 4K, default 1K;</li><li>GG 3.0: 1K, 2K, 4K, default 1K;</li><li>GG 3.1: 512, 1K, 2K, 4K, default 1K;</li><li>Kling 2.1: 1k, 2k, default 1k;</li><li>Kling 3.0: 1k, 2k, default 1k;</li><li>Kling 3.0-Omni: 1k, 2k, 4k, default 1k;</li><li>Kling O1: 1k, 2k, 4k, default 1k;</li><li>SI 4.0: 1K, 2K, 4K, default 1K;</li><li>SI 4.5: 2K, 4K, default 2K;</li><li>SI 5.0-lite: 2K, 3K, default 2K;</li><li>Vidu q2: 1080p, 2K, 4K, default 1080p;</li><li>Hunyuan 3.0: This field is not currently supported. Set resolution via the <code>ExtInfo</code> field;</li><li>Qwen 0925: This field is not currently supported. Set resolution via the <code>ExtInfo</code> field;</li></ul>
                     * @return Resolution <p>Resolution of the generated image. Available values for each model:</p><ul><li>OG: 1K, 2K, 4K, default 1K;</li><li>GG 2.5: 1K, 2K, 4K, default 1K;</li><li>GG 3.0: 1K, 2K, 4K, default 1K;</li><li>GG 3.1: 512, 1K, 2K, 4K, default 1K;</li><li>Kling 2.1: 1k, 2k, default 1k;</li><li>Kling 3.0: 1k, 2k, default 1k;</li><li>Kling 3.0-Omni: 1k, 2k, 4k, default 1k;</li><li>Kling O1: 1k, 2k, 4k, default 1k;</li><li>SI 4.0: 1K, 2K, 4K, default 1K;</li><li>SI 4.5: 2K, 4K, default 2K;</li><li>SI 5.0-lite: 2K, 3K, default 2K;</li><li>Vidu q2: 1080p, 2K, 4K, default 1080p;</li><li>Hunyuan 3.0: This field is not currently supported. Set resolution via the <code>ExtInfo</code> field;</li><li>Qwen 0925: This field is not currently supported. Set resolution via the <code>ExtInfo</code> field;</li></ul>
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置<p>Resolution of the generated image. Available values for each model:</p><ul><li>OG: 1K, 2K, 4K, default 1K;</li><li>GG 2.5: 1K, 2K, 4K, default 1K;</li><li>GG 3.0: 1K, 2K, 4K, default 1K;</li><li>GG 3.1: 512, 1K, 2K, 4K, default 1K;</li><li>Kling 2.1: 1k, 2k, default 1k;</li><li>Kling 3.0: 1k, 2k, default 1k;</li><li>Kling 3.0-Omni: 1k, 2k, 4k, default 1k;</li><li>Kling O1: 1k, 2k, 4k, default 1k;</li><li>SI 4.0: 1K, 2K, 4K, default 1K;</li><li>SI 4.5: 2K, 4K, default 2K;</li><li>SI 5.0-lite: 2K, 3K, default 2K;</li><li>Vidu q2: 1080p, 2K, 4K, default 1080p;</li><li>Hunyuan 3.0: This field is not currently supported. Set resolution via the <code>ExtInfo</code> field;</li><li>Qwen 0925: This field is not currently supported. Set resolution via the <code>ExtInfo</code> field;</li></ul>
                     * @param _resolution <p>Resolution of the generated image. Available values for each model:</p><ul><li>OG: 1K, 2K, 4K, default 1K;</li><li>GG 2.5: 1K, 2K, 4K, default 1K;</li><li>GG 3.0: 1K, 2K, 4K, default 1K;</li><li>GG 3.1: 512, 1K, 2K, 4K, default 1K;</li><li>Kling 2.1: 1k, 2k, default 1k;</li><li>Kling 3.0: 1k, 2k, default 1k;</li><li>Kling 3.0-Omni: 1k, 2k, 4k, default 1k;</li><li>Kling O1: 1k, 2k, 4k, default 1k;</li><li>SI 4.0: 1K, 2K, 4K, default 1K;</li><li>SI 4.5: 2K, 4K, default 2K;</li><li>SI 5.0-lite: 2K, 3K, default 2K;</li><li>Vidu q2: 1080p, 2K, 4K, default 1080p;</li><li>Hunyuan 3.0: This field is not currently supported. Set resolution via the <code>ExtInfo</code> field;</li><li>Qwen 0925: This field is not currently supported. Set resolution via the <code>ExtInfo</code> field;</li></ul>
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
                     * 获取<p>Specify the aspect ratio of the generated image.</p><ul><li>OG: 1:1, 3:2, 2:3, 3:4, 4:3, 16:9, 9:16, 21:9, 9:21;</li><li>GG 2.5: 1:1, 2:3, 3:2, 3:4, 4:3, 4:5, 5:4, 9:16, 16:9, 21:9;</li><li>GG 3.0: 1:1, 2:3, 3:2, 3:4, 4:3, 4:5, 5:4, 9:16, 16:9, 21:9;</li><li>GG 3.1: 1:1, 1:4, 1:8, 2:3, 3:2, 3:4, 4:1, 4:3, 4:5, 5:4, 8:1, 9:16, 16:9, 21:9;</li><li>Kling 2.1: 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9;</li><li>Kling 3.0: 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9;</li><li>Kling 3.0-Omni: 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9, auto;</li><li>Kling O1: 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9, auto;</li><li>Vidu q2: 16:9, 9:16, 1:1, 3:4, 4:3, 21:9, 2:3, 3:2;</li><li>SI 4.0: <strong>unsupported</strong>. Use prompt to specify 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9;</li><li>SI 4.5: <strong>unsupported</strong>. Use prompt to specify 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9;</li><li>SI 5.0-lite: <strong>unsupported</strong>. Use prompt to specify 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9;</li><li>Hunyuan 3.0: unsupported;</li><li>Qwen 2.0: unsupported;</li><li>Qwen 0925: unsupported;</li></ul>
                     * @return AspectRatio <p>Specify the aspect ratio of the generated image.</p><ul><li>OG: 1:1, 3:2, 2:3, 3:4, 4:3, 16:9, 9:16, 21:9, 9:21;</li><li>GG 2.5: 1:1, 2:3, 3:2, 3:4, 4:3, 4:5, 5:4, 9:16, 16:9, 21:9;</li><li>GG 3.0: 1:1, 2:3, 3:2, 3:4, 4:3, 4:5, 5:4, 9:16, 16:9, 21:9;</li><li>GG 3.1: 1:1, 1:4, 1:8, 2:3, 3:2, 3:4, 4:1, 4:3, 4:5, 5:4, 8:1, 9:16, 16:9, 21:9;</li><li>Kling 2.1: 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9;</li><li>Kling 3.0: 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9;</li><li>Kling 3.0-Omni: 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9, auto;</li><li>Kling O1: 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9, auto;</li><li>Vidu q2: 16:9, 9:16, 1:1, 3:4, 4:3, 21:9, 2:3, 3:2;</li><li>SI 4.0: <strong>unsupported</strong>. Use prompt to specify 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9;</li><li>SI 4.5: <strong>unsupported</strong>. Use prompt to specify 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9;</li><li>SI 5.0-lite: <strong>unsupported</strong>. Use prompt to specify 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9;</li><li>Hunyuan 3.0: unsupported;</li><li>Qwen 2.0: unsupported;</li><li>Qwen 0925: unsupported;</li></ul>
                     * 
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置<p>Specify the aspect ratio of the generated image.</p><ul><li>OG: 1:1, 3:2, 2:3, 3:4, 4:3, 16:9, 9:16, 21:9, 9:21;</li><li>GG 2.5: 1:1, 2:3, 3:2, 3:4, 4:3, 4:5, 5:4, 9:16, 16:9, 21:9;</li><li>GG 3.0: 1:1, 2:3, 3:2, 3:4, 4:3, 4:5, 5:4, 9:16, 16:9, 21:9;</li><li>GG 3.1: 1:1, 1:4, 1:8, 2:3, 3:2, 3:4, 4:1, 4:3, 4:5, 5:4, 8:1, 9:16, 16:9, 21:9;</li><li>Kling 2.1: 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9;</li><li>Kling 3.0: 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9;</li><li>Kling 3.0-Omni: 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9, auto;</li><li>Kling O1: 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9, auto;</li><li>Vidu q2: 16:9, 9:16, 1:1, 3:4, 4:3, 21:9, 2:3, 3:2;</li><li>SI 4.0: <strong>unsupported</strong>. Use prompt to specify 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9;</li><li>SI 4.5: <strong>unsupported</strong>. Use prompt to specify 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9;</li><li>SI 5.0-lite: <strong>unsupported</strong>. Use prompt to specify 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9;</li><li>Hunyuan 3.0: unsupported;</li><li>Qwen 2.0: unsupported;</li><li>Qwen 0925: unsupported;</li></ul>
                     * @param _aspectRatio <p>Specify the aspect ratio of the generated image.</p><ul><li>OG: 1:1, 3:2, 2:3, 3:4, 4:3, 16:9, 9:16, 21:9, 9:21;</li><li>GG 2.5: 1:1, 2:3, 3:2, 3:4, 4:3, 4:5, 5:4, 9:16, 16:9, 21:9;</li><li>GG 3.0: 1:1, 2:3, 3:2, 3:4, 4:3, 4:5, 5:4, 9:16, 16:9, 21:9;</li><li>GG 3.1: 1:1, 1:4, 1:8, 2:3, 3:2, 3:4, 4:1, 4:3, 4:5, 5:4, 8:1, 9:16, 16:9, 21:9;</li><li>Kling 2.1: 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9;</li><li>Kling 3.0: 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9;</li><li>Kling 3.0-Omni: 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9, auto;</li><li>Kling O1: 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9, auto;</li><li>Vidu q2: 16:9, 9:16, 1:1, 3:4, 4:3, 21:9, 2:3, 3:2;</li><li>SI 4.0: <strong>unsupported</strong>. Use prompt to specify 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9;</li><li>SI 4.5: <strong>unsupported</strong>. Use prompt to specify 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9;</li><li>SI 5.0-lite: <strong>unsupported</strong>. Use prompt to specify 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9;</li><li>Hunyuan 3.0: unsupported;</li><li>Qwen 2.0: unsupported;</li><li>Qwen 0925: unsupported;</li></ul>
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
                     * 获取<p>Number of images generated. Available values for each model:</p><ul><li>Kling: value range 1-9;</li><li>OG: value range 1-8;</li></ul><p><strong>Other models are disabled.</strong></p>
                     * @return OutputImageCount <p>Number of images generated. Available values for each model:</p><ul><li>Kling: value range 1-9;</li><li>OG: value range 1-8;</li></ul><p><strong>Other models are disabled.</strong></p>
                     * 
                     */
                    uint64_t GetOutputImageCount() const;

                    /**
                     * 设置<p>Number of images generated. Available values for each model:</p><ul><li>Kling: value range 1-9;</li><li>OG: value range 1-8;</li></ul><p><strong>Other models are disabled.</strong></p>
                     * @param _outputImageCount <p>Number of images generated. Available values for each model:</p><ul><li>Kling: value range 1-9;</li><li>OG: value range 1-8;</li></ul><p><strong>Other models are disabled.</strong></p>
                     * 
                     */
                    void SetOutputImageCount(const uint64_t& _outputImageCount);

                    /**
                     * 判断参数 OutputImageCount 是否已赋值
                     * @return OutputImageCount 是否已赋值
                     * 
                     */
                    bool OutputImageCountHasBeenSet() const;

                    /**
                     * 获取<p>Specify the image format of the model output. If not specified, it follows the default value of the model. Available values:</p><ul><li>jpeg</li><li>png</li></ul>
                     * @return OutputFormat <p>Specify the image format of the model output. If not specified, it follows the default value of the model. Available values:</p><ul><li>jpeg</li><li>png</li></ul>
                     * 
                     */
                    std::string GetOutputFormat() const;

                    /**
                     * 设置<p>Specify the image format of the model output. If not specified, it follows the default value of the model. Available values:</p><ul><li>jpeg</li><li>png</li></ul>
                     * @param _outputFormat <p>Specify the image format of the model output. If not specified, it follows the default value of the model. Available values:</p><ul><li>jpeg</li><li>png</li></ul>
                     * 
                     */
                    void SetOutputFormat(const std::string& _outputFormat);

                    /**
                     * 判断参数 OutputFormat 是否已赋值
                     * @return OutputFormat 是否已赋值
                     * 
                     */
                    bool OutputFormatHasBeenSet() const;

                    /**
                     * 获取<p>Indicates whether to enable the icon watermark. Default is Disabled. Valid values:</p><ul><li>Enabled: Enable;</li><li>Disabled: Disable;</li></ul>
                     * @return LogoAdd <p>Indicates whether to enable the icon watermark. Default is Disabled. Valid values:</p><ul><li>Enabled: Enable;</li><li>Disabled: Disable;</li></ul>
                     * 
                     */
                    std::string GetLogoAdd() const;

                    /**
                     * 设置<p>Indicates whether to enable the icon watermark. Default is Disabled. Valid values:</p><ul><li>Enabled: Enable;</li><li>Disabled: Disable;</li></ul>
                     * @param _logoAdd <p>Indicates whether to enable the icon watermark. Default is Disabled. Valid values:</p><ul><li>Enabled: Enable;</li><li>Disabled: Disable;</li></ul>
                     * 
                     */
                    void SetLogoAdd(const std::string& _logoAdd);

                    /**
                     * 判断参数 LogoAdd 是否已赋值
                     * @return LogoAdd 是否已赋值
                     * 
                     */
                    bool LogoAddHasBeenSet() const;

                private:

                    /**
                     * <p>Storage mode</p><p>Enumeration value:</p><ul><li>Temporary: Temporary storage. The generated video file will not be stored in VOD. You can obtain the temporary access URL from event notification. The valid period is 7 days.</li><li>Permanent: Permanent storage. The generated video file will be stored in VOD. You can obtain the FileId from event notification.</li></ul><p>Default value: Temporary</p>
                     */
                    std::string m_storageMode;
                    bool m_storageModeHasBeenSet;

                    /**
                     * <p>Output filename, up to 64 characters. Default filename is specified by the system.</p>
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
                     * <p>Resolution of the generated image. Available values for each model:</p><ul><li>OG: 1K, 2K, 4K, default 1K;</li><li>GG 2.5: 1K, 2K, 4K, default 1K;</li><li>GG 3.0: 1K, 2K, 4K, default 1K;</li><li>GG 3.1: 512, 1K, 2K, 4K, default 1K;</li><li>Kling 2.1: 1k, 2k, default 1k;</li><li>Kling 3.0: 1k, 2k, default 1k;</li><li>Kling 3.0-Omni: 1k, 2k, 4k, default 1k;</li><li>Kling O1: 1k, 2k, 4k, default 1k;</li><li>SI 4.0: 1K, 2K, 4K, default 1K;</li><li>SI 4.5: 2K, 4K, default 2K;</li><li>SI 5.0-lite: 2K, 3K, default 2K;</li><li>Vidu q2: 1080p, 2K, 4K, default 1080p;</li><li>Hunyuan 3.0: This field is not currently supported. Set resolution via the <code>ExtInfo</code> field;</li><li>Qwen 0925: This field is not currently supported. Set resolution via the <code>ExtInfo</code> field;</li></ul>
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * <p>Specify the aspect ratio of the generated image.</p><ul><li>OG: 1:1, 3:2, 2:3, 3:4, 4:3, 16:9, 9:16, 21:9, 9:21;</li><li>GG 2.5: 1:1, 2:3, 3:2, 3:4, 4:3, 4:5, 5:4, 9:16, 16:9, 21:9;</li><li>GG 3.0: 1:1, 2:3, 3:2, 3:4, 4:3, 4:5, 5:4, 9:16, 16:9, 21:9;</li><li>GG 3.1: 1:1, 1:4, 1:8, 2:3, 3:2, 3:4, 4:1, 4:3, 4:5, 5:4, 8:1, 9:16, 16:9, 21:9;</li><li>Kling 2.1: 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9;</li><li>Kling 3.0: 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9;</li><li>Kling 3.0-Omni: 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9, auto;</li><li>Kling O1: 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9, auto;</li><li>Vidu q2: 16:9, 9:16, 1:1, 3:4, 4:3, 21:9, 2:3, 3:2;</li><li>SI 4.0: <strong>unsupported</strong>. Use prompt to specify 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9;</li><li>SI 4.5: <strong>unsupported</strong>. Use prompt to specify 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9;</li><li>SI 5.0-lite: <strong>unsupported</strong>. Use prompt to specify 16:9, 9:16, 1:1, 4:3, 3:4, 3:2, 2:3, 21:9;</li><li>Hunyuan 3.0: unsupported;</li><li>Qwen 2.0: unsupported;</li><li>Qwen 0925: unsupported;</li></ul>
                     */
                    std::string m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

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
                     * <p>Number of images generated. Available values for each model:</p><ul><li>Kling: value range 1-9;</li><li>OG: value range 1-8;</li></ul><p><strong>Other models are disabled.</strong></p>
                     */
                    uint64_t m_outputImageCount;
                    bool m_outputImageCountHasBeenSet;

                    /**
                     * <p>Specify the image format of the model output. If not specified, it follows the default value of the model. Available values:</p><ul><li>jpeg</li><li>png</li></ul>
                     */
                    std::string m_outputFormat;
                    bool m_outputFormatHasBeenSet;

                    /**
                     * <p>Indicates whether to enable the icon watermark. Default is Disabled. Valid values:</p><ul><li>Enabled: Enable;</li><li>Disabled: Disable;</li></ul>
                     */
                    std::string m_logoAdd;
                    bool m_logoAddHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCIMAGEOUTPUTCONFIG_H_
