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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYIMAGEAUTHORIZEDREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYIMAGEAUTHORIZEDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/AssetFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * ModifyImageAuthorized request structure.
                */
                class ModifyImageAuthorizedRequest : public AbstractModel
                {
                public:
                    ModifyImageAuthorizedRequest();
                    ~ModifyImageAuthorizedRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether to license all local images, which has a higher priority than licensing by local image ID. When it is `true`, `UpdatedLocalImageCnt` should be greater than `0`.
                     * @return AllLocalImages Whether to license all local images, which has a higher priority than licensing by local image ID. When it is `true`, `UpdatedLocalImageCnt` should be greater than `0`.
                     * 
                     */
                    bool GetAllLocalImages() const;

                    /**
                     * 设置Whether to license all local images, which has a higher priority than licensing by local image ID. When it is `true`, `UpdatedLocalImageCnt` should be greater than `0`.
                     * @param _allLocalImages Whether to license all local images, which has a higher priority than licensing by local image ID. When it is `true`, `UpdatedLocalImageCnt` should be greater than `0`.
                     * 
                     */
                    void SetAllLocalImages(const bool& _allLocalImages);

                    /**
                     * 判断参数 AllLocalImages 是否已赋值
                     * @return AllLocalImages 是否已赋值
                     * 
                     */
                    bool AllLocalImagesHasBeenSet() const;

                    /**
                     * 获取Whether to license all repository images, with a higher priority than licensing by image ID. When it is `true`, `UpdatedRegistryImageCnt` should be greater than `0`.
                     * @return AllRegistryImages Whether to license all repository images, with a higher priority than licensing by image ID. When it is `true`, `UpdatedRegistryImageCnt` should be greater than `0`.
                     * 
                     */
                    bool GetAllRegistryImages() const;

                    /**
                     * 设置Whether to license all repository images, with a higher priority than licensing by image ID. When it is `true`, `UpdatedRegistryImageCnt` should be greater than `0`.
                     * @param _allRegistryImages Whether to license all repository images, with a higher priority than licensing by image ID. When it is `true`, `UpdatedRegistryImageCnt` should be greater than `0`.
                     * 
                     */
                    void SetAllRegistryImages(const bool& _allRegistryImages);

                    /**
                     * 判断参数 AllRegistryImages 是否已赋值
                     * @return AllRegistryImages 是否已赋值
                     * 
                     */
                    bool AllRegistryImagesHasBeenSet() const;

                    /**
                     * 获取Specified number of local images to be licensed, with the highest priority. Any difference between this number and the actual number will be randomly ignored.
                     * @return UpdatedLocalImageCnt Specified number of local images to be licensed, with the highest priority. Any difference between this number and the actual number will be randomly ignored.
                     * 
                     */
                    uint64_t GetUpdatedLocalImageCnt() const;

                    /**
                     * 设置Specified number of local images to be licensed, with the highest priority. Any difference between this number and the actual number will be randomly ignored.
                     * @param _updatedLocalImageCnt Specified number of local images to be licensed, with the highest priority. Any difference between this number and the actual number will be randomly ignored.
                     * 
                     */
                    void SetUpdatedLocalImageCnt(const uint64_t& _updatedLocalImageCnt);

                    /**
                     * 判断参数 UpdatedLocalImageCnt 是否已赋值
                     * @return UpdatedLocalImageCnt 是否已赋值
                     * 
                     */
                    bool UpdatedLocalImageCntHasBeenSet() const;

                    /**
                     * 获取Specified number of repository images to be licensed, with the highest priority. Any difference between this number and the actual number will be randomly ignored.
                     * @return UpdatedRegistryImageCnt Specified number of repository images to be licensed, with the highest priority. Any difference between this number and the actual number will be randomly ignored.
                     * 
                     */
                    uint64_t GetUpdatedRegistryImageCnt() const;

                    /**
                     * 设置Specified number of repository images to be licensed, with the highest priority. Any difference between this number and the actual number will be randomly ignored.
                     * @param _updatedRegistryImageCnt Specified number of repository images to be licensed, with the highest priority. Any difference between this number and the actual number will be randomly ignored.
                     * 
                     */
                    void SetUpdatedRegistryImageCnt(const uint64_t& _updatedRegistryImageCnt);

                    /**
                     * 判断参数 UpdatedRegistryImageCnt 是否已赋值
                     * @return UpdatedRegistryImageCnt 是否已赋值
                     * 
                     */
                    bool UpdatedRegistryImageCntHasBeenSet() const;

                    /**
                     * 获取Licensing by eligible local images. Valid values of local image source: `ASSETIMAGE` (local image list); `IMAGEALL` (local image sync). This parameter is required when `AllLocalImages` is `false`, `LocalImageIds` is empty, and `UpdatedLocalImageCnt` is greater than `0`.
                     * @return ImageSourceType Licensing by eligible local images. Valid values of local image source: `ASSETIMAGE` (local image list); `IMAGEALL` (local image sync). This parameter is required when `AllLocalImages` is `false`, `LocalImageIds` is empty, and `UpdatedLocalImageCnt` is greater than `0`.
                     * 
                     */
                    std::string GetImageSourceType() const;

                    /**
                     * 设置Licensing by eligible local images. Valid values of local image source: `ASSETIMAGE` (local image list); `IMAGEALL` (local image sync). This parameter is required when `AllLocalImages` is `false`, `LocalImageIds` is empty, and `UpdatedLocalImageCnt` is greater than `0`.
                     * @param _imageSourceType Licensing by eligible local images. Valid values of local image source: `ASSETIMAGE` (local image list); `IMAGEALL` (local image sync). This parameter is required when `AllLocalImages` is `false`, `LocalImageIds` is empty, and `UpdatedLocalImageCnt` is greater than `0`.
                     * 
                     */
                    void SetImageSourceType(const std::string& _imageSourceType);

                    /**
                     * 判断参数 ImageSourceType 是否已赋值
                     * @return ImageSourceType 是否已赋值
                     * 
                     */
                    bool ImageSourceTypeHasBeenSet() const;

                    /**
                     * 获取Licensing by eligible local images. This parameter is required when `AllLocalImages` is `false`, `LocalImageIds` is empty, and `UpdatedLocalImageCnt` is greater than `0`.
                     * @return LocalImageFilter Licensing by eligible local images. This parameter is required when `AllLocalImages` is `false`, `LocalImageIds` is empty, and `UpdatedLocalImageCnt` is greater than `0`.
                     * 
                     */
                    std::vector<AssetFilters> GetLocalImageFilter() const;

                    /**
                     * 设置Licensing by eligible local images. This parameter is required when `AllLocalImages` is `false`, `LocalImageIds` is empty, and `UpdatedLocalImageCnt` is greater than `0`.
                     * @param _localImageFilter Licensing by eligible local images. This parameter is required when `AllLocalImages` is `false`, `LocalImageIds` is empty, and `UpdatedLocalImageCnt` is greater than `0`.
                     * 
                     */
                    void SetLocalImageFilter(const std::vector<AssetFilters>& _localImageFilter);

                    /**
                     * 判断参数 LocalImageFilter 是否已赋值
                     * @return LocalImageFilter 是否已赋值
                     * 
                     */
                    bool LocalImageFilterHasBeenSet() const;

                    /**
                     * 获取Licensing by eligible repository images. This parameter is required when `AllRegistryImages` is `false`, `RegistryImageIds` is empty, and `UpdatedRegistryImageCnt` is greater than `0`.
                     * @return RegistryImageFilter Licensing by eligible repository images. This parameter is required when `AllRegistryImages` is `false`, `RegistryImageIds` is empty, and `UpdatedRegistryImageCnt` is greater than `0`.
                     * 
                     */
                    std::vector<AssetFilters> GetRegistryImageFilter() const;

                    /**
                     * 设置Licensing by eligible repository images. This parameter is required when `AllRegistryImages` is `false`, `RegistryImageIds` is empty, and `UpdatedRegistryImageCnt` is greater than `0`.
                     * @param _registryImageFilter Licensing by eligible repository images. This parameter is required when `AllRegistryImages` is `false`, `RegistryImageIds` is empty, and `UpdatedRegistryImageCnt` is greater than `0`.
                     * 
                     */
                    void SetRegistryImageFilter(const std::vector<AssetFilters>& _registryImageFilter);

                    /**
                     * 判断参数 RegistryImageFilter 是否已赋值
                     * @return RegistryImageFilter 是否已赋值
                     * 
                     */
                    bool RegistryImageFilterHasBeenSet() const;

                    /**
                     * 获取Licensing by eligible images, excluding specified local image IDs
                     * @return ExcludeLocalImageIds Licensing by eligible images, excluding specified local image IDs
                     * 
                     */
                    std::vector<std::string> GetExcludeLocalImageIds() const;

                    /**
                     * 设置Licensing by eligible images, excluding specified local image IDs
                     * @param _excludeLocalImageIds Licensing by eligible images, excluding specified local image IDs
                     * 
                     */
                    void SetExcludeLocalImageIds(const std::vector<std::string>& _excludeLocalImageIds);

                    /**
                     * 判断参数 ExcludeLocalImageIds 是否已赋值
                     * @return ExcludeLocalImageIds 是否已赋值
                     * 
                     */
                    bool ExcludeLocalImageIdsHasBeenSet() const;

                    /**
                     * 获取Licensing by eligible images, excluding specified repository image IDs
                     * @return ExcludeRegistryImageIds Licensing by eligible images, excluding specified repository image IDs
                     * 
                     */
                    std::vector<std::string> GetExcludeRegistryImageIds() const;

                    /**
                     * 设置Licensing by eligible images, excluding specified repository image IDs
                     * @param _excludeRegistryImageIds Licensing by eligible images, excluding specified repository image IDs
                     * 
                     */
                    void SetExcludeRegistryImageIds(const std::vector<std::string>& _excludeRegistryImageIds);

                    /**
                     * 判断参数 ExcludeRegistryImageIds 是否已赋值
                     * @return ExcludeRegistryImageIds 是否已赋值
                     * 
                     */
                    bool ExcludeRegistryImageIdsHasBeenSet() const;

                    /**
                     * 获取Licensing by local image ID. This parameter has a higher priority than licensing by eligible images. It is required when `AllLocalImages` is `false`, `LocalImageFilter` is empty, and `UpdatedLocalImageCnt` is greater than `0`.
                     * @return LocalImageIds Licensing by local image ID. This parameter has a higher priority than licensing by eligible images. It is required when `AllLocalImages` is `false`, `LocalImageFilter` is empty, and `UpdatedLocalImageCnt` is greater than `0`.
                     * 
                     */
                    std::vector<std::string> GetLocalImageIds() const;

                    /**
                     * 设置Licensing by local image ID. This parameter has a higher priority than licensing by eligible images. It is required when `AllLocalImages` is `false`, `LocalImageFilter` is empty, and `UpdatedLocalImageCnt` is greater than `0`.
                     * @param _localImageIds Licensing by local image ID. This parameter has a higher priority than licensing by eligible images. It is required when `AllLocalImages` is `false`, `LocalImageFilter` is empty, and `UpdatedLocalImageCnt` is greater than `0`.
                     * 
                     */
                    void SetLocalImageIds(const std::vector<std::string>& _localImageIds);

                    /**
                     * 判断参数 LocalImageIds 是否已赋值
                     * @return LocalImageIds 是否已赋值
                     * 
                     */
                    bool LocalImageIdsHasBeenSet() const;

                    /**
                     * 获取Licensing by repository image ID. This parameter has a higher priority than licensing by eligible images. It is required when `AllRegistryImages` is `false`, `RegistryImageFilter` is empty, and `UpdatedRegistryImageCnt` is greater than `0`.
                     * @return RegistryImageIds Licensing by repository image ID. This parameter has a higher priority than licensing by eligible images. It is required when `AllRegistryImages` is `false`, `RegistryImageFilter` is empty, and `UpdatedRegistryImageCnt` is greater than `0`.
                     * 
                     */
                    std::vector<std::string> GetRegistryImageIds() const;

                    /**
                     * 设置Licensing by repository image ID. This parameter has a higher priority than licensing by eligible images. It is required when `AllRegistryImages` is `false`, `RegistryImageFilter` is empty, and `UpdatedRegistryImageCnt` is greater than `0`.
                     * @param _registryImageIds Licensing by repository image ID. This parameter has a higher priority than licensing by eligible images. It is required when `AllRegistryImages` is `false`, `RegistryImageFilter` is empty, and `UpdatedRegistryImageCnt` is greater than `0`.
                     * 
                     */
                    void SetRegistryImageIds(const std::vector<std::string>& _registryImageIds);

                    /**
                     * 判断参数 RegistryImageIds 是否已赋值
                     * @return RegistryImageIds 是否已赋值
                     * 
                     */
                    bool RegistryImageIdsHasBeenSet() const;

                    /**
                     * 获取Whether to only include latest images. This parameter is required for repository images when `RegistryImageFilter` is not empty and `UpdatedRegistryImageCnt` is greater than `0`.
                     * @return OnlyShowLatest Whether to only include latest images. This parameter is required for repository images when `RegistryImageFilter` is not empty and `UpdatedRegistryImageCnt` is greater than `0`.
                     * 
                     */
                    bool GetOnlyShowLatest() const;

                    /**
                     * 设置Whether to only include latest images. This parameter is required for repository images when `RegistryImageFilter` is not empty and `UpdatedRegistryImageCnt` is greater than `0`.
                     * @param _onlyShowLatest Whether to only include latest images. This parameter is required for repository images when `RegistryImageFilter` is not empty and `UpdatedRegistryImageCnt` is greater than `0`.
                     * 
                     */
                    void SetOnlyShowLatest(const bool& _onlyShowLatest);

                    /**
                     * 判断参数 OnlyShowLatest 是否已赋值
                     * @return OnlyShowLatest 是否已赋值
                     * 
                     */
                    bool OnlyShowLatestHasBeenSet() const;

                private:

                    /**
                     * Whether to license all local images, which has a higher priority than licensing by local image ID. When it is `true`, `UpdatedLocalImageCnt` should be greater than `0`.
                     */
                    bool m_allLocalImages;
                    bool m_allLocalImagesHasBeenSet;

                    /**
                     * Whether to license all repository images, with a higher priority than licensing by image ID. When it is `true`, `UpdatedRegistryImageCnt` should be greater than `0`.
                     */
                    bool m_allRegistryImages;
                    bool m_allRegistryImagesHasBeenSet;

                    /**
                     * Specified number of local images to be licensed, with the highest priority. Any difference between this number and the actual number will be randomly ignored.
                     */
                    uint64_t m_updatedLocalImageCnt;
                    bool m_updatedLocalImageCntHasBeenSet;

                    /**
                     * Specified number of repository images to be licensed, with the highest priority. Any difference between this number and the actual number will be randomly ignored.
                     */
                    uint64_t m_updatedRegistryImageCnt;
                    bool m_updatedRegistryImageCntHasBeenSet;

                    /**
                     * Licensing by eligible local images. Valid values of local image source: `ASSETIMAGE` (local image list); `IMAGEALL` (local image sync). This parameter is required when `AllLocalImages` is `false`, `LocalImageIds` is empty, and `UpdatedLocalImageCnt` is greater than `0`.
                     */
                    std::string m_imageSourceType;
                    bool m_imageSourceTypeHasBeenSet;

                    /**
                     * Licensing by eligible local images. This parameter is required when `AllLocalImages` is `false`, `LocalImageIds` is empty, and `UpdatedLocalImageCnt` is greater than `0`.
                     */
                    std::vector<AssetFilters> m_localImageFilter;
                    bool m_localImageFilterHasBeenSet;

                    /**
                     * Licensing by eligible repository images. This parameter is required when `AllRegistryImages` is `false`, `RegistryImageIds` is empty, and `UpdatedRegistryImageCnt` is greater than `0`.
                     */
                    std::vector<AssetFilters> m_registryImageFilter;
                    bool m_registryImageFilterHasBeenSet;

                    /**
                     * Licensing by eligible images, excluding specified local image IDs
                     */
                    std::vector<std::string> m_excludeLocalImageIds;
                    bool m_excludeLocalImageIdsHasBeenSet;

                    /**
                     * Licensing by eligible images, excluding specified repository image IDs
                     */
                    std::vector<std::string> m_excludeRegistryImageIds;
                    bool m_excludeRegistryImageIdsHasBeenSet;

                    /**
                     * Licensing by local image ID. This parameter has a higher priority than licensing by eligible images. It is required when `AllLocalImages` is `false`, `LocalImageFilter` is empty, and `UpdatedLocalImageCnt` is greater than `0`.
                     */
                    std::vector<std::string> m_localImageIds;
                    bool m_localImageIdsHasBeenSet;

                    /**
                     * Licensing by repository image ID. This parameter has a higher priority than licensing by eligible images. It is required when `AllRegistryImages` is `false`, `RegistryImageFilter` is empty, and `UpdatedRegistryImageCnt` is greater than `0`.
                     */
                    std::vector<std::string> m_registryImageIds;
                    bool m_registryImageIdsHasBeenSet;

                    /**
                     * Whether to only include latest images. This parameter is required for repository images when `RegistryImageFilter` is not empty and `UpdatedRegistryImageCnt` is greater than `0`.
                     */
                    bool m_onlyShowLatest;
                    bool m_onlyShowLatestHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYIMAGEAUTHORIZEDREQUEST_H_
