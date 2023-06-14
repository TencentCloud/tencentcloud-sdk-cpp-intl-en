/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGEREGISTRYSCANTASKREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGEREGISTRYSCANTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ImageInfo.h>
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
                * CreateAssetImageRegistryScanTask request structure.
                */
                class CreateAssetImageRegistryScanTaskRequest : public AbstractModel
                {
                public:
                    CreateAssetImageRegistryScanTaskRequest();
                    ~CreateAssetImageRegistryScanTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether to scan all images
                     * @return All Whether to scan all images
                     * 
                     */
                    bool GetAll() const;

                    /**
                     * 设置Whether to scan all images
                     * @param _all Whether to scan all images
                     * 
                     */
                    void SetAll(const bool& _all);

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     * 
                     */
                    bool AllHasBeenSet() const;

                    /**
                     * 获取List of scanned images
                     * @return Images List of scanned images
                     * 
                     */
                    std::vector<ImageInfo> GetImages() const;

                    /**
                     * 设置List of scanned images
                     * @param _images List of scanned images
                     * 
                     */
                    void SetImages(const std::vector<ImageInfo>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取Array of scan types
                     * @return ScanType Array of scan types
                     * 
                     */
                    std::vector<std::string> GetScanType() const;

                    /**
                     * 设置Array of scan types
                     * @param _scanType Array of scan types
                     * 
                     */
                    void SetScanType(const std::vector<std::string>& _scanType);

                    /**
                     * 判断参数 ScanType 是否已赋值
                     * @return ScanType 是否已赋值
                     * 
                     */
                    bool ScanTypeHasBeenSet() const;

                    /**
                     * 获取List of scanned images
                     * @return Id List of scanned images
                     * 
                     */
                    std::vector<uint64_t> GetId() const;

                    /**
                     * 设置List of scanned images
                     * @param _id List of scanned images
                     * 
                     */
                    void SetId(const std::vector<uint64_t>& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Filter
                     * @return Filters Filter
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置Filter
                     * @param _filters Filter
                     * 
                     */
                    void SetFilters(const std::vector<AssetFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取List of images not to be scanned, which is used together with `Filters`.
                     * @return ExcludeImageList List of images not to be scanned, which is used together with `Filters`.
                     * 
                     */
                    std::vector<uint64_t> GetExcludeImageList() const;

                    /**
                     * 设置List of images not to be scanned, which is used together with `Filters`.
                     * @param _excludeImageList List of images not to be scanned, which is used together with `Filters`.
                     * 
                     */
                    void SetExcludeImageList(const std::vector<uint64_t>& _excludeImageList);

                    /**
                     * 判断参数 ExcludeImageList 是否已赋值
                     * @return ExcludeImageList 是否已赋值
                     * 
                     */
                    bool ExcludeImageListHasBeenSet() const;

                    /**
                     * 获取Whether to scan only the latest repository images, which is used together with `Filters`.
                     * @return OnlyScanLatest Whether to scan only the latest repository images, which is used together with `Filters`.
                     * 
                     */
                    bool GetOnlyScanLatest() const;

                    /**
                     * 设置Whether to scan only the latest repository images, which is used together with `Filters`.
                     * @param _onlyScanLatest Whether to scan only the latest repository images, which is used together with `Filters`.
                     * 
                     */
                    void SetOnlyScanLatest(const bool& _onlyScanLatest);

                    /**
                     * 判断参数 OnlyScanLatest 是否已赋值
                     * @return OnlyScanLatest 是否已赋值
                     * 
                     */
                    bool OnlyScanLatestHasBeenSet() const;

                private:

                    /**
                     * Whether to scan all images
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * List of scanned images
                     */
                    std::vector<ImageInfo> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * Array of scan types
                     */
                    std::vector<std::string> m_scanType;
                    bool m_scanTypeHasBeenSet;

                    /**
                     * List of scanned images
                     */
                    std::vector<uint64_t> m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Filter
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * List of images not to be scanned, which is used together with `Filters`.
                     */
                    std::vector<uint64_t> m_excludeImageList;
                    bool m_excludeImageListHasBeenSet;

                    /**
                     * Whether to scan only the latest repository images, which is used together with `Filters`.
                     */
                    bool m_onlyScanLatest;
                    bool m_onlyScanLatestHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGEREGISTRYSCANTASKREQUEST_H_
