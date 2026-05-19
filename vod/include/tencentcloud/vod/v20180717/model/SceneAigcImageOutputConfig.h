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
#include <tencentcloud/vod/v20180717/model/ImageSceneAigcEncodeConfig.h>


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
                     * 获取<p>Storage mode</p><p>Enumeration value:</p><ul><li>Temporary: Temporary storage. The generated video file will not be stored in VOD. You can obtain the temporary access URL from the event notification, with a valid period of 7 days.</li><li>Permanent: Permanent storage. The generated video file will be stored in VOD. You can obtain the FileId from the event notification.</li></ul><p>Default value: Temporary</p>
                     * @return StorageMode <p>Storage mode</p><p>Enumeration value:</p><ul><li>Temporary: Temporary storage. The generated video file will not be stored in VOD. You can obtain the temporary access URL from the event notification, with a valid period of 7 days.</li><li>Permanent: Permanent storage. The generated video file will be stored in VOD. You can obtain the FileId from the event notification.</li></ul><p>Default value: Temporary</p>
                     * 
                     */
                    std::string GetStorageMode() const;

                    /**
                     * 设置<p>Storage mode</p><p>Enumeration value:</p><ul><li>Temporary: Temporary storage. The generated video file will not be stored in VOD. You can obtain the temporary access URL from the event notification, with a valid period of 7 days.</li><li>Permanent: Permanent storage. The generated video file will be stored in VOD. You can obtain the FileId from the event notification.</li></ul><p>Default value: Temporary</p>
                     * @param _storageMode <p>Storage mode</p><p>Enumeration value:</p><ul><li>Temporary: Temporary storage. The generated video file will not be stored in VOD. You can obtain the temporary access URL from the event notification, with a valid period of 7 days.</li><li>Permanent: Permanent storage. The generated video file will be stored in VOD. You can obtain the FileId from the event notification.</li></ul><p>Default value: Temporary</p>
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
                     * 获取<p>Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the <a href="/document/product/266/7812">create category</a> API.</p><li>Default value: 0, indicating other categories.</li>
                     * @return ClassId <p>Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the <a href="/document/product/266/7812">create category</a> API.</p><li>Default value: 0, indicating other categories.</li>
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置<p>Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the <a href="/document/product/266/7812">create category</a> API.</p><li>Default value: 0, indicating other categories.</li>
                     * @param _classId <p>Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the <a href="/document/product/266/7812">create category</a> API.</p><li>Default value: 0, indicating other categories.</li>
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
                     * 获取<p>Expiry date of the output file. Files will be deleted longer than this time. Default is no expiration. Format according to ISO 8601 standard. For details, see <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</p>
                     * @return ExpireTime <p>Expiry date of the output file. Files will be deleted longer than this time. Default is no expiration. Format according to ISO 8601 standard. For details, see <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>Expiry date of the output file. Files will be deleted longer than this time. Default is no expiration. Format according to ISO 8601 standard. For details, see <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</p>
                     * @param _expireTime <p>Expiry date of the output file. Files will be deleted longer than this time. Default is no expiration. Format according to ISO 8601 standard. For details, see <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</p>
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
                     * 获取<p>Specify the aspect ratio of the generated image. The input format is W:H.<br>This field is valid in the following scenarios:</p><ul><li>Product image generation scenario. Available values are: 1:1, 3:2, 2:3, 3:4, 4:3, 4:5, 5:4, 16:9, 9:16, 21:9.</li><li>AI image expansion scenario. Available values are: 1:1, 3:2, 2:3, 3:4, 4:3, 4:5, 5:4, 9:16, 16:9, 21:9. It can be used in conjunction with ImageWidth and ImageHeight. The rules are as follows: <ol><li>When only AspectRatio is specified, adaptively adjust based on the original image input.</li><li>When AspectRatio and ImageWidth are specified, ImageHeight is calculated based on both, and vice versa.</li><li>When AspectRatio, ImageWidth, and ImageHeight are specified simultaneously, prioritize using ImageWidth and ImageHeight.</li></ol></li></ul>
                     * @return AspectRatio <p>Specify the aspect ratio of the generated image. The input format is W:H.<br>This field is valid in the following scenarios:</p><ul><li>Product image generation scenario. Available values are: 1:1, 3:2, 2:3, 3:4, 4:3, 4:5, 5:4, 16:9, 9:16, 21:9.</li><li>AI image expansion scenario. Available values are: 1:1, 3:2, 2:3, 3:4, 4:3, 4:5, 5:4, 9:16, 16:9, 21:9. It can be used in conjunction with ImageWidth and ImageHeight. The rules are as follows: <ol><li>When only AspectRatio is specified, adaptively adjust based on the original image input.</li><li>When AspectRatio and ImageWidth are specified, ImageHeight is calculated based on both, and vice versa.</li><li>When AspectRatio, ImageWidth, and ImageHeight are specified simultaneously, prioritize using ImageWidth and ImageHeight.</li></ol></li></ul>
                     * 
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置<p>Specify the aspect ratio of the generated image. The input format is W:H.<br>This field is valid in the following scenarios:</p><ul><li>Product image generation scenario. Available values are: 1:1, 3:2, 2:3, 3:4, 4:3, 4:5, 5:4, 16:9, 9:16, 21:9.</li><li>AI image expansion scenario. Available values are: 1:1, 3:2, 2:3, 3:4, 4:3, 4:5, 5:4, 9:16, 16:9, 21:9. It can be used in conjunction with ImageWidth and ImageHeight. The rules are as follows: <ol><li>When only AspectRatio is specified, adaptively adjust based on the original image input.</li><li>When AspectRatio and ImageWidth are specified, ImageHeight is calculated based on both, and vice versa.</li><li>When AspectRatio, ImageWidth, and ImageHeight are specified simultaneously, prioritize using ImageWidth and ImageHeight.</li></ol></li></ul>
                     * @param _aspectRatio <p>Specify the aspect ratio of the generated image. The input format is W:H.<br>This field is valid in the following scenarios:</p><ul><li>Product image generation scenario. Available values are: 1:1, 3:2, 2:3, 3:4, 4:3, 4:5, 5:4, 16:9, 9:16, 21:9.</li><li>AI image expansion scenario. Available values are: 1:1, 3:2, 2:3, 3:4, 4:3, 4:5, 5:4, 9:16, 16:9, 21:9. It can be used in conjunction with ImageWidth and ImageHeight. The rules are as follows: <ol><li>When only AspectRatio is specified, adaptively adjust based on the original image input.</li><li>When AspectRatio and ImageWidth are specified, ImageHeight is calculated based on both, and vice versa.</li><li>When AspectRatio, ImageWidth, and ImageHeight are specified simultaneously, prioritize using ImageWidth and ImageHeight.</li></ol></li></ul>
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
                     * 获取<p>Output image encoding format parameters. <strong>Valid only for AI clothing change scenarios.</strong></p>
                     * @return EncodeConfig <p>Output image encoding format parameters. <strong>Valid only for AI clothing change scenarios.</strong></p>
                     * 
                     */
                    ImageSceneAigcEncodeConfig GetEncodeConfig() const;

                    /**
                     * 设置<p>Output image encoding format parameters. <strong>Valid only for AI clothing change scenarios.</strong></p>
                     * @param _encodeConfig <p>Output image encoding format parameters. <strong>Valid only for AI clothing change scenarios.</strong></p>
                     * 
                     */
                    void SetEncodeConfig(const ImageSceneAigcEncodeConfig& _encodeConfig);

                    /**
                     * 判断参数 EncodeConfig 是否已赋值
                     * @return EncodeConfig 是否已赋值
                     * 
                     */
                    bool EncodeConfigHasBeenSet() const;

                    /**
                     * 获取<p>Output image width. <strong>Valid only for AI image expansion scenarios.</strong></p>
                     * @return ImageWidth <p>Output image width. <strong>Valid only for AI image expansion scenarios.</strong></p>
                     * 
                     */
                    uint64_t GetImageWidth() const;

                    /**
                     * 设置<p>Output image width. <strong>Valid only for AI image expansion scenarios.</strong></p>
                     * @param _imageWidth <p>Output image width. <strong>Valid only for AI image expansion scenarios.</strong></p>
                     * 
                     */
                    void SetImageWidth(const uint64_t& _imageWidth);

                    /**
                     * 判断参数 ImageWidth 是否已赋值
                     * @return ImageWidth 是否已赋值
                     * 
                     */
                    bool ImageWidthHasBeenSet() const;

                    /**
                     * 获取<p>Output image height, <strong>valid only for AI image expansion scenarios</strong>.</p>
                     * @return ImageHeight <p>Output image height, <strong>valid only for AI image expansion scenarios</strong>.</p>
                     * 
                     */
                    uint64_t GetImageHeight() const;

                    /**
                     * 设置<p>Output image height, <strong>valid only for AI image expansion scenarios</strong>.</p>
                     * @param _imageHeight <p>Output image height, <strong>valid only for AI image expansion scenarios</strong>.</p>
                     * 
                     */
                    void SetImageHeight(const uint64_t& _imageHeight);

                    /**
                     * 判断参数 ImageHeight 是否已赋值
                     * @return ImageHeight 是否已赋值
                     * 
                     */
                    bool ImageHeightHasBeenSet() const;

                    /**
                     * 获取<p>Output resolution. Only valid for change_clothes and change_clothes_under scenarios. Available values: 1K, 2K, 4K.</p>
                     * @return Resolution <p>Output resolution. Only valid for change_clothes and change_clothes_under scenarios. Available values: 1K, 2K, 4K.</p>
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置<p>Output resolution. Only valid for change_clothes and change_clothes_under scenarios. Available values: 1K, 2K, 4K.</p>
                     * @param _resolution <p>Output resolution. Only valid for change_clothes and change_clothes_under scenarios. Available values: 1K, 2K, 4K.</p>
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                private:

                    /**
                     * <p>Storage mode</p><p>Enumeration value:</p><ul><li>Temporary: Temporary storage. The generated video file will not be stored in VOD. You can obtain the temporary access URL from the event notification, with a valid period of 7 days.</li><li>Permanent: Permanent storage. The generated video file will be stored in VOD. You can obtain the FileId from the event notification.</li></ul><p>Default value: Temporary</p>
                     */
                    std::string m_storageMode;
                    bool m_storageModeHasBeenSet;

                    /**
                     * <p>Output filename, up to 64 characters. Default filename is specified by the system.</p>
                     */
                    std::string m_mediaName;
                    bool m_mediaNameHasBeenSet;

                    /**
                     * <p>Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the <a href="/document/product/266/7812">create category</a> API.</p><li>Default value: 0, indicating other categories.</li>
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * <p>Expiry date of the output file. Files will be deleted longer than this time. Default is no expiration. Format according to ISO 8601 standard. For details, see <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>Specify the aspect ratio of the generated image. The input format is W:H.<br>This field is valid in the following scenarios:</p><ul><li>Product image generation scenario. Available values are: 1:1, 3:2, 2:3, 3:4, 4:3, 4:5, 5:4, 16:9, 9:16, 21:9.</li><li>AI image expansion scenario. Available values are: 1:1, 3:2, 2:3, 3:4, 4:3, 4:5, 5:4, 9:16, 16:9, 21:9. It can be used in conjunction with ImageWidth and ImageHeight. The rules are as follows: <ol><li>When only AspectRatio is specified, adaptively adjust based on the original image input.</li><li>When AspectRatio and ImageWidth are specified, ImageHeight is calculated based on both, and vice versa.</li><li>When AspectRatio, ImageWidth, and ImageHeight are specified simultaneously, prioritize using ImageWidth and ImageHeight.</li></ol></li></ul>
                     */
                    std::string m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

                    /**
                     * <p>Output image encoding format parameters. <strong>Valid only for AI clothing change scenarios.</strong></p>
                     */
                    ImageSceneAigcEncodeConfig m_encodeConfig;
                    bool m_encodeConfigHasBeenSet;

                    /**
                     * <p>Output image width. <strong>Valid only for AI image expansion scenarios.</strong></p>
                     */
                    uint64_t m_imageWidth;
                    bool m_imageWidthHasBeenSet;

                    /**
                     * <p>Output image height, <strong>valid only for AI image expansion scenarios</strong>.</p>
                     */
                    uint64_t m_imageHeight;
                    bool m_imageHeightHasBeenSet;

                    /**
                     * <p>Output resolution. Only valid for change_clothes and change_clothes_under scenarios. Available values: 1K, 2K, 4K.</p>
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCIMAGEOUTPUTCONFIG_H_
