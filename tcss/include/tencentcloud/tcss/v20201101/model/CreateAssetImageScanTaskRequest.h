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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGESCANTASKREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGESCANTASKREQUEST_H_

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
                * CreateAssetImageScanTask request structure.
                */
                class CreateAssetImageScanTaskRequest : public AbstractModel
                {
                public:
                    CreateAssetImageScanTaskRequest();
                    ~CreateAssetImageScanTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether to scan all images.
                     * @return All Whether to scan all images.
                     * @deprecated
                     */
                    bool GetAll() const;

                    /**
                     * 设置Whether to scan all images.
                     * @param _all Whether to scan all images.
                     * @deprecated
                     */
                    void SetAll(const bool& _all);

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     * @deprecated
                     */
                    bool AllHasBeenSet() const;

                    /**
                     * 获取List of images to be scanned.
                     * @return Images List of images to be scanned.
                     * 
                     */
                    std::vector<std::string> GetImages() const;

                    /**
                     * 设置List of images to be scanned.
                     * @param _images List of images to be scanned.
                     * 
                     */
                    void SetImages(const std::vector<std::string>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取Scan for vulnerabilities.
                     * @return ScanVul Scan for vulnerabilities.
                     * 
                     */
                    bool GetScanVul() const;

                    /**
                     * 设置Scan for vulnerabilities.
                     * @param _scanVul Scan for vulnerabilities.
                     * 
                     */
                    void SetScanVul(const bool& _scanVul);

                    /**
                     * 判断参数 ScanVul 是否已赋值
                     * @return ScanVul 是否已赋值
                     * 
                     */
                    bool ScanVulHasBeenSet() const;

                    /**
                     * 获取Scan for trojans.
                     * @return ScanVirus Scan for trojans.
                     * 
                     */
                    bool GetScanVirus() const;

                    /**
                     * 设置Scan for trojans.
                     * @param _scanVirus Scan for trojans.
                     * 
                     */
                    void SetScanVirus(const bool& _scanVirus);

                    /**
                     * 判断参数 ScanVirus 是否已赋值
                     * @return ScanVirus 是否已赋值
                     * 
                     */
                    bool ScanVirusHasBeenSet() const;

                    /**
                     * 获取Scan for risks.
                     * @return ScanRisk Scan for risks.
                     * 
                     */
                    bool GetScanRisk() const;

                    /**
                     * 设置Scan for risks.
                     * @param _scanRisk Scan for risks.
                     * 
                     */
                    void SetScanRisk(const bool& _scanRisk);

                    /**
                     * 判断参数 ScanRisk 是否已赋值
                     * @return ScanRisk 是否已赋值
                     * 
                     */
                    bool ScanRiskHasBeenSet() const;

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
                     * 获取Specified image IDs to be excluded
                     * @return ExcludeImageIds Specified image IDs to be excluded
                     * 
                     */
                    std::vector<std::string> GetExcludeImageIds() const;

                    /**
                     * 设置Specified image IDs to be excluded
                     * @param _excludeImageIds Specified image IDs to be excluded
                     * 
                     */
                    void SetExcludeImageIds(const std::vector<std::string>& _excludeImageIds);

                    /**
                     * 判断参数 ExcludeImageIds 是否已赋值
                     * @return ExcludeImageIds 是否已赋值
                     * 
                     */
                    bool ExcludeImageIdsHasBeenSet() const;

                private:

                    /**
                     * Whether to scan all images.
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * List of images to be scanned.
                     */
                    std::vector<std::string> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * Scan for vulnerabilities.
                     */
                    bool m_scanVul;
                    bool m_scanVulHasBeenSet;

                    /**
                     * Scan for trojans.
                     */
                    bool m_scanVirus;
                    bool m_scanVirusHasBeenSet;

                    /**
                     * Scan for risks.
                     */
                    bool m_scanRisk;
                    bool m_scanRiskHasBeenSet;

                    /**
                     * Filter
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Specified image IDs to be excluded
                     */
                    std::vector<std::string> m_excludeImageIds;
                    bool m_excludeImageIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGESCANTASKREQUEST_H_
