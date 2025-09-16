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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_IMAGEINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_IMAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * Image description information.
                */
                class ImageInfo : public AbstractModel
                {
                public:
                    ImageInfo();
                    ~ImageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Image type. Valid values: TCR ( which indicates a Tencent Container Registry (TCR) image), CCR (which indicates a TCR Personal Edition image), PreSet (which indicates a platform preset image), and CUSTOM (which indicates a third-party custom image).
                     * @return ImageType Image type. Valid values: TCR ( which indicates a Tencent Container Registry (TCR) image), CCR (which indicates a TCR Personal Edition image), PreSet (which indicates a platform preset image), and CUSTOM (which indicates a third-party custom image).
                     * 
                     */
                    std::string GetImageType() const;

                    /**
                     * 设置Image type. Valid values: TCR ( which indicates a Tencent Container Registry (TCR) image), CCR (which indicates a TCR Personal Edition image), PreSet (which indicates a platform preset image), and CUSTOM (which indicates a third-party custom image).
                     * @param _imageType Image type. Valid values: TCR ( which indicates a Tencent Container Registry (TCR) image), CCR (which indicates a TCR Personal Edition image), PreSet (which indicates a platform preset image), and CUSTOM (which indicates a third-party custom image).
                     * 
                     */
                    void SetImageType(const std::string& _imageType);

                    /**
                     * 判断参数 ImageType 是否已赋值
                     * @return ImageType 是否已赋值
                     * 
                     */
                    bool ImageTypeHasBeenSet() const;

                    /**
                     * 获取Image address.
                     * @return ImageUrl Image address.
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置Image address.
                     * @param _imageUrl Image address.
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取Region corresponding to the TCR image.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegistryRegion Region corresponding to the TCR image.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegistryRegion() const;

                    /**
                     * 设置Region corresponding to the TCR image.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _registryRegion Region corresponding to the TCR image.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegistryRegion(const std::string& _registryRegion);

                    /**
                     * 判断参数 RegistryRegion 是否已赋值
                     * @return RegistryRegion 是否已赋值
                     * 
                     */
                    bool RegistryRegionHasBeenSet() const;

                    /**
                     * 获取Instance ID corresponding to the TCR image.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegistryId Instance ID corresponding to the TCR image.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置Instance ID corresponding to the TCR image.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _registryId Instance ID corresponding to the TCR image.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取Whether to allow exporting all content.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AllowSaveAllContent Whether to allow exporting all content.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetAllowSaveAllContent() const;

                    /**
                     * 设置Whether to allow exporting all content.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _allowSaveAllContent Whether to allow exporting all content.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAllowSaveAllContent(const bool& _allowSaveAllContent);

                    /**
                     * 判断参数 AllowSaveAllContent 是否已赋值
                     * @return AllowSaveAllContent 是否已赋值
                     * 
                     */
                    bool AllowSaveAllContentHasBeenSet() const;

                    /**
                     * 获取Image name.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageName Image name.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置Image name.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _imageName Image name.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取Whether to support data generation.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SupportDataPipeline Whether to support data generation.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetSupportDataPipeline() const;

                    /**
                     * 设置Whether to support data generation.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _supportDataPipeline Whether to support data generation.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSupportDataPipeline(const bool& _supportDataPipeline);

                    /**
                     * 判断参数 SupportDataPipeline 是否已赋值
                     * @return SupportDataPipeline 是否已赋值
                     * 
                     */
                    bool SupportDataPipelineHasBeenSet() const;

                private:

                    /**
                     * Image type. Valid values: TCR ( which indicates a Tencent Container Registry (TCR) image), CCR (which indicates a TCR Personal Edition image), PreSet (which indicates a platform preset image), and CUSTOM (which indicates a third-party custom image).
                     */
                    std::string m_imageType;
                    bool m_imageTypeHasBeenSet;

                    /**
                     * Image address.
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * Region corresponding to the TCR image.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_registryRegion;
                    bool m_registryRegionHasBeenSet;

                    /**
                     * Instance ID corresponding to the TCR image.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * Whether to allow exporting all content.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_allowSaveAllContent;
                    bool m_allowSaveAllContentHasBeenSet;

                    /**
                     * Image name.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * Whether to support data generation.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_supportDataPipeline;
                    bool m_supportDataPipelineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_IMAGEINFO_H_
