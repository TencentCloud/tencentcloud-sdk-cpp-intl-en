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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCIMAGEOUTPUTCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCIMAGEOUTPUTCONFIG_H_

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
                * Output media file configuration for the scenario-based AIGC image generation task.
                */
                class SceneAigcImageOutputConfig : public AbstractModel
                {
                public:
                    SceneAigcImageOutputConfig();
                    ~SceneAigcImageOutputConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Storage mode. valid values: <li>Permanent: Permanent storage. the generated image file will be stored in vod, and the FileId can be obtained from the event notification.</li> <li>Temporary: Temporary storage. the generated image file will not be stored in vod, and the Temporary access URL can be obtained from the event notification.</li>
Default value: Temporary.
                     * @return StorageMode Storage mode. valid values: <li>Permanent: Permanent storage. the generated image file will be stored in vod, and the FileId can be obtained from the event notification.</li> <li>Temporary: Temporary storage. the generated image file will not be stored in vod, and the Temporary access URL can be obtained from the event notification.</li>
Default value: Temporary.
                     * 
                     */
                    std::string GetStorageMode() const;

                    /**
                     * 设置Storage mode. valid values: <li>Permanent: Permanent storage. the generated image file will be stored in vod, and the FileId can be obtained from the event notification.</li> <li>Temporary: Temporary storage. the generated image file will not be stored in vod, and the Temporary access URL can be obtained from the event notification.</li>
Default value: Temporary.
                     * @param _storageMode Storage mode. valid values: <li>Permanent: Permanent storage. the generated image file will be stored in vod, and the FileId can be obtained from the event notification.</li> <li>Temporary: Temporary storage. the generated image file will not be stored in vod, and the Temporary access URL can be obtained from the event notification.</li>
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
                     * 获取Output filename, longest 64 characters. default filename is specified by the system.
                     * @return MediaName Output filename, longest 64 characters. default filename is specified by the system.
                     * 
                     */
                    std::string GetMediaName() const;

                    /**
                     * 设置Output filename, longest 64 characters. default filename is specified by the system.
                     * @param _mediaName Output filename, longest 64 characters. default filename is specified by the system.
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
<Li>Default value: 0, indicate other categories.</li>
                     * @return ClassId Category ID, used to categorize and manage media. you can create a category and obtain the category ID via the [create category](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) api.
<Li>Default value: 0, indicate other categories.</li>
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置Category ID, used to categorize and manage media. you can create a category and obtain the category ID via the [create category](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) api.
<Li>Default value: 0, indicate other categories.</li>
                     * @param _classId Category ID, used to categorize and manage media. you can create a category and obtain the category ID via the [create category](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) api.
<Li>Default value: 0, indicate other categories.</li>
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
                     * 获取Specify the aspect ratio of the generated image. input format is W:H.

Only valid for product_image scenarios. available values are: 1:1, 3:2, 2:3, 3:4, 4:3, 4:5, 5:4, 16:9, 9:16, 21:9.
                     * @return AspectRatio Specify the aspect ratio of the generated image. input format is W:H.

Only valid for product_image scenarios. available values are: 1:1, 3:2, 2:3, 3:4, 4:3, 4:5, 5:4, 16:9, 9:16, 21:9.
                     * 
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置Specify the aspect ratio of the generated image. input format is W:H.

Only valid for product_image scenarios. available values are: 1:1, 3:2, 2:3, 3:4, 4:3, 4:5, 5:4, 16:9, 9:16, 21:9.
                     * @param _aspectRatio Specify the aspect ratio of the generated image. input format is W:H.

Only valid for product_image scenarios. available values are: 1:1, 3:2, 2:3, 3:4, 4:3, 4:5, 5:4, 16:9, 9:16, 21:9.
                     * 
                     */
                    void SetAspectRatio(const std::string& _aspectRatio);

                    /**
                     * 判断参数 AspectRatio 是否已赋值
                     * @return AspectRatio 是否已赋值
                     * 
                     */
                    bool AspectRatioHasBeenSet() const;

                private:

                    /**
                     * Storage mode. valid values: <li>Permanent: Permanent storage. the generated image file will be stored in vod, and the FileId can be obtained from the event notification.</li> <li>Temporary: Temporary storage. the generated image file will not be stored in vod, and the Temporary access URL can be obtained from the event notification.</li>
Default value: Temporary.
                     */
                    std::string m_storageMode;
                    bool m_storageModeHasBeenSet;

                    /**
                     * Output filename, longest 64 characters. default filename is specified by the system.
                     */
                    std::string m_mediaName;
                    bool m_mediaNameHasBeenSet;

                    /**
                     * Category ID, used to categorize and manage media. you can create a category and obtain the category ID via the [create category](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) api.
<Li>Default value: 0, indicate other categories.</li>
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * The expiry date of the output file. files will be deleted longer than this time. default is never expire. format according to ISO 8601 standard. see [ISO date format description](https://www.tencentcloud.comom/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Specify the aspect ratio of the generated image. input format is W:H.

Only valid for product_image scenarios. available values are: 1:1, 3:2, 2:3, 3:4, 4:3, 4:5, 5:4, 16:9, 9:16, 21:9.
                     */
                    std::string m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCIMAGEOUTPUTCONFIG_H_
