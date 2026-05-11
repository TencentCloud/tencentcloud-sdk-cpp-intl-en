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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCVIDEOOUTPUTCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCVIDEOOUTPUTCONFIG_H_

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
                * Scenario-based output media file configuration for the AIGC video generation task.
                */
                class SceneAigcVideoOutputConfig : public AbstractModel
                {
                public:
                    SceneAigcVideoOutputConfig();
                    ~SceneAigcVideoOutputConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Storage mode. Valid values: <li>Permanent: Permanent storage. The generated image file will be stored in VOD, and the FileId can be obtained in the event notification.</li> <li>Temporary: Temporary storage. The generated image file will not be stored in VOD, and the URL for temporary access can be obtained in the event notification.</li>
Default value: Temporary
                     * @return StorageMode Storage mode. Valid values: <li>Permanent: Permanent storage. The generated image file will be stored in VOD, and the FileId can be obtained in the event notification.</li> <li>Temporary: Temporary storage. The generated image file will not be stored in VOD, and the URL for temporary access can be obtained in the event notification.</li>
Default value: Temporary
                     * 
                     */
                    std::string GetStorageMode() const;

                    /**
                     * 设置Storage mode. Valid values: <li>Permanent: Permanent storage. The generated image file will be stored in VOD, and the FileId can be obtained in the event notification.</li> <li>Temporary: Temporary storage. The generated image file will not be stored in VOD, and the URL for temporary access can be obtained in the event notification.</li>
Default value: Temporary
                     * @param _storageMode Storage mode. Valid values: <li>Permanent: Permanent storage. The generated image file will be stored in VOD, and the FileId can be obtained in the event notification.</li> <li>Temporary: Temporary storage. The generated image file will not be stored in VOD, and the URL for temporary access can be obtained in the event notification.</li>
Default value: Temporary
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
                     * 获取Output filename, up to 64 characters. Default filename is specified generation by system.
                     * @return MediaName Output filename, up to 64 characters. Default filename is specified generation by system.
                     * 
                     */
                    std::string GetMediaName() const;

                    /**
                     * 设置Output filename, up to 64 characters. Default filename is specified generation by system.
                     * @param _mediaName Output filename, up to 64 characters. Default filename is specified generation by system.
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
                     * 获取Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the [create category](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) API.
<li>Default value: 0, indicating other categories.</li>
                     * @return ClassId Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the [create category](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) API.
<li>Default value: 0, indicating other categories.</li>
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the [create category](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) API.
<li>Default value: 0, indicating other categories.</li>
                     * @param _classId Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the [create category](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) API.
<li>Default value: 0, indicating other categories.</li>
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
                     * 获取Expiry date of the output file. Files will be deleted longer than this time. Default is no expiration. Format according to ISO 8601 standard. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return ExpireTime Expiry date of the output file. Files will be deleted longer than this time. Default is no expiration. Format according to ISO 8601 standard. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiry date of the output file. Files will be deleted longer than this time. Default is no expiration. Format according to ISO 8601 standard. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _expireTime Expiry date of the output file. Files will be deleted longer than this time. Default is no expiration. Format according to ISO 8601 standard. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
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
                     * 获取Specify the aspect ratio of the generated video. Input format is W:H. Valid only for product image scenarios. Options: 16:9, 9:16.
                     * @return AspectRatio Specify the aspect ratio of the generated video. Input format is W:H. Valid only for product image scenarios. Options: 16:9, 9:16.
                     * 
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置Specify the aspect ratio of the generated video. Input format is W:H. Valid only for product image scenarios. Options: 16:9, 9:16.
                     * @param _aspectRatio Specify the aspect ratio of the generated video. Input format is W:H. Valid only for product image scenarios. Options: 16:9, 9:16.
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
                     * 获取Generate video duration. Available values: 4, 6, 8 seconds.
                     * @return Duration Generate video duration. Available values: 4, 6, 8 seconds.
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置Generate video duration. Available values: 4, 6, 8 seconds.
                     * @param _duration Generate video duration. Available values: 4, 6, 8 seconds.
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                private:

                    /**
                     * Storage mode. Valid values: <li>Permanent: Permanent storage. The generated image file will be stored in VOD, and the FileId can be obtained in the event notification.</li> <li>Temporary: Temporary storage. The generated image file will not be stored in VOD, and the URL for temporary access can be obtained in the event notification.</li>
Default value: Temporary
                     */
                    std::string m_storageMode;
                    bool m_storageModeHasBeenSet;

                    /**
                     * Output filename, up to 64 characters. Default filename is specified generation by system.
                     */
                    std::string m_mediaName;
                    bool m_mediaNameHasBeenSet;

                    /**
                     * Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the [create category](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) API.
<li>Default value: 0, indicating other categories.</li>
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * Expiry date of the output file. Files will be deleted longer than this time. Default is no expiration. Format according to ISO 8601 standard. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Specify the aspect ratio of the generated video. Input format is W:H. Valid only for product image scenarios. Options: 16:9, 9:16.
                     */
                    std::string m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

                    /**
                     * Generate video duration. Available values: 4, 6, 8 seconds.
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCVIDEOOUTPUTCONFIG_H_
