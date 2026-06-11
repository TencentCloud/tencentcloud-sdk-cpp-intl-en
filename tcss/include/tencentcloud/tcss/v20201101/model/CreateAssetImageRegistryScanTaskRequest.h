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
                     * 获取<p>Whether to scan all images.</p>
                     * @return All <p>Whether to scan all images.</p>
                     * 
                     */
                    bool GetAll() const;

                    /**
                     * 设置<p>Whether to scan all images.</p>
                     * @param _all <p>Whether to scan all images.</p>
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
                     * 获取<p>List of images to be scanned.</p>
                     * @return Images <p>List of images to be scanned.</p>
                     * 
                     */
                    std::vector<ImageInfo> GetImages() const;

                    /**
                     * 设置<p>List of images to be scanned.</p>
                     * @param _images <p>List of images to be scanned.</p>
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
                     * 获取<p>Scan type array.</p>
                     * @return ScanType <p>Scan type array.</p>
                     * 
                     */
                    std::vector<std::string> GetScanType() const;

                    /**
                     * 设置<p>Scan type array.</p>
                     * @param _scanType <p>Scan type array.</p>
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
                     * 获取<p>List of images to be scanned.</p>
                     * @return Id <p>List of images to be scanned.</p>
                     * 
                     */
                    std::vector<uint64_t> GetId() const;

                    /**
                     * 设置<p>List of images to be scanned.</p>
                     * @param _id <p>List of images to be scanned.</p>
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
                     * 获取<p>Filter conditions.</p>
                     * @return Filters <p>Filter conditions.</p>
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置<p>Filter conditions.</p>
                     * @param _filters <p>Filter conditions.</p>
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
                     * 获取<p>List of images that do not need to be scanned, used in conjunction with Filters.</p>
                     * @return ExcludeImageList <p>List of images that do not need to be scanned, used in conjunction with Filters.</p>
                     * 
                     */
                    std::vector<uint64_t> GetExcludeImageList() const;

                    /**
                     * 设置<p>List of images that do not need to be scanned, used in conjunction with Filters.</p>
                     * @param _excludeImageList <p>List of images that do not need to be scanned, used in conjunction with Filters.</p>
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
                     * 获取<p>Whether to scan only the latest version of the image in each repository, used in conjunction with Filters.</p>
                     * @return OnlyScanLatest <p>Whether to scan only the latest version of the image in each repository, used in conjunction with Filters.</p>
                     * 
                     */
                    bool GetOnlyScanLatest() const;

                    /**
                     * 设置<p>Whether to scan only the latest version of the image in each repository, used in conjunction with Filters.</p>
                     * @param _onlyScanLatest <p>Whether to scan only the latest version of the image in each repository, used in conjunction with Filters.</p>
                     * 
                     */
                    void SetOnlyScanLatest(const bool& _onlyScanLatest);

                    /**
                     * 判断参数 OnlyScanLatest 是否已赋值
                     * @return OnlyScanLatest 是否已赋值
                     * 
                     */
                    bool OnlyScanLatestHasBeenSet() const;

                    /**
                     * 获取<p>Task timeout duration.</p><p>Unit: seconds.</p>
                     * @return Timeout <p>Task timeout duration.</p><p>Unit: seconds.</p>
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置<p>Task timeout duration.</p><p>Unit: seconds.</p>
                     * @param _timeout <p>Task timeout duration.</p><p>Unit: seconds.</p>
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                private:

                    /**
                     * <p>Whether to scan all images.</p>
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * <p>List of images to be scanned.</p>
                     */
                    std::vector<ImageInfo> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * <p>Scan type array.</p>
                     */
                    std::vector<std::string> m_scanType;
                    bool m_scanTypeHasBeenSet;

                    /**
                     * <p>List of images to be scanned.</p>
                     */
                    std::vector<uint64_t> m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Filter conditions.</p>
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>List of images that do not need to be scanned, used in conjunction with Filters.</p>
                     */
                    std::vector<uint64_t> m_excludeImageList;
                    bool m_excludeImageListHasBeenSet;

                    /**
                     * <p>Whether to scan only the latest version of the image in each repository, used in conjunction with Filters.</p>
                     */
                    bool m_onlyScanLatest;
                    bool m_onlyScanLatestHasBeenSet;

                    /**
                     * <p>Task timeout duration.</p><p>Unit: seconds.</p>
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGEREGISTRYSCANTASKREQUEST_H_
