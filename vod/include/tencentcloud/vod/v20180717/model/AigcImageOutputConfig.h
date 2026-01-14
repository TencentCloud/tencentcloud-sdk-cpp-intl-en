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
                     * 获取Storage mode. valid values: <li>Permanent: Permanent storage. the generated image file will be stored in VOD (video on demand), and the FileId can be obtained in the event notification.</li> <li>Temporary: Temporary storage. the generated image file will not be stored in vod, and the Temporary access URL can be obtained in the event notification.</li>.
Default value: Temporary.
                     * @return StorageMode Storage mode. valid values: <li>Permanent: Permanent storage. the generated image file will be stored in VOD (video on demand), and the FileId can be obtained in the event notification.</li> <li>Temporary: Temporary storage. the generated image file will not be stored in vod, and the Temporary access URL can be obtained in the event notification.</li>.
Default value: Temporary.
                     * 
                     */
                    std::string GetStorageMode() const;

                    /**
                     * 设置Storage mode. valid values: <li>Permanent: Permanent storage. the generated image file will be stored in VOD (video on demand), and the FileId can be obtained in the event notification.</li> <li>Temporary: Temporary storage. the generated image file will not be stored in vod, and the Temporary access URL can be obtained in the event notification.</li>.
Default value: Temporary.
                     * @param _storageMode Storage mode. valid values: <li>Permanent: Permanent storage. the generated image file will be stored in VOD (video on demand), and the FileId can be obtained in the event notification.</li> <li>Temporary: Temporary storage. the generated image file will not be stored in vod, and the Temporary access URL can be obtained in the event notification.</li>.
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
                     * 获取Output filename, up to 64 characters. default filename is assigned by the system.
                     * @return MediaName Output filename, up to 64 characters. default filename is assigned by the system.
                     * 
                     */
                    std::string GetMediaName() const;

                    /**
                     * 设置Output filename, up to 64 characters. default filename is assigned by the system.
                     * @param _mediaName Output filename, up to 64 characters. default filename is assigned by the system.
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
                     * 获取Category ID, used to categorize and manage media. you can create a category and obtain the category ID via the [create classification](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) api.
<Li>Default value: 0, indicating other categories.</li>.
                     * @return ClassId Category ID, used to categorize and manage media. you can create a category and obtain the category ID via the [create classification](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) api.
<Li>Default value: 0, indicating other categories.</li>.
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置Category ID, used to categorize and manage media. you can create a category and obtain the category ID via the [create classification](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) api.
<Li>Default value: 0, indicating other categories.</li>.
                     * @param _classId Category ID, used to categorize and manage media. you can create a category and obtain the category ID via the [create classification](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) api.
<Li>Default value: 0, indicating other categories.</li>.
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
                     * 获取The expiry date of the output file. files will be deleted longer than this time. default is no expiration. format according to ISO 8601 standard. for details, see [ISO date format description](https://www.tencentcloud.comom/document/product/266/11732?from_cn_redirect=1#I).
                     * @return ExpireTime The expiry date of the output file. files will be deleted longer than this time. default is no expiration. format according to ISO 8601 standard. for details, see [ISO date format description](https://www.tencentcloud.comom/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置The expiry date of the output file. files will be deleted longer than this time. default is no expiration. format according to ISO 8601 standard. for details, see [ISO date format description](https://www.tencentcloud.comom/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _expireTime The expiry date of the output file. files will be deleted longer than this time. default is no expiration. format according to ISO 8601 standard. for details, see [ISO date format description](https://www.tencentcloud.comom/document/product/266/11732?from_cn_redirect=1#I).
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
                     * 获取Image generation resolution. available values are 720P, 1080P, 2K, 4K, 1024x1024, 2048x2048, 2304x1728, 2496x1664, 2560x1440, 3024x1296, 4096x4096, 4694x3520, 4992x3328, 5404x3040, 6198x2656.
                     * @return Resolution Image generation resolution. available values are 720P, 1080P, 2K, 4K, 1024x1024, 2048x2048, 2304x1728, 2496x1664, 2560x1440, 3024x1296, 4096x4096, 4694x3520, 4992x3328, 5404x3040, 6198x2656.
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置Image generation resolution. available values are 720P, 1080P, 2K, 4K, 1024x1024, 2048x2048, 2304x1728, 2496x1664, 2560x1440, 3024x1296, 4096x4096, 4694x3520, 4992x3328, 5404x3040, 6198x2656.
                     * @param _resolution Image generation resolution. available values are 720P, 1080P, 2K, 4K, 1024x1024, 2048x2048, 2304x1728, 2496x1664, 2560x1440, 3024x1296, 4096x4096, 4694x3520, 4992x3328, 5404x3040, 6198x2656.
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
                     * 获取Specify the aspect ratio of the generated image. <li>when ModelName is GEM, the available values are 1:1, 3:2, 2:3, 3:4, 4:3, 4:5, 5:4, 9:16, 16:9, and 21:9.</li> <li>when ModelName is Qwen, it is not currently supported.</li>.
                     * @return AspectRatio Specify the aspect ratio of the generated image. <li>when ModelName is GEM, the available values are 1:1, 3:2, 2:3, 3:4, 4:3, 4:5, 5:4, 9:16, 16:9, and 21:9.</li> <li>when ModelName is Qwen, it is not currently supported.</li>.
                     * 
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置Specify the aspect ratio of the generated image. <li>when ModelName is GEM, the available values are 1:1, 3:2, 2:3, 3:4, 4:3, 4:5, 5:4, 9:16, 16:9, and 21:9.</li> <li>when ModelName is Qwen, it is not currently supported.</li>.
                     * @param _aspectRatio Specify the aspect ratio of the generated image. <li>when ModelName is GEM, the available values are 1:1, 3:2, 2:3, 3:4, 4:3, 4:5, 5:4, 9:16, 16:9, and 21:9.</li> <li>when ModelName is Qwen, it is not currently supported.</li>.
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
                     * 获取Whether to allow figure or human face generation. valid values: <li>AllowAdult: allow adult generation.</li> <li>Disallowed: forbid including figures or human faces in images.</li>.
                     * @return PersonGeneration Whether to allow figure or human face generation. valid values: <li>AllowAdult: allow adult generation.</li> <li>Disallowed: forbid including figures or human faces in images.</li>.
                     * 
                     */
                    std::string GetPersonGeneration() const;

                    /**
                     * 设置Whether to allow figure or human face generation. valid values: <li>AllowAdult: allow adult generation.</li> <li>Disallowed: forbid including figures or human faces in images.</li>.
                     * @param _personGeneration Whether to allow figure or human face generation. valid values: <li>AllowAdult: allow adult generation.</li> <li>Disallowed: forbid including figures or human faces in images.</li>.
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
                     * 获取Whether to enable compliance check for input content. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>.
                     * @return InputComplianceCheck Whether to enable compliance check for input content. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>.
                     * 
                     */
                    std::string GetInputComplianceCheck() const;

                    /**
                     * 设置Whether to enable compliance check for input content. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>.
                     * @param _inputComplianceCheck Whether to enable compliance check for input content. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>.
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
                     * 获取Whether to enable compliance check for output content. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>.
                     * @return OutputComplianceCheck Whether to enable compliance check for output content. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>.
                     * 
                     */
                    std::string GetOutputComplianceCheck() const;

                    /**
                     * 设置Whether to enable compliance check for output content. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>.
                     * @param _outputComplianceCheck Whether to enable compliance check for output content. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>.
                     * 
                     */
                    void SetOutputComplianceCheck(const std::string& _outputComplianceCheck);

                    /**
                     * 判断参数 OutputComplianceCheck 是否已赋值
                     * @return OutputComplianceCheck 是否已赋值
                     * 
                     */
                    bool OutputComplianceCheckHasBeenSet() const;

                private:

                    /**
                     * Storage mode. valid values: <li>Permanent: Permanent storage. the generated image file will be stored in VOD (video on demand), and the FileId can be obtained in the event notification.</li> <li>Temporary: Temporary storage. the generated image file will not be stored in vod, and the Temporary access URL can be obtained in the event notification.</li>.
Default value: Temporary.
                     */
                    std::string m_storageMode;
                    bool m_storageModeHasBeenSet;

                    /**
                     * Output filename, up to 64 characters. default filename is assigned by the system.
                     */
                    std::string m_mediaName;
                    bool m_mediaNameHasBeenSet;

                    /**
                     * Category ID, used to categorize and manage media. you can create a category and obtain the category ID via the [create classification](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) api.
<Li>Default value: 0, indicating other categories.</li>.
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * The expiry date of the output file. files will be deleted longer than this time. default is no expiration. format according to ISO 8601 standard. for details, see [ISO date format description](https://www.tencentcloud.comom/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Image generation resolution. available values are 720P, 1080P, 2K, 4K, 1024x1024, 2048x2048, 2304x1728, 2496x1664, 2560x1440, 3024x1296, 4096x4096, 4694x3520, 4992x3328, 5404x3040, 6198x2656.
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * Specify the aspect ratio of the generated image. <li>when ModelName is GEM, the available values are 1:1, 3:2, 2:3, 3:4, 4:3, 4:5, 5:4, 9:16, 16:9, and 21:9.</li> <li>when ModelName is Qwen, it is not currently supported.</li>.
                     */
                    std::string m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

                    /**
                     * Whether to allow figure or human face generation. valid values: <li>AllowAdult: allow adult generation.</li> <li>Disallowed: forbid including figures or human faces in images.</li>.
                     */
                    std::string m_personGeneration;
                    bool m_personGenerationHasBeenSet;

                    /**
                     * Whether to enable compliance check for input content. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>.
                     */
                    std::string m_inputComplianceCheck;
                    bool m_inputComplianceCheckHasBeenSet;

                    /**
                     * Whether to enable compliance check for output content. valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li>.
                     */
                    std::string m_outputComplianceCheck;
                    bool m_outputComplianceCheckHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCIMAGEOUTPUTCONFIG_H_
